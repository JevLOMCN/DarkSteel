// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 92

// <lambda_invoker_cdecl> @ 142301120

void __cdecl `FAsyncPackage2::CreateLinker'::__l5::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// operator()<TTuple<FPackageId,FAsyncPackage2_*>_> @ 142301310

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>
          (void *this,TTuple<FPackageId,FAsyncPackage2_*> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  FAsyncLoadEventSpec **ppFVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  FEventLoadNode2 *pFVar8;
  int iVar9;
  byte bVar10;
  uint local_res10;
  FEventLoadNode2_u_16 local_res18;
  FEventLoadNode2 *local_res20;
  FEventLoadNode2_u_16 local_f8;
  FEventLoadNode2 *local_f0;
  code *local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  FEventLoadNode2 *local_c8;
  undefined ***local_c0;
  code *local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  FEventLoadNode2 *local_98;
  undefined ***local_90;
  FEventLoadNode2 *local_88;
  FEventLoadNode2_u_16 local_80;
  FEventLoadNode2 *local_78;
  FEventLoadNode2 *local_70;
  FEventLoadNode2 *local_68;
  FEventLoadNode2_u_16 local_60;
  FEventLoadNode2 *local_58;
  FEventLoadNode2 *local_50 [2];
  uint uVar11;
  
  lVar2 = *(longlong *)&param_1->field_0x8;
  if (lVar2 != 0) {
    uVar11 = 0;
    do {
      local_c8 = TArrayView<FEventLoadNode2,int>::operator[]
                           ((TArrayView<FEventLoadNode2,int> *)(lVar2 + 0x1d0),uVar11);
      local_d0 = *(undefined8 *)((longlong)this + 8);
      local_c0 = (undefined ***)0x0;
      uVar1 = local_c8->DependenciesCount;
      local_d8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`8'::<lambda_1>,0,0>
                  ::_vftable_;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,void,FEventLoadNode2_*>
                 ::Call;
      if (uVar1 == 1) {
        local_res18 = local_c8->field2_0x10;
        UE::Core::Private::Function::CheckCallable
                  (UE::Core::Private::Function::
                   TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,void,FEventLoadNode2_*>
                   ::Call);
        pcVar3 = local_e8;
        pppuVar7 = &local_d8;
        if (local_c0 != (undefined ***)0x0) {
          pppuVar7 = local_c0;
        }
        puVar6 = (undefined8 *)(*(code *)(*pppuVar7)[1])();
        if (pcVar3 == UE::Core::Private::Function::
                      TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,void,FEventLoadNode2_*>
                      ::Call) {
          local_80 = local_res18;
          local_88 = (FEventLoadNode2 *)puVar6[1];
          TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
          ::EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*>
                    ((TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
                      *)*puVar6,&local_80.SingleDependent,&local_88);
        }
        else {
          (*pcVar3)(puVar6,&local_res18);
        }
      }
      else if (uVar1 != 0) {
        pFVar8 = (local_c8->field2_0x10).SingleDependent;
        ppFVar4 = &pFVar8->Spec;
        for (; pFVar8 < (FEventLoadNode2 *)(ppFVar4 + uVar1);
            pFVar8 = (FEventLoadNode2 *)&pFVar8->Package) {
          local_res20 = (FEventLoadNode2 *)pFVar8->Spec;
          UE::Core::Private::Function::CheckCallable(local_e8);
          pcVar3 = local_e8;
          pppuVar7 = &local_d8;
          if (local_c0 != (undefined ***)0x0) {
            pppuVar7 = local_c0;
          }
          puVar6 = (undefined8 *)(*(code *)(*pppuVar7)[1])();
          if (pcVar3 == UE::Core::Private::Function::
                        TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,void,FEventLoadNode2_*>
                        ::Call) {
            local_70 = local_res20;
            local_78 = (FEventLoadNode2 *)puVar6[1];
            TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
            ::EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*>
                      ((TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
                        *)*puVar6,&local_70,&local_78);
          }
          else {
            (*pcVar3)(puVar6,&local_res20);
          }
        }
      }
      if (local_e8 != (code *)0x0) {
        pppuVar7 = &local_d8;
        if (local_c0 != (undefined ***)0x0) {
          pppuVar7 = local_c0;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      bVar10 = (char)uVar11 + 1;
      uVar11 = (uint)bVar10;
    } while (bVar10 < 7);
    local_res10 = 0;
    if (0 < *(int *)(lVar2 + 0x288)) {
      iVar9 = 0;
      do {
        uVar11 = 0;
        do {
          if ((*(uint *)(lVar2 + 0x288) <= local_res10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ExportBundleIndex < uint32(Data.TotalExportBundleCount)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                 ,0x25bb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_98 = TArrayView<FEventLoadNode2,int>::operator[]
                               ((TArrayView<FEventLoadNode2,int> *)(lVar2 + 0x268),uVar11 + iVar9);
          local_90 = (undefined ***)0x0;
          local_a8 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`23'::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::`14'::<lambda_2>,0,0>
                      ::_vftable_;
          local_a0 = *(undefined8 *)((longlong)this + 8);
          uVar1 = local_98->DependenciesCount;
          local_b8 = UE::Core::Private::Function::
                     TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,void,FEventLoadNode2_*>
                     ::Call;
          if (uVar1 == 1) {
            local_f8 = local_98->field2_0x10;
            UE::Core::Private::Function::CheckCallable
                      (UE::Core::Private::Function::
                       TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,void,FEventLoadNode2_*>
                       ::Call);
            pcVar3 = local_b8;
            pppuVar7 = &local_a8;
            if (local_90 != (undefined ***)0x0) {
              pppuVar7 = local_90;
            }
            puVar6 = (undefined8 *)(*(code *)(*pppuVar7)[1])();
            if (pcVar3 == UE::Core::Private::Function::
                          TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,void,FEventLoadNode2_*>
                          ::Call) {
              local_60 = local_f8;
              local_68 = (FEventLoadNode2 *)puVar6[1];
              TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
              ::EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*>
                        ((TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
                          *)*puVar6,&local_60.SingleDependent,&local_68);
            }
            else {
              (*pcVar3)(puVar6,&local_f8);
            }
          }
          else if (uVar1 != 0) {
            pFVar8 = (local_98->field2_0x10).SingleDependent;
            ppFVar4 = &pFVar8->Spec;
            for (; pFVar8 < (FEventLoadNode2 *)(ppFVar4 + uVar1);
                pFVar8 = (FEventLoadNode2 *)&pFVar8->Package) {
              local_f0 = (FEventLoadNode2 *)pFVar8->Spec;
              UE::Core::Private::Function::CheckCallable(local_b8);
              pcVar3 = local_b8;
              pppuVar7 = &local_a8;
              if (local_90 != (undefined ***)0x0) {
                pppuVar7 = local_90;
              }
              puVar6 = (undefined8 *)(*(code *)(*pppuVar7)[1])();
              if (pcVar3 == UE::Core::Private::Function::
                            TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,void,FEventLoadNode2_*>
                            ::Call) {
                local_50[0] = local_f0;
                local_58 = (FEventLoadNode2 *)puVar6[1];
                TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
                ::EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*>
                          ((TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
                            *)*puVar6,local_50,&local_58);
              }
              else {
                (*pcVar3)(puVar6,&local_f0);
              }
            }
          }
          if (local_b8 != (code *)0x0) {
            pppuVar7 = &local_a8;
            if (local_90 != (undefined ***)0x0) {
              pppuVar7 = local_90;
            }
            (*(code *)(*pppuVar7)[2])();
          }
          bVar10 = (char)uVar11 + 1;
          uVar11 = (uint)bVar10;
        } while (bVar10 < 3);
        local_res10 = local_res10 + 1;
        iVar9 = iVar9 + 3;
      } while ((int)local_res10 < *(int *)(lVar2 + 0x288));
    }
  }
  return;
}

// CastEventDrivenIndexToObject<UClass> @ 1423026d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UClass * __thiscall
FAsyncPackage2::CastEventDrivenIndexToObject<UClass>
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,FPackageObjectIndex param_2,
          bool param_3)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UClass *)EventDrivenIndexToObject(this,param_1,param_2,param_3);
  if (pUVar2 == (UClass *)0x0) {
    return (UClass *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UClass>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// FAsyncPackage2 @ 1423081d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 * __thiscall
FAsyncPackage2::FAsyncPackage2
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,FAsyncPackageDesc2 *param_2,
          FAsyncLoadingThread2 *param_3,FAsyncLoadEventGraphAllocator *param_4,
          FAsyncLoadEventSpec *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalImportStore *this_00;
  EPackageExtension EVar2;
  FLoadedPackageRef *pFVar3;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncPackage2__6B_;
  (this->PackageNodes).DataPtr = (FEventLoadNode2 *)0x0;
  (this->PackageNodes).ArrayNum = 0;
  (this->Desc).RequestID = param_2->RequestID;
  (this->Desc).Priority = param_2->Priority;
  (this->Desc).PackageFlags = param_2->PackageFlags;
  (this->Desc).InstancingContext.SharedData.Object = (param_2->InstancingContext).SharedData.Object;
  pTVar1 = (param_2->InstancingContext).SharedData.SharedReferenceCount.ReferenceController;
  (this->Desc).InstancingContext.SharedData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Desc).UPackageId.Id = (param_2->UPackageId).Id;
  (this->Desc).PackageIdToLoad.Id = (param_2->PackageIdToLoad).Id;
  (this->Desc).UPackageName = param_2->UPackageName;
  FPackagePath::FPackagePath(&(this->Desc).PackagePathToLoad,&param_2->PackagePathToLoad);
  (this->Desc).bCanBeImported = param_2->bCanBeImported;
  (this->Desc).Loader = param_2->Loader;
  this->GraphAllocator = param_4;
  (this->ImportStore).GlobalImportStore = &param_3->GlobalImportStore;
  (this->Data).MemoryBuffer0 = (uchar *)0x0;
  (this->Data).MemoryBuffer1 = (uchar *)0x0;
  (this->Data).Exports.DataPtr = (FExportObject *)0x0;
  (this->Data).Exports.ArrayNum = 0;
  (this->Data).CellExports.DataPtr = (FExportCell *)0x0;
  (this->Data).CellExports.ArrayNum = 0;
  (this->Data).ImportedAsyncPackages.DataPtr = (FAsyncPackage2 **)0x0;
  (this->Data).ImportedAsyncPackages.ArrayNum = 0;
  (this->Data).ExportBundleNodes.DataPtr = (FEventLoadNode2 *)0x0;
  (this->Data).ExportBundleNodes.ArrayNum = 0;
  (this->Data).ShaderMapHashes.DataPtr = (FSHAHash *)0x0;
  (this->Data).ShaderMapHashes.ArrayNum = 0;
  (this->Data).TotalExportBundleCount = 0;
  (this->Data).bCellExportsInitialized = (atomic<bool>)0x0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  *(undefined1 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 2;
  (this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  *(undefined4 *)&(this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  (this->HeaderData)._padding_ = 0;
  (this->HeaderData).ImportedPackageIds.DataPtr = (FPackageId *)0x0;
  (this->HeaderData).ImportedPackageIds.ArrayNum = 0;
  (this->HeaderData).ImportedAsyncPackagesView.DataPtr = (FAsyncPackage2 **)0x0;
  (this->HeaderData).ImportedAsyncPackagesView.ArrayNum = 0;
  (this->HeaderData).ExportsView.DataPtr = (FExportObject *)0x0;
  (this->HeaderData).ExportsView.ArrayNum = 0;
  (this->HeaderData).CellExportsView.DataPtr = (FExportCell *)0x0;
  (this->HeaderData).CellExportsView.ArrayNum = 0;
  (this->HeaderData).ExportBundleEntriesCopyForPostLoad.DataPtr = (FExportBundleEntry *)0x0;
  (this->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum = 0;
  (this->SerializationState).IoRequest.Impl = (FIoRequestImpl *)0x0;
  (this->LinkerLoadState).bIsSet = false;
  this->AsyncLoadingThread = param_3;
  this->LinkerRoot = (UPackage *)0x0;
  this->SyncLoadContextId = (atomic<unsigned___int64>)0x0;
  this->PostLoadGroup = (FAsyncLoadingPostLoadGroup *)0x0;
  this->DeferredPostLoadGroup = (FAsyncLoadingPostLoadGroup *)0x0;
  this->LoadStartTime = 0.0;
  this->RefCount = (atomic<int>)0x0;
  this->bHasStartedImportingPackages = false;
  this->ProcessedExportBundlesCount = 0;
  this->ExportBundleEntryIndex = 0;
  this->ExternalReadIndex = 0;
  this->DeferredClusterIndex = 0;
  this->PostLoadInstanceIndex = 0;
  this->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x0;
  this->ObjectsNowInPhase2 = (atomic<bool>)0x0;
  (this->AllDependenciesSetupState).WaitingForPackage = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesSetupState).PackagesWaitingForThisHead = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesSetupState).PackagesWaitingForThisTail = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesSetupState).PrevLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesSetupState).NextLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesSetupState).LastTick = 0;
  (this->AllDependenciesSetupState).PreOrderNumber = -1;
  (this->AllDependenciesSetupState).bAssignedToStronglyConnectedComponent = false;
  (this->AllDependenciesSetupState).bAllDone = false;
  (this->AllDependenciesImportState).WaitingForPackage = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesImportState).PackagesWaitingForThisHead = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesImportState).PackagesWaitingForThisTail = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesImportState).PrevLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesImportState).NextLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesImportState).LastTick = 0;
  (this->AllDependenciesImportState).PreOrderNumber = -1;
  (this->AllDependenciesImportState).bAssignedToStronglyConnectedComponent = false;
  (this->AllDependenciesImportState).bAllDone = false;
  (this->AllDependenciesPostLoadReadyState).WaitingForPackage = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesPostLoadReadyState).PackagesWaitingForThisHead = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesPostLoadReadyState).PackagesWaitingForThisTail = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesPostLoadReadyState).PrevLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesPostLoadReadyState).NextLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesPostLoadReadyState).LastTick = 0;
  (this->AllDependenciesPostLoadReadyState).PreOrderNumber = -1;
  (this->AllDependenciesPostLoadReadyState).bAssignedToStronglyConnectedComponent = false;
  (this->AllDependenciesPostLoadReadyState).bAllDone = false;
  (this->AllDependenciesFullyLoadedState).WaitingForPackage = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesFullyLoadedState).PackagesWaitingForThisHead = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesFullyLoadedState).PackagesWaitingForThisTail = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesFullyLoadedState).PrevLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesFullyLoadedState).NextLink = (FAsyncPackage2 *)0x0;
  (this->AllDependenciesFullyLoadedState).LastTick = 0;
  (this->AllDependenciesFullyLoadedState).PreOrderNumber = -1;
  (this->AllDependenciesFullyLoadedState).bAssignedToStronglyConnectedComponent = false;
  (this->AllDependenciesFullyLoadedState).bAllDone = false;
  this->LoadStatus = Succeeded;
  this->bCreatedLinkerRoot = false;
  (this->RequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestIDs).ArrayNum = 0;
  (this->RequestIDs).ArrayMax = 0;
  (this->ConstructedObjectsMutex).State = (atomic<unsigned_char>)0x0;
  (this->ConstructedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructedObjects).ArrayNum = 0;
  (this->ConstructedObjects).ArrayMax = 0;
  (this->ConstructedObjectsAccessDetector).State = (atomic<unsigned___int64>)0x0;
  (this->ExternalReadDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalReadDependencies).ArrayNum = 0;
  (this->ExternalReadDependencies).ArrayMax = 0;
  (this->CompletionCallbacks).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
        )0x0;
  (this->CompletionCallbacks).ArrayNum = 0;
  (this->CompletionCallbacks).ArrayMax = 2;
  (this->ProgressCallbacks).AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0;
  (this->ProgressCallbacks).ArrayNum = 0;
  (this->ProgressCallbacks).ArrayMax = 2;
  FLoadTimeProfilerTracePrivate::OutputNewAsyncPackage(this);
  AddRequestID(this,param_1,(this->Desc).RequestID);
  CreatePackageNodes(this,param_5);
  if ((this->Desc).bCanBeImported != false) {
    this_00 = (this->ImportStore).GlobalImportStore;
    EVar2 = FPackagePath::GetHeaderExtension(&(this->Desc).PackagePathToLoad);
    pFVar3 = FGlobalImportStore::AddPackageRef
                       (this_00,(FPackageId)(this->Desc).UPackageId.Id,(this->Desc).UPackageName,
                        (this->Desc).Loader,EVar2);
    pFVar3->bIsMissing = false;
    pFVar3->bHasFailed = false;
  }
  return this;
}

// ~FAsyncPackage2 @ 14230a110

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage2::~FAsyncPackage2(FAsyncPackage2 *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar7;
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  FVar8;
  ForElementType<FSetElementId> FVar9;
  TArrayView<FPackageId_const_,int> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->_padding_ = (longlong)&___7FAsyncPackage2__6B_;
  FLoadTimeProfilerTracePrivate::OutputDestroyAsyncPackage(this);
  if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14230a1b9:
    if (5 < (byte)LogStreaming._0_1_) {
      ::LexToString(&local_48,&(this->Desc).PackageIdToLoad);
      FVar6 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
      ::FName::ToString((FName *)FVar6,&local_58);
      ::LexToString(&local_68,&(this->Desc).UPackageId);
      ::FName::ToString(&(this->Desc).UPackageName,&local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
          (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
           GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
    FVar9 = (ForElementType<FSetElementId>)0x154ba3ce8;
    if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar9 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
    }
    iVar5 = *(int *)((longlong)FVar9 +
                    (ulonglong)
                    (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                    (uint)(this->Desc).UPackageId.Id) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar5 * 0x10)
            == (this->Desc).UPackageId.Id) goto LAB_14230a1b9;
        iVar5 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                        (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  local_88.DataPtr = (this->HeaderData).ImportedPackageIds.DataPtr;
  local_88.ArrayNum = (this->HeaderData).ImportedPackageIds.ArrayNum;
  FPackageImportStore::ReleaseImportedPackageReferences(&this->ImportStore,&this->Desc,&local_88);
  if ((this->Desc).bCanBeImported != false) {
    FGlobalImportStore::ReleasePackageRef
              ((this->ImportStore).GlobalImportStore,(FPackageId)(this->Desc).UPackageId.Id,
               (FPackageId)0x0);
  }
  if (this->RefCount != (atomic<int>)0x0) {
    FVar6 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
    ::FName::ToString((FName *)FVar6,&local_38);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x2b67,L"RefCount is not 0 when deleting package %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ConstructedObjects).ArrayNum != 0) {
    FVar6 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
    ::FName::ToString((FName *)FVar6,&local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstructedObjects.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x2b6a,L"ClearConstructedObjects() has not been called for package %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FMemory::Free((this->Data).MemoryBuffer0);
  FMemory::Free((this->Data).MemoryBuffer1);
  if ((this->PostLoadGroup != (FAsyncLoadingPostLoadGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostLoadGroup == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2b6f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->DeferredPostLoadGroup != (FAsyncLoadingPostLoadGroup *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeferredPostLoadGroup == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2b70,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7 = (this->ProgressCallbacks).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FVar7 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
            &this->ProgressCallbacks;
  }
  DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
            ((TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)FVar7,
             (this->ProgressCallbacks).ArrayNum);
  FVar7 = (this->ProgressCallbacks).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FVar8 = (this->CompletionCallbacks).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                )0x0) {
    FVar8 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )&this->CompletionCallbacks;
  }
  DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
            ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
              *)FVar8,(this->CompletionCallbacks).ArrayNum);
  FVar8 = (this->CompletionCallbacks).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar8);
  }
  DestructItems<TFunction<bool___cdecl(double)>,int>
            ((TFunction<bool___cdecl(double)> *)
             (this->ExternalReadDependencies).AllocatorInstance.Data,
             (this->ExternalReadDependencies).ArrayNum);
  pFVar1 = (this->ExternalReadDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            (&this->ConstructedObjectsAccessDetector);
  pFVar1 = (this->ConstructedObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RequestIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->LinkerLoadState).bIsSet != false) {
    pFVar1 = (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.AllocatorInstance.
             Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.AllocatorInstance.
             Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.
             AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  FIoRequest::~FIoRequest(&(this->SerializationState).IoRequest);
  pvVar2 = (void *)(this->HeaderData)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->HeaderData)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  if (((char)(this->HeaderData)._padding_ != '\0') &&
     (pvVar2 = (void *)(this->HeaderData)._padding_, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Desc).InstancingContext.SharedData.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14230d380

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAsyncPackage2::ConditionalBeginPostLoadPhase'::__l2::<lambda_1>::operator()
          (void *this,FAsyncPackage2 *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  FAsyncLoadingThreadState2 *pFVar4;
  code *pcVar5;
  bool bVar6;
  FEventLoadNode2 *this_00;
  uint uVar7;
  int iVar8;
  
  if ((param_1->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xd) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::PostLoad"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1dd4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (param_1->Data).TotalExportBundleCount;
  uVar7 = 0;
  if (0 < iVar8) {
    bVar6 = iVar8 != 0;
    iVar8 = 1;
    do {
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExportBundleIndex < uint32(Data.TotalExportBundleCount)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x25bb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = TArrayView<FEventLoadNode2,int>::operator[]
                          (&(param_1->Data).ExportBundleNodes,iVar8);
      pFVar4 = *(FAsyncLoadingThreadState2 **)this;
      if (((int)this_00->BarrierCount < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("BarrierCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x16f5,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      paVar1 = &this_00->BarrierCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        FEventLoadNode2::Fire(this_00,pFVar4);
      }
      uVar3 = (param_1->Data).TotalExportBundleCount;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 3;
      bVar6 = uVar7 < uVar3;
    } while ((int)uVar7 < (int)uVar3);
  }
  return;
}

// operator() @ 14230d4b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode2": Some values do not have unique names */

void __thiscall
`FAsyncPackage2::ConditionalBeginProcessPackageExports'::__l2::<lambda_1>::operator()
          (void *this,FAsyncPackage2 *param_1)

{
  code *pcVar1;
  bool bVar2;
  FEventLoadNode2 *this_00;
  
  if (param_1->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::DependenciesReady"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x247e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->LinkerLoadState).bIsSet != false) {
    LOCK();
    param_1->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x6;
    UNLOCK();
    if ((param_1->PackageNodes).ArrayNum < 4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FEventLoadNode2::ReleaseBarrier
              ((param_1->PackageNodes).DataPtr + 3,*(FAsyncLoadingThreadState2 **)this);
    return;
  }
  LOCK();
  param_1->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xa;
  UNLOCK();
  if (0 < (param_1->Data).TotalExportBundleCount) {
    this_00 = FAsyncPackage2::GetExportBundleNode(param_1,ExportBundle_Process,0);
    FEventLoadNode2::ReleaseBarrier(this_00,*(FAsyncLoadingThreadState2 **)this);
  }
  return;
}

// operator() @ 14230d5b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAsyncPackage2::ConditionalBeginResolveLinkerLoadImports'::__l2::<lambda_1>::operator()
          (void *this,FAsyncPackage2 *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->LinkerLoadState).bIsSet != false) {
    if (param_1->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x7) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::WaitingForLinkerLoadDependencies"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1dbf,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    param_1->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x8;
    UNLOCK();
    if ((param_1->PackageNodes).ArrayNum < 5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FEventLoadNode2::ReleaseBarrier
              ((param_1->PackageNodes).DataPtr + 4,*(FAsyncLoadingThreadState2 **)this);
  }
  return;
}

// operator() @ 14230d680

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAsyncPackage2::ConditionalFinishLoading'::__l2::<lambda_1>::operator()
          (void *this,FAsyncPackage2 *param_1)

{
  int *piVar1;
  FManualResetEvent *pFVar2;
  atomic<unsigned_char> aVar3;
  FAsyncLoadingThread2 *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FAsyncPackage2 *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xf) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::DeferredPostLoadDone"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x249a,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  LOCK();
  local_res10[0]->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x10;
  UNLOCK();
  pFVar4 = local_res10[0]->AsyncLoadingThread;
  pFVar5 = (pFVar4->LoadedPackagesToProcess).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar5 + (longlong)(pFVar4->LoadedPackagesToProcess).ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (pFVar4->LoadedPackagesToProcess).ArrayNum;
  piVar1 = &(pFVar4->LoadedPackagesToProcess).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar4->LoadedPackagesToProcess).AllocatorInstance,piVar1);
  }
  (pFVar4->LoadedPackagesToProcess).ArrayNum = iVar8 + 1;
  *(FAsyncPackage2 **)
   ((pFVar4->LoadedPackagesToProcess).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_res10[0]
  ;
  if (*(char *)(*(longlong *)this + 0x60) != '\0') {
    pFVar4 = local_res10[0]->AsyncLoadingThread;
    LOCK();
    pFVar2 = &pFVar4->MainThreadWakeEvent;
    aVar3 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)0x1;
    UNLOCK();
    if (((byte)aVar3 & 3) == 2) {
      UE::ParkingLot::WakeAll(&pFVar4->MainThreadWakeEvent);
    }
  }
  return;
}

// operator() @ 14230dda0

/* WARNING: Removing unreachable block (ram,0x00014230de6e) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FAsyncPackage2::StartLoading'::__l2::<lambda_1>::operator()
          (void *this,TIoStatusOr<FIoBuffer> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  int iVar3;
  atomic<int> aVar4;
  EIoErrorCode EVar5;
  longlong lVar6;
  longlong lVar7;
  FEventLoadNode2 *this_00;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  FName this_01;
  undefined1 uVar11;
  ulonglong uVar12;
  atomic<__int64> aVar13;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if ((param_1->StatusValue).ErrorCode == Ok) {
    lVar6 = *(longlong *)(param_1->Value).Pad;
    uVar12 = (ulonglong)CONCAT14(*(undefined1 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 8));
    if (uVar12 != 0) {
      LOCK();
      __GTraceCounterAsyncLoadingTotalLoaded.Value =
           (atomic<__int64>)((longlong)__GTraceCounterAsyncLoadingTotalLoaded.Value + uVar12);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterAsyncLoadingTotalLoaded.CounterId == (atomic<unsigned_int>)0x0) {
          uVar10 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterAsyncLoadingTotalLoaded.CounterName,
                              TraceCounterType_Int,
                              __GTraceCounterAsyncLoadingTotalLoaded.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterAsyncLoadingTotalLoaded.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterAsyncLoadingTotalLoaded.CounterId._2_2_ = 0;
            __GTraceCounterAsyncLoadingTotalLoaded.CounterId._0_2_ = uVar10;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterAsyncLoadingTotalLoaded.CounterId._0_2_,
                   (long64)__GTraceCounterAsyncLoadingTotalLoaded.Value);
      }
    }
    if ((param_1->StatusValue).ErrorCode != Ok) {
      StatusOrCrash(&param_1->StatusValue);
    }
    lVar6 = *(longlong *)(param_1->Value).Pad;
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameCompletedExportBundleLoadsKB.Name,
               _GCsvStat_FrameCompletedExportBundleLoadsKB.CategoryIndex,
               (float)((double)CONCAT14(*(undefined1 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 8)) *
                      __real_3f50000000000000),Accumulate);
  }
  else {
    if (2 < (byte)LogStreaming._0_1_) {
      FIoStatus::ToString(&param_1->StatusValue,&local_40);
      ::LexToString(&local_50,(FPackageId *)(*(longlong *)this + 0x208));
      this_01 = FPackagePath::GetPackageFName((FPackagePath *)(*(longlong *)this + 0x218));
      ::FName::ToString((FName *)this_01,&local_60);
      ::LexToString(&local_70,(FPackageId *)(*(longlong *)this + 0x200));
      ::FName::ToString((FName *)(*(longlong *)this + 0x210),&local_80);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    EVar5 = (param_1->StatusValue).ErrorCode;
    if (EVar5 == Ok) {
      uVar11 = 4;
    }
    else {
      uVar11 = 3;
      if (EVar5 != NotInstalled) {
        uVar11 = 0;
      }
    }
    *(undefined1 *)(*(longlong *)this + 0x578) = uVar11;
  }
  LOCK();
  piVar2 = (int *)(*(longlong *)(*(longlong *)this + 0x438) + 0xbd0);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  aVar13 = (atomic<__int64>)(longlong)(iVar3 + -1);
  if (__GTraceCounterAsyncLoadingPendingIoRequests.Value != aVar13) {
    LOCK();
    UNLOCK();
    __GTraceCounterAsyncLoadingPendingIoRequests.Value = aVar13;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
        uVar10 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterAsyncLoadingPendingIoRequests.CounterName,
                            TraceCounterType_Int,
                            __GTraceCounterAsyncLoadingPendingIoRequests.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._2_2_ = 0;
          __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_ = uVar10;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_,
                 (long64)__GTraceCounterAsyncLoadingPendingIoRequests.Value);
    }
  }
  lVar6 = *(longlong *)this;
  lVar7 = *(longlong *)(lVar6 + 0x438);
  if ((*(int *)(lVar6 + 0x1d8) < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = *(FEventLoadNode2 **)(lVar6 + 0x1d0);
  if (((int)this_00->BarrierCount < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BarrierCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x16f5,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  LOCK();
  paVar1 = &this_00->BarrierCount;
  aVar4 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar4 == (atomic<int>)0x1) {
    FEventLoadNode2::Fire(this_00,(FAsyncLoadingThreadState2 *)0x0);
  }
  if (iVar3 + -1 == 0) {
    FZenaphore::NotifyOne((FZenaphore *)(lVar7 + 0x1010));
  }
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(param_1);
  return;
}

// operator() @ 14230e850

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMessageLog *this_00;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TTuple<FString,FFormatArgumentValue> *pTVar8;
  FName local_res8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_d8;
  FText local_c8;
  FString local_b8;
  FString local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FMessageLog local_48;
  
  ::FName::ToString(this,&local_a8);
  ::FName::ToString((FName *)((longlong)this + 8),&local_b8);
  ::FName::FName(&local_res8,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_48,&local_res8);
  pFVar4 = FText::FromString(&local_68,&local_a8);
  pFVar5 = FText::FromString(&local_78,&local_b8);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_88,L"Core",L"AsyncLoading_SkippedPackage_NotInstalled",
                      L"While trying to load package {Package}, a dependent package {DependentPackage} was unavailable because it was not installed."
                     );
  pFVar7 = FTextFormat::FTextFormat(&local_58,pFVar6,Default);
  local_d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Pairs.ArrayNum = 0;
  local_d8.Pairs.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,2,(ForAnyElementType *)&local_d8,0,&local_d8.Pairs.ArrayMax);
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(&local_d8,(wchar_t (*) [8])L"Package");
  ::FString::FString((FString *)pTVar8,L"Package");
  *(undefined4 *)&pTVar8->field_0x10 = 4;
  FText::FText((FText *)&pTVar8->field_0x20,pFVar5);
  if (*(longlong *)&pTVar8->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar8 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[17]>
                     (&local_d8,(wchar_t (*) [17])L"DependentPackage");
  ::FString::FString((FString *)pTVar8,L"DependentPackage");
  *(undefined4 *)&pTVar8->field_0x10 = 4;
  FText::FText((FText *)&pTVar8->field_0x20,pFVar4);
  if (*(longlong *)&pTVar8->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FText::FormatNamedImpl(&local_c8,pFVar7,&local_d8);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_d8.Pairs.AllocatorInstance.Data,
             local_d8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_d8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_d8.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
  FMessageLog::Warning(this_00,&local_98,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_48);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return false;
}

// operator() @ 14230eac0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FString * __thiscall
`FAsyncPackage2::DumpStateImpl'::__l2::<lambda_2>::operator()
          (void *this,FString *__return_storage_ptr__,FAsyncPackage2 *param_1)

{
  FString local_18;
  
  ::LexToString((EAsyncPackageLoadingState2)param_1->AsyncPackageLoadingState);
  ::FName::ToString(&(param_1->Desc).UPackageName,&local_18);
  ::LexToString((param_1->Desc).Loader);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s package %s state %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14230ee20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoRequest __thiscall
`FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()
          (void *this,FIoChunkId *param_1,TRefCountPtr<FBaseGraphTask> param_2)

{
  int *piVar1;
  int iVar2;
  FIoBatch *this_00;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FIoRequest FVar7;
  atomic<__int64> aVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  longlong *in_R9;
  undefined1 auStackY_b8 [32];
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar11;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  lVar9 = *(longlong *)this;
  if (*(int *)(lVar9 + 0x1d8) < 7) {
    uVar11 = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar7.Impl = (FIoRequestImpl *)(*pcVar4)();
      return (FIoRequest)FVar7.Impl;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x1d0);
  if ((*(char *)(lVar9 + 0x1be) != '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsDone.load(std::memory_order_relaxed)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x16e9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar7.Impl = (FIoRequestImpl *)(*pcVar4)();
    return (FIoRequest)FVar7.Impl;
  }
  LOCK();
  piVar1 = (int *)(lVar9 + 0x1b8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)this + 0x438) + 0xbd0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  aVar8 = (atomic<__int64>)(longlong)(iVar2 + 1);
  if (__GTraceCounterAsyncLoadingPendingIoRequests.Value != aVar8) {
    LOCK();
    UNLOCK();
    __GTraceCounterAsyncLoadingPendingIoRequests.Value = aVar8;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
        uVar6 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterAsyncLoadingPendingIoRequests.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterAsyncLoadingPendingIoRequests.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._2_2_ = 0;
          __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_ = uVar6;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_,
                 (long64)__GTraceCounterAsyncLoadingPendingIoRequests.Value);
    }
  }
  local_48 = *in_R9;
  local_50 = *(longlong *)this;
  this_00 = *(FIoBatch **)((longlong)this + 8);
  lVar9 = local_50;
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 0x30) = *(int *)(local_48 + 0x30) + 1;
    UNLOCK();
    lVar9 = *(longlong *)this;
  }
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FAsyncPackage2::StartLoading'::`23'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
             ::Call;
  local_70 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0xffffffffffffffff;
  FIoBatch::ReadWithCallback
            (this_00,param_1,(FIoReadOptions *)param_2.Reference,(int)&local_88,
             (TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)
             CONCAT44(uVar11,*(undefined4 *)(lVar9 + 0x1e4)));
  if (local_68 != (code *)0x0) {
    pppuVar10 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar10 = local_40;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  puVar3 = (undefined8 *)*in_R9;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return (FIoRequest)(FIoRequestImpl *)param_1;
}

// operator() @ 14230f050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMessageLog *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TTuple<FString,FFormatArgumentValue> *pTVar10;
  undefined1 auStackY_1208 [32];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
  local_11d8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
  local_11c8;
  FName local_11b8;
  FName local_11b0;
  FString local_11a8;
  FString local_1198;
  FText local_1188;
  FText local_1178;
  TSharedRef<FTokenizedMessage,1> local_1168;
  FText local_1158;
  FText local_1148;
  FText local_1138;
  FText local_1128;
  TSharedRef<FTokenizedMessage,1> local_1118;
  FText local_1108;
  FText local_10f8;
  FText local_10e8;
  FTextFormat local_10d8;
  FTextFormat local_10c8;
  FMessageLog local_10b8;
  FMessageLog local_1088;
  TStringBuilderBase<wchar_t> local_1058;
  wchar_t local_1038 [2048];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_1208;
  ::FName::ToString(this,&local_1198);
  ::FName::ToString((FName *)((longlong)this + 8),&local_11a8);
  local_1058.Base = local_1038;
  local_1058.bIsDynamic = false;
  local_1058.bIsExternal = false;
  local_1058.CurPos = local_1038;
  local_1058.End = (wchar_t *)local_38;
  FPackageName::GetExplanationForUnavailablePackage(this,&local_1058);
  if ((int)((longlong)local_1058.CurPos - (longlong)local_1058.Base >> 1) == 0) {
    ::FName::FName(&local_11b0,"LoadErrors");
    pFVar4 = FMessageLog::FMessageLog(&local_1088,&local_11b0);
    pFVar5 = FText::FromString(&local_10e8,&local_1198);
    pFVar6 = FText::FromString(&local_10f8,&local_11a8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_1108,L"Core",L"AsyncLoading_SkippedPackage_NoExplanation",
                        L"While trying to load package {MissingPackage}, a dependent package {DependentPackage} was not available. No additional explanation was available."
                       );
    pFVar9 = FTextFormat::FTextFormat(&local_10c8,pFVar7,Default);
    local_11c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_11c8.Pairs.ArrayNum = 0;
    local_11c8.Pairs.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,2,(ForAnyElementType *)&local_11c8,0,&local_11c8.Pairs.ArrayMax);
    pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[15]>
                        (&local_11c8,(wchar_t (*) [15])L"MissingPackage");
    ::FString::FString((FString *)pTVar10,L"MissingPackage");
    *(undefined4 *)&pTVar10->field_0x10 = 4;
    FText::FText((FText *)&pTVar10->field_0x20,pFVar6);
    if (*(longlong *)&pTVar10->field_0x20 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[17]>
                        (&local_11c8,(wchar_t (*) [17])L"DependentPackage");
    ::FString::FString((FString *)pTVar10,L"DependentPackage");
    *(undefined4 *)&pTVar10->field_0x10 = 4;
    FText::FText((FText *)&pTVar10->field_0x20,pFVar5);
    if (*(longlong *)&pTVar10->field_0x20 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FText::FormatNamedImpl(&local_1178,pFVar9,&local_11c8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_11c8.Pairs.AllocatorInstance.Data,
               local_11c8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_11c8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_11c8.Pairs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    FMessageLog::Warning(pFVar4,&local_1118,&local_1178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1118.SharedReferenceCount.ReferenceController);
    if (local_1178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1178.TextData.Reference + 0x10))();
    }
    if (local_1108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1108.TextData.Reference + 0x10))();
    }
    if (local_10f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10f8.TextData.Reference + 0x10))();
    }
    if (local_10e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10e8.TextData.Reference + 0x10))();
    }
    pFVar4 = &local_1088;
  }
  else {
    ::FName::FName(&local_11b8,"LoadErrors");
    pFVar4 = FMessageLog::FMessageLog(&local_10b8,&local_11b8);
    if (local_1058.End < local_1058.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_1058,1);
    }
    *local_1058.CurPos = L'\0';
    pFVar5 = FText::FromString(&local_1128,local_1058.Base);
    pFVar6 = FText::FromString(&local_1138,&local_1198);
    pFVar7 = FText::FromString(&local_1148,&local_11a8);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1158,L"Core",L"AsyncLoading_SkippedPackage_Explanation",
                        L"While trying to load package {MissingPackage}, a dependent package {DependentPackage} was not available. Additional explanatory information follows:\n{Explanation}"
                       );
    pFVar9 = FTextFormat::FTextFormat(&local_10d8,pFVar8,Default);
    local_11d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_11d8.Pairs.ArrayNum = 0;
    local_11d8.Pairs.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,3,(ForAnyElementType *)&local_11d8,0,&local_11d8.Pairs.ArrayMax);
    pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[15]>
                        (&local_11d8,(wchar_t (*) [15])L"MissingPackage");
    ::FString::FString((FString *)pTVar10,L"MissingPackage");
    *(undefined4 *)&pTVar10->field_0x10 = 4;
    FText::FText((FText *)&pTVar10->field_0x20,pFVar7);
    if (*(longlong *)&pTVar10->field_0x20 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[17]>
                        (&local_11d8,(wchar_t (*) [17])L"DependentPackage");
    ::FString::FString((FString *)pTVar10,L"DependentPackage");
    *(undefined4 *)&pTVar10->field_0x10 = 4;
    FText::FText((FText *)&pTVar10->field_0x20,pFVar6);
    if (*(longlong *)&pTVar10->field_0x20 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[12]>
                        (&local_11d8,(wchar_t (*) [12])L"Explanation");
    ::FString::FString((FString *)pTVar10,L"Explanation");
    *(undefined4 *)&pTVar10->field_0x10 = 4;
    FText::FText((FText *)&pTVar10->field_0x20,pFVar5);
    if (*(longlong *)&pTVar10->field_0x20 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FText::FormatNamedImpl(&local_1188,pFVar9,&local_11d8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_11d8.Pairs.AllocatorInstance.Data,
               local_11d8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_11d8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_11d8.Pairs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    FMessageLog::Warning(pFVar4,&local_1168,&local_1188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1168.SharedReferenceCount.ReferenceController);
    if (local_1188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1188.TextData.Reference + 0x10))();
    }
    if (local_1158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1158.TextData.Reference + 0x10))();
    }
    if (local_1148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1148.TextData.Reference + 0x10))();
    }
    if (local_1138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1138.TextData.Reference + 0x10))();
    }
    if (local_1128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1128.TextData.Reference + 0x10))();
    }
    pFVar4 = &local_10b8;
  }
  FMessageLog::~FMessageLog(pFVar4);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1058);
  if (local_11a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11a8.Data.AllocatorInstance.Data);
  }
  if (local_1198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1198.Data.AllocatorInstance.Data);
  }
  return false;
}

// operator() @ 14230f750

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FAsyncPackage2::DumpStateImpl'::__l2::<lambda_3>::operator()
          (void *this,FEventLoadNode2 *param_1,TFunction<void___cdecl(FEventLoadNode2_*)> *param_2)

{
  FEventLoadNode2_u_16 *pFVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FEventLoadNode2_u_16 *pFVar6;
  FEventLoadNode2_u_16 local_28 [2];
  
  uVar2 = param_1->DependenciesCount;
  if (uVar2 == 1) {
    local_28[0] = param_1->field2_0x10;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar3 = *(code **)param_2;
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(uVar4,local_28);
  }
  else if (uVar2 != 0) {
    pFVar6 = (FEventLoadNode2_u_16 *)(param_1->field2_0x10).SingleDependent;
    pFVar1 = pFVar6 + uVar2;
    if (pFVar6 < pFVar1) {
      do {
        local_28[0] = *pFVar6;
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar3 = *(code **)param_2;
        plVar5 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar5 = (longlong *)&param_2->field_0x10;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar3)(uVar4,local_28);
        pFVar6 = pFVar6 + 1;
      } while (pFVar6 < pFVar1);
    }
  }
  if (*(longlong *)param_2 == 0) {
    return;
  }
  plVar5 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar5 = *(longlong **)&param_2->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014230f828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// operator() @ 14230f840

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()
          (void *this,
          TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
          *param_1,wchar_t *param_2,FEventLoadNode2 *param_3,int param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAsyncLoadEventQueue2 *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_b8 [8];
  TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_> local_b0;
  FScriptContainerElement *local_a0;
  FString local_98;
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  FString local_78;
  code *local_68 [2];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  pFVar1 = param_3->Spec->EventQueue;
  lpCriticalSection = &pFVar1->ExternalCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((pFVar1->LocalQueue).InternalQueues.ArrayNum == 0) &&
     ((pFVar1->ExternalQueue).InternalQueues.ArrayNum == 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((param_3->DependenciesCount == 0) && (param_3->BarrierCount == (atomic<int>)0x0)) && (bVar5))
  {
    return false;
  }
  if ((param_2 != (wchar_t *)0x0) && (2 < (byte)LogStreaming._0_1_)) {
    TCString<wchar_t>::Spc(param_4);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  uVar9 = param_4 + 1;
  if (2 < (byte)LogStreaming._0_1_) {
    if ((0xff < uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(param_1,param_3,&local_b0,false);
  iVar4 = local_b0.ArrayNum;
  pFVar8 = local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 8;
  FVar7.Data = local_b0.AllocatorInstance.Data;
  local_a0 = pFVar8;
  do {
    if (local_b0.ArrayNum != iVar4) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<FEventLoadNode2_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b8);
    }
    if (FVar7.Data == pFVar8) {
      local_40 = 0;
      uStack_80 = *(undefined8 *)this;
      local_50._4_4_ = uStack_84;
      local_50._0_4_ = uVar9;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void,FEventLoadNode2_*>
                    ::Call;
      local_88 = uVar9;
      uStack_48 = uStack_80;
      __l2::<lambda_3>::operator()
                (*(void **)((longlong)this + 8),param_3,
                 (TFunction<void___cdecl(FEventLoadNode2_*)> *)local_68);
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      return true;
    }
    if (2 < (byte)LogStreaming._0_1_) {
      lVar2 = *(longlong *)(*(longlong *)FVar7.Data + 8);
      ::LexToString(*(EAsyncPackageLoadingState2 *)(lVar2 + 0x494));
      ::FName::ToString((FName *)(lVar2 + 0x210),&local_78);
      ::LexToString(*(EPackageLoader *)(lVar2 + 0x226));
      ::FString::PrintfImpl(&local_98,L"%s package %s state %s");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (((param_4 + 2 < 0) || (0xff < param_4 + 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                             ,0x272,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      pFVar8 = local_a0;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
        pFVar8 = local_a0;
      }
    }
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// AddCompletionCallback @ 142310430

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::AddCompletionCallback
          (FAsyncPackage2 *this,
          TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  FVar3;
  
  iVar2 = (this->CompletionCallbacks).ArrayNum;
  piVar1 = &(this->CompletionCallbacks).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>_>
                      (0x808,&(this->CompletionCallbacks).AllocatorInstance,piVar1);
  }
  (this->CompletionCallbacks).ArrayNum = iVar2 + 1;
  FVar3 = (this->CompletionCallbacks).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                )0x0) {
    FVar3 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )&this->CompletionCallbacks;
  }
  *(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
    **)((longlong)FVar3 + (longlong)iVar2 * 8) = param_1->Ptr;
  param_1->Ptr = (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                  *)0x0;
  return;
}

// AddProgressCallback @ 142310ce0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::AddProgressCallback
          (FAsyncPackage2 *this,TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar3;
  undefined8 *puVar4;
  
  iVar2 = (this->ProgressCallbacks).ArrayNum;
  piVar1 = &(this->ProgressCallbacks).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>_>
                      (0x810,&(this->ProgressCallbacks).AllocatorInstance,piVar1);
  }
  (this->ProgressCallbacks).ArrayNum = iVar2 + 1;
  FVar3 = (this->ProgressCallbacks).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FVar3 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
            &this->ProgressCallbacks;
  }
  puVar4 = (undefined8 *)((longlong)FVar3 + (longlong)iVar2 * 0x10);
  *puVar4 = param_1->Object;
  puVar4[1] = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// AddRequestID @ 142310d70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::AddRequestID(FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,int param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  FAsyncLoadingThread2 *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res18 [2];
  int local_res20 [2];
  int local_18 [4];
  
  if (0 < param_2) {
    if ((this->Desc).RequestID == -1) {
      (this->Desc).RequestID = param_2;
    }
    pTVar1 = &this->RequestIDs;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    local_res18[0] = param_2;
    if (((pFVar2 <= (FScriptContainerElement *)local_res18) &&
        ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->RequestIDs).ArrayMax * 4
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->RequestIDs).ArrayNum;
    if (iVar6 == (this->RequestIDs).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,&(this->RequestIDs).ArrayMax);
    }
    (this->RequestIDs).ArrayNum = iVar6 + 1;
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res18[0];
    pFVar3 = this->AsyncLoadingThread;
    local_res20[0] = local_res18[0];
    lpCriticalSection = &pFVar3->PendingRequestsCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&pFVar3->PendingRequests,local_18,(bool *)local_res20);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FLoadTimeProfilerTracePrivate::OutputAsyncPackageRequestAssociation
              (this,(longlong)local_res18[0]);
  }
  return;
}

// BeginAsyncLoad @ 1423112e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::BeginAsyncLoad(FAsyncPackage2 *this)

{
  int *piVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  bVar2 = IsInGameThread();
  if (bVar2) {
    piVar1 = &this->AsyncLoadingThread->AsyncLoadingTickCounter;
    *piVar1 = *piVar1 + 1;
  }
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  BeginLoad((FUObjectSerializeContext *)pFVar4[0x2f],(wchar_t *)0x0);
  return;
}

// CallProgressCallback @ 1423115d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::CallProgressCallback
          (FAsyncPackage2 *this,FLoadPackageAsyncProgressDelegate *param_1,
          EAsyncLoadingProgress param_2)

{
  longlong *plVar1;
  FName local_28;
  UPackage *local_20;
  EAsyncLoadingProgress local_18;
  
  local_28 = (this->Desc).UPackageName;
  local_20 = this->LinkerRoot;
  if ((param_1->Mask >> (param_2 & 0x1f) & 1) != 0) {
    local_18 = param_2;
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    if ((*(int *)&(param_1->Delegate).field_0x30 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Delegate).field_0x28, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_28);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CallProgressCallbacks @ 142311640

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::CallProgressCallbacks(FAsyncPackage2 *this,EAsyncLoadingProgress param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  code *pcVar3;
  bool bVar4;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar5;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FName local_38;
  UPackage *local_30;
  EAsyncLoadingProgress local_28;
  
  if ((this->ProgressCallbacks).ArrayNum != 0) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId7860,"FAsyncPackage2::CallProgressCallbacks",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x1eb4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7860);
    }
    local_38 = (this->Desc).UPackageName;
    iVar1 = (this->ProgressCallbacks).ArrayNum;
    local_30 = this->LinkerRoot;
    FVar6 = (this->ProgressCallbacks).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
      FVar6 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
              &this->ProgressCallbacks;
    }
    FVar5 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
            ((longlong)iVar1 * 0x10 + (longlong)FVar6);
    local_28 = param_1;
    while( true ) {
      if ((this->ProgressCallbacks).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar6 == FVar5) break;
      if ((*(longlong *)FVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lpCriticalSection = *(LPCRITICAL_SECTION *)FVar6;
      if ((*(uint *)&lpCriticalSection[1].OwningThread >> (local_28 & 0x1f) & 1) != 0) {
        EnterCriticalSection(lpCriticalSection);
        if ((lpCriticalSection[1].LockCount != 0) &&
           (p_Var2 = lpCriticalSection[1].DebugInfo, p_Var2 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
          (**(code **)(*(longlong *)p_Var2 + 0x68))(p_Var2,&local_38);
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      FVar6 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
              ((longlong)FVar6 + 0x10);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// CanRunNodeAsync @ 1423117b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FAsyncPackage2::CanRunNodeAsync(FAsyncPackage2 *this,FAsyncLoadEventSpec *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  FDelegateHandle FVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  <lambda_1> local_res18 [16];
  
  if (param_1->Func == Event_PreloadLinkerLoadExports) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId8520,"FAsyncPackage2::CanRunNodeAsync",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2148);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8520);
    }
    uVar8 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&ParallelPreloadExclusions.Name,L"ParallelPreloadExclusions");
      ParallelPreloadExclusions.ExcludedClassNames.Elements._40_8_ =
           ___xmm_00000000ffffffff0000008000000000;
      ParallelPreloadExclusions.ExcludedClassNames.Elements._48_8_ = _UNK_150631d98;
      ParallelPreloadExclusions.ExcludedClasses.Elements._40_8_ =
           ___xmm_00000000ffffffff0000008000000000;
      ParallelPreloadExclusions.ExcludedClasses.Elements._48_8_ = _UNK_150631d98;
      ParallelPreloadExclusions.ExcludedNativeClasses.Elements._40_8_ =
           ___xmm_00000000ffffffff0000008000000000;
      ParallelPreloadExclusions.ExcludedNativeClasses.Elements._48_8_ = _UNK_150631d98;
      ParallelPreloadExclusions.ExcludedClassNames.Elements._0_8_ = 0;
      ParallelPreloadExclusions.ExcludedClassNames.Elements._8_8_ = 0;
      ParallelPreloadExclusions.ExcludedClassNames.Elements._32_8_ = 0;
      ParallelPreloadExclusions.ExcludedClassNames.Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      ParallelPreloadExclusions.ExcludedClassNames.HashSize = 0;
      ParallelPreloadExclusions.ExcludedClasses.Elements._0_8_ = 0;
      ParallelPreloadExclusions.ExcludedClasses.Elements._8_8_ = 0;
      ParallelPreloadExclusions.ExcludedClasses.Elements._32_8_ = 0;
      ParallelPreloadExclusions.ExcludedClasses.Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      ParallelPreloadExclusions.ExcludedClasses.HashSize = 0;
      ParallelPreloadExclusions.ExcludedNativeClasses.Elements._0_8_ = 0;
      ParallelPreloadExclusions.ExcludedNativeClasses.Elements._8_8_ = 0;
      ParallelPreloadExclusions.ExcludedNativeClasses.Elements._32_8_ = 0;
      ParallelPreloadExclusions.ExcludedNativeClasses.Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      ParallelPreloadExclusions.ExcludedNativeClasses.HashSize = 0;
      ParallelPreloadExclusions.ClassesVersionNumber = 0;
      ParallelPreloadExclusions.ConfigDelegate.ID = 0;
      this_00 = FCoreDelegates::TSOnConfigSectionsChanged();
      FVar7 = TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
              ::
              AddLambda<_AsyncLoading2::Private::FExcludedClassSet::FExcludedClassSet_::__l2::<lambda_1>_>
                        ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                          *)this_00,local_res18);
                    /* WARNING: Load size is inaccurate */
      ParallelPreloadExclusions.ConfigDelegate.ID = *FVar7.ID;
      AsyncLoading2::Private::FExcludedClassSet::OnConfigSectionChanged(&ParallelPreloadExclusions);
      atexit(`FAsyncPackage2::CanRunNodeAsync'::__l5::
             _dynamic_atexit_destructor_for__ParallelPreloadExclusions__);
      _Init_thread_footer(&::_TSS0);
    }
    iVar1 = (this->Data).Exports.ArrayNum;
    uVar10 = uVar8;
    uVar11 = uVar8;
    if (0 < iVar1) {
      do {
        uVar9 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar9 < (this->Data).Exports.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar2 = *(longlong *)((longlong)&((this->Data).Exports.DataPtr)->Object + uVar11);
        if ((lVar2 != 0) &&
           (bVar4 = AsyncLoading2::Private::FExcludedClassSet::IsExcluded
                              (&ParallelPreloadExclusions,*(UClass **)(lVar2 + 0x10)), bVar4)) {
          if (bVar12) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return false;
        }
        uVar8 = uVar8 + 1;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar11 = uVar11 + 0x20;
      } while ((longlong)uVar8 < (longlong)iVar1);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return true;
}

// ClearConstructedObjects @ 142311ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FAsyncPackage2::ClearConstructedObjects(FAsyncPackage2 *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FUObjectItem *pFVar9;
  longlong lVar10;
  FName this_00;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_d8;
  longlong local_d0;
  longlong local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_res20 = 0;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId11219,"ClearConstructedObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2bd3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11219);
  }
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&this->ConstructedObjectsAccessDetector);
  pFVar12 = (this->ConstructedObjects).AllocatorInstance.Data;
  iVar3 = (this->ConstructedObjects).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ConstructedObjects).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar12 == pFVar1) break;
    iVar4 = *(int *)(*(longlong *)pFVar12 + 0xc);
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (iVar4 < GUObjectArray.ObjObjects.NumElements) {
      pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar4);
    }
    else {
      pFVar9 = (FUObjectItem *)0x0;
    }
    FUObjectItem::ClearRootFlags(pFVar9,AsyncLoadingPhase2|Async|AsyncLoadingPhase1);
    pFVar12 = pFVar12 + 8;
  }
  (this->ConstructedObjects).ArrayNum = 0;
  if ((this->ConstructedObjects).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstructedObjects).AllocatorInstance,0,
               &(this->ConstructedObjects).ArrayMax);
  }
  lVar10 = (longlong)(this->Data).Exports.ArrayNum;
  local_d8 = 0;
  if (0 < lVar10) {
    uVar11 = 0;
    local_c0 = 0;
    lVar13 = 0;
    local_d0 = 0;
    do {
      uVar8 = 0;
      if ((int)local_d8 < (this->Data).Exports.ArrayNum) {
        uVar8 = ~local_d8 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar14 = (longlong *)((longlong)&((this->Data).Exports.DataPtr)->Object + lVar13);
      lVar5 = *plVar14;
      if (*(char *)((longlong)plVar14 + 0x1a) == '\0') {
        if (lVar5 != 0) {
          iVar3 = *(int *)(lVar5 + 0xc);
          if ((iVar3 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
            pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
          }
          else {
            pFVar9 = (FUObjectItem *)0x0;
          }
          if (((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20 & 0xc400000U) != 0) {
            if (*plVar14 != 0) {
              iVar3 = *(int *)(*plVar14 + 0xc);
              if ((iVar3 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                     ,0x443,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
                FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
              }
            }
            if (*plVar14 != 0) {
              local_res20 = uVar11 | 4;
              ::LexToString(local_60,*(EObjectFlags *)(*plVar14 + 8));
            }
            if ((UObjectBaseUtility *)*plVar14 != (UObjectBaseUtility *)0x0) {
              local_res20 = local_res20 | 8;
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)*plVar14,&local_70,(UObject *)0x0,None);
            }
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Export.Object || !Export.Object->HasAnyInternalFlags((EInternalObjectFlags::AsyncLoadingPhase1 | EInternalObjectFlags::AsyncLoadingPhase2) | EInternalObjectFlags::Async)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x2bf0,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
            uVar11 = local_res20;
            if (((local_res20 & 8) != 0) &&
               (uVar11 = local_res20 & 0xfffffff7, local_res20 = uVar11,
               local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if (((uVar11 & 4) != 0) &&
               (uVar11 = uVar11 & 0xfffffffb, local_res20 = uVar11,
               local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
      }
      else {
        if (lVar5 == 0) {
          uVar8 = 0;
          if ((int)local_d8 < (int)(this->HeaderData)._padding_) {
            uVar8 = ~local_d8 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          cVar2 = *(char *)((this->HeaderData)._padding_ + 0x44 + local_d0);
          if ((((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                                 ,0x10b,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((UObjectBaseUtility *)plVar14[1] != (UObjectBaseUtility *)0x0) {
            uVar11 = uVar11 | 1;
            local_res20 = uVar11;
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)plVar14[1],&local_80,(UObject *)0x0);
          }
          if ((UObjectBaseUtility *)plVar14[2] != (UObjectBaseUtility *)0x0) {
            local_res20 = uVar11 | 2;
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)plVar14[2],&local_90,(UObject *)0x0);
          }
          this_00 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)this_00,&local_a0);
          GetNameFromPackageObjectIndex(this,&local_b0,(FPackageObjectIndex)(longlong)(int)local_d8)
          ;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Export.Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x2bea,
                             L"Export \'%s\' in package \'%s\' found in memory is missing:\n\t\tSuper: \'%s\', Template: \'%s\', LoadFailed: %s, Filtered: %s (%s), FoundInMemory: %s"
                            );
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          uVar11 = local_res20;
          if (((local_res20 & 2) != 0) &&
             (uVar11 = local_res20 & 0xfffffffd, local_res20 = uVar11,
             local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (((uVar11 & 1) != 0) &&
             (uVar11 = uVar11 & 0xfffffffe, local_res20 = uVar11,
             local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar3 = *(int *)(*plVar14 + 0xc);
        if ((iVar3 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
          pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
          FUObjectItem::ClearRootFlags(pFVar9,AsyncLoadingPhase2|Async|AsyncLoadingPhase1);
        }
        else {
          FUObjectItem::ClearRootFlags
                    ((FUObjectItem *)0x0,AsyncLoadingPhase2|Async|AsyncLoadingPhase1);
        }
      }
      local_d8 = local_d8 + 1;
      local_c0 = local_c0 + 1;
      local_d0 = local_d0 + 0x48;
      lVar13 = lVar13 + 0x20;
    } while (local_c0 < lVar10);
  }
  if (this->LinkerRoot != (UPackage *)0x0) {
    UObjectBaseUtility::AtomicallyClearInternalFlags
              ((UObjectBaseUtility *)this->LinkerRoot,AsyncLoadingPhase2|Async|AsyncLoadingPhase1);
  }
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(&this->ConstructedObjectsAccessDetector);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ClearImportedPackages @ 142312670

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::ClearImportedPackages(FAsyncPackage2 *this)

{
  FAsyncPackage2 **ppFVar1;
  undefined8 uVar2;
  FAsyncPackage2 **ppFVar3;
  bool bVar4;
  uint uStack_c;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId11137,"ClearImportedPackages",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2b81);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11137);
  }
  ppFVar3 = (this->Data).ImportedAsyncPackages.DataPtr;
  uVar2 = *(undefined8 *)&(this->Data).ImportedAsyncPackages.ArrayNum;
  (this->Data).ImportedAsyncPackages.DataPtr = (this->Data).ImportedAsyncPackages.DataPtr;
  *(ulonglong *)&(this->Data).ImportedAsyncPackages.ArrayNum = (ulonglong)uStack_c << 0x20;
  ppFVar1 = ppFVar3 + (int)uVar2;
  for (; ppFVar3 != ppFVar1; ppFVar3 = ppFVar3 + 1) {
    if (*ppFVar3 != (FAsyncPackage2 *)0x0) {
      Release(*ppFVar3);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConditionalBeginPostLoadPhase @ 142313260

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ConditionalBeginPostLoadPhase
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  bool bVar1;
  FAsyncLoadingThreadState2 *local_res8;
  code *local_18;
  FAsyncLoadingThreadState2 **local_10;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7629,"ConditionalBeginPostLoadPhase",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1dcd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7629);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginPostLoadPhase'::__l2::<lambda_1>,void,FAsyncPackage2_*>
             ::Call;
  local_res8 = param_1;
  WaitForAllDependenciesToReachState
            (this,param_1,(pdm_72c38f00)0x508,PostLoad,
             &this->AsyncLoadingThread->ConditionalBeginPostLoadTick,
             (TFunctionRef<void___cdecl(FAsyncPackage2_*)> *)&local_18);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConditionalBeginProcessPackageExports @ 142313330

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ConditionalBeginProcessPackageExports
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  bool bVar1;
  FAsyncLoadingThreadState2 *local_res8;
  code *local_18;
  FAsyncLoadingThreadState2 **local_10;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9337,"ConditionalBeginProcessPackageExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2479);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9337);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginProcessPackageExports'::__l2::<lambda_1>,void,FAsyncPackage2_*>
             ::Call;
  local_res8 = param_1;
  WaitForAllDependenciesToReachState
            (this,param_1,(pdm_72c38f00)0x498,DependenciesReady,
             &this->AsyncLoadingThread->ConditionalBeginProcessExportsTick,
             (TFunctionRef<void___cdecl(FAsyncPackage2_*)> *)&local_18);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConditionalBeginResolveLinkerLoadImports @ 142313400

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ConditionalBeginResolveLinkerLoadImports
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  bool bVar1;
  FAsyncLoadingThreadState2 *local_res8;
  code *local_18;
  FAsyncLoadingThreadState2 **local_10;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7608,"ConditionalBeginResolveLinkerLoadImports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1db8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7608);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginResolveLinkerLoadImports'::__l2::<lambda_1>,void,FAsyncPackage2_*>
             ::Call;
  local_res8 = param_1;
  WaitForAllDependenciesToReachState
            (this,param_1,(pdm_72c38f00)0x4d0,WaitingForLinkerLoadDependencies,
             &this->AsyncLoadingThread->ConditionalBeginResolveImportsTick,
             (TFunctionRef<void___cdecl(FAsyncPackage2_*)> *)&local_18);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConditionalCreateCellExport @ 1423134d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

VCell * __thiscall
FAsyncPackage2::ConditionalCreateCellExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  FExportCell *pFVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FTlsAutoCleanup FVar6;
  undefined1 local_res10 [8];
  code *local_38;
  undefined1 *local_30;
  
  pFVar3 = TArrayView<FExportCell,int>::operator[](&param_1->CellExportsView,param_2);
  if (pFVar3->Cell == (VCell *)0x0) {
    puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_30 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar4);
    FVar1 = pFVar5[8];
    FVar2 = pFVar5[9];
    pFVar5[8] = (FTlsAutoCleanup)this;
    FVar6 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
    if (this->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
      FVar6 = (FTlsAutoCleanup)0x0;
    }
    pFVar5[9] = FVar6;
    EventDrivenCreateCellExport(this,param_1,param_2,(FExportArchive *)0x0);
    pFVar5[8] = FVar1;
    pFVar5[9] = FVar2;
  }
  pFVar3 = TArrayView<FExportCell,int>::operator[](&param_1->CellExportsView,param_2);
  return pFVar3->Cell;
}

// ConditionalCreateCellImport @ 1423135b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

VCell * __thiscall
FAsyncPackage2::ConditionalCreateCellImport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  ulong64 uVar1;
  FAsyncPackage2 *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPackageObjectIndex *pFVar5;
  VCell *pVVar6;
  FAsyncPackage2 **ppFVar7;
  ulong64 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  pFVar5 = TArrayView<FPackageObjectIndex_const_,int>::operator[]
                     ((TArrayView<FPackageObjectIndex_const_,int> *)&param_1->_padding_,param_2);
  if (((byte)(pFVar5->TypeAndId >> 0x3e) != 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellIndex.IsPackageImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2087,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pVVar6 = (VCell *)(*pcVar2)();
    return pVVar6;
  }
  pVVar6 = FPackageImportStore::FindOrGetImportCell
                     (&this->ImportStore,param_1,(FPackageObjectIndex)pFVar5->TypeAndId);
  if (pVVar6 == (VCell *)0x0) {
    uVar1 = pFVar5->TypeAndId;
    ppFVar7 = TArrayView<FAsyncPackage2_*,int>::operator[]
                        (&param_1->ImportedAsyncPackagesView,(uint)(uVar1 >> 0x20) & 0x3fffffff);
    this_00 = *ppFVar7;
    if (this_00 != (FAsyncPackage2 *)0x0) {
      puVar8 = TArrayView<unsigned___int64_const_,int>::operator[]
                         ((TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_,(int)uVar1)
      ;
      iVar9 = (int)(this_00->HeaderData)._padding_;
      uVar10 = 0;
      uVar1 = *puVar8;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar10 < iVar9) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pVVar6 = (VCell *)(*pcVar2)();
            return pVVar6;
          }
          if (*(ulong64 *)((this_00->HeaderData)._padding_ + 0x20 + lVar11) == uVar1) {
            if (-1 < (int)uVar10) {
              pVVar6 = ConditionalCreateCellExport(this_00,&this_00->HeaderData,uVar10);
              return pVVar6;
            }
            break;
          }
          iVar9 = (int)(this_00->HeaderData)._padding_;
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x28;
        } while ((int)uVar10 < iVar9);
      }
    }
    pVVar6 = (VCell *)0x0;
  }
  return pVVar6;
}

// ConditionalCreateExport @ 142313710

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
FAsyncPackage2::ConditionalCreateExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  FExportObject *pFVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FTlsAutoCleanup FVar6;
  undefined1 local_res10 [8];
  code *local_38;
  undefined1 *local_30;
  
  pFVar3 = TArrayView<FExportObject,int>::operator[](&param_1->ExportsView,param_2);
  if (pFVar3->Object == (UObject *)0x0) {
    puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_30 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar4);
    FVar1 = pFVar5[8];
    FVar2 = pFVar5[9];
    pFVar5[8] = (FTlsAutoCleanup)this;
    FVar6 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
    if (this->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
      FVar6 = (FTlsAutoCleanup)0x0;
    }
    pFVar5[9] = FVar6;
    EventDrivenCreateExport(this,param_1,param_2);
    pFVar5[8] = FVar1;
    pFVar5[9] = FVar2;
  }
  pFVar3 = TArrayView<FExportObject,int>::operator[](&param_1->ExportsView,param_2);
  return pFVar3->Object;
}

// ConditionalCreateImport @ 1423137f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
FAsyncPackage2::ConditionalCreateImport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  ulong64 uVar1;
  FAsyncPackage2 *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPackageObjectIndex *pFVar5;
  UObject *pUVar6;
  FAsyncPackage2 **ppFVar7;
  ulong64 *puVar8;
  FAsyncPackageHeaderData *local_res8;
  
  pFVar5 = TArrayView<FPackageObjectIndex_const_,int>::operator[]
                     ((TArrayView<FPackageObjectIndex_const_,int> *)&param_1->_padding_,param_2);
  if ((byte)(pFVar5->TypeAndId >> 0x3e) != 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectIndex.IsPackageImport()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x202e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar2)();
      return pUVar6;
    }
  }
  pUVar6 = FPackageImportStore::GetImportObject
                     (&this->ImportStore,param_1,(FPackageObjectIndex)pFVar5->TypeAndId);
  if (pUVar6 == (UObject *)0x0) {
    uVar1 = pFVar5->TypeAndId;
    ppFVar7 = TArrayView<FAsyncPackage2_*,int>::operator[]
                        (&param_1->ImportedAsyncPackagesView,(uint)(uVar1 >> 0x20) & 0x3fffffff);
    this_00 = *ppFVar7;
    if (this_00 != (FAsyncPackage2 *)0x0) {
      puVar8 = TArrayView<unsigned___int64_const_,int>::operator[]
                         ((TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_,(int)uVar1)
      ;
      local_res8 = (FAsyncPackageHeaderData *)0x0;
      iVar4 = GetPublicExportIndex(this_00,*puVar8,&local_res8);
      if (-1 < iVar4) {
        pUVar6 = ConditionalCreateExport(this_00,local_res8,iVar4);
        return pUVar6;
      }
    }
    pUVar6 = (UObject *)0x0;
  }
  return pUVar6;
}

// ConditionalFinishLoading @ 1423138e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ConditionalFinishLoading(FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  bool bVar1;
  FAsyncLoadingThreadState2 *local_res8;
  code *local_18;
  FAsyncLoadingThreadState2 **local_10;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9366,"ConditionalFinishLoading",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2496);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9366);
  }
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncPackage2::ConditionalFinishLoading'::__l2::<lambda_1>,void,FAsyncPackage2_*>
             ::Call;
  local_res8 = param_1;
  WaitForAllDependenciesToReachState
            (this,param_1,(pdm_72c38f00)0x540,DeferredPostLoadDone,
             &this->AsyncLoadingThread->ConditionalFinishLoadingTick,
             (TFunctionRef<void___cdecl(FAsyncPackage2_*)> *)&local_18);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConditionalReleasePartialRequests @ 1423139b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ConditionalReleasePartialRequests
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  return;
}

// ConditionalSerializeCellExport @ 1423139c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

VCell * __thiscall
FAsyncPackage2::ConditionalSerializeCellExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  FExportCell *pFVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FTlsAutoCleanup FVar6;
  undefined1 local_res10 [8];
  code *local_38;
  undefined1 *local_30;
  
  ConditionalCreateCellExport(this,param_1,param_2);
  pFVar3 = TArrayView<FExportCell,int>::operator[](&param_1->CellExportsView,param_2);
  if (pFVar3->bSerialized == false) {
    puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_30 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar4);
    FVar1 = pFVar5[8];
    FVar2 = pFVar5[9];
    pFVar5[8] = (FTlsAutoCleanup)this;
    FVar6 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
    if (this->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
      FVar6 = (FTlsAutoCleanup)0x0;
    }
    pFVar5[9] = FVar6;
    EventDrivenSerializeCellExport(this,param_1,param_2,(FExportArchive *)0x0);
    pFVar5[8] = FVar1;
    pFVar5[9] = FVar2;
  }
  pFVar3 = TArrayView<FExportCell,int>::operator[](&param_1->CellExportsView,param_2);
  return pFVar3->Cell;
}

// ConditionalSerializeCellImport @ 142313aa0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

VCell * __thiscall
FAsyncPackage2::ConditionalSerializeCellImport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  ulong64 uVar1;
  FTlsAutoCleanup this_00;
  FTlsAutoCleanup FVar2;
  FTlsAutoCleanup FVar3;
  code *pcVar4;
  FAsyncPackageHeaderData *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FPackageObjectIndex *pFVar9;
  VCell *pVVar10;
  FTlsAutoCleanup *pFVar11;
  ulong64 *puVar12;
  uint *puVar13;
  FTlsAutoCleanup FVar14;
  undefined1 local_res10 [16];
  uint local_res20;
  FAsyncPackageHeaderData *local_58;
  code *local_50;
  undefined1 *local_48;
  
  pFVar9 = TArrayView<FPackageObjectIndex_const_,int>::operator[]
                     ((TArrayView<FPackageObjectIndex_const_,int> *)&param_1->_padding_,param_2);
  if (((byte)(pFVar9->TypeAndId >> 0x3e) != 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellIndex.IsPackageImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x20a0,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pVVar10 = (VCell *)(*pcVar4)();
    return pVVar10;
  }
  uVar1 = pFVar9->TypeAndId;
  pFVar11 = (FTlsAutoCleanup *)
            TArrayView<FAsyncPackage2_*,int>::operator[]
                      (&param_1->ImportedAsyncPackagesView,(uint)(uVar1 >> 0x20) & 0x3fffffff);
  this_00 = *pFVar11;
  if (this_00 != (FTlsAutoCleanup)0x0) {
    puVar12 = TArrayView<unsigned___int64_const_,int>::operator[]
                        ((TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_,(int)uVar1);
    local_58 = (FAsyncPackageHeaderData *)0x0;
    uVar7 = GetPublicExportIndex((FAsyncPackage2 *)this_00,*puVar12,&local_58);
    pFVar5 = local_58;
    if (-1 < (int)uVar7) {
      ConditionalCreateCellExport((FAsyncPackage2 *)this_00,local_58,uVar7);
      local_res20 = ~uVar7 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar7 < (pFVar5->CellExportsView).ArrayNum) {
        uVar8 = local_res20;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pVVar10 = (VCell *)(*pcVar4)();
        return pVVar10;
      }
      if ((pFVar5->CellExportsView).DataPtr[(int)uVar7].bSerialized == false) {
        puVar13 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
        local_48 = local_res10;
        local_50 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar11 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar13);
        FVar2 = pFVar11[8];
        FVar3 = pFVar11[9];
        pFVar11[8] = this_00;
        FVar14 = (FTlsAutoCleanup)
                 &(*(FAsyncLoadingThread2 **)((longlong)this_00 + 0x438))->_padding_;
        if (*(FAsyncLoadingThread2 **)((longlong)this_00 + 0x438) == (FAsyncLoadingThread2 *)0x0) {
          FVar14 = (FTlsAutoCleanup)0x0;
        }
        pFVar11[9] = FVar14;
        EventDrivenSerializeCellExport((FAsyncPackage2 *)this_00,pFVar5,uVar7,(FExportArchive *)0x0)
        ;
        pFVar11[8] = FVar2;
        pFVar11[9] = FVar3;
      }
      uVar8 = 0;
      if ((int)uVar7 < (pFVar5->CellExportsView).ArrayNum) {
        uVar8 = local_res20;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pVVar10 = (VCell *)(*pcVar4)();
        return pVVar10;
      }
      return (pFVar5->CellExportsView).DataPtr[(int)uVar7].Cell;
    }
  }
  return (VCell *)0x0;
}

// ConditionalSerializeExport @ 142313cd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FAsyncPackage2::ConditionalSerializeExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  FExportObject *pFVar1;
  UObject *pUVar2;
  FAsyncPackageScope2 local_28;
  
  pFVar1 = TArrayView<FExportObject,int>::operator[](&param_1->ExportsView,param_2);
  if (((pFVar1->Object == (UObject *)0x0) && (pFVar1->bFiltered == false)) &&
     (pFVar1->bExportLoadFailed == false)) {
    ConditionalCreateExport(this,param_1,param_2);
  }
  if (((pFVar1->Object == (UObject *)0x0) || (pFVar1->bFiltered != false)) ||
     (pFVar1->bExportLoadFailed != false)) {
    pUVar2 = (UObject *)0x0;
  }
  else {
    if ((*(uint *)&pFVar1->Object->field_0x8 >> 10 & 1) != 0) {
      FAsyncPackageScope2::FAsyncPackageScope2(&local_28,this);
      EventDrivenSerializeExport(this,param_1,param_2,(FExportArchive *)0x0);
      (local_28.ThreadContext)->AsyncPackage = local_28.PreviousPackage;
      (local_28.ThreadContext)->AsyncPackageLoader = local_28.PreviousAsyncPackageLoader;
    }
    pUVar2 = pFVar1->Object;
  }
  return pUVar2;
}

// ConditionalSerializeImport @ 142313da0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
FAsyncPackage2::ConditionalSerializeImport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  ulong64 uVar1;
  FAsyncPackage2 *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPackageObjectIndex *pFVar5;
  UObject *pUVar6;
  FAsyncPackage2 **ppFVar7;
  ulong64 *puVar8;
  FAsyncPackageHeaderData *local_res8;
  
  pFVar5 = TArrayView<FPackageObjectIndex_const_,int>::operator[]
                     ((TArrayView<FPackageObjectIndex_const_,int> *)&param_1->_padding_,param_2);
  if ((byte)(pFVar5->TypeAndId >> 0x3e) != 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectIndex.IsPackageImport()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x2047,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar2)();
      return pUVar6;
    }
  }
  pUVar6 = FPackageImportStore::GetImportObject
                     (&this->ImportStore,param_1,(FPackageObjectIndex)pFVar5->TypeAndId);
  if ((pUVar6 == (UObject *)0x0) || ((*(uint *)&pUVar6->field_0x8 >> 10 & 1) != 0)) {
    uVar1 = pFVar5->TypeAndId;
    ppFVar7 = TArrayView<FAsyncPackage2_*,int>::operator[]
                        (&param_1->ImportedAsyncPackagesView,(uint)(uVar1 >> 0x20) & 0x3fffffff);
    this_00 = *ppFVar7;
    if (this_00 != (FAsyncPackage2 *)0x0) {
      puVar8 = TArrayView<unsigned___int64_const_,int>::operator[]
                         ((TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_,(int)uVar1)
      ;
      local_res8 = (FAsyncPackageHeaderData *)0x0;
      iVar4 = GetPublicExportIndex(this_00,*puVar8,&local_res8);
      if (-1 < iVar4) {
        pUVar6 = ConditionalSerializeExport(this_00,local_res8,iVar4);
        return pUVar6;
      }
    }
    pUVar6 = (UObject *)0x0;
  }
  return pUVar6;
}

// CreateClusters @ 1423158d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

Type __thiscall
FAsyncPackage2::CreateClusters(FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  Type TVar6;
  FExportObject *pFVar7;
  
  iVar1 = (this->Data).Exports.ArrayNum;
  uVar2 = this->DeferredClusterIndex;
  while ((int)uVar2 < iVar1) {
    this->DeferredClusterIndex = uVar2 + 1;
    TVar6 = TimeOut;
    if ((int)uVar2 < (this->Data).Exports.ArrayNum) {
      TVar6 = ~uVar2 >> 0x1f;
    }
    if ((TVar6 == TimeOut) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6 = (*pcVar3)();
      return TVar6;
    }
    pFVar7 = (this->Data).Exports.DataPtr + (int)uVar2;
    if ((((pFVar7->bFiltered == false) && (pFVar7->bExportLoadFailed == false)) &&
        (cVar5 = (**(code **)(*(longlong *)pFVar7->Object + 0x20))(), cVar5 != '\0')) &&
       (((**(code **)(*(longlong *)pFVar7->Object + 0x30))(), this->DeferredClusterIndex < iVar1 &&
        (bVar4 = FAsyncLoadingThreadState2::IsTimeLimitExceeded
                           (param_1,L"CreateClusters",(UObject *)0x0), bVar4)))) break;
    uVar2 = this->DeferredClusterIndex;
  }
  TVar6 = TimeOut;
  if (this->DeferredClusterIndex == iVar1) {
    TVar6 = Complete;
  }
  return TVar6;
}

// CreateExportBundleNodes @ 142315fe0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::CreateExportBundleNodes(FAsyncPackage2 *this,FAsyncLoadEventSpec *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEventLoadNode2 *pFVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  if (0 < (this->Data).TotalExportBundleCount) {
    uVar6 = 2;
    do {
      uVar3 = 0;
      if ((int)(uVar6 - 2) < (this->Data).ExportBundleNodes.ArrayNum) {
        uVar3 = ~(uVar6 - 2) >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (this->Data).ExportBundleNodes.DataPtr + (longlong)(int)uVar6 + -2;
      pFVar4->Spec = param_1 + 7;
      pFVar4->Package = this;
      pFVar4->Prev = (FEventLoadNode2 *)0x0;
      pFVar4->Next = (FEventLoadNode2 *)0x0;
      pFVar4->DependenciesCount = 0;
      pFVar4->DependenciesCapacity = 0;
      pFVar4->Priority = 0;
      pFVar4->ImportOrExportIndex = iVar5;
      pFVar4->BarrierCount = (atomic<int>)0x1;
      pFVar4->QueueStatus = '\0';
      pFVar4->bIsUpdatingDependencies = (atomic<bool>)0x0;
      pFVar4->bIsDone = (atomic<bool>)0x0;
      if ((param_1 + 7 == (FAsyncLoadEventSpec *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Spec",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x16b1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((pFVar4->Package == (FAsyncPackage2 *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Package",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x16b2,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)(uVar6 - 1) < (this->Data).ExportBundleNodes.ArrayNum) {
        uVar3 = ~(uVar6 - 1) >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (this->Data).ExportBundleNodes.DataPtr;
      pFVar4[(longlong)(int)uVar6 + -1].Spec = param_1 + 8;
      pFVar4[(longlong)(int)uVar6 + -1].Package = this;
      pFVar4[(longlong)(int)uVar6 + -1].Prev = (FEventLoadNode2 *)0x0;
      pFVar4[(longlong)(int)uVar6 + -1].Next = (FEventLoadNode2 *)0x0;
      pFVar4[(longlong)(int)uVar6 + -1].DependenciesCount = 0;
      pFVar4[(longlong)(int)uVar6 + -1].DependenciesCapacity = 0;
      pFVar4[(longlong)(int)uVar6 + -1].Priority = 0;
      pFVar4[(longlong)(int)uVar6 + -1].ImportOrExportIndex = iVar5;
      pFVar4[(longlong)(int)uVar6 + -1].BarrierCount = (atomic<int>)0x1;
      pFVar4[(longlong)(int)uVar6 + -1].QueueStatus = '\0';
      pFVar4[(longlong)(int)uVar6 + -1].bIsUpdatingDependencies = (atomic<bool>)0x0;
      pFVar4[(longlong)(int)uVar6 + -1].bIsDone = (atomic<bool>)0x0;
      if ((param_1 + 8 == (FAsyncLoadEventSpec *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Spec",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x16b1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((pFVar4[(longlong)(int)uVar6 + -1].Package == (FAsyncPackage2 *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Package",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x16b2,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Data).ExportBundleNodes.ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (this->Data).ExportBundleNodes.DataPtr + (int)uVar6;
      pFVar4->Spec = param_1 + 9;
      pFVar4->Package = this;
      pFVar4->Prev = (FEventLoadNode2 *)0x0;
      pFVar4->Next = (FEventLoadNode2 *)0x0;
      pFVar4->DependenciesCount = 0;
      pFVar4->DependenciesCapacity = 0;
      pFVar4->Priority = 0;
      pFVar4->ImportOrExportIndex = iVar5;
      pFVar4->BarrierCount = (atomic<int>)0x1;
      pFVar4->QueueStatus = '\0';
      pFVar4->bIsUpdatingDependencies = (atomic<bool>)0x0;
      pFVar4->bIsDone = (atomic<bool>)0x0;
      if ((param_1 + 9 == (FAsyncLoadEventSpec *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Spec",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x16b1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((pFVar4->Package == (FAsyncPackage2 *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Package",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x16b2,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = iVar5 + 1;
      uVar6 = uVar6 + 3;
    } while (iVar5 < (this->Data).TotalExportBundleCount);
  }
  return;
}

// CreateLinker @ 142316330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::CreateLinker(FAsyncPackage2 *this,FLinkerInstancingContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinkerLoad *pFVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FLinkerLoad *pFVar6;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [8];
  code *local_60;
  undefined1 *local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  FLinkerLoad *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar3 = FLinkerLoad::FindExistingLinkerForPackage(this->LinkerRoot);
  if (pFVar3 == (FLinkerLoad *)0x0) {
    puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_58 = local_68;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar4);
    local_38 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_30 = `FAsyncPackage2::CreateLinker'::__l5::<lambda_1>::<lambda_invoker_cdecl>;
    local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    local_20 = pFVar3;
    pFVar3 = FLinkerLoad::CreateLinkerAsync
                       ((FUObjectSerializeContext *)pFVar5[0x2f],this->LinkerRoot,
                        &(this->Desc).PackagePathToLoad,0x281,param_1,
                        (TFunction<void___cdecl(void)> *)local_48);
    if (local_48[0] != (code *)0x0) {
      pFVar6 = (FLinkerLoad *)&stack0xffffffffffffffc8;
      if (local_20 != (FLinkerLoad *)0x0) {
        pFVar6 = local_20;
      }
      (**(code **)(pFVar6->_padding_ + 0x10))();
    }
    if (pFVar3 == (FLinkerLoad *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Linker",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1ae4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    pFVar3->LoadFlags = pFVar3->LoadFlags | 0x281;
  }
  if ((UPackage *)pFVar3->_padding_ != this->LinkerRoot) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Linker->LinkerRoot == LinkerRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x1ae5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pFVar3->AsyncRoot != (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Linker->AsyncRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x1ae6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLoadTimeProfilerTracePrivate::OutputAsyncPackageLinkerAssociation(this,pFVar3);
  pFVar3->AsyncRoot = this;
  if ((this->LinkerLoadState).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->LinkerLoadState).TypedValue.Linker = pFVar3;
  return;
}

// CreateLinkerLoadExports @ 142316530

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncPackage2::CreateLinkerLoadExports(FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  FLinkerLoad *pFVar6;
  FExportObject *pFVar7;
  ulong64 uVar8;
  code *pcVar9;
  double dVar10;
  longlong lVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  UObject *this_00;
  FUObjectItem *pFVar17;
  EInternalObjectFlags EVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  LARGE_INTEGER local_88;
  FString local_80 [4];
  
  if (((byte)this->AsyncPackageLoadingState < 5) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("AsyncPackageLoadingState >= EAsyncPackageLoadingState2::DependenciesReady"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1cd2,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  if (((this->LinkerLoadState).TypedValue.bIsCurrentlyCreatingExports != false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!LinkerLoadState->bIsCurrentlyCreatingExports",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1cd4,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  bVar13 = (this->LinkerLoadState).TypedValue.bIsCurrentlyCreatingExports;
  (this->LinkerLoadState).TypedValue.bIsCurrentlyCreatingExports = true;
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar15)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  pFVar5 = (this->LinkerLoadState).TypedValue.Linker;
  UE::FRecursiveMutex::Lock(&pFVar5->Mutex);
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar15)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  dVar12 = __real_4170000000000000;
  lVar11 = ((this->LinkerLoadState).TypedValue.Linker)->_padding_;
  do {
    while( true ) {
      if (((this->LinkerLoadState).bIsSet == false) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      if ((int)lVar11 <= (this->LinkerLoadState).TypedValue.CreateExportIndex) {
        bVar15 = true;
        goto LAB_142316bb1;
      }
      if (((this->LinkerLoadState).bIsSet == false) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar3 = (this->LinkerLoadState).TypedValue.CreateExportIndex;
      lVar20 = (longlong)(int)uVar3;
      (this->LinkerLoadState).TypedValue.CreateExportIndex = uVar3 + 1;
      if (((this->LinkerLoadState).bIsSet == false) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar6 = (this->LinkerLoadState).TypedValue.Linker;
      uVar21 = ~uVar3 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar3 < (int)pFVar6->_padding_) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      plVar19 = (longlong *)(lVar20 * 0x68 + pFVar6->_padding_);
      uVar16 = 0;
      if ((int)uVar3 < (this->Data).Exports.ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar7 = (this->Data).Exports.DataPtr;
      if (*(int *)((longlong)plVar19 + 0xc) != 0) break;
      if ((((int)plVar19[1] != 0) || (*plVar19 != 0)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("LinkerExport.OuterIndex.IsNull() && LinkerExport.ObjectName == NAME_None"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x1ced,
                              L"Trying to create a linker load export that has a null class but non null outer or name"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar7[lVar20].bWasFoundInMemory = false;
      pFVar7[lVar20].Object = (UObject *)0x0;
    }
    if (((this->LinkerLoadState).bIsSet == false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    this_00 = FLinkerLoad::CreateExport((this->LinkerLoadState).TypedValue.Linker,uVar3);
    if (this_00 == (UObject *)0x0) {
      bVar2 = *(byte *)((longlong)plVar19 + 0x4c);
      pFVar7[lVar20].bExportLoadFailed = (bool)(bVar2 >> 7);
      if (-1 < (char)bVar2) {
        pFVar7[lVar20].bFiltered = true;
      }
    }
    else {
      iVar4 = *(int *)&this_00->field_0xc;
      if ((iVar4 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x443,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      if (iVar4 < GUObjectArray.ObjObjects.NumElements) {
        pFVar17 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar4);
      }
      else {
        pFVar17 = (FUObjectItem *)0x0;
      }
      if (((uint)((ulonglong)(pFVar17->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,local_80,(UObject *)0x0,None);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Object->IsUnreachable()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x1cf6,
                            L"Trying to store an unreachable object \'%s\' in the import store");
        if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
        }
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
      }
      pFVar7[lVar20].Object = this_00;
      pFVar7[lVar20].bWasFoundInMemory = true;
      EVar18 = Async;
      if (((this->LinkerLoadState).bIsSet == false) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      uVar16 = 0;
      if ((int)uVar3 < (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      if (((this->Desc).bCanBeImported != false) &&
         (uVar8 = *(ulong64 *)
                   ((this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.
                    AllocatorInstance.Data + lVar20 * 0x48 + 0x38), uVar8 != 0)) {
        EVar18 = Async|LoaderImport;
        FGlobalImportStore::StoreGlobalObject
                  ((this->ImportStore).GlobalImportStore,(FPackageId)(this->Desc).UPackageId.Id,
                   uVar8,this_00);
      }
      iVar4 = *(int *)&this_00->field_0xc;
      if ((iVar4 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x443,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      if (iVar4 < GUObjectArray.ObjObjects.NumElements) {
        pFVar17 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar4);
        FUObjectItem::SetRootFlags(pFVar17,EVar18);
      }
      else {
        FUObjectItem::SetRootFlags((FUObjectItem *)0x0,EVar18);
      }
    }
    if (param_1->bUseTimeLimit != false) {
      QueryPerformanceCounter(&local_88);
      dVar1 = param_1->TimeLimit;
      dVar10 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
      bVar15 = dVar1 < dVar10 - param_1->StartTime;
      if ((bVar15) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint
                  (param_1->StartTime,dVar10,param_1->LastTestTime,dVar1,L"CreateLinkerLoadExports",
                   (UObject *)0x0);
        param_1->LastTestTime = dVar10;
        bVar15 = false;
        goto LAB_142316bb1;
      }
      param_1->LastTestTime = dVar10;
      if (bVar15) goto LAB_142316b7a;
    }
  } while (((GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) ||
           ((param_1->SyncLoadContextStack).ArrayNum != 0)) ||
          (bVar15 = IsInParallelLoadingThread(), bVar15));
  if (5 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
LAB_142316b7a:
  bVar15 = false;
LAB_142316bb1:
  UE::FRecursiveMutex::Unlock(&pFVar5->Mutex);
  (this->LinkerLoadState).TypedValue.bIsCurrentlyCreatingExports = bVar13;
  return bVar15;
}

// CreatePackageNodes @ 142316c10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::CreatePackageNodes(FAsyncPackage2 *this,FAsyncLoadEventSpec *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uStack_c;
  
  *(FAsyncLoadEventSpec **)this->PackageNodesMemory = param_1;
  *(FAsyncPackage2 **)(this->PackageNodesMemory + 8) = this;
  this->PackageNodesMemory[0x18] = '\0';
  this->PackageNodesMemory[0x19] = '\0';
  this->PackageNodesMemory[0x1a] = '\0';
  this->PackageNodesMemory[0x1b] = '\0';
  this->PackageNodesMemory[0x1c] = '\0';
  this->PackageNodesMemory[0x1d] = '\0';
  this->PackageNodesMemory[0x1e] = '\0';
  this->PackageNodesMemory[0x1f] = '\0';
  this->PackageNodesMemory[0x20] = '\0';
  this->PackageNodesMemory[0x21] = '\0';
  this->PackageNodesMemory[0x22] = '\0';
  this->PackageNodesMemory[0x23] = '\0';
  this->PackageNodesMemory[0x24] = '\0';
  this->PackageNodesMemory[0x25] = '\0';
  this->PackageNodesMemory[0x26] = '\0';
  this->PackageNodesMemory[0x27] = '\0';
  this->PackageNodesMemory[0x28] = '\0';
  this->PackageNodesMemory[0x29] = '\0';
  this->PackageNodesMemory[0x2a] = '\0';
  this->PackageNodesMemory[0x2b] = '\0';
  this->PackageNodesMemory[0x2c] = '\0';
  this->PackageNodesMemory[0x2d] = '\0';
  this->PackageNodesMemory[0x2e] = '\0';
  this->PackageNodesMemory[0x2f] = '\0';
  this->PackageNodesMemory[0x30] = '\0';
  this->PackageNodesMemory[0x31] = '\0';
  this->PackageNodesMemory[0x32] = '\0';
  this->PackageNodesMemory[0x33] = '\0';
  this->PackageNodesMemory[0x34] = 0xff;
  this->PackageNodesMemory[0x35] = 0xff;
  this->PackageNodesMemory[0x36] = 0xff;
  this->PackageNodesMemory[0x37] = 0xff;
  this->PackageNodesMemory[0x38] = '\x01';
  this->PackageNodesMemory[0x39] = '\0';
  this->PackageNodesMemory[0x3a] = '\0';
  this->PackageNodesMemory[0x3b] = '\0';
  this->PackageNodesMemory[0x3c] = '\0';
  this->PackageNodesMemory[0x3d] = '\0';
  this->PackageNodesMemory[0x3e] = '\0';
  if (param_1 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->PackageNodesMemory + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FAsyncPackage2 **)(this->PackageNodesMemory + 0x48) = this;
  *(FAsyncLoadEventSpec **)(this->PackageNodesMemory + 0x40) = param_1 + 1;
  this->PackageNodesMemory[0x58] = '\0';
  this->PackageNodesMemory[0x59] = '\0';
  this->PackageNodesMemory[0x5a] = '\0';
  this->PackageNodesMemory[0x5b] = '\0';
  this->PackageNodesMemory[0x5c] = '\0';
  this->PackageNodesMemory[0x5d] = '\0';
  this->PackageNodesMemory[0x5e] = '\0';
  this->PackageNodesMemory[0x5f] = '\0';
  this->PackageNodesMemory[0x60] = '\0';
  this->PackageNodesMemory[0x61] = '\0';
  this->PackageNodesMemory[0x62] = '\0';
  this->PackageNodesMemory[99] = '\0';
  this->PackageNodesMemory[100] = '\0';
  this->PackageNodesMemory[0x65] = '\0';
  this->PackageNodesMemory[0x66] = '\0';
  this->PackageNodesMemory[0x67] = '\0';
  this->PackageNodesMemory[0x68] = '\0';
  this->PackageNodesMemory[0x69] = '\0';
  this->PackageNodesMemory[0x6a] = '\0';
  this->PackageNodesMemory[0x6b] = '\0';
  this->PackageNodesMemory[0x6c] = '\0';
  this->PackageNodesMemory[0x6d] = '\0';
  this->PackageNodesMemory[0x6e] = '\0';
  this->PackageNodesMemory[0x6f] = '\0';
  this->PackageNodesMemory[0x70] = '\0';
  this->PackageNodesMemory[0x71] = '\0';
  this->PackageNodesMemory[0x72] = '\0';
  this->PackageNodesMemory[0x73] = '\0';
  this->PackageNodesMemory[0x74] = 0xff;
  this->PackageNodesMemory[0x75] = 0xff;
  this->PackageNodesMemory[0x76] = 0xff;
  this->PackageNodesMemory[0x77] = 0xff;
  this->PackageNodesMemory[0x78] = '\x01';
  this->PackageNodesMemory[0x79] = '\0';
  this->PackageNodesMemory[0x7a] = '\0';
  this->PackageNodesMemory[0x7b] = '\0';
  this->PackageNodesMemory[0x7c] = '\0';
  this->PackageNodesMemory[0x7d] = '\0';
  this->PackageNodesMemory[0x7e] = '\0';
  if (param_1 + 1 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->PackageNodesMemory + 0x48) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FAsyncPackage2 **)(this->PackageNodesMemory + 0x88) = this;
  *(FAsyncLoadEventSpec **)(this->PackageNodesMemory + 0x80) = param_1 + 2;
  this->PackageNodesMemory[0x98] = '\0';
  this->PackageNodesMemory[0x99] = '\0';
  this->PackageNodesMemory[0x9a] = '\0';
  this->PackageNodesMemory[0x9b] = '\0';
  this->PackageNodesMemory[0x9c] = '\0';
  this->PackageNodesMemory[0x9d] = '\0';
  this->PackageNodesMemory[0x9e] = '\0';
  this->PackageNodesMemory[0x9f] = '\0';
  this->PackageNodesMemory[0xa0] = '\0';
  this->PackageNodesMemory[0xa1] = '\0';
  this->PackageNodesMemory[0xa2] = '\0';
  this->PackageNodesMemory[0xa3] = '\0';
  this->PackageNodesMemory[0xa4] = '\0';
  this->PackageNodesMemory[0xa5] = '\0';
  this->PackageNodesMemory[0xa6] = '\0';
  this->PackageNodesMemory[0xa7] = '\0';
  this->PackageNodesMemory[0xa8] = '\0';
  this->PackageNodesMemory[0xa9] = '\0';
  this->PackageNodesMemory[0xaa] = '\0';
  this->PackageNodesMemory[0xab] = '\0';
  this->PackageNodesMemory[0xac] = '\0';
  this->PackageNodesMemory[0xad] = '\0';
  this->PackageNodesMemory[0xae] = '\0';
  this->PackageNodesMemory[0xaf] = '\0';
  this->PackageNodesMemory[0xb0] = '\0';
  this->PackageNodesMemory[0xb1] = '\0';
  this->PackageNodesMemory[0xb2] = '\0';
  this->PackageNodesMemory[0xb3] = '\0';
  this->PackageNodesMemory[0xb4] = 0xff;
  this->PackageNodesMemory[0xb5] = 0xff;
  this->PackageNodesMemory[0xb6] = 0xff;
  this->PackageNodesMemory[0xb7] = 0xff;
  this->PackageNodesMemory[0xb8] = '\x01';
  this->PackageNodesMemory[0xb9] = '\0';
  this->PackageNodesMemory[0xba] = '\0';
  this->PackageNodesMemory[0xbb] = '\0';
  this->PackageNodesMemory[0xbc] = '\0';
  this->PackageNodesMemory[0xbd] = '\0';
  this->PackageNodesMemory[0xbe] = '\0';
  if (param_1 + 2 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->PackageNodesMemory + 0x88) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FAsyncPackage2 **)(this->PackageNodesMemory + 200) = this;
  *(FAsyncLoadEventSpec **)(this->PackageNodesMemory + 0xc0) = param_1 + 3;
  this->PackageNodesMemory[0xd8] = '\0';
  this->PackageNodesMemory[0xd9] = '\0';
  this->PackageNodesMemory[0xda] = '\0';
  this->PackageNodesMemory[0xdb] = '\0';
  this->PackageNodesMemory[0xdc] = '\0';
  this->PackageNodesMemory[0xdd] = '\0';
  this->PackageNodesMemory[0xde] = '\0';
  this->PackageNodesMemory[0xdf] = '\0';
  this->PackageNodesMemory[0xe0] = '\0';
  this->PackageNodesMemory[0xe1] = '\0';
  this->PackageNodesMemory[0xe2] = '\0';
  this->PackageNodesMemory[0xe3] = '\0';
  this->PackageNodesMemory[0xe4] = '\0';
  this->PackageNodesMemory[0xe5] = '\0';
  this->PackageNodesMemory[0xe6] = '\0';
  this->PackageNodesMemory[0xe7] = '\0';
  this->PackageNodesMemory[0xe8] = '\0';
  this->PackageNodesMemory[0xe9] = '\0';
  this->PackageNodesMemory[0xea] = '\0';
  this->PackageNodesMemory[0xeb] = '\0';
  this->PackageNodesMemory[0xec] = '\0';
  this->PackageNodesMemory[0xed] = '\0';
  this->PackageNodesMemory[0xee] = '\0';
  this->PackageNodesMemory[0xef] = '\0';
  this->PackageNodesMemory[0xf0] = '\0';
  this->PackageNodesMemory[0xf1] = '\0';
  this->PackageNodesMemory[0xf2] = '\0';
  this->PackageNodesMemory[0xf3] = '\0';
  this->PackageNodesMemory[0xf4] = 0xff;
  this->PackageNodesMemory[0xf5] = 0xff;
  this->PackageNodesMemory[0xf6] = 0xff;
  this->PackageNodesMemory[0xf7] = 0xff;
  this->PackageNodesMemory[0xf8] = '\x01';
  this->PackageNodesMemory[0xf9] = '\0';
  this->PackageNodesMemory[0xfa] = '\0';
  this->PackageNodesMemory[0xfb] = '\0';
  this->PackageNodesMemory[0xfc] = '\0';
  this->PackageNodesMemory[0xfd] = '\0';
  this->PackageNodesMemory[0xfe] = '\0';
  if (param_1 + 3 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->PackageNodesMemory + 200) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FAsyncPackage2 **)(this->PackageNodesMemory + 0x108) = this;
  *(FAsyncLoadEventSpec **)(this->PackageNodesMemory + 0x100) = param_1 + 4;
  this->PackageNodesMemory[0x118] = '\0';
  this->PackageNodesMemory[0x119] = '\0';
  this->PackageNodesMemory[0x11a] = '\0';
  this->PackageNodesMemory[0x11b] = '\0';
  this->PackageNodesMemory[0x11c] = '\0';
  this->PackageNodesMemory[0x11d] = '\0';
  this->PackageNodesMemory[0x11e] = '\0';
  this->PackageNodesMemory[0x11f] = '\0';
  this->PackageNodesMemory[0x120] = '\0';
  this->PackageNodesMemory[0x121] = '\0';
  this->PackageNodesMemory[0x122] = '\0';
  this->PackageNodesMemory[0x123] = '\0';
  this->PackageNodesMemory[0x124] = '\0';
  this->PackageNodesMemory[0x125] = '\0';
  this->PackageNodesMemory[0x126] = '\0';
  this->PackageNodesMemory[0x127] = '\0';
  this->PackageNodesMemory[0x128] = '\0';
  this->PackageNodesMemory[0x129] = '\0';
  this->PackageNodesMemory[0x12a] = '\0';
  this->PackageNodesMemory[299] = '\0';
  this->PackageNodesMemory[300] = '\0';
  this->PackageNodesMemory[0x12d] = '\0';
  this->PackageNodesMemory[0x12e] = '\0';
  this->PackageNodesMemory[0x12f] = '\0';
  this->PackageNodesMemory[0x130] = '\0';
  this->PackageNodesMemory[0x131] = '\0';
  this->PackageNodesMemory[0x132] = '\0';
  this->PackageNodesMemory[0x133] = '\0';
  this->PackageNodesMemory[0x134] = 0xff;
  this->PackageNodesMemory[0x135] = 0xff;
  this->PackageNodesMemory[0x136] = 0xff;
  this->PackageNodesMemory[0x137] = 0xff;
  this->PackageNodesMemory[0x138] = '\x01';
  this->PackageNodesMemory[0x139] = '\0';
  this->PackageNodesMemory[0x13a] = '\0';
  this->PackageNodesMemory[0x13b] = '\0';
  this->PackageNodesMemory[0x13c] = '\0';
  this->PackageNodesMemory[0x13d] = '\0';
  this->PackageNodesMemory[0x13e] = '\0';
  if (param_1 + 4 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->PackageNodesMemory + 0x108) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FAsyncPackage2 **)(this->PackageNodesMemory + 0x148) = this;
  *(FAsyncLoadEventSpec **)(this->PackageNodesMemory + 0x140) = param_1 + 5;
  this->PackageNodesMemory[0x158] = '\0';
  this->PackageNodesMemory[0x159] = '\0';
  this->PackageNodesMemory[0x15a] = '\0';
  this->PackageNodesMemory[0x15b] = '\0';
  this->PackageNodesMemory[0x15c] = '\0';
  this->PackageNodesMemory[0x15d] = '\0';
  this->PackageNodesMemory[0x15e] = '\0';
  this->PackageNodesMemory[0x15f] = '\0';
  this->PackageNodesMemory[0x160] = '\0';
  this->PackageNodesMemory[0x161] = '\0';
  this->PackageNodesMemory[0x162] = '\0';
  this->PackageNodesMemory[0x163] = '\0';
  this->PackageNodesMemory[0x164] = '\0';
  this->PackageNodesMemory[0x165] = '\0';
  this->PackageNodesMemory[0x166] = '\0';
  this->PackageNodesMemory[0x167] = '\0';
  this->PackageNodesMemory[0x168] = '\0';
  this->PackageNodesMemory[0x169] = '\0';
  this->PackageNodesMemory[0x16a] = '\0';
  this->PackageNodesMemory[0x16b] = '\0';
  this->PackageNodesMemory[0x16c] = '\0';
  this->PackageNodesMemory[0x16d] = '\0';
  this->PackageNodesMemory[0x16e] = '\0';
  this->PackageNodesMemory[0x16f] = '\0';
  this->PackageNodesMemory[0x170] = '\0';
  this->PackageNodesMemory[0x171] = '\0';
  this->PackageNodesMemory[0x172] = '\0';
  this->PackageNodesMemory[0x173] = '\0';
  this->PackageNodesMemory[0x174] = 0xff;
  this->PackageNodesMemory[0x175] = 0xff;
  this->PackageNodesMemory[0x176] = 0xff;
  this->PackageNodesMemory[0x177] = 0xff;
  this->PackageNodesMemory[0x178] = '\x01';
  this->PackageNodesMemory[0x179] = '\0';
  this->PackageNodesMemory[0x17a] = '\0';
  this->PackageNodesMemory[0x17b] = '\0';
  this->PackageNodesMemory[0x17c] = '\0';
  this->PackageNodesMemory[0x17d] = '\0';
  this->PackageNodesMemory[0x17e] = '\0';
  if (param_1 + 5 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->PackageNodesMemory + 0x148) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FAsyncPackage2 **)(this->PackageNodesMemory + 0x188) = this;
  *(FAsyncLoadEventSpec **)(this->PackageNodesMemory + 0x180) = param_1 + 6;
  this->PackageNodesMemory[0x198] = '\0';
  this->PackageNodesMemory[0x199] = '\0';
  this->PackageNodesMemory[0x19a] = '\0';
  this->PackageNodesMemory[0x19b] = '\0';
  this->PackageNodesMemory[0x19c] = '\0';
  this->PackageNodesMemory[0x19d] = '\0';
  this->PackageNodesMemory[0x19e] = '\0';
  this->PackageNodesMemory[0x19f] = '\0';
  this->PackageNodesMemory[0x1a0] = '\0';
  this->PackageNodesMemory[0x1a1] = '\0';
  this->PackageNodesMemory[0x1a2] = '\0';
  this->PackageNodesMemory[0x1a3] = '\0';
  this->PackageNodesMemory[0x1a4] = '\0';
  this->PackageNodesMemory[0x1a5] = '\0';
  this->PackageNodesMemory[0x1a6] = '\0';
  this->PackageNodesMemory[0x1a7] = '\0';
  this->PackageNodesMemory[0x1a8] = '\0';
  this->PackageNodesMemory[0x1a9] = '\0';
  this->PackageNodesMemory[0x1aa] = '\0';
  this->PackageNodesMemory[0x1ab] = '\0';
  this->PackageNodesMemory[0x1ac] = '\0';
  this->PackageNodesMemory[0x1ad] = '\0';
  this->PackageNodesMemory[0x1ae] = '\0';
  this->PackageNodesMemory[0x1af] = '\0';
  this->PackageNodesMemory[0x1b0] = '\0';
  this->PackageNodesMemory[0x1b1] = '\0';
  this->PackageNodesMemory[0x1b2] = '\0';
  this->PackageNodesMemory[0x1b3] = '\0';
  this->PackageNodesMemory[0x1b4] = 0xff;
  this->PackageNodesMemory[0x1b5] = 0xff;
  this->PackageNodesMemory[0x1b6] = 0xff;
  this->PackageNodesMemory[0x1b7] = 0xff;
  this->PackageNodesMemory[0x1b8] = '\x01';
  this->PackageNodesMemory[0x1b9] = '\0';
  this->PackageNodesMemory[0x1ba] = '\0';
  this->PackageNodesMemory[0x1bb] = '\0';
  this->PackageNodesMemory[0x1bc] = '\0';
  this->PackageNodesMemory[0x1bd] = '\0';
  this->PackageNodesMemory[0x1be] = '\0';
  if (param_1 + 6 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)(this->PackageNodesMemory + 0x188) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->PackageNodes).DataPtr = (FEventLoadNode2 *)this->PackageNodesMemory;
  *(ulonglong *)&(this->PackageNodes).ArrayNum = CONCAT44(uStack_c,7);
  return;
}

// CreateUPackage @ 1423170d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage2::CreateUPackage(FAsyncPackage2 *this)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  EPackageFlags EVar3;
  atomic<unsigned_int> aVar4;
  FTlsAutoCleanup FVar5;
  FTlsAutoCleanup FVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  UClass *pUVar13;
  UPackage *pUVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  FLoadedPackageRef *this_00;
  FUObjectItem *pFVar17;
  FPackageId FVar18;
  FName FVar19;
  TEventRef<unsigned_int> TVar20;
  longlong *plVar21;
  EInternalObjectFlags EVar22;
  FTlsAutoCleanup FVar23;
  ForElementType<FSetElementId> FVar24;
  FPackagePath *this_01;
  UObjectBase *this_02;
  FName *this_03;
  FPackageId *pFVar25;
  undefined1 auStackY_268 [32];
  undefined1 local_218 [4];
  int local_214;
  undefined8 local_210;
  undefined8 local_208;
  FPackageId local_200;
  FName local_1f8;
  FScriptContainerElement *local_1f0;
  FName local_1e8;
  FString local_1e0;
  code *local_1d0;
  undefined1 *local_1c8;
  FName local_1b8 [3];
  FName local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulong64 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((this->LinkerRoot != (UPackage *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!LinkerRoot",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2c39,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId11324,"UPackageFind",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2c3c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11324);
  }
  FVar19 = (this->Desc).UPackageName;
  pUVar13 = Z_Construct_UClass_UPackage_NoRegister();
  pUVar14 = (UPackage *)StaticFindObjectFast(pUVar13,(UObject *)0x0,FVar19,None,RF_NoFlags,Borrowed)
  ;
  this->LinkerRoot = pUVar14;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this->LinkerRoot == (UPackage *)0x0) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId11329,"UPackageCreate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2c41);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11329);
    }
    puVar15 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_1c8 = local_218;
    local_1d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar16 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1d0,puVar15);
    FVar5 = pFVar16[8];
    FVar6 = pFVar16[9];
    pFVar16[8] = (FTlsAutoCleanup)this;
    FVar23 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
    if (this->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
      FVar23 = (FTlsAutoCleanup)0x0;
    }
    pFVar16[9] = FVar23;
    FVar19 = (this->Desc).UPackageName;
    if (FVar19 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)0x0,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar13 = Z_Construct_UClass_UPackage_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar13);
    local_c8._8_8_ = (UObject *)0x0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_8_ = FVar19;
    pUVar14 = (UPackage *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar21 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    this->LinkerRoot = pUVar14;
    this->bCreatedLinkerRoot = true;
    pFVar16[8] = FVar5;
    pFVar16[9] = FVar6;
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this->LinkerRoot,RF_WillBeLoaded|RF_Public);
  UPackage::SetLoadedPath(this->LinkerRoot,&(this->Desc).PackagePathToLoad);
  pFVar25 = &(this->Desc).UPackageId;
  puVar1 = &this->LinkerRoot->field_0x28;
  *puVar1 = *puVar1 ^ ((this->Desc).bCanBeImported << 2 ^ this->LinkerRoot->field_0x28) & 4U;
  (this->LinkerRoot->PackageId).Id = pFVar25->Id;
  EVar3 = (this->Desc).PackageFlags;
  aVar4 = this->LinkerRoot->PackageFlagsPrivate;
  if ((atomic<unsigned_int>)((uint)aVar4 | EVar3) != aVar4) {
    LOCK();
    paVar2 = &this->LinkerRoot->PackageFlagsPrivate;
    *paVar2 = (atomic<unsigned_int>)((uint)*paVar2 | EVar3);
    UNLOCK();
  }
  EVar22 = Async|LoaderImport;
  if ((this->Desc).bCanBeImported == false) {
    EVar22 = Async;
  }
  UObjectBaseUtility::SetInternalFlags((UObjectBaseUtility *)this->LinkerRoot,EVar22);
  if ((this->Desc).bCanBeImported != false) {
    this_00 = FGlobalImportStore::FindPackageRefChecked
                        (&this->AsyncLoadingThread->GlobalImportStore,(FPackageId)pFVar25->Id,
                         (this->Desc).UPackageName);
    pUVar14 = FLoadedPackageRef::GetPackage(this_00);
    if (pUVar14 == (UPackage *)0x0) {
      pUVar14 = this->LinkerRoot;
      if ((this_00->bAreAllPublicExportsLoaded != false) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bAreAllPublicExportsLoaded",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x568,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((this_00->bIsMissing != false) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsMissing",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x569,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((this_00->bHasFailed != false) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bHasFailed",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x56a,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((-1 < this_00->PackageObjectIndex) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!HasPackage()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x56b,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (pUVar14 == (UPackage *)0x0) {
        local_210 = 0;
        (this_00->OriginalPackageName).ComparisonIndex = 0;
        (this_00->OriginalPackageName).Number = 0;
        this_00->PackageObjectIndex = -1;
      }
      else {
        this_00->PackageObjectIndex = *(int *)((longlong)&pUVar14->_padding_ + 4);
        uVar10 = *(undefined4 *)((longlong)&pUVar14->_padding_ + 4);
        (this_00->OriginalPackageName).ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&pUVar14->_padding_;
        (this_00->OriginalPackageName).Number = uVar10;
      }
    }
    else if (pUVar14 != this->LinkerRoot) {
      if (2 < (byte)LogStreaming._0_1_) {
        local_214 = this_00->RefCount;
        local_200.Id = (pUVar14->PackageId).Id;
        ::LexToString(&local_158,&local_200);
        local_1f8 = (FName)pUVar14->_padding_;
        ::FName::ToString(&local_1f8,&local_1e0);
        local_1f0 = (FScriptContainerElement *)L"";
        if (local_1e0.Data.ArrayNum != 0) {
          local_1f0 = local_1e0.Data.AllocatorInstance.Data;
        }
        ::LexToString(&local_168,&(this->Desc).PackageIdToLoad);
        FVar19 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
        ::FName::ToString((FName *)FVar19,&local_178);
        ::LexToString(&local_188,&(this->Desc).UPackageId);
        ::FName::ToString(&(this->Desc).UPackageName,&local_198);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
      iVar12 = this_00->PackageObjectIndex;
      pUVar14 = this->LinkerRoot;
      if (iVar12 < 0) {
        this_02 = (UObjectBase *)0x0;
      }
      else {
        if ((iVar12 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                ,0x443,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_02 = _DAT_00000008;
        if (iVar12 < GUObjectArray.ObjObjects.NumElements) {
          pFVar17 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar12);
          this_02 = (pFVar17->field1_0x8).Object;
        }
      }
      uVar7._0_4_ = this_02[1].ObjectFlags;
      uVar7._4_4_ = this_02[1].InternalIndex;
      if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
          GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
        FVar24 = (ForElementType<FSetElementId>)0x154ba3c98;
        if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
        {
          FVar24 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
        }
        for (iVar12 = *(int *)((longlong)FVar24 +
                              ((ulonglong)(GAsyncLoading2_DebugPackageIds.HashSize - 1) &
                              uVar7 & 0xffffffff) * 4); iVar12 != -1;
            iVar12 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar12 * 0x10)) {
          if (*(ulonglong *)
               (GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10) == uVar7) {
            bVar11 = FWindowsPlatformMisc::IsDebuggerPresent();
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            break;
          }
        }
      }
      this_00->bAreAllPublicExportsLoaded = false;
      this_00->bIsMissing = false;
      this_00->bHasFailed = false;
      this_00->bHasBeenLoadedDebug = false;
      this_00->PackageObjectIndex = *(int *)((longlong)&pUVar14->_padding_ + 4);
      uVar10 = *(undefined4 *)((longlong)&pUVar14->_padding_ + 4);
      (this_00->OriginalPackageName).ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&pUVar14->_padding_;
      (this_00->OriginalPackageName).Number = uVar10;
      UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)this_02,LoaderImport);
      local_1e8 = (this_02->NamePrivate).Name;
      FVar18 = FPackageId::FromName(local_1b8);
      uVar8 = *(undefined8 *)FVar18.Id;
      this_02[1].ObjectFlags = (int)uVar8;
      this_02[1].InternalIndex = (int)((ulonglong)uVar8 >> 0x20);
    }
  }
  pFVar25 = &(this->Desc).UPackageId;
  this_01 = &(this->Desc).PackagePathToLoad;
  this_03 = &(this->Desc).UPackageName;
  if (this->bCreatedLinkerRoot == false) {
    if (GAsyncLoading2_VerboseLogFilter != 2) {
      if ((GAsyncLoading2_VerboseLogFilter == 1) &&
         (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
          GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar24 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar24 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar12 = *(int *)((longlong)FVar24 +
                         (ulonglong)
                         (GAsyncLoading2_VerbosePackageIds.HashSize - 1U & (uint)pFVar25->Id) * 4);
        if (iVar12 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10) ==
                pFVar25->Id) goto LAB_142317949;
            iVar12 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      goto LAB_142317a30;
    }
LAB_142317949:
    if ((byte)LogStreaming._0_1_ < 7) goto LAB_142317a30;
    ::LexToString(&local_d8,&(this->Desc).PackageIdToLoad);
    FVar19 = FPackagePath::GetPackageFName(this_01);
    ::FName::ToString((FName *)FVar19,&local_e8);
    ::LexToString(&local_f8,pFVar25);
    ::FName::ToString(this_03,&local_108);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (GAsyncLoading2_VerboseLogFilter != 2) {
      if ((GAsyncLoading2_VerboseLogFilter == 1) &&
         (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
          GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar24 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar24 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar12 = *(int *)((longlong)FVar24 +
                         (ulonglong)
                         (GAsyncLoading2_VerbosePackageIds.HashSize - 1U & (uint)pFVar25->Id) * 4);
        if (iVar12 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10) ==
                pFVar25->Id) goto LAB_1423177f9;
            iVar12 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      goto LAB_142317a30;
    }
LAB_1423177f9:
    if ((byte)LogStreaming._0_1_ < 7) goto LAB_142317a30;
    ::LexToString(&local_118,&(this->Desc).PackageIdToLoad);
    FVar19 = FPackagePath::GetPackageFName(this_01);
    ::FName::ToString((FName *)FVar19,&local_128);
    ::LexToString(&local_138,pFVar25);
    ::FName::ToString(this_03,&local_148);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_d8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
      local_d8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
LAB_142317a30:
  if (*this_03 != (FName)0x0) {
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_208 = 0;
      TVar20 = (TEventRef<unsigned_int>)&local_208;
    }
    else {
      TVar20 = FStringTrace::GetNameRef(&local_1a0);
    }
    uVar8 = *(undefined8 *)TVar20;
    if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FPackagePackageMappingFields>((TLogScope<0> *)&local_48);
      *local_48 = pFVar25->Id;
      *(int *)(local_48 + 1) = (int)uVar8;
      *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
    }
  }
  return;
}

// DetachLinker @ 1423184e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::DetachLinker(FAsyncPackage2 *this)

{
  int iVar1;
  FLinkerLoad *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  if (((this->LinkerLoadState).bIsSet != false) &&
     ((this->LinkerLoadState).TypedValue.Linker != (FLinkerLoad *)0x0)) {
    if ((this->LinkerLoadState).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->LinkerLoadState).TypedValue.Linker;
    iVar1 = (int)pFVar2->_padding_;
    lVar5 = pFVar2->_padding_;
    lVar6 = (longlong)iVar1 * 0x38 + lVar5;
    while( true ) {
      if ((int)pFVar2->_padding_ != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (lVar5 == lVar6) break;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined4 *)(lVar5 + 0x1c) = 0xffffffff;
      lVar5 = lVar5 + 0x38;
    }
    if ((this->LinkerLoadState).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((this->LinkerLoadState).TypedValue.Linker)->AsyncRoot != this) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkerLoadState->Linker->AsyncRoot == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1afa,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->LinkerLoadState).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ((this->LinkerLoadState).TypedValue.Linker)->AsyncRoot = (void *)0x0;
    if ((this->LinkerLoadState).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (this->LinkerLoadState).TypedValue.Linker = (FLinkerLoad *)0x0;
  }
  return;
}

// DumpState @ 142318ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage2::DumpState(FAsyncPackage2 *this)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  FString local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (2 < (byte)LogStreaming._0_1_) {
    ::FName::ToString(&(this->Desc).UPackageName,&local_78);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  DumpStateImpl(this,(TSet<FAsyncPackage2_*,DefaultKeyFuncs<FAsyncPackage2_*,0>,FDefaultSetAllocator>
                      *)local_68,0,
                (TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
                 *)0x0);
  if (2 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// DumpStateImpl @ 142318c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncPackage2::DumpStateImpl
          (FAsyncPackage2 *this,
          TSet<FAsyncPackage2_*,DefaultKeyFuncs<FAsyncPackage2_*,0>,FDefaultSetAllocator> *param_1,
          int param_2,
          TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
          *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FAsyncPackage2 **ppFVar2;
  FAsyncLoadingThread2 *pFVar3;
  FAsyncLoadEventQueue2 *pFVar4;
  longlong lVar5;
  FAsyncPackage2 *pFVar6;
  FAsyncPackage2 *pFVar7;
  ForElementType<FSetElementId> FVar8;
  code *pcVar9;
  TSet<FAsyncPackage2_*,DefaultKeyFuncs<FAsyncPackage2_*,0>,FDefaultSetAllocator> *pTVar10;
  int iVar11;
  bool bVar12;
  FEventLoadNode2 *pFVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  uint uVar17;
  TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
  *pTVar18;
  byte bVar19;
  FAsyncPackage2 **ppFVar20;
  ForAnyElementType FVar21;
  undefined1 auStackY_2a8 [32];
  byte local_278;
  int local_270 [2];
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_266 [2];
  int local_264;
  uint local_260;
  uint local_25c;
  TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_> local_258;
  FAsyncPackage2 *local_248;
  TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
  *local_240;
  undefined1 **local_238;
  undefined1 *local_230;
  FAsyncPackage2 **local_228;
  undefined1 **local_220;
  undefined1 *local_218;
  FAsyncPackage2 *local_210;
  FAsyncPackage2 *local_208;
  FEventLoadNode2 *local_200;
  TSet<FAsyncPackage2_*,DefaultKeyFuncs<FAsyncPackage2_*,0>,FDefaultSetAllocator> *local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  undefined1 *local_180;
  undefined1 *local_178;
  uint local_170;
  undefined4 uStack_16c;
  undefined1 **ppuStack_168;
  FAsyncPackage2 *local_160;
  int *local_158;
  undefined1 **local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  code *local_d8 [2];
  undefined **local_c8;
  undefined8 local_c0;
  undefined1 **ppuStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_270[0] = param_2;
  local_248 = this;
  local_240 = param_3;
  local_208 = this;
  local_1f8 = param_1;
  TSet<FAsyncPackage2_*,DefaultKeyFuncs<FAsyncPackage2_*,0>,FDefaultSetAllocator>::
  Emplace<FAsyncPackage2_*>(param_1,&local_210,(bool *)&local_208);
  local_230 = local_266;
  if (2 < (byte)LogStreaming._0_1_) {
    ::LexToString((EAsyncPackageLoadingState2)this->AsyncPackageLoadingState);
    ::FName::ToString(&(this->Desc).UPackageName,&local_148);
    ::LexToString((this->Desc).Loader);
    ::FString::PrintfImpl(&local_1f0,L"%s package %s state %s");
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (((local_270[0] < 0) || (0xff < local_270[0])) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                            ,0x272,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
  }
  local_a8._44_4_ = 0x80;
  local_a8._0_8_ = 0;
  local_220 = &local_230;
  local_218 = &local_268;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_a8._48_4_ = 0xffffffff;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  if (param_3 ==
      (TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
       *)0x0) {
    pFVar3 = this->AsyncLoadingThread;
    local_180 = &local_268;
    local_178 = local_a8;
    param_3 = (TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
               *)local_a8;
    local_238 = &local_180;
    local_240 = param_3;
    for (pTVar18 = &pFVar3->AsyncPackageLookup;
        pTVar18 !=
        (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
         *)&pFVar3->ExternalReadQueue;
        pTVar18 = (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
                   *)&pTVar18->field_0x58) {
      if ((pTVar18 ==
           (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
            *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                              ,0x43,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      AcquireSRWLockExclusive((PSRWLOCK)pTVar18);
      `TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
      ::ForEach<`FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>_>'::__l2::<lambda_1>::operator()
                (&local_238,
                 (TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
                  *)&pTVar18->field_0x8);
      if (pTVar18 !=
          (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
           *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)pTVar18);
      }
    }
  }
  pFVar3 = this->AsyncLoadingThread;
  local_158 = local_270;
  local_150 = &local_230;
  local_228 = &local_160;
  local_160 = this;
  for (pTVar18 = &pFVar3->AsyncPackageLookup;
      pTVar18 !=
      (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
       *)&pFVar3->ExternalReadQueue;
      pTVar18 = (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
                 *)&pTVar18->field_0x58) {
    if ((pTVar18 ==
         (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
          *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)pTVar18);
    `TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
    ::ForEach<`FAsyncPackage2::DumpStateImpl'::__l24::<lambda_6>_>'::__l2::<lambda_1>::operator()
              (&local_228,
               (TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>
                *)&pTVar18->field_0x8);
    if (pTVar18 !=
        (TStripedMap<32,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
         *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pTVar18);
    }
  }
  bVar19 = 0;
  do {
    iVar16 = local_270[0] + 1;
    pFVar13 = TArrayView<FEventLoadNode2,int>::operator[](&this->PackageNodes,(uint)bVar19);
    `FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()
              (&local_220,param_3,(wchar_t *)0x0,pFVar13,iVar16);
    bVar19 = bVar19 + 1;
  } while (bVar19 < 7);
  local_260 = 0;
  if (0 < (this->Data).TotalExportBundleCount) {
    local_264 = 0;
    do {
      uVar14 = local_260;
      iVar16 = local_264;
      ::FString::PrintfImpl(&local_1d0,L"ExportBundle %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_1d0.Data.ArrayNum != 0) {
        FVar21.Data = local_1d0.Data.AllocatorInstance.Data;
      }
      uVar17 = 0;
      local_278 = 0;
      do {
        iVar11 = local_270[0];
        if (((uint)(this->Data).TotalExportBundleCount <= uVar14) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExportBundleIndex < uint32(Data.TotalExportBundleCount)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                ,0x25bb,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar13 = TArrayView<FEventLoadNode2,int>::operator[]
                            (&(this->Data).ExportBundleNodes,uVar17 + iVar16);
        pFVar4 = pFVar13->Spec->EventQueue;
        lpCriticalSection = &pFVar4->ExternalCritical;
        local_200 = pFVar13;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (((pFVar4->LocalQueue).InternalQueues.ArrayNum == 0) &&
           ((pFVar4->ExternalQueue).InternalQueues.ArrayNum == 0)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (((pFVar13->DependenciesCount != 0) || (pFVar13->BarrierCount != (atomic<int>)0x0)) ||
           (!bVar12)) {
          if ((FVar21.Data != (FScriptContainerElement *)0x0) && (2 < (byte)LogStreaming._0_1_)) {
            TCString<wchar_t>::Spc(iVar11 + 1);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          }
          uVar14 = iVar11 + 2;
          local_25c = uVar14;
          if (2 < (byte)LogStreaming._0_1_) {
            if ((0xff < uVar14) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                    ,0x272,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          }
          local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_258.ArrayNum = 0;
          local_258.ArrayMax = 0;
          TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
          ::MultiFind<TSizedDefaultAllocator<32>_>(local_240,pFVar13,&local_258,false);
          iVar16 = local_258.ArrayNum;
          pFVar1 = local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 8;
          FVar21.Data = local_258.AllocatorInstance.Data;
          while( true ) {
            if (local_258.ArrayNum != iVar16) {
              local_267 = 0;
              `TCheckedPointerIterator<FEventLoadNode2_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_267);
            }
            if (FVar21.Data == pFVar1) break;
            if (2 < (byte)LogStreaming._0_1_) {
              lVar5 = *(longlong *)(*(longlong *)FVar21.Data + 8);
              ::LexToString(*(EAsyncPackageLoadingState2 *)(lVar5 + 0x494));
              ::FName::ToString((FName *)(lVar5 + 0x210),&local_138);
              ::LexToString(*(EPackageLoader *)(lVar5 + 0x226));
              ::FString::PrintfImpl(&local_1e0,L"%s package %s state %s");
              if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data.AllocatorInstance.Data);
              }
              uVar14 = local_25c;
              if ((((int)(local_25c + 1) < 0) || (0xff < (int)(local_25c + 1))) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                      ,0x272,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
            }
            FVar21.Data = FVar21.Data + 8;
          }
          FVar21.Data = (FScriptContainerElement *)0x0;
          ppuStack_168 = local_220;
          local_c8 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<``FAsyncPackage2::DumpStateImpl'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
                      ::_vftable_;
          local_c0._4_4_ = uStack_16c;
          local_c0._0_4_ = uVar14;
          local_d8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void,FEventLoadNode2_*>
                        ::Call;
          local_b0 = 0;
          ppuStack_b8 = local_220;
          local_170 = uVar14;
          `FAsyncPackage2::DumpStateImpl'::__l2::<lambda_3>::operator()
                    (local_218,local_200,(TFunction<void___cdecl(FEventLoadNode2_*)> *)local_d8);
          uVar14 = local_260;
          if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.AllocatorInstance.Data);
            uVar14 = local_260;
          }
        }
        this = local_248;
        iVar16 = local_264;
        local_278 = local_278 + 1;
        uVar17 = (uint)local_278;
      } while (local_278 < 3);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      local_260 = uVar14 + 1;
      local_264 = iVar16 + 3;
    } while ((int)local_260 < (this->Data).TotalExportBundleCount);
  }
  ppFVar20 = (this->Data).ImportedAsyncPackages.DataPtr;
  ppFVar2 = ppFVar20 + (this->Data).ImportedAsyncPackages.ArrayNum;
  pFVar6 = local_248;
  for (; local_248 = pFVar6, ppFVar20 != ppFVar2; ppFVar20 = ppFVar20 + 1) {
    pFVar6 = *ppFVar20;
    if (((pFVar6 != (FAsyncPackage2 *)0x0) && ((byte)pFVar6->AsyncPackageLoadingState < 0x14)) &&
       (2 < (byte)LogStreaming._0_1_)) {
      ::LexToString((EAsyncPackageLoadingState2)pFVar6->AsyncPackageLoadingState);
      ::FName::ToString(&(pFVar6->Desc).UPackageName,&local_128);
      ::LexToString((pFVar6->Desc).Loader);
      if (((local_270[0] < 0) || (0xff < local_270[0])) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                              ,0x272,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = local_248;
  }
  pFVar7 = (pFVar6->AllDependenciesSetupState).WaitingForPackage;
  if ((pFVar7 != (FAsyncPackage2 *)0x0) && (2 < (byte)LogStreaming._0_1_)) {
    ::LexToString((EAsyncPackageLoadingState2)pFVar7->AsyncPackageLoadingState);
    ::FName::ToString(&(pFVar7->Desc).UPackageName,&local_118);
    ::LexToString((pFVar7->Desc).Loader);
    ::FString::PrintfImpl(&local_1c0,L"%s package %s state %s");
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (((local_270[0] < 0) || (0xff < local_270[0])) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                            ,0x272,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = (pFVar6->AllDependenciesImportState).WaitingForPackage;
  if ((pFVar7 != (FAsyncPackage2 *)0x0) && (2 < (byte)LogStreaming._0_1_)) {
    ::LexToString((EAsyncPackageLoadingState2)pFVar7->AsyncPackageLoadingState);
    ::FName::ToString(&(pFVar7->Desc).UPackageName,&local_108);
    ::LexToString((pFVar7->Desc).Loader);
    ::FString::PrintfImpl(&local_1b0,L"%s package %s state %s");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (((local_270[0] < 0) || (0xff < local_270[0])) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                            ,0x272,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = (pFVar6->AllDependenciesPostLoadReadyState).WaitingForPackage;
  if ((pFVar7 != (FAsyncPackage2 *)0x0) && (2 < (byte)LogStreaming._0_1_)) {
    ::LexToString((EAsyncPackageLoadingState2)pFVar7->AsyncPackageLoadingState);
    ::FName::ToString(&(pFVar7->Desc).UPackageName,&local_f8);
    ::LexToString((pFVar7->Desc).Loader);
    ::FString::PrintfImpl(&local_1a0,L"%s package %s state %s");
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (((local_270[0] < 0) || (0xff < local_270[0])) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                            ,0x272,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = (pFVar6->AllDependenciesFullyLoadedState).WaitingForPackage;
  if ((pFVar7 != (FAsyncPackage2 *)0x0) && (2 < (byte)LogStreaming._0_1_)) {
    ::LexToString((EAsyncPackageLoadingState2)pFVar7->AsyncPackageLoadingState);
    ::FName::ToString(&(pFVar7->Desc).UPackageName,&local_e8);
    ::LexToString((pFVar7->Desc).Loader);
    ::FString::PrintfImpl(&local_190,L"%s package %s state %s");
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (((local_270[0] < 0) || (0xff < local_270[0])) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                            ,0x272,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  ppFVar20 = (pFVar6->Data).ImportedAsyncPackages.DataPtr;
  ppFVar2 = ppFVar20 + (pFVar6->Data).ImportedAsyncPackages.ArrayNum;
  pTVar10 = local_1f8;
  do {
    local_1f8 = pTVar10;
    if (ppFVar20 == ppFVar2) {
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      return;
    }
    pFVar6 = *ppFVar20;
    if ((pFVar6 != (FAsyncPackage2 *)0x0) && ((byte)pFVar6->AsyncPackageLoadingState < 0x14)) {
      uVar14 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
        FVar8 = (pTVar10->Hash).SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&pTVar10->Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar8;
        }
        iVar16 = *(int *)((longlong)FVar15 +
                         (ulonglong)(pTVar10->HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
        if (iVar16 != -1) {
          do {
            if (*(FAsyncPackage2 **)(*(longlong *)&pTVar10->Elements + (longlong)iVar16 * 0x10) ==
                pFVar6) goto LAB_142319943;
            iVar16 = *(int *)(*(longlong *)&pTVar10->Elements + 8 + (longlong)iVar16 * 0x10);
          } while (iVar16 != -1);
        }
      }
      if (2 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      DumpStateImpl(pFVar6,pTVar10,0,local_240);
    }
LAB_142319943:
    ppFVar20 = ppFVar20 + 1;
    pTVar10 = local_1f8;
  } while( true );
}

// EndAsyncLoad @ 1423199b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::EndAsyncLoad(FAsyncPackage2 *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if ((this->AsyncLoadingThread->PackagesWithRemainingWorkCounter).PackagesWithRemainingWorkCounter
      == (atomic<int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncLoadingThread.IsAsyncLoadingPackages()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x2c2b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
  EndLoad((FUObjectSerializeContext *)pFVar5[0x2f]);
  bVar3 = IsInGameThread();
  if (bVar3) {
    piVar1 = &this->AsyncLoadingThread->AsyncLoadingTickCounter;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncLoadingTickCounter >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1128,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// EventDrivenCreateCellExport @ 142319c80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::EventDrivenCreateCellExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2,FExportArchive *param_3
          )

{
  VCell *pVVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  FCellExportMapEntry *pFVar5;
  FExportCell *pFVar6;
  FIoBuffer *pFVar7;
  ulong64 uVar8;
  int iVar9;
  FMappedName local_res8;
  FExportArchive local_118;
  char local_30;
  
  iVar9 = param_2 - (int)param_1->_padding_;
  pFVar5 = TArrayView<FCellExportMapEntry_const_,int>::operator[]
                     ((TArrayView<FCellExportMapEntry_const_,int> *)&param_1->_padding_,iVar9);
  pFVar6 = TArrayView<FExportCell,int>::operator[](&param_1->CellExportsView,iVar9);
  pVVar1 = pFVar6->Cell;
  if (pVVar1 != (VCell *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Cell",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x22cf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30 = '\0';
  if (param_3 == (FExportArchive *)0x0) {
    pFVar7 = FIoRequest::GetResultOrDie(&(this->SerializationState).IoRequest);
    if (local_30 != '\0') {
      local_118._padding_ = (longlong)&___7FExportArchive__6B_;
      FArchive::~FArchive((FArchive *)&local_118);
    }
    param_3 = FExportArchive::FExportArchive(&local_118,pFVar7);
    local_30 = '\x01';
    InitializeExportArchive(this,param_3,false);
  }
  ProcessExportDependencies(this,param_1,param_2,ExportCommandType_Create);
  uVar8 = pFVar5->CookedSerialOffset;
  uVar2 = pFVar5->CookedSerialLayoutSize;
  param_3->CurrentExport = (UObject *)0x0;
  uVar8 = *(uint *)(param_3->HeaderData->_padding_ + 4) + uVar8;
  param_3->ExportSerialSize = uVar2;
  param_3->ExportSerialOffset = uVar8;
  *(longlong *)param_3->_padding_ = uVar8 + ((longlong *)param_3->_padding_)[2];
  FNameMap::GetName((FNameMap *)&param_1->_padding_,&local_res8);
  param_3->CurrentExport = (UObject *)0x0;
  param_3->ExportSerialOffset = 0;
  param_3->ExportSerialSize = 0;
  *(undefined8 *)param_3->_padding_ = ((undefined8 *)param_3->_padding_)[2];
  if (((this->Desc).bCanBeImported != false) && (pFVar5->PublicExportHash != 0)) {
    FGlobalImportStore::StoreGlobalCell
              ((this->ImportStore).GlobalImportStore,(FPackageId)(this->Desc).UPackageId.Id,
               pFVar5->PublicExportHash,pVVar1);
  }
  if (local_30 != '\0') {
    local_118._padding_ = (longlong)&___7FExportArchive__6B_;
    FArchive::~FArchive((FArchive *)&local_118);
  }
  return;
}

// EventDrivenCreateExport @ 142319e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FAsyncPackage2::EventDrivenCreateExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2)

{
  uint uVar1;
  UObjectBaseUtility *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UObjectBase *this_00;
  longlong lVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  FExportMapEntry *pFVar11;
  FExportObject *pFVar12;
  UClass *pUVar13;
  UPackage *pUVar14;
  FName FVar15;
  UClass *pUVar16;
  UObject *pUVar17;
  TEventRef<unsigned_int> TVar18;
  FUObjectItem *pFVar19;
  FString *pFVar20;
  FWriteBuffer *pFVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ForElementType<FSetElementId> FVar24;
  ForAnyElementType FVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStackY_638 [32];
  FName local_5e0;
  FExportObject *local_5d8;
  undefined1 local_5d0 [4];
  EInternalObjectFlags local_5cc;
  FMappedName local_5c8;
  FExportMapEntry *local_5c0;
  UClass *local_5b0;
  FScriptContainerElement *local_5a8;
  FScriptContainerElement *local_5a0;
  FName local_598;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_590;
  undefined8 local_580;
  FString local_578;
  longlong local_568;
  longlong local_560;
  FScriptContainerElement *local_558;
  FName local_550;
  FCreateExportScope local_548;
  FString local_540 [3];
  FName local_508;
  FName local_500;
  FName local_4f8 [5];
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  undefined1 local_d8 [128];
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_638;
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8544,"CreateExport",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2160);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8544);
  }
  pFVar11 = TArrayView<FExportMapEntry_const_,int>::operator[]
                      ((TArrayView<FExportMapEntry_const_,int> *)&param_1->_padding_,param_2);
  local_5c0 = pFVar11;
  pFVar12 = TArrayView<FExportObject,int>::operator[](&param_1->ExportsView,param_2);
  local_5d8 = pFVar12;
  if ((pFVar12->Object != (UObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2165,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FLoadTimeProfilerTracePrivate::FCreateExportScope::FCreateExportScope
            (&local_548,this,&pFVar12->Object);
  if (CpuChannel->Enabled < 0) {
    local_5e0 = FNameMap::GetName((FNameMap *)&param_1->_padding_,&local_5c8);
    local_5e0 = *(FName *)local_5e0;
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8555,"ObjectNameFixup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x216b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8555);
    local_5e0 = FNameMap::GetName((FNameMap *)&param_1->_padding_,&local_5c8);
    local_5e0 = *(FName *)local_5e0;
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar9 = AsyncLoading2_ShouldSkipLoadingExport(pFVar11->FilterFlags);
  pFVar12->bFiltered = bVar9;
  if (bVar9) {
    if (pFVar12->bExportLoadFailed != false) goto LAB_14231b801;
    if (GAsyncLoading2_VerboseLogFilter != 2) {
      if ((GAsyncLoading2_VerboseLogFilter == 1) &&
         (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
          GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar24 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar24 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar10 = *(int *)((longlong)FVar24 +
                         (ulonglong)
                         (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                         (uint)(this->Desc).UPackageId.Id) * 4);
        if (iVar10 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar10 * 0x10) ==
                (this->Desc).UPackageId.Id) goto LAB_14231b9b9;
            iVar10 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
      }
      goto LAB_14231bae7;
    }
LAB_14231b9b9:
    if ((byte)LogStreaming._0_1_ < 6) goto LAB_14231bae7;
    ::FName::ToString(&local_5e0,&local_4d0);
    ::LexToString(&local_f0,&(this->Desc).PackageIdToLoad);
    FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
    ::FName::ToString((FName *)FVar15,&local_100);
    ::LexToString(&local_110,&(this->Desc).UPackageId);
    ::FName::ToString(&(this->Desc).UPackageName,&local_120);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (pFVar12->bExportLoadFailed == false) {
      ProcessExportDependencies(this,param_1,param_2,ExportCommandType_Create);
      if ((pFVar11->ClassIndex).TypeAndId == 0xffffffffffffffff) {
        pUVar13 = Z_Construct_UClass_UClass_NoRegister();
      }
      else {
        pUVar13 = CastEventDrivenIndexToObject<UClass>
                            (this,param_1,(FPackageObjectIndex)(pFVar11->ClassIndex).TypeAndId,true)
        ;
      }
      local_5b0 = pUVar13;
      if ((pFVar11->OuterIndex).TypeAndId == 0xffffffffffffffff) {
        pUVar14 = this->LinkerRoot;
      }
      else {
        pUVar14 = (UPackage *)
                  EventDrivenIndexToObject
                            (this,param_1,(FPackageObjectIndex)(pFVar11->OuterIndex).TypeAndId,false
                            );
      }
      if (pUVar13 == (UClass *)0x0) {
        if (1 < (byte)LogStreaming._0_1_) {
          ::FName::ToString(&local_5e0,&local_470);
          GetNameFromPackageObjectIndex
                    (this,&local_480,(FPackageObjectIndex)(pFVar11->ClassIndex).TypeAndId);
          local_5c8 = (FMappedName)((pFVar11->ClassIndex).TypeAndId & 0x3fffffffffffffff);
          ::LexToString(&local_490,&(this->Desc).PackageIdToLoad);
          FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)FVar15,&local_4a0);
          ::LexToString(&local_4b0,&(this->Desc).UPackageId);
          ::FName::ToString(&(this->Desc).UPackageName,&local_4c0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
          }
          if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
          }
          if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
          }
          if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_490.Data.AllocatorInstance.Data);
          }
          local_3b0.Data.AllocatorInstance.Data = local_470.Data.AllocatorInstance.Data;
          if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_480.Data.AllocatorInstance.Data);
            local_3b0.Data.AllocatorInstance.Data = local_470.Data.AllocatorInstance.Data;
          }
LAB_14231a8d6:
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (pUVar14 == (UPackage *)0x0) {
        if (1 < (byte)LogStreaming._0_1_) {
          ::FName::ToString(&local_5e0,&local_410);
          GetNameFromPackageObjectIndex
                    (this,&local_420,(FPackageObjectIndex)(pFVar11->OuterIndex).TypeAndId);
          local_5c8 = (FMappedName)((pFVar11->OuterIndex).TypeAndId & 0x3fffffffffffffff);
          ::LexToString(&local_430,&(this->Desc).PackageIdToLoad);
          FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)FVar15,&local_440);
          ::LexToString(&local_450,&(this->Desc).UPackageId);
          ::FName::ToString(&(this->Desc).UPackageName,&local_460);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_460.Data.AllocatorInstance.Data);
          }
          if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.Data.AllocatorInstance.Data);
          }
          if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_440.Data.AllocatorInstance.Data);
          }
          if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.Data.AllocatorInstance.Data);
          }
          local_3b0.Data.AllocatorInstance.Data = local_410.Data.AllocatorInstance.Data;
          if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_420.Data.AllocatorInstance.Data);
            local_3b0.Data.AllocatorInstance.Data = local_410.Data.AllocatorInstance.Data;
          }
          goto LAB_14231a8d6;
        }
      }
      else {
        pUVar16 = UObjectRedirector::GetPrivateStaticClass();
        iVar10 = (int)pUVar16->_padding_;
        if (((iVar10 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
             &pUVar16->_padding_)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!UE::CoreUObject::Private::DynamicCast<UObjectRedirector*>(ThisParent)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x218f,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((pFVar11->SuperIndex).TypeAndId != 0xffffffffffffffff) {
          pUVar17 = EventDrivenIndexToObject
                              (this,param_1,(FPackageObjectIndex)(pFVar11->SuperIndex).TypeAndId,
                               false);
          local_5d8->SuperObject = pUVar17;
          if (pUVar17 == (UObject *)0x0) {
            if (1 < (byte)LogStreaming._0_1_) {
              ::FName::ToString(&local_5e0,&local_3b0);
              GetNameFromPackageObjectIndex
                        (this,&local_3c0,(FPackageObjectIndex)(pFVar11->SuperIndex).TypeAndId);
              local_5c8 = (FMappedName)((pFVar11->SuperIndex).TypeAndId & 0x3fffffffffffffff);
              ::LexToString(&local_3d0,&(this->Desc).PackageIdToLoad);
              FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
              ::FName::ToString((FName *)FVar15,&local_3e0);
              ::LexToString(&local_3f0,&(this->Desc).UPackageId);
              ::FName::ToString(&(this->Desc).UPackageName,&local_400);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_400.Data.AllocatorInstance.Data);
              }
              if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
              }
              if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
              }
              if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
              }
              if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
              }
              goto LAB_14231a8d6;
            }
            goto LAB_14231a8e0;
          }
        }
        pFVar12 = local_5d8;
        if (((pFVar11->TemplateIndex).TypeAndId == 0xffffffffffffffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Export.TemplateIndex.IsNull()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x219b,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar17 = EventDrivenIndexToObject
                            (this,param_1,(FPackageObjectIndex)(pFVar11->TemplateIndex).TypeAndId,
                             true);
        pFVar12->TemplateObject = pUVar17;
        if (pUVar17 != (UObject *)0x0) {
          if ((pFVar11->ObjectFlags & RF_ClassDefaultObject) == RF_NoFlags) {
            pUVar2 = *(UObjectBaseUtility **)&pUVar17->field_0x10;
            iVar10 = (int)pUVar13->_padding_;
            if ((*(int *)&pUVar2[1].field_0x10 < iVar10) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar2[1].field_0x8 + (longlong)iVar10 * 8) !=
                &pUVar13->_padding_)) {
              if (1 < (byte)LogStreaming._0_1_) {
                UObjectBaseUtility::GetFullName(pUVar2,&local_2f0,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar13,&local_300,(UObject *)0x0,None);
                ::LexToString(&local_310,&(this->Desc).PackageIdToLoad);
                FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
                ::FName::ToString((FName *)FVar15,&local_320);
                ::LexToString(&local_330,&(this->Desc).UPackageId);
                ::FName::ToString(&(this->Desc).UPackageName,&local_340);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_340.Data.AllocatorInstance.Data);
                }
                if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_330.Data.AllocatorInstance.Data);
                }
                if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_320.Data.AllocatorInstance.Data);
                }
                if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_310.Data.AllocatorInstance.Data);
                }
                local_3b0.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
                if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_300.Data.AllocatorInstance.Data);
                  local_3b0.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
                }
                goto LAB_14231a8d6;
              }
              goto LAB_14231a8e0;
            }
          }
          if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
            local_580 = 0;
            TVar18 = (TEventRef<unsigned_int>)&local_580;
          }
          else {
            TVar18 = FStringTrace::GetNameRef(&local_508);
          }
          uVar3 = *(undefined8 *)TVar18;
          if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
            local_5a8 = (FScriptContainerElement *)0x0;
            TVar18 = (TEventRef<unsigned_int>)&local_5a8;
          }
          else {
            local_568 = pUVar13->_padding_;
            TVar18 = FStringTrace::GetNameRef(&local_500);
          }
          uVar4 = *(undefined8 *)TVar18;
          if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
            local_5a0 = (FScriptContainerElement *)0x0;
            TVar18 = (TEventRef<unsigned_int>)&local_5a0;
          }
          else {
            local_560 = this->LinkerRoot->_padding_;
            TVar18 = FStringTrace::GetNameRef(local_4f8);
          }
          uVar5 = *(undefined8 *)TVar18;
          bVar9 = false;
          if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
            UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
                      ((TLogScope<0> *)&local_58);
            bVar9 = true;
            *local_58 = (int)uVar3;
            local_58[1] = (int)uVar4;
            local_58[2] = (int)uVar5;
            *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
          }
          bVar27 = -1 < CpuChannel->Enabled;
          if (bVar27) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId8628,"FindExport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x21b4);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8628);
          }
          pFVar19 = (FUObjectItem *)0x0;
          pUVar17 = StaticFindObjectFastInternal
                              ((UClass *)0x0,(UObject *)pUVar14,local_5e0,ExactClass,RF_NoFlags,
                               Borrowed);
          pFVar12 = local_5d8;
          local_5d8->Object = pUVar17;
          if (bVar27) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (pFVar12->Object == (UObject *)0x0) {
            UObject::ConditionalPostLoadSubobjects
                      (pFVar12->TemplateObject,(FObjectInstancingGraph *)0x0);
            if ((GVerifyObjectReferencesOnly != false) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!GVerifyObjectReferencesOnly",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x21db,L""), bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar13 = local_5b0;
            local_5cc = local_5c0->ObjectFlags | 0x83400;
            if ((local_5c0->ObjectFlags & 0x10) == Borrowed) {
LAB_14231ae63:
              if (((uint)pUVar13->_padding_ >> 10 & 1) != 0) {
                ::FName::ToString(&local_5e0,&local_270);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar13,&local_280,(UObject *)0x0,None);
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!LoadClass->HasAnyFlags(RF_NeedLoad)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x220c,L"LoadClass %s had RF_NeedLoad while creating %s");
                if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_280.Data.AllocatorInstance.Data);
                }
                if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.Data.AllocatorInstance.Data);
                }
                if (bVar27) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              if ((((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) ||
                  (UClass::InternalCreateDefaultObjectWrapper(pUVar13),
                  (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0)) &&
                 ((*(uint *)&((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr)->field_0x8 >> 10 &
                  1) != 0)) {
                ::FName::ToString(&local_5e0,&local_250);
                if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                  UClass::InternalCreateDefaultObjectWrapper(pUVar13);
                }
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)(pUVar13->ClassDefaultObject).field0_0x0.DebugPtr,
                           &local_260,(UObject *)0x0,None);
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!(LoadClass->GetDefaultObject() && LoadClass->GetDefaultObject()->HasAnyFlags(RF_NeedLoad))"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x220e,L"Class CDO %s had RF_NeedLoad while creating %s");
                if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_260.Data.AllocatorInstance.Data);
                }
                if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_250.Data.AllocatorInstance.Data);
                }
                if (bVar27) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              if ((*(uint *)&pFVar12->TemplateObject->field_0x8 >> 10 & 1) != 0) {
                ::FName::ToString(&local_5e0,&local_230);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pFVar12->TemplateObject,&local_240,(UObject *)0x0,
                           None);
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!ExportObject.TemplateObject->HasAnyFlags(RF_NeedLoad)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x2210,L"Template %s had RF_NeedLoad while creating %s");
                if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240.Data.AllocatorInstance.Data);
                }
                if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_230.Data.AllocatorInstance.Data);
                }
                if (bVar27) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              bVar27 = -1 < CpuChannel->Enabled;
              if (bVar27) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId8723,"ConstructObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x2213);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8723);
              }
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_d8,pUVar13);
              local_d8._16_4_ = local_5e0.ComparisonIndex.Value;
              local_d8._20_4_ = local_5e0.Number;
              local_d8._24_4_ = local_5cc;
              local_d8._40_8_ = pFVar12->TemplateObject;
              local_d8[0x21] = true;
              local_d8._8_8_ = pUVar14;
              pUVar17 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8)
              ;
              pFVar12->Object = pUVar17;
              if (local_d8._64_8_ != 0) {
                plVar23 = (longlong *)(local_d8 + 0x50);
                if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
                  plVar23 = (longlong *)local_d8._104_8_;
                }
                (**(code **)(*plVar23 + 0x10))();
                pUVar17 = pFVar12->Object;
              }
              if (bVar27) {
                FCpuProfilerTrace::OutputEndEvent();
                pUVar17 = pFVar12->Object;
              }
              if ((GIsInitialLoad != false) || (GUObjectArray.OpenForDisregardForGC != false)) {
                iVar10 = *(int *)&pUVar17->field_0xc;
                if ((iVar10 < 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                        ,0x443,L""), bVar27)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
                  pFVar19 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
                }
                else {
                  pFVar19 = (FUObjectItem *)0x0;
                }
                FUObjectItem::SetRootFlags(pFVar19,RootSet);
              }
              if ((*(UClass **)&pFVar12->Object->field_0x10 != pUVar13) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object->GetClass() == LoadClass",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x2222,L""), bVar27)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar15.ComparisonIndex.Value = *(uint *)&pFVar12->Object->field_0x18;
              FVar15.Number = *(uint *)&pFVar12->Object->field_0x1c;
              if ((FVar15 != local_5e0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object->GetFName() == ObjectName",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x2223,L""), bVar27)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              goto LAB_14231b2e9;
            }
            pUVar16 = (UClass *)local_5b0->_padding_;
            if (pUVar16 == (UClass *)0x0) {
LAB_14231ae99:
              bVar27 = UObjectBaseUtility::IsA<UClass_*>
                                 ((UObjectBaseUtility *)pFVar12->TemplateObject,pUVar13);
              if (!bVar27) {
                local_550 = (FName)pUVar13->_padding_;
                ::FName::ToString(&local_550,local_540);
                pUVar17 = pFVar12->TemplateObject;
                if (pUVar17 == (UObject *)0x0) {
                  ::FString::FString(&local_578,L"None");
                }
                else {
                  local_598.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
                  local_598.Number = *(uint *)&pUVar17->field_0x1c;
                  ::FName::ToString(&local_598,&local_578);
                }
                bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ExportObject.TemplateObject->IsA(LoadClass)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x2207,
                                    L"ExportObject.TemplateObject: \'%s\' is not a child of class: \'%s\'"
                                   );
                if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_578.Data.AllocatorInstance.Data);
                }
                if (local_540[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_540[0].Data.AllocatorInstance.Data);
                }
                if (bVar27) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              goto LAB_14231ae63;
            }
            if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(pUVar16);
            }
            this_00 = (UObjectBase *)(pUVar16->ClassDefaultObject).field0_0x0.DebugPtr;
            if (((this_00 != (UObjectBase *)0x0) &&
                ((UObjectBase *)local_5d8->TemplateObject != this_00)) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!SuperCDO || ExportObject.TemplateObject == SuperCDO",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x21e8,L""), bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar19 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&pUVar16->_padding_ + 4));
            pFVar12 = local_5d8;
            if (((ulonglong)((pFVar19->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0)
            goto LAB_14231ae99;
            if ((this_00 == (UObjectBase *)0x0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SuperCDO",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x21eb,L""), bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (((uint)pUVar16->_padding_ >> 10 & 1) == 0) {
              if ((this_00->ObjectFlags >> 10 & 1) == 0) {
                local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_590.ArrayNum = 0;
                local_590.ArrayMax = 0;
                GetObjectsWithOuter(this_00,&local_590,false,RF_NoFlags,Native);
                iVar10 = local_590.ArrayNum;
                uVar22 = (ulonglong)local_590.ArrayNum;
                local_558 = local_590.AllocatorInstance.Data + uVar22 * 8;
                FVar25.Data = local_590.AllocatorInstance.Data;
                while( true ) {
                  pFVar8 = local_558;
                  if ((int)uVar22 != iVar10) {
                    local_5d0[0] = 0;
                    `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_5d0);
                  }
                  if (FVar25.Data == pFVar8) {
                    pUVar13 = local_5b0;
                    pFVar12 = local_5d8;
                    if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_590.AllocatorInstance.Data);
                      pUVar13 = local_5b0;
                      pFVar12 = local_5d8;
                    }
                    goto LAB_14231ae63;
                  }
                  pUVar2 = *(UObjectBaseUtility **)FVar25.Data;
                  if ((*(uint *)&pUVar2->field_0x8 >> 10 & 1) != 0) break;
                  uVar22 = local_590._8_8_ & 0xffffffff;
                  FVar25.Data = FVar25.Data + 8;
                }
                ::FName::ToString(&local_5e0,&local_290);
                UObjectBaseUtility::GetFullName(pUVar2,&local_2a0,(UObject *)0x0,None);
                UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                ;
                if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                }
                if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_290.Data.AllocatorInstance.Data);
                }
                if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_590.AllocatorInstance.Data);
                }
              }
              else {
                ::FName::ToString(&local_5e0,&local_2b0);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_2c0,(UObject *)0x0,None);
                UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                ;
                if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                }
                if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              ::FName::ToString(&local_5e0,&local_2d0);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar16,&local_2e0,(UObject *)0x0,None);
              UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
              }
              if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            iVar10 = *(int *)&pFVar12->Object->field_0xc;
            if ((iVar10 < 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x443,L""), bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
              pFVar19 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
            }
            if (((pFVar19->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) {
              pFVar12->bWasFoundInMemory = true;
            }
            uVar1 = *(uint *)&pFVar12->Object->field_0x8;
            if ((~(byte)(uVar1 >> 0x15) & 1) != 0) {
              if (((uVar1 & 0x80400) != 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!(ObjectFlags & (RF_NeedLoad | RF_WasLoaded))",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x21c8,L""), bVar27)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((uVar1 & 0x10) == 0) {
                UObjectBaseUtility::SetFlags
                          ((UObjectBaseUtility *)pFVar12->Object,
                           RF_WasLoaded|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
              }
              else {
                UObjectBaseUtility::SetFlags
                          ((UObjectBaseUtility *)pFVar12->Object,
                           RF_WasLoaded|RF_NeedPostLoad|RF_NeedLoad);
              }
            }
LAB_14231b2e9:
            if ((pFVar12->Object == (UObject *)0x0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Object",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x2226,L""), bVar27)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar11 = local_5c0;
            local_5cc = Async;
            if (((this->Desc).bCanBeImported == false) ||
               (pFVar12 = local_5d8, local_5c0->PublicExportHash == 0)) {
              if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14231b61c:
                if (6 < (byte)LogStreaming._0_1_) {
                  pFVar20 = UObjectBaseUtility::GetPathName
                                      ((UObjectBaseUtility *)pFVar12->Object,&local_180,
                                       (UObject *)0x0);
                  if ((pFVar20->Data).ArrayNum == 0) {
                    local_5c0 = (FExportMapEntry *)0x15060d16c;
                  }
                  else {
                    local_5c0 = (FExportMapEntry *)(pFVar20->Data).AllocatorInstance.Data;
                  }
                  local_598 = (FName)0x150624dd8;
                  if ((*(uint *)&pFVar12->Object->field_0x8 & 1) != 0) {
                    local_598 = (FName)0x150624db0;
                  }
                  ::LexToString(&local_190,&(this->Desc).PackageIdToLoad);
                  FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
                  ::FName::ToString((FName *)FVar15,&local_1a0);
                  ::LexToString(&local_1b0,&(this->Desc).UPackageId);
                  ::FName::ToString(&(this->Desc).UPackageName,&local_1c0);
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                  }
                  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                  }
                  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                  }
                  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_190.Data.AllocatorInstance.Data);
                  }
                  goto LAB_14231b77b;
                }
              }
              else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                      (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                       GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
                FVar24 = (ForElementType<FSetElementId>)0x154ba3ce8;
                if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar24 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
                }
                iVar10 = *(int *)((longlong)FVar24 +
                                 (ulonglong)
                                 (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                                 (uint)(this->Desc).UPackageId.Id) * 4);
                if (iVar10 != -1) {
                  do {
                    if (*(ulong64 *)
                         (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar10 * 0x10)
                        == (this->Desc).UPackageId.Id) goto LAB_14231b61c;
                    iVar10 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                                     (longlong)iVar10 * 0x10);
                  } while (iVar10 != -1);
                }
              }
            }
            else {
              local_5cc = Async|LoaderImport;
              FGlobalImportStore::StoreGlobalObject
                        ((this->ImportStore).GlobalImportStore,
                         (FPackageId)(this->Desc).UPackageId.Id,local_5c0->PublicExportHash,
                         local_5d8->Object);
              if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14231b3dc:
                if (6 < (byte)LogStreaming._0_1_) {
                  local_598 = (FName)pFVar11->PublicExportHash;
                  pFVar20 = FormatPackageId(&local_1d0,(FPackageId)(this->Desc).UPackageId.Id);
                  if ((pFVar20->Data).ArrayNum == 0) {
                    local_5c0 = (FExportMapEntry *)0x15060d16c;
                  }
                  else {
                    local_5c0 = (FExportMapEntry *)(pFVar20->Data).AllocatorInstance.Data;
                  }
                  pFVar20 = UObjectBaseUtility::GetPathName
                                      ((UObjectBaseUtility *)local_5d8->Object,&local_1e0,
                                       (UObject *)0x0);
                  if ((pFVar20->Data).ArrayNum == 0) {
                    local_5a0 = (FScriptContainerElement *)0x15060d16c;
                  }
                  else {
                    local_5a0 = (pFVar20->Data).AllocatorInstance.Data;
                  }
                  pFVar20 = ::LexToString(&local_1f0,&(this->Desc).PackageIdToLoad);
                  if ((pFVar20->Data).ArrayNum == 0) {
                    local_5a8 = (FScriptContainerElement *)0x15060d16c;
                  }
                  else {
                    local_5a8 = (pFVar20->Data).AllocatorInstance.Data;
                  }
                  FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
                  ::FName::ToString((FName *)FVar15,&local_200);
                  ::LexToString(&local_210,&(this->Desc).UPackageId);
                  ::FName::ToString(&(this->Desc).UPackageName,&local_220);
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_220.Data.AllocatorInstance.Data);
                  }
                  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_210.Data.AllocatorInstance.Data);
                  }
                  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_200.Data.AllocatorInstance.Data);
                  }
                  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
                  }
                  local_180.Data.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
                  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                    local_180.Data.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
                  }
LAB_14231b77b:
                  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_180.Data.AllocatorInstance.Data);
                  }
                }
              }
              else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                      (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                       GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
                FVar24 = (ForElementType<FSetElementId>)0x154ba3ce8;
                if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar24 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
                }
                iVar10 = *(int *)((longlong)FVar24 +
                                 (ulonglong)
                                 (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                                 (uint)(this->Desc).UPackageId.Id) * 4);
                if (iVar10 != -1) {
                  do {
                    if (*(ulong64 *)
                         (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar10 * 0x10)
                        == (this->Desc).UPackageId.Id) goto LAB_14231b3dc;
                    iVar10 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                                     (longlong)iVar10 * 0x10);
                  } while (iVar10 != -1);
                }
              }
            }
            UObjectBaseUtility::SetInternalFlags((UObjectBaseUtility *)local_5d8->Object,local_5cc);
          }
          if (bVar9) {
            lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (*(char *)(lVar6 + 0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pFVar21 = *(FWriteBuffer **)(lVar6 + 0x20);
            if ((int)pFVar21 - *(int *)&pFVar21->Cursor < 1) {
              pFVar21 = UE::Trace::Private::Writer_NextBuffer();
            }
            *pFVar21->Cursor = '\n';
            pFVar21->Cursor = pFVar21->Cursor + 1;
            pFVar21->Committed = pFVar21->Cursor;
          }
          goto LAB_14231bae7;
        }
        if (1 < (byte)LogStreaming._0_1_) {
          ::FName::ToString(&local_5e0,&local_350);
          GetNameFromPackageObjectIndex
                    (this,&local_360,(FPackageObjectIndex)(pFVar11->TemplateIndex).TypeAndId);
          local_5c8 = (FMappedName)((pFVar11->TemplateIndex).TypeAndId & 0x3fffffffffffffff);
          ::LexToString(&local_370,&(this->Desc).PackageIdToLoad);
          FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)FVar15,&local_380);
          ::LexToString(&local_390,&(this->Desc).UPackageId);
          ::FName::ToString(&(this->Desc).UPackageName,&local_3a0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
          }
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_380.Data.AllocatorInstance.Data);
          }
          if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.Data.AllocatorInstance.Data);
          }
          local_3b0.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
          if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.Data.AllocatorInstance.Data);
            local_3b0.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
          }
          goto LAB_14231a8d6;
        }
      }
LAB_14231a8e0:
      local_5d8->bExportLoadFailed = true;
      goto LAB_14231bae7;
    }
LAB_14231b801:
    if ((byte)LogStreaming._0_1_ < 3) goto LAB_14231bae7;
    ::FName::ToString(&local_5e0,&local_130);
    ::LexToString(&local_140,&(this->Desc).PackageIdToLoad);
    FVar15 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
    ::FName::ToString((FName *)FVar15,&local_150);
    ::LexToString(&local_160,&(this->Desc).UPackageId);
    ::FName::ToString(&(this->Desc).UPackageName,&local_170);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    local_4d0.Data.AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
      local_4d0.Data.AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
    }
  }
  if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
  }
LAB_14231bae7:
  FLoadTimeProfilerTracePrivate::FCreateExportScope::~FCreateExportScope(&local_548);
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EventDrivenIndexToObject @ 14231bb30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
FAsyncPackage2::EventDrivenIndexToObject
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,FPackageObjectIndex param_2,
          bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FExportObject *pFVar5;
  FExportMapEntry *pFVar6;
  FString *pFVar7;
  FName FVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FUObjectItem *pFVar11;
  FPackageObjectIndex local_res18;
  char local_res20;
  FString local_e0;
  wchar_t *local_d0;
  FString local_c8;
  FString local_b8;
  FMappedName local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar11 = (FUObjectItem *)0x0;
  local_e0.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data & 0xffffffff00000000;
  if (param_2.TypeAndId == 0xffffffffffffffff) {
    return (UObject *)0x0;
  }
  local_res18.TypeAndId = param_2.TypeAndId;
  local_res20 = param_3;
  if (param_2.TypeAndId >> 0x3e == 0) {
    pFVar5 = TArrayView<FExportObject,int>::operator[](&param_1->ExportsView,(int)param_2.TypeAndId)
    ;
    pUVar10 = pFVar5->Object;
    if ((byte)LogStreaming._0_1_ < 3) {
LAB_14231be9a:
      if (pUVar10 == (UObject *)0x0) {
        return (UObject *)0x0;
      }
    }
    else if (pUVar10 == (UObject *)0x0) {
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1506203a0;
      if (pFVar5->bWasFoundInMemory != false) {
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&u_true;
      }
      uVar4 = FPackageObjectIndex::ToExport(&local_res18);
      pFVar6 = TArrayView<FExportMapEntry_const_,int>::operator[]
                         ((TArrayView<FExportMapEntry_const_,int> *)&param_1->_padding_,uVar4);
      local_b8.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)::LexToString(pFVar6->FilterFlags);
      local_d0 = L"false";
      if (pFVar5->bFiltered != false) {
        local_d0 = L"true";
      }
      if ((UObjectBaseUtility *)pFVar5->TemplateObject == (UObjectBaseUtility *)0x0) {
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1506830d0;
      }
      else {
        pFVar11 = (FUObjectItem *)&DAT_00000001;
        pFVar7 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)pFVar5->TemplateObject,&local_68,(UObject *)0x0);
        if ((pFVar7->Data).ArrayNum == 0) {
          local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_e0.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        }
      }
      if ((UObjectBaseUtility *)pFVar5->SuperObject != (UObjectBaseUtility *)0x0) {
        pFVar11 = (FUObjectItem *)(ulonglong)((uint)pFVar11 | 2);
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)pFVar5->SuperObject,&local_78,(UObject *)0x0);
      }
      FVar8 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
      ::FName::ToString((FName *)FVar8,&local_88);
      uVar4 = FPackageObjectIndex::ToExport(&local_res18);
      TArrayView<FExportMapEntry_const_,int>::operator[]
                ((TArrayView<FExportMapEntry_const_,int> *)&param_1->_padding_,uVar4);
      FVar8 = FNameMap::GetName((FNameMap *)&param_1->_padding_,&local_a0);
      ::FName::ToString((FName *)FVar8,&local_98);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar11 & 2) != 0) &&
         (pFVar11 = (FUObjectItem *)(ulonglong)((uint)pFVar11 & 0xfffffffd),
         local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (((ulonglong)pFVar11 & 1) == 0) {
        return (UObject *)0x0;
      }
      goto LAB_14231c02a;
    }
  }
  else {
    if (1 < (param_2.TypeAndId >> 0x3e) - 1) {
      return (UObject *)0x0;
    }
    pUVar10 = FPackageImportStore::GetImportObject(&this->ImportStore,param_1,param_2);
    if ((byte)LogStreaming._0_1_ < 3) goto LAB_14231be9a;
    if (pUVar10 == (UObject *)0x0) {
      FVar8 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
      ::FName::ToString((FName *)FVar8,&local_c8);
      FPackageImportStore::GetImportName(&this->ImportStore,&local_b8,param_1,param_2);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      local_48.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        local_48.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      }
      goto LAB_14231c02a;
    }
  }
  if ((local_res20 != '\0') && ((byte)(param_2.TypeAndId >> 0x3e) != 1)) {
    pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if (((*(int *)(*(longlong *)&((UObjectBaseUtility *)pUVar10)->field_0x10 + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&((UObjectBaseUtility *)pUVar10)->field_0x10 + 0x30) +
          (longlong)iVar1 * 8) != &pUVar9->_padding_)) &&
       (((*(uint *)&((UObjectBaseUtility *)pUVar10)->field_0x8 & 0x280000) != 0x280000 &&
        (2 < (byte)LogStreaming._0_1_)))) {
      FVar8 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
      ::FName::ToString((FName *)FVar8,&local_58);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar10,&local_e0,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  if (pUVar10 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  iVar1 = *(int *)&((UObjectBaseUtility *)pUVar10)->field_0xc;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar10 = (UObject *)(*pcVar2)();
    return pUVar10;
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar11 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  if (((ulonglong)((pFVar11->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0) {
    return pUVar10;
  }
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar10,&local_48,(UObject *)0x0,None);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
LAB_14231c02a:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return pUVar10;
}

// EventDrivenSerializeCellExport @ 14231c060

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAsyncPackage2::EventDrivenSerializeCellExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2,FExportArchive *param_3
          )

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FCellExportMapEntry *pFVar5;
  FExportCell *pFVar6;
  FIoBuffer *pFVar7;
  ulong64 uVar8;
  int iVar9;
  FExportArchive local_118;
  char local_30;
  
  iVar9 = param_2 - (int)param_1->_padding_;
  pFVar5 = TArrayView<FCellExportMapEntry_const_,int>::operator[]
                     ((TArrayView<FCellExportMapEntry_const_,int> *)&param_1->_padding_,iVar9);
  pFVar6 = TArrayView<FExportCell,int>::operator[](&param_1->CellExportsView,iVar9);
  if (pFVar6->Cell == (VCell *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cell",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x22f7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_30 = '\0';
  if (param_3 == (FExportArchive *)0x0) {
    pFVar7 = FIoRequest::GetResultOrDie(&(this->SerializationState).IoRequest);
    if (local_30 != '\0') {
      local_118._padding_ = (longlong)&___7FExportArchive__6B_;
      FArchive::~FArchive((FArchive *)&local_118);
    }
    param_3 = FExportArchive::FExportArchive(&local_118,pFVar7);
    local_30 = '\x01';
    InitializeExportArchive(this,param_3,false);
  }
  ProcessExportDependencies(this,param_1,param_2,ExportCommandType_Serialize);
  pFVar6->bSerialized = true;
  uVar8 = pFVar5->CookedSerialOffset;
  uVar1 = pFVar5->CookedSerialSize;
  param_3->CurrentExport = (UObject *)0x0;
  uVar8 = *(uint *)(param_3->HeaderData->_padding_ + 4) + uVar8;
  param_3->ExportSerialSize = uVar1;
  param_3->ExportSerialOffset = uVar8;
  *(longlong *)param_3->_padding_ = uVar8 + ((longlong *)param_3->_padding_)[2];
  uVar8 = pFVar5->CookedSerialLayoutSize;
  FExportArchive::CheckBufferPosition(param_3,L"InvalidSkip",uVar8);
  *(longlong *)param_3->_padding_ = *(longlong *)param_3->_padding_ + uVar8;
  param_3->CurrentExport = (UObject *)0x0;
  param_3->ExportSerialOffset = 0;
  param_3->ExportSerialSize = 0;
  *(undefined8 *)param_3->_padding_ = ((undefined8 *)param_3->_padding_)[2];
  if (local_30 != '\0') {
    local_118._padding_ = (longlong)&___7FExportArchive__6B_;
    FArchive::~FArchive((FArchive *)&local_118);
  }
  return true;
}

// EventDrivenSerializeExport @ 14231c220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncPackage2::EventDrivenSerializeExport
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2,FExportArchive *param_3
          )

{
  FMappedName FVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TConsoleVariableData<bool> *pTVar9;
  UObjectBase *pUVar10;
  FExportArchive *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FExportMapEntry *pFVar17;
  FIoBuffer *pFVar18;
  UClass *pUVar19;
  UClass *pUVar20;
  TEventRef<unsigned_int> TVar21;
  UPackage *pUVar22;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar23;
  FString *pFVar24;
  FName FVar25;
  longlong lVar26;
  FWriteBuffer *pFVar27;
  ForElementType<FSetElementId> FVar28;
  FAsyncPackage2 *pFVar29;
  ulong64 uVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auStackY_658 [32];
  UObjectBase *local_608;
  FSerializeExportScope local_600 [8];
  FAsyncPackage2 *local_5f8;
  FExportArchive *local_5f0;
  FExportMapEntry *local_5e8;
  FScriptContainerElement *local_5e0;
  FExportMapEntry *local_5d8;
  FScriptContainerElement *local_5c8;
  FLLMScope local_5c0;
  FLLMScope local_5bc;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  FName local_5a0;
  FName local_598;
  longlong local_590;
  longlong local_588;
  ulong64 local_580;
  FUObjectSerializeContext *local_578;
  UObject *local_570;
  UObjectBase **local_568;
  FMemScope local_560;
  FMemScope local_558;
  FName local_550;
  FName local_548;
  FName local_540 [5];
  FMappedName local_518 [2];
  FMappedName local_508 [2];
  FMappedName local_4f8 [2];
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FExportArchive local_2e8;
  char local_200;
  undefined4 *local_1f8;
  longlong local_1f0;
  FStructuredArchiveFromArchive local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_658;
  local_5c8 = (FScriptContainerElement *)CONCAT44(local_5c8._4_4_,param_2);
  bVar8 = false;
  local_5e0 = (FScriptContainerElement *)((ulonglong)local_5e0 & 0xffffffff00000000);
  local_5f8 = this;
  local_5f0 = param_3;
  FLLMScope::FLLMScope(&local_5bc,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_558,UObject,true);
  FLLMScope::FLLMScope
            (&local_5c0,LLMTagDeclaration_UObject_FAsyncPackage2.UniqueName,false,None,Default,true)
  ;
  local_5a0 = LLMTagDeclaration_UObject_FAsyncPackage2.UniqueName;
  FMemScope::FMemScope(&local_560,&local_5a0,true);
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8765,"SerializeExport",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x223d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8765);
  }
  local_5e8 = TArrayView<FExportMapEntry_const_,int>::operator[]
                        ((TArrayView<FExportMapEntry_const_,int> *)&param_1->_padding_,param_2);
  pFVar17 = (FExportMapEntry *)
            TArrayView<FExportObject,int>::operator[](&param_1->ExportsView,param_2);
  local_608 = (UObjectBase *)pFVar17->CookedSerialOffset;
  local_5d8 = pFVar17;
  if ((((local_608 == (UObjectBase *)0x0) && ((char)(pFVar17->OuterIndex).TypeAndId == '\0')) &&
      (*(char *)((longlong)&(pFVar17->OuterIndex).TypeAndId + 1) == '\0')) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object || (ExportObject.bFiltered || ExportObject.bExportLoadFailed)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2242,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  FLoadTimeProfilerTracePrivate::FSerializeExportScope::FSerializeExportScope
            (local_600,(UObject *)local_608,local_5e8->CookedSerialSize);
  if ((char)(pFVar17->OuterIndex).TypeAndId != '\0') {
LAB_14231d04e:
    if (*(char *)((longlong)&(pFVar17->OuterIndex).TypeAndId + 1) == '\0') {
      if ((char)(pFVar17->OuterIndex).TypeAndId == '\0') {
        if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14231d3e9:
          if (6 < (byte)LogStreaming._0_1_) {
            FVar25 = FNameMap::GetName((FNameMap *)&param_1->_padding_,local_4f8);
            ::FName::ToString((FName *)FVar25,&local_2f8);
            ::LexToString(&local_308,&(this->Desc).PackageIdToLoad);
            FVar25 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
            ::FName::ToString((FName *)FVar25,&local_318);
            ::LexToString(&local_328,&(this->Desc).UPackageId);
            ::FName::ToString(&(this->Desc).UPackageName,&local_338);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_338.Data.AllocatorInstance.Data);
            }
            if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_328.Data.AllocatorInstance.Data);
            }
            if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.Data.AllocatorInstance.Data);
            }
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
            }
            goto LAB_14231d527;
          }
        }
        else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                 GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
          FVar28 = (ForElementType<FSetElementId>)0x154ba3ce8;
          if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
              (ForElementType<FSetElementId>)0x0) {
            FVar28 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
          }
          iVar16 = *(int *)((longlong)FVar28 +
                           (ulonglong)
                           (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                           (uint)(this->Desc).UPackageId.Id) * 4);
          if (iVar16 != -1) {
            do {
              if (*(ulong64 *)
                   (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar16 * 0x10) ==
                  (this->Desc).UPackageId.Id) goto LAB_14231d3e9;
              iVar16 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                               (longlong)iVar16 * 0x10);
            } while (iVar16 != -1);
          }
        }
      }
      else if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14231d229:
        if (5 < (byte)LogStreaming._0_1_) {
          FVar25 = FNameMap::GetName((FNameMap *)&param_1->_padding_,local_508);
          ::FName::ToString((FName *)FVar25,&local_348);
          ::LexToString(&local_358,&(this->Desc).PackageIdToLoad);
          FVar25 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)FVar25,&local_368);
          ::LexToString(&local_378,&(this->Desc).UPackageId);
          ::FName::ToString(&(this->Desc).UPackageName,&local_388);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.Data.AllocatorInstance.Data);
          }
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
          }
          local_2f8.Data.AllocatorInstance.Data = local_348.Data.AllocatorInstance.Data;
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
            local_2f8.Data.AllocatorInstance.Data = local_348.Data.AllocatorInstance.Data;
          }
          goto LAB_14231d527;
        }
      }
      else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
              (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
               GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar28 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar28 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar28 +
                         (ulonglong)
                         (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                         (uint)(this->Desc).UPackageId.Id) * 4);
        if (iVar16 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar16 * 0x10) ==
                (this->Desc).UPackageId.Id) goto LAB_14231d229;
            iVar16 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar16 * 0x10);
          } while (iVar16 != -1);
        }
      }
    }
    else {
LAB_14231d058:
      if (2 < (byte)LogStreaming._0_1_) {
        FVar25 = FNameMap::GetName((FNameMap *)&param_1->_padding_,local_518);
        ::FName::ToString((FName *)FVar25,&local_398);
        ::LexToString(&local_3a8,&(this->Desc).PackageIdToLoad);
        FVar25 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
        ::FName::ToString((FName *)FVar25,&local_3b8);
        ::LexToString(&local_3c8,&(this->Desc).UPackageId);
        ::FName::ToString(&(this->Desc).UPackageName,&local_3d8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        local_2f8.Data.AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
          local_2f8.Data.AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
        }
LAB_14231d527:
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
      }
    }
    bVar12 = false;
    goto LAB_14231d533;
  }
  if (*(char *)((longlong)&(pFVar17->OuterIndex).TypeAndId + 1) != '\0') goto LAB_14231d058;
  if ((local_608 == (UObjectBase *)0x0) || ((local_608->ObjectFlags >> 10 & 1) == 0))
  goto LAB_14231d04e;
  local_200 = '\0';
  if (param_3 == (FExportArchive *)0x0) {
    pFVar18 = FIoRequest::GetResultOrDie(&(this->SerializationState).IoRequest);
    if (local_200 != '\0') {
      local_2e8._padding_ = (longlong)&___7FExportArchive__6B_;
      FArchive::~FArchive((FArchive *)&local_2e8);
    }
    local_5f0 = FExportArchive::FExportArchive(&local_2e8,pFVar18);
    local_200 = '\x01';
    InitializeExportArchive(this,local_5f0,false);
  }
  ProcessExportDependencies(this,param_1,(int)local_5c8,ExportCommandType_Serialize);
  pUVar10 = local_608;
  if (local_608 != (UObjectBase *)0x0) {
    pUVar19 = Z_Construct_UClass_UStruct_NoRegister();
    pUVar20 = (pUVar10->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    iVar16 = (int)pUVar19->_padding_;
    if (((iVar16 <= (int)pUVar20->_padding_) &&
        ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar16 * 8) ==
         &pUVar19->_padding_)) && (FVar1 = pFVar17->ObjectName, FVar1 != (FMappedName)0x0)) {
      pUVar20 = Z_Construct_UClass_UStruct_NoRegister();
      iVar16 = (int)pUVar20->_padding_;
      if (((iVar16 <= *(int *)(*(longlong *)((longlong)FVar1 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)FVar1 + 0x10) + 0x30) + (longlong)iVar16 * 8) ==
           &pUVar20->_padding_)) &&
         ((**(code **)(pUVar10->_padding_ + 800))(pUVar10,FVar1), pUVar10 = local_608,
         local_608 != (UObjectBase *)0x0)) {
        pUVar19 = Z_Construct_UClass_UClass_NoRegister();
        pUVar20 = (pUVar10->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar16 = (int)pUVar19->_padding_;
        if ((iVar16 <= (int)pUVar20->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar16 * 8) ==
            &pUVar19->_padding_)) {
          (**(code **)(pUVar10->_padding_ + 0x2b8))(pUVar10);
        }
      }
    }
  }
  if ((local_5e8->ClassIndex).TypeAndId == 0xffffffffffffffff) {
    pUVar20 = Z_Construct_UClass_UClass_NoRegister();
  }
  else {
    pUVar20 = CastEventDrivenIndexToObject<UClass>
                        (this,param_1,(FPackageObjectIndex)(local_5e8->ClassIndex).TypeAndId,true);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_5b8 = 0;
    TVar21 = (TEventRef<unsigned_int>)&local_5b8;
  }
  else {
    local_598 = (local_608->NamePrivate).Name;
    TVar21 = FStringTrace::GetNameRef(&local_550);
  }
  uVar2 = *(undefined8 *)TVar21;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_5b0 = 0;
    TVar21 = (TEventRef<unsigned_int>)&local_5b0;
  }
  else {
    local_590 = pUVar20->_padding_;
    TVar21 = FStringTrace::GetNameRef(&local_548);
  }
  uVar3 = *(undefined8 *)TVar21;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_5a8 = 0;
    TVar21 = (TEventRef<unsigned_int>)&local_5a8;
  }
  else {
    pUVar22 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_608);
    local_588 = pUVar22->_padding_;
    TVar21 = FStringTrace::GetNameRef(local_540);
  }
  uVar4 = *(undefined8 *)TVar21;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_1f8);
    bVar8 = true;
    *local_1f8 = (int)uVar2;
    local_1f8[1] = (int)uVar3;
    local_1f8[2] = (int)uVar4;
    *(undefined8 *)(local_1f0 + 0x28) = *(undefined8 *)(local_1f0 + 0x20);
  }
  pFVar17 = local_5d8;
  if ((local_5d8->CookedSerialSize == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ExportObject.TemplateObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2281,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  CacheArchetypeForObject((UObject *)local_608,(UObject *)pFVar17->CookedSerialSize);
  UObjectBase::AtomicallyClearFlags(local_608,RF_NeedLoad);
  local_578 = GetSerializeContext(this);
  pFVar11 = local_5f0;
  local_570 = local_578->SerializedObject;
  local_578->SerializedObject = (UObject *)local_608;
  uVar30 = local_5e8->CookedSerialOffset;
  uVar5 = local_5e8->CookedSerialSize;
  local_5f0->CurrentExport = (UObject *)local_608;
  uVar30 = *(uint *)(local_5f0->HeaderData->_padding_ + 4) + uVar30;
  local_5f0->ExportSerialOffset = uVar30;
  local_5f0->ExportSerialSize = uVar5;
  *(longlong *)local_5f0->_padding_ = ((longlong *)local_5f0->_padding_)[2] + uVar30;
  local_5d8 = (FExportMapEntry *)
              ((*(longlong *)local_5f0->_padding_ - ((longlong *)local_5f0->_padding_)[2]) -
              local_5f0->ExportSerialOffset);
  if ((local_5f0->TemplateForGetArchetypeFromLoader != (UObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Ar->TemplateForGetArchetypeFromLoader",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x228e,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  pFVar11->TemplateForGetArchetypeFromLoader = (UObject *)pFVar17->CookedSerialSize;
  iVar16 = CpuChannel->Enabled;
  if ((local_608->ObjectFlags >> 4 & 1) == 0) {
    if (-1 < iVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId8856,"SerializeObject",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2298);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8856);
      (**(code **)(local_608->_padding_ + 200))(local_608,pFVar11);
      goto LAB_14231c804;
    }
    (**(code **)(local_608->_padding_ + 200))(local_608,pFVar11);
  }
  else {
    if (-1 < iVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId8851,"SerializeDefaultObject",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x2293);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8851);
    }
    pUVar10 = local_608;
    pUVar20 = (local_608->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    pcVar7 = *(code **)(pUVar20->_padding_ + 0x3c0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                        (&local_1e8,(FArchive *)local_5f0);
    FVar23 = FStructuredArchiveFromArchive::GetSlot(this_00);
    (*pcVar7)(pUVar20,pUVar10,*(undefined8 *)FVar23);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1e8);
    if (-1 < iVar16) {
LAB_14231c804:
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  pFVar17 = local_5e8;
  pFVar11 = local_5f0;
  lVar31 = 0;
  plVar6 = (longlong *)local_5f0->_padding_;
  local_5f0->TemplateForGetArchetypeFromLoader = (UObject *)0x0;
  local_5e8 = (FExportMapEntry *)local_5e8->CookedSerialSize;
  local_5d8 = (FExportMapEntry *)
              (((*plVar6 - (longlong)local_5d8) - local_5f0->ExportSerialOffset) - plVar6[2]);
  if ((local_5f0->_padding_ & 0x200) == 0) {
    pFVar29 = local_5f8;
    if (local_5e8 != local_5d8) {
      if (local_608 == (UObjectBase *)0x0) {
        local_5f0 = (FExportArchive *)0x1506830d0;
        lVar26 = lVar31;
      }
      else {
        pFVar24 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)local_608,&local_458,(UObject *)0x0,None);
        lVar26 = 2;
        if ((pFVar24->Data).ArrayNum == 0) {
          local_5f0 = (FExportArchive *)0x15060d16c;
        }
        else {
          local_5f0 = (FExportArchive *)(pFVar24->Data).AllocatorInstance.Data;
        }
      }
      pFVar29 = local_5f8;
      pFVar24 = ::LexToString(&local_468,&(local_5f8->Desc).PackageIdToLoad);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_5f8 = (FAsyncPackage2 *)0x15060d16c;
      }
      else {
        local_5f8 = (FAsyncPackage2 *)(pFVar24->Data).AllocatorInstance.Data;
      }
      FVar25 = FPackagePath::GetPackageFName(&(pFVar29->Desc).PackagePathToLoad);
      pFVar24 = ::FName::ToString((FName *)FVar25,&local_478);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_5c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_5c8 = (pFVar24->Data).AllocatorInstance.Data;
      }
      pFVar24 = ::LexToString(&local_488,&(pFVar29->Desc).UPackageId);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_5e0 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_5e0 = (pFVar24->Data).AllocatorInstance.Data;
      }
      ::FName::ToString(&(pFVar29->Desc).UPackageName,&local_498);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data.AllocatorInstance.Data);
      }
      if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.Data.AllocatorInstance.Data);
      }
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
      if ((lVar26 != 0) && (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
         ) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_5e8 = (FExportMapEntry *)((longlong)local_5e8 - (longlong)local_5d8);
    *plVar6 = (longlong)(local_5e8->Pad + local_5f0->ExportSerialOffset + plVar6[2] + -0x45);
    FExportArchive::CheckBufferPosition(local_5f0,L"InvalidSeek",0);
    FArchiveState::ClearError((FArchiveState *)pFVar11);
    pFVar29 = local_5f8;
    if (1 < (byte)LogStreaming._0_1_) {
      local_580 = pFVar17->CookedSerialSize;
      if (local_608 == (UObjectBase *)0x0) {
        local_5f0 = (FExportArchive *)0x1506830d0;
        lVar26 = lVar31;
      }
      else {
        pFVar24 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)local_608,&local_4a8,(UObject *)0x0,None);
        lVar26 = 1;
        if ((pFVar24->Data).ArrayNum == 0) {
          local_5f0 = (FExportArchive *)0x15060d16c;
        }
        else {
          local_5f0 = (FExportArchive *)(pFVar24->Data).AllocatorInstance.Data;
        }
      }
      pFVar29 = local_5f8;
      pFVar24 = ::LexToString(&local_4b8,&(local_5f8->Desc).PackageIdToLoad);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_5f8 = (FAsyncPackage2 *)0x15060d16c;
      }
      else {
        local_5f8 = (FAsyncPackage2 *)(pFVar24->Data).AllocatorInstance.Data;
      }
      FVar25 = FPackagePath::GetPackageFName(&(pFVar29->Desc).PackagePathToLoad);
      pFVar24 = ::FName::ToString((FName *)FVar25,&local_4c8);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_5c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_5c8 = (pFVar24->Data).AllocatorInstance.Data;
      }
      pFVar24 = ::LexToString(&local_4d8,&(pFVar29->Desc).UPackageId);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_5e0 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_5e0 = (pFVar24->Data).AllocatorInstance.Data;
      }
      ::FName::ToString(&(pFVar29->Desc).UPackageName,&local_4e8);
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_ObjectSerializa_1508b3ab8,
                 (FLogCategoryBase *)&LogStreaming);
      if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      }
      if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
      }
      if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
      }
      if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
      }
      if ((lVar26 != 0) && (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
         ) {
        FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar12 = false;
  pFVar11->CurrentExport = (UObject *)0x0;
  pFVar11->ExportSerialOffset = 0;
  pFVar11->ExportSerialSize = 0;
  *(undefined8 *)pFVar11->_padding_ = ((undefined8 *)pFVar11->_padding_)[2];
  UObjectBase::AtomicallySetFlags(local_608,RF_LoadCompleted);
  local_578->SerializedObject = local_570;
  pTVar9 = CVar_CheckBlueprintCDOWillBePostLoadedAfterPreload.Ref;
  if (((local_608->ObjectFlags >> 4 & 1) != 0) &&
     ((((local_608->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr)->ClassFlags >> 0x12 & 1) != 0)) {
    bVar14 = IsInParallelGameThread();
    if (bVar14) {
LAB_14231cc71:
      lVar26 = lVar31;
    }
    else {
      bVar14 = IsInGameThread();
      lVar26 = 1;
      if (bVar14) goto LAB_14231cc71;
    }
    if (pTVar9->ShadowedValue[lVar26] == false) {
      if ((local_608->ObjectFlags & (RF_WasLoaded|RF_NeedPostLoad)) !=
          (RF_WasLoaded|RF_NeedPostLoad)) {
        local_568 = &local_608;
        `FAsyncPackage2::EventDrivenSerializeExport'::__l189::<lambda_1>::operator()(&local_568);
      }
    }
    else if ((local_608->ObjectFlags & (RF_WasLoaded|RF_NeedPostLoad)) !=
             (RF_WasLoaded|RF_NeedPostLoad)) {
      if (local_608 == (UObjectBase *)0x0) {
LAB_14231cd2d:
        local_5f8 = (FAsyncPackage2 *)&u_None;
      }
      else {
        iVar16 = local_608->InternalIndex;
        if ((iVar16 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                ,0x443,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        if (iVar16 < GUObjectArray.ObjObjects.NumElements) {
          FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar16);
        }
        if (local_608 == (UObjectBase *)0x0) goto LAB_14231cd2d;
        bVar12 = true;
        pFVar24 = ::LexToString(&local_438,local_608->ObjectFlags);
        if ((pFVar24->Data).ArrayNum == 0) {
          local_5f8 = (FAsyncPackage2 *)0x15060d16c;
        }
        else {
          local_5f8 = (FAsyncPackage2 *)(pFVar24->Data).AllocatorInstance.Data;
        }
      }
      bVar14 = local_608 != (UObjectBase *)0x0;
      if (bVar14) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_608,&local_448,(UObject *)0x0,None);
      }
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object->HasAllFlags(RF_NeedPostLoad | RF_WasLoaded)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x22b9,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
      if ((bVar14) && (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
      if ((bVar12) && (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_438.Data.AllocatorInstance.Data);
      }
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
    }
  }
  if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14231ce89:
    if (6 < (byte)LogStreaming._0_1_) {
      pFVar24 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_608,&local_3e8,(UObject *)0x0);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_5d8 = (FExportMapEntry *)0x15060d16c;
      }
      else {
        local_5d8 = (FExportMapEntry *)(pFVar24->Data).AllocatorInstance.Data;
      }
      ::LexToString(&local_3f8,&(pFVar29->Desc).PackageIdToLoad);
      FVar25 = FPackagePath::GetPackageFName(&(pFVar29->Desc).PackagePathToLoad);
      ::FName::ToString((FName *)FVar25,&local_408);
      ::LexToString(&local_418,&(pFVar29->Desc).UPackageId);
      ::FName::ToString(&(pFVar29->Desc).UPackageName,&local_428);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
          (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
           GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
    FVar28 = (ForElementType<FSetElementId>)0x154ba3ce8;
    if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar28 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
    }
    iVar16 = *(int *)((longlong)FVar28 +
                     (ulonglong)
                     (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                     (uint)(pFVar29->Desc).UPackageId.Id) * 4);
    if (iVar16 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar16 * 0x10)
            == (pFVar29->Desc).UPackageId.Id) goto LAB_14231ce89;
        iVar16 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar16 * 0x10);
      } while (iVar16 != -1);
    }
  }
  bVar12 = true;
  if (bVar8) {
    lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar31 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar27 = *(FWriteBuffer **)(lVar31 + 0x20);
    if ((int)pFVar27 - *(int *)&pFVar27->Cursor < 1) {
      pFVar27 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar27->Cursor = '\n';
    pFVar27->Cursor = pFVar27->Cursor + 1;
    pFVar27->Committed = pFVar27->Cursor;
  }
  if (local_200 != '\0') {
    local_2e8._padding_ = (longlong)&___7FExportArchive__6B_;
    FArchive::~FArchive((FArchive *)&local_2e8);
  }
LAB_14231d533:
  FLoadTimeProfilerTracePrivate::FSerializeExportScope::~FSerializeExportScope(local_600);
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_560);
  FLLMScope::~FLLMScope(&local_5c0);
  FMemScope::~FMemScope(&local_558);
  FLLMScope::~FLLMScope(&local_5bc);
  return bVar12;
}

// Event_CreateLinkerLoadExports @ 14231d5a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_CreateLinkerLoadExports
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  code *pcVar3;
  bool bVar4;
  EEventLoadNodeExecutionResult EVar5;
  int iVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  ForElementType<FSetElementId> FVar9;
  FTlsAutoCleanup FVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  FAsyncLoadingThreadState2 *local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  FAsyncLoadingThreadState2 **local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7583,"Event_CreateLinkerLoadExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1d9f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7583);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar9 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar9 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar6 = *(int *)((longlong)FVar9 +
                    (ulonglong)
                    (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                    (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar6 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            EVar5 = (*pcVar3)();
            return EVar5;
          }
          break;
        }
        iVar6 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar6 * 0x10)
        ;
      } while (iVar6 != -1);
    }
  }
  puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_58 = local_res10;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar7);
  if ((*(int *)(pFVar8 + 10) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1da2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::CreateLinkerLoadExports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1da3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_48 = local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar7);
  FVar1 = pFVar8[8];
  FVar2 = pFVar8[9];
  pFVar8[8] = (FTlsAutoCleanup)param_2;
  FVar10 = (FTlsAutoCleanup)&param_2->AsyncLoadingThread->_padding_;
  if (param_2->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    FVar10 = (FTlsAutoCleanup)0x0;
  }
  pFVar8[9] = FVar10;
  if (((param_2->LinkerLoadState).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->LinkerLoadState.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1daa,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  bVar4 = CreateLinkerLoadExports(param_2,param_1);
  if (bVar4) {
    LOCK();
    param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x7;
    UNLOCK();
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId7608,"ConditionalBeginResolveLinkerLoadImports",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x1db8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7608);
    }
    local_38 = &local_68;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginResolveLinkerLoadImports'::__l2::<lambda_1>,void,FAsyncPackage2_*>
               ::Call;
    local_68 = param_1;
    WaitForAllDependenciesToReachState
              (param_2,param_1,(pdm_72c38f00)0x4d0,WaitingForLinkerLoadDependencies,
               &param_2->AsyncLoadingThread->ConditionalBeginResolveImportsTick,
               (TFunctionRef<void___cdecl(FAsyncPackage2_*)> *)&local_40);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    EVar5 = Complete;
  }
  else {
    EVar5 = Timeout;
  }
  pFVar8[8] = FVar1;
  pFVar8[9] = FVar2;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar5;
}

// Event_DeferredPostLoadExportBundle @ 14231d860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_DeferredPostLoadExportBundle
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  int *piVar1;
  double dVar2;
  FExportBundleEntry *pFVar3;
  FExportObject *pFVar4;
  TAtomic<FMinimalName> TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  FAsyncLoadingThreadState2 *pFVar15;
  bool bVar16;
  bool bVar17;
  EEventLoadNodeExecutionResult EVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread> FVar25;
  uint *puVar26;
  FTlsAutoCleanup *pFVar27;
  FName FVar28;
  FUObjectItem *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar30;
  FUObjectItem *this;
  TEventRef<unsigned_int> TVar31;
  UPackage *pUVar32;
  FWriteBuffer *pFVar33;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForElementType<FSetElementId> FVar34;
  uint uVar35;
  TStatIdData *pTVar36;
  FAsyncLoadingThread2 *pFVar37;
  FNameEntryId FVar38;
  FTlsAutoCleanup FVar39;
  FName FVar40;
  bool bVar41;
  undefined1 auStackY_258 [32];
  FPostLoadScope local_1f6;
  undefined1 local_1f5;
  FName local_1f0;
  byte local_1e8;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de [2];
  uint local_1dc;
  FName local_1d8;
  undefined4 local_1d0;
  FLLMScope local_1cc;
  FLLMScope local_1c8;
  FColor_u_0 local_1c4;
  FColor_u_0 local_1c0 [2];
  FName local_1b8;
  FName local_1b0;
  uint local_1a8;
  uint uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  FAsyncLoadingThread2 *local_188;
  FAsyncLoadingThreadState2 *local_180;
  FName local_178;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  FMemScope local_150;
  FMemScope local_148;
  FAsyncPackage2 *local_140;
  FTlsAutoCleanup local_138;
  FTlsAutoCleanup local_130;
  FTlsAutoCleanup *local_128;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  LARGE_INTEGER local_108;
  FName local_100;
  code *local_f8;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FString local_88;
  undefined4 *local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1dc = 0;
  FVar25 = StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread;
  local_180 = param_1;
  local_140 = param_2;
  if (StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)0x0) {
    pFVar24 = ::FName::FName(&local_a8,"STAT_FAsyncPackage_PostLoadObjectsGameThread");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread,*pFVar24,
                        L"PostLoadObjects GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                        L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar40 = *(FName *)FVar25;
  bVar12 = false;
  bVar13 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar16 = false;
  bVar41 = false;
  if ((FVar40.ComparisonIndex.Value.Value == 0) && (FVar40.Number == 0)) {
LAB_14231d9db:
    bVar13 = bVar41;
    bVar12 = bVar16;
    bVar16 = false;
    FVar40 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c4._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar16 = false;
      bVar41 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar40.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar40.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x253e);
        bVar12 = true;
        bVar13 = true;
        bVar16 = true;
        bVar41 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14231d9db;
    local_1d8 = FVar40;
    FThreadStats::AddMessage(FVar40,CycleScopeStart);
    bVar16 = true;
  }
  bVar41 = -1 < CpuChannel->Enabled;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9535,"Event_DeferredPostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x253f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9535);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar34 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar34 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar21 = *(int *)((longlong)FVar34 +
                     (ulonglong)
                     (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                     (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar21 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar21 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar17 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar17) {
            pcVar10 = (code *)swi(3);
            EVar18 = (*pcVar10)();
            return EVar18;
          }
          break;
        }
        iVar21 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar21 * 0x10);
      } while (iVar21 != -1);
    }
  }
  if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xe) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::DeferredPostLoad"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2541,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    EVar18 = (*pcVar10)();
    return EVar18;
  }
  puVar26 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_f0 = &local_1e0;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar27 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_f8,puVar26);
  if ((*(int *)(pFVar27 + 10) != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2543,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    EVar18 = (*pcVar10)();
    return EVar18;
  }
  puVar26 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_e0 = &local_1df;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_128 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e8,puVar26);
  local_1d0 = *(undefined4 *)(local_128 + 10);
  *(undefined4 *)(local_128 + 10) = 0x400000;
  puVar26 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_d0 = local_1de;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  FVar28 = (FName)FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar26);
  local_138 = *(FTlsAutoCleanup *)((longlong)FVar28 + 0x40);
  *(FAsyncPackage2 **)((longlong)FVar28 + 0x40) = param_2;
  local_130 = *(FTlsAutoCleanup *)((longlong)FVar28 + 0x48);
  FVar39 = (FTlsAutoCleanup)&param_2->AsyncLoadingThread->_padding_;
  if (param_2->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    FVar39 = (FTlsAutoCleanup)0x0;
  }
  *(FTlsAutoCleanup *)((longlong)FVar28 + 0x48) = FVar39;
  local_1f5 = *(undefined1 *)((longlong)FVar28 + 0x20);
  *(undefined1 *)((longlong)FVar28 + 0x20) = 1;
  local_1d8 = FVar28;
  if ((param_2->LinkerLoadState).bIsSet == false) {
    if (((param_2->Data).TotalExportBundleCount <= param_3) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InExportBundleIndex < Package->Data.TotalExportBundleCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x2553,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      EVar18 = (*pcVar10)();
      return EVar18;
    }
    if (param_2->LoadStatus == Succeeded) {
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId9560,"PostLoadDeferredObjectsTime",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x2558);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9560);
      }
      FLoadTimeProfilerTracePrivate::FPostLoadScope::FPostLoadScope(&local_1f6);
      pFVar37 = param_2->AsyncLoadingThread;
      local_188 = pFVar37;
      bVar19 = IsInGameThread();
      if (bVar19) {
        pFVar37->AsyncLoadingTickCounter = pFVar37->AsyncLoadingTickCounter + 1;
      }
      dVar14 = __real_4170000000000000;
      uVar35 = param_2->ExportBundleEntryIndex;
      if ((int)uVar35 < (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum) {
        do {
          uVar22 = 0;
          if ((int)uVar35 < (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum) {
            uVar22 = ~uVar35 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar20)) {
            pcVar10 = (code *)swi(3);
            EVar18 = (*pcVar10)();
            return EVar18;
          }
          pFVar15 = local_180;
          pFVar3 = (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.DataPtr;
          if (local_180->bUseTimeLimit != false) {
            QueryPerformanceCounter(&local_108);
            dVar2 = pFVar15->TimeLimit;
            dVar11 = (double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar14;
            bVar20 = dVar11 - pFVar15->StartTime <= dVar2;
            if ((bVar20) || (GWarnIfTimeLimitExceeded == 0)) {
              pFVar15->LastTestTime = dVar11;
              if (bVar20) goto LAB_14231dd75;
LAB_14231e718:
              bVar20 = false;
              pFVar37 = local_188;
              FVar28 = local_1d8;
            }
            else {
              IsTimeLimitExceededPrint
                        (pFVar15->StartTime,dVar11,pFVar15->LastTestTime,dVar2,
                         L"Event_DeferredPostLoadExportBundle",(UObject *)0x0);
              bVar20 = false;
              pFVar15->LastTestTime = dVar11;
              pFVar37 = local_188;
              FVar28 = local_1d8;
            }
            goto LAB_14231e4dd;
          }
LAB_14231dd75:
          if (((GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) &&
              ((pFVar15->SyncLoadContextStack).ArrayNum == 0)) &&
             (bVar20 = IsInParallelLoadingThread(), !bVar20)) {
            if (5 < (byte)LogStreaming._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                          ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            }
            goto LAB_14231e718;
          }
          if (pFVar3[(int)uVar35].CommandType == 1) {
            uVar35 = pFVar3[(int)uVar35].LocalExportIndex;
            uVar22 = (param_2->HeaderData).ExportsView.ArrayNum;
            if (uVar35 < uVar22) {
              uVar23 = 0;
              if ((int)uVar35 < (int)uVar22) {
                uVar23 = ~uVar35 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar20)) {
                pcVar10 = (code *)swi(3);
                EVar18 = (*pcVar10)();
                return EVar18;
              }
              pFVar4 = (param_2->HeaderData).ExportsView.DataPtr;
              if ((pFVar4[(int)uVar35].bFiltered == false) &&
                 (pFVar4[(int)uVar35].bExportLoadFailed == false)) {
                FVar39 = (FTlsAutoCleanup)pFVar4[(int)uVar35].Object;
                if ((FVar39 == (FTlsAutoCleanup)0x0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                        ,0x2588,L""), bVar20)) {
                  pcVar10 = (code *)swi(3);
                  EVar18 = (*pcVar10)();
                  return EVar18;
                }
                if ((*(uint *)((longlong)FVar39 + 8) >> 10 & 1) != 0) {
                  iVar21 = *(int *)((longlong)FVar39 + 0xc);
                  if ((iVar21 < 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                          ,0x443,L""), bVar20)) {
                    pcVar10 = (code *)swi(3);
                    EVar18 = (*pcVar10)();
                    return EVar18;
                  }
                  if (iVar21 < GUObjectArray.ObjObjects.NumElements) {
                    FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar21);
                  }
                  uVar35 = local_1dc;
                  ::LexToString(&local_88,*(EObjectFlags *)((longlong)FVar39 + 8));
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)FVar39,&local_98,(UObject *)0x0,None);
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Object->HasAnyFlags(RF_NeedLoad)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x2589,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X")
                  ;
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                  }
                  local_1dc = uVar35 & 0xfffffffc;
                  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_88.Data.AllocatorInstance.Data);
                  }
                  if (bVar20) {
                    pcVar10 = (code *)swi(3);
                    EVar18 = (*pcVar10)();
                    return EVar18;
                  }
                }
                pFVar29 = (FUObjectItem *)0x0;
                param_2 = local_140;
                if ((*(uint *)((longlong)FVar39 + 8) >> 0xc & 1) != 0) {
                  *(FTlsAutoCleanup *)((longlong)local_1d8 + 0x38) = FVar39;
                  FVar25 = StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread;
                  if (StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread ==
                      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)0x0
                     ) {
                    pFVar24 = ::FName::FName(&local_b0,
                                             "STAT_FAsyncPackage_PostLoadObjectsGameThread");
                    FVar25 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>
                              )FThreadSafeStaticStatBase::DoSetup
                                         ((FThreadSafeStaticStatBase *)
                                          &StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread,
                                          *pFVar24,L"PostLoadObjects GT",
                                          "STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                                          L"Async Load Game Thread",true,true,ST_int64,true,false,
                                          MCR_Invalid);
                  }
                  local_1f0.ComparisonIndex.Value = 0;
                  local_1f0.Number = 0;
                  local_1e8 = 0;
                  if ((((int)*(undefined8 *)FVar25 == 0) &&
                      ((int)((ulonglong)*(undefined8 *)FVar25 >> 0x20) == 0)) ||
                     (FThreadStats::bPrimaryEnable == false)) {
LAB_14231e224:
                    if (-1 < CpuChannel->Enabled) {
                      FScopeCycleCounterUObject::StartObjectTrace
                                ((FScopeCycleCounterUObject *)&local_1f0,
                                 (UObjectBaseUtility *)FVar39);
                    }
                  }
                  else {
                    iVar21 = *(int *)((longlong)FVar39 + 0xc);
                    if ((iVar21 < 0) &&
                       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                            ,0x443,L""), bVar20)) {
                      pcVar10 = (code *)swi(3);
                      EVar18 = (*pcVar10)();
                      return EVar18;
                    }
                    if (iVar21 < GUObjectArray.ObjObjects.NumElements) {
                      pFVar29 = FChunkedFixedUObjectArray::operator[]
                                          (&GUObjectArray.ObjObjects,iVar21);
                    }
                    FVar30 = StatPtr_STAT_UObjectsStatGroupTester;
                    if (StatPtr_STAT_UObjectsStatGroupTester ==
                        (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
                      pFVar24 = ::FName::FName(&local_a0,"STAT_UObjectsStatGroupTester");
                      FVar30 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                               FThreadSafeStaticStatBase::DoSetup
                                         ((FThreadSafeStaticStatBase *)
                                          &StatPtr_STAT_UObjectsStatGroupTester,*pFVar24,
                                          L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                                          "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,
                                          false,MCR_Invalid);
                    }
                    if ((((int)*(undefined8 *)FVar30 == 0) &&
                        ((int)((ulonglong)*(undefined8 *)FVar30 >> 0x20) == 0)) ||
                       (FThreadStats::bPrimaryEnable == false)) {
                      pTVar36 = &TStatId::TStatId_NAME_None;
                    }
                    else {
                      TVar5 = ((pFVar29->StatID).StatIdPtr)->Name;
                      if ((TVar5._0_4_ == 0) && (TVar5._4_4_ == 0)) {
                        iVar21 = *(int *)((longlong)FVar39 + 0xc);
                        if ((iVar21 < 0) &&
                           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Index >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                                ,0x443,L""), bVar20)) {
                          pcVar10 = (code *)swi(3);
                          EVar18 = (*pcVar10)();
                          return EVar18;
                        }
                        if (iVar21 < GUObjectArray.ObjObjects.NumElements) {
                          this = FChunkedFixedUObjectArray::operator[]
                                           (&GUObjectArray.ObjObjects,iVar21);
                          FUObjectItem::CreateStatID(this);
                          pTVar36 = (pFVar29->StatID).StatIdPtr;
                          goto LAB_14231e173;
                        }
                        FUObjectItem::CreateStatID((FUObjectItem *)0x0);
                      }
                      pTVar36 = (pFVar29->StatID).StatIdPtr;
                    }
LAB_14231e173:
                    if ((SUB84(pTVar36->Name,0) == 0) && (SUB84(pTVar36->Name,4) == 0))
                    goto LAB_14231e224;
                    FVar28 = *(FName *)&pTVar36->Name;
                    FVar38 = FVar28.ComparisonIndex.Value;
                    uVar35 = FVar28.Number;
                    if ((FVar38.Value != 0) || (uVar35 != 0)) {
                      if (GCycleStatsShouldEmitNamedEvents != 0) {
                        local_1c0[0].Bits = 0;
                        FGenericPlatformMisc::BeginNamedEvent
                                  ((FColor *)&local_1c0[0]._s_0,(pTVar36->StatDescriptionAnsi).Ptr);
                        local_1e8 = local_1e8 | 1;
                        if (-1 < CpuChannel->Enabled) {
                          local_1b0.ComparisonIndex.Value = FVar38.Value;
                          local_1b0.Number = uVar35;
                          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                    (&local_1b0,(pTVar36->StatDescriptionWide).Ptr,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                     ,0x3f6);
                          local_1e8 = local_1e8 | 2;
                        }
                      }
                      if (FThreadStats::bPrimaryEnable != false) {
                        local_1f0 = FVar28;
                        local_1a8 = FVar38.Value;
                        uStack_1a4 = uVar35;
                        FThreadStats::AddMessage(FVar28,CycleScopeStart);
                        local_1e8 = local_1e8 | 4;
                      }
                    }
                  }
                  FLLMScope::FLLMScope(&local_1c8,UObject,false,None,Default,true);
                  FMemScope::FMemScope(&local_148,UObject,true);
                  FLLMScope::FLLMScope
                            (&local_1cc,LLMTagDeclaration_UObject_FAsyncPackage2.UniqueName,false,
                             None,Default,true);
                  local_100 = LLMTagDeclaration_UObject_FAsyncPackage2.UniqueName;
                  FMemScope::FMemScope(&local_150,&local_100,true);
                  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                    local_1a0 = 0;
                    TVar31 = (TEventRef<unsigned_int>)&local_1a0;
                  }
                  else {
                    local_168 = *(undefined8 *)((longlong)FVar39 + 0x18);
                    TVar31 = FStringTrace::GetNameRef(&local_c8);
                  }
                  uVar6 = *(undefined8 *)TVar31;
                  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                    TVar31 = (TEventRef<unsigned_int>)&local_198;
                    local_198 = 0;
                  }
                  else {
                    local_160 = *(undefined8 *)(*(longlong *)((longlong)FVar39 + 0x10) + 0x18);
                    TVar31 = FStringTrace::GetNameRef(&local_c0);
                  }
                  uVar7 = *(undefined8 *)TVar31;
                  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                    local_190 = 0;
                    TVar31 = (TEventRef<unsigned_int>)&local_190;
                  }
                  else {
                    pUVar32 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)FVar39);
                    local_158 = pUVar32->_padding_;
                    TVar31 = FStringTrace::GetNameRef(&local_b8);
                  }
                  uVar8 = *(undefined8 *)TVar31;
                  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                    UObject::ConditionalPostLoad((UObject *)FVar39);
                  }
                  else {
                    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
                              ((TLogScope<0> *)&local_78);
                    *local_78 = (int)uVar6;
                    local_78[1] = (int)uVar7;
                    local_78[2] = (int)uVar8;
                    *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
                    UObject::ConditionalPostLoad((UObject *)FVar39);
                    lVar9 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    if (*(char *)(lVar9 + 0x9d48) == '\0') {
                      __dyn_tls_on_demand_init();
                    }
                    pFVar33 = *(FWriteBuffer **)(lVar9 + 0x20);
                    if ((int)pFVar33 - *(int *)&pFVar33->Cursor < 1) {
                      pFVar33 = UE::Trace::Private::Writer_NextBuffer();
                    }
                    *pFVar33->Cursor = '\n';
                    pFVar33->Cursor = pFVar33->Cursor + 1;
                    pFVar33->Committed = pFVar33->Cursor;
                  }
                  FMemScope::~FMemScope(&local_150);
                  FLLMScope::~FLLMScope(&local_1cc);
                  FMemScope::~FMemScope(&local_148);
                  FLLMScope::~FLLMScope(&local_1c8);
                  if ((local_1e8 & 1) != 0) {
                    FGenericPlatformMisc::EndNamedEvent();
                  }
                  if ((local_1e8 & 2) != 0) {
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  if ((local_1e8 & 4) != 0) {
                    FThreadStats::AddMessage(local_1f0,CycleScopeEnd);
                  }
                  local_1e8 = 0;
                  *(FTlsAutoCleanup *)((longlong)local_1d8 + 0x38) = (FTlsAutoCleanup)0x0;
                  param_2 = local_140;
                }
              }
            }
          }
          param_2->ExportBundleEntryIndex = param_2->ExportBundleEntryIndex + 1;
          uVar35 = param_2->ExportBundleEntryIndex;
          pFVar37 = local_188;
          FVar28 = local_1d8;
        } while ((int)uVar35 < (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum);
      }
      bVar20 = true;
LAB_14231e4dd:
      if (bVar19) {
        piVar1 = &pFVar37->AsyncLoadingTickCounter;
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("AsyncLoadingTickCounter >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                ,0x1128,L""), bVar19)) {
          pcVar10 = (code *)swi(3);
          EVar18 = (*pcVar10)();
          return EVar18;
        }
      }
      FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(&local_1f6);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      EVar18 = Timeout;
      param_1 = local_180;
      if (!bVar20) goto LAB_14231e5b2;
    }
    param_2->ProcessedExportBundlesCount = param_2->ProcessedExportBundlesCount + 1;
    param_2->ExportBundleEntryIndex = 0;
    if (param_2->ProcessedExportBundlesCount == (param_2->Data).TotalExportBundleCount) {
      param_2->ProcessedExportBundlesCount = 0;
      if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xe) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::DeferredPostLoad"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x25ab,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        EVar18 = (*pcVar10)();
        return EVar18;
      }
      LOCK();
      param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xf;
      UNLOCK();
      ConditionalFinishLoading(param_2,param_1);
    }
    EVar18 = Complete;
  }
  else {
    EVar18 = ExecuteDeferredPostLoadLinkerLoadPackageExports(param_2,param_1);
  }
LAB_14231e5b2:
  *(undefined1 *)((longlong)FVar28 + 0x20) = local_1f5;
  *(FTlsAutoCleanup *)((longlong)FVar28 + 0x40) = local_138;
  *(FTlsAutoCleanup *)((longlong)FVar28 + 0x48) = local_130;
  *(undefined4 *)(local_128 + 10) = local_1d0;
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar40 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar40.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar40.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar18;
}

// Event_DependenciesReady @ 14231e770

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_DependenciesReady
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  EEventLoadNodeExecutionResult EVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  FAsyncLoadingThreadState2 *local_res10;
  code *local_38;
  undefined1 *local_30;
  code *local_28;
  FAsyncLoadingThreadState2 **local_20;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7833,"Event_DependenciesReady",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1e99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7833);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar7 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar7 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                    (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar4 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
          break;
        }
        iVar4 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar4 * 0x10)
        ;
      } while (iVar4 != -1);
    }
  }
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
  if ((*(int *)(pFVar6 + 10) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1e9c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::WaitingForDependencies"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1e9d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  LOCK();
  param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x5;
  UNLOCK();
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9337,"ConditionalBeginProcessPackageExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2479);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9337);
  }
  local_20 = &local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginProcessPackageExports'::__l2::<lambda_1>,void,FAsyncPackage2_*>
             ::Call;
  local_res10 = param_1;
  WaitForAllDependenciesToReachState
            (param_2,param_1,(pdm_72c38f00)0x498,DependenciesReady,
             &param_2->AsyncLoadingThread->ConditionalBeginProcessExportsTick,
             (TFunctionRef<void___cdecl(FAsyncPackage2_*)> *)&local_28);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return Complete;
}

// Event_ExportsDone @ 14231e980

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_ExportsDone
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  FAsyncLoadingPostLoadGroup *pFVar1;
  code *pcVar2;
  FSHAHash *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  EEventLoadNodeExecutionResult EVar6;
  int iVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  FLoadedPackageRef *pFVar10;
  ForElementType<FSetElementId> FVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  code *local_58;
  undefined1 *local_50;
  FSHAHash *local_48;
  undefined8 uStack_40;
  FReadAccessScope local_38 [2];
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9062,"Event_ExportsDone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2366);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9062);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar11 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar11 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar7 = *(int *)((longlong)FVar11 +
                    (ulonglong)
                    (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                    (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar7 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar5 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            EVar6 = (*pcVar2)();
            return EVar6;
          }
          break;
        }
        iVar7 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar7 * 0x10)
        ;
      } while (iVar7 != -1);
    }
  }
  puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_50 = local_res10;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,puVar8);
  if ((*(int *)(pFVar9 + 10) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2369,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  if ((((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xa) &&
       (param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xb)) &&
      (param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::ProcessExportBundles || Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::WaitingForExternalReads || Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::PreloadLinkerLoadExports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x236d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  LOCK();
  param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xc;
  UNLOCK();
  if ((param_2->LoadStatus == Succeeded) && ((param_2->Desc).bCanBeImported != false)) {
    pFVar10 = FGlobalImportStore::FindPackageRefChecked
                        (&param_2->AsyncLoadingThread->GlobalImportStore,
                         (FPackageId)(param_2->Desc).UPackageId.Id,(param_2->Desc).UPackageName);
    if ((pFVar10->bIsMissing != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsMissing",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x591,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      EVar6 = (*pcVar2)();
      return EVar6;
    }
    if ((pFVar10->bHasFailed != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasFailed",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x592,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      EVar6 = (*pcVar2)();
      return EVar6;
    }
    if ((pFVar10->PackageObjectIndex < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HasPackage()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x593,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      EVar6 = (*pcVar2)();
      return EVar6;
    }
    pFVar10->bAreAllPublicExportsLoaded = true;
    pFVar10->bIsMissing = false;
    pFVar10->bHasBeenLoadedDebug = true;
  }
  if ((param_2->Data).ShaderMapHashes.ArrayNum != 0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId9086,"ReleasePreloadedShaderMaps",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x237e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9086);
    }
    pFVar3 = (param_2->Data).ShaderMapHashes.DataPtr;
    uVar4 = *(undefined8 *)&(param_2->Data).ShaderMapHashes.ArrayNum;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::ReleasePreloadedPackageShaderMaps,local_38);
    if ((FCoreDelegates::ReleasePreloadedPackageShaderMaps._16_4_ != 0) &&
       (FCoreDelegates::ReleasePreloadedPackageShaderMaps._8_8_ != 0)) {
      local_48 = pFVar3;
      uStack_40 = uVar4;
      (**(code **)(*(longlong *)FCoreDelegates::ReleasePreloadedPackageShaderMaps._8_8_ + 0x68))
                (FCoreDelegates::ReleasePreloadedPackageShaderMaps._8_8_,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  CallProgressCallbacks(param_2,Serialized);
  pFVar1 = param_2->PostLoadGroup;
  if ((pFVar1 == (FAsyncLoadingPostLoadGroup *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostLoadGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2385,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  if ((pFVar1->PackagesWithExportsToSerializeCount < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostLoadGroup->PackagesWithExportsToSerializeCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2386,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  pFVar1->PackagesWithExportsToSerializeCount = pFVar1->PackagesWithExportsToSerializeCount + -1;
  FAsyncLoadingThread2::ConditionalBeginPostLoad(param_2->AsyncLoadingThread,param_1,pFVar1);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return Complete;
}

// Event_PostLoadExportBundle @ 14231ed30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_PostLoadExportBundle
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  double dVar1;
  undefined1 uVar2;
  bool bVar3;
  atomic<bool> aVar4;
  FExportBundleEntry *pFVar5;
  FExportObject *pFVar6;
  FAsyncLoadingPostLoadGroup *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  EEventLoadNodeExecutionResult EVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  FTlsAutoCleanup *pFVar20;
  FAsyncLoadingThreadSettings *pFVar21;
  ForElementType<FSetElementId> FVar22;
  FTlsAutoCleanup FVar23;
  uint uVar24;
  FTlsAutoCleanup FVar25;
  bool bVar26;
  FPostLoadScope local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4 [4];
  FTlsAutoCleanup *local_d0;
  FTlsAutoCleanup *local_c8;
  FTlsAutoCleanup local_c0;
  LARGE_INTEGER local_b8;
  FTlsAutoCleanup local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  FString local_78;
  FString local_68 [3];
  
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId9384,"Event_PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x24a8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9384);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar22 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar22 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar15 = *(int *)((longlong)FVar22 +
                     (ulonglong)
                     (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                     (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar15 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar15 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar11 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            EVar12 = (*pcVar8)();
            return EVar12;
          }
          break;
        }
        iVar15 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar15 * 0x10);
      } while (iVar15 != -1);
    }
  }
  puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_a0 = &local_d6;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar18);
  if ((*(int *)(pFVar19 + 10) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x24ab,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    EVar12 = (*pcVar8)();
    return EVar12;
  }
  if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xd) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::PostLoad"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x24ac,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    EVar12 = (*pcVar8)();
    return EVar12;
  }
  if (((param_2->ExternalReadDependencies).ArrayNum != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package->ExternalReadDependencies.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x24ad,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    EVar12 = (*pcVar8)();
    return EVar12;
  }
  puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_90 = &local_d5;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
  FVar25 = pFVar19[8];
  pFVar19[8] = (FTlsAutoCleanup)param_2;
  local_b0 = pFVar19[9];
  FVar23 = (FTlsAutoCleanup)&param_2->AsyncLoadingThread->_padding_;
  if (param_2->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    FVar23 = (FTlsAutoCleanup)0x0;
  }
  pFVar19[9] = FVar23;
  local_c8 = pFVar19;
  local_c0 = FVar25;
  if ((param_2->LinkerLoadState).bIsSet == false) {
    if (((param_2->Data).TotalExportBundleCount <= param_3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InExportBundleIndex < Package->Data.TotalExportBundleCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x24cd,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      EVar12 = (*pcVar8)();
      return EVar12;
    }
    if (param_2->LoadStatus == Succeeded) {
      BeginAsyncLoad(param_2);
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId9430,"PostLoadObjectsTime",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x24d6);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId9430);
      }
      FLoadTimeProfilerTracePrivate::FPostLoadScope::FPostLoadScope(&local_d7);
      puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_80 = local_d4;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar20 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar18);
      uVar2 = *(undefined1 *)(pFVar20 + 4);
      *(undefined1 *)(pFVar20 + 4) = 1;
      local_d0 = pFVar20;
      pFVar21 = FAsyncLoadingThreadSettings::Get();
      dVar10 = __real_4170000000000000;
      bVar3 = pFVar21->bAsyncPostLoadEnabled;
      aVar4 = param_2->AsyncLoadingThread->bThreadStarted;
      uVar24 = param_2->ExportBundleEntryIndex;
      if ((int)uVar24 < (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum) {
        do {
          uVar16 = 0;
          if ((int)uVar24 < (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum) {
            uVar16 = ~uVar24 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            EVar12 = (*pcVar8)();
            return EVar12;
          }
          pFVar5 = (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.DataPtr;
          if (param_1->bUseTimeLimit != false) {
            QueryPerformanceCounter(&local_b8);
            dVar1 = param_1->TimeLimit;
            dVar9 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10;
            bVar13 = dVar9 - param_1->StartTime <= dVar1;
            if ((bVar13) || (GWarnIfTimeLimitExceeded == 0)) {
              param_1->LastTestTime = dVar9;
              if (bVar13) goto LAB_14231f14b;
LAB_14231f471:
              bVar3 = false;
              pFVar19 = local_c8;
            }
            else {
              IsTimeLimitExceededPrint
                        (param_1->StartTime,dVar9,param_1->LastTestTime,dVar1,
                         L"Event_PostLoadExportBundle",(UObject *)0x0);
              bVar3 = false;
              param_1->LastTestTime = dVar9;
              pFVar19 = local_c8;
            }
            goto LAB_14231f3d3;
          }
LAB_14231f14b:
          if (((GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) &&
              ((param_1->SyncLoadContextStack).ArrayNum == 0)) &&
             (bVar13 = IsInParallelLoadingThread(), !bVar13)) {
            if (5 < (byte)LogStreaming._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                          ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            }
            goto LAB_14231f471;
          }
          if (pFVar5[(int)uVar24].CommandType == 1) {
            uVar24 = pFVar5[(int)uVar24].LocalExportIndex;
            uVar16 = (param_2->HeaderData).ExportsView.ArrayNum;
            if (uVar24 < uVar16) {
              uVar17 = 0;
              if ((int)uVar24 < (int)uVar16) {
                uVar17 = ~uVar24 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                EVar12 = (*pcVar8)();
                return EVar12;
              }
              pFVar6 = (param_2->HeaderData).ExportsView.DataPtr;
              if ((pFVar6[(int)uVar24].bFiltered == false) &&
                 (pFVar6[(int)uVar24].bExportLoadFailed == false)) {
                FVar23 = (FTlsAutoCleanup)pFVar6[(int)uVar24].Object;
                if ((FVar23 == (FTlsAutoCleanup)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                        ,0x250b,L""), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  EVar12 = (*pcVar8)();
                  return EVar12;
                }
                if ((*(uint *)((longlong)FVar23 + 8) >> 10 & 1) != 0) {
                  iVar15 = *(int *)((longlong)FVar23 + 0xc);
                  if ((iVar15 < 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                          ,0x443,L""), bVar13)) {
                    pcVar8 = (code *)swi(3);
                    EVar12 = (*pcVar8)();
                    return EVar12;
                  }
                  if (iVar15 < GUObjectArray.ObjObjects.NumElements) {
                    FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar15);
                  }
                  ::LexToString(local_68,*(EObjectFlags *)((longlong)FVar23 + 8));
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)FVar23,&local_78,(UObject *)0x0,None);
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Object->HasAnyFlags(RF_NeedLoad)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x250c,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X")
                  ;
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
                  }
                  pFVar20 = local_d0;
                  if (bVar13) {
                    pcVar8 = (code *)swi(3);
                    EVar12 = (*pcVar8)();
                    return EVar12;
                  }
                }
                if ((*(uint *)((longlong)FVar23 + 8) >> 0xc & 1) != 0) {
                  cVar14 = (**(code **)(*(longlong *)FVar23 + 0x90))(FVar23);
                  if ((cVar14 == '\0') &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Object->IsReadyForAsyncPostLoad()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                          ,0x2512,L""), bVar13)) {
                    pcVar8 = (code *)swi(3);
                    EVar12 = (*pcVar8)();
                    return EVar12;
                  }
                  if ((aVar4 == (atomic<bool>)0x0) ||
                     ((bVar3 != false &&
                      (bVar13 = CanPostLoadOnAsyncLoadingThread((UObject *)FVar23), bVar13)))) {
                    pFVar20[7] = FVar23;
                    UObject::ConditionalPostLoad((UObject *)FVar23);
                    pFVar20[7] = (FTlsAutoCleanup)0x0;
                  }
                }
              }
            }
          }
          param_2->ExportBundleEntryIndex = param_2->ExportBundleEntryIndex + 1;
          uVar24 = param_2->ExportBundleEntryIndex;
          pFVar19 = local_c8;
        } while ((int)uVar24 < (param_2->HeaderData).ExportBundleEntriesCopyForPostLoad.ArrayNum);
      }
      bVar3 = true;
LAB_14231f3d3:
      EndAsyncLoad(param_2);
      *(undefined1 *)(pFVar20 + 4) = uVar2;
      FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(&local_d7);
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar25 = local_c0;
      if (!bVar3) {
        EVar12 = Timeout;
        goto LAB_14231f518;
      }
    }
    param_2->ProcessedExportBundlesCount = param_2->ProcessedExportBundlesCount + 1;
    param_2->ExportBundleEntryIndex = 0;
    if (param_2->ProcessedExportBundlesCount == (param_2->Data).TotalExportBundleCount) {
      pFVar7 = param_2->DeferredPostLoadGroup;
      param_2->ProcessedExportBundlesCount = 0;
      if ((pFVar7 == (FAsyncLoadingPostLoadGroup *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("DeferredPostLoadGroup",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x2533,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        EVar12 = (*pcVar8)();
        return EVar12;
      }
      if ((pFVar7->PackagesWithExportsToPostLoadCount < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("DeferredPostLoadGroup->PackagesWithExportsToPostLoadCount > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x2534,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        EVar12 = (*pcVar8)();
        return EVar12;
      }
      pFVar7->PackagesWithExportsToPostLoadCount = pFVar7->PackagesWithExportsToPostLoadCount + -1;
      FAsyncLoadingThread2::ConditionalBeginDeferredPostLoad
                (param_2->AsyncLoadingThread,param_1,pFVar7);
    }
    EVar12 = Complete;
  }
  else {
    EVar12 = ExecutePostLoadLinkerLoadPackageExports(param_2,param_1);
  }
LAB_14231f518:
  pFVar19[8] = FVar25;
  pFVar19[9] = local_b0;
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar12;
}

// Event_PreloadLinkerLoadExports @ 14231f580

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_PreloadLinkerLoadExports
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  TArray<TFunction<bool___cdecl(double)>,TSizedDefaultAllocator<32>_> *pTVar1;
  TMpscQueue<FAsyncPackage2_*,FMemory> *pTVar2;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar3;
  FTlsAutoCleanup FVar4;
  FTlsAutoCleanup FVar5;
  FLinkerLoad *pFVar6;
  FAsyncLoadingThread2 *pFVar7;
  code *pcVar8;
  bool bVar9;
  EEventLoadNodeExecutionResult EVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  FTlsAutoCleanup *pFVar14;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar15;
  ForElementType<FSetElementId> FVar16;
  FTlsAutoCleanup FVar17;
  bool bVar18;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7674,"Event_PreloadLinkerLoadExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1dfa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7674);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar16 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar16 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar11 = *(int *)((longlong)FVar16 +
                     (ulonglong)
                     (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                     (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar11 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar11 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar9 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            EVar10 = (*pcVar8)();
            return EVar10;
          }
          break;
        }
        iVar11 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar11 * 0x10);
      } while (iVar11 != -1);
    }
  }
  puVar13 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_58 = local_res10;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar14 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar13);
  if ((*(int *)(pFVar14 + 10) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1dfd,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    EVar10 = (*pcVar8)();
    return EVar10;
  }
  if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::PreloadLinkerLoadExports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1dfe,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    EVar10 = (*pcVar8)();
    return EVar10;
  }
  puVar13 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_48 = local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar14 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar13);
  FVar4 = pFVar14[9];
  FVar5 = pFVar14[8];
  pFVar14[8] = (FTlsAutoCleanup)param_2;
  FVar17 = (FTlsAutoCleanup)&param_2->AsyncLoadingThread->_padding_;
  if (param_2->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    FVar17 = (FTlsAutoCleanup)0x0;
  }
  pFVar14[9] = FVar17;
  if ((param_2->LinkerLoadState).bIsSet != false) {
    bVar9 = PreloadLinkerLoadExports(param_2,param_1);
    if (!bVar9) {
      EVar10 = Timeout;
      goto LAB_14231f8f9;
    }
    if (((param_2->LinkerLoadState).bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      EVar10 = (*pcVar8)();
      return EVar10;
    }
    if ((((param_2->LinkerLoadState).TypedValue.Linker)->ExternalReadDependencies).ArrayNum != 0) {
      pTVar1 = &param_2->ExternalReadDependencies;
      if (((param_2->LinkerLoadState).bIsSet == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        EVar10 = (*pcVar8)();
        return EVar10;
      }
      pFVar6 = (param_2->LinkerLoadState).TypedValue.Linker;
      if ((pTVar1 == &pFVar6->ExternalReadDependencies) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        EVar10 = (*pcVar8)();
        return EVar10;
      }
      iVar11 = (pFVar6->ExternalReadDependencies).ArrayNum;
      if (iVar11 != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x30,0x10,iVar11,&pTVar1->AllocatorInstance,
                            &(param_2->ExternalReadDependencies).ArrayNum,
                            &(param_2->ExternalReadDependencies).ArrayMax);
        memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x30,
                (pFVar6->ExternalReadDependencies).AllocatorInstance.Data,(longlong)iVar11 * 0x30);
        (pFVar6->ExternalReadDependencies).ArrayNum = 0;
      }
    }
  }
  if ((param_2->ExternalReadDependencies).ArrayNum == 0) {
    if (((param_2->PackageNodes).ArrayNum < 7) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      EVar10 = (*pcVar8)();
      return EVar10;
    }
    FEventLoadNode2::ReleaseBarrier((param_2->PackageNodes).DataPtr + 6,param_1);
  }
  else {
    LOCK();
    param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xb;
    UNLOCK();
    pFVar7 = param_2->AsyncLoadingThread;
    aVar15 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
    *(undefined8 *)aVar15 = 0;
    *(FAsyncPackage2 **)((longlong)aVar15 + 8) = param_2;
    LOCK();
    pTVar2 = &pFVar7->ExternalReadQueue;
    aVar3 = pTVar2->Head;
    pTVar2->Head = aVar15;
    UNLOCK();
    *(atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *)aVar3 = aVar15;
  }
  EVar10 = Complete;
LAB_14231f8f9:
  pFVar14[8] = FVar5;
  pFVar14[9] = FVar4;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar10;
}

// Event_ProcessDependencies @ 14231f930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_ProcessDependencies
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FAsyncLoadingThread2 *pFVar4;
  FEventLoadNode2 *pFVar5;
  code *pcVar6;
  EEventLoadNodeExecutionResult EVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  FPackageStoreReadScope local_88;
  FIoBatch local_80;
  TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  LOCK();
  param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x4;
  UNLOCK();
  pFVar4 = param_2->AsyncLoadingThread;
  if (param_2->bHasStartedImportingPackages == false) {
    FIoDispatcher::NewBatch(pFVar4->IoDispatcher,&local_80);
    FPackageStoreReadScope::FPackageStoreReadScope(&local_88,pFVar4->PackageStore);
    ImportPackagesRecursive(param_2,param_1,&local_80,pFVar4->PackageStore);
    FPackageStoreReadScope::~FPackageStoreReadScope(&local_88);
    FIoBatch::Issue(&local_80);
    FIoBatch::~FIoBatch(&local_80);
  }
  if (param_2->AsyncLoadingThread->bHasRegisteredAllScriptObjects == false) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6238,"SetupScriptDependencies",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x185e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6238);
    }
    local_68.ArrayMax = 8;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<UClass_*>)0x0;
    local_68.ArrayNum = 0;
    FPackageImportStore::GetUnresolvedCDOs(&param_2->ImportStore,&param_2->HeaderData,&local_68);
    if (local_68.ArrayNum != 0) {
      FAsyncLoadingThread2::AddPendingCDOs(param_2->AsyncLoadingThread,param_2,&local_68);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UClass_*>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  iVar3 = (param_2->PackageNodes).ArrayNum;
  if (iVar3 < 3) {
    local_98 = 2;
    local_90 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      EVar7 = (*pcVar6)();
      return EVar7;
    }
  }
  pFVar5 = (param_2->PackageNodes).DataPtr;
  if (((int)pFVar5[2].BarrierCount < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BarrierCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x16f5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    EVar7 = (*pcVar6)();
    return EVar7;
  }
  LOCK();
  paVar1 = &pFVar5[2].BarrierCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    FEventLoadNode2::Fire(pFVar5 + 2,param_1);
  }
  return Complete;
}

// Event_ProcessExportBundle @ 14231fb60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EZenPackageVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_ProcessExportBundle
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  FAsyncPackageHeaderData *this;
  TMpscQueue<FAsyncPackage2_*,FMemory> *pTVar1;
  double dVar2;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar3;
  longlong lVar4;
  UObject *pUVar5;
  FAsyncLoadingThread2 *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  EEventLoadNodeExecutionResult EVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  FIoBuffer *pFVar16;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar17;
  FName FVar18;
  FEventLoadNode2 *this_00;
  FTlsAutoCleanup FVar19;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  uint uVar22;
  FExportObject *pFVar23;
  FExportCell *pFVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 local_res10 [8];
  int local_res18;
  undefined1 local_res20 [8];
  LARGE_INTEGER local_228;
  FTlsAutoCleanup *local_220;
  FTlsAutoCleanup local_218;
  FTlsAutoCleanup local_210;
  code *local_208;
  undefined1 *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FExportArchive local_158;
  
  bVar26 = -1 < CpuChannel->Enabled;
  local_res18 = param_3;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7913,"Event_ProcessExportBundle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1ee9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7913);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar20 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar20 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar12 = *(int *)((longlong)FVar20 +
                     (ulonglong)
                     (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                     (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar12 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar10 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          break;
        }
        iVar12 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  puVar14 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_200 = local_res10;
  local_208 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar15 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_208,puVar14);
  if ((*(int *)(pFVar15 + 10) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1eec,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  if (((byte)param_2->AsyncPackageLoadingState < 5) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package->AsyncPackageLoadingState >= EAsyncPackageLoadingState2::DependenciesReady"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1eed,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  LOCK();
  param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xa;
  UNLOCK();
  if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14231fd69:
    if (6 < (byte)LogStreaming._0_1_) {
      ::LexToString(&local_1a8,&(param_2->Desc).PackageIdToLoad);
      FVar18 = FPackagePath::GetPackageFName(&(param_2->Desc).PackagePathToLoad);
      ::FName::ToString((FName *)FVar18,&local_1b8);
      ::LexToString(&local_1c8,&(param_2->Desc).UPackageId);
      ::FName::ToString(&(param_2->Desc).UPackageName,&local_1d8);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      param_3 = local_res18;
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        param_3 = local_res18;
      }
    }
  }
  else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
          (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
           GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
    FVar20 = (ForElementType<FSetElementId>)0x154ba3ce8;
    if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar20 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
    }
    iVar12 = *(int *)((longlong)FVar20 +
                     (ulonglong)
                     (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                     (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar12 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10)
            == (param_2->Desc).UPackageId.Id) goto LAB_14231fd69;
        iVar12 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  puVar14 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_1f0 = local_res20;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  local_220 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1f8,puVar14);
  local_218 = local_220[8];
  local_210 = local_220[9];
  local_220[8] = (FTlsAutoCleanup)param_2;
  FVar19 = (FTlsAutoCleanup)&param_2->AsyncLoadingThread->_padding_;
  if (param_2->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    FVar19 = (FTlsAutoCleanup)0x0;
  }
  local_220[9] = FVar19;
  if (((param_2->LinkerLoadState).bIsSet != false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Package->LinkerLoadState.IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1ef9,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  if (((param_2->Data).TotalExportBundleCount <= param_3) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExportBundleIndex < Package->Data.TotalExportBundleCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1efc,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  this = &param_2->HeaderData;
  if (param_2->LoadStatus == Succeeded) {
    pFVar16 = FIoRequest::GetResultOrDie(&(param_2->SerializationState).IoRequest);
    FExportArchive::FExportArchive(&local_158,pFVar16);
    InitializeExportArchive(param_2,&local_158,false);
    dVar9 = __real_4170000000000000;
    uVar21 = param_2->ExportBundleEntryIndex;
    if ((int)uVar21 < (int)(param_2->HeaderData)._padding_) {
      do {
        uVar22 = 0;
        if ((int)uVar21 < (int)(param_2->HeaderData)._padding_) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          EVar11 = (*pcVar7)();
          return EVar11;
        }
        lVar4 = (param_2->HeaderData)._padding_;
        lVar25 = (longlong)(int)uVar21;
        if (param_1->bUseTimeLimit != false) {
          QueryPerformanceCounter(&local_228);
          dVar2 = param_1->TimeLimit;
          dVar8 = (double)local_228.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
          bVar10 = dVar8 - param_1->StartTime <= dVar2;
          if ((bVar10) || (GWarnIfTimeLimitExceeded == 0)) {
            param_1->LastTestTime = dVar8;
            if (bVar10) goto LAB_14232004b;
          }
          else {
            IsTimeLimitExceededPrint
                      (param_1->StartTime,dVar8,param_1->LastTestTime,dVar2,
                       L"Event_ProcessExportBundle",(UObject *)0x0);
            param_1->LastTestTime = dVar8;
          }
LAB_142320395:
          local_158._padding_ = (longlong)&___7FExportArchive__6B_;
          FArchive::~FArchive((FArchive *)&local_158);
          EVar11 = Timeout;
          goto LAB_1423206bd;
        }
LAB_14232004b:
        if (((GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) &&
            ((param_1->SyncLoadContextStack).ArrayNum == 0)) &&
           (bVar10 = IsInParallelLoadingThread(), !bVar10)) {
          if (5 < (byte)LogStreaming._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                        ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          }
          goto LAB_142320395;
        }
        uVar21 = (uint)(param_2->HeaderData)._padding_;
        uVar22 = *(uint *)(lVar4 + lVar25 * 8);
        if (uVar22 < uVar21) {
          uVar13 = 0;
          if ((int)uVar22 < (int)uVar21) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          uVar21 = *(uint *)(lVar4 + lVar25 * 8);
          uVar22 = 0;
          if ((int)uVar21 < (param_2->HeaderData).ExportsView.ArrayNum) {
            uVar22 = ~uVar21 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          iVar12 = *(int *)(lVar4 + 4 + lVar25 * 8);
          pFVar23 = (param_2->HeaderData).ExportsView.DataPtr + (int)uVar21;
          if (iVar12 == 0) {
            if (pFVar23->Object == (UObject *)0x0) {
              EventDrivenCreateExport(param_2,this,*(int *)(lVar4 + lVar25 * 8));
            }
          }
          else {
            if ((iVar12 != 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BundleEntry.CommandType == FExportBundleEntry::ExportCommandType_Serialize"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x1f30,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return EVar11;
            }
            pUVar5 = pFVar23->Object;
            if ((pUVar5 != (UObject *)0x0) && ((*(uint *)&pUVar5->field_0x8 >> 10 & 1) != 0)) {
              EventDrivenSerializeExport(param_2,this,*(int *)(lVar4 + lVar25 * 8),&local_158);
            }
          }
        }
        else {
          uVar22 = uVar22 - uVar21;
          uVar21 = 0;
          if ((int)uVar22 < (int)(param_2->HeaderData)._padding_) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          uVar21 = 0;
          if ((int)uVar22 < (param_2->HeaderData).CellExportsView.ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          iVar12 = *(int *)(lVar4 + 4 + lVar25 * 8);
          pFVar24 = (param_2->HeaderData).CellExportsView.DataPtr + (int)uVar22;
          if (iVar12 == 0) {
            if ((pFVar24->Cell != (VCell *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!CellExport.Cell",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,7999,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return EVar11;
            }
            EventDrivenCreateCellExport(param_2,this,*(int *)(lVar4 + lVar25 * 8),&local_158);
          }
          else {
            if ((iVar12 != 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BundleEntry.CommandType == FExportBundleEntry::ExportCommandType_Serialize"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x1f44,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return EVar11;
            }
            if ((pFVar24->Cell == (VCell *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CellExport.Cell",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x1f45,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return EVar11;
            }
            EventDrivenSerializeCellExport(param_2,this,*(int *)(lVar4 + lVar25 * 8),&local_158);
          }
        }
        param_2->ExportBundleEntryIndex = param_2->ExportBundleEntryIndex + 1;
        uVar21 = param_2->ExportBundleEntryIndex;
      } while ((int)uVar21 < (int)(param_2->HeaderData)._padding_);
    }
    local_158._padding_ = (longlong)&___7FExportArchive__6B_;
    FArchive::~FArchive((FArchive *)&local_158);
  }
  uVar22 = param_2->ProcessedExportBundlesCount + 1;
  param_2->ExportBundleEntryIndex = 0;
  param_2->ProcessedExportBundlesCount = uVar22;
  uVar21 = (param_2->Data).TotalExportBundleCount;
  if (uVar22 == uVar21) {
    param_2->ProcessedExportBundlesCount = 0;
    FZenPackageHeader::Reset((FZenPackageHeader *)this);
    FIoRequest::Release(&(param_2->SerializationState).IoRequest);
    if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xa) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::ProcessExportBundles"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x1f5b,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return EVar11;
    }
    if ((param_2->ExternalReadDependencies).ArrayNum != 0) {
      LOCK();
      param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xb;
      UNLOCK();
      pFVar6 = param_2->AsyncLoadingThread;
      aVar17 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
      *(undefined8 *)aVar17 = 0;
      *(FAsyncPackage2 **)((longlong)aVar17 + 8) = param_2;
      LOCK();
      pTVar1 = &pFVar6->ExternalReadQueue;
      aVar3 = pTVar1->Head;
      pTVar1->Head = aVar17;
      UNLOCK();
      *(atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *)aVar3 = aVar17;
      goto LAB_142320546;
    }
    if (((param_2->PackageNodes).ArrayNum < 7) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return EVar11;
    }
    this_00 = (param_2->PackageNodes).DataPtr + 6;
  }
  else {
    if ((uVar21 <= uVar22) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExportBundleIndex < uint32(Data.TotalExportBundleCount)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x25bb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return EVar11;
    }
    uVar22 = uVar22 * 3;
    uVar21 = 0;
    if ((int)uVar22 < (param_2->Data).ExportBundleNodes.ArrayNum) {
      uVar21 = ~uVar22 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return EVar11;
    }
    this_00 = (param_2->Data).ExportBundleNodes.DataPtr + (int)uVar22;
  }
  FEventLoadNode2::ReleaseBarrier(this_00,param_1);
LAB_142320546:
  if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_1423205c9:
    if (6 < (byte)LogStreaming._0_1_) {
      ::LexToString(&local_168,&(param_2->Desc).PackageIdToLoad);
      FVar18 = FPackagePath::GetPackageFName(&(param_2->Desc).PackagePathToLoad);
      ::FName::ToString((FName *)FVar18,&local_178);
      ::LexToString(&local_188,&(param_2->Desc).UPackageId);
      ::FName::ToString(&(param_2->Desc).UPackageName,&local_198);
      UE::Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)&PTR_u_ProcessExportBu_1508b2808,
                 (FLogCategoryBase *)&LogStreaming);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
          (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
           GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
    FVar20 = (ForElementType<FSetElementId>)0x154ba3ce8;
    if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar20 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
    }
    iVar12 = *(int *)((longlong)FVar20 +
                     (ulonglong)
                     (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                     (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar12 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10)
            == (param_2->Desc).UPackageId.Id) goto LAB_1423205c9;
        iVar12 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  EVar11 = Complete;
LAB_1423206bd:
  local_220[8] = local_218;
  local_220[9] = local_210;
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

// Event_ProcessPackageSummary @ 142320740

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EZenPackageVersion": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_ProcessPackageSummary
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  FNameMap *pFVar1;
  atomic<unsigned_int> *paVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  char cVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  BufCore *pBVar7;
  void *pvVar8;
  code *pcVar9;
  undefined3 uVar10;
  undefined4 uVar11;
  bool bVar12;
  EEventLoadNodeExecutionResult EVar13;
  int iVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  FLoadedPackageRef *pFVar17;
  FIoBuffer *pFVar18;
  FZenPackageHeader *pFVar19;
  FPackageId FVar20;
  FPackagePath *pFVar21;
  ForElementType<FSetElementId> FVar22;
  longlong *plVar23;
  FTlsAutoCleanup FVar24;
  longlong lVar25;
  FTlsAutoCleanup FVar26;
  FTlsAutoCleanup FVar27;
  bool bVar28;
  FProcessSummaryScope local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_208 [8];
  FCustomVersionContainer local_200;
  UPackage *local_1e8;
  ulonglong uStack_1e0;
  FName local_1d8;
  FTlsAutoCleanup local_1d0;
  FTlsAutoCleanup local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  TArrayView<FExportMapEntry_const_,int> *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FName local_188;
  FName local_180;
  TMemoryView<void_const_> local_178;
  TArrayView<FExportMapEntry_const_,int> local_168;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_158;
  FPackagePath local_148;
  FZenPackageHeader local_138;
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7714,"Event_ProcessPackageSummary",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1e22);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7714);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar22 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar22 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar14 = *(int *)((longlong)FVar22 +
                     (ulonglong)
                     (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                     (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar14 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar14 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar12) {
            pcVar9 = (code *)swi(3);
            EVar13 = (*pcVar9)();
            return EVar13;
          }
          break;
        }
        iVar14 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                         (longlong)iVar14 * 0x10);
      } while (iVar14 != -1);
    }
  }
  puVar15 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_1b8 = local_res20;
  local_1c0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1c0,puVar15);
  if ((*(int *)(pFVar16 + 10) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1e25,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    EVar13 = (*pcVar9)();
    return EVar13;
  }
  if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::WaitingForIo"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1e26,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    EVar13 = (*pcVar9)();
    return EVar13;
  }
  LOCK();
  param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x2;
  UNLOCK();
  puVar15 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_1a8 = local_208;
  local_1b0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1b0,puVar15);
  FVar26 = pFVar16[8];
  FVar27 = pFVar16[9];
  pFVar16[8] = (FTlsAutoCleanup)param_2;
  FVar24 = (FTlsAutoCleanup)&param_2->AsyncLoadingThread->_padding_;
  if (param_2->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    FVar24 = (FTlsAutoCleanup)0x0;
  }
  pFVar16[9] = FVar24;
  local_1d0 = FVar26;
  local_1c8 = FVar27;
  CallProgressCallbacks(param_2,Read);
  if ((param_2->LinkerLoadState).bIsSet == false) {
    if (param_2->LoadStatus == Succeeded) {
      FLoadTimeProfilerTracePrivate::FProcessSummaryScope::FProcessSummaryScope(local_res10,param_2)
      ;
      if ((param_2->ExportBundleEntryIndex != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package->ExportBundleEntryIndex == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x1e42,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        EVar13 = (*pcVar9)();
        return EVar13;
      }
      pFVar18 = FIoRequest::GetResultOrDie(&(param_2->SerializationState).IoRequest);
      pBVar7 = (pFVar18->CorePtr).Reference;
      local_1e8 = (UPackage *)pBVar7->DataPtr;
      uStack_1e0 = (ulonglong)CONCAT14(pBVar7->DataSizeHigh,pBVar7->DataSizeLow);
      local_178.Data = local_1e8;
      local_178.Size = uStack_1e0;
      pFVar19 = FZenPackageHeader::MakeView(&local_138,&local_178);
      plVar23 = &(param_2->HeaderData)._padding_;
      *(uint *)&(param_2->HeaderData)._padding_ = pFVar19->ExportCount;
      if (&pFVar19->VersioningInfo != (TOptional<FZenPackageVersioningInfo> *)plVar23) {
        cVar4 = (char)(param_2->HeaderData)._padding_;
        if ((pFVar19->VersioningInfo).bIsSet == false) {
          if (cVar4 != '\0') {
            pvVar8 = (void *)(param_2->HeaderData)._padding_;
            if (pvVar8 != (void *)0x0) {
              FMemory::Free(pvVar8);
            }
            *(undefined1 *)&(param_2->HeaderData)._padding_ = 0;
          }
        }
        else {
          if ((cVar4 != '\0') &&
             (pvVar8 = (void *)(param_2->HeaderData)._padding_, pvVar8 != (void *)0x0)) {
            FMemory::Free(pvVar8);
          }
          *(EZenPackageVersion *)plVar23 = (pFVar19->VersioningInfo).TypedValue.ZenVersion;
          *(FPackageFileVersion *)((longlong)&(param_2->HeaderData)._padding_ + 4) =
               (pFVar19->VersioningInfo).TypedValue.PackageVersion;
          iVar14 = (pFVar19->VersioningInfo).TypedValue.LicenseeVersion;
          (param_2->HeaderData)._padding_ = 0;
          *(int *)((longlong)&(param_2->HeaderData)._padding_ + 4) = iVar14;
          (param_2->HeaderData)._padding_ =
               (longlong)
               (pFVar19->VersioningInfo).TypedValue.CustomVersions.Versions.AllocatorInstance.Data;
          (pFVar19->VersioningInfo).TypedValue.CustomVersions.Versions.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(int *)&(param_2->HeaderData)._padding_ =
               (pFVar19->VersioningInfo).TypedValue.CustomVersions.Versions.ArrayNum;
          *(int *)((longlong)&(param_2->HeaderData)._padding_ + 4) =
               (pFVar19->VersioningInfo).TypedValue.CustomVersions.Versions.ArrayMax;
          (pFVar19->VersioningInfo).TypedValue.CustomVersions.Versions.ArrayNum = 0;
          (pFVar19->VersioningInfo).TypedValue.CustomVersions.Versions.ArrayMax = 0;
          *(undefined1 *)&(param_2->HeaderData)._padding_ = 1;
        }
      }
      pFVar1 = &pFVar19->NameMap;
      plVar23 = &(param_2->HeaderData)._padding_;
      if ((FNameMap *)plVar23 != pFVar1) {
        if ((void *)*plVar23 != (void *)0x0) {
          FMemory::Free((void *)*plVar23);
        }
        *plVar23 = (longlong)(pFVar1->NameEntries).AllocatorInstance.Data;
        (pFVar1->NameEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&(param_2->HeaderData)._padding_ = (pFVar19->NameMap).NameEntries.ArrayNum;
        *(int *)((longlong)&(param_2->HeaderData)._padding_ + 4) =
             (pFVar19->NameMap).NameEntries.ArrayMax;
        (pFVar19->NameMap).NameEntries.ArrayNum = 0;
        (pFVar19->NameMap).NameEntries.ArrayMax = 0;
      }
      pTVar3 = &pFVar19->ImportedPackageNames;
      *(EType *)&(param_2->HeaderData)._padding_ = (pFVar19->NameMap).NameMapType;
      plVar23 = &(param_2->HeaderData)._padding_;
      (param_2->HeaderData)._padding_ = (longlong)pFVar19->PackageName;
      (param_2->HeaderData)._padding_ = (longlong)pFVar19->PackageSummary;
      lVar25 = *(longlong *)&(pFVar19->ImportedPublicExportHashes).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->ImportedPublicExportHashes).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->ImportMap).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->ImportMap).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->ExportMap).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->ExportMap).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->CellImportMap).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->CellImportMap).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->CellExportMap).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->CellExportMap).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->BulkDataMap).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->BulkDataMap).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->ExportBundleEntries).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->ExportBundleEntries).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->DependencyBundleHeaders).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->DependencyBundleHeaders).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      lVar25 = *(longlong *)&(pFVar19->DependencyBundleEntries).ArrayNum;
      (param_2->HeaderData)._padding_ = (longlong)(pFVar19->DependencyBundleEntries).DataPtr;
      (param_2->HeaderData)._padding_ = lVar25;
      if ((TArray<FName,TSizedDefaultAllocator<32>_> *)plVar23 != pTVar3) {
        if ((void *)*plVar23 != (void *)0x0) {
          FMemory::Free((void *)*plVar23);
        }
        *plVar23 = (longlong)(pTVar3->AllocatorInstance).Data;
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)&(param_2->HeaderData)._padding_ = (pFVar19->ImportedPackageNames).ArrayNum;
        *(int *)((longlong)&(param_2->HeaderData)._padding_ + 4) =
             (pFVar19->ImportedPackageNames).ArrayMax;
        (pFVar19->ImportedPackageNames).ArrayNum = 0;
        (pFVar19->ImportedPackageNames).ArrayMax = 0;
      }
      if (local_138.ImportedPackageNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.ImportedPackageNames.AllocatorInstance.Data);
      }
      if (local_138.NameMap.NameEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.NameMap.NameEntries.AllocatorInstance.Data);
      }
      if ((local_138.VersioningInfo.bIsSet != false) &&
         (local_138.VersioningInfo.TypedValue.CustomVersions.Versions.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_138.VersioningInfo.TypedValue.CustomVersions.Versions.AllocatorInstance.
                      Data);
      }
      if ((param_2->Desc).bCanBeImported != false) {
        pFVar17 = FGlobalImportStore::FindPackageRefChecked
                            (&param_2->AsyncLoadingThread->GlobalImportStore,
                             (FPackageId)(param_2->Desc).UPackageId.Id,(param_2->Desc).UPackageName)
        ;
        local_168.DataPtr = (FExportMapEntry *)(param_2->HeaderData)._padding_;
        local_168._8_8_ = (param_2->HeaderData)._padding_;
        local_198 = &local_168;
        uStack_190 = 1;
        local_158._12_4_ = uStack_18c;
        local_158.ArrayNum = 1;
        local_158.DataPtr = local_198;
        FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
                  (&pFVar17->PublicExportMap,&local_158);
      }
      FVar20 = FPackageId::FromName(&local_188);
                    /* WARNING: Load size is inaccurate */
      if (((param_2->Desc).PackageIdToLoad.Id != *FVar20.Id) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package->Desc.PackageIdToLoad == FPackageId::FromName(Package->HeaderData.PackageName)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x1e5b,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        EVar13 = (*pcVar9)();
        return EVar13;
      }
      bVar12 = FPackagePath::IsEmpty(&(param_2->Desc).PackagePathToLoad);
      if (bVar12) {
        pFVar21 = FPackagePath::FromPackageNameUnchecked
                            (&local_148,(FName)(param_2->HeaderData)._padding_);
        (param_2->Desc).PackagePathToLoad.PackageName = pFVar21->PackageName;
        uVar10 = *(undefined3 *)&pFVar21->field_0x9;
        (param_2->Desc).PackagePathToLoad.HeaderExtension = pFVar21->HeaderExtension;
        *(undefined3 *)&(param_2->Desc).PackagePathToLoad.field_0x9 = uVar10;
      }
      if ((param_2->Desc).UPackageName == (FName)0x0) {
        uVar11 = *(undefined4 *)((longlong)&(param_2->HeaderData)._padding_ + 4);
        (param_2->Desc).UPackageName.ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&(param_2->HeaderData)._padding_;
        (param_2->Desc).UPackageName.Number = uVar11;
      }
      FVar20 = FPackageId::FromName(&local_180);
                    /* WARNING: Load size is inaccurate */
      if (((param_2->Desc).UPackageId.Id != *FVar20.Id) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Package->Desc.UPackageId == FPackageId::FromName(Package->Desc.UPackageName)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x1e65,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        EVar13 = (*pcVar9)();
        return EVar13;
      }
      CreateUPackage(param_2);
      uVar5 = *(uint *)((param_2->HeaderData)._padding_ + 0x10);
      aVar6 = param_2->LinkerRoot->PackageFlagsPrivate;
      if ((atomic<unsigned_int>)((uint)aVar6 | uVar5) != aVar6) {
        LOCK();
        paVar2 = &param_2->LinkerRoot->PackageFlagsPrivate;
        *paVar2 = (atomic<unsigned_int>)((uint)*paVar2 | uVar5);
        UNLOCK();
      }
      plVar23 = &(param_2->HeaderData)._padding_;
      if ((char)(param_2->HeaderData)._padding_ == '\0') {
        plVar23 = (longlong *)0x0;
      }
      if (plVar23 == (longlong *)0x0) {
        UPackage::SetLinkerPackageVersion(param_2->LinkerRoot,GPackageFileUEVersion);
        UPackage::SetLinkerLicenseeVersion(param_2->LinkerRoot,GPackageFileLicenseeUEVersion);
      }
      else {
        UPackage::SetLinkerPackageVersion
                  (param_2->LinkerRoot,*(FPackageFileVersion *)((longlong)plVar23 + 4));
        UPackage::SetLinkerLicenseeVersion(param_2->LinkerRoot,*(int *)((longlong)plVar23 + 0xc));
        local_1e8 = param_2->LinkerRoot;
        local_200.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_200.Versions.ArrayNum = (int)plVar23[3];
        lVar25 = (longlong)local_200.Versions.ArrayNum;
        pvVar8 = (void *)plVar23[2];
        if (local_200.Versions.ArrayNum == 0) {
          local_200.Versions.ArrayMax = 0;
          UPackage::SetLinkerCustomVersions(local_1e8,&local_200);
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_200.Versions.ArrayNum,0,(ForAnyElementType *)&local_200,
                     local_200.Versions.ArrayNum,&local_200.Versions.ArrayMax);
          memcpy(local_200.Versions.AllocatorInstance.Data,pvVar8,lVar25 * 0x28);
          UPackage::SetLinkerCustomVersions(local_1e8,&local_200);
        }
      }
      FPackagePath::GetPackageFName(&(param_2->Desc).PackagePathToLoad);
      if ((param_2->Desc).UPackageName != local_1d8) {
        FLinkerInstancingContext::BuildPackageMapping
                  (&(param_2->Desc).InstancingContext,local_1d8,(param_2->Desc).UPackageName);
      }
      FLoadTimeProfilerTracePrivate::OutputPackageSummary
                (param_2,(FName *)&(param_2->HeaderData)._padding_,
                 *(uint *)((param_2->HeaderData)._padding_ + 4),
                 (uint)(param_2->HeaderData)._padding_,(uint)(param_2->HeaderData)._padding_,
                 (param_2->Desc).Priority);
      FLoadTimeProfilerTracePrivate::FProcessSummaryScope::~FProcessSummaryScope(local_res10);
      FVar26 = local_1d0;
      FVar27 = local_1c8;
    }
    else if ((param_2->Desc).bCanBeImported != false) {
      pFVar17 = FGlobalImportStore::FindPackageRefChecked
                          (&param_2->AsyncLoadingThread->GlobalImportStore,
                           (FPackageId)(param_2->Desc).UPackageId.Id,(param_2->Desc).UPackageName);
      pFVar17->bHasFailed = true;
    }
    FAsyncLoadingThread2::FinishInitializeAsyncPackage(param_2->AsyncLoadingThread,param_1,param_2);
    LOCK();
    param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x3;
    UNLOCK();
    if (((param_2->PackageNodes).ArrayNum < 2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      EVar13 = (*pcVar9)();
      return EVar13;
    }
    FEventLoadNode2::ReleaseBarrier((param_2->PackageNodes).DataPtr + 1,param_1);
    EVar13 = Complete;
  }
  else {
    EVar13 = ProcessLinkerLoadPackageSummary(param_2,param_1);
  }
  pFVar16[8] = FVar26;
  pFVar16[9] = FVar27;
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar13;
}

// Event_ResolveLinkerLoadImports @ 142320f30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __cdecl
FAsyncPackage2::Event_ResolveLinkerLoadImports
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTlsAutoCleanup FVar3;
  FTlsAutoCleanup FVar4;
  FEventLoadNode2 *pFVar5;
  code *pcVar6;
  bool bVar7;
  EEventLoadNodeExecutionResult EVar8;
  int iVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  ForElementType<FSetElementId> FVar12;
  FTlsAutoCleanup FVar13;
  bool bVar14;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  undefined1 *local_30;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7648,"Event_ResolveLinkerLoadImports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1de0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7648);
  }
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar12 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar12 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    iVar9 = *(int *)((longlong)FVar12 +
                    (ulonglong)
                    (GAsyncLoading2_DebugPackageIds.HashSize - 1U &
                    (uint)(param_2->Desc).UPackageId.Id) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar9 * 0x10) ==
            (param_2->Desc).UPackageId.Id) {
          bVar7 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
          break;
        }
        iVar9 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar9 * 0x10)
        ;
      } while (iVar9 != -1);
    }
  }
  puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar10);
  if ((*(int *)(pFVar11 + 10) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FUObjectThreadContext::Get().AsyncVisibilityFilter == EInternalObjectFlags::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1de3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  if ((param_2->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0x8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState2::ResolveLinkerLoadImports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1de4,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    EVar8 = (*pcVar6)();
    return EVar8;
  }
  puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res20;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar10);
  FVar3 = pFVar11[8];
  FVar4 = pFVar11[9];
  pFVar11[8] = (FTlsAutoCleanup)param_2;
  FVar13 = (FTlsAutoCleanup)&param_2->AsyncLoadingThread->_padding_;
  if (param_2->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    FVar13 = (FTlsAutoCleanup)0x0;
  }
  pFVar11[9] = FVar13;
  if (((param_2->LinkerLoadState).bIsSet == false) ||
     (bVar7 = ResolveLinkerLoadImports(param_2,param_1), bVar7)) {
    LOCK();
    param_2->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x9;
    UNLOCK();
    if (((param_2->PackageNodes).ArrayNum < 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    pFVar5 = (param_2->PackageNodes).DataPtr;
    if (((int)pFVar5[5].BarrierCount < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BarrierCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x16f5,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    LOCK();
    paVar1 = &pFVar5[5].BarrierCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      FEventLoadNode2::Fire(pFVar5 + 5,param_1);
    }
    EVar8 = Complete;
  }
  else {
    EVar8 = Timeout;
  }
  pFVar11[8] = FVar3;
  pFVar11[9] = FVar4;
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar8;
}

// ExecuteDeferredPostLoadLinkerLoadPackageExports @ 142321460

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EEventLoadNodeExecutionResult __thiscall
FAsyncPackage2::ExecuteDeferredPostLoadLinkerLoadPackageExports
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  int *piVar1;
  FMRSWRecursiveAccessDetector *this_00;
  double dVar2;
  FAsyncLoadingThread2 *pFVar3;
  FTlsAutoCleanup FVar4;
  FLinkerLoad *pFVar5;
  UObjectBaseUtility *pUVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  FExportObject *pFVar11;
  bool bVar12;
  bool bVar13;
  EEventLoadNodeExecutionResult EVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  FName this_01;
  ForElementType<FSetElementId> FVar20;
  longlong lVar21;
  UObject *this_02;
  uint uVar22;
  FPostLoadScope local_res20 [8];
  undefined1 local_128 [4];
  uint local_124;
  int local_120;
  int local_11c;
  longlong local_118;
  FExportObject *local_110;
  FString local_108;
  FString local_f8;
  FScriptContainerElement *local_e8;
  longlong local_e0;
  longlong local_d8;
  LARGE_INTEGER local_d0;
  FAsyncLoadingThread2 *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7511,"PostLoadDeferredObjectsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1d57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7511);
  }
  FLoadTimeProfilerTracePrivate::FPostLoadScope::FPostLoadScope(local_res20);
  pFVar3 = this->AsyncLoadingThread;
  local_c8 = pFVar3;
  bVar12 = IsInGameThread();
  if (bVar12) {
    piVar1 = &pFVar3->AsyncLoadingTickCounter;
    *piVar1 = *piVar1 + 1;
  }
  puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_b8 = local_128;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c0,puVar18);
  this_00 = &this->ConstructedObjectsAccessDetector;
  FVar4 = pFVar19[0x2f];
  local_11c = (param_1->SyncLoadContextStack).ArrayNum;
  FMRSWRecursiveAccessDetector::AcquireReadAccess(this_00);
  dVar10 = __real_4170000000000000;
  iVar17 = (this->Data).Exports.ArrayNum;
  local_120 = iVar17;
  do {
    if (((this->LinkerLoadState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar7 = (code *)swi(3);
      EVar14 = (*pcVar7)();
      return EVar14;
    }
    if ((this->ConstructedObjects).ArrayNum + iVar17 <=
        (this->LinkerLoadState).TypedValue.PostLoadExportIndex) {
      LOCK();
      this->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0xf;
      UNLOCK();
      ConditionalFinishLoading(this,param_1);
      EVar14 = Complete;
      goto LAB_142321bd8;
    }
    if (((this->LinkerLoadState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar7 = (code *)swi(3);
      EVar14 = (*pcVar7)();
      return EVar14;
    }
    uVar22 = (this->LinkerLoadState).TypedValue.PostLoadExportIndex;
    (this->LinkerLoadState).TypedValue.PostLoadExportIndex = uVar22 + 1;
    local_124 = uVar22;
    if ((int)uVar22 < iVar17) {
      uVar16 = 0;
      if ((int)uVar22 < (this->Data).Exports.ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        EVar14 = (*pcVar7)();
        return EVar14;
      }
      local_118 = (longlong)(int)uVar22 << 5;
      local_110 = (this->Data).Exports.DataPtr;
      if (((this->LinkerLoadState).bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        EVar14 = (*pcVar7)();
        return EVar14;
      }
      pFVar5 = (this->LinkerLoadState).TypedValue.Linker;
      uVar16 = 0;
      if ((int)uVar22 < (int)pFVar5->_padding_) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        EVar14 = (*pcVar7)();
        return EVar14;
      }
      pFVar11 = local_110;
      lVar21 = local_118;
      local_d8 = pFVar5->_padding_;
      local_e0 = (longlong)(int)uVar22 * 0x68;
      if ((-1 < *(char *)(local_e0 + 0x4c + local_d8)) &&
         (pUVar6 = *(UObjectBaseUtility **)(local_e0 + 0x40 + local_d8),
         *(UObjectBaseUtility **)((longlong)&local_110->Object + local_118) != pUVar6)) {
        if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_1423217bc:
          if (5 < (byte)LogStreaming._0_1_) {
            if (pUVar6 == (UObjectBaseUtility *)0x0) {
              ::FString::FString(&local_f8,L"None");
            }
            else {
              UObjectBaseUtility::GetPathName(pUVar6,&local_f8,(UObject *)0x0);
            }
            pUVar6 = *(UObjectBaseUtility **)((longlong)&pFVar11->Object + lVar21);
            local_e8 = (FScriptContainerElement *)L"";
            if (local_f8.Data.ArrayNum != 0) {
              local_e8 = local_f8.Data.AllocatorInstance.Data;
            }
            if (pUVar6 == (UObjectBaseUtility *)0x0) {
              ::FString::FString(&local_108,L"None");
            }
            else {
              UObjectBaseUtility::GetPathName(pUVar6,&local_108,(UObject *)0x0);
            }
            ::LexToString(local_78,&(this->Desc).PackageIdToLoad);
            this_01 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
            ::FName::ToString((FName *)this_01,&local_88);
            ::LexToString(&local_98,&(this->Desc).UPackageId);
            ::FName::ToString(&(this->Desc).UPackageName,&local_a8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
        }
        else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                 GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
          FVar20 = (ForElementType<FSetElementId>)0x154ba3ce8;
          if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
              (ForElementType<FSetElementId>)0x0) {
            FVar20 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
          }
          iVar17 = *(int *)((longlong)FVar20 +
                           (ulonglong)
                           (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                           (uint)(this->Desc).UPackageId.Id) * 4);
          if (iVar17 != -1) {
            do {
              if (*(ulong64 *)
                   (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar17 * 0x10) ==
                  (this->Desc).UPackageId.Id) goto LAB_1423217bc;
              iVar17 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                               (longlong)iVar17 * 0x10);
            } while (iVar17 != -1);
          }
        }
        *(undefined8 *)((longlong)&local_110->Object + local_118) =
             *(undefined8 *)(local_e0 + 0x40 + local_d8);
        (&local_110->bWasFoundInMemory)[local_118] = *(longlong *)(local_e0 + 0x40 + local_d8) != 0;
      }
      lVar21 = (longlong)(int)local_124;
      uVar22 = 0;
      if ((int)local_124 < (this->Data).Exports.ArrayNum) {
        uVar22 = ~local_124 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        EVar14 = (*pcVar7)();
        return EVar14;
      }
      this_02 = (this->Data).Exports.DataPtr[lVar21].Object;
    }
    else {
      uVar22 = uVar22 - iVar17;
      uVar16 = 0;
      if ((int)uVar22 < (this->ConstructedObjects).ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        EVar14 = (*pcVar7)();
        return EVar14;
      }
      this_02 = *(UObject **)
                 ((this->ConstructedObjects).AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
    }
    if ((this_02 != (UObject *)0x0) && ((*(uint *)&this_02->field_0x8 >> 0xc & 1) != 0)) {
      if ((local_11c == 0) &&
         (cVar15 = (**(code **)(*(longlong *)this_02 + 0x90))(this_02), cVar15 == '\0')) {
        if (((this->LinkerLoadState).bIsSet == false) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          EVar14 = (*pcVar7)();
          return EVar14;
        }
        piVar1 = &(this->LinkerLoadState).TypedValue.PostLoadExportIndex;
        *piVar1 = *piVar1 + -1;
        EVar14 = Timeout;
        goto LAB_142321bd8;
      }
      UObject::ConditionalPostLoad(this_02);
    }
    if (param_1->bUseTimeLimit != false) {
      QueryPerformanceCounter(&local_d0);
      dVar2 = param_1->TimeLimit;
      dVar8 = (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10;
      bVar13 = dVar2 < dVar8 - param_1->StartTime;
      if ((bVar13) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint
                  (param_1->StartTime,dVar8,param_1->LastTestTime,dVar2,
                   L"ExecuteDeferredPostLoadLinkerLoadPackageExports",(UObject *)0x0);
        EVar14 = Timeout;
        param_1->LastTestTime = dVar8;
        goto LAB_142321bd8;
      }
      param_1->LastTestTime = dVar8;
      if (bVar13) goto LAB_142321b47;
    }
    iVar17 = local_120;
  } while (((GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) ||
           ((param_1->SyncLoadContextStack).ArrayNum != 0)) ||
          (bVar13 = IsInParallelLoadingThread(), bVar13));
  if (5 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
LAB_142321b47:
  EVar14 = Timeout;
LAB_142321bd8:
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(this_00);
  LOCK();
  this_00->State = (atomic<unsigned___int64>)((longlong)this_00->State + -1);
  UNLOCK();
  *(undefined4 *)((longlong)FVar4 + 0x18) = 0;
  if (*(int *)((longlong)FVar4 + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)((longlong)FVar4 + 0x10),0,(int *)((longlong)FVar4 + 0x1c)
              );
  }
  if (bVar12) {
    piVar1 = &local_c8->AsyncLoadingTickCounter;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncLoadingTickCounter >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x1128,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      EVar14 = (*pcVar7)();
      return EVar14;
    }
  }
  FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(local_res20);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar14;
}

// ExecutePostLoadLinkerLoadPackageExports @ 142321db0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EEventLoadNodeExecutionResult __thiscall
FAsyncPackage2::ExecutePostLoadLinkerLoadPackageExports
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  int *piVar1;
  double dVar2;
  undefined1 uVar3;
  uint uVar4;
  FAsyncLoadingThread2 *pFVar5;
  FTlsAutoCleanup FVar6;
  FTlsAutoCleanup this_00;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  EEventLoadNodeExecutionResult EVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FPostLoadScope local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  LARGE_INTEGER local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  
  if (this->LoadStatus == Succeeded) {
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId7448,"PostLoadObjectsTime",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x1d18);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7448);
    }
    FLoadTimeProfilerTracePrivate::FPostLoadScope::FPostLoadScope(local_res18);
    pFVar5 = this->AsyncLoadingThread;
    bVar10 = IsInGameThread();
    if (bVar10) {
      pFVar5->AsyncLoadingTickCounter = pFVar5->AsyncLoadingTickCounter + 1;
    }
    BeginAsyncLoad(this);
    puVar16 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_70 = local_res20;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar17 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar16);
    FVar6 = pFVar17[0x2f];
    puVar16 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_60 = local_88;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar17 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar16);
    dVar9 = __real_4170000000000000;
    uVar3 = *(undefined1 *)(pFVar17 + 4);
    *(undefined1 *)(pFVar17 + 4) = 1;
    do {
      do {
        do {
          if ((this->LinkerLoadState).bIsSet == false) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              EVar12 = (*pcVar7)();
              return EVar12;
            }
          }
          if ((this->Data).Exports.ArrayNum <=
              (this->LinkerLoadState).TypedValue.PostLoadExportIndex) {
            *(undefined1 *)(pFVar17 + 4) = uVar3;
            *(undefined4 *)((longlong)FVar6 + 0x18) = 0;
            if (*(int *)((longlong)FVar6 + 0x1c) < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,(ForAnyElementType *)((longlong)FVar6 + 0x10),0,
                         (int *)((longlong)FVar6 + 0x1c));
            }
            EndAsyncLoad(this);
            if (bVar10) {
              piVar1 = &pFVar5->AsyncLoadingTickCounter;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 < 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AsyncLoadingTickCounter >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x1128,L"");
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  EVar12 = (*pcVar7)();
                  return EVar12;
                }
              }
            }
            FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(local_res18);
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            goto LAB_1423221f4;
          }
          if ((this->LinkerLoadState).bIsSet == false) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              EVar12 = (*pcVar7)();
              return EVar12;
            }
          }
          uVar4 = (this->LinkerLoadState).TypedValue.PostLoadExportIndex;
          (this->LinkerLoadState).TypedValue.PostLoadExportIndex = uVar4 + 1;
          uVar15 = 0;
          if ((int)uVar4 < (this->Data).Exports.ArrayNum) {
            uVar15 = ~uVar4 >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              EVar12 = (*pcVar7)();
              return EVar12;
            }
          }
          this_00 = (FTlsAutoCleanup)(this->Data).Exports.DataPtr[(int)uVar4].Object;
        } while (this_00 == (FTlsAutoCleanup)0x0);
        if ((*(uint *)((longlong)this_00 + 8) >> 0xc & 1) != 0) {
          bVar11 = CanPostLoadOnAsyncLoadingThread((UObject *)this_00);
          if (bVar11) {
            cVar13 = (**(code **)(*(longlong *)this_00 + 0x90))(this_00);
            if (cVar13 != '\0') {
              pFVar17[7] = this_00;
              UObject::ConditionalPostLoad((UObject *)this_00);
              pFVar17[7] = (FTlsAutoCleanup)0x0;
            }
          }
        }
        if (param_1->bUseTimeLimit != false) {
          QueryPerformanceCounter(&local_80);
          dVar2 = param_1->TimeLimit;
          dVar8 = (double)local_80.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
          bVar11 = dVar2 < dVar8 - param_1->StartTime;
          if ((bVar11) && (GWarnIfTimeLimitExceeded != 0)) {
            IsTimeLimitExceededPrint
                      (param_1->StartTime,dVar8,param_1->LastTestTime,dVar2,
                       L"ExecutePostLoadLinkerLoadPackageExports",(UObject *)0x0);
            param_1->LastTestTime = dVar8;
            goto LAB_1423220a2;
          }
          param_1->LastTestTime = dVar8;
          if (bVar11) goto LAB_1423220a2;
        }
      } while ((GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) ||
              ((param_1->SyncLoadContextStack).ArrayNum != 0));
      bVar11 = IsInParallelLoadingThread();
    } while (bVar11);
    if (5 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
LAB_1423220a2:
    *(undefined1 *)(pFVar17 + 4) = uVar3;
    *(undefined4 *)((longlong)FVar6 + 0x18) = 0;
    if (*(int *)((longlong)FVar6 + 0x1c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)((longlong)FVar6 + 0x10),0,
                 (int *)((longlong)FVar6 + 0x1c));
    }
    EndAsyncLoad(this);
    if (bVar10) {
      piVar1 = &pFVar5->AsyncLoadingTickCounter;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncLoadingTickCounter >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x1128,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          EVar12 = (*pcVar7)();
          return EVar12;
        }
      }
    }
    FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(local_res18);
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    EVar12 = Timeout;
  }
  else {
LAB_1423221f4:
    if ((this->LinkerLoadState).bIsSet == false) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         );
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        EVar12 = (*pcVar7)();
        return EVar12;
      }
    }
    (this->LinkerLoadState).TypedValue.PostLoadExportIndex = 0;
    if (this->DeferredPostLoadGroup == (FAsyncLoadingPostLoadGroup *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("DeferredPostLoadGroup",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1d4d,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        EVar12 = (*pcVar7)();
        return EVar12;
      }
    }
    if (this->DeferredPostLoadGroup->PackagesWithExportsToPostLoadCount < 1) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("DeferredPostLoadGroup->PackagesWithExportsToPostLoadCount > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x1d4e,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        EVar12 = (*pcVar7)();
        return EVar12;
      }
    }
    piVar1 = &this->DeferredPostLoadGroup->PackagesWithExportsToPostLoadCount;
    *piVar1 = *piVar1 + -1;
    FAsyncLoadingThread2::ConditionalBeginDeferredPostLoad
              (this->AsyncLoadingThread,param_1,this->DeferredPostLoadGroup);
    EVar12 = Complete;
  }
  return EVar12;
}

// FinishUPackage @ 142323ca0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::FinishUPackage(FAsyncPackage2 *this)

{
  undefined1 *puVar1;
  UPackage *pUVar2;
  LARGE_INTEGER local_res8;
  
  if ((this->LinkerRoot != (UPackage *)0x0) && (this->LoadStatus == Succeeded)) {
    this->LinkerRoot->bHasBeenFullyLoaded = '\x01';
    UObjectBase::AtomicallySetFlags((UObjectBase *)this->LinkerRoot,RF_WasLoaded);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this->LinkerRoot,RF_WillBeLoaded);
    pUVar2 = this->LinkerRoot;
    QueryPerformanceCounter(&local_res8);
    pUVar2->LoadTime =
         (float)(((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000) - this->LoadStartTime);
  }
  return;
}

// GetCurrentlyExecutingPackage @ 142326850

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 * __cdecl
FAsyncPackage2::GetCurrentlyExecutingPackage
          (FAsyncLoadingThreadState2 *param_1,FAsyncPackage2 *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAsyncPackage2 *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (param_1->CurrentlyExecutingEventNodeStack).ArrayNum - 1;
  if ((int)uVar5 < 0) {
    return (FAsyncPackage2 *)0x0;
  }
  lVar6 = (longlong)(int)uVar5 * 8;
  while( true ) {
    uVar3 = 0;
    if ((int)uVar5 < (param_1->CurrentlyExecutingEventNodeStack).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    pFVar4 = *(FAsyncPackage2 **)
              (*(longlong *)
                ((param_1->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data + lVar6) + 8);
    if ((pFVar4 != (FAsyncPackage2 *)0x0) && (pFVar4 != param_2)) {
      return pFVar4;
    }
    lVar6 = lVar6 + -8;
    uVar5 = uVar5 - 1;
    if ((int)uVar5 < 0) {
      return (FAsyncPackage2 *)0x0;
    }
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FAsyncPackage2 *)(*pcVar1)();
  return pFVar4;
}

// GetExportBundleNode @ 142326920

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode2": Some values do not have unique names */

FEventLoadNode2 * __thiscall
FAsyncPackage2::GetExportBundleNode(FAsyncPackage2 *this,EEventLoadNode2 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FEventLoadNode2 *pFVar3;
  
  if ((uint)(this->Data).TotalExportBundleCount <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExportBundleIndex < uint32(Data.TotalExportBundleCount)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x25bb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEventLoadNode2 *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TArrayView<FEventLoadNode2,int>::operator[]
                     (&(this->Data).ExportBundleNodes,param_2 * 3 + (uint)param_1);
  return pFVar3;
}

// GetLoadStartTime @ 142326c40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

double __thiscall FAsyncPackage2::GetLoadStartTime(FAsyncPackage2 *this)

{
  return this->LoadStartTime;
}

// GetNameFromPackageObjectIndex @ 142326df0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FString * __thiscall
FAsyncPackage2::GetNameFromPackageObjectIndex
          (FAsyncPackage2 *this,FString *__return_storage_ptr__,FPackageObjectIndex param_1)

{
  FLinkerLoad *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  FExportMapEntry *pFVar7;
  uint uVar8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1.TypeAndId >> 0x3e == 0) {
    uVar8 = (uint)param_1.TypeAndId;
    if ((this->LinkerLoadState).bIsSet == false) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      pFVar7 = TArrayView<FExportMapEntry_const_,int>::operator[]
                         ((TArrayView<FExportMapEntry_const_,int> *)&(this->HeaderData)._padding_,
                          uVar8);
      FNameMap::TryGetName
                ((FNameMap *)&(this->HeaderData)._padding_,&pFVar7->ObjectName,&local_res10);
      pFVar6 = ::FName::ToString(&local_res10,&local_28);
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      if (__return_storage_ptr__ != pFVar6) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar1 = (this->LinkerLoadState).TypedValue.Linker;
      uVar5 = 0;
      if ((int)uVar8 < (int)pFVar1->_padding_) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar6 = ::FName::ToString((FName *)((longlong)(int)uVar8 * 0x68 + pFVar1->_padding_),
                                 &local_38);
      local_18.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      if (__return_storage_ptr__ != pFVar6) {
        pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        local_18.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    if (1 < (param_1.TypeAndId >> 0x3e) - 1) {
      return __return_storage_ptr__;
    }
    pFVar6 = FPackageImportStore::GetImportName
                       (&this->ImportStore,&local_18,&this->HeaderData,param_1);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPackageNode @ 1423270a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode2": Some values do not have unique names */

FEventLoadNode2 * __thiscall
FAsyncPackage2::GetPackageNode(FAsyncPackage2 *this,EEventLoadNode2 param_1)

{
  code *pcVar1;
  bool bVar2;
  FEventLoadNode2 *pFVar3;
  
  if (Package_ExportsSerialized < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Phase < EEventLoadNode2::Package_NumPhases",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x25b5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEventLoadNode2 *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TArrayView<FEventLoadNode2,int>::operator[](&this->PackageNodes,(uint)param_1);
  return pFVar3;
}

// GetPublicCellExportIndex @ 142327420

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FAsyncPackage2::GetPublicCellExportIndex
          (FAsyncPackage2 *this,ulong64 param_1,FAsyncPackageHeaderData **param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (int)(this->HeaderData)._padding_;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(ulong64 *)(lVar6 + 0x20 + (this->HeaderData)._padding_) == param_1) {
        *param_2 = &this->HeaderData;
        return uVar5;
      }
      iVar4 = (int)(this->HeaderData)._padding_;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// GetPublicExportIndex @ 1423274f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FAsyncPackage2::GetPublicExportIndex
          (FAsyncPackage2 *this,ulong64 param_1,FAsyncPackageHeaderData **param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (int)(this->HeaderData)._padding_;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(ulong64 *)(lVar6 + 0x38 + (this->HeaderData)._padding_) == param_1) {
        *param_2 = &this->HeaderData;
        return uVar5;
      }
      iVar4 = (int)(this->HeaderData)._padding_;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// GetSerializeContext @ 1423275c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FUObjectSerializeContext * __thiscall FAsyncPackage2::GetSerializeContext(FAsyncPackage2 *this)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  return (FUObjectSerializeContext *)pFVar2[0x2f];
}

// ImportPackagesRecursive @ 142327ea0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ImportPackagesRecursive
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,FIoBatch *param_2,
          FPackageStore *param_3)

{
  FAsyncPackage2 **ppFVar1;
  int iVar2;
  FName this_00;
  ForElementType<FSetElementId> FVar3;
  FAsyncPackage2 **ppFVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((this->bHasStartedImportingPackages == false) &&
     (iVar2 = (this->Data).ImportedAsyncPackages.ArrayNum, this->bHasStartedImportingPackages = true
     , iVar2 != 0)) {
    ImportPackagesRecursiveInner(this,param_1,param_2,param_3,&this->HeaderData);
    if (this->SyncLoadContextId != (atomic<unsigned___int64>)0x0) {
      ppFVar4 = (this->Data).ImportedAsyncPackages.DataPtr;
      ppFVar1 = ppFVar4 + (this->Data).ImportedAsyncPackages.ArrayNum;
      for (; ppFVar4 != ppFVar1; ppFVar4 = ppFVar4 + 1) {
        if (*ppFVar4 != (FAsyncPackage2 *)0x0) {
          FAsyncLoadingThread2::IncludePackageInSyncLoadContextRecursive
                    (this->AsyncLoadingThread,param_1,(ulong64)this->SyncLoadContextId,*ppFVar4);
        }
      }
    }
    if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_142327fb9:
      if (6 < (byte)LogStreaming._0_1_) {
        ::LexToString(&local_28,&(this->Desc).PackageIdToLoad);
        this_00 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
        ::FName::ToString((FName *)this_00,&local_38);
        ::LexToString(&local_48,&(this->Desc).UPackageId);
        ::FName::ToString(&(this->Desc).UPackageName,&local_58);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
            (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
             GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
      FVar3 = (ForElementType<FSetElementId>)0x154ba3ce8;
      if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
      {
        FVar3 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
      }
      iVar2 = *(int *)((longlong)FVar3 +
                      (ulonglong)
                      (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                      (uint)(this->Desc).UPackageId.Id) * 4);
      if (iVar2 != -1) {
        do {
          if (*(ulong64 *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar2 * 0x10)
              == (this->Desc).UPackageId.Id) goto LAB_142327fb9;
          iVar2 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                          (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
  }
  return;
}

// ImportPackagesRecursiveInner @ 1423280e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ImportPackagesRecursiveInner
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,FIoBatch *param_2,
          FPackageStore *param_3,FAsyncPackageHeaderData *param_4)

{
  FPlatformRWLock *SRWLock;
  atomic<int> *paVar1;
  int *piVar2;
  FGlobalImportStore *this_00;
  atomic<int> aVar3;
  FAdditionalInfo *pFVar4;
  FEventLoadNode2 *pFVar5;
  FAsyncLoadingThread2 *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FPackageReferencer FVar10;
  FAsyncPackage2 *pFVar11;
  FName FVar12;
  FPackageId FVar13;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  TVar14;
  longlong lVar15;
  bool bVar16;
  EPackageExtension EVar17;
  ushort uVar18;
  uint uVar19;
  EPackageStoreEntryStatus EVar20;
  int iVar21;
  FPackageId FVar22;
  FLoadedPackageRef *pFVar23;
  UPackage *pUVar24;
  FTSTicker *pFVar25;
  FAsyncPackage2 **ppFVar26;
  FName FVar27;
  undefined ***pppuVar28;
  atomic<__int64> aVar29;
  ForElementType<FSetElementId> FVar30;
  uint uVar31;
  TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_> *pTVar32;
  int iVar33;
  EPackageLoader EVar34;
  FPackageReferencer FVar35;
  undefined1 auStackY_4e8 [32];
  bool local_497;
  EPackageExtension local_496;
  FPackageReferencer local_495 [5];
  FAsyncPackage2 *local_490;
  EPackageLoader local_488;
  FAsyncPackage2 *local_480;
  FName local_478;
  EPackageStoreEntryStatus local_470;
  uint local_46c;
  FPackageId local_468;
  FPackagePath local_460;
  int local_450;
  FName local_448;
  FAsyncLoadingThreadState2 *local_440;
  FAsyncLoadingThread2 *local_438;
  FPackageId local_430;
  undefined8 local_428;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  local_420;
  FIoBatch *local_418;
  longlong local_410;
  FAsyncPackageHeaderData *local_408;
  FPackageStoreEntry local_400;
  FName local_3d8;
  FPackageId local_3d0 [3];
  FPackageId local_3b8;
  FPackageId local_3b0;
  FPackageId local_3a8;
  longlong local_3a0;
  FPackageStore *local_398;
  FString local_390;
  undefined8 local_378;
  undefined8 uStack_370;
  FString local_368;
  FString local_358;
  FAsyncPackageDesc2 local_348;
  TStringView<wchar_t> local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TWeakPtr<FTSTicker::FElement,1> local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  TWeakPtr<FTSTicker::FElement,1> local_1f8;
  TSharedPtr<FLoadPackageAsyncProgressDelegate,1> local_1e8;
  FString local_1d8;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  FName local_80;
  undefined8 local_78;
  undefined ***local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  iVar21 = (param_4->ImportedPackageIds).ArrayNum;
  local_408 = param_4;
  if (iVar21 != 0) {
    iVar33 = (int)param_4->_padding_;
    local_480 = this;
    local_450 = iVar33;
    local_440 = param_1;
    local_418 = param_2;
    local_398 = param_3;
    if (((iVar33 != 0) && (iVar33 != iVar21)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ImportedPackageNames.Num() == 0 || ImportedPackageNames.Num() == ImportedPackageCount"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x198a,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar10 = local_495[0];
    local_46c = 0;
    if (0 < iVar21) {
      local_410 = 0;
      local_3a0 = (longlong)iVar21;
      do {
        lVar15 = local_410;
        uVar31 = ~local_46c;
        uVar19 = 0;
        if ((int)local_46c < (param_4->ImportedPackageIds).ArrayNum) {
          uVar19 = uVar31 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_468.Id = (param_4->ImportedPackageIds).DataPtr[lVar15].Id;
        local_400.PackageExtension = Unspecified;
        local_400.LoaderType = Zen;
        local_400.ImportedPackageIds.DataPtr = (FPackageId *)0x0;
        local_400.ImportedPackageIds.ArrayNum = 0;
        local_400.ShaderMapHashes.DataPtr = (FSHAHash *)0x0;
        local_400.ShaderMapHashes.ArrayNum = 0;
        if (iVar33 == 0) {
          FVar27.ComparisonIndex.Value = 0;
          FVar27.Number = 0;
        }
        else {
          uVar19 = 0;
          if ((int)local_46c < (int)param_4->_padding_) {
            uVar19 = uVar31 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar27 = *(FName *)(param_4->_padding_ + lVar15 * 8);
        }
        FVar22.Id = local_468.Id;
        local_478 = FVar27;
        ApplyLooseFileLocalizationPackageNameRedirects((FName)&local_3d8);
        if (local_3d8 != local_478) {
          local_478 = local_3d8;
          FVar22 = FPackageId::FromName(&local_1c8);
                    /* WARNING: Load size is inaccurate */
          FVar22.Id = *FVar22.Id;
        }
        local_448.ComparisonIndex.Value = 0;
        local_448.Number = 0;
        local_430.Id = 0;
        bVar16 = FPackageStore::GetPackageRedirectInfo(param_3,FVar22,&local_448,&local_430);
        if (bVar16) {
          local_428 = 0;
          if (FVar27 == (FName)0x0) {
            FVar27 = local_448;
          }
          local_478.ComparisonIndex.Value = 0;
          local_478.Number = 0;
          FVar22.Id = local_430.Id;
        }
        local_460.PackageName.ComparisonIndex.Value = 0;
        local_460.PackageName.Number = 0;
        local_460._8_4_ = local_460._8_4_ & 0xffffff00;
        FPackagePath::TryFromPackageName(local_478,&local_460);
        FVar13.Id = local_468.Id;
        FVar12 = local_478;
        local_488 = ((this->LinkerLoadState).bIsSet == false) + LinkerLoad;
        if (local_478 != (FName)0x0) {
          local_438 = this->AsyncLoadingThread;
          this_00 = &local_438->GlobalImportStore;
          SRWLock = &(local_438->GlobalImportStore).PackagesLock;
          AcquireSRWLockShared((PSRWLOCK)SRWLock);
          pFVar23 = FGlobalImportStore::FindPackageRefNoLock(this_00,FVar13);
          ReleaseSRWLockShared((PSRWLOCK)SRWLock);
          this = local_480;
          if ((((pFVar23 == (FLoadedPackageRef *)0x0) || (pFVar23->bHasFailed != false)) ||
              (pFVar23->bIsMissing != false)) ||
             ((pFVar23->PackageLoader == Unknown ||
              ((pUVar24 = FLoadedPackageRef::GetPackage(pFVar23), pUVar24 != (UPackage *)0x0 &&
               (pUVar24 = FLoadedPackageRef::GetPackage(pFVar23), this = local_480,
               ((uint)pUVar24->_padding_ >> 0xe & 1) != 0)))))) goto LAB_14232841e;
          EVar34 = pFVar23->PackageLoader;
          local_496 = pFVar23->PackageHeaderExtension;
          if (EVar34 == Zen) {
            FPackageStore::GetPackageStoreEntry(local_438->PackageStore,FVar13,FVar12,&local_400);
          }
          EVar20 = Ok;
          local_470 = Ok;
          this = local_480;
          EVar17 = local_496;
          goto LAB_14232854e;
        }
LAB_14232841e:
        EVar20 = FPackageStore::GetPackageStoreEntry
                           (this->AsyncLoadingThread->PackageStore,FVar22,local_478,&local_400);
        local_470 = EVar20;
        if (EVar20 == Missing) {
LAB_14232852f:
          if (EVar20 == Missing) {
            EVar34 = Unknown;
            EVar17 = Unspecified;
          }
          else {
LAB_142328538:
            EVar17 = local_400.PackageExtension;
            EVar34 = local_400.LoaderType;
          }
        }
        else if (local_400.LoaderType == LinkerLoad) {
          LOCK();
          __GTraceCounterAsyncLoadingFileSystemLoads.Value =
               (atomic<__int64>)((longlong)__GTraceCounterAsyncLoadingFileSystemLoads.Value + 1);
          UNLOCK();
          if (CountersChannel->Enabled < 0) goto LAB_142328538;
          if (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId == (atomic<unsigned_int>)0x0) {
            uVar18 = FCountersTrace::OutputInitCounter
                               (__GTraceCounterAsyncLoadingFileSystemLoads.CounterName,
                                TraceCounterType_Int,
                                __GTraceCounterAsyncLoadingFileSystemLoads.CounterFlags & 0xf);
            LOCK();
            if (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId == (atomic<unsigned_int>)0x0) {
              __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._2_2_ = 0;
              __GTraceCounterAsyncLoadingFileSystemLoads.CounterId._0_2_ = uVar18;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterAsyncLoadingFileSystemLoads.CounterId._0_2_,
                     (long64)__GTraceCounterAsyncLoadingFileSystemLoads.Value);
          EVar17 = local_400.PackageExtension;
          EVar34 = local_400.LoaderType;
        }
        else {
          LOCK();
          __GTraceCounterAsyncLoadingIoStoreLoads.Value =
               (atomic<__int64>)((longlong)__GTraceCounterAsyncLoadingIoStoreLoads.Value + 1);
          UNLOCK();
          if (CountersChannel->Enabled < 0) goto LAB_14232852f;
          if (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId == (atomic<unsigned_int>)0x0) {
            uVar18 = FCountersTrace::OutputInitCounter
                               (__GTraceCounterAsyncLoadingIoStoreLoads.CounterName,
                                TraceCounterType_Int,
                                __GTraceCounterAsyncLoadingIoStoreLoads.CounterFlags & 0xf);
            LOCK();
            if (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId == (atomic<unsigned_int>)0x0) {
              __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._2_2_ = 0;
              __GTraceCounterAsyncLoadingIoStoreLoads.CounterId._0_2_ = uVar18;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterAsyncLoadingIoStoreLoads.CounterId._0_2_,
                     (long64)__GTraceCounterAsyncLoadingIoStoreLoads.Value);
          EVar17 = local_400.PackageExtension;
          EVar34 = local_400.LoaderType;
          local_470 = EVar20;
        }
LAB_14232854e:
        FVar35 = (FPackageReferencer)0x0;
        uStack_370 = 0;
        local_378 = 0;
        local_2d8.DataPtr = (wchar_t *)0x0;
        local_2d8.Size = 0;
        local_2d8._12_4_ = 0;
        FPackagePath::SetHeaderExtension(&local_460,EVar17,&local_2d8);
        EVar17 = FPackagePath::GetHeaderExtension(&local_460);
        pFVar23 = FGlobalImportStore::AddPackageRef
                            ((this->ImportStore).GlobalImportStore,local_468,FVar27,EVar34,EVar17);
        if (EVar20 != Missing) {
          if (pFVar23->PackageLoader != EVar34) {
            ::LexToString(EVar34);
            ::LexToString(pFVar23->PackageLoader);
            EVar20 = local_470;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ImportedPackageStatus == EPackageStoreEntryStatus::Missing || ImportedPackageRef.GetPackageLoader() == ImportedPackageLoader"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                ,0x19f4,
                                L"ImportPackageStatus(%d) != EPackageStoreEntryStatus::Missing(%d) || ImportedPackageRef.GetPackageLoader()(%s) != ImportedPackageLoader(%s)"
                               );
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          EVar17 = FPackagePath::GetHeaderExtension(&local_460);
          if (pFVar23->PackageHeaderExtension != EVar17) {
            FPackagePath::GetHeaderExtension(&local_460);
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ImportedPackageStatus == EPackageStoreEntryStatus::Missing || ImportedPackageRef.GetPackageHeaderExtension() == ImportedPackagePath.GetHeaderExtension()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                ,0x19f5,
                                L"ImportPackageStatus(%d) != EPackageStoreEntryStatus::Missing(%d) || ImportedPackageRef.GetPackageHeaderExtension()(%d) != ImportedPackagePath.GetHeaderExtension()(%d)"
                               );
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        local_490 = (FAsyncPackage2 *)0x0;
        local_497 = false;
        if ((pFVar23->bAreAllPublicExportsLoaded != false) &&
           (pUVar24 = FLoadedPackageRef::GetPackage(pFVar23),
           pFVar23->OriginalPackageName == (FName)pUVar24->_padding_)) {
          FVar35 = (FPackageReferencer)0x1;
        }
        if (EVar34 == LinkerLoad) {
          if (-1 < pFVar23->PackageObjectIndex) {
            pUVar24 = FLoadedPackageRef::GetPackage(pFVar23);
            pFVar4 = (pUVar24->AdditionalInfo).Ptr;
            if (((pFVar4 != (FAdditionalInfo *)0x0) && (pFVar4->LinkerLoad != (FLinkerLoad *)0x0))
               || (pUVar24 = FLoadedPackageRef::GetPackage(pFVar23),
                  ((uint)pUVar24->PackageFlagsPrivate & 0x11) != 0)) goto LAB_1423286bc;
          }
          FVar35 = (FPackageReferencer)0x0;
        }
LAB_1423286bc:
        FVar13.Id = local_468.Id;
        this = local_480;
        if ((GFailLoadOnNotInstalledImport == false) || (EVar20 != NotInstalled)) {
          bVar16 = false;
          if (EVar20 != Missing) goto LAB_1423286d7;
LAB_1423286e4:
          bVar9 = true;
        }
        else {
          bVar16 = true;
LAB_1423286d7:
          if ((GFailLoadOnNotInstalledImport == false) && (EVar20 == NotInstalled))
          goto LAB_1423286e4;
          bVar9 = false;
        }
        if (FVar35 == (FPackageReferencer)0x0) {
          if (bVar16) {
            local_480->LoadStatus = FailedNotInstalled;
            pFVar23->bHasFailed = true;
            if (FVar27 != (FName)0x0) {
              if (4 < (byte)LogStreaming._0_1_) {
                ::LexToString(&local_278,&local_468);
                ::FName::ToString(&local_478,&local_288);
                this = local_480;
                ::LexToString(&local_298,&(local_480->Desc).PackageIdToLoad);
                FVar27 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
                ::FName::ToString((FName *)FVar27,&local_2a8);
                ::LexToString(&local_2b8,&(this->Desc).UPackageId);
                ::FName::ToString(&(this->Desc).UPackageName,&local_2c8);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                }
                if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                }
                if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                }
                if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_298.Data.AllocatorInstance.Data);
                }
                if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_288.Data.AllocatorInstance.Data);
                }
                if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Data.AllocatorInstance.Data);
                }
              }
              FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
              FVar22.Id = local_3d0[1].Id;
              FVar27 = local_478;
              pFVar25 = FTSTicker::GetCoreTicker();
              local_70 = (undefined ***)0x0;
              local_88 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::`93'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                          ::_vftable_;
              local_80 = FVar27;
              local_98[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                            ::Call;
              local_78 = FVar22.Id;
              FTSTicker::AddTicker
                        (pFVar25,&local_268,L"ExplanationForNotInstalledPackage",0.0,
                         (TUniqueFunction<bool___cdecl(float)> *)local_98);
              if (local_268.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(local_268.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar3 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar3 == (atomic<int>)0x1) {
                  (**(code **)((local_268.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (local_268.WeakReferenceCount.ReferenceController,1);
                }
              }
              if (local_98[0] != (code *)0x0) {
                pppuVar28 = &local_88;
                if (local_70 != (undefined ***)0x0) {
                  pppuVar28 = local_70;
                }
                (*(code *)(*pppuVar28)[2])();
              }
            }
          }
          else {
            if (!bVar9) {
              local_348.RequestID = -1;
              local_348.PackageFlags = PKG_None;
              local_348.Priority = (local_480->Desc).Priority;
              FLinkerInstancingContext::FLinkerInstancingContext(&local_348.InstancingContext);
              local_348.PackagePathToLoad.HeaderExtension = local_460.HeaderExtension;
              local_348.PackagePathToLoad._9_3_ = local_460._9_3_;
              local_348.PackagePathToLoad.PackageName = local_460.PackageName;
              local_348.UPackageId.Id = FVar13.Id;
              local_348.PackageReferencer = FVar10;
              local_348.bCanBeImported = true;
              local_1e8.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
              local_1e8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_420.Ptr =
                   (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                    *)0x0;
              local_348.PackageIdToLoad.Id = FVar22.Id;
              local_348.UPackageName = FVar27;
              local_348.Loader = EVar34;
              local_490 = FAsyncLoadingThread2::FindOrInsertPackage
                                    (this->AsyncLoadingThread,local_440,&local_348,&local_497,this,
                                     &local_420,&local_1e8);
              TVar14.Ptr = local_420.Ptr;
              if (local_420.Ptr !=
                  (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                   *)0x0) {
                TDelegateBase<FNotThreadSafeDelegateMode>::
                ~TDelegateBase<FNotThreadSafeDelegateMode>
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420.Ptr);
                ::operator_delete(TVar14.Ptr,0x18);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_348.InstancingContext.SharedData.SharedReferenceCount.
                         ReferenceController);
              goto LAB_142328d8a;
            }
            if (pFVar23->PackageObjectIndex < 0) {
              if (FVar27 != (FName)0x0) {
                if (4 < (byte)LogStreaming._0_1_) {
                  ::LexToString(&local_208,&local_468);
                  ::FName::ToString(&local_478,&local_218);
                  pFVar11 = local_480;
                  ::LexToString(&local_228,&(local_480->Desc).PackageIdToLoad);
                  FVar27 = FPackagePath::GetPackageFName(&(pFVar11->Desc).PackagePathToLoad);
                  ::FName::ToString((FName *)FVar27,&local_238);
                  ::LexToString(&local_248,&(pFVar11->Desc).UPackageId);
                  ::FName::ToString(&(local_480->Desc).UPackageName,&local_258);
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_258.Data.AllocatorInstance.Data);
                  }
                  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_248.Data.AllocatorInstance.Data);
                  }
                  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_238.Data.AllocatorInstance.Data);
                  }
                  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_228.Data.AllocatorInstance.Data);
                  }
                  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_218.Data.AllocatorInstance.Data);
                  }
                  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_208.Data.AllocatorInstance.Data);
                  }
                }
                bVar16 = FLinkerLoad::IsKnownMissingPackage(local_478);
                if (!bVar16) {
                  FPackagePath::GetPackageFName(&(local_480->Desc).PackagePathToLoad);
                  FVar22.Id = local_3d0[2].Id;
                  FVar27 = local_478;
                  pFVar25 = FTSTicker::GetCoreTicker();
                  local_a0 = (undefined ***)0x0;
                  local_b8 = &UE::Core::Private::Function::
                              TFunction_OwnedObject<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::`127'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
                              ::_vftable_;
                  local_b0 = FVar27;
                  local_c8[0] = UE::Core::Private::Function::
                                TFunctionRefCaller<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
                                ::Call;
                  local_a8 = FVar22.Id;
                  FTSTicker::AddTicker
                            (pFVar25,&local_1f8,L"GetExplanationForUnavailablePackage",0.0,
                             (TUniqueFunction<bool___cdecl(float)> *)local_c8);
                  if (local_1f8.WeakReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    paVar1 = &(local_1f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount
                    ;
                    aVar3 = *paVar1;
                    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                    UNLOCK();
                    if (aVar3 == (atomic<int>)0x1) {
                      (**(code **)((local_1f8.WeakReferenceCount.ReferenceController)->_padding_ + 8
                                  ))(local_1f8.WeakReferenceCount.ReferenceController,1);
                    }
                  }
                  if (local_c8[0] != (code *)0x0) {
                    pppuVar28 = &local_b8;
                    if (local_a0 != (undefined ***)0x0) {
                      pppuVar28 = local_a0;
                    }
                    (*(code *)(*pppuVar28)[2])();
                  }
                }
              }
              if ((pFVar23->bAreAllPublicExportsLoaded != false) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!bAreAllPublicExportsLoaded",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x5a1,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((-1 < pFVar23->PackageObjectIndex) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!HasPackage()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                      ,0x5a2,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar23->bAreAllPublicExportsLoaded = false;
              pFVar23->bIsMissing = true;
              this = local_480;
            }
          }
        }
        else {
          local_3d0[0].Id = local_468.Id;
          local_490 = TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
                      ::FindRef((TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
                                 *)&local_480->AsyncLoadingThread->AsyncPackageLookup,local_3d0);
          if (local_490 != (FAsyncPackage2 *)0x0) {
            local_497 = false;
LAB_142328d8a:
            if (local_490 == (FAsyncPackage2 *)0x0) {
              local_3b8.Id = local_468.Id;
              ::LexToString(&local_1d8,&local_3b8);
              ::FString::PrintfImpl(&local_368,L"0x%s");
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ImportedPackage",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                  ,0x1a4e,
                                  L"Failed to find or insert imported package with id \'%s\'");
              if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.Data.AllocatorInstance.Data);
              }
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            FLoadTimeProfilerTracePrivate::OutputAsyncPackageImportDependency(this,local_490);
            if (local_497 == false) {
              if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_142329239:
                if (6 < (byte)LogStreaming._0_1_) {
                  local_3a8.Id = local_468.Id;
                  ::LexToString(&local_180,&local_3a8);
                  ::FString::PrintfImpl(&local_390,L"0x%s");
                  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_180.Data.AllocatorInstance.Data);
                  }
                  ::LexToString(&local_d8,&(this->Desc).PackageIdToLoad);
                  FVar27 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
                  ::FName::ToString((FName *)FVar27,&local_150);
                  ::LexToString(&local_160,&(this->Desc).UPackageId);
                  ::FName::ToString(&(this->Desc).UPackageName,&local_170);
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_170.Data.AllocatorInstance.Data);
                  }
                  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_160.Data.AllocatorInstance.Data);
                  }
                  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_150.Data.AllocatorInstance.Data);
                  }
                  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  }
                  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_390.Data.AllocatorInstance.Data);
                  }
                }
              }
              else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                      (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                       GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
                FVar30 = (ForElementType<FSetElementId>)0x154ba3ce8;
                if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar30 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
                }
                iVar21 = *(int *)((longlong)FVar30 +
                                 (ulonglong)
                                 (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                                 (uint)(this->Desc).UPackageId.Id) * 4);
                if (iVar21 != -1) {
                  do {
                    if (*(ulong64 *)
                         (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar21 * 0x10)
                        == (this->Desc).UPackageId.Id) goto LAB_142329239;
                    iVar21 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                                     (longlong)iVar21 * 0x10);
                  } while (iVar21 != -1);
                }
              }
              aVar3 = local_490->RefCount;
              while (aVar3 != (atomic<int>)0x0) {
                LOCK();
                bVar16 = aVar3 == local_490->RefCount;
                if (bVar16) {
                  local_490->RefCount = (atomic<int>)((int)aVar3 + 1);
                }
                UNLOCK();
                if (bVar16) goto LAB_142329103;
                aVar3 = local_490->RefCount;
              }
              if (FVar35 == (FPackageReferencer)0x0) {
                local_495[0] = FVar35;
                `FAsyncPackage2::ImportPackagesRecursiveInner'::__l188::<lambda_3>::operator()
                          (local_495);
              }
            }
            else {
              if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_142328ed9:
                if (5 < (byte)LogStreaming._0_1_) {
                  local_3b0.Id = local_468.Id;
                  ::LexToString(&local_140,&local_3b0);
                  ::FString::PrintfImpl(&local_358,L"0x%s");
                  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_140.Data.AllocatorInstance.Data);
                  }
                  ::LexToString(&local_190,&(this->Desc).PackageIdToLoad);
                  FVar27 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
                  ::FName::ToString((FName *)FVar27,&local_1a0);
                  ::LexToString(&local_1b0,&(this->Desc).UPackageId);
                  ::FName::ToString(&(this->Desc).UPackageName,&local_1c0);
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                  }
                  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                  }
                  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                  }
                  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_190.Data.AllocatorInstance.Data);
                  }
                  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.Data.AllocatorInstance.Data);
                  }
                }
              }
              else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                      (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                       GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
                FVar30 = (ForElementType<FSetElementId>)0x154ba3ce8;
                if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar30 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
                }
                iVar21 = *(int *)((longlong)FVar30 +
                                 (ulonglong)
                                 (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                                 (uint)(this->Desc).UPackageId.Id) * 4);
                if (iVar21 != -1) {
                  do {
                    if (*(ulong64 *)
                         (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar21 * 0x10)
                        == (this->Desc).UPackageId.Id) goto LAB_142328ed9;
                    iVar21 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                                     (longlong)iVar21 * 0x10);
                  } while (iVar21 != -1);
                }
              }
              LOCK();
              paVar1 = &(this->AsyncLoadingThread->PackagesWithRemainingWorkCounter).
                        PackagesWithRemainingWorkCounter;
              *paVar1 = (atomic<int>)((int)*paVar1 + 1);
              UNLOCK();
              aVar29 = (atomic<__int64>)
                       (longlong)
                       (int)(this->AsyncLoadingThread->PackagesWithRemainingWorkCounter).
                            PackagesWithRemainingWorkCounter;
              if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value != aVar29) {
                LOCK();
                UNLOCK();
                __GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value = aVar29;
                if (-1 < CountersChannel->Enabled) {
                  if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
                      (atomic<unsigned_int>)0x0) {
                    uVar18 = FCountersTrace::OutputInitCounter
                                       (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.
                                        CounterName,TraceCounterType_Int,
                                        __GTraceCounterAsyncLoadingPackagesWithRemainingWork.
                                        CounterFlags & 0xf);
                    LOCK();
                    if (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId ==
                        (atomic<unsigned_int>)0x0) {
                      __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._2_2_ = 0;
                      __GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_ = uVar18;
                    }
                    UNLOCK();
                  }
                  FCountersTrace::OutputSetValue
                            (__GTraceCounterAsyncLoadingPackagesWithRemainingWork.CounterId._0_2_,
                             (long64)__GTraceCounterAsyncLoadingPackagesWithRemainingWork.Value);
                }
              }
              LOCK();
              local_490->RefCount = (atomic<int>)((int)local_490->RefCount + 1);
              UNLOCK();
LAB_142329103:
              pFVar11 = local_490;
              ppFVar26 = TArrayView<FAsyncPackage2_*,int>::operator[]
                                   (&local_408->ImportedAsyncPackagesView,local_46c);
              *ppFVar26 = pFVar11;
              if (local_488 != EVar34) {
                if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_142329409:
                  if (6 < (byte)LogStreaming._0_1_) {
                    ::FName::ToString(&(local_490->Desc).UPackageName,&local_f0);
                    ::LexToString(EVar34);
                    ::LexToString(&local_100,&(this->Desc).PackageIdToLoad);
                    FVar27 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
                    ::FName::ToString((FName *)FVar27,&local_110);
                    ::LexToString(&local_120,&(this->Desc).UPackageId);
                    ::FName::ToString(&(this->Desc).UPackageName,&local_130);
                    UE::Logging::Private::BasicLog<7>
                              (&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_130.Data.AllocatorInstance.Data);
                    }
                    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_120.Data.AllocatorInstance.Data);
                    }
                    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_110.Data.AllocatorInstance.Data);
                    }
                    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_100.Data.AllocatorInstance.Data);
                    }
                    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
                        (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
                         GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
                  FVar30 = (ForElementType<FSetElementId>)0x154ba3ce8;
                  if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar30 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
                  }
                  iVar21 = *(int *)((longlong)FVar30 +
                                   (ulonglong)
                                   (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                                   (uint)(this->Desc).UPackageId.Id) * 4);
                  if (iVar21 != -1) {
                    do {
                      if (*(ulong64 *)
                           (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ +
                           (longlong)iVar21 * 0x10) == (this->Desc).UPackageId.Id)
                      goto LAB_142329409;
                      iVar21 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                                       (longlong)iVar21 * 0x10);
                    } while (iVar21 != -1);
                  }
                }
                if (((this->PackageNodes).ArrayNum < 3) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar11 = local_490;
                pFVar5 = (this->PackageNodes).DataPtr;
                if (((local_490->PackageNodes).ArrayNum < 7) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FEventLoadNode2::DependsOn(pFVar5 + 2,(pFVar11->PackageNodes).DataPtr + 6);
              }
              if (local_497 != false) {
                if (local_470 == Pending) {
                  pFVar6 = this->AsyncLoadingThread;
                  pTVar32 = &pFVar6->PendingPackages;
                  pFVar7 = (pTVar32->AllocatorInstance).Data;
                  if (((pFVar7 <= (FScriptContainerElement *)&local_490) &&
                      ((FScriptContainerElement *)&local_490 <
                       pFVar7 + (longlong)(pFVar6->PendingPackages).ArrayMax * 8)) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar21 = (pFVar6->PendingPackages).ArrayNum;
                  piVar2 = &(pFVar6->PendingPackages).ArrayMax;
                  if (iVar21 == *piVar2) {
                    iVar21 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar32->AllocatorInstance,piVar2);
                  }
                  (pFVar6->PendingPackages).ArrayNum = iVar21 + 1;
                  *(FAsyncPackage2 **)((pTVar32->AllocatorInstance).Data + (longlong)iVar21 * 8) =
                       local_490;
                }
                else {
                  if ((local_470 != Ok) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ImportedPackageStatus == EPackageStoreEntryStatus::Ok",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                          ,0x1a7d,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (EVar34 == LinkerLoad) {
                    InitializeLinkerLoadState(local_490,(FLinkerInstancingContext *)0x0);
                  }
                  else {
                    FAsyncLoadingThread2::InitializeAsyncPackageFromPackageStore
                              (this->AsyncLoadingThread,local_440,local_418,local_490,&local_400);
                  }
                  StartLoading(local_490,local_440,local_418);
                }
              }
            }
          }
        }
        local_46c = local_46c + 1;
        local_410 = local_410 + 1;
        param_4 = local_408;
        param_3 = local_398;
        iVar33 = local_450;
      } while (local_410 < local_3a0);
    }
  }
  return;
}

// InitializeExportArchive @ 14232a5c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::InitializeExportArchive(FAsyncPackage2 *this,FExportArchive *param_1,bool param_2)

{
  byte *pbVar1;
  FAdditionalInfo *pFVar2;
  UPackage *pUVar3;
  code *pcVar4;
  int iVar5;
  FCustomVersionContainer *pFVar6;
  FAdditionalInfo *pFVar7;
  
  pFVar2 = (this->LinkerRoot->AdditionalInfo).Ptr;
  pFVar7 = (FAdditionalInfo *)&GPackageFileUEVersion;
  if (pFVar2 != (FAdditionalInfo *)0x0) {
    pFVar7 = pFVar2;
  }
  (**(code **)(param_1->_padding_ + 0x110))(param_1,pFVar7->LinkerPackageVersion);
  pFVar2 = (this->LinkerRoot->AdditionalInfo).Ptr;
  iVar5 = GPackageFileLicenseeUEVersion;
  if (pFVar2 != (FAdditionalInfo *)0x0) {
    iVar5 = pFVar2->LinkerLicenseeVersion;
  }
  (**(code **)(param_1->_padding_ + 0x118))(param_1,iVar5);
  pUVar3 = this->LinkerRoot;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`UPackage::GetLinkerCustomVersions'::__l2::
           _dynamic_atexit_destructor_for__EmptyVersions__);
    _Init_thread_footer(&`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar2 = (pUVar3->AdditionalInfo).Ptr;
  if (pFVar2 == (FAdditionalInfo *)0x0) {
    pFVar6 = &`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
              ::__l2::EmptyVersions;
  }
  else {
    pFVar6 = &pFVar2->LinkerCustomVersion;
  }
  if ((pFVar6->Versions).ArrayNum != 0) {
    pcVar4 = *(code **)(param_1->_padding_ + 0x68);
    pFVar6 = UPackage::GetLinkerCustomVersions(this->LinkerRoot);
    (*pcVar4)(param_1,pFVar6);
  }
  (**(code **)(param_1->_padding_ + 0xf8))
            (param_1,(uint)this->LinkerRoot->PackageFlagsPrivate >> 0xd & 0xffffff01);
  (**(code **)(param_1->_padding_ + 0xd0))
            (param_1,(uint)this->LinkerRoot->PackageFlagsPrivate >> 9 & 0xffffff01);
  (**(code **)(param_1->_padding_ + 200))(param_1,1);
  (**(code **)(param_1->_padding_ + 0x108))(param_1,1);
  if ((int)this->LinkerRoot->PackageFlagsPrivate < 0) {
    (**(code **)(param_1->_padding_ + 0x80))(param_1,1);
  }
  pbVar1 = (byte *)((longlong)&param_1->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x80;
  param_1->HeaderData = &this->HeaderData;
  param_1->ImportStore = &this->ImportStore;
  param_1->ExternalReadDependencies = &this->ExternalReadDependencies;
  param_1->bIsOptionalSegment = param_2;
  param_1->InstanceContext = &(this->Desc).InstancingContext;
  param_1->PackageDesc = &this->Desc;
  return;
}

// InitializeLinkerLoadState @ 14232a7c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::InitializeLinkerLoadState(FAsyncPackage2 *this,FLinkerInstancingContext *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->LinkerLoadState).bIsSet != false) {
    pFVar1 = (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.AllocatorInstance.
             Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.AllocatorInstance.
             Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.
             AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  (this->LinkerLoadState).TypedValue.PostLoadExportIndex = 0;
  (this->LinkerLoadState).TypedValue.bIsCurrentlyResolvingImports = false;
  (this->LinkerLoadState).TypedValue.bIsCurrentlyCreatingExports = false;
  (this->LinkerLoadState).TypedValue.bContainsClasses = false;
  (this->LinkerLoadState).TypedValue.field_0x1f = 0;
  (this->LinkerLoadState).TypedValue.Linker = (FLinkerLoad *)0x0;
  (this->LinkerLoadState).TypedValue.ProcessingImportedPackageIndex = 0;
  (this->LinkerLoadState).TypedValue.CreateImportIndex = 0;
  (this->LinkerLoadState).TypedValue.CreateExportIndex = 0;
  (this->LinkerLoadState).TypedValue.SerializeExportIndex = 0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.ArrayNum = 0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.ArrayMax = 0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.ArrayNum = 0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.ArrayMax = 0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayNum = 0;
  (this->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayMax = 0;
  (this->LinkerLoadState).bIsSet = true;
  CreateUPackage(this);
  CreateLinker(this,param_1);
  return;
}

// MoveConstructedObjectsToPhase2 @ 14232c510

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FAsyncPackage2::MoveConstructedObjectsToPhase2(FAsyncPackage2 *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  UObject *this_01;
  atomic<unsigned___int64> this_02;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  atomic<unsigned___int64> *paVar9;
  FExportObject *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FExportObject *pFVar13;
  byte bVar14;
  bool bVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_f0;
  atomic<unsigned___int64> *local_e0;
  FExportObject *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId11162,"MoveConstructedObjectsToPhase2",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x2b9a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId11162);
  }
  local_e0 = &(this->ConstructedObjectsAccessDetector).State;
  FMRSWRecursiveAccessDetector::AcquireReadAccess((FMRSWRecursiveAccessDetector *)local_e0);
  pFVar11 = (this->ConstructedObjects).AllocatorInstance.Data;
  iVar2 = (this->ConstructedObjects).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConstructedObjects).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    paVar9 = local_e0;
    if (pFVar11 == pFVar1) break;
    this_00 = *(UObjectBaseUtility **)pFVar11;
    if ((*(uint *)&this_00->field_0x8 & 0x600) != 0) {
      FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
      ::LexToString(&local_c0,*(EObjectFlags *)&this_00->field_0x8);
      UObjectBaseUtility::GetFullName(this_00,&local_d0,(UObject *)0x0,None);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Object->HasAnyFlags(RF_NeedLoad | RF_NeedInitialization)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2b9f,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
    FUObjectItem::ThisThreadAtomicallySetFlag(pFVar7,AsyncLoadingPhase2);
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar7,AsyncLoadingPhase1);
    pFVar11 = pFVar11 + 8;
  }
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls((FMRSWRecursiveAccessDetector *)local_e0);
  LOCK();
  *paVar9 = (atomic<unsigned___int64>)((longlong)*paVar9 + -1);
  UNLOCK();
  pFVar10 = (this->Data).Exports.DataPtr;
  pFVar13 = pFVar10 + (this->Data).Exports.ArrayNum;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_d8 = pFVar13;
  if (pFVar10 != pFVar13) {
    do {
      this_01 = pFVar10->Object;
      if (this_01 != (UObject *)0x0) {
        if ((*(uint *)&this_01->field_0x8 & 0x10) != 0) {
          UObject::GetDefaultSubobjects(this_01,&local_f0);
          iVar2 = local_f0.ArrayNum;
          paVar9 = (atomic<unsigned___int64> *)
                   (local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 8);
          FVar12.Data = local_f0.AllocatorInstance.Data;
          local_e0 = paVar9;
          while( true ) {
            if (local_f0.ArrayNum != iVar2) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            uVar5 = local_f0._8_8_;
            if ((atomic<unsigned___int64> *)FVar12.Data == paVar9) break;
            this_02 = *(atomic<unsigned___int64> *)FVar12.Data;
            if (this_02 != (atomic<unsigned___int64>)0x0) {
              iVar3 = *(int *)((longlong)this_02 + 0xc);
              if ((iVar3 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                     ,0x443,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
                pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
              }
              else {
                pFVar7 = (FUObjectItem *)0x0;
              }
              paVar9 = local_e0;
              if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x36) & 1) != 0) {
                if ((*(uint *)((longlong)this_02 + 8) & 0x600) != 0) {
                  FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this_02 + 0xc));
                  ::LexToString(&local_a0,*(EObjectFlags *)((longlong)this_02 + 8));
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_02,&local_b0,(UObject *)0x0,None);
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!SubObject->HasAnyFlags(RF_NeedLoad | RF_NeedInitialization)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                     ,0x2bb4,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                  }
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                iVar3 = *(int *)((longlong)this_02 + 0xc);
                if ((iVar3 < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                       ,0x443,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
                  pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
                }
                else {
                  pFVar7 = (FUObjectItem *)0x0;
                }
                FUObjectItem::SetRootFlags(pFVar7,AsyncLoadingPhase2);
                iVar3 = *(int *)((longlong)this_02 + 0xc);
                if ((iVar3 < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                       ,0x443,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
                  pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
                }
                else {
                  pFVar7 = (FUObjectItem *)0x0;
                }
                FUObjectItem::ClearRootFlags(pFVar7,AsyncLoadingPhase1);
                paVar9 = local_e0;
              }
            }
            FVar12.Data = FVar12.Data + 8;
          }
          iVar2 = local_f0.ArrayMax;
          local_f0._8_8_ = (ulonglong)(uint)local_f0.ArrayMax << 0x20;
          pFVar13 = local_d8;
          if (((longlong)uVar5 < 0) && (iVar2 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
            pFVar13 = local_d8;
          }
        }
        pFVar7 = (FUObjectItem *)0x0;
        if (this_01 != (UObject *)0x0) {
          if ((*(uint *)&this_01->field_0x8 & 0x600) != 0) {
            iVar2 = *(int *)&this_01->field_0xc;
            if ((iVar2 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
              FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
            }
            ::LexToString(&local_80,*(EObjectFlags *)&this_01->field_0x8);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_01,&local_90,(UObject *)0x0,None);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Object->HasAnyFlags(RF_NeedLoad | RF_NeedInitialization)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x2bbe,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar2 = *(int *)&this_01->field_0xc;
          if ((iVar2 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = pFVar7;
          if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
            pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
          }
          if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x36) & 1) != 0) {
            iVar2 = *(int *)&this_01->field_0xc;
            if ((iVar2 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar8 = pFVar7;
            if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
              pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
            }
            FUObjectItem::SetRootFlags(pFVar8,AsyncLoadingPhase2);
            iVar2 = *(int *)&this_01->field_0xc;
            if ((iVar2 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
              pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
            }
            FUObjectItem::ClearRootFlags(pFVar7,AsyncLoadingPhase1);
          }
        }
      }
      pFVar10 = pFVar10 + 1;
    } while (pFVar10 != pFVar13);
  }
  bVar14 = 0;
  if (this->LinkerRoot != (UPackage *)0x0) {
    iVar2 = *(int *)((longlong)&this->LinkerRoot->_padding_ + 4);
    if ((iVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
      pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
    }
    else {
      pFVar7 = (FUObjectItem *)0x0;
    }
    if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x36) & 1) != 0) {
      if ((this->LinkerRoot->_padding_ & 0x600) != 0) {
        if (this->LinkerRoot != (UPackage *)0x0) {
          FUObjectArray::IndexToObject
                    (&GUObjectArray,*(int *)((longlong)&this->LinkerRoot->_padding_ + 4));
        }
        if (this->LinkerRoot != (UPackage *)0x0) {
          bVar14 = 0x40;
          ::LexToString(local_60,(EObjectFlags)this->LinkerRoot->_padding_);
        }
        if (this->LinkerRoot != (UPackage *)0x0) {
          bVar14 = bVar14 | 0x80;
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this->LinkerRoot,&local_70,(UObject *)0x0,None);
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!LinkerRoot->HasAnyFlags(RF_NeedLoad | RF_NeedInitialization)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x2bc9,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
        if (((char)bVar14 < '\0') &&
           (bVar14 = bVar14 & 0x7f,
           local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (((bVar14 & 0x40) != 0) &&
           (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      UObjectBaseUtility::SetInternalFlags
                ((UObjectBaseUtility *)this->LinkerRoot,AsyncLoadingPhase2);
      UObjectBaseUtility::AtomicallyClearInternalFlags
                ((UObjectBaseUtility *)this->LinkerRoot,AsyncLoadingPhase1);
    }
  }
  LOCK();
  this->ObjectsNowInPhase2 = (atomic<bool>)0x1;
  UNLOCK();
  if ((atomic<unsigned___int64> *)local_f0.AllocatorInstance.Data != (atomic<unsigned___int64> *)0x0
     ) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostLoadInstances @ 14232eed0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncPackage2::PostLoadInstances(FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FExportObject *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  Type TVar11;
  LARGE_INTEGER local_res8;
  
  dVar8 = __real_4170000000000000;
  if (this->LoadStatus != Succeeded) {
    return Complete;
  }
  TVar11 = TimeOut;
  iVar2 = (this->Data).Exports.ArrayNum;
  iVar3 = this->PostLoadInstanceIndex;
  do {
    if (iVar2 <= iVar3) {
LAB_14232f0a3:
      if (this->PostLoadInstanceIndex == iVar2) {
        TVar11 = Complete;
      }
      return TVar11;
    }
    if (param_1->bUseTimeLimit != false) {
      QueryPerformanceCounter(&local_res8);
      dVar1 = param_1->TimeLimit;
      dVar7 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
      bVar9 = dVar1 < dVar7 - param_1->StartTime;
      if ((bVar9) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint
                  (param_1->StartTime,dVar7,param_1->LastTestTime,dVar1,L"PostLoadInstances",
                   (UObject *)0x0);
        param_1->LastTestTime = dVar7;
        goto LAB_14232f0a3;
      }
      param_1->LastTestTime = dVar7;
      if (bVar9) goto LAB_14232f0a3;
    }
    if (((GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) &&
        ((param_1->SyncLoadContextStack).ArrayNum == 0)) &&
       (bVar9 = IsInParallelLoadingThread(), !bVar9)) {
      if (5 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                    ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      goto LAB_14232f0a3;
    }
    uVar4 = this->PostLoadInstanceIndex;
    this->PostLoadInstanceIndex = uVar4 + 1;
    uVar10 = 0;
    if ((int)uVar4 < (this->Data).Exports.ArrayNum) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      TVar11 = (*pcVar6)();
      return TVar11;
    }
    pFVar5 = (this->Data).Exports.DataPtr;
    if (((pFVar5[(int)uVar4].Object != (UObject *)0x0) && (pFVar5[(int)uVar4].bFiltered == false))
       && (pFVar5[(int)uVar4].bExportLoadFailed == false)) {
      (**(code **)(**(longlong **)&(pFVar5[(int)uVar4].Object)->field_0x10 + 0x380))();
    }
    iVar3 = this->PostLoadInstanceIndex;
  } while( true );
}

// PreloadLinkerLoadExports @ 14232fbb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncPackage2::PreloadLinkerLoadExports(FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  double dVar1;
  uint uVar2;
  FLinkerLoad *pFVar3;
  FExportObject *pFVar4;
  FLinkerLoad *pFVar5;
  longlong lVar6;
  UObjectBaseUtility *pUVar7;
  UObject *pUVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  FName FVar17;
  ForElementType<FSetElementId> FVar18;
  longlong lVar19;
  longlong lVar20;
  FString local_138;
  FString local_128;
  LARGE_INTEGER local_118 [3];
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [4];
  
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  pFVar3 = (this->LinkerLoadState).TypedValue.Linker;
  UE::FRecursiveMutex::Lock(&pFVar3->Mutex);
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  lVar12 = ((this->LinkerLoadState).TypedValue.Linker)->_padding_;
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  dVar11 = __real_4170000000000000;
  if (((int)((this->LinkerLoadState).TypedValue.Linker)->_padding_ != (this->Data).Exports.ArrayNum)
     && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("LinkerLoadState->Linker->ExportMap.Num() == Data.Exports.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x1c4c,L""), dVar11 = __real_4170000000000000, bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  do {
    if (((this->LinkerLoadState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    if ((int)lVar12 <= (this->LinkerLoadState).TypedValue.SerializeExportIndex) {
      bVar13 = true;
      goto LAB_14233040a;
    }
    param_1->bIsActive = (atomic<bool>)0x1;
    if (((this->LinkerLoadState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    uVar2 = (this->LinkerLoadState).TypedValue.SerializeExportIndex;
    lVar20 = (longlong)(int)uVar2;
    (this->LinkerLoadState).TypedValue.SerializeExportIndex = uVar2 + 1;
    uVar15 = 0;
    if ((int)uVar2 < (this->Data).Exports.ArrayNum) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    pFVar4 = (this->Data).Exports.DataPtr;
    if (((this->LinkerLoadState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    pFVar5 = (this->LinkerLoadState).TypedValue.Linker;
    uVar15 = 0;
    if ((int)uVar2 < (int)pFVar5->_padding_) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    lVar6 = pFVar5->_padding_;
    lVar19 = lVar20 * 0x68;
    pUVar7 = *(UObjectBaseUtility **)(lVar19 + 0x40 + lVar6);
    if ((pUVar7 != (UObjectBaseUtility *)0x0) && ((*(uint *)&pUVar7->field_0x8 >> 10 & 1) != 0)) {
      if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14232ff19:
        if (6 < (byte)LogStreaming._0_1_) {
          UObjectBaseUtility::GetPathName(pUVar7,&local_c0,(UObject *)0x0);
          ::LexToString(&local_d0,&(this->Desc).PackageIdToLoad);
          FVar17 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)FVar17,&local_e0);
          ::LexToString(&local_f0,&(this->Desc).UPackageId);
          ::FName::ToString(&(this->Desc).UPackageName,&local_100);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
      }
      else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
              (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
               GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar18 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar18 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar18 +
                         (ulonglong)
                         (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                         (uint)(this->Desc).UPackageId.Id) * 4);
        if (iVar16 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar16 * 0x10) ==
                (this->Desc).UPackageId.Id) goto LAB_14232ff19;
            iVar16 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar16 * 0x10);
          } while (iVar16 != -1);
        }
      }
      if (((this->LinkerLoadState).bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      FLinkerLoad::Preload
                ((FLinkerLoad *)&((this->LinkerLoadState).TypedValue.Linker)->_padding_,
                 (UObject *)pUVar7);
    }
    pUVar7 = *(UObjectBaseUtility **)(lVar19 + 0x40 + lVar6);
    if ((UObjectBaseUtility *)pFVar4[lVar20].Object != pUVar7) {
      if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_142330149:
        if (5 < (byte)LogStreaming._0_1_) {
          if (pUVar7 == (UObjectBaseUtility *)0x0) {
            ::FString::FString(&local_128,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName(pUVar7,&local_128,(UObject *)0x0);
          }
          if ((UObjectBaseUtility *)pFVar4[lVar20].Object == (UObjectBaseUtility *)0x0) {
            ::FString::FString(&local_138,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)pFVar4[lVar20].Object,&local_138,(UObject *)0x0);
          }
          ::LexToString(local_80,&(this->Desc).PackageIdToLoad);
          FVar17 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
          ::FName::ToString((FName *)FVar17,&local_90);
          ::LexToString(&local_a0,&(this->Desc).UPackageId);
          ::FName::ToString(&(this->Desc).UPackageName,&local_b0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
      }
      else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
              (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
               GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar18 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar18 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar16 = *(int *)((longlong)FVar18 +
                         (ulonglong)
                         (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                         (uint)(this->Desc).UPackageId.Id) * 4);
        if (iVar16 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar16 * 0x10) ==
                (this->Desc).UPackageId.Id) goto LAB_142330149;
            iVar16 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                             (longlong)iVar16 * 0x10);
          } while (iVar16 != -1);
        }
      }
      pUVar8 = *(UObject **)(lVar19 + 0x40 + lVar6);
      pFVar4[lVar20].Object = pUVar8;
      pFVar4[lVar20].bWasFoundInMemory = pUVar8 != (UObject *)0x0;
      pFVar4[lVar20].bExportLoadFailed = (bool)(*(byte *)(lVar19 + 0x4c + lVar6) >> 7);
    }
    if (param_1->bUseTimeLimit != false) {
      QueryPerformanceCounter(local_118);
      dVar1 = param_1->TimeLimit;
      dVar10 = (double)local_118[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar11;
      bVar13 = dVar1 < dVar10 - param_1->StartTime;
      if ((bVar13) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint
                  (param_1->StartTime,dVar10,param_1->LastTestTime,dVar1,
                   L"SerializeLinkerLoadExports",(UObject *)0x0);
        param_1->LastTestTime = dVar10;
        bVar13 = false;
        goto LAB_14233040a;
      }
      param_1->LastTestTime = dVar10;
      if (bVar13) goto LAB_1423303d3;
    }
  } while (((GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) ||
           ((param_1->SyncLoadContextStack).ArrayNum != 0)) ||
          (bVar13 = IsInParallelLoadingThread(), bVar13));
  if (5 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
LAB_1423303d3:
  bVar13 = false;
LAB_14233040a:
  UE::FRecursiveMutex::Unlock(&pFVar3->Mutex);
  return bVar13;
}

// ProcessExportDependencies @ 142330e70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::ProcessExportDependencies
          (FAsyncPackage2 *this,FAsyncPackageHeaderData *param_1,int param_2,
          EExportCommandType param_3)

{
  ulong64 uVar1;
  FAsyncPackage2 *pFVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  FPackageObjectIndex *pFVar7;
  UObject *pUVar8;
  FAsyncPackage2 **ppFVar9;
  ulong64 *puVar10;
  char cVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  FAsyncPackageHeaderData *local_res10;
  char local_res18;
  FAsyncPackageHeaderData *local_48 [2];
  
  bVar17 = CpuChannel->Enabled < 0;
  if (bVar17) {
    local_res18 = '\0';
  }
  else {
    local_res18 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId8105,"ProcessExportDependencies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1fa9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId8105);
  }
  cVar11 = !bVar17;
  uVar16 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar16 = *(uint *)(param_1->_padding_ + (longlong)param_2 * 0x14);
  lVar14 = param_1->_padding_ + (longlong)param_2 * 0x14;
  if (-1 < (int)uVar16) {
    if (param_3 == ExportCommandType_Serialize) {
      uVar16 = uVar16 + *(int *)(lVar14 + 8) + *(int *)(lVar14 + 4);
    }
    iVar15 = *(int *)(lVar14 + 4 + (longlong)(int)param_3 * 8);
    if (0 < iVar15) {
      lVar13 = (longlong)(int)uVar16 * 4;
      do {
        uVar5 = 0;
        if ((int)uVar16 < (int)param_1->_padding_) {
          uVar5 = ~uVar16 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = uVar16 + 1;
        puVar12 = (uint *)(param_1->_padding_ + lVar13);
        lVar13 = lVar13 + 4;
        uVar5 = *puVar12;
        if ((int)uVar5 < 1) {
          lVar4 = param_1->_padding_;
          if ((-1 < (int)uVar5) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImport()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x55,L""), bVar17)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = *puVar12;
          if ((int)~uVar5 < (int)lVar4) {
            if ((-1 < (int)uVar5) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsImport()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                    ,0x55,L""), bVar17)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar7 = TArrayView<FPackageObjectIndex_const_,int>::operator[]
                               ((TArrayView<FPackageObjectIndex_const_,int> *)&param_1->_padding_,
                                ~*puVar12);
            if (((byte)(pFVar7->TypeAndId >> 0x3e) != 2) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ObjectIndex.IsPackageImport()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x202e,L""), bVar17)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar8 = FPackageImportStore::GetImportObject
                               (&this->ImportStore,param_1,(FPackageObjectIndex)pFVar7->TypeAndId);
            if (pUVar8 == (UObject *)0x0) {
              uVar1 = pFVar7->TypeAndId;
              ppFVar9 = TArrayView<FAsyncPackage2_*,int>::operator[]
                                  (&param_1->ImportedAsyncPackagesView,
                                   (uint)(uVar1 >> 0x20) & 0x3fffffff);
              pFVar2 = *ppFVar9;
              if (pFVar2 != (FAsyncPackage2 *)0x0) {
                puVar10 = TArrayView<unsigned___int64_const_,int>::operator[]
                                    ((TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_,
                                     (int)uVar1);
                local_res10 = (FAsyncPackageHeaderData *)0x0;
                iVar6 = GetPublicExportIndex(pFVar2,*puVar10,&local_res10);
                if (-1 < iVar6) {
                  ConditionalCreateExport(pFVar2,local_res10,iVar6);
                }
              }
            }
          }
          else {
            if ((-1 < (int)uVar5) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsImport()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                    ,0x55,L""), bVar17)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ConditionalCreateCellImport(this,param_1,~*puVar12 - (int)param_1->_padding_);
          }
        }
        else if ((int)(uVar5 - 1) < (param_1->ExportsView).ArrayNum) {
          ConditionalCreateExport(this,param_1,*puVar12 - 1);
        }
        else {
          ConditionalCreateCellExport
                    (this,param_1,(*puVar12 - (param_1->ExportsView).ArrayNum) + -1);
        }
        iVar15 = iVar15 + -1;
        cVar11 = local_res18;
      } while (0 < iVar15);
    }
    iVar15 = *(int *)(lVar14 + (longlong)(int)param_3 * 8 + 8);
    if (0 < iVar15) {
      lVar14 = (longlong)(int)uVar16 * 4;
      do {
        uVar5 = 0;
        if ((int)uVar16 < (int)param_1->_padding_) {
          uVar5 = ~uVar16 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar16 = uVar16 + 1;
        puVar12 = (uint *)(param_1->_padding_ + lVar14);
        lVar14 = lVar14 + 4;
        uVar5 = *puVar12;
        if ((int)uVar5 < 1) {
          if ((-1 < (int)uVar5) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImport()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x55,L""), bVar17)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = *puVar12;
          if ((int)~uVar5 < (int)param_1->_padding_) {
            if ((-1 < (int)uVar5) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsImport()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                    ,0x55,L""), bVar17)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar7 = TArrayView<FPackageObjectIndex_const_,int>::operator[]
                               ((TArrayView<FPackageObjectIndex_const_,int> *)&param_1->_padding_,
                                ~*puVar12);
            if (((byte)(pFVar7->TypeAndId >> 0x3e) != 2) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ObjectIndex.IsPackageImport()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                    ,0x2047,L""), bVar17)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar8 = FPackageImportStore::GetImportObject
                               (&this->ImportStore,param_1,(FPackageObjectIndex)pFVar7->TypeAndId);
            if ((pUVar8 == (UObject *)0x0) || ((*(uint *)&pUVar8->field_0x8 >> 10 & 1) != 0)) {
              uVar1 = pFVar7->TypeAndId;
              ppFVar9 = TArrayView<FAsyncPackage2_*,int>::operator[]
                                  (&param_1->ImportedAsyncPackagesView,
                                   (uint)(uVar1 >> 0x20) & 0x3fffffff);
              pFVar2 = *ppFVar9;
              if (pFVar2 != (FAsyncPackage2 *)0x0) {
                puVar10 = TArrayView<unsigned___int64_const_,int>::operator[]
                                    ((TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_,
                                     (int)uVar1);
                local_48[0] = (FAsyncPackageHeaderData *)0x0;
                iVar6 = GetPublicExportIndex(pFVar2,*puVar10,local_48);
                if (-1 < iVar6) {
                  ConditionalSerializeExport(pFVar2,local_48[0],iVar6);
                }
              }
            }
          }
          else {
            if ((-1 < (int)uVar5) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsImport()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                    ,0x55,L""), bVar17)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ConditionalCreateCellImport(this,param_1,~*puVar12 - (int)param_1->_padding_);
          }
        }
        else if ((int)(uVar5 - 1) < (param_1->ExportsView).ArrayNum) {
          ConditionalSerializeExport(this,param_1,*puVar12 - 1);
        }
        else {
          ConditionalCreateCellExport
                    (this,param_1,(*puVar12 - (param_1->ExportsView).ArrayNum) + -1);
        }
        iVar15 = iVar15 + -1;
        cVar11 = local_res18;
      } while (0 < iVar15);
    }
  }
  if (cVar11 == '\0') {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ProcessExternalReads @ 142331440

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

Type __thiscall
FAsyncPackage2::ProcessExternalReads
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,EExternalReadAction param_2)

{
  TArray<TFunction<bool___cdecl(double)>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  Type TVar6;
  uint uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_res8;
  
  if ((this->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)0xb) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == EAsyncPackageLoadingState2::WaitingForExternalReads"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2c88,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6 = (*pcVar3)();
    return TVar6;
  }
  if (param_2 == ExternalReadAction_Poll) {
    uVar12 = (undefined4)__real_bff0000000000000;
    uVar13 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
  }
  uVar10 = this->ExternalReadIndex;
  pTVar1 = &this->ExternalReadDependencies;
  if ((int)uVar10 < (this->ExternalReadDependencies).ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->ExternalReadDependencies).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar6 = (*pcVar3)();
        return TVar6;
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      local_res8 = CONCAT44(uVar13,uVar12);
      lVar11 = (longlong)(int)uVar10 * 0x30;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar2 + lVar11));
      pcVar3 = *(code **)(pFVar2 + lVar11);
      pFVar9 = *(FScriptContainerElement **)(pFVar2 + lVar11 + 0x10 + 0x18);
      if (pFVar9 == (FScriptContainerElement *)0x0) {
        pFVar9 = pFVar2 + lVar11 + 0x10;
      }
      uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
      cVar5 = (*pcVar3)(uVar8,&local_res8);
      if (cVar5 == '\0') {
        return TimeOut;
      }
      this->ExternalReadIndex = this->ExternalReadIndex + 1;
      uVar10 = this->ExternalReadIndex;
    } while ((int)uVar10 < (this->ExternalReadDependencies).ArrayNum);
  }
  DestructItems<TFunction<bool___cdecl(double)>,int>
            ((TFunction<bool___cdecl(double)> *)(pTVar1->AllocatorInstance).Data,
             (this->ExternalReadDependencies).ArrayNum);
  (this->ExternalReadDependencies).ArrayNum = 0;
  if ((this->ExternalReadDependencies).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&pTVar1->AllocatorInstance,0,&(this->ExternalReadDependencies).ArrayMax);
  }
  if (((this->PackageNodes).ArrayNum < 7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar6 = (*pcVar3)();
    return TVar6;
  }
  FEventLoadNode2::ReleaseBarrier((this->PackageNodes).DataPtr + 6,param_1);
  return Complete;
}

// ProcessLinkerLoadPackageSummary @ 142331640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __thiscall
FAsyncPackage2::ProcessLinkerLoadPackageSummary
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  FAsyncPackageLinkerLoadHeaderData *pFVar4;
  bool *pbVar5;
  longlong *plVar6;
  atomic<int> aVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FLinkerLoad *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FAsyncLoadingThread2 *this_00;
  FEventLoadNode2 *pFVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  FChannel *pFVar28;
  ForElementType<FPackageId> FVar29;
  FName FVar30;
  bool bVar31;
  EEventLoadNodeExecutionResult EVar32;
  ELinkerStatus EVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  TEventRef<unsigned_int> TVar39;
  FLinkerLoadState *pFVar40;
  ulong64 uVar41;
  ForElementType<int> FVar42;
  void *pvVar43;
  FLoadedPackageRef *this_01;
  FWriteBuffer *pFVar44;
  ForAnyElementType FVar45;
  ForElementType<FName> FVar46;
  wchar_t *pwVar47;
  longlong lVar48;
  ulonglong uVar49;
  uint uVar50;
  uint uVar51;
  ulonglong uVar52;
  FAsyncLoadingThreadState2 *pFVar53;
  FAsyncPackage2 *pFVar54;
  uint uVar55;
  ulonglong uVar56;
  TOptional<FAsyncPackage2::FLinkerLoadState> *this_02;
  TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_> *pTVar57;
  uint uVar58;
  bool bVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStackY_2548 [32];
  undefined1 local_24f4 [8];
  FProcessSummaryScope local_24ec [4];
  uint local_24e8;
  uint local_24e4;
  uint local_24e0;
  TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_> *local_24d8;
  FAsyncPackage2 *local_24d0;
  ForElementType<FPackageId> local_24c8;
  int iStack_24c0;
  uchar auStack_24bc [4];
  FName local_24b8;
  ulong64 local_24b0;
  longlong local_24a8;
  FAsyncLoadingThreadState2 *local_24a0;
  uchar local_2494 [44];
  FScriptContainerElement *local_2468;
  int iStack_2460;
  uchar auStack_245c [4];
  FName local_2458;
  FString local_2450;
  wchar_t *local_2438;
  uint uStack_2430;
  uchar auStack_242c [4];
  TStringView<wchar_t> local_2428;
  TStringView<wchar_t> local_2418;
  TArrayView<FExportMapEntry_const_,int> local_2408;
  TArrayView<FExportMapEntry_const_,int> *local_23f8;
  uchar auStack_23f0 [8];
  FPackageStoreEntry local_23e8;
  FName local_23c0;
  FName local_23b8 [2];
  FName local_23a8 [2];
  TStringView<wchar_t> local_2398;
  TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> local_2388;
  undefined4 *local_2378;
  longlong local_2370;
  ForElementType<int> local_2368;
  uint local_2160;
  uint local_215c;
  ForElementType<int> local_2158;
  uint local_1f50;
  uint local_1f4c;
  TStringBuilderBase<wchar_t> local_1f48;
  wchar_t local_1f28 [256];
  TStringBuilderBase<wchar_t> local_1d28;
  wchar_t local_1d08 [256];
  TStringBuilderBase<wchar_t> local_1b08;
  wchar_t local_1ae8 [256];
  ForElementType<FName> local_18e8;
  uint local_14e0;
  uint local_14dc;
  TArray<FPackageId,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> local_14d8;
  wchar_t local_10c8 [4];
  undefined8 auStack_10c0 [259];
  wchar_t local_8a8 [4];
  undefined8 auStack_8a0 [259];
  ulonglong local_88;
  undefined8 uStack_40;
  
  uStack_40 = 0x142331662;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2548;
  bVar59 = -1 < CpuChannel->Enabled;
  local_24d0 = this;
  local_24a0 = param_1;
  if (bVar59) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7050,"ProcessLinkerLoadPackageSummary",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1b8a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7050);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar39 = (TEventRef<unsigned_int>)((longlong)local_2494 + 8);
    local_2494[8] = '\0';
    local_2494[9] = '\0';
    local_2494[10] = '\0';
    local_2494[0xb] = '\0';
    local_2494[0xc] = '\0';
    local_2494[0xd] = '\0';
    local_2494[0xe] = '\0';
    local_2494[0xf] = '\0';
  }
  else {
    local_2494[0] = '\0';
    local_2494[1] = '\0';
    local_2494[2] = '\0';
    local_2494[3] = '\0';
    local_2494[4] = '\0';
    local_2494[5] = '\0';
    local_2494[6] = '\0';
    local_2494[7] = '\0';
    TVar39 = FStringTrace::GetNameRef(&local_23c0);
  }
  uVar52 = 0;
  uVar10 = *(undefined8 *)TVar39;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_2494[0x18] = '\0';
    local_2494[0x19] = '\0';
    local_2494[0x1a] = '\0';
    local_2494[0x1b] = '\0';
    local_2494[0x1c] = '\0';
    local_2494[0x1d] = '\0';
    local_2494[0x1e] = '\0';
    local_2494[0x1f] = '\0';
    TVar39 = (TEventRef<unsigned_int>)((longlong)local_2494 + 0x18);
  }
  else {
    local_2494[0x10] = '\0';
    local_2494[0x11] = '\0';
    local_2494[0x12] = '\0';
    local_2494[0x13] = '\0';
    local_2494[0x14] = '\0';
    local_2494[0x15] = '\0';
    local_2494[0x16] = '\0';
    local_2494[0x17] = '\0';
    TVar39 = FStringTrace::GetNameRef(local_23b8);
  }
  uVar11 = *(undefined8 *)TVar39;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_24c8 = (ForElementType<FPackageId>)&this->LinkerLoadState;
    local_2494[0x20] = '\0';
    local_2494[0x21] = '\0';
    local_2494[0x22] = '\0';
    local_2494[0x23] = '\0';
    local_2494[0x24] = '\0';
    local_2494[0x25] = '\0';
    local_2494[0x26] = '\0';
    local_2494[0x27] = '\0';
    TVar39 = (TEventRef<unsigned_int>)((longlong)local_2494 + 0x20);
  }
  else {
    local_24c8 = (ForElementType<FPackageId>)&this->LinkerLoadState;
    pFVar40 = TOptional<FAsyncPackage2::FLinkerLoadState>::operator->
                        ((TOptional<FAsyncPackage2::FLinkerLoadState> *)local_24c8);
    FPackagePath::GetPackageFName(&pFVar40->Linker->PackagePath);
    TVar39 = FStringTrace::GetNameRef(local_23a8);
  }
  this_02 = &this->LinkerLoadState;
  uVar12 = *(undefined8 *)TVar39;
  bVar18 = false;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    this_02 = &local_24d0->LinkerLoadState;
    local_24c8 = (ForElementType<FPackageId>)this_02;
  }
  else {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_2378);
    bVar18 = true;
    *local_2378 = (int)uVar10;
    local_2378[1] = (int)uVar11;
    local_2378[2] = (int)uVar12;
    *(undefined8 *)(local_2370 + 0x28) = *(undefined8 *)(local_2370 + 0x20);
  }
  pFVar54 = local_24d0;
  pFVar28 = AssetLoadTimeChannel;
  pFVar40 = TOptional<FAsyncPackage2::FLinkerLoadState>::operator->(this_02);
  FPackagePath::GetDebugName(&pFVar40->Linker->PackagePath,&local_2450);
  FVar45.Data = (FScriptContainerElement *)L"";
  if (local_2450.Data.ArrayNum != 0) {
    FVar45.Data = local_2450.Data.AllocatorInstance.Data;
  }
  if ((CpuChannel->Enabled < 0) || (pFVar28->Enabled < 0)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar45.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1b8d);
  }
  if (local_2450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2450.Data.AllocatorInstance.Data);
  }
  FLoadTimeProfilerTracePrivate::FProcessSummaryScope::FProcessSummaryScope(local_24ec,pFVar54);
  if ((this_02->bIsSet == false) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar31)) {
    pcVar17 = (code *)swi(3);
    EVar32 = (*pcVar17)();
    return EVar32;
  }
  EVar33 = FLinkerLoad::Tick((this_02->TypedValue).Linker,0.0,false,false,
                             (TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
                              *)0x0);
  if (EVar33 == LINKER_TimedOut) {
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("LinkerResult != FLinkerLoad::LINKER_TimedOut",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                        ,0x1b9b,L"");
    if (bVar31) {
      pcVar17 = (code *)swi(3);
      EVar32 = (*pcVar17)();
      return EVar32;
    }
  }
  else if (EVar33 == LINKER_Failed) {
    pFVar54->LoadStatus = FailedLinker;
  }
  if ((this_02->bIsSet == false) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar31)) {
    pcVar17 = (code *)swi(3);
    EVar32 = (*pcVar17)();
    return EVar32;
  }
  if (((!((this_02->TypedValue).Linker)->bHasFinishedInitialization) && (EVar33 != LINKER_Failed))
     && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                            ("LinkerLoadState->Linker->HasFinishedInitialization() || LinkerResult == FLinkerLoad::LINKER_Failed"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x1ba0,L""), bVar31)) {
    pcVar17 = (code *)swi(3);
    EVar32 = (*pcVar17)();
    return EVar32;
  }
  if (((pFVar54->LinkerLoadState).bIsSet == false) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar31)) {
    pcVar17 = (code *)swi(3);
    EVar32 = (*pcVar17)();
    return EVar32;
  }
  pTVar57 = &(pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap;
  local_24d8 = pTVar57;
  if ((this_02->bIsSet == false) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar31)) {
    pcVar17 = (code *)swi(3);
    EVar32 = (*pcVar17)();
    return EVar32;
  }
  local_2468 = (FScriptContainerElement *)
               &(pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.ArrayNum;
  iVar8 = *(int *)local_2468;
  uVar9 = (uint)((this_02->TypedValue).Linker)->_padding_;
  if (iVar8 < (int)uVar9) {
    iVar34 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar9 - iVar8,&pTVar57->AllocatorInstance,(int *)local_2468,
                        &(pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.
                         ArrayMax);
    DefaultConstructItems<FPackageObjectIndex,int>
              ((pTVar57->AllocatorInstance).Data + (longlong)iVar34 * 8,uVar9 - iVar8);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar8) {
      uVar50 = iVar8 - uVar9;
      if (((int)(uVar9 | uVar50) < 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      pTVar57 = local_24d8;
      if (uVar50 != 0) {
        TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (local_24d8,uVar9,uVar50);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar57->AllocatorInstance,pTVar57->ArrayNum,&pTVar57->ArrayMax);
      }
    }
  }
  iVar27 = _UNK_150631f4c;
  iVar26 = _UNK_150631f48;
  iVar34 = _UNK_150631f44;
  iVar8 = ___xmm_00000041000000410000004100000041;
  uVar25 = _UNK_150631f3c;
  uVar24 = _UNK_150631f38;
  uVar23 = _UNK_150631f34;
  uVar22 = ___xmm_0000001a0000001a0000001a0000001a;
  uVar21 = _UNK_150631dac;
  uVar20 = _UNK_150631da8;
  uVar50 = _UNK_150631da4;
  uVar9 = ___xmm_00000001000000010000000100000001;
  local_18e8.SecondaryData = (ForElementType<FName>)0x0;
  local_14e0 = 0;
  local_14dc = 0x80;
  local_14d8.AllocatorInstance.SecondaryData = (ForElementType<FPackageId>)0x0;
  local_14d8.ArrayNum = 0;
  local_14d8.ArrayMax = 0x80;
  local_24e8 = 0;
  local_24a8 = 0;
  local_24d8 = (TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_> *)0x0;
  uVar49 = uVar52;
  pFVar54 = local_24d0;
  do {
    pTVar57 = local_24d8;
    if ((this_02->bIsSet == false) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar31)) {
      pcVar17 = (code *)swi(3);
      EVar32 = (*pcVar17)();
      return EVar32;
    }
    uVar51 = (uint)uVar49;
    if ((int)((this_02->TypedValue).Linker)->_padding_ <= (int)uVar51) {
      if ((this_02->bIsSet == false) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      pTVar1 = &(this_02->TypedValue).LinkerLoadHeaderData.ExportMap;
      if ((this_02->bIsSet == false) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      piVar2 = &(this_02->TypedValue).LinkerLoadHeaderData.ExportMap.ArrayNum;
      iVar36 = *piVar2;
      uVar51 = (uint)((this_02->TypedValue).Linker)->_padding_;
      if (iVar36 < (int)uVar51) {
        iVar37 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x48,8,uVar51 - iVar36,&pTVar1->AllocatorInstance,piVar2,
                            &(this_02->TypedValue).LinkerLoadHeaderData.ExportMap.ArrayMax);
        DefaultConstructItems<FExportMapEntry,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar37 * 0x48,uVar51 - iVar36);
      }
      else {
        if ((int)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar51);
        }
        if ((int)uVar51 < iVar36) {
          uVar35 = iVar36 - uVar51;
          if (((int)(uVar51 | uVar35) < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          if (uVar35 != 0) {
            pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar51 * 0x48;
            iVar36 = (*piVar2 - uVar35) - uVar51;
            if (iVar36 != 0) {
              memmove(pFVar15,pFVar15 + (longlong)(int)uVar35 * 0x48,(longlong)iVar36 * 0x48);
            }
            *piVar2 = *piVar2 - uVar35;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,&pTVar1->AllocatorInstance,*piVar2,
                       &(this_02->TypedValue).LinkerLoadHeaderData.ExportMap.ArrayMax);
          }
        }
      }
      FVar29 = local_24c8;
      pFVar54 = local_24d0;
      iVar36 = __isa_available;
      uVar49 = 0;
      uVar51 = 0;
      local_24e0 = 0;
      local_24d8 = (TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_> *)0x0;
      uVar52 = uVar49;
      do {
        if ((*(bool *)((longlong)FVar29 + 0x50) == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        iVar37 = local_14d8.ArrayNum;
        uVar35 = (uint)uVar52;
        if ((int)((FLinkerLoadState *)FVar29)->Linker->_padding_ <= (int)uVar35) {
          local_24c8 = (ForElementType<FPackageId>)&local_14d8;
          if (local_14d8.AllocatorInstance.SecondaryData != (ForElementType<FPackageId>)0x0) {
            local_24c8 = local_14d8.AllocatorInstance.SecondaryData;
          }
          local_23e8.PackageExtension = Unspecified;
          local_23e8.LoaderType = Zen;
          local_23e8.ShaderMapHashes.DataPtr = (FSHAHash *)0x0;
          local_23e8.ShaderMapHashes.ArrayNum = 0;
          if ((local_14d8.ArrayNum < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          pFVar54 = local_24d0;
          iStack_24c0 = iVar37;
          local_23e8.ImportedPackageIds._12_1_ = auStack_24bc[0];
          local_23e8.ImportedPackageIds._13_1_ = auStack_24bc[1];
          local_23e8.ImportedPackageIds._14_1_ = auStack_24bc[2];
          local_23e8.ImportedPackageIds._15_1_ = auStack_24bc[3];
          local_23e8.ImportedPackageIds.ArrayNum = iVar37;
          local_23e8.ImportedPackageIds.DataPtr = (FPackageId *)local_24c8;
          FAsyncLoadingThread2::InitializeAsyncPackageFromPackageStore
                    (local_24d0->AsyncLoadingThread,local_24a0,(FIoBatch *)0x0,local_24d0,
                     &local_23e8);
          uVar9 = local_14e0;
          plVar6 = &(pFVar54->HeaderData)._padding_;
          lVar48 = (longlong)(int)local_14e0;
          iVar8 = *(int *)((longlong)&(pFVar54->HeaderData)._padding_ + 4);
          piVar2 = (int *)((longlong)&(pFVar54->HeaderData)._padding_ + 4);
          *(uint *)&(pFVar54->HeaderData)._padding_ = local_14e0;
          FVar46 = (ForElementType<FName>)&local_18e8;
          if (local_18e8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar46 = local_18e8.SecondaryData;
          }
          if ((local_14e0 == 0) && (iVar8 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_14e0,iVar8,(ForAnyElementType *)plVar6,local_14e0,piVar2);
            if (uVar9 != 0) {
              memcpy((void *)*plVar6,(void *)FVar46,lVar48 << 3);
            }
          }
          pFVar54 = local_24d0;
          if (((local_24d0->LinkerLoadState).bIsSet == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          local_24c8 = (ForElementType<FPackageId>)
                       (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.
                       ImportedPublicExportHashes.AllocatorInstance.Data;
          iVar8 = (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.
                  ImportedPublicExportHashes.ArrayNum;
          if ((iVar8 < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          (pFVar54->HeaderData)._padding_ = (longlong)local_24c8;
          (pFVar54->HeaderData)._padding_ = CONCAT44(auStack_24bc,iVar8);
          iStack_24c0 = iVar8;
          if (((pFVar54->LinkerLoadState).bIsSet == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          local_24c8 = (ForElementType<FPackageId>)
                       (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.
                       AllocatorInstance.Data;
          iVar8 = *(int *)local_2468;
          if ((iVar8 < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          (pFVar54->HeaderData)._padding_ = (longlong)local_24c8;
          (pFVar54->HeaderData)._padding_ = CONCAT44(auStack_24bc,iVar8);
          iStack_24c0 = iVar8;
          if (((pFVar54->LinkerLoadState).bIsSet == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          local_2468 = (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.
                       AllocatorInstance.Data;
          iVar8 = (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayNum;
          if ((iVar8 < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          pFVar53 = local_24a0;
          this_00 = pFVar54->AsyncLoadingThread;
          (pFVar54->HeaderData)._padding_ = (longlong)local_2468;
          (pFVar54->HeaderData)._padding_ = CONCAT44(auStack_245c,iVar8);
          iStack_2460 = iVar8;
          FAsyncLoadingThread2::FinishInitializeAsyncPackage(this_00,local_24a0,pFVar54);
          if ((pFVar54->Desc).bCanBeImported != false) {
            this_01 = FGlobalImportStore::FindPackageRefChecked
                                (&pFVar54->AsyncLoadingThread->GlobalImportStore,
                                 (FPackageId)(pFVar54->Desc).UPackageId.Id,
                                 (pFVar54->Desc).UPackageName);
            if (pFVar54->LoadStatus == Succeeded) {
              if (((pFVar54->LinkerLoadState).bIsSet == false) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar31)) {
                pcVar17 = (code *)swi(3);
                EVar32 = (*pcVar17)();
                return EVar32;
              }
              local_2408.DataPtr =
                   (FExportMapEntry *)
                   (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.
                   AllocatorInstance.Data;
              iVar8 = (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayNum;
              if ((iVar8 < 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar31)) {
                pcVar17 = (code *)swi(3);
                EVar32 = (*pcVar17)();
                return EVar32;
              }
              local_23f8 = &local_2408;
              auStack_23f0[0] = '\x01';
              auStack_23f0[1] = '\0';
              auStack_23f0[2] = '\0';
              auStack_23f0[3] = '\0';
              local_2388._12_1_ = auStack_23f0[4];
              local_2388._13_1_ = auStack_23f0[5];
              local_2388._14_1_ = auStack_23f0[6];
              local_2388._15_1_ = auStack_23f0[7];
              local_2388.ArrayNum = 1;
              local_2408.ArrayNum = iVar8;
              local_2388.DataPtr = local_23f8;
              FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
                        (&this_01->PublicExportMap,&local_2388);
              pFVar53 = local_24a0;
            }
            else {
              this_01->bHasFailed = true;
              pFVar53 = local_24a0;
            }
          }
          LOCK();
          pFVar54->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x3;
          UNLOCK();
          if (((pFVar54->PackageNodes).ArrayNum < 2) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          pFVar16 = (pFVar54->PackageNodes).DataPtr;
          if (((int)pFVar16[1].BarrierCount < 1) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BarrierCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                  ,0x16f5,L""), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          LOCK();
          paVar3 = &pFVar16[1].BarrierCount;
          aVar7 = *paVar3;
          *paVar3 = (atomic<int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar7 == (atomic<int>)0x1) {
            FEventLoadNode2::Fire(pFVar16 + 1,pFVar53);
          }
          if (local_14d8.AllocatorInstance.SecondaryData != (ForElementType<FPackageId>)0x0) {
            FMemory::Free((void *)local_14d8.AllocatorInstance.SecondaryData);
          }
          if (local_18e8.SecondaryData != (ForElementType<FName>)0x0) {
            FMemory::Free((void *)local_18e8.SecondaryData);
          }
          FLoadTimeProfilerTracePrivate::FProcessSummaryScope::~FProcessSummaryScope(local_24ec);
          if (bVar19) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar18) {
            lVar48 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (*(char *)(lVar48 + 0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pFVar44 = *(FWriteBuffer **)(lVar48 + 0x20);
            if ((int)pFVar44 - *(int *)&pFVar44->Cursor < 1) {
              pFVar44 = UE::Trace::Private::Writer_NextBuffer();
            }
            *pFVar44->Cursor = '\n';
            pFVar44->Cursor = pFVar44->Cursor + 1;
            pFVar44->Committed = pFVar44->Cursor;
          }
          if (bVar59) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return Complete;
        }
        if ((*(bool *)((longlong)FVar29 + 0x50) == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        pFVar13 = ((FLinkerLoadState *)FVar29)->Linker;
        local_24e4 = ~uVar35 >> 0x1f;
        uVar58 = uVar51;
        if ((int)uVar35 < (int)pFVar13->_padding_) {
          uVar58 = local_24e4;
        }
        if ((uVar58 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        if ((*(byte *)((longlong)local_24d8 * 0x68 + 0x1c + pFVar13->_padding_) & 0x10) != 0) {
          if (((pFVar54->LinkerLoadState).bIsSet == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          pbVar5 = &(pFVar54->LinkerLoadState).TypedValue.bContainsClasses;
          *pbVar5 = (bool)(*pbVar5 | 1);
        }
        local_2158.SecondaryData = (ForElementType<int>)0x0;
        local_1f4c = 0x80;
        local_1f50 = 0;
        uVar58 = uVar51;
        local_24f4._4_4_ = uVar35;
        if ((&local_2158 <= (ForElementType<int> *)(local_24f4 + 4)) &&
           (local_24f4 + 4 < &local_2158.SecondaryData)) {
          bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar31) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          uVar58 = local_1f50;
          if (local_1f50 == local_1f4c) {
            uVar58 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_2158,(int *)&local_1f4c);
          }
        }
        local_1f50 = uVar58 + 1;
        while( true ) {
          FVar42 = (ForElementType<int>)&local_2158;
          if (local_2158.SecondaryData != (ForElementType<int>)0x0) {
            FVar42 = local_2158.SecondaryData;
          }
          *(undefined4 *)((longlong)FVar42 + (longlong)(int)uVar58 * 4) = local_24f4._4_4_;
          if ((*(bool *)((longlong)FVar29 + 0x50) == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          lVar48 = (longlong)(int)local_24f4._4_4_;
          pFVar13 = ((FLinkerLoadState *)FVar29)->Linker;
          uVar58 = 0;
          uVar35 = uVar58;
          if ((int)local_24f4._4_4_ < (int)pFVar13->_padding_) {
            uVar35 = (uint)~local_24f4._4_4_ >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          if (*(int *)(lVar48 * 0x68 + 8 + pFVar13->_padding_) < 1) break;
          if ((*(bool *)((longlong)FVar29 + 0x50) == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          lVar48 = (longlong)(int)local_24f4._4_4_;
          pFVar13 = ((FLinkerLoadState *)FVar29)->Linker;
          if ((int)local_24f4._4_4_ < (int)pFVar13->_padding_) {
            uVar58 = (uint)~local_24f4._4_4_ >> 0x1f;
          }
          if ((uVar58 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          lVar14 = pFVar13->_padding_;
          if ((*(int *)(lVar48 * 0x68 + 8 + lVar14) < 1) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsExport()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x5b,L""), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          local_24f4._4_4_ = *(int *)(lVar48 * 0x68 + 8 + lVar14) - 1;
          FVar42 = (ForElementType<int>)&local_2158;
          if (local_2158.SecondaryData != (ForElementType<int>)0x0) {
            FVar42 = local_2158.SecondaryData;
          }
          if ((ulonglong)FVar42 <= (longlong)local_24f4 + 4U) {
            FVar42 = (ForElementType<int>)&local_2158;
            if (local_2158.SecondaryData != (ForElementType<int>)0x0) {
              FVar42 = local_2158.SecondaryData;
            }
            if ((local_24f4 + 4 < (undefined1 *)((longlong)FVar42 + (longlong)(int)local_1f4c * 4))
               && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar31)) {
              pcVar17 = (code *)swi(3);
              EVar32 = (*pcVar17)();
              return EVar32;
            }
          }
          uVar58 = local_1f50;
          if (local_1f50 == local_1f4c) {
            uVar58 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_2158,(int *)&local_1f4c);
          }
          local_1f50 = uVar58 + 1;
        }
        local_1d28.Base = local_1d08;
        local_1d28.CurPos = local_1d08;
        local_1d28.End = (wchar_t *)&local_1b08;
        local_1d28.bIsDynamic = false;
        local_1d28.bIsExternal = false;
        while (local_1f50 != 0) {
          if ((*(bool *)((longlong)FVar29 + 0x50) == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          pFVar13 = ((FLinkerLoadState *)FVar29)->Linker;
          if (((int)local_1f50 < 1) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          iVar37 = local_1f50 - 1;
          FVar42 = (ForElementType<int>)&local_2158;
          if (local_2158.SecondaryData != (ForElementType<int>)0x0) {
            FVar42 = local_2158.SecondaryData;
          }
          uVar35 = *(uint *)((longlong)FVar42 + (longlong)iVar37 * 4);
          FVar42 = (ForElementType<int>)&local_2158;
          if (local_2158.SecondaryData != (ForElementType<int>)0x0) {
            FVar42 = local_2158.SecondaryData;
          }
          pvVar43 = (void *)((longlong)FVar42 + (longlong)iVar37 * 4);
          iVar37 = (local_1f50 - iVar37) + -1;
          if (iVar37 != 0) {
            memmove(pvVar43,(void *)((longlong)pvVar43 + 4),(longlong)iVar37 << 2);
          }
          local_1f50 = local_1f50 - 1;
          uVar38 = uVar58;
          if ((int)uVar35 < (int)pFVar13->_padding_) {
            uVar38 = ~uVar35 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          uVar35 = ::FName::ToStringInternal
                             ((FName *)((longlong)(int)uVar35 * 0x68 + pFVar13->_padding_),local_8a8
                              ,0x40b);
          uVar41 = (ulong64)(int)uVar35;
          if (uVar35 != 0) {
            uVar52 = uVar49;
            if ((7 < uVar35) && (uVar52 = 0, 1 < iVar36)) {
              uVar52 = uVar49;
              do {
                auVar68 = pmovzxwd(in_XMM2,*(undefined8 *)(local_8a8 + uVar52));
                uVar38 = (int)uVar52 + 4;
                auVar64._0_4_ = auVar68._0_4_ - iVar8;
                auVar64._4_4_ = auVar68._4_4_ - iVar34;
                auVar64._8_4_ = auVar68._8_4_ - iVar26;
                auVar64._12_4_ = auVar68._12_4_ - iVar27;
                auVar66._0_4_ =
                     (~-(uint)(((auVar64._0_4_ < uVar22) * uVar22 |
                               (auVar64._0_4_ >= uVar22) * auVar64._0_4_) == auVar64._0_4_) & uVar9)
                     * 0x20 + auVar68._0_4_;
                auVar66._4_4_ =
                     (~-(uint)(((auVar64._4_4_ < uVar23) * uVar23 |
                               (auVar64._4_4_ >= uVar23) * auVar64._4_4_) == auVar64._4_4_) & uVar50
                     ) * 0x20 + auVar68._4_4_;
                auVar66._8_4_ =
                     (~-(uint)(((auVar64._8_4_ < uVar24) * uVar24 |
                               (auVar64._8_4_ >= uVar24) * auVar64._8_4_) == auVar64._8_4_) & uVar20
                     ) * 0x20 + auVar68._8_4_;
                auVar66._12_4_ =
                     (~-(uint)(((auVar64._12_4_ < uVar25) * uVar25 |
                               (auVar64._12_4_ >= uVar25) * auVar64._12_4_) == auVar64._12_4_) &
                     uVar21) * 0x20 + auVar68._12_4_;
                auVar66 = pshufhw(auVar66,auVar66,0xd8);
                auVar66 = pshuflw(auVar64,auVar66,0xd8);
                auVar69._0_8_ = CONCAT44(auVar66._8_4_,auVar66._0_4_);
                auVar69._8_4_ = auVar66._4_4_;
                auVar69._12_4_ = auVar66._12_4_;
                *(undefined8 *)(local_8a8 + uVar52) = auVar69._0_8_;
                uVar55 = (int)uVar52 + 8;
                uVar52 = (ulonglong)uVar55;
                auVar66 = pmovzxwd(auVar69,*(undefined8 *)(local_8a8 + uVar38));
                auVar65._0_4_ = auVar66._0_4_ - iVar8;
                auVar65._4_4_ = auVar66._4_4_ - iVar34;
                auVar65._8_4_ = auVar66._8_4_ - iVar26;
                auVar65._12_4_ = auVar66._12_4_ - iVar27;
                auVar68._0_4_ =
                     (~-(uint)(((auVar65._0_4_ < uVar22) * uVar22 |
                               (auVar65._0_4_ >= uVar22) * auVar65._0_4_) == auVar65._0_4_) & uVar9)
                     * 0x20 + auVar66._0_4_;
                auVar68._4_4_ =
                     (~-(uint)(((auVar65._4_4_ < uVar23) * uVar23 |
                               (auVar65._4_4_ >= uVar23) * auVar65._4_4_) == auVar65._4_4_) & uVar50
                     ) * 0x20 + auVar66._4_4_;
                auVar68._8_4_ =
                     (~-(uint)(((auVar65._8_4_ < uVar24) * uVar24 |
                               (auVar65._8_4_ >= uVar24) * auVar65._8_4_) == auVar65._8_4_) & uVar20
                     ) * 0x20 + auVar66._8_4_;
                auVar68._12_4_ =
                     (~-(uint)(((auVar65._12_4_ < uVar25) * uVar25 |
                               (auVar65._12_4_ >= uVar25) * auVar65._12_4_) == auVar65._12_4_) &
                     uVar21) * 0x20 + auVar66._12_4_;
                auVar66 = pshufhw(auVar68,auVar68,0xd8);
                auVar66 = pshuflw(auVar65,auVar66,0xd8);
                in_XMM2._0_8_ = CONCAT44(auVar66._8_4_,auVar66._0_4_);
                in_XMM2._8_4_ = auVar66._4_4_;
                in_XMM2._12_4_ = auVar66._12_4_;
                *(undefined8 *)(local_8a8 + uVar38) = in_XMM2._0_8_;
              } while (uVar55 < (uVar35 & 0xfffffff8));
              if (uVar35 <= uVar55) goto LAB_142333321;
            }
            uVar56 = (ulonglong)(uVar35 - (int)uVar52);
            pwVar47 = local_8a8 + uVar52;
            do {
              *pwVar47 = (-(ushort)((ushort)*pwVar47 - 0x41 < 0x1a) & 0x20) + *pwVar47;
              uVar56 = uVar56 - 1;
              pwVar47 = pwVar47 + 1;
            } while (uVar56 != 0);
          }
LAB_142333321:
          if (local_1d28.End < (TStringBuilderBase<wchar_t> *)(local_1d28.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1d28,1);
          }
          *local_1d28.CurPos = L'/';
          local_1d28.CurPos = local_1d28.CurPos + 1;
          if (local_1d28.End < (TStringBuilderBase<wchar_t> *)(local_1d28.CurPos + uVar41)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1d28,uVar41);
          }
          if (uVar35 != 0) {
            pvVar43 = FGenericPlatformString::Memcpy(local_1d28.CurPos,local_8a8,uVar41 * 2);
            local_1d28.CurPos = (wchar_t *)(uVar41 * 2 + (longlong)pvVar43);
          }
        }
        uVar41 = CityHash64((char *)(local_1d28.Base + 1),
                            (int)((longlong)local_1d28.CurPos - (longlong)local_1d28.Base >> 1) * 2
                            - 2);
        if (((pFVar54->LinkerLoadState).bIsSet == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        uVar35 = local_24e0;
        if ((int)local_24e0 <
            (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.ArrayNum) {
          uVar58 = local_24e4;
        }
        if ((uVar58 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        *(ulong64 *)
         ((pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ExportMap.AllocatorInstance.
          Data + (longlong)local_24d8 * 0x48 + 0x38) = uVar41;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1d28);
        if (local_2158.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_2158.SecondaryData);
        }
        local_24e0 = uVar35 + 1;
        uVar52 = (ulonglong)local_24e0;
        local_24d8 = (TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_> *)
                     ((longlong)local_24d8 + 1);
      } while( true );
    }
    if ((this_02->bIsSet == false) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar31)) {
      pcVar17 = (code *)swi(3);
      EVar32 = (*pcVar17)();
      return EVar32;
    }
    uVar58 = ~uVar51 >> 0x1f;
    uVar35 = 0;
    if ((int)uVar51 < (int)((this_02->TypedValue).Linker)->_padding_) {
      uVar35 = uVar58;
    }
    local_24e0 = uVar58;
    if ((uVar35 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar17 = (code *)swi(3);
      EVar32 = (*pcVar17)();
      return EVar32;
    }
    local_2368.SecondaryData = (ForElementType<int>)0x0;
    local_215c = 0x80;
    uVar38 = 0;
    local_2160 = 0;
    uVar35 = uVar38;
    local_24f4._0_4_ = uVar51;
    if ((&local_2368 <= (ForElementType<int> *)local_24f4) &&
       (local_24f4 < &local_2368.SecondaryData)) {
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar31) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      uVar35 = local_2160;
      if (local_2160 == local_215c) {
        uVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_2368,(int *)&local_215c);
      }
    }
    local_2160 = uVar35 + 1;
    while( true ) {
      FVar42 = (ForElementType<int>)&local_2368;
      if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
        FVar42 = local_2368.SecondaryData;
      }
      *(undefined4 *)((longlong)FVar42 + (longlong)(int)uVar35 * 4) = local_24f4._0_4_;
      if ((this_02->bIsSet == false) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      lVar48 = (longlong)(int)local_24f4._0_4_;
      pFVar13 = (this_02->TypedValue).Linker;
      uVar51 = uVar38;
      if ((int)local_24f4._0_4_ < (int)pFVar13->_padding_) {
        uVar51 = (uint)~local_24f4._0_4_ >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      uVar51 = 0;
      if (-1 < *(int *)(lVar48 * 0x38 + 8 + pFVar13->_padding_)) break;
      if ((this_02->bIsSet == false) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      uVar35 = uVar38;
      if ((int)local_24f4._0_4_ < (int)((this_02->TypedValue).Linker)->_padding_) {
        uVar35 = (uint)~local_24f4._0_4_ >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      if ((this_02->bIsSet == false) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      lVar48 = (longlong)(int)local_24f4._0_4_;
      pFVar13 = (this_02->TypedValue).Linker;
      if ((int)local_24f4._0_4_ < (int)pFVar13->_padding_) {
        uVar51 = (uint)~local_24f4._0_4_ >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      lVar14 = pFVar13->_padding_;
      if ((-1 < *(int *)(lVar48 * 0x38 + 8 + lVar14)) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsImport()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x55,L""), bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      local_24f4._0_4_ = ~*(uint *)(lVar48 * 0x38 + 8 + lVar14);
      FVar42 = (ForElementType<int>)&local_2368;
      if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
        FVar42 = local_2368.SecondaryData;
      }
      if ((ulonglong)FVar42 <= local_24f4) {
        FVar42 = (ForElementType<int>)&local_2368;
        if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
          FVar42 = local_2368.SecondaryData;
        }
        if ((local_24f4 < (undefined1 *)((longlong)FVar42 + (longlong)(int)local_215c * 4)) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
      }
      uVar35 = local_2160;
      if (local_2160 == local_215c) {
        uVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_2368,(int *)&local_215c);
      }
      local_2160 = uVar35 + 1;
    }
    uVar35 = uVar51;
    if ((int)(local_2160 - 1) < (int)local_2160) {
      uVar35 = ~(local_2160 - 1) >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar17 = (code *)swi(3);
      EVar32 = (*pcVar17)();
      return EVar32;
    }
    FVar42 = (ForElementType<int>)&local_2368;
    if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
      FVar42 = local_2368.SecondaryData;
    }
    uVar35 = *(uint *)((longlong)FVar42 + (longlong)(int)(local_2160 - 1) * 4);
    if ((this_02->bIsSet == false) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar31)) {
      pcVar17 = (code *)swi(3);
      EVar32 = (*pcVar17)();
      return EVar32;
    }
    pFVar13 = (this_02->TypedValue).Linker;
    uVar38 = uVar51;
    if ((int)uVar35 < (int)pFVar13->_padding_) {
      uVar38 = ~uVar35 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar17 = (code *)swi(3);
      EVar32 = (*pcVar17)();
      return EVar32;
    }
    local_24b8 = *(FName *)((longlong)(int)uVar35 * 0x38 + pFVar13->_padding_);
    local_2438 = local_10c8;
    uStack_2430 = ::FName::ToStringInternal(&local_24b8,local_10c8,0x40b);
    local_2398._12_1_ = auStack_242c[0];
    local_2398._13_1_ = auStack_242c[1];
    local_2398._14_1_ = auStack_242c[2];
    local_2398._15_1_ = auStack_242c[3];
    local_2398.Size = uStack_2430;
    local_2398.DataPtr = local_2438;
    bVar31 = FPackageName::IsScriptPackage(&local_2398);
    uVar55 = local_24e0;
    uVar38 = local_24e8;
    if (bVar31) {
      local_1b08.Base = local_1ae8;
      local_1b08.CurPos = local_1ae8;
      local_1b08.End = (wchar_t *)&local_18e8;
      local_1b08.bIsDynamic = false;
      local_1b08.bIsExternal = false;
      while (local_2160 != 0) {
        if ((this_02->bIsSet == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        pFVar13 = (this_02->TypedValue).Linker;
        if (((int)local_2160 < 1) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        iVar36 = local_2160 - 1;
        FVar42 = (ForElementType<int>)&local_2368;
        if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
          FVar42 = local_2368.SecondaryData;
        }
        uVar35 = *(uint *)((longlong)FVar42 + (longlong)iVar36 * 4);
        FVar42 = (ForElementType<int>)&local_2368;
        if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
          FVar42 = local_2368.SecondaryData;
        }
        pvVar43 = (void *)((longlong)FVar42 + (longlong)iVar36 * 4);
        iVar36 = (local_2160 - iVar36) + -1;
        if (iVar36 != 0) {
          memmove(pvVar43,(void *)((longlong)pvVar43 + 4),(longlong)iVar36 << 2);
        }
        local_2160 = local_2160 - 1;
        uVar58 = uVar51;
        if ((int)uVar35 < (int)pFVar13->_padding_) {
          uVar58 = ~uVar35 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        local_2428.DataPtr = local_10c8;
        local_2428.Size =
             ::FName::ToStringInternal
                       ((FName *)((longlong)(int)uVar35 * 0x38 + pFVar13->_padding_),local_10c8,
                        0x40b);
        if ((((int)((longlong)local_1b08.CurPos - (longlong)local_1b08.Base >> 1) != 0) &&
            (local_1b08.CurPos[-1] != L'/')) && (local_1b08.CurPos[-1] != L'\\')) {
          if (local_1b08.End < (ForElementType<FName> *)(local_1b08.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1b08,1);
          }
          *local_1b08.CurPos = L'/';
          local_1b08.CurPos = local_1b08.CurPos + 1;
        }
        operator<<<wchar_t,TStringView<wchar_t>_&>(&local_1b08,&local_2428);
        local_2418.DataPtr = local_1b08.Base;
        local_2418.Size = (int)((longlong)local_1b08.CurPos - (longlong)local_1b08.Base >> 1);
        uVar41 = FPackageObjectIndex::GenerateImportHashFromObjectPath(&local_2418);
        pFVar54 = local_24d0;
        if (((local_24d0->LinkerLoadState).bIsSet == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        uVar35 = uVar51;
        if ((int)uVar38 <
            (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.ArrayNum) {
          uVar35 = uVar55;
        }
        if ((uVar35 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        *(ulong64 *)
         ((pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.AllocatorInstance.
          Data + (longlong)local_24d8) = uVar41 | 0x4000000000000000;
        pTVar57 = local_24d8;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b08);
      lVar48 = local_24a8;
      uVar38 = local_24e8;
    }
    else {
      FPackageId::FromName(&local_2458);
      local_24e4 = TArray<FPackageId,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::
                   AddUniqueImpl<FPackageId_const_&>(&local_14d8,(FPackageId *)&local_2458);
      if (local_24e4 == local_14e0) {
        if (local_14e0 == local_14dc) {
          local_14e0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                                 (0x408,&local_18e8,(int *)&local_14dc);
        }
        lVar48 = (longlong)(int)local_14e0;
        local_14e0 = local_14e0 + 1;
        FVar46 = (ForElementType<FName>)&local_18e8;
        if (local_18e8.SecondaryData != (ForElementType<FName>)0x0) {
          FVar46 = local_18e8.SecondaryData;
        }
        *(undefined8 *)((longlong)FVar46 + lVar48 * 8) = 0;
      }
      FVar30 = local_24b8;
      uVar38 = uVar51;
      if ((int)local_24e4 < (int)local_14e0) {
        uVar38 = ~local_24e4 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar17 = (code *)swi(3);
        EVar32 = (*pcVar17)();
        return EVar32;
      }
      FVar46 = (ForElementType<FName>)&local_18e8;
      if (local_18e8.SecondaryData != (ForElementType<FName>)0x0) {
        FVar46 = local_18e8.SecondaryData;
      }
      *(FName *)((longlong)FVar46 + (longlong)(int)local_24e4 * 8) = FVar30;
      lVar48 = local_24a8;
      uVar38 = local_24e8;
      if (local_24e8 != uVar35) {
        if (((int)local_2160 < 1) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        FVar42 = (ForElementType<int>)&local_2368;
        if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
          FVar42 = local_2368.SecondaryData;
        }
        pvVar43 = (void *)((longlong)FVar42 + (longlong)(int)(local_2160 - 1) * 4);
        iVar36 = (local_2160 - (local_2160 - 1)) + -1;
        if (iVar36 != 0) {
          memmove(pvVar43,(void *)((longlong)pvVar43 + 4),(longlong)iVar36 << 2);
        }
        iVar36 = __isa_available;
        local_1f48.bIsDynamic = false;
        local_1f48.bIsExternal = false;
        local_1f48.Base = local_1f28;
        local_2160 = local_2160 - 1;
        local_1f48.CurPos = local_1f28;
        local_1f48.End = (wchar_t *)&local_1d28;
        while (local_2160 != 0) {
          if ((this_02->bIsSet == false) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          pFVar13 = (this_02->TypedValue).Linker;
          if (((int)local_2160 < 1) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          iVar37 = local_2160 - 1;
          FVar42 = (ForElementType<int>)&local_2368;
          if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
            FVar42 = local_2368.SecondaryData;
          }
          uVar35 = *(uint *)((longlong)FVar42 + (longlong)iVar37 * 4);
          FVar42 = (ForElementType<int>)&local_2368;
          if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
            FVar42 = local_2368.SecondaryData;
          }
          pvVar43 = (void *)((longlong)FVar42 + (longlong)iVar37 * 4);
          iVar37 = (local_2160 - iVar37) + -1;
          if (iVar37 != 0) {
            memmove(pvVar43,(void *)((longlong)pvVar43 + 4),(longlong)iVar37 << 2);
          }
          local_2160 = local_2160 - 1;
          uVar38 = uVar51;
          if ((int)uVar35 < (int)pFVar13->_padding_) {
            uVar38 = ~uVar35 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar17 = (code *)swi(3);
            EVar32 = (*pcVar17)();
            return EVar32;
          }
          uVar35 = ::FName::ToStringInternal
                             ((FName *)((longlong)(int)uVar35 * 0x38 + pFVar13->_padding_),
                              local_10c8,0x40b);
          uVar41 = (ulong64)(int)uVar35;
          if (uVar35 != 0) {
            uVar49 = uVar52;
            if ((7 < uVar35) && (uVar49 = 0, 1 < iVar36)) {
              uVar49 = uVar52;
              do {
                auVar66 = pmovzxwd(in_XMM2,*(undefined8 *)(local_10c8 + uVar49));
                uVar38 = (int)uVar49 + 4;
                auVar62._0_4_ = auVar66._0_4_ - iVar8;
                auVar62._4_4_ = auVar66._4_4_ - iVar34;
                auVar62._8_4_ = auVar66._8_4_ - iVar26;
                auVar62._12_4_ = auVar66._12_4_ - iVar27;
                auVar60._0_4_ =
                     (~-(uint)(((auVar62._0_4_ < uVar22) * uVar22 |
                               (auVar62._0_4_ >= uVar22) * auVar62._0_4_) == auVar62._0_4_) & uVar9)
                     * 0x20 + auVar66._0_4_;
                auVar60._4_4_ =
                     (~-(uint)(((auVar62._4_4_ < uVar23) * uVar23 |
                               (auVar62._4_4_ >= uVar23) * auVar62._4_4_) == auVar62._4_4_) & uVar50
                     ) * 0x20 + auVar66._4_4_;
                auVar60._8_4_ =
                     (~-(uint)(((auVar62._8_4_ < uVar24) * uVar24 |
                               (auVar62._8_4_ >= uVar24) * auVar62._8_4_) == auVar62._8_4_) & uVar20
                     ) * 0x20 + auVar66._8_4_;
                auVar60._12_4_ =
                     (~-(uint)(((auVar62._12_4_ < uVar25) * uVar25 |
                               (auVar62._12_4_ >= uVar25) * auVar62._12_4_) == auVar62._12_4_) &
                     uVar21) * 0x20 + auVar66._12_4_;
                auVar66 = pshufhw(auVar60,auVar60,0xd8);
                auVar66 = pshuflw(auVar62,auVar66,0xd8);
                auVar67._0_8_ = CONCAT44(auVar66._8_4_,auVar66._0_4_);
                auVar67._8_4_ = auVar66._4_4_;
                auVar67._12_4_ = auVar66._12_4_;
                *(undefined8 *)(local_10c8 + uVar49) = auVar67._0_8_;
                uVar55 = (int)uVar49 + 8;
                uVar49 = (ulonglong)uVar55;
                auVar66 = pmovzxwd(auVar67,*(undefined8 *)(local_10c8 + uVar38));
                auVar63._0_4_ = auVar66._0_4_ - iVar8;
                auVar63._4_4_ = auVar66._4_4_ - iVar34;
                auVar63._8_4_ = auVar66._8_4_ - iVar26;
                auVar63._12_4_ = auVar66._12_4_ - iVar27;
                auVar61._0_4_ =
                     (~-(uint)(((auVar63._0_4_ < uVar22) * uVar22 |
                               (auVar63._0_4_ >= uVar22) * auVar63._0_4_) == auVar63._0_4_) & uVar9)
                     * 0x20 + auVar66._0_4_;
                auVar61._4_4_ =
                     (~-(uint)(((auVar63._4_4_ < uVar23) * uVar23 |
                               (auVar63._4_4_ >= uVar23) * auVar63._4_4_) == auVar63._4_4_) & uVar50
                     ) * 0x20 + auVar66._4_4_;
                auVar61._8_4_ =
                     (~-(uint)(((auVar63._8_4_ < uVar24) * uVar24 |
                               (auVar63._8_4_ >= uVar24) * auVar63._8_4_) == auVar63._8_4_) & uVar20
                     ) * 0x20 + auVar66._8_4_;
                auVar61._12_4_ =
                     (~-(uint)(((auVar63._12_4_ < uVar25) * uVar25 |
                               (auVar63._12_4_ >= uVar25) * auVar63._12_4_) == auVar63._12_4_) &
                     uVar21) * 0x20 + auVar66._12_4_;
                auVar66 = pshufhw(auVar61,auVar61,0xd8);
                auVar66 = pshuflw(auVar63,auVar66,0xd8);
                in_XMM2._0_8_ = CONCAT44(auVar66._8_4_,auVar66._0_4_);
                in_XMM2._8_4_ = auVar66._4_4_;
                in_XMM2._12_4_ = auVar66._12_4_;
                *(undefined8 *)(local_10c8 + uVar38) = in_XMM2._0_8_;
              } while (uVar55 < (uVar35 & 0xfffffff8));
              if (uVar35 <= uVar55) goto LAB_142332851;
            }
            uVar56 = (ulonglong)(uVar35 - (int)uVar49);
            pwVar47 = local_10c8 + uVar49;
            do {
              *pwVar47 = (-(ushort)((ushort)*pwVar47 - 0x41 < 0x1a) & 0x20) + *pwVar47;
              uVar56 = uVar56 - 1;
              pwVar47 = pwVar47 + 1;
            } while (uVar56 != 0);
          }
LAB_142332851:
          if (local_1f48.End < (TStringBuilderBase<wchar_t> *)(local_1f48.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1f48,1);
          }
          *local_1f48.CurPos = L'/';
          local_1f48.CurPos = local_1f48.CurPos + 1;
          if (local_1f48.End < (TStringBuilderBase<wchar_t> *)(local_1f48.CurPos + uVar41)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1f48,uVar41);
          }
          pTVar57 = local_24d8;
          if (uVar35 != 0) {
            pvVar43 = FGenericPlatformString::Memcpy(local_1f48.CurPos,local_10c8,uVar41 * 2);
            local_1f48.CurPos = (wchar_t *)((longlong)pvVar43 + uVar41 * 2);
            pTVar57 = local_24d8;
          }
        }
        if (((pFVar54->LinkerLoadState).bIsSet == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        uVar49 = CONCAT44(local_24e4,
                          (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.
                          ImportedPublicExportHashes.ArrayNum);
        if (((local_24e4 & 0xc0000000) != 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("!(Id & TypeMask)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                                ,0x6f,L""), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        if (((pFVar54->LinkerLoadState).bIsSet == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        uVar38 = local_24e8;
        if ((int)local_24e8 <
            (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.ArrayNum) {
          uVar51 = uVar58;
        }
        if ((uVar51 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        lVar48 = local_24a8;
        *(ulonglong *)
         ((pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportMap.AllocatorInstance.
          Data + local_24a8 * 8) = uVar49 | 0x8000000000000000;
        if (((pFVar54->LinkerLoadState).bIsSet == false) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        pFVar4 = &(pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData;
        local_24b0 = CityHash64((char *)(local_1f48.Base + 1),
                                (int)((longlong)local_1f48.CurPos - (longlong)local_1f48.Base >> 1)
                                * 2 - 2);
        pFVar15 = (pFVar4->ImportedPublicExportHashes).AllocatorInstance.Data;
        if (((pFVar15 <= (FScriptContainerElement *)&local_24b0) &&
            ((FScriptContainerElement *)&local_24b0 <
             pFVar15 + (longlong)
                       (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.
                       ImportedPublicExportHashes.ArrayMax * 8)) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar31)) {
          pcVar17 = (code *)swi(3);
          EVar32 = (*pcVar17)();
          return EVar32;
        }
        iVar36 = (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.
                 ImportedPublicExportHashes.ArrayNum;
        piVar2 = &(pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.
                  ImportedPublicExportHashes.ArrayMax;
        if (iVar36 == *piVar2) {
          iVar36 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pFVar4,piVar2);
        }
        (pFVar54->LinkerLoadState).TypedValue.LinkerLoadHeaderData.ImportedPublicExportHashes.
        ArrayNum = iVar36 + 1;
        *(ulong64 *)
         ((pFVar4->ImportedPublicExportHashes).AllocatorInstance.Data + (longlong)iVar36 * 8) =
             local_24b0;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1f48);
      }
    }
    if (local_2368.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_2368.SecondaryData);
    }
    local_24e8 = uVar38 + 1;
    uVar49 = (ulonglong)local_24e8;
    local_24a8 = lVar48 + 1;
    local_24d8 = (TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_> *)((longlong)pTVar57 + 8);
  } while( true );
}

// Release @ 1423389d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::Release(FAsyncPackage2 *this)

{
  TMpscQueue<FAsyncPackage2_*,FMemory> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar4;
  FAsyncLoadingThread2 *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar8;
  
  LOCK();
  paVar2 = &this->RefCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + -1);
  UNLOCK();
  if ((int)aVar3 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldRefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x2b76,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (aVar3 == (atomic<int>)0x1) {
    pFVar5 = this->AsyncLoadingThread;
    aVar8 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
    *(undefined8 *)aVar8 = 0;
    *(FAsyncPackage2 **)((longlong)aVar8 + 8) = this;
    LOCK();
    pTVar1 = &pFVar5->DeferredDeletePackages;
    aVar4 = pTVar1->Head;
    pTVar1->Head = aVar8;
    UNLOCK();
    *(atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *)aVar4 = aVar8;
    FZenaphore::NotifyOne(&pFVar5->AltZenaphore);
  }
  return;
}

// ResolveLinkerLoadImports @ 14233b970

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncPackage2::ResolveLinkerLoadImports(FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  FAsyncPackage2 *pFVar2;
  FPackageObjectIndex FVar3;
  FGlobalImportStore *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FPublicExportKey *pFVar10;
  FUObjectItem *pFVar11;
  FLinkerLoad *pFVar12;
  FName FVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  ForElementType<FSetElementId> FVar16;
  longlong lVar17;
  UObject *this_01;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  TArrayView<FPackageId_const_,int> local_148 [2];
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FPublicExportKey local_48;
  
  if (((byte)this->AsyncPackageLoadingState < 7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState >= EAsyncPackageLoadingState2::WaitingForLinkerLoadDependencies"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1c73,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((this->LinkerLoadState).TypedValue.bIsCurrentlyResolvingImports != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LinkerLoadState->bIsCurrentlyResolvingImports",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1c75,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((this->LinkerLoadState).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = (this->LinkerLoadState).TypedValue.bIsCurrentlyResolvingImports;
  uVar18 = 0;
  (this->LinkerLoadState).TypedValue.bIsCurrentlyResolvingImports = true;
  lVar20 = (longlong)(this->Data).ImportedAsyncPackages.ArrayNum;
  if (0 < lVar20) {
    lVar17 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar18 < (this->Data).ImportedAsyncPackages.ArrayNum) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (this->Data).ImportedAsyncPackages.DataPtr[lVar17];
      if (pFVar2 != (FAsyncPackage2 *)0x0) {
        if ((pFVar2->LinkerLoadState).bIsSet == false) {
          if ((byte)pFVar2->AsyncPackageLoadingState < 0xc) {
            pFVar14 = (param_1->PackagesOnStack).AllocatorInstance.Data;
            pFVar1 = pFVar14 + (longlong)(param_1->PackagesOnStack).ArrayNum * 8;
            for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 8) {
              if (*(FAsyncPackage2 **)pFVar14 == pFVar2) goto LAB_14233bc24;
            }
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ThreadState.PackagesOnStack.Contains(ImportedPackage)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x1c90,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
LAB_14233bc24:
            if (2 < (byte)LogStreaming._0_1_) {
              ::FName::ToString(&(pFVar2->Desc).UPackageName,&local_f8);
              ::FName::ToString(&(this->Desc).UPackageName,&local_108);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              FVar15.Data = local_f8.Data.AllocatorInstance.Data;
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
                FVar15.Data = local_f8.Data.AllocatorInstance.Data;
              }
              goto LAB_14233bc99;
            }
          }
        }
        else if ((byte)pFVar2->AsyncPackageLoadingState < 7) {
          pFVar14 = (param_1->PackagesOnStack).AllocatorInstance.Data;
          pFVar1 = pFVar14 + (longlong)(param_1->PackagesOnStack).ArrayNum * 8;
          for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 8) {
            if (*(FAsyncPackage2 **)pFVar14 == pFVar2) goto LAB_14233bb54;
          }
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadState.PackagesOnStack.Contains(ImportedPackage)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x1c83,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_14233bb54:
          if (2 < (byte)LogStreaming._0_1_) {
            ::FName::ToString(&(pFVar2->Desc).UPackageName,&local_118);
            ::FName::ToString(&(this->Desc).UPackageName,&local_128);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            FVar15.Data = local_118.Data.AllocatorInstance.Data;
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
              FVar15.Data = local_118.Data.AllocatorInstance.Data;
            }
LAB_14233bc99:
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 1;
    } while (lVar17 < lVar20);
  }
  lVar20 = (this->HeaderData)._padding_;
LAB_14233bcd6:
  do {
    while( true ) {
      do {
        if (((this->LinkerLoadState).bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((int)lVar20 <= (this->LinkerLoadState).TypedValue.CreateImportIndex) {
          (this->LinkerLoadState).TypedValue.bIsCurrentlyResolvingImports = bVar5;
          return true;
        }
        if (((this->LinkerLoadState).bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar18 = (this->LinkerLoadState).TypedValue.CreateImportIndex;
        (this->LinkerLoadState).TypedValue.CreateImportIndex = uVar18 + 1;
        uVar8 = 0;
        if ((int)uVar18 < (int)(this->HeaderData)._padding_) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FVar3.TypeAndId = *(ulong64 *)((this->HeaderData)._padding_ + (longlong)(int)uVar18 * 8);
      } while (FVar3.TypeAndId == 0xffffffffffffffff);
      uVar19 = FVar3.TypeAndId >> 0x3e;
      if (uVar19 == 1) {
        this_01 = FGlobalImportStore::FindScriptImportObject
                            ((this->ImportStore).GlobalImportStore,FVar3);
      }
      else {
        if ((uVar19 != 2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GlobalIndex.IsImport()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x919,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_01 = (UObject *)0x0;
        if (uVar19 == 2) {
          local_148[0].DataPtr = (this->HeaderData).ImportedPackageIds.DataPtr;
          this_00 = (this->ImportStore).GlobalImportStore;
          local_148[0].ArrayNum = (this->HeaderData).ImportedPackageIds.ArrayNum;
          pFVar10 = FPublicExportKey::FromPackageImport
                              (&local_48,FVar3,local_148,
                               (TArrayView<unsigned___int64_const_,int> *)
                               &(this->HeaderData)._padding_);
          SRWLock = &this_00->PackagesLock;
          AcquireSRWLockShared((PSRWLOCK)SRWLock);
          this_01 = FGlobalImportStore::FindPublicExportObjectUncheckedNoLock(this_00,pFVar10);
          ReleaseSRWLockShared((PSRWLOCK)SRWLock);
          if (this_01 != (UObject *)0x0) {
            iVar9 = *(int *)&this_01->field_0xc;
            if ((iVar9 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
              pFVar11 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
            }
            else {
              pFVar11 = (FUObjectItem *)0x0;
            }
            if (((uint)((ulonglong)(pFVar11->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this_01,&local_e8,(UObject *)0x0,None);
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!Object || !Object->IsUnreachable()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                 ,0x85e,L"%s");
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
          }
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("GlobalIndex.IsNull()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x92d,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
      }
      if (((this->LinkerLoadState).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar12 = (this->LinkerLoadState).TypedValue.Linker;
      uVar8 = 0;
      if ((int)uVar18 < (int)pFVar12->_padding_) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar17 = pFVar12->_padding_ + (longlong)(int)uVar18 * 0x38;
      if (*(longlong *)(lVar17 + 0x28) != 0) goto LAB_14233c1e1;
      if (this_01 == (UObject *)0x0) goto LAB_14233c1f0;
      *(UObject **)(lVar17 + 0x28) = this_01;
      iVar9 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this_01);
      *(int *)(lVar17 + 0x1c) = iVar9;
      pFVar12 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_01);
      *(FLinkerLoad **)(lVar17 + 0x30) = pFVar12;
      if (GAsyncLoading2_VerboseLogFilter == 2) break;
      if ((GAsyncLoading2_VerboseLogFilter == 1) &&
         (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
          GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
        FVar16 = (ForElementType<FSetElementId>)0x154ba3ce8;
        if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar16 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
        }
        iVar9 = *(int *)((longlong)FVar16 +
                        (ulonglong)
                        (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                        (uint)(this->Desc).UPackageId.Id) * 4);
        if (iVar9 != -1) {
          do {
            if (*(ulong64 *)
                 (GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar9 * 0x10) ==
                (this->Desc).UPackageId.Id) goto LAB_14233c0ad;
            iVar9 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                            (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
    }
LAB_14233c0ad:
  } while ((byte)LogStreaming._0_1_ < 7);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_98,(UObject *)0x0);
  ::LexToString(&local_a8,&(this->Desc).PackageIdToLoad);
  FVar13 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
  ::FName::ToString((FName *)FVar13,&local_b8);
  ::LexToString(&local_c8,&(this->Desc).UPackageId);
  ::FName::ToString(&(this->Desc).UPackageName,&local_d8);
  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FVar15.Data = local_98.Data.AllocatorInstance.Data;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    FVar15.Data = local_98.Data.AllocatorInstance.Data;
  }
  goto LAB_14233c374;
LAB_14233c1e1:
  if (this_01 == (UObject *)0x0) {
LAB_14233c1f0:
    if (GAsyncLoading2_VerboseLogFilter == 2) {
LAB_14233c279:
      if (5 < (byte)LogStreaming._0_1_) {
        ::LexToString(&local_58,&(this->Desc).PackageIdToLoad);
        FVar13 = FPackagePath::GetPackageFName(&(this->Desc).PackagePathToLoad);
        ::FName::ToString((FName *)FVar13,&local_68);
        ::LexToString(&local_78,&(this->Desc).UPackageId);
        ::FName::ToString(&(this->Desc).UPackageName,&local_88);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        FVar15.Data = local_58.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          FVar15.Data = local_58.Data.AllocatorInstance.Data;
        }
LAB_14233c374:
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
    }
    else if ((GAsyncLoading2_VerboseLogFilter == 1) &&
            (GAsyncLoading2_VerbosePackageIds.Elements._8_4_ !=
             GAsyncLoading2_VerbosePackageIds.Elements._52_4_)) {
      FVar16 = (ForElementType<FSetElementId>)0x154ba3ce8;
      if (GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
      {
        FVar16 = GAsyncLoading2_VerbosePackageIds.Hash.SecondaryData;
      }
      iVar9 = *(int *)((longlong)FVar16 +
                      (ulonglong)
                      (GAsyncLoading2_VerbosePackageIds.HashSize - 1U &
                      (uint)(this->Desc).UPackageId.Id) * 4);
      if (iVar9 != -1) {
        do {
          if (*(ulong64 *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + (longlong)iVar9 * 0x10)
              == (this->Desc).UPackageId.Id) goto LAB_14233c279;
          iVar9 = *(int *)(GAsyncLoading2_VerbosePackageIds.Elements._0_8_ + 8 +
                          (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
  }
  goto LAB_14233bcd6;
}

// SetupScriptDependencies @ 14233d4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncPackage2::SetupScriptDependencies(FAsyncPackage2 *this)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6238,"SetupScriptDependencies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x185e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6238);
  }
  local_68.ArrayMax = 8;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<UClass_*>)0x0;
  local_68.ArrayNum = 0;
  FPackageImportStore::GetUnresolvedCDOs(&this->ImportStore,&this->HeaderData,&local_68);
  if (local_68.ArrayNum != 0) {
    FAsyncLoadingThread2::AddPendingCDOs(this->AsyncLoadingThread,this,&local_68);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UClass_*>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StartLoading @ 14233d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::StartLoading
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,FIoBatch *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  FSHAHash *pFVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  TEventRef<unsigned_int> TVar10;
  FIoRequest FVar11;
  FWriteBuffer *pFVar12;
  atomic<__int64> aVar13;
  undefined ***pppuVar14;
  bool bVar15;
  undefined1 auStackY_198 [32];
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar16;
  undefined8 local_150;
  LARGE_INTEGER local_148;
  undefined1 local_140 [8];
  FAsyncPackage2 *local_138;
  FIoBatch *local_130;
  code *local_128;
  FAsyncPackage2 **local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  FName local_f8 [2];
  FSHAHash *local_e8;
  undefined8 uStack_e0;
  FReadAccessScope local_d8;
  undefined1 local_c0 [24];
  longlong local_a8;
  ulong64 *local_a0;
  longlong local_98;
  code *local_88;
  undefined **local_78;
  FAsyncPackage2 *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6931,"StartLoading",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1b13);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6931);
  }
  bVar7 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataPackageIdFields>
              ((TLogScope<0> *)(local_c0 + 0x10));
    bVar7 = true;
    *(ulong64 *)local_c0._16_8_ = (this->Desc).UPackageId.Id;
    *(undefined8 *)(local_a8 + 0x28) = *(undefined8 *)(local_a8 + 0x20);
  }
  if ((this->Desc).UPackageName != (FName)0x0) {
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_150 = 0;
      TVar10 = (TEventRef<unsigned_int>)&local_150;
    }
    else {
      TVar10 = FStringTrace::GetNameRef(local_f8);
    }
    uVar3 = *(undefined8 *)TVar10;
    if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FPackagePackageMappingFields>((TLogScope<0> *)&local_a0);
      *local_a0 = (this->Desc).UPackageId.Id;
      *(int *)(local_a0 + 1) = (int)uVar3;
      *(undefined8 *)(local_98 + 0x28) = *(undefined8 *)(local_98 + 0x20);
    }
  }
  QueryPerformanceCounter(&local_148);
  this->LoadStartTime =
       (double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  CallProgressCallbacks(this,Started);
  LOCK();
  this->AsyncPackageLoadingState = (atomic<EAsyncPackageLoadingState2>)0x1;
  UNLOCK();
  local_118 = 0;
  local_110 = 0xffffffffffffffff;
  local_108 = 0;
  local_100 = 0;
  if ((this->LinkerLoadState).bIsSet == false) {
    LOCK();
    paVar1 = &this->AsyncLoadingThread->PendingIoRequestsCounter;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    aVar13 = (atomic<__int64>)(longlong)((int)aVar2 + 1);
    if (__GTraceCounterAsyncLoadingPendingIoRequests.Value != aVar13) {
      LOCK();
      UNLOCK();
      __GTraceCounterAsyncLoadingPendingIoRequests.Value = aVar13;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
          uVar9 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterAsyncLoadingPendingIoRequests.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterAsyncLoadingPendingIoRequests.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._2_2_ = 0;
            __GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_ = uVar9;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterAsyncLoadingPendingIoRequests.CounterId._0_2_,
                   (long64)__GTraceCounterAsyncLoadingPendingIoRequests.Value);
      }
    }
    local_c0._0_8_ = (this->Desc).PackageIdToLoad.Id;
    local_c0._8_4_ = 0x1000000;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAsyncPackage2::StartLoading'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
               ::Call;
    local_60 = (undefined ***)0x0;
    local_70 = this;
    FVar11 = FIoBatch::ReadWithCallback
                       (param_2,(FIoChunkId *)local_140,(FIoReadOptions *)local_c0,(int)&local_118,
                        (TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)
                        CONCAT44(uVar16,(this->Desc).Priority));
    FIoRequest::operator=(&(this->SerializationState).IoRequest,(FIoRequest *)FVar11.Impl);
    FIoRequest::~FIoRequest((FIoRequest *)local_140);
    if (local_88 != (code *)0x0) {
      pppuVar14 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar14 = local_60;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    if ((this->Data).ShaderMapHashes.ArrayNum != 0) {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId7022,"StartShaderMapRequests",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                   ,0x1b6e);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7022);
      }
      pFVar6 = (this->Data).ShaderMapHashes.DataPtr;
      uVar3 = *(undefined8 *)&(this->Data).ShaderMapHashes.ArrayNum;
      local_138 = this;
      local_130 = param_2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::PreloadPackageShaderMaps,&local_d8);
      if ((FCoreDelegates::PreloadPackageShaderMaps._16_4_ != 0) &&
         (FCoreDelegates::PreloadPackageShaderMaps._8_8_ != 0)) {
        local_128 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FAsyncPackage2::StartLoading'::__l23::<lambda_2>,FIoRequest,FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>_>
                    ::Call;
        local_120 = &local_138;
        local_e8 = pFVar6;
        uStack_e0 = uVar3;
        (**(code **)(*(longlong *)FCoreDelegates::PreloadPackageShaderMaps._8_8_ + 0x68))
                  (FCoreDelegates::PreloadPackageShaderMaps._8_8_,&local_e8,&local_128);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  else {
    if (((this->PackageNodes).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FEventLoadNode2::ReleaseBarrier((this->PackageNodes).DataPtr,param_1);
  }
  if (bVar7) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateDependenciesStateRecursive @ 142341100

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FAsyncPackage2 * __thiscall
FAsyncPackage2::UpdateDependenciesStateRecursive
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,
          FUpdateDependenciesStateRecursiveContext *param_2)

{
  TArray<FAsyncPackage2_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FAsyncPackage2 **ppFVar4;
  pdm_72c38f00 pVar5;
  FAsyncPackage2 *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FAsyncPackage2 *pFVar12;
  ForElementType<FAsyncPackage2_*> FVar13;
  ForElementType<FAsyncPackage2_*> FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uchar *puVar17;
  FAsyncPackage2 *this_00;
  FAsyncPackage2 **ppFVar18;
  longlong lVar19;
  FAsyncPackage2 *local_res18 [2];
  FAsyncPackage2 *local_48;
  FAsyncPackage2 *local_40;
  
  puVar17 = this->PackageNodesMemory + (longlong)(int)param_2->StateMemberPtr + -0x10;
  if ((-1 < *(int *)(puVar17 + 0x2c)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThisState.PreOrderNumber < 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x23d7,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
    return pFVar12;
  }
  if (puVar17[0x31] != '\0') {
    return (FAsyncPackage2 *)0x0;
  }
  pFVar12 = *(FAsyncPackage2 **)puVar17;
  if (pFVar12 != (FAsyncPackage2 *)0x0) {
    if ((byte)pFVar12->AsyncPackageLoadingState < param_2->WaitForPackageState) {
      pFVar15 = (param_1->PackagesOnStack).AllocatorInstance.Data;
      pFVar3 = pFVar15 + (longlong)(param_1->PackagesOnStack).ArrayNum * 8;
      while( true ) {
        if (pFVar15 == pFVar3) {
          return pFVar12;
        }
        if (*(FAsyncPackage2 **)pFVar15 == pFVar12) break;
        pFVar15 = pFVar15 + 8;
      }
    }
    FAllDependenciesState::RemoveFromWaitList(param_2->StateMemberPtr,pFVar12,this);
  }
  pFVar12 = (FAsyncPackage2 *)0x0;
  *(int *)(puVar17 + 0x2c) = param_2->C;
  pTVar1 = &param_2->S;
  param_2->C = param_2->C + 1;
  FVar14 = (param_2->S).AllocatorInstance.SecondaryData;
  FVar13 = FVar14;
  if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
    FVar13 = (ForElementType<FAsyncPackage2_*>)pTVar1;
  }
  local_48 = this;
  if ((ulonglong)FVar13 <= &local_48) {
    if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
      FVar14 = (ForElementType<FAsyncPackage2_*>)pTVar1;
    }
    if ((&local_48 < (FAsyncPackage2 **)((longlong)FVar14 + (longlong)(param_2->S).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
      return pFVar12;
    }
  }
  iVar10 = (param_2->S).ArrayNum;
  piVar2 = &(param_2->S).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage2_*>_>
                       (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_2->S).ArrayNum = iVar10 + 1;
  FVar14 = (param_2->S).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
    FVar14 = (ForElementType<FAsyncPackage2_*>)pTVar1;
  }
  pTVar1 = &param_2->P;
  *(FAsyncPackage2 **)((longlong)FVar14 + (longlong)iVar10 * 8) = local_48;
  FVar14 = (param_2->P).AllocatorInstance.SecondaryData;
  FVar13 = FVar14;
  if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
    FVar13 = (ForElementType<FAsyncPackage2_*>)pTVar1;
  }
  local_40 = this;
  if ((ulonglong)FVar13 <= &local_40) {
    if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
      FVar14 = (ForElementType<FAsyncPackage2_*>)pTVar1;
    }
    if ((&local_40 < (FAsyncPackage2 **)((longlong)FVar14 + (longlong)(param_2->P).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
      return pFVar12;
    }
  }
  iVar10 = (param_2->P).ArrayNum;
  piVar2 = &(param_2->P).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage2_*>_>
                       (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_2->P).ArrayNum = iVar10 + 1;
  FVar14 = (param_2->P).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
    FVar14 = (ForElementType<FAsyncPackage2_*>)pTVar1;
  }
  *(FAsyncPackage2 **)((longlong)FVar14 + (longlong)iVar10 * 8) = local_40;
  ppFVar18 = (this->Data).ImportedAsyncPackages.DataPtr;
  ppFVar4 = ppFVar18 + (this->Data).ImportedAsyncPackages.ArrayNum;
  for (; this_00 = pFVar12, ppFVar18 != ppFVar4; ppFVar18 = ppFVar18 + 1) {
    this_00 = *ppFVar18;
    if (this_00 != (FAsyncPackage2 *)0x0) {
      pFVar15 = (param_1->PackagesOnStack).AllocatorInstance.Data;
      pFVar3 = pFVar15 + (longlong)(param_1->PackagesOnStack).ArrayNum * 8;
      for (; pFVar15 != pFVar3; pFVar15 = pFVar15 + 8) {
        if (*(FAsyncPackage2 **)pFVar15 == this_00) goto LAB_142341441;
      }
      puVar17 = this_00->PackageNodesMemory + (longlong)(int)param_2->StateMemberPtr + -0x10;
      if (puVar17[0x31] == '\0') {
        if ((byte)this_00->AsyncPackageLoadingState < param_2->WaitForPackageState) break;
        if (*(uint *)(puVar17 + 0x28) != param_2->CurrentTick) {
          *(uint *)(puVar17 + 0x28) = param_2->CurrentTick;
          puVar17[0x2c] = 0xff;
          puVar17[0x2d] = 0xff;
          puVar17[0x2e] = 0xff;
          puVar17[0x2f] = 0xff;
          puVar17[0x30] = '\0';
        }
        if (*(int *)(puVar17 + 0x2c) < 0) {
          pFVar12 = UpdateDependenciesStateRecursive(this_00,param_1,param_2);
          this_00 = pFVar12;
          if (pFVar12 != (FAsyncPackage2 *)0x0) break;
        }
        else if (puVar17[0x30] == '\0') {
          while( true ) {
            iVar10 = (param_2->P).ArrayNum;
            uVar16 = iVar10 - 1;
            uVar11 = 0;
            if ((int)uVar16 < iVar10) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
              return pFVar12;
            }
            FVar14 = (param_2->P).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<FAsyncPackage2_*>)pTVar1;
            if (FVar14 != (ForElementType<FAsyncPackage2_*>)0x0) {
              FVar13 = FVar14;
            }
            if (*(int *)(*(longlong *)
                          ((int *)((longlong)FVar13 + -8) + (longlong)(param_2->P).ArrayNum * 2) +
                         0x2c + (longlong)(int)param_2->StateMemberPtr) <= *(int *)(puVar17 + 0x2c))
            break;
            TArray<FAsyncPackage2_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::Pop
                      (pTVar1,Default);
          }
        }
        this_00 = *(FAsyncPackage2 **)puVar17;
        if (this_00 != (FAsyncPackage2 *)0x0) break;
      }
    }
LAB_142341441:
  }
  iVar10 = (param_2->P).ArrayNum;
  uVar16 = iVar10 - 1;
  uVar11 = 0;
  if ((int)uVar16 < iVar10) {
    uVar11 = ~uVar16 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
    return pFVar12;
  }
  FVar14 = (param_2->P).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
    FVar14 = (ForElementType<FAsyncPackage2_*>)&param_2->P;
  }
  if (*(FAsyncPackage2 **)((int *)((longlong)FVar14 + -8) + (longlong)(param_2->P).ArrayNum * 2) ==
      this) {
    do {
      if (((param_2->S).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
        return pFVar12;
      }
      iVar10 = (param_2->S).ArrayNum;
      FVar14 = (param_2->S).AllocatorInstance.SecondaryData;
      uVar11 = iVar10 - 1;
      lVar19 = (longlong)(int)uVar11 * 8;
      if (FVar14 == (ForElementType<FAsyncPackage2_*>)0x0) {
        pFVar12 = *(FAsyncPackage2 **)((param_2->S).AllocatorInstance.InlineData + lVar19);
        FVar14 = (ForElementType<FAsyncPackage2_*>)&param_2->S;
      }
      else {
        pFVar12 = *(FAsyncPackage2 **)(lVar19 + (longlong)FVar14);
      }
      iVar10 = ~uVar11 + iVar10;
      if (iVar10 != 0) {
        memmove((void *)((longlong)FVar14 + lVar19),(void *)((longlong)FVar14 + lVar19 + 8),
                (longlong)iVar10 << 3);
      }
      piVar2 = &(param_2->S).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage2_*>_>
                (8,8,&(param_2->S).AllocatorInstance,(param_2->S).ArrayNum,&(param_2->S).ArrayMax);
      pVar5 = param_2->StateMemberPtr;
      pFVar12->PackageNodesMemory[(longlong)(int)pVar5 + 0x20] = '\x01';
      if (((byte)pFVar12->AsyncPackageLoadingState < param_2->WaitForPackageState) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InStronglyConnectedComponent->AsyncPackageLoadingState >= Context.WaitForPackageState"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x2447,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
        return pFVar12;
      }
      if (this_00 == (FAsyncPackage2 *)0x0) {
        pFVar12->PackageNodesMemory[(longlong)(int)pVar5 + 0x21] = '\x01';
        local_res18[0] = pFVar12;
        (**(code **)&param_2->OnStateReached)
                  (*(undefined8 *)&(param_2->OnStateReached).field_0x8,local_res18);
      }
      else {
        pVar5 = param_2->StateMemberPtr;
        lVar19 = (longlong)(int)pVar5;
        if ((this_00 == pFVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("WaitListPackage != PackageToAdd",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0xec3,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
          return pFVar12;
        }
        pFVar6 = *(FAsyncPackage2 **)(pFVar12->PackageNodesMemory + lVar19 + -0x10);
        if (pFVar6 != this_00) {
          if (pFVar6 != (FAsyncPackage2 *)0x0) {
            FAllDependenciesState::RemoveFromWaitList(pVar5,pFVar6,pFVar12);
          }
          if ((*(longlong *)(pFVar12->PackageNodesMemory + lVar19 + 8) != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!PackageToAddState.PrevLink",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                 ,0xed0,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
            return pFVar12;
          }
          if ((*(longlong *)(pFVar12->PackageNodesMemory + lVar19 + 0x10) != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!PackageToAddState.NextLink",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                 ,0xed1,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
            return pFVar12;
          }
          lVar7 = *(longlong *)(this_00->PackageNodesMemory + lVar19);
          if (lVar7 == 0) {
            if ((*(longlong *)(this_00->PackageNodesMemory + lVar19 + -8) != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!WaitListPackageState.PackagesWaitingForThisHead",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                   ,0xedb,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
              return pFVar12;
            }
            *(FAsyncPackage2 **)(this_00->PackageNodesMemory + lVar19 + -8) = pFVar12;
          }
          else {
            if ((*(longlong *)(lVar7 + 0x20 + lVar19) != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!WaitListTailState.NextLink",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                   ,0xed5,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              pFVar12 = (FAsyncPackage2 *)(*pcVar8)();
              return pFVar12;
            }
            *(FAsyncPackage2 **)(lVar7 + lVar19 + 0x20) = pFVar12;
            *(undefined8 *)(pFVar12->PackageNodesMemory + lVar19 + 8) =
                 *(undefined8 *)(this_00->PackageNodesMemory + lVar19);
          }
          *(FAsyncPackage2 **)(this_00->PackageNodesMemory + lVar19) = pFVar12;
          LOCK();
          this_00->RefCount = (atomic<int>)((int)this_00->RefCount + 1);
          UNLOCK();
          *(FAsyncPackage2 **)(pFVar12->PackageNodesMemory + lVar19 + -0x10) = this_00;
        }
      }
    } while (pFVar12 != this);
    TArray<FAsyncPackage2_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::Pop
              (&param_2->P,Default);
  }
  return this_00;
}

// WaitForAllDependenciesToReachState @ 1423430c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncPackage2::WaitForAllDependenciesToReachState
          (FAsyncPackage2 *this,FAsyncLoadingThreadState2 *param_1,pdm_72c38f00 param_2,
          EAsyncPackageLoadingState2 param_3,uint *param_4,
          TFunctionRef<void___cdecl(FAsyncPackage2_*)> *param_5)

{
  uchar *puVar1;
  FAsyncPackage2 *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_2098 [32];
  FUpdateDependenciesStateRecursiveContext local_2078;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1423430d6;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2098;
  if ((this->AsyncPackageLoadingState != (atomic<EAsyncPackageLoadingState2>)param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == WaitForPackageState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2460,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_4 = *param_4 + 1;
  local_2078.CurrentTick = *param_4;
  local_2078.OnStateReached._0_8_ = *(undefined8 *)param_5;
  local_2078.OnStateReached._8_8_ = *(undefined8 *)&param_5->field_0x8;
  local_2078.S.AllocatorInstance.SecondaryData = (ForElementType<FAsyncPackage2_*>)0x0;
  local_2078.S.ArrayNum = 0;
  local_2078.S.ArrayMax = 0x200;
  local_2078.P.AllocatorInstance.SecondaryData = (ForElementType<FAsyncPackage2_*>)0x0;
  local_2078.P.ArrayNum = 0;
  local_2078.P.ArrayMax = 0x200;
  local_2078.C = 0;
  local_2078.StateMemberPtr = param_2;
  local_2078.WaitForPackageState = param_3;
  if ((this->PackageNodesMemory[(longlong)(int)param_2 + 0x21] != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ThisState.bAllDone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x2466,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(uint *)(this->PackageNodesMemory + (longlong)(int)param_2 + 0x18) != *param_4) {
    *(uint *)(this->PackageNodesMemory + (longlong)(int)param_2 + 0x18) = *param_4;
    puVar1 = this->PackageNodesMemory + (longlong)(int)param_2 + 0x1c;
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    this->PackageNodesMemory[(longlong)(int)param_2 + 0x20] = '\0';
  }
  UpdateDependenciesStateRecursive(this,param_1,&local_2078);
  if ((this->PackageNodesMemory[(longlong)(int)param_2 + 0x21] == '\0') &&
     (((*(longlong *)(this->PackageNodesMemory + (longlong)(int)param_2 + -0x10) == 0 ||
       (param_3 <=
        *(EAsyncPackageLoadingState2 *)
         (*(longlong *)(this->PackageNodesMemory + (longlong)(int)param_2 + -0x10) + 0x494))) &&
      (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("ThisState.bAllDone || (ThisState.WaitingForPackage && ThisState.WaitingForPackage->AsyncPackageLoadingState < WaitForPackageState)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                          ,0x2469,L""), bVar3)))) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = *(FAsyncPackage2 **)(this->PackageNodesMemory + (longlong)(int)param_2 + -8);
  while( true ) {
    if (this_00 == (FAsyncPackage2 *)0x0) {
      if (local_2078.P.AllocatorInstance.SecondaryData != (ForElementType<FAsyncPackage2_*>)0x0) {
        FMemory::Free((void *)local_2078.P.AllocatorInstance.SecondaryData);
      }
      if (local_2078.S.AllocatorInstance.SecondaryData != (ForElementType<FAsyncPackage2_*>)0x0) {
        FMemory::Free((void *)local_2078.S.AllocatorInstance.SecondaryData);
      }
      return;
    }
    if (*(uint *)(this_00->PackageNodesMemory + (longlong)(int)param_2 + 0x18) != *param_4) {
      *(uint *)(this_00->PackageNodesMemory + (longlong)(int)param_2 + 0x18) = *param_4;
      puVar1 = this_00->PackageNodesMemory + (longlong)(int)param_2 + 0x1c;
      puVar1[0] = 0xff;
      puVar1[1] = 0xff;
      puVar1[2] = 0xff;
      puVar1[3] = 0xff;
      this_00->PackageNodesMemory[(longlong)(int)param_2 + 0x20] = '\0';
    }
    if (*(int *)(this_00->PackageNodesMemory + (longlong)(int)param_2 + 0x1c) < 0) {
      UpdateDependenciesStateRecursive(this_00,param_1,&local_2078);
    }
    if (((this_00->PackageNodesMemory[(longlong)(int)param_2 + 0x21] == '\0') &&
        ((*(longlong *)(this_00->PackageNodesMemory + (longlong)(int)param_2 + -0x10) == 0 ||
         (param_3 <=
          *(EAsyncPackageLoadingState2 *)
           (*(longlong *)(this_00->PackageNodesMemory + (longlong)(int)param_2 + -0x10) + 0x494)))))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("WaitingPackageState.bAllDone || (WaitingPackageState.WaitingForPackage && WaitingPackageState.WaitingForPackage->AsyncPackageLoadingState < WaitForPackageState)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x2473,L""), bVar3)) break;
    this_00 = *(FAsyncPackage2 **)(this->PackageNodesMemory + (longlong)(int)param_2 + -8);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// operator() @ 15048ab40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FAsyncPackage2::EventDrivenSerializeExport'::__l189::<lambda_1>::operator()(void *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209245507>);
  if (bVar4) {
    if (**(longlong **)this != 0) {
      iVar1 = *(int *)(**(longlong **)this + 0xc);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
        FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
      }
    }
    if (**(longlong **)this != 0) {
      pFVar7 = ::LexToString(&local_28,*(EObjectFlags *)(**(longlong **)this + 8));
      if ((pFVar7->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    bVar5 = (UObjectBaseUtility *)**(undefined8 **)this != (UObjectBaseUtility *)0x0;
    if (bVar5) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_38,(UObject *)0x0,None);
    }
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209245507>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15048ac8d;
    }
  }
  bVar4 = false;
LAB_15048ac8d:
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return (bool)uVar6;
}

// operator() @ 15048af20

bool __thiscall
`FAsyncPackage2::ImportPackagesRecursiveInner'::__l188::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209247644>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209247644>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

