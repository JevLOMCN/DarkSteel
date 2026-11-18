// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 38

// FClothSimulationMesh @ 14dc340e0

FClothSimulationMesh * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::FClothSimulationMesh
          (FClothSimulationMesh *this,FChaosClothSimulationModel *param_1,
          FClothSimulationContext *param_2,
          TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_3,
          FString *param_4)

{
  int *piVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  FClothSimulationMesh *pFVar10;
  FClothSimulationAccessoryMesh *this_00;
  FClothSimulationAccessoryMesh *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  TSharedRef<FManagedArrayCollection_const_,1> *pTVar16;
  FCollectionClothConstFacade *pFVar17;
  int *piVar18;
  TSharedRef<UE::Chaos::ClothAsset::FCollectionClothConstFacade,1> *pTVar19;
  TSet<TTuple<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>,FDefaultSetAllocator>
  *this_01;
  TSharedRef<FManagedArrayCollection_const_,1> *pTVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  TPairInitializer<FName_&&,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_&&>
  local_res18;
  FName local_80;
  TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
  **local_78;
  FCollectionClothSimAccessoryMeshConstFacade local_70;
  
  ::Chaos::FClothingSimulationMesh::FClothingSimulationMesh((FClothingSimulationMesh *)this,param_4)
  ;
  this->ClothSimulationModel = param_1;
  this->ManagedArrayCollections = param_3;
  piVar18 = &(this->AccessoryMeshes).ArrayMax;
  this->_padding_ = (longlong)&___7FClothSimulationMesh_ClothAsset_Chaos_UE__6B_;
  piVar1 = &(this->ClothFacades).ArrayMax;
  this->ClothSimulationContext = param_2;
  (this->ClothFacades).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothFacades).ArrayNum = 0;
  *piVar1 = 0;
  (this->AccessoryMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccessoryMeshes).ArrayNum = 0;
  *piVar18 = 0;
  pFVar2 = this->ClothSimulationModel;
  pFVar3 = (pFVar2->UsedBoneIndices).AllocatorInstance.Data;
  pFVar15 = pFVar3;
  do {
    if (pFVar15 == pFVar3 + (longlong)(pFVar2->UsedBoneIndices).ArrayNum * 4) {
LAB_14dc341d8:
      uVar13 = this->ManagedArrayCollections->ArrayNum;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (*piVar1 < (int)uVar13) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar13,&(this->ClothFacades).AllocatorInstance,
                   (this->ClothFacades).ArrayNum,piVar1);
      }
      uVar13 = this->ManagedArrayCollections->ArrayNum;
      if (-1 < (int)uVar13) {
        if (*piVar18 < (int)uVar13) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,uVar13,&(this->AccessoryMeshes).AllocatorInstance,
                     (this->AccessoryMeshes).ArrayNum,piVar18);
        }
        pTVar4 = this->ManagedArrayCollections;
        local_res10 = pTVar4->ArrayNum;
        uVar12 = (ulonglong)(int)local_res10;
        pTVar20 = (TSharedRef<FManagedArrayCollection_const_,1> *)(pTVar4->AllocatorInstance).Data;
        pTVar16 = pTVar20 + uVar12;
        while( true ) {
          piVar18 = &(this->ClothFacades).ArrayMax;
          if (pTVar4->ArrayNum != (int)uVar12) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TSharedRef<FManagedArrayCollection_const_,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pTVar20 == pTVar16) break;
          pTVar9 = ::operator_new(0x28);
          if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            pFVar17 = (FCollectionClothConstFacade *)&DAT_00000010;
          }
          else {
            pTVar9->SharedReferenceCount = (atomic<int>)0x1;
            pTVar9->WeakReferenceCount = (atomic<int>)0x1;
            pTVar9->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFCollectionClothConstFacade_ClothAsset_Chaos_UE___00_SharedPointerInternals__6B_
            ;
            FCollectionClothConstFacade::FCollectionClothConstFacade
                      ((FCollectionClothConstFacade *)(pTVar9 + 1),pTVar20);
            pFVar17 = (FCollectionClothConstFacade *)(pTVar9 + 1);
            if ((pFVar17 == (FCollectionClothConstFacade *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar10 = (FClothSimulationMesh *)(*pcVar5)();
              return pFVar10;
            }
          }
          iVar8 = (this->ClothFacades).ArrayNum;
          if (iVar8 == *piVar18) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->ClothFacades).AllocatorInstance,piVar18);
          }
          pTVar19 = (TSharedRef<UE::Chaos::ClothAsset::FCollectionClothConstFacade,1> *)
                    ((this->ClothFacades).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
          (this->ClothFacades).ArrayNum = iVar8 + 1;
          pTVar19->Object = pFVar17;
          (pTVar19->SharedReferenceCount).ReferenceController = pTVar9;
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          iVar8 = (this->AccessoryMeshes).ArrayNum;
          if (iVar8 == (this->AccessoryMeshes).ArrayMax) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&(this->AccessoryMeshes).AllocatorInstance,
                               &(this->AccessoryMeshes).ArrayMax);
          }
          (this->AccessoryMeshes).ArrayNum = iVar8 + 1;
          this_01 = (TSet<TTuple<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>,FDefaultSetAllocator>
                     *)((this->AccessoryMeshes).AllocatorInstance.Data + (longlong)iVar8 * 0x50);
          DefaultConstructItems<TMap<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>_>,int>
                    (this_01,1);
          iVar14 = 0;
          iVar8 = FCollectionClothConstFacade::GetNumSimAccessoryMeshes(pTVar19->Object);
          if (0 < iVar8) {
            local_78 = &local_res18.Value;
            do {
              FCollectionClothConstFacade::GetSimAccessoryMesh(pTVar19->Object,&local_70,iVar14);
              this_00 = ::operator_new(0x48);
              pFVar11 = (FClothSimulationAccessoryMesh *)0x0;
              if (this_00 != (FClothSimulationAccessoryMesh *)0x0) {
                pFVar11 = FClothSimulationAccessoryMesh::FClothSimulationAccessoryMesh
                                    (this_00,pTVar19,(FClothingSimulationMesh *)this,iVar14);
              }
              local_res18.Value =
                   (TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
                    *)pFVar11;
              local_80 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshName
                                   (&local_70);
              TSet<TTuple<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FName_&&,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_&&>_>
                        (this_01,&local_res18,(bool *)&local_80);
              if ((FClothSimulationAccessoryMesh *)local_res18.Value !=
                  (FClothSimulationAccessoryMesh *)0x0) {
                (**(code **)(local_res18.Value)->Ptr)(local_res18.Value,1);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_70.ClothCollection.SharedReferenceCount.ReferenceController);
              iVar14 = iVar14 + 1;
              iVar8 = FCollectionClothConstFacade::GetNumSimAccessoryMeshes(pTVar19->Object);
            } while (iVar14 < iVar8);
          }
          pTVar20 = pTVar20 + 1;
          uVar12 = (ulonglong)local_res10;
        }
        return this;
      }
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (*(int *)pFVar15 == pFVar2->ReferenceBoneIndex) {
      uVar13 = (uint)((longlong)pFVar15 - (longlong)pFVar3 >> 2);
      if ((-1 < (int)uVar13) && ((int)uVar13 < (pFVar2->UsedBoneNames).ArrayNum)) {
        uVar7 = 0;
        if ((int)uVar13 < (pFVar2->UsedBoneNames).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FClothSimulationMesh *)(*pcVar5)();
          return pFVar10;
        }
        this->_padding_ =
             *(longlong *)
              ((pFVar2->UsedBoneNames).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
      }
      goto LAB_14dc341d8;
    }
    pFVar15 = pFVar15 + 4;
  } while( true );
}

// ~FClothSimulationMesh @ 14dc35cb0

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::~FClothSimulationMesh(FClothSimulationMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TMap<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>_>,int>
            ((TMap<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>_>
              *)(this->AccessoryMeshes).AllocatorInstance.Data,(this->AccessoryMeshes).ArrayNum);
  pFVar1 = (this->AccessoryMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<UE::Chaos::ClothAsset::FCollectionClothConstFacade,1>,int>
            ((TSharedRef<UE::Chaos::ClothAsset::FCollectionClothConstFacade,1> *)
             (this->ClothFacades).AllocatorInstance.Data,(this->ClothFacades).ArrayNum);
  pFVar1 = (this->ClothFacades).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ::Chaos::FClothingSimulationMesh::~FClothingSimulationMesh((FClothingSimulationMesh *)this);
  return;
}

// FindMorphTargetByName @ 14dc47ec0

int __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::FindMorphTargetByName
          (FClothSimulationMesh *this,int param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ClothFacades).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->ClothFacades).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    iVar4 = FCollectionClothConstFacade::FindSimMorphTargetIndexByName
                      (*(FCollectionClothConstFacade **)
                        ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10),
                       param_2);
    return iVar4;
  }
  return -1;
}

// GetAccessoryMesh @ 14dc49030

FClothingSimulationAccessoryMesh * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetAccessoryMesh
          (FClothSimulationMesh *this,int param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FClothingSimulationAccessoryMesh *pFVar4;
  TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
  *pTVar5;
  
  if ((-1 < param_1) && (param_1 < (this->AccessoryMeshes).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->AccessoryMeshes).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FClothingSimulationAccessoryMesh *)(*pcVar1)();
        return pFVar4;
      }
    }
    pTVar5 = TMapBase<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>_>
             ::Find((TMapBase<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>_>
                     *)((this->AccessoryMeshes).AllocatorInstance.Data + (longlong)param_1 * 0x50),
                    *param_2);
    if (pTVar5 != (TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>
                   *)0x0) {
      return (FClothingSimulationAccessoryMesh *)pTVar5->Ptr;
    }
  }
  return (FClothingSimulationAccessoryMesh *)0x0;
}

// GetAllAccessoryMeshNames @ 14dc494f0

TArrayView<FName_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetAllAccessoryMeshNames
          (FClothSimulationMesh *this,TArrayView<FName_const_,int> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FName_const_,int> *pTVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ClothFacades).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->ClothFacades).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArrayView<FName_const_,int> *)(*pcVar1)();
        return pTVar3;
      }
    }
    FCollectionClothConstFacade::GetSimAccessoryMeshName
              (*(FCollectionClothConstFacade **)
                ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10),
               __return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FName *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAllMorphTargetNames @ 14dc495b0

TArrayView<FString_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetAllMorphTargetNames
          (FClothSimulationMesh *this,TArrayView<FString_const_,int> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FString_const_,int> *pTVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ClothFacades).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->ClothFacades).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArrayView<FString_const_,int> *)(*pcVar1)();
        return pTVar3;
      }
    }
    FCollectionClothConstFacade::GetSimMorphTargetName
              (*(FCollectionClothConstFacade **)
                ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10),
               __return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FString *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBoneData @ 14dc4a5b0

TArrayView<FClothVertBoneData_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetBoneData
          (FClothSimulationMesh *this,
          TArrayView<FClothVertBoneData_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TArrayView<FClothVertBoneData_const_,int> *pTVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  int iStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  pFVar2 = this->ClothSimulationModel;
  if ((param_1 < 0) || ((pFVar2->ClothSimulationLodModels).ArrayNum <= param_1)) {
    local_18 = 0;
    local_10 = 0;
    puVar8 = &local_18;
  }
  else {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<FClothVertBoneData_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x38);
    local_28 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x30);
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<FClothVertBoneData_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iStack_20 = iVar1;
    puVar8 = &local_28;
  }
  uVar5 = puVar8[1];
  __return_storage_ptr__->DataPtr = (FClothVertBoneData *)*puVar8;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar5;
  return __return_storage_ptr__;
}

// GetBoneMap @ 14dc4a690

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetBoneMap
          (FClothSimulationMesh *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int_const_,int> *pTVar4;
  
  iVar1 = (this->ClothSimulationModel->UsedBoneIndices).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (int *)(this->ClothSimulationModel->UsedBoneIndices).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<int_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetBoneTransforms @ 14dc4a700

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetBoneTransforms(FClothSimulationMesh *this)

{
  return &this->ClothSimulationContext->BoneTransforms;
}

// GetComponentToWorldTransform @ 14dc4b2a0

TTransform<double> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetComponentToWorldTransform
          (FClothSimulationMesh *this)

{
  return &this->ClothSimulationContext->ComponentTransform;
}

// GetFaceIntMaps @ 14dc4b9b0

TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
* __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetFaceIntMaps
          (FClothSimulationMesh *this,
          TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
          *__return_storage_ptr__,int param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  FChaosClothSimulationModel *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
  *pTVar9;
  int iVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  int iVar22;
  longlong lVar23;
  FString *pFVar24;
  TPairInitializer<FString_&&,TArrayView<int_const_,int>_&&> local_res8;
  uint local_res18;
  int local_res20;
  FString *local_138;
  longlong *local_130;
  uint local_128;
  uint uStack_124;
  undefined1 *puStack_120;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  int local_100;
  FScriptContainerElement *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  FScriptContainerElement *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  FString local_78 [2];
  undefined4 local_4c;
  
  uVar15 = 0;
  uVar19 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar14 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (param_1 < 0) {
    return __return_storage_ptr__;
  }
  if ((this->ClothSimulationModel->ClothSimulationLodModels).ArrayNum <= param_1) {
    return __return_storage_ptr__;
  }
  pFVar2 = (this->ClothSimulationModel->ClothSimulationLodModels).AllocatorInstance.Data;
  lVar23 = (longlong)param_1 * 0x1f0;
  uVar17 = 1;
  local_res18 = (uint)~param_1 >> 0x1f;
  uVar16 = *(int *)(pFVar2 + lVar23 + 0x158) - *(int *)(pFVar2 + lVar23 + 0x184);
  local_138 = (FString *)&DAT_00000001;
  local_res8.Key = (FString *)this;
  local_108 = lVar23;
  if (uVar16 == 0) goto LAB_14dc4bc95;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar16);
  uVar17 = 1;
  if (3 < uVar16) {
    uVar12 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_res8.Value._0_4_ = (undefined4)lVar4;
    uVar17 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 == 0) ||
     (pFVar24 = (FString *)&DAT_00000001, *(int *)&__return_storage_ptr__->field_0x48 < (int)uVar17)
     ) {
    *(uint *)&__return_storage_ptr__->field_0x48 = uVar17;
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
    }
    if (uVar17 != 0) {
      uVar16 = uVar17;
      if (uVar17 < 2) {
        if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
          uVar16 = 0;
          goto LAB_14dc4bad1;
        }
      }
      else {
LAB_14dc4bad1:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar16,4);
      }
      if (0 < (int)uVar17) {
        uVar18 = (ulonglong)uVar17;
        uVar12 = uVar15;
        do {
          puVar11 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar8 = uVar12 & (longlong)(int)uVar17 - 1U;
          uVar12 = uVar12 + 1;
          *(undefined4 *)(puVar11 + uVar8 * 4) = 0xffffffff;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    pFVar24 = local_138;
    if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
      uVar17 = *(uint *)&__return_storage_ptr__->field_0x28;
      puStack_120 = &__return_storage_ptr__->field_0x10;
      local_128 = 0;
      uStack_124 = (uint)local_138;
      uStack_114 = 0;
      uStack_110 = 0;
      uVar12 = uVar15;
      if (uVar17 != 0) {
        puVar20 = *(uint **)&__return_storage_ptr__->field_0x20;
        if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
          puVar20 = (uint *)puStack_120;
        }
        uVar16 = *puVar20;
        uVar18 = uVar15;
        while (uVar16 == 0) {
          uStack_110 = (int)uVar18 + 0x20;
          uVar18 = (ulonglong)uStack_110;
          iVar10 = (int)uVar12;
          local_128 = iVar10 + 1;
          uVar12 = (ulonglong)local_128;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_128)
          goto LAB_14dc4bbd5;
          uVar16 = puVar20[(longlong)iVar10 + 1];
        }
        uStack_124 = -uVar16 & uVar16;
        uVar12 = (ulonglong)uStack_124 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_res20 = (int)lVar23;
        uStack_114 = local_res20 + -1 + uStack_110;
        uVar12 = (ulonglong)uStack_114;
        if ((int)uVar17 < (int)uStack_114) {
LAB_14dc4bbd5:
          uVar12 = (ulonglong)uVar17;
          uStack_114 = uVar17;
        }
      }
      local_118 = 0xffffffff;
      local_c8._padding_ = CONCAT44(uStack_124,local_128);
      local_c8.CurrentBitIndex = uStack_114;
      local_c8.UnvisitedBitMask = 0xffffffff;
      local_c8._28_4_ = uStack_10c;
      local_c8.BaseBitIndex = uStack_110;
      lVar23 = local_108;
      local_d0 = __return_storage_ptr__;
      local_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_120;
      if ((int)uVar12 < (int)uVar17) {
        do {
          iVar22 = (int)uVar12;
          puVar1 = (undefined8 *)(*(longlong *)local_d0 + (longlong)iVar22 * 0x28);
          iVar10 = *(int *)(*(longlong *)local_d0 + 8 + (longlong)iVar22 * 0x28);
          if (iVar10 == 0) {
            pwVar13 = L"";
            uVar17 = uVar19;
          }
          else {
            pwVar13 = (wchar_t *)*puVar1;
            uVar17 = iVar10 - 1;
          }
          uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar17,pwVar13);
          uVar17 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar17;
          *(uint *)((longlong)puVar1 + 0x24) = uVar17;
          puVar11 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar12 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                   (longlong)(int)uVar17;
          *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar11 + uVar12 * 4);
          *(int *)(puVar11 + uVar12 * 4) = iVar22;
          local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
          uVar12 = (ulonglong)(uint)local_c8.CurrentBitIndex;
          lVar23 = local_108;
          pFVar24 = local_138;
        } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
      }
    }
  }
  uVar17 = (uint)pFVar24;
LAB_14dc4bc95:
  pFVar3 = *(FChaosClothSimulationModel **)((longlong)local_res8.Key + 0x20);
  uVar16 = uVar19;
  if (param_1 < (pFVar3->ClothSimulationLodModels).ArrayNum) {
    uVar16 = local_res18;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
              *)(*pcVar5)();
    return pTVar9;
  }
  local_f8 = (pFVar3->ClothSimulationLodModels).AllocatorInstance.Data + lVar23 + 0x150;
  uVar16 = *(uint *)(local_f8 + 0x28);
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  uVar12 = uVar15;
  if (uVar16 != 0) {
    uVar12 = (ulonglong)uVar16;
    pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_f8 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_f8 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = TStack_f0.Array;
    }
    uVar7 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    uVar18 = uVar15;
    uVar14 = uVar19;
    while (uVar7 == 0) {
      iVar10 = (int)uVar15;
      uVar19 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uVar19;
      uVar14 = iVar10 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14dc4bd5f;
      uVar7 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar10 * 4 + 4);
    }
    uVar17 = -uVar7 & uVar7;
    uVar15 = (ulonglong)uVar17 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_res18 = (uint)lVar23;
    uVar7 = (uVar19 - 1) + local_res18;
    if ((int)uVar16 < (int)uVar7) {
      uVar7 = uVar16;
    }
    uVar12 = (ulonglong)uVar7;
  }
LAB_14dc4bd5f:
  uStack_90 = 0xffffffff;
  uStack_8c = (uint)uVar12;
  uStack_84 = local_4c;
  TStack_f0._padding_ = CONCAT44(uVar17,uVar14);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_4c;
  TStack_f0.BaseBitIndex = uVar19;
  local_a8 = local_f8;
  uStack_a0 = uVar14;
  uStack_9c = uVar17;
  local_98 = TStack_f0.Array;
  local_88 = uVar19;
  TStack_f0.CurrentBitIndex = uStack_8c;
  if ((int)uStack_8c < (int)uVar16) {
    do {
      pFVar2 = local_f8;
      lVar23 = (longlong)(int)uVar12 * 0x20 + *(longlong *)local_f8;
      local_108 = *(longlong *)(lVar23 + 8);
      iVar10 = *(int *)(lVar23 + 0x10);
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                  *)(*pcVar5)();
        return pTVar9;
      }
      local_100 = iVar10;
      local_138 = ::FName::ToString((FName *)((longlong)TStack_f0.CurrentBitIndex * 0x20 +
                                             *(longlong *)pFVar2),local_78);
      local_130 = &local_108;
      TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,TArrayView<int_const_,int>_&&>_>
                ((TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res8,(bool *)&local_138);
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      uVar12 = (ulonglong)(uint)TStack_f0.CurrentBitIndex;
    } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetFaceSets @ 14dc4be90

TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
* __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetFaceSets
          (FClothSimulationMesh *this,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  FChaosClothSimulationModel *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
  *pTVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  FString *pFVar22;
  ForAnyElementType FVar23;
  FClothSimulationMesh *local_res8;
  undefined4 local_res10;
  TPairInitializer<FString_&&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>
  local_res18;
  uint local_108;
  uint uStack_104;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FString *local_a8;
  FClothSimulationMesh **local_a0;
  FScriptContainerElement *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined4 local_54;
  
  uVar13 = 0;
  uVar19 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar12 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (param_1 < 0) {
    return __return_storage_ptr__;
  }
  if ((this->ClothSimulationModel->ClothSimulationLodModels).ArrayNum <= param_1) {
    return __return_storage_ptr__;
  }
  pFVar1 = (this->ClothSimulationModel->ClothSimulationLodModels).AllocatorInstance.Data;
  pFVar22 = (FString *)((longlong)param_1 * 0x1f0);
  uVar15 = 1;
  local_res18.Key._0_4_ = (uint)~param_1 >> 0x1f;
  uVar14 = *(int *)((longlong)&pFVar22[0x1a].Data.ArrayNum + (longlong)pFVar1) -
           *(int *)(pFVar1 + 4 + (longlong)&pFVar22[0x1d].Data.AllocatorInstance.Data);
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_00000001;
  local_res8 = this;
  local_a8 = pFVar22;
  if (uVar14 == 0) goto LAB_14dc4c15c;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  uVar15 = 1;
  if (3 < uVar14) {
    uVar10 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_res10 = (undefined4)lVar18;
    uVar15 = 1 << ((byte)lVar18 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 == 0) ||
     (FVar23.Data = (FScriptContainerElement *)&DAT_00000001,
     *(int *)&__return_storage_ptr__->field_0x48 < (int)uVar15)) {
    *(uint *)&__return_storage_ptr__->field_0x48 = uVar15;
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
    }
    if (uVar15 != 0) {
      uVar14 = uVar15;
      if (uVar15 < 2) {
        if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
          uVar14 = 0;
          goto LAB_14dc4bfad;
        }
      }
      else {
LAB_14dc4bfad:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar14,4);
      }
      if (0 < (int)uVar15) {
        uVar17 = (ulonglong)uVar15;
        uVar10 = uVar13;
        do {
          puVar9 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar6 = uVar10 & (longlong)(int)uVar15 - 1U;
          uVar10 = uVar10 + 1;
          *(undefined4 *)(puVar9 + uVar6 * 4) = 0xffffffff;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    FVar23.Data = local_e8.Data.AllocatorInstance.Data;
    if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
      uVar15 = *(uint *)&__return_storage_ptr__->field_0x28;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
      local_108 = 0;
      uStack_104 = (uint)local_e8.Data.AllocatorInstance.Data;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uVar10 = uVar13;
      if (uVar15 != 0) {
        puVar20 = *(uint **)&__return_storage_ptr__->field_0x20;
        if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
          puVar20 = (uint *)TStack_d0.Array;
        }
        uVar14 = *puVar20;
        uVar17 = uVar13;
        while (uVar14 == 0) {
          uStack_f0 = (int)uVar17 + 0x20;
          uVar17 = (ulonglong)uStack_f0;
          iVar8 = (int)uVar10;
          local_108 = iVar8 + 1;
          uVar10 = (ulonglong)local_108;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_108)
          goto LAB_14dc4c0a2;
          uVar14 = puVar20[(longlong)iVar8 + 1];
        }
        uStack_104 = -uVar14 & uVar14;
        uVar10 = (ulonglong)uStack_104 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_res18.Value._0_4_ = (int)lVar18;
        uStack_f4 = (int)local_res18.Value + -1 + uStack_f0;
        uVar10 = (ulonglong)uStack_f4;
        if ((int)uVar15 < (int)uStack_f4) {
LAB_14dc4c0a2:
          uVar10 = (ulonglong)uVar15;
          uStack_f4 = uVar15;
        }
      }
      TStack_d0._padding_ = CONCAT44(uStack_104,local_108);
      TStack_d0.CurrentBitIndex = uStack_f4;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      TStack_d0._28_4_ = uStack_ec;
      TStack_d0.BaseBitIndex = uStack_f0;
      pFVar22 = local_a8;
      local_d8 = __return_storage_ptr__;
      if ((int)uVar10 < (int)uVar15) {
        do {
          puVar16 = (undefined8 *)((longlong)(int)uVar10 * 0x20 + *(longlong *)local_d8);
          if (*(int *)(puVar16 + 1) == 0) {
            pwVar11 = L"";
            uVar15 = uVar19;
          }
          else {
            pwVar11 = (wchar_t *)*puVar16;
            uVar15 = *(int *)(puVar16 + 1) - 1;
          }
          uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar15,pwVar11);
          uVar15 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar15;
          *(uint *)((longlong)puVar16 + 0x1c) = uVar15;
          puVar9 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                   (longlong)(int)uVar15;
          *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(puVar9 + uVar17 * 4);
          *(int *)(puVar9 + uVar17 * 4) = (int)uVar10;
          TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
          uVar10 = (ulonglong)(uint)TStack_d0.CurrentBitIndex;
          pFVar22 = local_a8;
          FVar23.Data = local_e8.Data.AllocatorInstance.Data;
        } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
      }
    }
  }
  uVar15 = (uint)FVar23.Data;
LAB_14dc4c15c:
  pFVar2 = local_res8->ClothSimulationModel;
  uVar14 = uVar19;
  if (param_1 < (pFVar2->ClothSimulationLodModels).ArrayNum) {
    uVar14 = (uint)local_res18.Key;
  }
  if ((uVar14 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
              *)(*pcVar3)();
    return pTVar7;
  }
  local_d8 = (TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
              *)((pFVar2->ClothSimulationLodModels).AllocatorInstance.Data +
                (longlong)&pFVar22[0x1a].Data.AllocatorInstance.Data);
  uVar14 = *(uint *)((longlong)local_d8 + 0x28);
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_d8 + 0x10);
  uVar10 = uVar13;
  if (uVar14 != 0) {
    uVar10 = (ulonglong)uVar14;
    pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_d8 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_d8 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = TStack_d0.Array;
    }
    uVar5 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    uVar17 = uVar13;
    uVar12 = uVar19;
    while (uVar5 == 0) {
      iVar8 = (int)uVar13;
      uVar19 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uVar19;
      uVar12 = iVar8 + 1;
      uVar13 = (ulonglong)uVar12;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14dc4c229;
      uVar5 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
    }
    uVar15 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar15 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar5 = (uVar19 - 1) + (int)lVar18;
    if ((int)uVar14 < (int)uVar5) {
      uVar5 = uVar14;
    }
    uVar10 = (ulonglong)uVar5;
  }
LAB_14dc4c229:
  TStack_d0._padding_ = CONCAT44(uVar15,uVar12);
  TStack_90.CurrentBitIndex = (int)uVar10;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._28_4_ = local_54;
  TStack_d0.BaseBitIndex = uVar19;
  TStack_90._padding_ = TStack_d0._padding_;
  TStack_90.BaseBitIndex = uVar19;
  TStack_90._28_4_ = local_54;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  if (TStack_90.CurrentBitIndex < (int)uVar14) {
    local_a0 = &local_res8;
    local_98 = (FScriptContainerElement *)local_d8;
    TStack_90.Array = TStack_d0.Array;
    TStack_d0.CurrentBitIndex = TStack_90.CurrentBitIndex;
    do {
      lVar18 = (longlong)(int)uVar10 * 0x60;
      local_res8 = (FClothSimulationMesh *)(*(longlong *)local_98 + 8 + lVar18);
      local_a8 = ::FName::ToString((FName *)(*(longlong *)local_98 + lVar18),&local_e8);
      TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_&&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>_>
                ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res18,(bool *)&local_a8);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      uVar10 = (ulonglong)(uint)TStack_90.CurrentBitIndex;
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetIndices @ 14dc4c630

TArrayView<unsigned_int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetIndices
          (FClothSimulationMesh *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  int iStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  pFVar2 = this->ClothSimulationModel;
  if ((param_1 < 0) || ((pFVar2->ClothSimulationLodModels).ArrayNum <= param_1)) {
    local_18 = 0;
    local_10 = 0;
    puVar8 = &local_18;
  }
  else {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x28);
    local_28 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x20);
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iStack_20 = iVar1;
    puVar8 = &local_28;
  }
  uVar5 = puVar8[1];
  __return_storage_ptr__->DataPtr = (uint *)*puVar8;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar5;
  return __return_storage_ptr__;
}

// GetLODIndex @ 14dc4c9e0

int __thiscall UE::Chaos::ClothAsset::FClothSimulationMesh::GetLODIndex(FClothSimulationMesh *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(this->_padding_ + 8))();
  iVar1 = iVar2 + -1;
  if (this->ClothSimulationContext->LodIndex < iVar2 + -1) {
    iVar1 = this->ClothSimulationContext->LodIndex;
  }
  return iVar1;
}

// GetManagedArrayCollection @ 14dc4cd30

TSharedPtr<FManagedArrayCollection_const_,1> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetManagedArrayCollection
          (FClothSimulationMesh *this,
          TSharedPtr<FManagedArrayCollection_const_,1> *__return_storage_ptr__,int param_1)

{
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FManagedArrayCollection *pFVar4;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<FManagedArrayCollection_const_,1> *pTVar7;
  
  if (-1 < param_1) {
    pTVar1 = this->ManagedArrayCollections;
    if (param_1 < pTVar1->ArrayNum) {
      if (param_1 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FManagedArrayCollection_const_,1> *)(*pcVar5)();
          return pTVar7;
        }
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)param_1 * 0x10 + 8);
      pFVar4 = *(FManagedArrayCollection **)(pFVar2 + (longlong)param_1 * 0x10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = pFVar4;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      goto LAB_14dc4cdc1;
    }
  }
  __return_storage_ptr__->Object = (FManagedArrayCollection *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14dc4cdc1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetMorphTargetIndices @ 14dc4d450

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetMorphTargetIndices
          (FClothSimulationMesh *this,TArrayView<int_const_,int> *__return_storage_ptr__,int param_1
          ,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArrayView<int_const_,int> *pTVar5;
  FCollectionClothSimMorphTargetConstFacade local_48;
  
  if (((-1 < param_1) && (param_1 < (this->ClothFacades).ArrayNum)) && (-1 < param_2)) {
    uVar3 = 0;
    if (param_1 < (this->ClothFacades).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<int_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = FCollectionClothConstFacade::GetNumSimMorphTargets
                      (*(FCollectionClothConstFacade **)
                        ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10));
    if (param_2 < iVar4) {
      uVar3 = 0;
      if (param_1 < (this->ClothFacades).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
      FCollectionClothConstFacade::GetSimMorphTarget
                (*(FCollectionClothConstFacade **)
                  ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10),&local_48
                 ,param_2);
      FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetSimVertex3DIndex
                (&local_48,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.ClothCollection.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMorphTargetPositionDeltas @ 14dc4d590

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetMorphTargetPositionDeltas
          (FClothSimulationMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  FCollectionClothSimMorphTargetConstFacade local_48;
  
  if (((-1 < param_1) && (param_1 < (this->ClothFacades).ArrayNum)) && (-1 < param_2)) {
    uVar3 = 0;
    if (param_1 < (this->ClothFacades).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = FCollectionClothConstFacade::GetNumSimMorphTargets
                      (*(FCollectionClothConstFacade **)
                        ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10));
    if (param_2 < iVar4) {
      uVar3 = 0;
      if (param_1 < (this->ClothFacades).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
      FCollectionClothConstFacade::GetSimMorphTarget
                (*(FCollectionClothConstFacade **)
                  ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10),&local_48
                 ,param_2);
      FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetPositionDelta
                (&local_48,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.ClothCollection.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMorphTargetTangentZDeltas @ 14dc4d6d0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetMorphTargetTangentZDeltas
          (FClothSimulationMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  FCollectionClothSimMorphTargetConstFacade local_48;
  
  if (((-1 < param_1) && (param_1 < (this->ClothFacades).ArrayNum)) && (-1 < param_2)) {
    uVar3 = 0;
    if (param_1 < (this->ClothFacades).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = FCollectionClothConstFacade::GetNumSimMorphTargets
                      (*(FCollectionClothConstFacade **)
                        ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10));
    if (param_2 < iVar4) {
      uVar3 = 0;
      if (param_1 < (this->ClothFacades).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
      FCollectionClothConstFacade::GetSimMorphTarget
                (*(FCollectionClothConstFacade **)
                  ((this->ClothFacades).AllocatorInstance.Data + (longlong)param_1 * 0x10),&local_48
                 ,param_2);
      FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetTangentZDelta
                (&local_48,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.ClothCollection.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetNormals @ 14dc4d840

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetNormals
          (FClothSimulationMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  int iStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  pFVar2 = this->ClothSimulationModel;
  if ((param_1 < 0) || ((pFVar2->ClothSimulationLodModels).ArrayNum <= param_1)) {
    local_18 = 0;
    local_10 = 0;
    puVar8 = &local_18;
  }
  else {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x18);
    local_28 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x10);
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iStack_20 = iVar1;
    puVar8 = &local_28;
  }
  uVar5 = puVar8[1];
  __return_storage_ptr__->DataPtr = (TVector<float> *)*puVar8;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar5;
  return __return_storage_ptr__;
}

// GetNumLODs @ 14dc4d9f0

int __thiscall UE::Chaos::ClothAsset::FClothSimulationMesh::GetNumLODs(FClothSimulationMesh *this)

{
  return (this->ClothSimulationModel->ClothSimulationLodModels).ArrayNum;
}

// GetNumPatternPoints @ 14dc4da10

int __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetNumPatternPoints
          (FClothSimulationMesh *this,int param_1)

{
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar1;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_18;
  
  pTVar1 = FChaosClothSimulationModel::GetPatternPositions
                     (this->ClothSimulationModel,&local_18,param_1);
  return pTVar1->ArrayNum;
}

// GetNumPoints @ 14dc4da60

int __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetNumPoints(FClothSimulationMesh *this,int param_1)

{
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar1;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  pTVar1 = FChaosClothSimulationModel::GetPositions(this->ClothSimulationModel,&local_18,param_1);
  return pTVar1->ArrayNum;
}

// GetOwnerLODIndex @ 14dc4dc50

int __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetOwnerLODIndex
          (FClothSimulationMesh *this,int param_1)

{
  return param_1;
}

// GetPatternIndices @ 14dc4dc60

TArrayView<unsigned_int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetPatternIndices
          (FClothSimulationMesh *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  int iStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  pFVar2 = this->ClothSimulationModel;
  if ((param_1 < 0) || ((pFVar2->ClothSimulationLodModels).ArrayNum <= param_1)) {
    local_18 = 0;
    local_10 = 0;
    puVar8 = &local_18;
  }
  else {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x88);
    local_28 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x80);
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iStack_20 = iVar1;
    puVar8 = &local_28;
  }
  uVar5 = puVar8[1];
  __return_storage_ptr__->DataPtr = (uint *)*puVar8;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar5;
  return __return_storage_ptr__;
}

// GetPatternPositions @ 14dc4de50

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetPatternPositions
          (FClothSimulationMesh *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  FChaosClothSimulationModel::GetPatternPositions
            (this->ClothSimulationModel,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPatternToWeldedIndices @ 14dc4de80

TArrayView<unsigned_int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetPatternToWeldedIndices
          (FClothSimulationMesh *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  int iStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  pFVar2 = this->ClothSimulationModel;
  if ((param_1 < 0) || ((pFVar2->ClothSimulationLodModels).ArrayNum <= param_1)) {
    local_18 = 0;
    local_10 = 0;
    puVar8 = &local_18;
  }
  else {
    if (param_1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x98);
    local_28 = *(undefined8 *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x90);
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iStack_20 = iVar1;
    puVar8 = &local_28;
  }
  uVar5 = puVar8[1];
  __return_storage_ptr__->DataPtr = (uint *)*puVar8;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar5;
  return __return_storage_ptr__;
}

// GetPositions @ 14dc4e0e0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetPositions
          (FClothSimulationMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  FChaosClothSimulationModel::GetPositions
            (this->ClothSimulationModel,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRefToLocalMatrices @ 14dc4eac0

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetRefToLocalMatrices(FClothSimulationMesh *this)

{
  return &this->ClothSimulationContext->RefToLocalMatrices;
}

// GetReferenceBoneIndex @ 14dc4eae0

int __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetReferenceBoneIndex(FClothSimulationMesh *this)

{
  return this->ClothSimulationModel->ReferenceBoneIndex;
}

// GetReferenceBoneTransform @ 14dc4eaf0

TTransform<double> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetReferenceBoneTransform
          (FClothSimulationMesh *this,TTransform<double> *__return_storage_ptr__)

{
  int iVar1;
  FClothSimulationContext *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  bool bVar14;
  TTransform<double> *pTVar15;
  double *pdVar16;
  
  pFVar2 = this->ClothSimulationContext;
  iVar1 = this->ClothSimulationModel->ReferenceBoneIndex;
  if ((-1 < iVar1) && (iVar1 < (pFVar2->BoneTransforms).ArrayNum)) {
    if (iVar1 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        pTVar15 = (TTransform<double> *)(*pcVar4)();
        return pTVar15;
      }
    }
    pFVar3 = (pFVar2->BoneTransforms).AllocatorInstance.Data;
    pTVar15 = (TTransform<double> *)(**(code **)(this->_padding_ + 0xc0))(this);
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar6,0);
    auVar8._0_8_ = (double)fVar5;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar8;
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar9;
    auVar10._8_4_ = SUB84((double)fVar6,0);
    auVar10._0_8_ = (double)fVar5;
    auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar10;
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar11;
    auVar12._8_4_ = SUB84((double)fVar6,0);
    auVar12._0_8_ = (double)fVar5;
    auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar12;
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,(TTransform<double> *)(pFVar3 + (longlong)iVar1 * 0x60),
               pTVar15);
    return __return_storage_ptr__;
  }
  pdVar16 = (double *)(**(code **)(this->_padding_ + 0xc0))(this);
  dVar13 = pdVar16[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar16;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar13;
  dVar13 = pdVar16[3];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar16[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar13;
  dVar13 = pdVar16[5];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar16[4];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar13;
  dVar13 = pdVar16[7];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar16[6];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar13;
  dVar13 = pdVar16[9];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar16[8];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar13;
  dVar13 = pdVar16[0xb];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar16[10];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar13;
  return __return_storage_ptr__;
}

// GetTethers @ 14dc4ffb0

TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetTethers
          (FClothSimulationMesh *this,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,bool param_2)

{
  FChaosClothSimulationModel::GetTethers(this->ClothSimulationModel,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTransitionDownSkinData @ 14dc4ffe0

TArrayView<FMeshToMeshVertData_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetTransitionDownSkinData
          (FClothSimulationMesh *this,
          TArrayView<FMeshToMeshVertData_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArrayView<FMeshToMeshVertData_const_,int> *pTVar7;
  
  pFVar2 = this->ClothSimulationModel;
  uVar6 = 0;
  if (param_1 < (pFVar2->ClothSimulationLodModels).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArrayView<FMeshToMeshVertData_const_,int> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x68);
  __return_storage_ptr__->DataPtr =
       *(FMeshToMeshVertData **)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x60);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArrayView<FMeshToMeshVertData_const_,int> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetTransitionUpSkinData @ 14dc500a0

TArrayView<FMeshToMeshVertData_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetTransitionUpSkinData
          (FClothSimulationMesh *this,
          TArrayView<FMeshToMeshVertData_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FChaosClothSimulationModel *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArrayView<FMeshToMeshVertData_const_,int> *pTVar7;
  
  pFVar2 = this->ClothSimulationModel;
  uVar6 = 0;
  if (param_1 < (pFVar2->ClothSimulationLodModels).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArrayView<FMeshToMeshVertData_const_,int> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (pFVar2->ClothSimulationLodModels).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x58);
  __return_storage_ptr__->DataPtr =
       *(FMeshToMeshVertData **)(pFVar3 + (longlong)param_1 * 0x1f0 + 0x50);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArrayView<FMeshToMeshVertData_const_,int> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetVertexSets @ 14dc50500

TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
* __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetVertexSets
          (FClothSimulationMesh *this,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  FChaosClothSimulationModel *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
  *pTVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  FString *pFVar22;
  ForAnyElementType FVar23;
  FClothSimulationMesh *local_res8;
  undefined4 local_res10;
  TPairInitializer<FString_&&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>
  local_res18;
  uint local_108;
  uint uStack_104;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FString *local_a8;
  FClothSimulationMesh **local_a0;
  FScriptContainerElement *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined4 local_54;
  
  uVar13 = 0;
  uVar19 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar12 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (param_1 < 0) {
    return __return_storage_ptr__;
  }
  if ((this->ClothSimulationModel->ClothSimulationLodModels).ArrayNum <= param_1) {
    return __return_storage_ptr__;
  }
  pFVar1 = (this->ClothSimulationModel->ClothSimulationLodModels).AllocatorInstance.Data;
  pFVar22 = (FString *)((longlong)param_1 * 0x1f0);
  uVar15 = 1;
  local_res18.Key._0_4_ = (uint)~param_1 >> 0x1f;
  uVar14 = *(int *)((longlong)&pFVar22[0x10].Data.ArrayNum + (longlong)pFVar1) -
           *(int *)(pFVar1 + 4 + (longlong)&pFVar22[0x13].Data.AllocatorInstance.Data);
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&DAT_00000001;
  local_res8 = this;
  local_a8 = pFVar22;
  if (uVar14 == 0) goto LAB_14dc507cc;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  uVar15 = 1;
  if (3 < uVar14) {
    uVar10 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_res10 = (undefined4)lVar18;
    uVar15 = 1 << ((byte)lVar18 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 == 0) ||
     (FVar23.Data = (FScriptContainerElement *)&DAT_00000001,
     *(int *)&__return_storage_ptr__->field_0x48 < (int)uVar15)) {
    *(uint *)&__return_storage_ptr__->field_0x48 = uVar15;
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
    }
    if (uVar15 != 0) {
      uVar14 = uVar15;
      if (uVar15 < 2) {
        if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
          uVar14 = 0;
          goto LAB_14dc5061d;
        }
      }
      else {
LAB_14dc5061d:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar14,4);
      }
      if (0 < (int)uVar15) {
        uVar17 = (ulonglong)uVar15;
        uVar10 = uVar13;
        do {
          puVar9 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar6 = uVar10 & (longlong)(int)uVar15 - 1U;
          uVar10 = uVar10 + 1;
          *(undefined4 *)(puVar9 + uVar6 * 4) = 0xffffffff;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    FVar23.Data = local_e8.Data.AllocatorInstance.Data;
    if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
      uVar15 = *(uint *)&__return_storage_ptr__->field_0x28;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
      local_108 = 0;
      uStack_104 = (uint)local_e8.Data.AllocatorInstance.Data;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uVar10 = uVar13;
      if (uVar15 != 0) {
        puVar20 = *(uint **)&__return_storage_ptr__->field_0x20;
        if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
          puVar20 = (uint *)TStack_d0.Array;
        }
        uVar14 = *puVar20;
        uVar17 = uVar13;
        while (uVar14 == 0) {
          uStack_f0 = (int)uVar17 + 0x20;
          uVar17 = (ulonglong)uStack_f0;
          iVar8 = (int)uVar10;
          local_108 = iVar8 + 1;
          uVar10 = (ulonglong)local_108;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_108)
          goto LAB_14dc50712;
          uVar14 = puVar20[(longlong)iVar8 + 1];
        }
        uStack_104 = -uVar14 & uVar14;
        uVar10 = (ulonglong)uStack_104 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_res18.Value._0_4_ = (int)lVar18;
        uStack_f4 = (int)local_res18.Value + -1 + uStack_f0;
        uVar10 = (ulonglong)uStack_f4;
        if ((int)uVar15 < (int)uStack_f4) {
LAB_14dc50712:
          uVar10 = (ulonglong)uVar15;
          uStack_f4 = uVar15;
        }
      }
      TStack_d0._padding_ = CONCAT44(uStack_104,local_108);
      TStack_d0.CurrentBitIndex = uStack_f4;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      TStack_d0._28_4_ = uStack_ec;
      TStack_d0.BaseBitIndex = uStack_f0;
      pFVar22 = local_a8;
      local_d8 = __return_storage_ptr__;
      if ((int)uVar10 < (int)uVar15) {
        do {
          puVar16 = (undefined8 *)((longlong)(int)uVar10 * 0x20 + *(longlong *)local_d8);
          if (*(int *)(puVar16 + 1) == 0) {
            pwVar11 = L"";
            uVar15 = uVar19;
          }
          else {
            pwVar11 = (wchar_t *)*puVar16;
            uVar15 = *(int *)(puVar16 + 1) - 1;
          }
          uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar15,pwVar11);
          uVar15 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar15;
          *(uint *)((longlong)puVar16 + 0x1c) = uVar15;
          puVar9 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                   (longlong)(int)uVar15;
          *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(puVar9 + uVar17 * 4);
          *(int *)(puVar9 + uVar17 * 4) = (int)uVar10;
          TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
          uVar10 = (ulonglong)(uint)TStack_d0.CurrentBitIndex;
          pFVar22 = local_a8;
          FVar23.Data = local_e8.Data.AllocatorInstance.Data;
        } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
      }
    }
  }
  uVar15 = (uint)FVar23.Data;
LAB_14dc507cc:
  pFVar2 = local_res8->ClothSimulationModel;
  uVar14 = uVar19;
  if (param_1 < (pFVar2->ClothSimulationLodModels).ArrayNum) {
    uVar14 = (uint)local_res18.Key;
  }
  if ((uVar14 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
              *)(*pcVar3)();
    return pTVar7;
  }
  local_d8 = (TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
              *)((pFVar2->ClothSimulationLodModels).AllocatorInstance.Data +
                (longlong)&pFVar22[0x10].Data.AllocatorInstance.Data);
  uVar14 = *(uint *)((longlong)local_d8 + 0x28);
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_d8 + 0x10);
  uVar10 = uVar13;
  if (uVar14 != 0) {
    uVar10 = (ulonglong)uVar14;
    pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_d8 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)local_d8 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = TStack_d0.Array;
    }
    uVar5 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    uVar17 = uVar13;
    uVar12 = uVar19;
    while (uVar5 == 0) {
      iVar8 = (int)uVar13;
      uVar19 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uVar19;
      uVar12 = iVar8 + 1;
      uVar13 = (ulonglong)uVar12;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14dc50899;
      uVar5 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
    }
    uVar15 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar15 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar5 = (uVar19 - 1) + (int)lVar18;
    if ((int)uVar14 < (int)uVar5) {
      uVar5 = uVar14;
    }
    uVar10 = (ulonglong)uVar5;
  }
LAB_14dc50899:
  TStack_d0._padding_ = CONCAT44(uVar15,uVar12);
  TStack_90.CurrentBitIndex = (int)uVar10;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._28_4_ = local_54;
  TStack_d0.BaseBitIndex = uVar19;
  TStack_90._padding_ = TStack_d0._padding_;
  TStack_90.BaseBitIndex = uVar19;
  TStack_90._28_4_ = local_54;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  if (TStack_90.CurrentBitIndex < (int)uVar14) {
    local_a0 = &local_res8;
    local_98 = (FScriptContainerElement *)local_d8;
    TStack_90.Array = TStack_d0.Array;
    TStack_d0.CurrentBitIndex = TStack_90.CurrentBitIndex;
    do {
      lVar18 = (longlong)(int)uVar10 * 0x60;
      local_res8 = (FClothSimulationMesh *)(*(longlong *)local_98 + 8 + lVar18);
      local_a8 = ::FName::ToString((FName *)(*(longlong *)local_98 + lVar18),&local_e8);
      TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_&&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>_>
                ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res18,(bool *)&local_a8);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      uVar10 = (ulonglong)(uint)TStack_90.CurrentBitIndex;
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetWeightMapIndices @ 14dc50990

TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetWeightMapIndices
          (FClothSimulationMesh *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint local_res8 [2];
  undefined4 local_res10;
  int local_res20;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  uint local_90;
  TPairInitializer<FString_&&,int_&> local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  FString *local_58;
  uint *local_50;
  FString local_48;
  
  uVar13 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  (**(code **)(this->_padding_ + 0x70))(this,&local_98);
  uVar4 = local_90;
  uVar14 = (ulong64)(int)local_90;
  if (local_90 <=
      (uint)(*(int *)&__return_storage_ptr__->field_0x8 -
            *(int *)&__return_storage_ptr__->field_0x34)) goto LAB_14dc50c1f;
  if ((int)local_90 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum(uVar14);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,local_90);
  uVar11 = 1;
  if (3 < uVar4) {
    uVar9 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    local_res10 = (undefined4)lVar1;
    uVar11 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 == 0) ||
     (*(int *)&__return_storage_ptr__->field_0x48 < (int)uVar11)) {
    *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
    if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
    }
    if (uVar11 != 0) {
      uVar4 = uVar11;
      if (uVar11 < 2) {
        if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
          uVar4 = 0;
          goto LAB_14dc50a6d;
        }
      }
      else {
LAB_14dc50a6d:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar4,4);
      }
      if (0 < (int)uVar11) {
        uVar15 = (ulonglong)uVar11;
        uVar9 = uVar13;
        do {
          puVar8 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(puVar8 + uVar5 * 4) = 0xffffffff;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
      uVar4 = *(uint *)&__return_storage_ptr__->field_0x28;
      local_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
      uStack_b4 = 1;
      local_b8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uVar9 = uVar13;
      if (uVar4 != 0) {
        puVar16 = *(uint **)&__return_storage_ptr__->field_0x20;
        if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)local_78.Array;
        }
        uVar11 = *puVar16;
        uVar15 = uVar13;
        while (uVar11 == 0) {
          uStack_a0 = (int)uVar15 + 0x20;
          uVar15 = (ulonglong)uStack_a0;
          iVar7 = (int)uVar9;
          local_b8 = iVar7 + 1;
          uVar9 = (ulonglong)local_b8;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_b8)
          goto LAB_14dc50b5b;
          uVar11 = puVar16[(longlong)iVar7 + 1];
        }
        uStack_b4 = -uVar11 & uVar11;
        uVar9 = (ulonglong)uStack_b4 * 2 + 1;
        lVar1 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        local_res20 = (int)lVar1;
        uStack_a4 = local_res20 + -1 + uStack_a0;
        uVar9 = (ulonglong)uStack_a4;
        if ((int)uVar4 < (int)uStack_a4) {
LAB_14dc50b5b:
          uVar9 = (ulonglong)uVar4;
          uStack_a4 = uVar4;
        }
      }
      local_78._padding_ = CONCAT44(uStack_b4,local_b8);
      local_78.CurrentBitIndex = uStack_a4;
      local_78.UnvisitedBitMask = 0xffffffff;
      local_78._28_4_ = uStack_9c;
      local_78.BaseBitIndex = uStack_a0;
      local_88.Value = (int *)__return_storage_ptr__;
      if ((int)uVar9 < (int)uVar4) {
        do {
          puVar12 = (undefined8 *)((longlong)(int)uVar9 * 0x20 + *(longlong *)local_88.Value);
          if (*(int *)(puVar12 + 1) == 0) {
            pwVar10 = L"";
            uVar4 = 0;
          }
          else {
            pwVar10 = (wchar_t *)*puVar12;
            uVar4 = *(int *)(puVar12 + 1) - 1;
          }
          uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,pwVar10);
          uVar4 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar4;
          *(uint *)((longlong)puVar12 + 0x1c) = uVar4;
          puVar8 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar15 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar4
          ;
          *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar8 + uVar15 * 4);
          *(int *)(puVar8 + uVar15 * 4) = (int)uVar9;
          local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
          uVar9 = (ulonglong)(uint)local_78.CurrentBitIndex;
        } while (local_78.CurrentBitIndex < (local_78.Array)->NumBits);
      }
    }
  }
  uVar14 = (ulong64)local_90;
LAB_14dc50c1f:
  local_res8[0] = 0;
  if (0 < (int)uVar14) {
    do {
      uVar11 = (uint)uVar13;
      uVar4 = 0;
      if ((int)uVar11 < (int)uVar14) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      local_58 = ::FName::ToString((FName *)((longlong)local_98 + (longlong)(int)uVar11 * 8),
                                   &local_48);
      local_50 = local_res8;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,int_&>_>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_88,(bool *)&local_58);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar14 = (ulong64)local_90;
      local_res8[0] = local_res8[0] + 1;
      uVar13 = (ulonglong)local_res8[0];
    } while ((int)local_res8[0] < (int)local_90);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return __return_storage_ptr__;
}

// GetWeightMapNames @ 14dc50d00

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetWeightMapNames
          (FClothSimulationMesh *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  FChaosClothSimulationModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 < 0) {
    return __return_storage_ptr__;
  }
  pFVar1 = this->ClothSimulationModel;
  if (param_1 < (pFVar1->ClothSimulationLodModels).ArrayNum) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                *)((pFVar1->ClothSimulationLodModels).AllocatorInstance.Data +
                  (longlong)param_1 * 0x1f0 + 0xa0),__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetWeightMaps @ 14dc50dc0

TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::GetWeightMaps
          (FClothSimulationMesh *this,
          TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FChaosClothSimulationModel *pFVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  void *local_58;
  uint local_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  (**(code **)(this->_padding_ + 0x70))(this,&local_58,param_1);
  uVar12 = (ulonglong)local_50;
  if ((int)local_50 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar12);
  }
  if (*piVar1 < (int)local_50) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_50,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar12 = (ulonglong)local_50;
  }
  uVar13 = 0;
  if (0 < (int)uVar12) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (int)uVar12) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pvVar6 = local_58;
      pFVar4 = this->ClothSimulationModel;
      uVar8 = 0;
      if (param_1 < (pFVar4->ClothSimulationLodModels).ArrayNum) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pTVar11 = TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)((pFVar4->ClothSimulationLodModels).AllocatorInstance.Data +
                          (longlong)param_1 * 0x1f0 + 0xa0),*(FName *)((longlong)pvVar6 + lVar14));
      if ((pTVar11 == (TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      local_48 = *(undefined8 *)&pTVar11->field_0x8;
      iVar3 = *(int *)&pTVar11->field_0x10;
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TArrayView<float_const_,int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      iStack_40 = iVar3;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar2 = local_48;
      *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_3c,iStack_40);
      uVar12 = (ulonglong)local_50;
    } while ((int)uVar13 < (int)local_50);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return __return_storage_ptr__;
}

// IsValidLODIndex @ 14dc52af0

bool __thiscall
UE::Chaos::ClothAsset::FClothSimulationMesh::IsValidLODIndex(FClothSimulationMesh *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = (**(code **)(this->_padding_ + 8))();
    if (param_1 < iVar1) {
      return true;
    }
  }
  return false;
}

