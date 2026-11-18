// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 9

// StaticStruct @ 14dc2a310

UScriptStruct * __cdecl FChaosClothSimulationModel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
    Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationModel,(UObject *)pUVar1,
                         L"ChaosClothSimulationModel");
  }
  return Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton;
}

// FChaosClothSimulationModel @ 14dc31f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChaosClothSimulationModel * __thiscall
FChaosClothSimulationModel::FChaosClothSimulationModel
          (FChaosClothSimulationModel *this,
          TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_1,
          FReferenceSkeleton *param_2,
          TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *this_00;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar3;
  TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_02;
  FName *pFVar4;
  uint *puVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FChaosClothSimulationModel *pFVar14;
  int *piVar15;
  TArrayView<float_const_,int> *pTVar16;
  FString *pFVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_03;
  TArrayView<int_const_,int> *pTVar19;
  ulonglong uVar20;
  ulong64 uVar21;
  TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *this_04;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar22;
  int *piVar23;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar24;
  TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_05;
  ForAnyElementType FVar25;
  ForElementType<unsigned_int> FVar26;
  uint uVar27;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar28;
  FScriptContainerElement *pFVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  ushort *puVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_> *_Dst;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong lVar42;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar43;
  undefined1 auStackY_5d8 [32];
  undefined1 local_588;
  undefined1 local_587;
  undefined1 local_586;
  undefined1 local_585;
  undefined1 local_584 [4];
  uint local_580 [2];
  TArray<TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_578;
  uint local_568;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_560;
  longlong local_558;
  undefined2 local_550;
  undefined2 local_54e;
  uint local_54c;
  longlong local_548;
  FCollectionClothConstFacade local_540;
  longlong local_528;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_520;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_510;
  undefined1 local_500 [8];
  uint local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  FChaosClothSimulationModel *local_4d8;
  FReferenceSkeleton *local_4d0;
  uint local_4c8;
  uint uStack_4c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4c0;
  undefined4 local_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  undefined4 uStack_4ac;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_498;
  TArray<FName,TSizedDefaultAllocator<32>_> local_488;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *local_478;
  TArray<FName,TSizedDefaultAllocator<32>_> local_470;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_460;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_450;
  undefined4 local_440;
  int local_43c;
  undefined4 local_438;
  longlong local_430;
  FName *local_428;
  FName local_420;
  FName *local_418;
  FName local_410;
  ushort local_408 [4];
  TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *local_400;
  int *local_3f8;
  TSharedPtr<FManagedArrayCollection_const_,1> local_3f0;
  ushort local_3e0 [4];
  FCollectionClothSelectionConstFacade local_3d8;
  ushort local_3c0 [4];
  longlong *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b0;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FScriptContainerElement *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FSparseArrayAllocationInfo local_368;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_358;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_348;
  TArray<FChaosClothSimulationLodModel,TSizedDefaultAllocator<32>_> local_338;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_328;
  FString local_318;
  TStringView<wchar_t> local_308;
  TStringView<wchar_t> local_2f8;
  FString local_2e8;
  FCollectionClothSimAccessoryMeshConstFacade local_2d8;
  TArrayView<float_const_,int> local_2b8;
  FString local_2a8;
  FString local_298;
  TArrayView<int_const_,int> local_288;
  undefined1 local_278 [32];
  ForElementType<unsigned_int> local_258;
  uint local_250;
  int local_24c;
  int local_248;
  uint local_244;
  FScriptContainerElement local_240 [8];
  ForAnyElementType local_238;
  uint local_230;
  TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> local_228;
  TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> local_1d8;
  FCollectionPropertyConstFacade local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  piVar15 = &(this->UsedBoneIndices).ArrayMax;
  (this->ClothSimulationLodModels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ClothSimulationLodModels).ArrayMax;
  piVar23 = &(this->ClothSimulationLodModels).ArrayNum;
  *piVar1 = 0;
  (this->UsedBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBoneNames).ArrayNum = 0;
  (this->UsedBoneNames).ArrayMax = 0;
  (this->UsedBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar23 = 0;
  (this->UsedBoneIndices).ArrayNum = 0;
  *piVar15 = 0;
  this->ReferenceBoneIndex = -1;
  uVar35 = param_1->ArrayNum;
  local_4d8 = this;
  local_4d0 = param_2;
  local_478 = param_1;
  local_400 = param_3;
  local_3f8 = piVar15;
  if ((int)uVar35 < 1) {
    if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
    }
  }
  else {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1f0,8,uVar35,(ForAnyElementType *)this,piVar23,piVar1);
    DefaultConstructItems<FChaosClothSimulationLodModel,int>
              ((this->ClothSimulationLodModels).AllocatorInstance.Data + (longlong)iVar12 * 0x1f0,
               uVar35);
  }
  this->ReferenceBoneIndex = -1;
  local_54c = 0;
  if (0 < (int)uVar35) {
    local_4e0 = 0;
    local_430 = (longlong)(int)uVar35;
    do {
      lVar33 = local_4e0;
      uVar35 = local_54c;
      uVar40 = ~local_54c >> 0x1f;
      uVar27 = 0;
      if ((int)local_54c < param_1->ArrayNum) {
        uVar27 = uVar40;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
        return pFVar14;
      }
      lVar42 = lVar33 * 0x10;
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::FCollectionClothConstFacade
                (&local_540,
                 (TSharedRef<FManagedArrayCollection_const_,1> *)
                 ((param_1->AllocatorInstance).Data + lVar42));
      if (uVar35 == 0) {
        UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetReferenceBoneName(&local_540);
        iVar12 = -1;
        if ((local_410 != (FName)0x0) &&
           (piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)&local_4d0->RawNameToIndexMap,local_410), piVar15 != (int *)0x0)) {
          iVar12 = *piVar15;
        }
        this->ReferenceBoneIndex = iVar12;
      }
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetWeightMapNames(&local_540,&local_488);
      uVar27 = 0;
      if ((int)uVar35 < (this->ClothSimulationLodModels).ArrayNum) {
        uVar27 = uVar40;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
        return pFVar14;
      }
      pTVar28 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((this->ClothSimulationLodModels).AllocatorInstance.Data + lVar33 * 0x1f0);
      local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4a8.ArrayNum = 0;
      local_4a8.ArrayMax = 0;
      local_560 = pTVar28;
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::BuildSimulationMesh
                (&local_540,pTVar28,pTVar28 + 1,
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar28 + 2),
                 (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(pTVar28 + 7),
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar28 + 8),
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar28 + 9),&local_4a8);
      uVar27 = 0;
      if ((int)uVar35 < param_1->ArrayNum) {
        uVar27 = uVar40;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
        return pFVar14;
      }
      pFVar31 = (param_1->AllocatorInstance).Data;
      local_3f0.Object = *(FManagedArrayCollection **)(pFVar31 + lVar42);
      local_3f0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar31 + lVar42 + 8);
      if (local_3f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_3f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_3f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      Chaos::Softs::FCollectionPropertyConstFacade::FCollectionPropertyConstFacade
                (&local_188,&local_3f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3f0.SharedReferenceCount.ReferenceController);
      this_01 = (TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)(pTVar28 + 10);
      TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Reserve(this_01,local_488.ArrayNum);
      iVar12 = local_488.ArrayNum;
      pFVar4 = (FName *)(local_488.AllocatorInstance.Data + (longlong)local_488.ArrayNum * 8);
      FVar25.Data = local_488.AllocatorInstance.Data;
      while( true ) {
        if (local_488.ArrayNum != iVar12) {
          local_588 = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_588);
        }
        pTVar10 = local_478;
        if ((FName *)FVar25.Data == pFVar4) break;
        pTVar16 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetWeightMap
                            (&local_540,&local_2b8,(FName *)FVar25.Data);
        local_418 = (FName *)FVar25.Data;
        TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FName_const_&>_>
                  (this_01,(TKeyInitializer<FName_const_&> *)local_500,(bool *)&local_418);
        pTVar24 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                  (*(longlong *)&this_01->Elements + (longlong)(int)local_500._0_4_ * 0x20 + 8);
        TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                  (pTVar24,pTVar16->DataPtr,pTVar16->ArrayNum,pTVar24->ArrayMax);
        FVar25.Data = FVar25.Data + 8;
      }
      uVar35 = 0;
      if ((int)local_54c < local_478->ArrayNum) {
        uVar35 = uVar40;
      }
      if ((uVar35 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
        return pFVar14;
      }
      UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::
      FCollectionClothSelectionConstFacade
                (&local_3d8,
                 (TSharedRef<FManagedArrayCollection_const_,1> *)
                 ((pTVar10->AllocatorInstance).Data + lVar42));
      UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetNames(&local_3d8,&local_498);
      pTVar28 = local_560;
      this_02 = (TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)(local_560 + 0x10);
      TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Reserve(this_02,local_498.ArrayNum);
      TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)(pTVar28 + 0x1a),local_498.ArrayNum);
      iVar12 = local_498.ArrayNum;
      pFVar4 = (FName *)(local_498.AllocatorInstance.Data + (longlong)local_498.ArrayNum * 8);
      FVar25.Data = local_498.AllocatorInstance.Data;
      while( true ) {
        iVar34 = 0;
        if (local_498.ArrayNum != iVar12) {
          local_587 = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_587);
        }
        if ((FName *)FVar25.Data == pFVar4) break;
        if (0 < (int)(local_188.KeyNameIndices._8_4_ - local_188.KeyNameIndices._52_4_)) {
          do {
            pFVar17 = Chaos::Softs::FCollectionPropertyConstFacade::
                      GetValue<FString_const_&,FString>
                                (&local_188,iVar34,&local_188.StringValueArray);
            pFVar17 = ::FString::FString(&local_2a8,pFVar17);
            local_388 = (pFVar17->Data).AllocatorInstance.Data;
            iVar30 = (pFVar17->Data).ArrayNum;
            iStack_380 = iVar30 + -1;
            if (iVar30 == 0) {
              iStack_380 = 0;
            }
            local_308._12_4_ = uStack_37c;
            local_308.Size = iStack_380;
            local_308.DataPtr = (wchar_t *)local_388;
            bVar11 = ::FName::Equals(*(FName *)FVar25.Data,&local_308);
            pFVar31 = (pFVar17->Data).AllocatorInstance.Data;
            if (pFVar31 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar31);
            }
            if (bVar11) goto LAB_14dc32453;
            iVar34 = iVar34 + 1;
          } while (iVar34 < (int)(local_188.KeyNameIndices._8_4_ - local_188.KeyNameIndices._52_4_))
          ;
        }
        pFVar17 = ::FName::ToString((FName *)FVar25.Data,&local_318);
        bVar11 = ::FString::StartsWith(pFVar17,L"_",1,IgnoreCase);
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
LAB_14dc32453:
          UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionGroup
                    (&local_3d8,&local_420);
          if (local_420 == UE::Chaos::ClothAsset::ClothCollectionGroup::SimVertices3D) {
            pTVar18 = UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionSet
                                (&local_3d8,(FName *)FVar25.Data);
            this_05 = this_02;
          }
          else {
            if (local_420 != UE::Chaos::ClothAsset::ClothCollectionGroup::SimFaces)
            goto LAB_14dc32547;
            pTVar18 = UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionSet
                                (&local_3d8,(FName *)FVar25.Data);
            this_05 = (TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                       *)(local_560 + 0x1a);
          }
          this_03 = TMapBase<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    ::Emplace<FName_const_&>
                              ((TMapBase<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                *)this_05,(FName *)FVar25.Data);
          if (this_03 != pTVar18) {
            UE::Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      (&this_03->Hash,&this_03->HashSize,&pTVar18->Hash,pTVar18->HashSize);
            iVar34 = *(int *)&(pTVar18->Elements).field_0x8;
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(&this_03->Elements,iVar34);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar34,(ForAnyElementType *)this_03,
                       (int *)&(this_03->Elements).field_0x8,(int *)&(this_03->Elements).field_0xc);
            puVar2 = &(pTVar18->Elements).field_0x10;
            *(undefined4 *)&(this_03->Elements).field_0x30 =
                 *(undefined4 *)&(pTVar18->Elements).field_0x30;
            this_00 = &(this_03->Elements).field_0x10;
            *(undefined4 *)&(this_03->Elements).field_0x34 =
                 *(undefined4 *)&(pTVar18->Elements).field_0x34;
            if (this_00 != puVar2) {
              TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                         (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
            }
            if (iVar34 != 0) {
              memcpy(*(void **)&this_03->Elements,*(void **)&pTVar18->Elements,
                     (longlong)iVar34 * 0xc);
            }
          }
        }
LAB_14dc32547:
        FVar25.Data = FVar25.Data + 8;
      }
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetUserDefinedAttributeNames<int>
                (&local_540,&local_470,&UE::Chaos::ClothAsset::ClothCollectionGroup::SimFaces);
      pTVar28 = local_560;
      TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)(local_560 + 0x15),local_470.ArrayNum);
      iVar12 = local_470.ArrayNum;
      pFVar4 = (FName *)(local_470.AllocatorInstance.Data + (longlong)local_470.ArrayNum * 8);
      FVar25.Data = local_470.AllocatorInstance.Data;
      while( true ) {
        uVar41 = 0;
        if (local_470.ArrayNum != iVar12) {
          local_586 = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_586);
        }
        if ((FName *)FVar25.Data == pFVar4) break;
        if (0 < (int)(local_188.KeyNameIndices._8_4_ - local_188.KeyNameIndices._52_4_)) {
          do {
            pFVar17 = Chaos::Softs::FCollectionPropertyConstFacade::
                      GetValue<FString_const_&,FString>
                                (&local_188,(int)uVar41,&local_188.StringValueArray);
            pFVar17 = ::FString::FString(&local_298,pFVar17);
            local_378 = (pFVar17->Data).AllocatorInstance.Data;
            iVar34 = (pFVar17->Data).ArrayNum;
            iStack_370 = iVar34 + -1;
            if (iVar34 == 0) {
              iStack_370 = 0;
            }
            local_2f8._12_4_ = uStack_36c;
            local_2f8.Size = iStack_370;
            local_2f8.DataPtr = (wchar_t *)local_378;
            bVar11 = ::FName::Equals(*(FName *)FVar25.Data,&local_2f8);
            pFVar31 = (pFVar17->Data).AllocatorInstance.Data;
            if (pFVar31 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar31);
            }
            if (bVar11) goto LAB_14dc326a3;
            uVar35 = (int)uVar41 + 1;
            uVar41 = (ulonglong)uVar35;
          } while ((int)uVar35 <
                   (int)(local_188.KeyNameIndices._8_4_ - local_188.KeyNameIndices._52_4_));
        }
        pFVar17 = ::FName::ToString((FName *)FVar25.Data,&local_2e8);
        bVar11 = ::FString::StartsWith(pFVar17,L"_",1,IgnoreCase);
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
LAB_14dc326a3:
          pTVar19 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetUserDefinedAttribute<int>
                              (&local_540,&local_288,(FName *)FVar25.Data,
                               &UE::Chaos::ClothAsset::ClothCollectionGroup::SimFaces);
          local_428 = (FName *)FVar25.Data;
          TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<FName_const_&>_>
                    ((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)(pTVar28 + 0x15),(TKeyInitializer<FName_const_&> *)(local_500 + 4),
                     (bool *)&local_428);
          iVar34 = pTVar19->ArrayNum;
          piVar15 = pTVar19->DataPtr;
          pFVar31 = pTVar28[0x15].AllocatorInstance.Data + (longlong)(int)local_500._4_4_ * 0x20 + 8
          ;
          iVar30 = *(int *)(pFVar31 + 0xc);
          *(int *)&pFVar31[8].field_0x0 = iVar34;
          if ((iVar34 != 0) || (iVar30 != 0)) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar34,iVar30,(ForAnyElementType *)pFVar31,iVar34,(int *)(pFVar31 + 0xc))
            ;
            if (iVar34 != 0) {
              memcpy(*(void **)&pFVar31->field_0x0,piVar15,(longlong)iVar34 << 2);
            }
            goto LAB_14dc32758;
          }
          *(int *)(pFVar31 + 0xc) = 0;
          FVar25.Data = FVar25.Data + 8;
        }
        else {
LAB_14dc32758:
          FVar25.Data = FVar25.Data + 8;
        }
      }
      uVar35 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimVertices3D(&local_540);
      local_4f8 = uVar35;
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneIndices(&local_540,&local_510);
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimBoneWeights(&local_540,&local_450);
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetTetherKinematicIndex
                (&local_540,&local_520);
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetTetherReferenceLength
                (&local_540,&local_460);
      local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_578.ArrayNum = 0;
      local_578.ArrayMax = 0;
      iVar12 = pTVar28[3].ArrayNum;
      if (iVar12 < (int)uVar35) {
        iVar34 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x4c,4,uVar35 - iVar12,&pTVar28[3].AllocatorInstance,
                            &pTVar28[3].ArrayNum,&pTVar28[3].ArrayMax);
        DefaultConstructItems<FClothVertBoneData,int>
                  (pTVar28[3].AllocatorInstance.Data + (longlong)iVar34 * 0x4c,uVar35 - iVar12);
        uVar27 = local_578.ArrayNum;
      }
      else {
        if ((int)uVar35 < 0) goto LAB_14dc33eb7;
        uVar27 = 0;
        if ((int)uVar35 < iVar12) {
          uVar40 = iVar12 - uVar35;
          uVar38 = uVar41;
          if ((int)(uVar40 | uVar35) < 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            uVar38 = (ulonglong)(uint)local_578.ArrayNum;
          }
          uVar27 = (uint)uVar38;
          if (uVar40 != 0) {
            pFVar31 = pTVar28[3].AllocatorInstance.Data + (longlong)(int)uVar35 * 0x4c;
            iVar12 = (pTVar28[3].ArrayNum - uVar40) - uVar35;
            if (iVar12 != 0) {
              memmove(pFVar31,pFVar31 + (longlong)(int)uVar40 * 0x4c,(longlong)iVar12 * 0x4c);
            }
            iVar12 = pTVar28[3].ArrayNum - uVar40;
            pTVar28[3].ArrayNum = iVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x4c,4,&pTVar28[3].AllocatorInstance,iVar12,&pTVar28[3].ArrayMax);
            uVar27 = local_578.ArrayNum;
          }
        }
      }
      if ((int)uVar27 < (int)uVar35) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar35 - uVar27,&local_578.AllocatorInstance,&local_578.ArrayNum,
                            &local_578.ArrayMax);
        memset(local_578.AllocatorInstance.Data + (longlong)iVar12 * 0x10,0,
               (longlong)(int)(uVar35 - uVar27) << 4);
      }
      else {
        if ((int)uVar35 < 0) {
LAB_14dc33eb7:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
        }
        if ((int)uVar35 < (int)uVar27) {
          uVar27 = uVar27 - uVar35;
          if (((int)(uVar27 | uVar35) < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          if (uVar27 != 0) {
            _Dst = (TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_> *)
                   (local_578.AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10);
            DestructItems<TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>,int>(_Dst,uVar27);
            iVar12 = (local_578.ArrayNum - uVar27) - uVar35;
            if (iVar12 != 0) {
              memmove(_Dst,_Dst + (int)uVar27,(longlong)iVar12 << 4);
            }
            local_578.ArrayNum = local_578.ArrayNum - uVar27;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&local_578.AllocatorInstance,local_578.ArrayNum,&local_578.ArrayMax);
          }
        }
      }
      local_278._0_8_ = (FScriptContainerElement *)0x0;
      local_278._8_8_ = 0;
      local_258 = (ForElementType<unsigned_int>)0x0;
      uVar27 = (local_4d0->RawRefBoneInfo).ArrayNum;
      local_250 = 0;
      local_24c = 0x80;
      local_248 = -1;
      local_244 = 0;
      local_238.Data = (FScriptContainerElement *)0x0;
      local_230 = 0;
      if (uVar27 != 0) {
        if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_278,uVar27);
        if (uVar27 < 4) {
          uVar27 = 1;
        }
        else {
          uVar38 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
          lVar33 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          local_440 = (undefined4)lVar33;
          uVar27 = 1 << ((byte)lVar33 & 0x1f);
        }
        if ((local_230 == 0) || ((int)local_230 < (int)uVar27)) {
          local_230 = uVar27;
          if (local_238.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_238,0,0,4);
          }
          if (uVar27 != 0) {
            uVar40 = uVar27;
            if (uVar27 < 2) {
              if (local_238.Data != (FScriptContainerElement *)0x0) {
                uVar40 = 0;
                goto LAB_14dc32ad7;
              }
            }
            else {
LAB_14dc32ad7:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_238,0,uVar40,4);
            }
            if (0 < (int)uVar27) {
              uVar39 = (ulonglong)uVar27;
              uVar38 = uVar41;
              do {
                FVar25.Data = local_240;
                if (local_238.Data != (FScriptContainerElement *)0x0) {
                  FVar25.Data = local_238.Data;
                }
                uVar20 = (longlong)(int)uVar27 - 1U & uVar38;
                uVar38 = uVar38 + 1;
                *(undefined4 *)(FVar25.Data + uVar20 * 4) = 0xffffffff;
                uVar39 = uVar39 - 1;
              } while (uVar39 != 0);
            }
          }
          if (local_230 != 0) {
            pTStack_4c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10);
            local_4c8 = 0;
            uStack_4c4 = 1;
            uStack_4b4 = 0;
            uStack_4b0 = 0;
            if (local_250 != 0) {
              FVar26 = (ForElementType<unsigned_int>)((longlong)local_278 + 0x10);
              if (local_258 != (ForElementType<unsigned_int>)0x0) {
                FVar26 = local_258;
              }
              uVar27 = *(uint *)FVar26;
              uVar38 = uVar41;
              while (uVar27 == 0) {
                uStack_4b0 = (int)uVar38 + 0x20;
                uVar38 = (ulonglong)uStack_4b0;
                iVar12 = (int)uVar41;
                local_4c8 = iVar12 + 1;
                uVar41 = (ulonglong)local_4c8;
                if ((int)((local_250 - 1) + ((int)(local_250 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_4c8) goto LAB_14dc32bf0;
                uVar27 = ((uint *)((longlong)FVar26 + 4))[iVar12];
              }
              uStack_4c4 = -uVar27 & uVar27;
              uVar41 = (ulonglong)uStack_4c4 * 2 + 1;
              lVar33 = 0x3f;
              if (uVar41 != 0) {
                for (; uVar41 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              local_43c = (int)lVar33;
              uStack_4b4 = local_43c + -1 + uStack_4b0;
              uVar41 = (ulonglong)uStack_4b4;
              if ((int)local_250 < (int)uStack_4b4) {
LAB_14dc32bf0:
                uVar41 = (ulonglong)local_250;
                uStack_4b4 = local_250;
              }
            }
            local_4b8 = 0xffffffff;
            local_3b8 = (longlong *)local_278;
            local_3b0._padding_ = CONCAT44(uStack_4c4,local_4c8);
            local_3b0.CurrentBitIndex = uStack_4b4;
            local_3b0.UnvisitedBitMask = 0xffffffff;
            local_3b0._28_4_ = uStack_4ac;
            local_3b0.BaseBitIndex = uStack_4b0;
            local_3b0.Array = pTStack_4c0;
            if ((int)uVar41 < (int)local_250) {
              do {
                lVar33 = *local_3b8;
                lVar42 = (longlong)(int)uVar41;
                uVar27 = local_230 - 1 & (uint)*(ushort *)(lVar33 + lVar42 * 0xc);
                *(uint *)(lVar33 + 8 + lVar42 * 0xc) = uVar27;
                FVar25.Data = local_240;
                if (local_238.Data != (FScriptContainerElement *)0x0) {
                  FVar25.Data = local_238.Data;
                }
                uVar38 = (longlong)(int)local_230 - 1U & (ulonglong)uVar27;
                *(undefined4 *)(lVar33 + 4 + lVar42 * 0xc) =
                     *(undefined4 *)(FVar25.Data + uVar38 * 4);
                *(int *)(FVar25.Data + uVar38 * 4) = (int)uVar41;
                local_3b0.UnvisitedBitMask = local_3b0.UnvisitedBitMask & ~local_3b0._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b0);
                uVar41 = (ulonglong)(uint)local_3b0.CurrentBitIndex;
              } while (local_3b0.CurrentBitIndex < (local_3b0.Array)->NumBits);
            }
          }
        }
        uVar41 = (ulonglong)local_244;
      }
      iVar12 = local_4d8->ReferenceBoneIndex;
      if (iVar12 != -1) {
        if ((int)uVar41 == 0) {
          iVar34 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)local_278,(int *)(local_278 + 8),
                              (int *)(local_278 + 0xc));
          uVar27 = local_250;
          if (local_250 == 0) {
            iVar30 = 0;
LAB_14dc32d66:
            if (local_24c < (int)(local_250 + 1)) {
              uVar40 = local_24c + 0x1fU >> 5;
              uVar36 = local_250 + 0x20 >> 5;
              if (uVar36 < 5) {
                local_24c = 4;
              }
              else {
                uVar41 = (ulonglong)uVar36;
                if (uVar40 < 5) {
                  uVar40 = 0;
                }
                if (uVar40 == 0) {
                  uVar38 = 4;
                  if (4 < uVar41) {
                    uVar38 = uVar41;
                  }
                }
                else {
                  uVar38 = ((ulonglong)uVar36 * 3 >> 3) + 0x10 + uVar41;
                }
                uVar21 = FMemory::QuantizeSize(uVar38 * 4,0);
                local_24c = (int)(uVar21 >> 2);
                if (local_24c < (int)uVar36) {
                  local_24c = 0x7fffffff;
                }
              }
              local_24c = local_24c << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10),local_250);
            }
            local_250 = local_250 + 1;
            uVar36 = (int)local_250 >> 0x1f & 0x1f;
            uVar40 = local_250 + uVar36;
            iVar13 = (uVar40 & 0x1f) - uVar36;
            if (iVar13 != 0) {
              FVar26 = (ForElementType<unsigned_int>)((longlong)local_278 + 0x10);
              if (local_258 != (ForElementType<unsigned_int>)0x0) {
                FVar26 = local_258;
              }
              puVar5 = (uint *)((longlong)FVar26 + (longlong)((int)uVar40 >> 5) * 4);
              *puVar5 = *puVar5 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
            }
          }
          else {
            iVar30 = (int)(local_250 + ((int)local_250 >> 0x1f & 0x1fU)) >> 5;
            if (iVar30 != (int)(((int)(local_250 - 1) >> 0x1f & 0x1fU) + (local_250 - 1)) >> 5)
            goto LAB_14dc32d66;
            local_250 = local_250 + 1;
          }
          FVar26 = (ForElementType<unsigned_int>)((longlong)local_278 + 0x10);
          if (local_258 != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_258;
          }
          puVar5 = (uint *)((longlong)FVar26 + (longlong)iVar30 * 4);
          *puVar5 = *puVar5 & ~(1 << ((byte)uVar27 & 0x1f));
          iVar30 = local_248;
        }
        else {
          local_244 = (int)uVar41 - 1;
          iVar30 = *(int *)(local_278._0_8_ + (longlong)local_248 * 0xc + 4);
          iVar34 = local_248;
          if (local_244 != 0) {
            *(undefined4 *)(local_278._0_8_ + (longlong)iVar30 * 0xc) = 0xffffffff;
          }
        }
        local_248 = iVar30;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_278,&local_368,iVar34);
        if (local_368.Pointer == (ushort *)0x0) {
          puVar32 = (ushort *)0x0;
        }
        else {
          *(ushort *)local_368.Pointer = (ushort)iVar12;
          ((ushort *)((longlong)local_368.Pointer + 4))[0] = 0xffff;
          ((ushort *)((longlong)local_368.Pointer + 4))[1] = 0xffff;
          puVar32 = local_368.Pointer;
        }
        uVar6 = *puVar32;
        if ((local_278._8_4_ - local_244 != 1) && (local_278._8_4_ != local_244)) {
          FVar25.Data = local_240;
          if (local_238.Data != (FScriptContainerElement *)0x0) {
            FVar25.Data = local_238.Data;
          }
          for (iVar12 = *(int *)(FVar25.Data + ((ulonglong)(local_230 - 1) & (ulonglong)uVar6) * 4);
              iVar12 != -1; iVar12 = *(int *)(local_278._0_8_ + (longlong)iVar12 * 0xc + 4)) {
            if ((uint)*(ushort *)(local_278._0_8_ + (longlong)iVar12 * 0xc) == (uint)uVar6) {
              if (iVar12 != -1) {
                *(ushort *)(local_278._0_8_ + (longlong)iVar12 * 0xc) = uVar6;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_278,local_368.Index,1);
                goto LAB_14dc33047;
              }
              break;
            }
          }
        }
        uVar27 = local_278._8_4_ - local_244;
        if (uVar27 < 4) {
          uVar40 = 1;
        }
        else {
          uVar41 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
          lVar33 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          local_438 = (undefined4)lVar33;
          uVar40 = 1 << ((byte)lVar33 & 0x1f);
        }
        if (((int)uVar27 < 1) || ((int)uVar40 <= (int)local_230)) {
          uVar27 = local_230 - 1 & (uint)uVar6;
          *(uint *)(puVar32 + 4) = uVar27;
          FVar25.Data = local_240;
          if (local_238.Data != (FScriptContainerElement *)0x0) {
            FVar25.Data = local_238.Data;
          }
          uVar41 = (longlong)(int)local_230 - 1U & (ulonglong)uVar27;
          *(undefined4 *)(puVar32 + 2) = *(undefined4 *)(FVar25.Data + uVar41 * 4);
          *(int *)(FVar25.Data + uVar41 * 4) = local_368.Index;
        }
        else {
          local_230 = uVar40;
          TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *)
                     local_278);
        }
      }
LAB_14dc33047:
      uVar27 = 0;
      local_558 = 0;
      if (0 < (int)uVar35) {
        local_548 = 0;
        local_528 = 0;
        local_4e8 = 0;
        local_4f0 = 0;
        do {
          lVar42 = local_4f0;
          lVar33 = local_548;
          uVar41 = 0;
          uVar35 = ~uVar27 >> 0x1f;
          uVar40 = 0;
          if ((int)uVar27 < local_510.ArrayNum) {
            uVar40 = uVar35;
          }
          local_568 = uVar35;
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          pTVar37 = local_510.DataPtr;
          uVar40 = 0;
          if ((int)uVar27 < local_450.ArrayNum) {
            uVar40 = uVar35;
          }
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          if ((*(int *)((longlong)&pTVar37->ArrayNum + lVar33) !=
               *(int *)((longlong)&(local_450.DataPtr)->ArrayNum + lVar33)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SimBoneIndices[VertexIndex].Num() == SimBoneWeights[VertexIndex].Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationModel.cpp"
                                  ,0x121,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          uVar36 = 0;
          uVar40 = uVar36;
          if ((int)uVar27 < local_510.ArrayNum) {
            uVar40 = uVar35;
          }
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          if ((0xc < *(int *)((longlong)&(local_510.DataPtr)->ArrayNum + lVar33)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SimBoneIndices[VertexIndex].Num() <= FClothVertBoneData::MaxTotalInfluences"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationModel.cpp"
                                  ,0x122,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          uVar40 = uVar36;
          if ((int)uVar27 < local_510.ArrayNum) {
            uVar40 = uVar35;
          }
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          pTVar28 = local_560;
          uVar8 = *(undefined4 *)((longlong)&(local_510.DataPtr)->ArrayNum + lVar33);
          if ((int)uVar27 < local_560[3].ArrayNum) {
            uVar36 = uVar35;
          }
          if ((uVar36 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          lVar33 = local_548;
          *(undefined4 *)(pTVar28[3].AllocatorInstance.Data + lVar42) = uVar8;
          pTVar28 = local_560;
          uVar38 = uVar41;
          while( true ) {
            uVar40 = 0;
            if ((int)uVar27 < pTVar28[3].ArrayNum) {
              uVar40 = uVar35;
            }
            if ((uVar40 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            uVar40 = (uint)uVar41;
            if (*(int *)(pTVar28[3].AllocatorInstance.Data + local_4f0) <= (int)uVar40) break;
            uVar36 = 0;
            if ((int)uVar27 < local_510.ArrayNum) {
              uVar36 = uVar35;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            pTVar37 = local_510.DataPtr;
            uVar35 = 0;
            if ((int)uVar40 < *(int *)((longlong)&(local_510.DataPtr)->ArrayNum + lVar33)) {
              uVar35 = ~uVar40 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            uVar35 = local_568;
            uVar7 = *(undefined2 *)
                     (*(longlong *)((longlong)&(pTVar37->AllocatorInstance).Data + lVar33) +
                     uVar38 * 4);
            uVar36 = 0;
            if ((int)uVar27 < local_560[3].ArrayNum) {
              uVar36 = local_568;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            *(undefined2 *)(local_560[3].AllocatorInstance.Data + (local_528 + uVar38) * 2 + 4) =
                 uVar7;
            uVar36 = 0;
            if ((int)uVar27 < local_450.ArrayNum) {
              uVar36 = uVar35;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            pTVar24 = local_450.DataPtr;
            uVar35 = 0;
            if ((int)uVar40 < *(int *)((longlong)&(local_450.DataPtr)->ArrayNum + lVar33)) {
              uVar35 = ~uVar40 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            pTVar28 = local_560;
            uVar35 = local_568;
            uVar8 = *(undefined4 *)
                     (*(longlong *)((longlong)&(pTVar24->AllocatorInstance).Data + lVar33) +
                     uVar38 * 4);
            uVar36 = 0;
            if ((int)uVar27 < local_560[3].ArrayNum) {
              uVar36 = local_568;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            *(undefined4 *)(pTVar28[3].AllocatorInstance.Data + (local_4e8 + uVar38) * 4 + 0x1c) =
                 uVar8;
            uVar36 = 0;
            if ((int)uVar27 < pTVar28[3].ArrayNum) {
              uVar36 = uVar35;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::
            Emplace<unsigned_short_const_&>
                      ((TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>
                        *)local_278,local_3c0,
                       (bool *)(pTVar28[3].AllocatorInstance.Data +
                               ((int)uVar40 + local_528) * 2 + 4));
            uVar41 = (ulonglong)(uVar40 + 1);
            uVar38 = uVar38 + 1;
          }
          uVar41 = 0;
          uVar40 = 0;
          if ((int)uVar27 < local_460.ArrayNum) {
            uVar40 = uVar35;
          }
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          iVar12 = *(int *)((longlong)&(local_460.DataPtr)->ArrayNum + lVar33);
          uVar40 = 0;
          if ((int)uVar27 < local_520.ArrayNum) {
            uVar40 = uVar35;
          }
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          if ((*(int *)((longlong)&(local_520.DataPtr)->ArrayNum + lVar33) != iVar12) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TetherKinematicIndex[VertexIndex].Num() == TetherReferenceLength[VertexIndex].Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationModel.cpp"
                                  ,299,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          uVar40 = 0;
          if ((int)uVar27 < local_578.ArrayNum) {
            uVar40 = uVar35;
          }
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          pFVar31 = local_578.AllocatorInstance.Data + lVar33;
          uVar40 = 0;
          if ((int)uVar27 < local_520.ArrayNum) {
            uVar40 = uVar35;
          }
          if ((uVar40 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
            return pFVar14;
          }
          uVar40 = *(uint *)((longlong)&(local_520.DataPtr)->ArrayNum + lVar33);
          if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
          }
          uVar38 = uVar41;
          if (*(int *)(pFVar31 + 0xc) < (int)uVar40) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar40,(ForAnyElementType *)pFVar31,*(int *)(pFVar31 + 8),
                       (int *)(pFVar31 + 0xc));
          }
          while( true ) {
            uVar40 = 0;
            if ((int)uVar27 < local_520.ArrayNum) {
              uVar40 = uVar35;
            }
            if ((uVar40 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            uVar40 = (uint)uVar38;
            if (*(int *)((longlong)&(local_520.DataPtr)->ArrayNum + lVar33) <= (int)uVar40) break;
            uVar36 = 0;
            if ((int)uVar27 < local_578.ArrayNum) {
              uVar36 = uVar35;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            pFVar31 = local_578.AllocatorInstance.Data + lVar33;
            uVar36 = 0;
            if ((int)uVar27 < local_520.ArrayNum) {
              uVar36 = uVar35;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            pTVar37 = local_520.DataPtr;
            uVar35 = 0;
            if ((int)uVar40 < *(int *)((longlong)&(local_520.DataPtr)->ArrayNum + lVar33)) {
              uVar35 = ~uVar40 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            lVar33 = *(longlong *)((longlong)&(pTVar37->AllocatorInstance).Data + lVar33);
            uVar35 = 0;
            if ((int)uVar27 < local_460.ArrayNum) {
              uVar35 = local_568;
            }
            if ((uVar35 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            pTVar24 = local_460.DataPtr;
            uVar35 = 0;
            if ((int)uVar40 < *(int *)((longlong)&(local_460.DataPtr)->ArrayNum + local_548)) {
              uVar35 = ~uVar40 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
              return pFVar14;
            }
            lVar42 = *(longlong *)((longlong)&(pTVar24->AllocatorInstance).Data + local_548);
            iVar12 = *(int *)(pFVar31 + 8);
            if (iVar12 == *(int *)(pFVar31 + 0xc)) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
            }
            *(int *)(pFVar31 + 8) = iVar12 + 1;
                    /* WARNING: Load size is inaccurate */
            FVar25.Data = *pFVar31;
            *(undefined4 *)(FVar25.Data + (longlong)iVar12 * 8) =
                 *(undefined4 *)(lVar42 + uVar41 * 4);
            lVar42 = uVar41 * 4;
            uVar41 = uVar41 + 1;
            *(undefined4 *)(FVar25.Data + (longlong)iVar12 * 8 + 4) =
                 *(undefined4 *)(lVar33 + lVar42);
            lVar33 = local_548;
            uVar38 = (ulonglong)(uVar40 + 1);
            uVar35 = local_568;
          }
          local_548 = lVar33 + 0x10;
          local_558 = local_558 + 1;
          local_4e8 = local_4e8 + 0x13;
          local_4f0 = local_4f0 + 0x4c;
          local_528 = local_528 + 0x26;
          uVar27 = uVar27 + 1;
        } while ((int)uVar27 < (int)local_4f8);
      }
      iVar34 = 0;
      iVar12 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimAccessoryMeshes
                         (&local_540);
      if (0 < iVar12) {
        do {
          UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSimAccessoryMesh
                    (&local_540,&local_2d8,iVar34);
          UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::
          GetSimAccessoryMeshBoneIndices(&local_2d8,&local_358);
          pTVar43 = local_358.DataPtr + local_358.ArrayNum;
          for (pTVar37 = local_358.DataPtr; pTVar37 != pTVar43; pTVar37 = pTVar37 + 1) {
            pFVar29 = (pTVar37->AllocatorInstance).Data;
            iVar12 = pTVar37->ArrayNum;
            pFVar31 = pFVar29 + (longlong)iVar12 * 4;
            while( true ) {
              if (pTVar37->ArrayNum != iVar12) {
                local_585 = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_585);
              }
              if (pFVar29 == pFVar31) break;
              if (*(int *)pFVar29 != -1) {
                local_550 = (undefined2)*(int *)pFVar29;
                TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::
                Emplace<unsigned_short>
                          ((TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>
                            *)local_278,local_3e0,(bool *)&local_550);
              }
              pFVar29 = pFVar29 + 4;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2d8.ClothCollection.SharedReferenceCount.ReferenceController);
          iVar34 = iVar34 + 1;
          iVar12 = UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetNumSimAccessoryMeshes
                             (&local_540);
        } while (iVar34 < iVar12);
      }
      pTVar28 = local_560;
      FClothTetherData::GenerateTethers((FClothTetherData *)(local_560 + 0xf),&local_578);
      local_228.Elements._0_8_ = 0;
      local_228.Elements._8_8_ = 0;
      local_228.Elements._32_8_ = 0;
      local_228.Elements._40_4_ = 0;
      local_228.Elements._44_4_ = 0x80;
      local_228.Elements._48_4_ = 0xffffffff;
      local_228.Elements._52_4_ = 0;
      local_228.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_228.HashSize = 0;
      UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetRenderBoneIndices
                (&local_540,&local_348);
      pTVar43 = local_348.DataPtr + local_348.ArrayNum;
      for (pTVar37 = local_348.DataPtr; pTVar37 != pTVar43; pTVar37 = pTVar37 + 1) {
        pFVar29 = (pTVar37->AllocatorInstance).Data;
        iVar12 = pTVar37->ArrayNum;
        pFVar31 = pFVar29 + (longlong)iVar12 * 4;
        while( true ) {
          if (pTVar37->ArrayNum != iVar12) {
            local_584[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_584);
          }
          if (pFVar29 == pFVar31) break;
          local_54e = *(undefined2 *)pFVar29;
          TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::
          Emplace<unsigned_short>(&local_228,local_408,(bool *)&local_54e);
          pFVar29 = pFVar29 + 4;
        }
      }
      this_04 = TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::
                Difference((TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>
                            *)local_278,&local_1d8,&local_228);
      pTVar22 = TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::Array
                          (this_04,&local_328);
      pTVar3 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pTVar28 + 4);
      if (pTVar3 != pTVar22) {
        pFVar31 = (pTVar3->AllocatorInstance).Data;
        if (pFVar31 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar31);
        }
        (pTVar3->AllocatorInstance).Data = (pTVar22->AllocatorInstance).Data;
        (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar28[4].ArrayNum = pTVar22->ArrayNum;
        pTVar28[4].ArrayMax = pTVar22->ArrayMax;
        pTVar22->ArrayNum = 0;
        pTVar22->ArrayMax = 0;
      }
      if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.AllocatorInstance.Data);
      }
      local_1d8.HashSize = 0;
      if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1d8.Elements);
      local_228.HashSize = 0;
      if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_228.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_228.Elements);
      local_230 = 0;
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data);
      }
      TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_278);
      DestructItems<TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_> *)
                 local_578.AllocatorInstance.Data,local_578.ArrayNum);
      if ((TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_> *)local_578.AllocatorInstance.Data
          != (TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_578.AllocatorInstance.Data);
      }
      if ((FName *)local_470.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_470.AllocatorInstance.Data);
      }
      if ((FName *)local_498.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_498.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3d8.ManagedArrayCollection.SharedReferenceCount.ReferenceController);
      Chaos::Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade(&local_188);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4a8.AllocatorInstance.Data,
                 local_4a8.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4a8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_4a8.AllocatorInstance.Data);
      }
      if ((FName *)local_488.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_488.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_540.ClothCollection.SharedReferenceCount.ReferenceController);
      local_54c = local_54c + 1;
      local_4e0 = local_4e0 + 1;
      param_2 = local_4d0;
      piVar15 = local_3f8;
      this = local_4d8;
      param_1 = local_478;
    } while (local_4e0 < local_430);
  }
  iVar12 = (param_2->RawRefBoneInfo).ArrayNum;
  local_580[0] = 0;
  if (0 < iVar12) {
    do {
      uVar35 = local_580[0];
      uVar27 = 0;
      if ((int)local_580[0] < iVar12) {
        uVar27 = ~local_580[0] >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
        return pFVar14;
      }
      pFVar31 = (param_2->RawRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar35 * 0xc;
      pFVar29 = (this->UsedBoneNames).AllocatorInstance.Data;
      if (((pFVar29 <= pFVar31) &&
          (pFVar31 < pFVar29 + (longlong)(this->UsedBoneNames).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
        return pFVar14;
      }
      iVar12 = (this->UsedBoneNames).ArrayNum;
      if (iVar12 == (this->UsedBoneNames).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->UsedBoneNames).AllocatorInstance,
                            &(this->UsedBoneNames).ArrayMax);
      }
      (this->UsedBoneNames).ArrayNum = iVar12 + 1;
      *(undefined8 *)((this->UsedBoneNames).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           *(undefined8 *)pFVar31;
      pFVar31 = (this->UsedBoneIndices).AllocatorInstance.Data;
      if (((pFVar31 <= (FScriptContainerElement *)local_580) &&
          ((FScriptContainerElement *)local_580 <
           pFVar31 + (longlong)(this->UsedBoneIndices).ArrayMax * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FChaosClothSimulationModel *)(*pcVar9)();
        return pFVar14;
      }
      iVar12 = (this->UsedBoneIndices).ArrayNum;
      if (iVar12 == (this->UsedBoneIndices).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->UsedBoneIndices).AllocatorInstance,piVar15);
      }
      (this->UsedBoneIndices).ArrayNum = iVar12 + 1;
      *(uint *)((this->UsedBoneIndices).AllocatorInstance.Data + (longlong)iVar12 * 4) =
           local_580[0];
      iVar12 = (param_2->RawRefBoneInfo).ArrayNum;
      local_580[0] = local_580[0] + 1;
    } while ((int)local_580[0] < iVar12);
  }
  if (this->ReferenceBoneIndex == -1) {
    local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FChaosClothSimulationLodModel,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FChaosClothSimulationLodModel,int>
              (&local_338,
               (FChaosClothSimulationLodModel *)
               (this->ClothSimulationLodModels).AllocatorInstance.Data,
               (this->ClothSimulationLodModels).ArrayNum,0);
    iVar12 = UE::Chaos::ClothAsset::Private::CalculateReferenceBoneIndex
                       (&local_338,param_2,&this->UsedBoneIndices);
    this->ReferenceBoneIndex = iVar12;
  }
  CalculateLODTransitionUpDownData(this,local_400);
  return this;
}

// CalculateLODTransitionUpDownData @ 14dc3dbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosClothSimulationModel::CalculateLODTransitionUpDownData
          (FChaosClothSimulationModel *this,
          TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement FVar12;
  uint uVar13;
  uint uVar14;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 auStackY_8e8 [32];
  ForAnyElementType local_890;
  int local_888 [2];
  TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *local_880;
  int local_878;
  int local_874;
  TArray<ClothingMeshUtils::FMeshToMeshFilterSet,TSizedDefaultAllocator<32>_> local_870;
  TArray<ClothingMeshUtils::FMeshToMeshFilterSet,TSizedDefaultAllocator<32>_> local_860;
  TVector<float> *local_850;
  int iStack_848;
  undefined4 uStack_844;
  uint *local_840;
  int iStack_838;
  undefined4 uStack_834;
  FScriptContainerElement *local_830;
  int iStack_828;
  undefined4 uStack_824;
  TVector<float> *local_820;
  int iStack_818;
  undefined4 uStack_814;
  uint *local_810;
  int iStack_808;
  undefined4 uStack_804;
  FScriptContainerElement *local_800;
  int iStack_7f8;
  undefined4 uStack_7f4;
  TVector<float> *local_7f0;
  int iStack_7e8;
  undefined4 uStack_7e4;
  uint *local_7e0;
  int iStack_7d8;
  undefined4 uStack_7d4;
  FScriptContainerElement *local_7d0;
  int iStack_7c8;
  undefined4 uStack_7c4;
  FScriptContainerElement local_7c0;
  undefined7 uStack_7bf;
  undefined1 uStack_7b8;
  undefined7 uStack_7b7;
  FScriptContainerElement FStack_7b0;
  FMD5 local_7a8;
  ClothMeshDesc local_748;
  ClothMeshDesc local_4f8;
  ClothMeshDesc local_2a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  local_890.Data = (FScriptContainerElement *)0x0;
  local_888[0] = 0;
  local_888[1] = 0;
  uVar17 = (this->ClothSimulationLodModels).ArrayNum;
  local_880 = param_1;
  if ((int)uVar17 < 1) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
  }
  else {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar17,&local_890,local_888,local_888 + 1);
    memset(local_890.Data + iVar9,0,(longlong)(int)uVar17);
  }
  if (param_1 != (TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *)0x0)
  {
    iVar9 = param_1->ArrayNum;
    piVar1 = &param_1->ArrayNum;
    uVar17 = (this->ClothSimulationLodModels).ArrayNum;
    if (iVar9 < (int)uVar17) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,uVar17 - iVar9,&param_1->AllocatorInstance,piVar1,
                          &param_1->ArrayMax);
      DefaultConstructItems<FChaosClothAssetLodTransitionDataCache,int>
                ((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x38,uVar17 - iVar9);
    }
    else {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if ((int)uVar17 < iVar9) {
        uVar16 = iVar9 - uVar17;
        if (((int)(uVar17 | uVar16) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar16 != 0) {
          TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_1,uVar17,uVar16);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        }
      }
    }
    iVar9 = (this->ClothSimulationLodModels).ArrayNum;
    uVar17 = 0;
    if (0 < iVar9) {
      lVar24 = 0;
      lVar23 = 0;
      lVar22 = 0;
      do {
        uVar14 = ~uVar17 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar17 < iVar9) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar20 = (this->ClothSimulationLodModels).AllocatorInstance.Data;
        FMD5::FMD5(&local_7a8);
        local_878 = *(int *)(pFVar20 + lVar22 + 8);
        FMD5::Update(&local_7a8,(uchar *)&local_878,4);
        FMD5::Update(&local_7a8,*(uchar **)(pFVar20 + lVar22),(longlong)local_878 * 0xc);
        local_874 = *(int *)(pFVar20 + lVar22 + 0x28);
        FMD5::Update(&local_7a8,(uchar *)&local_874,4);
        FMD5::Update(&local_7a8,*(uchar **)(pFVar20 + lVar22 + 0x20),(longlong)local_874 << 2);
        local_7c0 = (FScriptContainerElement)0x0;
        FMD5::Final(&local_7a8,(uchar *)&uStack_7bf);
        local_7c0 = (FScriptContainerElement)0x1;
        FMD5::~FMD5(&local_7a8);
        uVar16 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar20 = (local_880->AllocatorInstance).Data;
        if ((local_7c0 == pFVar20[lVar23]) &&
           ((local_7c0 == (FScriptContainerElement)0x0 ||
            ((CONCAT17(uStack_7b8,uStack_7bf) == *(longlong *)(pFVar20 + lVar23 + 1) &&
             (CONCAT17(FStack_7b0,uStack_7b7) == *(longlong *)(pFVar20 + lVar23 + 9))))))) {
          FVar12 = (FScriptContainerElement)0x1;
        }
        else {
          FVar12 = (FScriptContainerElement)0x0;
        }
        uVar16 = 0;
        if ((int)uVar17 < local_888[0]) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar7 = FStack_7b0;
        local_890.Data[lVar24] = FVar12;
        uVar4 = CONCAT71(uStack_7bf,local_7c0);
        uVar5 = CONCAT71(uStack_7b7,uStack_7b8);
        uVar16 = 0;
        if ((int)uVar17 < *piVar1) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar17 = uVar17 + 1;
        lVar24 = lVar24 + 1;
        lVar22 = lVar22 + 0x1f0;
        pFVar11 = (local_880->AllocatorInstance).Data;
        pFVar20 = pFVar11 + lVar23;
        *(undefined8 *)pFVar20 = uVar4;
        *(undefined8 *)(pFVar20 + 8) = uVar5;
        pFVar11[lVar23 + 0x10] = FVar7;
        lVar23 = lVar23 + 0x38;
        iVar9 = (this->ClothSimulationLodModels).ArrayNum;
      } while ((int)uVar17 < iVar9);
    }
  }
  iVar9 = (this->ClothSimulationLodModels).ArrayNum;
  uVar17 = 0;
  if (0 < iVar9) {
    lVar22 = 0;
    do {
      uVar13 = uVar17 - 1;
      uVar16 = uVar17 + 1;
      uVar18 = ~uVar17 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar17 < iVar9) {
        uVar14 = uVar18;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = (this->ClothSimulationLodModels).AllocatorInstance.Data;
      lVar23 = lVar22 * 0x1f0;
      local_840 = *(uint **)(pFVar20 + lVar23 + 0x20);
      iVar9 = *(int *)(pFVar20 + lVar23 + 0x28);
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_850 = *(TVector<float> **)(pFVar20 + lVar23);
      iVar10 = *(int *)(pFVar20 + lVar23 + 8);
      iStack_838 = iVar9;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_748.Positions._12_4_ = uStack_844;
      local_748.Positions.ArrayNum = iVar10;
      local_748.Normals.DataPtr = (TVector<float> *)0x0;
      local_748.Positions.DataPtr = local_850;
      local_748.Indices._12_4_ = uStack_834;
      local_748.Indices.ArrayNum = iStack_838;
      local_748.Normals._8_8_ = local_748.Normals._8_8_ & 0xffffffff00000000;
      local_748.Tangents.DataPtr = (TVector<float> *)0x0;
      local_748.Indices.DataPtr = local_840;
      local_748.Tangents.ArrayNum = 0;
      local_748.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_748.AveragedNormals.ArrayNum = 0;
      local_748.AveragedNormals.ArrayMax = 0;
      local_748.bHasValidBVH = false;
      iStack_848 = iVar10;
      Chaos::
      TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
      ::
      TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (&local_748.BVH);
      local_748.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_748.MaxEdgeLengths.ArrayNum = 0;
      local_748.MaxEdgeLengths.ArrayMax = 0;
      local_748.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_748.FilteredTriangles.ArrayNum = 0;
      local_748.FilteredTriangles.ArrayMax = 0;
      ClothingMeshUtils::ClothMeshDesc::ComputeAveragedNormals(&local_748);
      iVar9 = local_748.AveragedNormals.ArrayNum;
      local_830 = local_748.AveragedNormals.AllocatorInstance.Data;
      if ((local_748.AveragedNormals.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_828 = iVar9;
      local_748.Normals._8_8_ = CONCAT44(uStack_824,iVar9);
      local_748.Normals.DataPtr = (TVector<float> *)local_830;
      pTVar25 = local_880;
      if ((-1 < (int)uVar13) && ((int)uVar13 < (this->ClothSimulationLodModels).ArrayNum)) {
        uVar14 = 0;
        if ((int)uVar17 < local_888[0]) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_890.Data[lVar22] != (FScriptContainerElement)0x0) {
          uVar14 = 0;
          if ((int)uVar13 < local_888[0]) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar25 = local_880;
          if (local_890.Data[lVar22 + -1] != (FScriptContainerElement)0x0) {
            uVar14 = 0;
            if ((int)uVar17 < local_880->ArrayNum) {
              uVar14 = uVar18;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar11 = (pTVar25->AllocatorInstance).Data + lVar22 * 0x38 + 0x18;
            pFVar19 = pFVar20 + lVar23 + 0x50;
            if (pFVar19 != pFVar11) {
              iVar9 = *(int *)&pFVar11[8].field_0x0;
              pFVar6 = pFVar19 + 0xc;
              pvVar2 = *(void **)&pFVar11->field_0x0;
              iVar10 = *(int *)pFVar6;
              *(int *)&pFVar19[8].field_0x0 = iVar9;
              if ((iVar9 == 0) && (iVar10 == 0)) {
                *(int *)pFVar6 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,0x10,iVar9,iVar10,(ForAnyElementType *)pFVar19,iVar9,(int *)pFVar6);
                if (iVar9 != 0) {
                  memcpy(*(void **)&pFVar19->field_0x0,pvVar2,(longlong)iVar9 << 6);
                }
              }
            }
            goto LAB_14dc3e5f3;
          }
        }
        uVar14 = 0;
        if ((int)uVar13 < (this->ClothSimulationLodModels).ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (this->ClothSimulationLodModels).AllocatorInstance.Data;
        lVar24 = (lVar22 + -1) * 0x1f0;
        local_810 = *(uint **)(pFVar11 + lVar24 + 0x20);
        iVar9 = *(int *)(pFVar11 + lVar24 + 0x28);
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_820 = *(TVector<float> **)(pFVar11 + lVar24);
        iVar10 = *(int *)(pFVar11 + lVar24 + 8);
        iStack_808 = iVar9;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_4f8.Positions._12_4_ = uStack_814;
        local_4f8.Positions.ArrayNum = iVar10;
        local_4f8.Normals.DataPtr = (TVector<float> *)0x0;
        local_4f8.Normals._8_8_ = local_4f8.Normals._8_8_ & 0xffffffff00000000;
        local_4f8.Positions.DataPtr = local_820;
        local_4f8.Indices._12_4_ = uStack_804;
        local_4f8.Indices.ArrayNum = iStack_808;
        local_4f8.Tangents.DataPtr = (TVector<float> *)0x0;
        local_4f8.Tangents.ArrayNum = 0;
        local_4f8.Indices.DataPtr = local_810;
        local_4f8.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4f8.AveragedNormals.ArrayNum = 0;
        local_4f8.AveragedNormals.ArrayMax = 0;
        local_4f8.bHasValidBVH = false;
        iStack_818 = iVar10;
        Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_4f8.BVH);
        local_4f8.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4f8.MaxEdgeLengths.ArrayNum = 0;
        local_4f8.MaxEdgeLengths.ArrayMax = 0;
        local_4f8.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4f8.FilteredTriangles.ArrayNum = 0;
        local_4f8.FilteredTriangles.ArrayMax = 0;
        ClothingMeshUtils::ClothMeshDesc::ComputeAveragedNormals(&local_4f8);
        iVar9 = local_4f8.AveragedNormals.ArrayNum;
        local_800 = local_4f8.AveragedNormals.AllocatorInstance.Data;
        if ((local_4f8.AveragedNormals.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iStack_7f8 = iVar9;
        local_4f8.Normals._8_8_ = CONCAT44(uStack_7f4,iVar9);
        pTVar15 = (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                  (pFVar20 + lVar23 + 0x50);
        local_4f8.Normals.DataPtr = (TVector<float> *)local_800;
        local_870.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_870.ArrayNum = 0;
        local_870.ArrayMax = 0;
        ClothingMeshUtils::GenerateMeshToMeshVertData
                  (pTVar15,&local_748,&local_4f8,(FPointWeightMap *)0x0,false,false,0.0,&local_870);
        DestructItems<ClothingMeshUtils::FMeshToMeshFilterSet,int>
                  ((FMeshToMeshFilterSet *)local_870.AllocatorInstance.Data,local_870.ArrayNum);
        if ((FMeshToMeshFilterSet *)local_870.AllocatorInstance.Data != (FMeshToMeshFilterSet *)0x0)
        {
          FMemory::Free(local_870.AllocatorInstance.Data);
        }
        pTVar25 = local_880;
        if (local_880 !=
            (TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *)0x0) {
          uVar14 = 0;
          if ((int)uVar17 < local_880->ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar21 = (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                    ((pTVar25->AllocatorInstance).Data + lVar22 * 0x38 + 0x18);
          if (pTVar21 != pTVar15) {
            iVar9 = pTVar15->ArrayNum;
            piVar1 = &pTVar21->ArrayMax;
            pFVar11 = (pTVar15->AllocatorInstance).Data;
            pTVar21->ArrayNum = iVar9;
            if ((iVar9 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,iVar9,*piVar1,(ForAnyElementType *)pTVar21,iVar9,piVar1);
              if (iVar9 != 0) {
                memcpy((pTVar21->AllocatorInstance).Data,pFVar11,(longlong)iVar9 << 6);
              }
            }
          }
        }
        if (local_4f8.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.FilteredTriangles.AllocatorInstance.Data);
        }
        if (local_4f8.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.MaxEdgeLengths.AllocatorInstance.Data);
        }
        Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_4f8.BVH);
        if (local_4f8.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.AveragedNormals.AllocatorInstance.Data);
        }
      }
LAB_14dc3e5f3:
      if ((-1 < (int)uVar16) && ((int)uVar16 < (this->ClothSimulationLodModels).ArrayNum)) {
        uVar14 = 0;
        if ((int)uVar17 < local_888[0]) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_890.Data[lVar22] != (FScriptContainerElement)0x0) {
          uVar14 = 0;
          if ((int)uVar16 < local_888[0]) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_890.Data[lVar22 + 1] != (FScriptContainerElement)0x0) {
            uVar16 = 0;
            if ((int)uVar17 < pTVar25->ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar20 = pFVar20 + lVar23 + 0x60;
            pFVar11 = (pTVar25->AllocatorInstance).Data + lVar22 * 0x38 + 0x28;
            if (pFVar20 != pFVar11) {
              iVar9 = *(int *)&pFVar11[8].field_0x0;
              pFVar19 = pFVar20 + 0xc;
              pvVar2 = *(void **)&pFVar11->field_0x0;
              iVar10 = *(int *)pFVar19;
              *(int *)&pFVar20[8].field_0x0 = iVar9;
              if ((iVar9 == 0) && (iVar10 == 0)) {
                *(int *)pFVar19 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,0x10,iVar9,iVar10,(ForAnyElementType *)pFVar20,iVar9,(int *)pFVar19)
                ;
                if (iVar9 != 0) {
                  memcpy(*(void **)&pFVar20->field_0x0,pvVar2,(longlong)iVar9 << 6);
                }
              }
            }
            goto LAB_14dc3ea8b;
          }
        }
        uVar14 = 0;
        if ((int)uVar16 < (this->ClothSimulationLodModels).ArrayNum) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = (this->ClothSimulationLodModels).AllocatorInstance.Data;
        lVar24 = (lVar22 + 1) * 0x1f0;
        local_7e0 = *(uint **)(pFVar11 + lVar24 + 0x20);
        iVar9 = *(int *)(pFVar11 + lVar24 + 0x28);
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_7f0 = *(TVector<float> **)(pFVar11 + lVar24);
        iVar10 = *(int *)(pFVar11 + lVar24 + 8);
        iStack_7d8 = iVar9;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_2a8.Positions._12_4_ = uStack_7e4;
        local_2a8.Positions.ArrayNum = iVar10;
        local_2a8.Normals.DataPtr = (TVector<float> *)0x0;
        local_2a8.Normals._8_8_ = local_2a8.Normals._8_8_ & 0xffffffff00000000;
        local_2a8.Positions.DataPtr = local_7f0;
        local_2a8.Indices._12_4_ = uStack_7d4;
        local_2a8.Indices.ArrayNum = iStack_7d8;
        local_2a8.Tangents.DataPtr = (TVector<float> *)0x0;
        local_2a8.Tangents.ArrayNum = 0;
        local_2a8.Indices.DataPtr = local_7e0;
        local_2a8.AveragedNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a8.AveragedNormals.ArrayNum = 0;
        local_2a8.AveragedNormals.ArrayMax = 0;
        local_2a8.bHasValidBVH = false;
        iStack_7e8 = iVar10;
        Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_2a8.BVH);
        local_2a8.MaxEdgeLengths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a8.MaxEdgeLengths.ArrayNum = 0;
        local_2a8.MaxEdgeLengths.ArrayMax = 0;
        local_2a8.FilteredTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a8.FilteredTriangles.ArrayNum = 0;
        local_2a8.FilteredTriangles.ArrayMax = 0;
        ClothingMeshUtils::ClothMeshDesc::ComputeAveragedNormals(&local_2a8);
        iVar9 = local_2a8.AveragedNormals.ArrayNum;
        local_7d0 = local_2a8.AveragedNormals.AllocatorInstance.Data;
        if ((local_2a8.AveragedNormals.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iStack_7c8 = iVar9;
        local_2a8.Normals._8_8_ = CONCAT44(uStack_7c4,iVar9);
        pTVar15 = (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                  (pFVar20 + lVar23 + 0x60);
        local_860.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_860.ArrayNum = 0;
        local_860.ArrayMax = 0;
        local_2a8.Normals.DataPtr = (TVector<float> *)local_7d0;
        ClothingMeshUtils::GenerateMeshToMeshVertData
                  (pTVar15,&local_748,&local_2a8,(FPointWeightMap *)0x0,false,false,0.0,&local_860);
        DestructItems<ClothingMeshUtils::FMeshToMeshFilterSet,int>
                  ((FMeshToMeshFilterSet *)local_860.AllocatorInstance.Data,local_860.ArrayNum);
        if ((FMeshToMeshFilterSet *)local_860.AllocatorInstance.Data != (FMeshToMeshFilterSet *)0x0)
        {
          FMemory::Free(local_860.AllocatorInstance.Data);
        }
        if (pTVar25 !=
            (TArray<FChaosClothAssetLodTransitionDataCache,TSizedDefaultAllocator<32>_> *)0x0) {
          uVar16 = 0;
          if ((int)uVar17 < pTVar25->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar21 = (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                    ((pTVar25->AllocatorInstance).Data + lVar22 * 0x38 + 0x28);
          if (pTVar21 != pTVar15) {
            iVar9 = pTVar15->ArrayNum;
            piVar1 = &pTVar21->ArrayMax;
            pFVar20 = (pTVar15->AllocatorInstance).Data;
            pTVar21->ArrayNum = iVar9;
            if ((iVar9 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,iVar9,*piVar1,(ForAnyElementType *)pTVar21,iVar9,piVar1);
              if (iVar9 != 0) {
                memcpy((pTVar21->AllocatorInstance).Data,pFVar20,(longlong)iVar9 << 6);
              }
            }
          }
        }
        if (local_2a8.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.FilteredTriangles.AllocatorInstance.Data);
        }
        if (local_2a8.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.MaxEdgeLengths.AllocatorInstance.Data);
        }
        Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (&local_2a8.BVH);
        if (local_2a8.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.AveragedNormals.AllocatorInstance.Data);
        }
      }
LAB_14dc3ea8b:
      if (local_748.FilteredTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.FilteredTriangles.AllocatorInstance.Data);
      }
      if (local_748.MaxEdgeLengths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.MaxEdgeLengths.AllocatorInstance.Data);
      }
      Chaos::
      TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
      ::
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (&local_748.BVH);
      if (local_748.AveragedNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.AveragedNormals.AllocatorInstance.Data);
      }
      iVar9 = (this->ClothSimulationLodModels).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar22 = lVar22 + 1;
    } while ((int)uVar17 < iVar9);
  }
  if (local_890.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data);
  }
  return;
}

// GetNumVertices @ 14dc4dab0

int __thiscall
FChaosClothSimulationModel::GetNumVertices(FChaosClothSimulationModel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < (this->ClothSimulationLodModels).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)((this->ClothSimulationLodModels).AllocatorInstance.Data +
                   (longlong)param_1 * 0x1f0 + 8);
  }
  return 0;
}

// GetPatternPositions @ 14dc4dd50

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
FChaosClothSimulationModel::GetPatternPositions
          (FChaosClothSimulationModel *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  int iStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1 < 0) || ((this->ClothSimulationLodModels).ArrayNum <= param_1)) {
    local_18 = 0;
    local_10 = 0;
    puVar7 = &local_18;
  }
  else {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pFVar2 = (this->ClothSimulationLodModels).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0x1f0 + 0x78);
    local_28 = *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x1f0 + 0x70);
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iStack_20 = iVar1;
    puVar7 = &local_28;
  }
  uVar4 = puVar7[1];
  __return_storage_ptr__->DataPtr = (TVector2<float> *)*puVar7;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar4;
  return __return_storage_ptr__;
}

// GetPositions @ 14dc4dfd0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
FChaosClothSimulationModel::GetPositions
          (FChaosClothSimulationModel *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined8 local_28;
  int iStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1 < 0) || ((this->ClothSimulationLodModels).ArrayNum <= param_1)) {
    local_18 = 0;
    local_10 = 0;
    puVar6 = &local_18;
  }
  else {
    if (param_1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar7 = (this->ClothSimulationLodModels).AllocatorInstance.Data + (longlong)param_1 * 0x1f0;
    iVar1 = *(int *)(pFVar7 + 8);
    local_28 = *(undefined8 *)pFVar7;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iStack_20 = iVar1;
    puVar6 = &local_28;
  }
  uVar3 = puVar6[1];
  __return_storage_ptr__->DataPtr = (TVector<float> *)*puVar6;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar3;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 14dc4ee50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosClothSimulationModel::GetResourceSizeEx
          (FChaosClothSimulationModel *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar4;
  FResourceSizeEx *pFVar5;
  undefined7 uVar6;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  FArchiveState local_258;
  ulong64 local_1c8;
  FStructuredArchiveFromArchive local_1b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  pFVar5 = param_1;
  FArchiveState::FArchiveState(&local_258);
  local_1c8 = 0;
  uVar6 = (undefined7)((ulonglong)pFVar5 >> 8);
  local_258._padding_ = (longlong)&___7FMemoryCounterArchive_Private_ClothAsset_Chaos_UE__6B_;
  FArchiveState::SetIsSaving(&local_258,true);
  (**(code **)(local_258._padding_ + 0x108))(&local_258,CONCAT71(uVar6,1));
  local_258.ArIsCountingMemory = '\x01';
  if (Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
    Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationModel,(UObject *)pUVar3,
                         L"ChaosClothSimulationModel");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton;
  pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FChaosClothSimulationModel.OuterSingleton)
                      ->_padding_ + 0x2e0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                      (&local_1b8,(FArchive *)&local_258);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_270 = 0;
  local_278 = 0;
  (*pcVar1)(pUVar2,*(undefined8 *)FVar4,this,pUVar2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b8);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,local_1c8);
  FArchive::~FArchive((FArchive *)&local_258);
  return;
}

// GetTethers @ 14dc4fdd0

TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> * __thiscall
FChaosClothSimulationModel::GetTethers
          (FChaosClothSimulationModel *this,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if ((-1 < param_1) && (param_1 < (this->ClothSimulationLodModels).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *)
                (*pcVar6)();
      return pTVar10;
    }
    pFVar4 = (this->ClothSimulationLodModels).AllocatorInstance.Data;
    uVar8 = *(uint *)(pFVar4 + (longlong)param_1 * 0x1f0 + 0xf8);
    lVar13 = (longlong)(int)uVar8;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*piVar1 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar8,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    uVar12 = 0;
    if (0 < (int)uVar8) {
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < *(int *)(pFVar4 + (longlong)param_1 * 0x1f0 + 0xf8)) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar10;
        }
        uVar5 = *(undefined8 *)(*(longlong *)(pFVar4 + (longlong)param_1 * 0x1f0 + 0xf0) + lVar11);
        iVar3 = *(int *)(*(longlong *)(pFVar4 + (longlong)param_1 * 0x1f0 + 0xf0) + 8 + lVar11);
        if ((iVar3 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar10;
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        uVar12 = uVar12 + 1;
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        lVar11 = lVar11 + 0x10;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar2 = uVar5;
        *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_1c,iVar3);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return __return_storage_ptr__;
}

// RemapBoneIndices @ 14dc54b60

void __thiscall
FChaosClothSimulationModel::RemapBoneIndices
          (FChaosClothSimulationModel *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar5 = this->ReferenceBoneIndex;
  if ((iVar5 < 0) || (param_1->ArrayNum <= iVar5)) {
    iVar5 = 0;
  }
  else {
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4);
  }
  this->ReferenceBoneIndex = iVar5;
  pFVar6 = (this->UsedBoneIndices).AllocatorInstance.Data;
  iVar5 = (this->UsedBoneIndices).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar5 * 4;
  while( true ) {
    if ((this->UsedBoneIndices).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    iVar2 = *(int *)pFVar6;
    if ((iVar2 < 0) || (param_1->ArrayNum <= iVar2)) {
      *(int *)pFVar6 = 0;
      pFVar6 = pFVar6 + 4;
    }
    else {
      if (iVar2 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(int *)pFVar6 = *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar2 * 4);
      pFVar6 = pFVar6 + 4;
    }
  }
  return;
}

