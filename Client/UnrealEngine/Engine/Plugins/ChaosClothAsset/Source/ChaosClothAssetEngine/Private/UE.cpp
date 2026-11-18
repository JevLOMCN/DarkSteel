// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 33

// Construct<FChaosClothSimulationModel> @ 14dc27120

void __cdecl UE::CoreUObject::Private::Construct<FChaosClothSimulationModel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  return;
}

// ConstructForTests<FChaosClothSimulationModel> @ 14dc27150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosClothSimulationModel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FChaosClothSimulationModel> @ 14dc27180

void __cdecl UE::CoreUObject::Private::Destruct<FChaosClothSimulationModel>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FChaosClothSimulationLodModel,int>
            (*(FChaosClothSimulationLodModel **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FChaosClothSimulationModel> @ 14dc271d0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosClothSimulationModel>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FChaosClothSimulationLodModel *pFVar6;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar7);
      if (pFVar7 != pFVar3) {
        DestructItems<FChaosClothSimulationLodModel,int>
                  ((FChaosClothSimulationLodModel *)pFVar7->Data,*(int *)&pFVar7[1].Data);
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar6 = (FChaosClothSimulationLodModel *)pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1f0,8,iVar4,iVar5,pFVar7,iVar4,piVar1);
          ConstructItems<FChaosClothSimulationLodModel,FChaosClothSimulationLodModel,int>
                    (pFVar7->Data,pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        _Src = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,_Src,(longlong)iVar4 << 3);
          }
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar7 + 4),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar3 + 4));
      *(undefined4 *)&pFVar7[6].Data = *(undefined4 *)&pFVar3[6].Data;
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChaosClothSimulationLodModel> @ 14dc27600

void __cdecl UE::CoreUObject::Private::Construct<FChaosClothSimulationLodModel>(void *param_1)

{
  memset(param_1,0,0x1f0);
  FChaosClothSimulationLodModel::FChaosClothSimulationLodModel(param_1);
  return;
}

// ConstructForTests<FChaosClothSimulationLodModel> @ 14dc27630

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosClothSimulationLodModel>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x180) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined4 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0;
  return;
}

// Destruct<FChaosClothSimulationLodModel> @ 14dc27640

void __cdecl UE::CoreUObject::Private::Destruct<FChaosClothSimulationLodModel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0;
  if (*(void **)((longlong)param_1 + 0x1e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1e0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1a0));
  *(undefined4 *)((longlong)param_1 + 0x198) = 0;
  if (*(void **)((longlong)param_1 + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 400));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x150));
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x100));
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0xf0),*(int *)((longlong)param_1 + 0xf8));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// SerializeArchive<FChaosClothSimulationLodModel> @ 14dc27650

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosClothSimulationLodModel>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FChaosClothSimulationLodModel::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FChaosClothSimulationLodModel> @ 14dc27670

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosClothSimulationLodModel>
          (void *param_1,void *param_2,int param_3)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    pTVar1 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x30);
    if (pTVar1 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x30)) {
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x30))->ArrayNum;
      piVar2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x30))->ArrayMax;
      _Src = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x30))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x4c,4,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x4c);
        }
      }
    }
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40),
               (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40));
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50)
               ,(TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x50));
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60)
               ,(TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x60));
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x70),
               (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x70));
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x80));
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90),
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x90));
    if ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0xa0) !=
        (TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0xa0)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0xd0))->ArrayNum,
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0xe0))->ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0xd0))->ArrayNum,
                 ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0xe0))->ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0xa0),
                  (TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0xa0));
    }
    pTVar1 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0xf0);
    if (pTVar1 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0xf0)) {
      DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
                 (pTVar1->AllocatorInstance).Data,
                 ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0xf0))->ArrayNum);
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0xf0))->ArrayNum;
      piVar2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0xf0))->ArrayMax;
      pTVar4 = (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0xf0))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xf0))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        ConstructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                  ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
      }
    }
    if ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0x100) !=
        (TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0x100)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0x130))->ArrayNum,
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0x140))->ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x130))->ArrayNum,
                 ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x140))->ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x100),
                  (TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x100));
    }
    if ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0x150) !=
        (TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0x150)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0x180))->ArrayNum,
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 400))->ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x180))->ArrayNum,
                 ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 400))->ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x150),
                  (TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x150));
    }
    if ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0x1a0) !=
        (TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0x1a0)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0x1d0))->ArrayNum,
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_1 + 0x1e0))->ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x1d0))->ArrayNum,
                 ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x1e0))->ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x1a0),
                  (TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x1a0));
    }
    param_1 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x1f0);
    param_2 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x1f0);
  }
  return true;
}

// Construct<FChaosClothAssetLodTransitionDataCache> @ 14dc27f80

void __cdecl
UE::CoreUObject::Private::Construct<FChaosClothAssetLodTransitionDataCache>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FChaosClothAssetLodTransitionDataCache> @ 14dc27fb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosClothAssetLodTransitionDataCache>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FChaosClothAssetLodTransitionDataCache> @ 14dc27fd0

void __cdecl
UE::CoreUObject::Private::Destruct<FChaosClothAssetLodTransitionDataCache>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// SerializeArchive<FChaosClothAssetLodTransitionDataCache> @ 14dc28010

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FChaosClothAssetLodTransitionDataCache>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UPackage *pUVar1;
  
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
      Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache,
                           (UObject *)pUVar1,L"ChaosClothAssetLodTransitionDataCache");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)
               Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.
               OuterSingleton,param_1,param_2,
               (UStruct *)
               Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.
               OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  }
  ::operator<<(param_1,param_2);
  if (*(char *)param_2 != '\0') {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)param_2 + 1,0x10);
  }
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_2 + 0x18));
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
                     ((longlong)param_2 + 0x28));
  return true;
}

// Copy<FChaosClothAssetLodTransitionDataCache> @ 14dc280d0

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosClothAssetLodTransitionDataCache>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar1 + 2);
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)(puVar3 + 3),
               (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               ((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)(puVar3 + 5),
               (TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *)
               ((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    puVar1 = puVar1 + 7;
    puVar3 = puVar3 + 7;
  }
  return true;
}

// Construct<FChaosClothSimulationProperties> @ 14dc286a0

void __cdecl UE::CoreUObject::Private::Construct<FChaosClothSimulationProperties>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FChaosClothSimulationProperties> @ 14dc286c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChaosClothSimulationProperties>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FChaosClothSimulationProperties> @ 14dc286e0

void __cdecl UE::CoreUObject::Private::Destruct<FChaosClothSimulationProperties>(void *param_1)

{
  DestructItems<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>
            (*(TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>
            (*(TSharedPtr<FManagedArrayCollection_const_,1> **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FChaosClothSimulationProperties> @ 14dc28760

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosClothSimulationProperties>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  TSharedPtr<FManagedArrayCollection_const_,1> *pTVar5;
  TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *pTVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar7);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar7 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar7 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>
                  ((TSharedPtr<FManagedArrayCollection_const_,1> *)pFVar1->Data,*(int *)(puVar7 + 2)
                  );
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar7 + 0x14);
        pTVar5 = (TSharedPtr<FManagedArrayCollection_const_,1> *)
                 ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar7 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TSharedPtr<FManagedArrayCollection_const_,1>,TSharedPtr<FManagedArrayCollection_const_,1>,int>
                    (pFVar1->Data,pTVar5,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar7 + 3);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 3)) {
        DestructItems<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>
                  ((TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *)pFVar1->Data,
                   *(int *)(puVar7 + 4));
        iVar4 = *(int *)(puVar3 + 4);
        piVar2 = (int *)((longlong)puVar7 + 0x24);
        pTVar6 = (TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *)
                 ((ForAnyElementType *)(puVar3 + 3))->Data;
        *(int *)(puVar7 + 4) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>
                    (pFVar1->Data,pTVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UChaosClothAssetBase,UChaosClothAssetBase_*_&> @ 14dc2bff0

UChaosClothAssetBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UChaosClothAssetBase,UChaosClothAssetBase_*_&>
          (UChaosClothAssetBase **param_1)

{
  return *param_1;
}

// GetValueWithAlias<float> @ 14dc2f070

float __cdecl
UE::Chaos::ClothAsset::Private::GetValueWithAlias<float>
          (TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *param_1,FName param_2,
          float *param_3,TFunctionRef<float___cdecl(int)> *param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  FName *pFVar6;
  longlong lVar7;
  FName FVar8;
  FName *pFVar9;
  float fVar10;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_38 [4];
  
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyFacade",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetInteractor.cpp"
                         ,0x92,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar10 = (float)(*pcVar2)();
    return fVar10;
  }
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar10 = (float)(*pcVar2)();
    return fVar10;
  }
  piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->Object->field_0x58,param_2);
  if ((piVar5 != (int *)0x0) && (local_res10[0] = *piVar5, local_res10[0] != -1)) {
    fVar10 = (float)(**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_res10);
    return fVar10;
  }
  uVar4 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (Aliases._8_4_ != Aliases._52_4_) {
    lVar7 = 0x155377fe8;
    if (Aliases._64_8_ != 0) {
      lVar7 = Aliases._64_8_;
    }
    uVar4 = *(uint *)(lVar7 + (ulonglong)(Aliases._72_4_ - 1 & param_2.Number + uVar4) * 4);
    while (uVar4 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar4 * 0x20 + Aliases._0_8_);
      if (*pFVar6 == param_2) {
        pFVar9 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar9 = (FName *)0x0;
        }
        if (pFVar9 != (FName *)0x0) {
          FVar8 = *pFVar9;
          uVar4 = pFVar9[1].ComparisonIndex.Value;
          FVar1 = (FName)((longlong)FVar8 + (longlong)(int)uVar4 * 8);
          while( true ) {
            if (pFVar9[1].ComparisonIndex.Value != uVar4) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (FVar8 == FVar1) break;
            if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              fVar10 = (float)(*pcVar2)();
              return fVar10;
            }
            piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&param_1->Object->field_0x58,*(FName *)FVar8);
            if ((piVar5 != (int *)0x0) && (local_38[0] = *piVar5, local_38[0] != -1)) {
              fVar10 = (float)(**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_38);
              return fVar10;
            }
            FVar8 = (FName)((longlong)FVar8 + 8);
          }
        }
        break;
      }
      uVar4 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  return *param_3;
}

// GetValueWithAlias<UE::Math::TVector2<double>_> @ 14dc2f260

TVector2<double> * __cdecl
UE::Chaos::ClothAsset::Private::GetValueWithAlias<UE::Math::TVector2<double>_>
          (TVector2<double> *__return_storage_ptr__,
          TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *param_1,FName param_2,
          TVector2<double> *param_3,TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *param_4)

{
  FName FVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  TVector2<double> *pTVar6;
  int *piVar7;
  FName *pFVar8;
  longlong lVar9;
  FName FVar10;
  FName *pFVar11;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_38 [4];
  
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyFacade",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetInteractor.cpp"
                         ,0x92,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TVector2<double> *)(*pcVar2)();
    return pTVar6;
  }
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TVector2<double> *)(*pcVar2)();
    return pTVar6;
  }
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->Object->field_0x58,param_2);
  if ((piVar7 != (int *)0x0) && (local_res18[0] = *piVar7, local_res18[0] != -1)) {
    (**(code **)param_4)(__return_storage_ptr__,*(undefined8 *)&param_4->field_0x8,local_res18);
    return __return_storage_ptr__;
  }
  uVar5 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (Aliases._8_4_ != Aliases._52_4_) {
    lVar9 = 0x155377fe8;
    if (Aliases._64_8_ != 0) {
      lVar9 = Aliases._64_8_;
    }
    uVar5 = *(uint *)(lVar9 + (ulonglong)(Aliases._72_4_ - 1 & param_2.Number + uVar5) * 4);
    while (uVar5 != 0xffffffff) {
      pFVar8 = (FName *)((longlong)(int)uVar5 * 0x20 + Aliases._0_8_);
      if (*pFVar8 == param_2) {
        pFVar11 = pFVar8 + 1;
        if (pFVar8 == (FName *)0x0) {
          pFVar11 = (FName *)0x0;
        }
        if (pFVar11 != (FName *)0x0) {
          FVar10 = *pFVar11;
          uVar5 = pFVar11[1].ComparisonIndex.Value;
          FVar1 = (FName)((longlong)FVar10 + (longlong)(int)uVar5 * 8);
          while( true ) {
            if (pFVar11[1].ComparisonIndex.Value != uVar5) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (FVar10 == FVar1) break;
            if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar6 = (TVector2<double> *)(*pcVar2)();
              return pTVar6;
            }
            piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&param_1->Object->field_0x58,*(FName *)FVar10);
            if ((piVar7 != (int *)0x0) && (local_38[0] = *piVar7, local_38[0] != -1)) {
              (**(code **)param_4)
                        (__return_storage_ptr__,*(undefined8 *)&param_4->field_0x8,local_38);
              return __return_storage_ptr__;
            }
            FVar10 = (FName)((longlong)FVar10 + 8);
          }
        }
        break;
      }
      uVar5 = pFVar8[3].ComparisonIndex.Value;
    }
  }
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

// GetValueWithAlias<UE::Math::TVector<double>_> @ 14dc2f470

TVector<double> * __cdecl
UE::Chaos::ClothAsset::Private::GetValueWithAlias<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,
          TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *param_1,FName param_2,
          TVector<double> *param_3,TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_4)

{
  FName FVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  TVector<double> *pTVar6;
  int *piVar7;
  FName *pFVar8;
  longlong lVar9;
  FName FVar10;
  FName *pFVar11;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_38 [4];
  
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyFacade",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetInteractor.cpp"
                         ,0x92,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TVector<double> *)(*pcVar2)();
    return pTVar6;
  }
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TVector<double> *)(*pcVar2)();
    return pTVar6;
  }
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->Object->field_0x58,param_2);
  if ((piVar7 != (int *)0x0) && (local_res18[0] = *piVar7, local_res18[0] != -1)) {
    (**(code **)param_4)(__return_storage_ptr__,*(undefined8 *)&param_4->field_0x8,local_res18);
    return __return_storage_ptr__;
  }
  uVar5 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (Aliases._8_4_ != Aliases._52_4_) {
    lVar9 = 0x155377fe8;
    if (Aliases._64_8_ != 0) {
      lVar9 = Aliases._64_8_;
    }
    uVar5 = *(uint *)(lVar9 + (ulonglong)(Aliases._72_4_ - 1 & param_2.Number + uVar5) * 4);
    while (uVar5 != 0xffffffff) {
      pFVar8 = (FName *)((longlong)(int)uVar5 * 0x20 + Aliases._0_8_);
      if (*pFVar8 == param_2) {
        pFVar11 = pFVar8 + 1;
        if (pFVar8 == (FName *)0x0) {
          pFVar11 = (FName *)0x0;
        }
        if (pFVar11 != (FName *)0x0) {
          FVar10 = *pFVar11;
          uVar5 = pFVar11[1].ComparisonIndex.Value;
          FVar1 = (FName)((longlong)FVar10 + (longlong)(int)uVar5 * 8);
          while( true ) {
            if (pFVar11[1].ComparisonIndex.Value != uVar5) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (FVar10 == FVar1) break;
            if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar6 = (TVector<double> *)(*pcVar2)();
              return pTVar6;
            }
            piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&param_1->Object->field_0x58,*(FName *)FVar10);
            if ((piVar7 != (int *)0x0) && (local_38[0] = *piVar7, local_38[0] != -1)) {
              (**(code **)param_4)
                        (__return_storage_ptr__,*(undefined8 *)&param_4->field_0x8,local_38);
              return __return_storage_ptr__;
            }
            FVar10 = (FName)((longlong)FVar10 + 8);
          }
        }
        break;
      }
      uVar5 = pFVar8[3].ComparisonIndex.Value;
    }
  }
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetValueWithAlias<FString> @ 14dc2f690

FString * __cdecl
UE::Chaos::ClothAsset::Private::GetValueWithAlias<FString>
          (FString *__return_storage_ptr__,
          TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *param_1,FName param_2,
          FString *param_3,TFunctionRef<FString___cdecl(int)> *param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  int *piVar6;
  FName *pFVar7;
  longlong lVar8;
  FName FVar9;
  FName *pFVar10;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_38 [4];
  
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyFacade",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetInteractor.cpp"
                         ,0x92,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_1->Object->field_0x58,param_2);
  if ((piVar6 != (int *)0x0) && (local_res18[0] = *piVar6, local_res18[0] != -1)) {
    (**(code **)param_4)(__return_storage_ptr__,*(undefined8 *)&param_4->field_0x8,local_res18);
    return __return_storage_ptr__;
  }
  uVar4 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (Aliases._8_4_ != Aliases._52_4_) {
    lVar8 = 0x155377fe8;
    if (Aliases._64_8_ != 0) {
      lVar8 = Aliases._64_8_;
    }
    uVar4 = *(uint *)(lVar8 + (ulonglong)(Aliases._72_4_ - 1 & param_2.Number + uVar4) * 4);
    while (uVar4 != 0xffffffff) {
      pFVar7 = (FName *)((longlong)(int)uVar4 * 0x20 + Aliases._0_8_);
      if (*pFVar7 == param_2) {
        pFVar10 = pFVar7 + 1;
        if (pFVar7 == (FName *)0x0) {
          pFVar10 = (FName *)0x0;
        }
        if (pFVar10 != (FName *)0x0) {
          FVar9 = *pFVar10;
          uVar4 = pFVar10[1].ComparisonIndex.Value;
          FVar1 = (FName)((longlong)FVar9 + (longlong)(int)uVar4 * 8);
          while( true ) {
            if (pFVar10[1].ComparisonIndex.Value != uVar4) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (FVar9 == FVar1) break;
            if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FString *)(*pcVar2)();
              return pFVar5;
            }
            piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&param_1->Object->field_0x58,*(FName *)FVar9);
            if ((piVar6 != (int *)0x0) && (local_38[0] = *piVar6, local_38[0] != -1)) {
              (**(code **)param_4)
                        (__return_storage_ptr__,*(undefined8 *)&param_4->field_0x8,local_38);
              return __return_storage_ptr__;
            }
            FVar9 = (FName)((longlong)FVar9 + 8);
          }
        }
        break;
      }
      uVar4 = pFVar7[3].ComparisonIndex.Value;
    }
  }
  ::FString::FString(__return_storage_ptr__,param_3);
  return __return_storage_ptr__;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChaosClothComponent_*>_> @ 14dc30870

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChaosClothComponent_*>_>
          (ushort param_1,ForElementType<UChaosClothComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChaosClothComponent_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChaosClothComponent_*>_> @ 14dc30940

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChaosClothComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UChaosClothComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UChaosClothComponent_*>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 14dc374d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::Private::<lambda_25>::operator()(<lambda_25> *this,IConsoleVariable *param_1)

{
  USkinnedAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UChaosClothAssetBase> local_38;
  FSkinnedMeshComponentRecreateRenderStateContext local_20;
  
  if ((GEngine != (UEngine *)0x0) && (GEngine->UseClothAssetMinLODPerQualityLevels != false)) {
    local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectArray.ArrayNum = 0;
    local_38.ObjectArray.ArrayMax = 0;
    local_38.Index = 0xffffffff;
    EVar4 = GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = UChaosClothAssetBase::StaticClass();
    GetObjectsOfClass(pUVar6,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UChaosClothAssetBase>::Advance(&local_38);
      lVar7 = (longlong)local_38.Index;
      if (local_38.Index < 0) break;
      if (local_38.ObjectArray.ArrayNum <= local_38.Index) break;
      uVar5 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_38.Index >> 0x1f;
      }
      if (uVar5 == 0) {
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
      pUVar1 = *(USkinnedAsset **)(local_38.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
      if ((pUVar1 != (USkinnedAsset *)0x0) &&
         (0 < *(int *)&pUVar1[1].field_0xb0 - *(int *)&pUVar1[1].field_0xdc)) {
        FSkinnedMeshComponentRecreateRenderStateContext::
        FSkinnedMeshComponentRecreateRenderStateContext(&local_20,pUVar1,false);
        FSkinnedMeshComponentRecreateRenderStateContext::
        ~FSkinnedMeshComponentRecreateRenderStateContext(&local_20);
      }
    }
    if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// AppendTetherData @ 14dc38b30

void __cdecl
UE::Chaos::ClothAsset::Private::AppendTetherData
          (FCollectionClothFacade *param_1,FClothTetherData *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_60;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_50;
  
  FCollectionClothFacade::GetTetherKinematicIndex(param_1,&local_60);
  FCollectionClothFacade::GetTetherReferenceLength(param_1,&local_50);
  uVar2 = (param_2->Tethers).ArrayNum;
  uVar11 = (ulonglong)(int)uVar2;
  pFVar16 = (param_2->Tethers).AllocatorInstance.Data;
  pFVar12 = pFVar16 + uVar11 * 0x10;
  while( true ) {
    if ((param_2->Tethers).ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar16 == pFVar12) break;
    iVar3 = *(int *)(pFVar16 + 8);
    pFVar17 = *(FScriptContainerElement **)pFVar16;
    pFVar14 = pFVar17 + 8;
    pFVar1 = pFVar17 + (longlong)iVar3 * 0xc;
    while( true ) {
      if (*(int *)(pFVar16 + 8) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<int,int,float>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if (pFVar17 == pFVar1) break;
      uVar4 = *(uint *)(pFVar14 + -4);
      uVar9 = 0;
      if ((int)uVar4 < local_60.ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar13 = local_60.DataPtr + (int)uVar4;
      uVar9 = 0;
      if ((int)uVar4 < local_50.ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar15 = local_50.DataPtr + (int)uVar4;
      if (pTVar13->ArrayNum != pTVar15->ArrayNum) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("KinematicIndex.Num() == ReferenceLength.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothEngineTools.cpp"
                           ,0x22,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = (pTVar13->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar17) && (pFVar17 < pFVar6 + (longlong)pTVar13->ArrayMax * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = pTVar13->ArrayNum;
      if (iVar10 == pTVar13->ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
      }
      pTVar13->ArrayNum = iVar10 + 1;
      *(undefined4 *)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 4) =
           *(undefined4 *)pFVar17;
      pFVar6 = (pTVar15->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar14) && (pFVar14 < pFVar6 + (longlong)pTVar15->ArrayMax * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = pTVar15->ArrayNum;
      if (iVar10 == pTVar15->ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      pTVar15->ArrayNum = iVar10 + 1;
      pFVar17 = pFVar17 + 0xc;
      uVar5 = *(undefined4 *)pFVar14;
      pFVar14 = pFVar14 + 0xc;
      *(undefined4 *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4) = uVar5;
    }
    pFVar16 = pFVar16 + 0x10;
    uVar11 = (ulonglong)uVar2;
  }
  return;
}

// CalculateReferenceBoneIndex @ 14dc3f680

int __cdecl
UE::Chaos::ClothAsset::Private::CalculateReferenceBoneIndex
          (TArray<FChaosClothSimulationLodModel,TSizedDefaultAllocator<32>_> *param_1,
          FReferenceSkeleton *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  ushort uVar1;
  code *pcVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  ushort *puVar10;
  float *pfVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  uint local_74;
  uint local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_58 [2];
  
  fVar3 = __real_322bcc77;
  pFVar8 = (param_1->AllocatorInstance).Data;
  local_70 = param_1->ArrayNum;
  uVar7 = (ulonglong)(int)local_70;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar12 = pFVar8 + 0x38;
  local_60 = pFVar8 + uVar7 * 0x1f0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  do {
    pFVar4 = local_60;
    local_68 = pFVar8;
    if (param_1->ArrayNum != (int)uVar7) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FChaosClothSimulationLodModel_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar4) {
      iVar6 = FClothEngineTools::CalculateReferenceBoneIndex(local_58,param_2);
      if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].AllocatorInstance.Data);
      }
      DestructItems<FChaosClothSimulationLodModel,int>
                ((FChaosClothSimulationLodModel *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum);
      pFVar12 = (param_1->AllocatorInstance).Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      return iVar6;
    }
    local_74 = *(uint *)pFVar12;
    uVar7 = (ulonglong)(int)local_74;
    piVar9 = *(int **)(pFVar12 + -8);
    piVar13 = piVar9 + uVar7 * 0x13;
    while( true ) {
      if (*(int *)pFVar12 != (int)uVar7) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FClothVertBoneData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_78);
      }
      if (piVar9 == piVar13) break;
      iVar6 = 0;
      if (0 < *piVar9) {
        puVar10 = (ushort *)(piVar9 + 1);
        pfVar11 = (float *)(piVar9 + 7);
        do {
          if (*pfVar11 <= fVar3) break;
          uVar1 = *puVar10;
          if (param_3->ArrayNum <= (int)(uint)uVar1) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("UsedBoneIndices.IsValidIndex(UnmappedBoneIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationModel.cpp"
                               ,0x35,L"");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
          }
          if (param_3->ArrayNum <= (int)(uint)uVar1) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              iVar6 = (*pcVar2)();
              return iVar6;
            }
          }
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (local_58,(int *)((param_3->AllocatorInstance).Data + (ulonglong)uVar1 * 4));
          iVar6 = iVar6 + 1;
          pfVar11 = pfVar11 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar6 < *piVar9);
      }
      uVar7 = (ulonglong)local_74;
      piVar9 = piVar9 + 0x13;
    }
    pFVar8 = local_68 + 0x1f0;
    pFVar12 = pFVar12 + 0x1f0;
    uVar7 = (ulonglong)local_70;
  } while( true );
}

// CalculateTransitionDataHash @ 14dc404a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMD5Hash * __cdecl
UE::Chaos::ClothAsset::Private::CalculateTransitionDataHash
          (FMD5Hash *__return_storage_ptr__,FChaosClothSimulationLodModel *param_1)

{
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84 [3];
  FMD5 local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FMD5::FMD5(&local_78);
  local_88 = (param_1->Positions).ArrayNum;
  FMD5::Update(&local_78,(uchar *)&local_88,4);
  FMD5::Update(&local_78,(uchar *)(param_1->Positions).AllocatorInstance.Data,
               (longlong)local_88 * 0xc);
  local_84[0] = (param_1->Indices).ArrayNum;
  FMD5::Update(&local_78,(uchar *)local_84,4);
  FMD5::Update(&local_78,(uchar *)(param_1->Indices).AllocatorInstance.Data,
               (longlong)local_84[0] << 2);
  __return_storage_ptr__->bIsValid = false;
  FMD5::Final(&local_78,__return_storage_ptr__->Bytes);
  __return_storage_ptr__->bIsValid = true;
  FMD5::~FMD5(&local_78);
  return __return_storage_ptr__;
}

// HasValidSkinweights @ 14dc51950

bool __cdecl
UE::Chaos::ClothAsset::Private::HasValidSkinweights
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_1,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_2,
          FReferenceSkeleton *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res18 [16];
  
  if (param_3 == (FReferenceSkeleton *)0x0) {
LAB_14dc51aee:
    bVar3 = false;
  }
  else {
    if ((param_1->ArrayNum != param_2->ArrayNum) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BoneIndices.Num() == BoneWeights.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAsset.cpp"
                           ,0x39,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar8 = param_1->ArrayNum;
    uVar10 = 0;
    if (0 < iVar8) {
      lVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar10 < iVar8) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)((longlong)&param_1->DataPtr->ArrayNum + lVar11) == 0) goto LAB_14dc51aee;
        uVar5 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)((longlong)&param_2->DataPtr->ArrayNum + lVar11) == 0) goto LAB_14dc51aee;
        pTVar6 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
                           (param_1,uVar10);
        iVar8 = pTVar6->ArrayNum;
        pTVar7 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
                           (param_2,uVar10);
        if (iVar8 != pTVar7->ArrayNum) goto LAB_14dc51aee;
        pTVar6 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
                           (param_1,uVar10);
        pFVar9 = (pTVar6->AllocatorInstance).Data;
        iVar8 = pTVar6->ArrayNum;
        pFVar1 = pFVar9 + (longlong)iVar8 * 4;
        while( true ) {
          if (pTVar6->ArrayNum != iVar8) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar9 == pFVar1) break;
          if ((*(int *)pFVar9 < 0) || ((param_3->FinalRefBoneInfo).ArrayNum <= *(int *)pFVar9))
          goto LAB_14dc51aee;
          pFVar9 = pFVar9 + 4;
        }
        iVar8 = param_1->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar10 < iVar8);
    }
    bVar3 = true;
  }
  return bVar3;
}

// RemapBoneIndices @ 14dc54eb0

void __cdecl
UE::Chaos::ClothAsset::Private::RemapBoneIndices
          (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 local_res8 [8];
  
  pTVar6 = param_1->DataPtr;
  pTVar8 = pTVar6 + param_1->ArrayNum;
  do {
    if (pTVar6 == pTVar8) {
      return;
    }
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      iVar3 = *(int *)pFVar7;
      if (iVar3 == -1) {
LAB_14dc54fad:
        pFVar7 = pFVar7 + 4;
      }
      else {
        if ((iVar3 < 0) || (param_2->ArrayNum <= iVar3)) {
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7724080772948164656>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothEngineTools.cpp"
                             ,0x30,"Remap.IsValidIndex(Index)");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_14dc54fad;
        }
        if ((iVar3 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)pFVar7 = *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar3 * 4);
        pFVar7 = pFVar7 + 4;
      }
    }
    pTVar6 = pTVar6 + 1;
  } while( true );
}

// Serialize @ 14dc56390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChaosArchive * __cdecl
UE::Chaos::ClothAsset::Private::Serialize
          (FChaosArchive *param_1,
          TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FChaosArchive *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStackY_1f8 [32];
  uint local_1c8 [4];
  TSharedRef<FManagedArrayCollection,1> local_1b8;
  TSharedRef<FManagedArrayCollection,1> local_1a8;
  TSharedPtr<FManagedArrayCollection,1> local_198;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  FCollectionPropertyConstFacade local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->_padding_ & 1) == 0) ||
     (iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     0x75 < iVar6)) {
    (**(code **)(param_1->_padding_ + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
    uVar10 = 0;
    local_1c8[0] = 0;
    if ((param_1->_padding_ & 1) == 0) {
      local_1c8[0] = param_2->ArrayNum;
    }
    plVar2 = (longlong *)param_1->_padding_;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_1c8);
      }
    }
    else {
      local_1c8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_1c8[0] == 0) {
      if ((param_1->_padding_ & 1) != 0) {
        DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>
                  ((TSharedRef<FManagedArrayCollection_const_,1> *)(param_2->AllocatorInstance).Data
                   ,param_2->ArrayNum);
        param_2->ArrayNum = 0;
        if (param_2->ArrayMax != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
        }
      }
    }
    else {
      if (((int)local_1c8[0] < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SerializeNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAsset.cpp"
                             ,0x6f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FChaosArchive *)(*pcVar4)();
        return pFVar7;
      }
      if (((param_1->_padding_ & 0x200) == 0) && (-1 < (int)local_1c8[0])) {
        if ((param_1->_padding_ & 1) == 0) {
          if ((local_1c8[0] != param_2->ArrayNum) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("SerializeNum == ClothCollections.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAsset.cpp"
                                 ,0x8d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FChaosArchive *)(*pcVar4)();
            return pFVar7;
          }
          uVar12 = uVar10;
          if (0 < (int)local_1c8[0]) {
            do {
              uVar11 = (uint)uVar12;
              uVar9 = 0;
              if ((int)uVar11 < param_2->ArrayNum) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar7 = (FChaosArchive *)(*pcVar4)();
                return pFVar7;
              }
              pFVar8 = (param_2->AllocatorInstance).Data;
              pTVar3 = *(TReferenceControllerBase<1> **)(pFVar8 + uVar10 + 8);
              plVar2 = *(longlong **)(pFVar8 + uVar10);
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
              }
              (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              uVar10 = uVar10 + 0x10;
              uVar12 = (ulonglong)(uVar11 + 1);
            } while ((int)(uVar11 + 1) < (int)local_1c8[0]);
          }
        }
        else {
          TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_1c8[0]);
          if (0 < (int)local_1c8[0]) {
            do {
              MakeShared<FManagedArrayCollection,1>(&local_1b8);
              (**(code **)((local_1b8.Object)->_padding_ + 0x40))(local_1b8.Object,param_1);
              local_198.Object = local_1b8.Object;
              local_198.SharedReferenceCount.ReferenceController =
                   local_1b8.SharedReferenceCount.ReferenceController;
              if (local_1b8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1b8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              ::Chaos::Softs::FCollectionPropertyMutableFacade::FCollectionPropertyMutableFacade
                        ((FCollectionPropertyMutableFacade *)&local_158,&local_198);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_198.SharedReferenceCount.ReferenceController);
              ::Chaos::Softs::FCollectionPropertyMutableFacade::PostSerialize
                        ((FCollectionPropertyMutableFacade *)&local_158,(FArchive *)param_1);
              FCollectionClothFacade::FCollectionClothFacade
                        ((FCollectionClothFacade *)local_170,&local_1b8);
              FCollectionClothFacade::PostSerialize
                        ((FCollectionClothFacade *)local_170,(FArchive *)param_1);
              iVar6 = param_2->ArrayNum;
              if (iVar6 == param_2->ArrayMax) {
                iVar6 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
              param_2->ArrayNum = iVar6 + 1;
              *(FManagedArrayCollection **)pFVar8 = local_1b8.Object;
              *(TReferenceControllerBase<1> **)(pFVar8 + 8) =
                   local_1b8.SharedReferenceCount.ReferenceController;
              if (local_1b8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1b8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_170._16_8_);
              ::Chaos::Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade
                        (&local_158);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1b8.SharedReferenceCount.ReferenceController);
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while ((int)uVar9 < (int)local_1c8[0]);
          }
        }
      }
      else {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
  }
  else {
    DestructItems<TSharedRef<FManagedArrayCollection_const_,1>,int>
              ((TSharedRef<FManagedArrayCollection_const_,1> *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 != 1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,&param_2->AllocatorInstance,0,piVar1);
    }
    MakeShared<FManagedArrayCollection,1>(&local_1a8);
    (**(code **)((local_1a8.Object)->_padding_ + 0x40))(local_1a8.Object,param_1);
    (**(code **)((local_1a8.Object)->_padding_ + 0x18))();
    FCollectionClothFacade::FCollectionClothFacade((FCollectionClothFacade *)local_188,&local_1a8);
    FCollectionClothFacade::DefineSchema((FCollectionClothFacade *)local_188,None);
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    param_2->ArrayNum = iVar6 + 1;
    *(FManagedArrayCollection **)pFVar8 = local_1a8.Object;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) =
         local_1a8.SharedReferenceCount.ReferenceController;
    if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_188._16_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// SetValueWithAlias @ 14dc59b00

void __cdecl
UE::Chaos::ClothAsset::Private::SetValueWithAlias
          (TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *param_1,FName param_2,
          TFunctionRef<void___cdecl(FName_const_&)> *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  longlong lVar6;
  FName FVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  FName local_res10;
  
  local_res10 = param_2;
  if ((param_1->Object == (FCollectionPropertyFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyFacade",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetInteractor.cpp"
                         ,0xac,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = local_res10;
  uVar4 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (Aliases._8_4_ != Aliases._52_4_) {
    lVar6 = 0x155377fe8;
    if (Aliases._64_8_ != 0) {
      lVar6 = Aliases._64_8_;
    }
    uVar4 = *(uint *)(lVar6 + (ulonglong)(Aliases._72_4_ - 1 & FVar1.Number + uVar4) * 4);
    while (uVar4 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar4 * 0x20 + Aliases._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar8 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar8 = (FName *)0x0;
        }
        if (pFVar8 != (FName *)0x0) {
          FVar7 = *pFVar8;
          uVar4 = pFVar8[1].ComparisonIndex.Value;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)uVar4 * 8);
          while( true ) {
            if (pFVar8[1].ComparisonIndex.Value != uVar4) {
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (FVar7 == FVar1) break;
            (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,FVar7);
            FVar7 = (FName)((longlong)FVar7 + 8);
          }
          return;
        }
        break;
      }
      uVar4 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res10);
  return;
}

