// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 13

// StaticStruct @ 148c0aeb0

UScriptStruct * __cdecl FClothPhysicalMeshData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothPhysicalMeshData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UScriptStruct_FClothPhysicalMeshData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicalMeshData,(UObject *)pUVar1,
                         L"ClothPhysicalMeshData");
  }
  return Z_Registration_Info_UScriptStruct_FClothPhysicalMeshData.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 148c0b280

bool __cdecl
`FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1)

{
  return false;
}

// FClothPhysicalMeshData @ 148c190a0

FClothPhysicalMeshData * __thiscall
FClothPhysicalMeshData::FClothPhysicalMeshData(FClothPhysicalMeshData *this)

{
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  *(undefined8 *)&this->WeightMaps = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x8 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x20 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x28 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeightMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WeightMaps).field_0x34 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x40 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x48 = 0;
  (this->InverseMasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseMasses).ArrayNum = 0;
  (this->InverseMasses).ArrayMax = 0;
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = 0;
  (this->BoneData).ArrayMax = 0;
  *(undefined8 *)&(this->SelfCollisionVertexSet).Elements = 0;
  *(undefined8 *)&(this->SelfCollisionVertexSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelfCollisionVertexSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x34 = 0;
  (this->SelfCollisionVertexSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelfCollisionVertexSet).HashSize = 0;
  (this->EuclideanTethers).Tethers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EuclideanTethers).Tethers.ArrayNum = 0;
  (this->EuclideanTethers).Tethers.ArrayMax = 0;
  (this->GeodesicTethers).Tethers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeodesicTethers).Tethers.ArrayNum = 0;
  (this->GeodesicTethers).Tethers.ArrayMax = 0;
  this->MaxBoneWeights = 0;
  this->NumFixedVerts = 0;
  (this->SelfCollisionIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelfCollisionIndices).ArrayNum = 0;
  (this->SelfCollisionIndices).ArrayMax = 0;
  ClearWeightMaps(this);
  return this;
}

// ~FClothPhysicalMeshData @ 148c1a860

void __thiscall FClothPhysicalMeshData::~FClothPhysicalMeshData(FClothPhysicalMeshData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->SelfCollisionIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
             (this->GeodesicTethers).Tethers.AllocatorInstance.Data,
             (this->GeodesicTethers).Tethers.ArrayNum);
  pFVar1 = (this->GeodesicTethers).Tethers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
             (this->EuclideanTethers).Tethers.AllocatorInstance.Data,
             (this->EuclideanTethers).Tethers.ArrayNum);
  pFVar1 = (this->EuclideanTethers).Tethers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SelfCollisionVertexSet).HashSize = 0;
  FVar2 = (this->SelfCollisionVertexSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelfCollisionVertexSet).Elements);
  pFVar1 = (this->BoneData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InverseMasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WeightMaps).field_0x48 = 0;
  pvVar3 = *(void **)&(this->WeightMaps).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WeightMaps);
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 148c1b340

FClothPhysicalMeshData * __thiscall
FClothPhysicalMeshData::operator=(FClothPhysicalMeshData *this,FClothPhysicalMeshData *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *this_00;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *pTVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  int iVar4;
  FScriptContainerElement *_Src;
  
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Vertices,&param_1->Vertices);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Normals,&param_1->Normals);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=(&this->Indices,&param_1->Indices);
  TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
               *)&this->WeightMaps,
              (TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
               *)&param_1->WeightMaps);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->InverseMasses,&param_1->InverseMasses)
  ;
  pTVar3 = &this->BoneData;
  if (pTVar3 != &param_1->BoneData) {
    iVar4 = (param_1->BoneData).ArrayNum;
    piVar1 = &(this->BoneData).ArrayMax;
    _Src = (param_1->BoneData).AllocatorInstance.Data;
    (this->BoneData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x4c,4,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x4c);
      }
    }
  }
  this_01 = &this->SelfCollisionVertexSet;
  if (this_01 != &param_1->SelfCollisionVertexSet) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->SelfCollisionVertexSet).Hash,&(this->SelfCollisionVertexSet).HashSize,
               &(param_1->SelfCollisionVertexSet).Hash,(param_1->SelfCollisionVertexSet).HashSize);
    iVar4 = *(int *)&(param_1->SelfCollisionVertexSet).Elements.field_0x8;
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_01->Elements,iVar4);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar4,(ForAnyElementType *)this_01,
               (int *)&(this->SelfCollisionVertexSet).Elements.field_0x8,
               (int *)&(this->SelfCollisionVertexSet).Elements.field_0xc);
    puVar2 = &(param_1->SelfCollisionVertexSet).Elements.field_0x10;
    this_00 = &(this->SelfCollisionVertexSet).Elements.field_0x10;
    *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x30 =
         *(undefined4 *)&(param_1->SelfCollisionVertexSet).Elements.field_0x30;
    *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x34 =
         *(undefined4 *)&(param_1->SelfCollisionVertexSet).Elements.field_0x34;
    if (this_00 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar4 != 0) {
      memcpy(*(void **)&this_01->Elements,*(void **)&(param_1->SelfCollisionVertexSet).Elements,
             (longlong)iVar4 * 0xc);
    }
  }
  FClothTetherData::operator=(&this->EuclideanTethers,&param_1->EuclideanTethers);
  FClothTetherData::operator=(&this->GeodesicTethers,&param_1->GeodesicTethers);
  this->MaxBoneWeights = param_1->MaxBoneWeights;
  this->NumFixedVerts = param_1->NumFixedVerts;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->SelfCollisionIndices,&param_1->SelfCollisionIndices);
  return this;
}

// BuildSelfCollisionData @ 148c20770

void __thiscall
FClothPhysicalMeshData::BuildSelfCollisionData(FClothPhysicalMeshData *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FPointWeightMap *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  int local_res8 [2];
  uint local_res10 [2];
  FScriptContainerElement local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  int local_84 [19];
  
  uVar5 = (this->Vertices).ArrayNum;
  lVar17 = (longlong)(int)uVar5;
  uVar12 = 0;
  fVar18 = param_1 * __real_40800000;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_84[0] = 0;
  local_98[0] = (FScriptContainerElement)0x1;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  local_88 = 0;
  if ((uVar5 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar5,&local_90,0,local_84), 0 < (int)uVar5)) {
    uVar11 = (ulonglong)uVar5;
    do {
      if (((local_90.Data <= local_98) && (local_98 < local_90.Data + local_84[0])) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_88 == local_84[0]) {
        local_88 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&local_90,local_84);
      }
      iVar1 = local_88 + 1;
      local_90.Data[local_88] = local_98[0];
      uVar11 = uVar11 - 1;
      local_88 = iVar1;
    } while (uVar11 != 0);
  }
  pFVar9 = TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
           ::FindChecked((TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
                          *)&this->WeightMaps,1);
  fVar2 = __real_3dcccccd;
  uVar11 = uVar12;
  if (0 < (int)uVar5) {
    do {
      uVar10 = (uint)uVar12;
      if ((-1 < (int)uVar10) && ((int)uVar10 < (pFVar9->Values).ArrayNum)) {
        if (((int)uVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(float *)((pFVar9->Values).AllocatorInstance.Data + uVar11 * 4) <= fVar2) {
          uVar15 = 0;
          if ((int)uVar10 < local_88) {
            uVar15 = ~uVar10 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_90.Data[uVar11] = (FScriptContainerElement)0x0;
        }
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < lVar17);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->SelfCollisionVertexSet);
  local_res10[0] = 0;
  if (0 < (int)uVar5) {
    do {
      uVar10 = local_res10[0];
      uVar15 = 0;
      if ((int)local_res10[0] < local_88) {
        uVar15 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_90.Data[(int)uVar10] != (FScriptContainerElement)0x0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->SelfCollisionVertexSet,local_res8,(bool *)local_res10);
        lVar13 = (longlong)(int)uVar10;
        uVar15 = 0;
        if ((int)uVar10 < (this->Vertices).ArrayNum) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->Vertices).AllocatorInstance.Data;
        uVar15 = uVar10 + 1;
        lVar14 = (longlong)(int)uVar15;
        fVar2 = *(float *)(pFVar6 + lVar13 * 0xc);
        fVar3 = *(float *)(pFVar6 + lVar13 * 0xc + 4);
        fVar4 = *(float *)(pFVar6 + lVar13 * 0xc + 8);
        if (lVar14 < lVar17) {
          lVar13 = lVar14 * 0xc;
          do {
            uVar16 = ~uVar15 >> 0x1f;
            uVar10 = 0;
            if ((int)uVar15 < local_88) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (local_90.Data[lVar14] != (FScriptContainerElement)0x0) {
              uVar10 = 0;
              if ((int)uVar15 < (this->Vertices).ArrayNum) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar6 = (this->Vertices).AllocatorInstance.Data;
              if ((*(float *)(pFVar6 + lVar13 + 4) - fVar3) *
                  (*(float *)(pFVar6 + lVar13 + 4) - fVar3) +
                  (*(float *)(pFVar6 + lVar13) - fVar2) * (*(float *)(pFVar6 + lVar13) - fVar2) +
                  (*(float *)(pFVar6 + lVar13 + 8) - fVar4) *
                  (*(float *)(pFVar6 + lVar13 + 8) - fVar4) < fVar18 * param_1) {
                uVar10 = 0;
                if ((int)uVar15 < local_88) {
                  uVar10 = uVar16;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_90.Data[lVar14] = (FScriptContainerElement)0x0;
              }
            }
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 1;
            lVar13 = lVar13 + 0xc;
            uVar10 = local_res10[0];
          } while (lVar14 < lVar17);
        }
      }
      local_res10[0] = uVar10 + 1;
    } while ((int)local_res10[0] < (int)uVar5);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// CalculateInverseMasses @ 148c20cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148c21331) */
/* WARNING: Removing unreachable block (ram,0x000148c212e7) */
/* WARNING: Removing unreachable block (ram,0x000148c21335) */
/* WARNING: Removing unreachable block (ram,0x000148c21339) */

void __thiscall FClothPhysicalMeshData::CalculateInverseMasses(FClothPhysicalMeshData *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  int *piVar16;
  longlong *plVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  int *piVar24;
  int *piVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  uint local_140;
  uint local_13c;
  FScriptContainerElement *local_138;
  uint local_128 [2];
  FScriptContainerElement *local_120;
  int *local_118;
  longlong local_110;
  longlong local_108;
  int *local_100;
  code *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined **local_b8;
  int **ppiStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar10 = (this->Indices).ArrayNum;
  if (((this->Indices).ArrayNum !=
       (iVar10 / 3 + (iVar10 >> 0x1f) +
       (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Indices.Num() % 3 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeCommon\\Private\\ClothPhysicalMeshData.cpp"
                         ,0x99,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar18 = (this->Vertices).ArrayNum;
  lVar22 = (longlong)(int)uVar18;
  pTVar1 = &this->InverseMasses;
  local_13c = uVar18;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar16 = &(this->InverseMasses).ArrayMax;
  piVar24 = &(this->InverseMasses).ArrayNum;
  *piVar24 = 0;
  local_118 = piVar24;
  if (*piVar16 != uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&pTVar1->AllocatorInstance,0,piVar16);
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,uVar18,&pTVar1->AllocatorInstance,piVar24,piVar16);
  local_108 = lVar22;
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4,0,lVar22 * 4);
  if (0 < (this->Indices).ArrayNum) {
    local_110 = 8;
    uVar18 = 2;
    do {
      lVar22 = local_110;
      uVar21 = 0;
      if ((int)(uVar18 - 2) < (this->Indices).ArrayNum) {
        uVar21 = ~(uVar18 - 2) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = *(uint *)((this->Indices).AllocatorInstance.Data + lVar22 + -8);
      lVar26 = (longlong)(int)uVar21;
      uVar11 = 0;
      if ((int)(uVar18 - 1) < (this->Indices).ArrayNum) {
        uVar11 = ~(uVar18 - 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = *(uint *)((this->Indices).AllocatorInstance.Data + lVar22 + -4);
      lVar23 = (longlong)(int)uVar11;
      uVar12 = 0;
      if ((int)uVar18 < (this->Indices).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_140 = *(uint *)((this->Indices).AllocatorInstance.Data + lVar22);
      uVar12 = 0;
      if ((int)uVar11 < (this->Vertices).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_138 = (this->Vertices).AllocatorInstance.Data;
      uVar20 = ~uVar21 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar21 < (this->Vertices).ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->Vertices).AllocatorInstance.Data;
      lVar22 = (longlong)(int)local_140;
      fVar29 = *(float *)(local_138 + lVar23 * 0xc);
      fVar2 = *(float *)(local_138 + lVar23 * 0xc + 4);
      fVar27 = *(float *)(local_138 + lVar23 * 0xc + 8);
      fVar3 = *(float *)(pFVar6 + lVar26 * 0xc);
      fVar4 = *(float *)(pFVar6 + lVar26 * 0xc + 4);
      fVar5 = *(float *)(pFVar6 + lVar26 * 0xc + 8);
      local_138 = (FScriptContainerElement *)CONCAT44(local_138._4_4_,~local_140 >> 0x1f);
      uVar12 = 0;
      if ((int)local_140 < (this->Vertices).ArrayNum) {
        uVar12 = ~local_140 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_120 = (this->Vertices).AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar21 < (this->Vertices).ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->Vertices).AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar21 < *local_118) {
        uVar12 = uVar20;
      }
      fVar28 = (fVar27 - fVar5) *
               (*(float *)(local_120 + lVar22 * 0xc) - *(float *)(pFVar6 + lVar26 * 0xc)) -
               (fVar29 - fVar3) *
               (*(float *)(local_120 + lVar22 * 0xc + 8) - *(float *)(pFVar6 + lVar26 * 0xc + 8));
      fVar27 = (fVar2 - fVar4) *
               (*(float *)(local_120 + lVar22 * 0xc + 8) - *(float *)(pFVar6 + lVar26 * 0xc + 8)) -
               (fVar27 - fVar5) *
               (*(float *)(local_120 + lVar22 * 0xc + 4) - *(float *)(pFVar6 + lVar26 * 0xc + 4));
      fVar29 = (fVar29 - fVar3) *
               (*(float *)(local_120 + lVar22 * 0xc + 4) - *(float *)(pFVar6 + lVar26 * 0xc + 4)) -
               (fVar2 - fVar4) *
               (*(float *)(local_120 + lVar22 * 0xc) - *(float *)(pFVar6 + lVar26 * 0xc));
      fVar29 = SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar29 * fVar29);
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->InverseMasses).AllocatorInstance.Data;
      *(float *)(pFVar6 + lVar26 * 4) = fVar29 + *(float *)(pFVar6 + lVar26 * 4);
      uVar21 = 0;
      if ((int)uVar11 < *local_118) {
        uVar21 = ~uVar11 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->InverseMasses).AllocatorInstance.Data;
      *(float *)(pFVar6 + lVar23 * 4) = fVar29 + *(float *)(pFVar6 + lVar23 * 4);
      uVar21 = 0;
      if ((int)local_140 < (this->InverseMasses).ArrayNum) {
        uVar21 = (uint)local_138;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->InverseMasses).AllocatorInstance.Data;
      local_110 = local_110 + 0xc;
      *(float *)(pFVar6 + lVar22 * 4) = fVar29 + *(float *)(pFVar6 + lVar22 * 4);
      iVar10 = uVar18 + 1;
      lVar22 = local_108;
      uVar18 = uVar18 + 3;
    } while (iVar10 < (this->Indices).ArrayNum);
  }
  piVar24 = (int *)0x0;
  piVar25 = &(this->InverseMasses).ArrayNum;
  this->NumFixedVerts = 0;
  piVar16 = piVar24;
  if (*(int *)&(this->WeightMaps).field_0x8 != *(int *)&(this->WeightMaps).field_0x34) {
    puVar15 = *(undefined1 **)&(this->WeightMaps).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->WeightMaps).field_0x38;
    }
    iVar10 = *(int *)(puVar15 + (ulonglong)(*(int *)&(this->WeightMaps).field_0x48 - 1U & 1) * 4);
    if (iVar10 != -1) {
      do {
        piVar16 = (int *)((longlong)iVar10 * 0x20 + *(longlong *)&this->WeightMaps);
        if (*piVar16 == 1) break;
        iVar10 = piVar16[6];
        piVar16 = piVar24;
      } while (iVar10 != -1);
    }
  }
  local_100 = piVar16 + 2;
  if (piVar16 == (int *)0x0) {
    local_100 = piVar24;
  }
  if ((local_100 == (int *)0x0) || (local_100[2] == 0)) {
    local_88 = &___7__TFunction_OwnedObject_P6A_NH_Z_0A__0A__Function_Private_Core_UE__6B_;
    pcStack_80 = `FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_1>::
                 <lambda_invoker_cdecl>;
    local_f8 = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int),bool,int>::Call;
    local_e8 = 0x50795e20;
    uStack_e4 = 1;
    uStack_e0._0_4_ = 0x48c0b280;
    uStack_e0._4_4_ = 1;
    uStack_e0 = `FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
    local_70 = 0;
    local_d0 = (longlong *)0x0;
    local_d8 = local_78;
    local_98 = 0;
  }
  else {
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FClothPhysicalMeshData::CalculateInverseMasses'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    uStack_e0 = (code *)&local_100;
    ppiStack_b0 = (int **)uStack_e0;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_2>,bool,int>
               ::Call;
    local_e8 = 0x51c8e528;
    uStack_e4 = 1;
    local_a0 = 0;
    local_d0 = (longlong *)0x0;
    local_d8 = local_a8;
    local_c8 = 0;
  }
  uStack_e4 = 1;
  local_d0 = (longlong *)0x0;
  fVar29 = 0.0;
  piVar16 = piVar24;
  if (0 < lVar22) {
    do {
      uVar21 = (uint)piVar24;
      uVar18 = 0;
      if ((int)uVar21 < *piVar25) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = (this->InverseMasses).AllocatorInstance.Data;
      local_128[0] = uVar21;
      UE::Core::Private::Function::CheckCallable(local_f8);
      pcVar7 = local_f8;
      plVar17 = (longlong *)&local_e8;
      if (local_d0 != (longlong *)0x0) {
        plVar17 = local_d0;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      cVar9 = (*pcVar7)(uVar14,local_128);
      if (cVar9 == '\0') {
        fVar29 = fVar29 + *(float *)(pFVar6 + (longlong)piVar16 * 4);
      }
      else {
        *(undefined4 *)(pFVar6 + (longlong)piVar16 * 4) = 0;
        this->NumFixedVerts = this->NumFixedVerts + 1;
      }
      fVar2 = __real_3f800000;
      piVar24 = (int *)(ulonglong)(uVar21 + 1);
      piVar16 = (int *)((longlong)piVar16 + 1);
    } while ((longlong)piVar16 < local_108);
    if (0.0 < fVar29) {
      iVar13 = local_13c - this->NumFixedVerts;
      pFVar19 = (this->InverseMasses).AllocatorInstance.Data;
      iVar10 = *piVar25;
      pFVar6 = pFVar19 + (longlong)iVar10 * 4;
      while( true ) {
        if (*piVar25 != iVar10) {
          `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_148);
        }
        if (pFVar19 == pFVar6) break;
        if (*(float *)pFVar19 != 0.0) {
          *(float *)pFVar19 = fVar2 / (*(float *)pFVar19 * ((float)iVar13 / fVar29));
        }
        pFVar19 = pFVar19 + 4;
      }
    }
  }
  if (local_f8 != (code *)0x0) {
    plVar17 = (longlong *)&local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar17 = local_d0;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return;
}

// CalculateNumInfluences @ 148c214f0

void __thiscall FClothPhysicalMeshData::CalculateNumInfluences(FClothPhysicalMeshData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->BoneData).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = 0;
      pFVar6 = (this->BoneData).AllocatorInstance.Data + lVar8;
      lVar4 = 0;
      *(int *)pFVar6 = 0xc;
      do {
        if (*(float *)(pFVar6 + (lVar4 + 7) * 4) == 0.0) {
          *(int *)pFVar6 = iVar5;
          break;
        }
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < 0xc);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x4c;
    } while ((int)uVar7 < (this->Vertices).ArrayNum);
  }
  return;
}

// CalculateTethers @ 148c21cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClothPhysicalMeshData::CalculateTethers(FClothPhysicalMeshData *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FClothTetherData *pFVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStackY_328 [32];
  undefined8 local_2e8;
  int local_2e0;
  undefined8 local_2d8;
  int local_2d0;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  code *local_298;
  undefined8 **local_290;
  code *local_288;
  undefined8 **local_280;
  code *local_278;
  undefined8 **local_270;
  TArrayView<unsigned_int_const_,int> local_268;
  TArrayView<UE::Math::TVector<float>_const_,int> local_258;
  code *local_248;
  undefined8 **local_240;
  code *local_238;
  undefined8 **local_230;
  code *local_228;
  undefined8 **local_220;
  TArrayView<unsigned_int_const_,int> local_218;
  TArrayView<UE::Math::TVector<float>_const_,int> local_208;
  TArrayView<float_const_,int> local_1f8;
  TArrayView<unsigned_int_const_,int> local_1e8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1d8;
  TArrayView<float_const_,int> local_1c8;
  TArrayView<unsigned_int_const_,int> local_1b8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1a8;
  FClothTetherDataPrivate local_198;
  FClothTetherDataPrivate local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  iVar11 = *(int *)&(this->WeightMaps).field_0x8;
  puVar1 = &(this->WeightMaps).field_0x38;
  puVar9 = &(this->WeightMaps).field_0x40;
  puVar2 = &(this->WeightMaps).field_0x48;
  iVar4 = *(int *)&(this->WeightMaps).field_0x34;
  if (iVar11 != iVar4) {
    puVar7 = *(undefined1 **)puVar9;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = puVar1;
    }
    iVar10 = *(int *)(puVar7 + (ulonglong)(*(int *)puVar2 - 1U & 1) * 4);
    if (iVar10 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar10 * 0x20 + *(longlong *)&this->WeightMaps);
        if (*piVar8 == 1) {
          if (iVar10 != -1) {
            piVar13 = piVar8 + 2;
            if (piVar8 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            goto LAB_148c21d79;
          }
          break;
        }
        iVar10 = piVar8[6];
      } while (iVar10 != -1);
    }
  }
  piVar13 = (int *)0x0;
  if (iVar11 != iVar4) {
LAB_148c21d79:
    puVar9 = *(undefined1 **)puVar9;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)(*(int *)puVar2 - 1U & 0xc9) * 4);
    if (iVar11 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar11 * 0x20 + *(longlong *)&this->WeightMaps);
        if (*piVar8 == 0xc9) {
          piVar12 = piVar8 + 2;
          if (piVar8 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          if (piVar12 != (int *)0x0) {
            if (param_1) {
              local_2e8 = *(undefined8 *)piVar12;
              pFVar3 = &this->EuclideanTethers;
              iVar11 = piVar12[2];
              if ((iVar11 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_268.DataPtr = (uint *)(this->Indices).AllocatorInstance.Data;
              iVar4 = (this->Indices).ArrayNum;
              local_2e0 = iVar11;
              if ((iVar4 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_258.DataPtr = (TVector<float> *)(this->Vertices).AllocatorInstance.Data;
              iVar11 = (this->Vertices).ArrayNum;
              local_268.ArrayNum = iVar4;
              if ((iVar11 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_258.ArrayNum = iVar11;
              if (iVar11 == local_2e0) {
                local_2c8 = &local_2e8;
                local_290 = &local_2c8;
                local_298 = UE::Core::Private::Function::
                            TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>
                            ::Call;
                local_2c0 = &local_2e8;
                local_288 = UE::Core::Private::Function::
                            TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>
                            ::Call;
                local_280 = &local_2c0;
                local_2b8 = &local_2e8;
                local_270 = &local_2b8;
                local_278 = UE::Core::Private::Function::
                            TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>
                            ::Call;
                FClothTetherDataPrivate::FClothTetherDataPrivate
                          (&local_198,&local_258,&local_268,
                           (TFunctionRef<bool___cdecl(int)> *)&local_278,
                           (TFunctionRef<bool___cdecl(int)> *)&local_288,
                           (TFunctionRef<bool___cdecl(int)> *)&local_298,false);
                FClothTetherDataPrivate::GetBatchedTetherData(&local_198,&pFVar3->Tethers);
                FClothTetherDataPrivate::~FClothTetherDataPrivate(&local_198);
              }
              else {
                DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                          ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
                           (pFVar3->Tethers).AllocatorInstance.Data,
                           (this->EuclideanTethers).Tethers.ArrayNum);
                iVar11 = (this->EuclideanTethers).Tethers.ArrayMax;
                (this->EuclideanTethers).Tethers.ArrayNum = 0;
                if (iVar11 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,(ForAnyElementType *)pFVar3,0,
                             &(this->EuclideanTethers).Tethers.ArrayMax);
                }
              }
            }
            if (!param_2) {
              return;
            }
            local_2d8 = *(undefined8 *)piVar12;
            pFVar3 = &this->GeodesicTethers;
            iVar11 = piVar12[2];
            if ((iVar11 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_218.DataPtr = (uint *)(this->Indices).AllocatorInstance.Data;
            iVar4 = (this->Indices).ArrayNum;
            local_2d0 = iVar11;
            if ((iVar4 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_208.DataPtr = (TVector<float> *)(this->Vertices).AllocatorInstance.Data;
            iVar11 = (this->Vertices).ArrayNum;
            local_218.ArrayNum = iVar4;
            if ((iVar11 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_208.ArrayNum = iVar11;
            if (iVar11 == local_2d0) {
              local_2b0 = &local_2d8;
              local_240 = &local_2b0;
              local_248 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>
                          ::Call;
              local_2a8 = &local_2d8;
              local_238 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>
                          ::Call;
              local_230 = &local_2a8;
              local_2a0 = &local_2d8;
              local_220 = &local_2a0;
              local_228 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>
                          ::Call;
              FClothTetherDataPrivate::FClothTetherDataPrivate
                        (&local_e8,&local_208,&local_218,
                         (TFunctionRef<bool___cdecl(int)> *)&local_228,
                         (TFunctionRef<bool___cdecl(int)> *)&local_238,
                         (TFunctionRef<bool___cdecl(int)> *)&local_248,true);
              FClothTetherDataPrivate::GetBatchedTetherData(&local_e8,&pFVar3->Tethers);
              FClothTetherDataPrivate::~FClothTetherDataPrivate(&local_e8);
              return;
            }
            DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
                       (pFVar3->Tethers).AllocatorInstance.Data,
                       (this->GeodesicTethers).Tethers.ArrayNum);
            iVar11 = (this->GeodesicTethers).Tethers.ArrayMax;
            (this->GeodesicTethers).Tethers.ArrayNum = 0;
            if (iVar11 == 0) {
              return;
            }
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)pFVar3,0,
                       &(this->GeodesicTethers).Tethers.ArrayMax);
            return;
          }
          break;
        }
        iVar11 = piVar8[6];
      } while (iVar11 != -1);
    }
    if (piVar13 != (int *)0x0) {
      if (param_1) {
        local_1f8.DataPtr = *(float **)piVar13;
        iVar11 = piVar13[2];
        if ((iVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1e8.DataPtr = (uint *)(this->Indices).AllocatorInstance.Data;
        iVar4 = (this->Indices).ArrayNum;
        local_1f8.ArrayNum = iVar11;
        if ((iVar4 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1d8.DataPtr = (TVector<float> *)(this->Vertices).AllocatorInstance.Data;
        iVar11 = (this->Vertices).ArrayNum;
        local_1e8.ArrayNum = iVar4;
        if ((iVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1d8.ArrayNum = iVar11;
        FClothTetherData::GenerateTethers
                  (&this->EuclideanTethers,&local_1d8,&local_1e8,&local_1f8,false);
      }
      if (param_2) {
        local_1c8.DataPtr = *(float **)piVar13;
        iVar11 = piVar13[2];
        if ((iVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1b8.DataPtr = (uint *)(this->Indices).AllocatorInstance.Data;
        iVar4 = (this->Indices).ArrayNum;
        local_1c8.ArrayNum = iVar11;
        if ((iVar4 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1a8.DataPtr = (TVector<float> *)(this->Vertices).AllocatorInstance.Data;
        iVar11 = (this->Vertices).ArrayNum;
        local_1b8.ArrayNum = iVar4;
        if ((iVar11 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1a8.ArrayNum = iVar11;
        FClothTetherData::GenerateTethers
                  (&this->GeodesicTethers,&local_1a8,&local_1b8,&local_1c8,true);
      }
    }
  }
  return;
}

// ClearWeightMaps @ 148c227d0

void __thiscall FClothPhysicalMeshData::ClearWeightMaps(FClothPhysicalMeshData *this)

{
  TMap<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint local_res8 [2];
  
  this_00 = &this->WeightMaps;
  for (lVar3 = 0x3f; 0x13UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  iVar5 = 1 << ((byte)lVar3 & 0x1f);
  iVar2 = *(int *)&(this->WeightMaps).field_0x48;
  if ((iVar2 < iVar5) || (iVar5 < iVar2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->WeightMaps).field_0x8);
  puVar1 = &(this->WeightMaps).field_0xc;
  *(undefined4 *)&(this->WeightMaps).field_0x8 = 0;
  if (*(int *)puVar1 != 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,4,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->WeightMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WeightMaps).field_0x34 = 0;
  iVar2 = *(int *)&(this->WeightMaps).field_0x2c;
  *(undefined4 *)&(this->WeightMaps).field_0x28 = 0;
  if ((iVar2 < 0x20) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->WeightMaps).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WeightMaps).field_0x10,0);
  }
  if (bVar4) {
    *(int *)&(this->WeightMaps).field_0x48 = iVar5;
    TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FPointWeightMap>,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_res8[0] = 1;
  TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  ::Emplace<unsigned_int>
            ((TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
              *)this_00,local_res8);
  local_res8[0] = 2;
  TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  ::Emplace<unsigned_int>
            ((TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
              *)this_00,local_res8);
  local_res8[0] = 3;
  TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  ::Emplace<unsigned_int>
            ((TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
              *)this_00,local_res8);
  local_res8[0] = 4;
  TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  ::Emplace<unsigned_int>
            ((TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
              *)this_00,local_res8);
  return;
}

// MigrateFrom @ 148c2dae0

void __thiscall
FClothPhysicalMeshData::MigrateFrom(FClothPhysicalMeshData *this,FClothPhysicalMeshData *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  *pTVar5;
  TMap<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  *this_00;
  undefined1 *_Src;
  undefined1 *_Dst;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  void *pvVar11;
  
  if (this != param_1) {
    pFVar10 = (this->Vertices).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    pTVar1 = &param_1->Normals;
    (this->Vertices).AllocatorInstance.Data = (param_1->Vertices).AllocatorInstance.Data;
    pTVar2 = &this->Normals;
    (param_1->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Vertices).ArrayNum = (param_1->Vertices).ArrayNum;
    (this->Vertices).ArrayMax = (param_1->Vertices).ArrayMax;
    (param_1->Vertices).ArrayNum = 0;
    (param_1->Vertices).ArrayMax = 0;
    if (pTVar2 != pTVar1) {
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Normals).ArrayNum = (param_1->Normals).ArrayNum;
      (this->Normals).ArrayMax = (param_1->Normals).ArrayMax;
      (param_1->Normals).ArrayNum = 0;
      (param_1->Normals).ArrayMax = 0;
    }
    pTVar3 = &param_1->Indices;
    pTVar4 = &this->Indices;
    if (pTVar4 != pTVar3) {
      pFVar10 = (pTVar4->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Indices).ArrayNum = (param_1->Indices).ArrayNum;
      (this->Indices).ArrayMax = (param_1->Indices).ArrayMax;
      (param_1->Indices).ArrayNum = 0;
      (param_1->Indices).ArrayMax = 0;
    }
    pTVar5 = &param_1->WeightMaps;
    this_00 = &this->WeightMaps;
    if (this_00 != pTVar5) {
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->WeightMaps).field_0x8);
      if (*(void **)this_00 != (void *)0x0) {
        FMemory::Free(*(void **)this_00);
      }
      _Src = &(param_1->WeightMaps).field_0x10;
      *(undefined8 *)this_00 = *(undefined8 *)pTVar5;
      _Dst = &(this->WeightMaps).field_0x10;
      *(undefined8 *)pTVar5 = 0;
      *(undefined4 *)&(this->WeightMaps).field_0x8 = *(undefined4 *)&(param_1->WeightMaps).field_0x8
      ;
      *(undefined4 *)&(this->WeightMaps).field_0xc = *(undefined4 *)&(param_1->WeightMaps).field_0xc
      ;
      *(undefined8 *)&(param_1->WeightMaps).field_0x8 = 0;
      if (_Dst != _Src) {
        if (*(longlong *)&(param_1->WeightMaps).field_0x20 == 0) {
          memmove(_Dst,_Src,0x10);
        }
        pvVar11 = *(void **)&(this->WeightMaps).field_0x20;
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
        *(undefined8 *)&(this->WeightMaps).field_0x20 =
             *(undefined8 *)&(param_1->WeightMaps).field_0x20;
        *(undefined8 *)&(param_1->WeightMaps).field_0x20 = 0;
        *(undefined4 *)&(this->WeightMaps).field_0x28 =
             *(undefined4 *)&(param_1->WeightMaps).field_0x28;
        *(undefined4 *)&(this->WeightMaps).field_0x2c =
             *(undefined4 *)&(param_1->WeightMaps).field_0x2c;
        *(undefined8 *)&(param_1->WeightMaps).field_0x28 = 0;
      }
      *(undefined4 *)&(this->WeightMaps).field_0x30 =
           *(undefined4 *)&(param_1->WeightMaps).field_0x30;
      *(undefined4 *)&(this->WeightMaps).field_0x34 =
           *(undefined4 *)&(param_1->WeightMaps).field_0x34;
      *(undefined4 *)&(param_1->WeightMaps).field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->WeightMaps).field_0x34 = 0;
      if (*(longlong *)&(param_1->WeightMaps).field_0x40 == 0) {
        *(undefined4 *)&(this->WeightMaps).field_0x38 =
             *(undefined4 *)&(param_1->WeightMaps).field_0x38;
      }
      pvVar11 = *(void **)&(this->WeightMaps).field_0x40;
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      *(undefined8 *)&(this->WeightMaps).field_0x40 =
           *(undefined8 *)&(param_1->WeightMaps).field_0x40;
      *(undefined8 *)&(param_1->WeightMaps).field_0x40 = 0;
      *(undefined4 *)&(this->WeightMaps).field_0x48 =
           *(undefined4 *)&(param_1->WeightMaps).field_0x48;
      *(undefined4 *)&(param_1->WeightMaps).field_0x48 = 0;
    }
    pTVar6 = &param_1->InverseMasses;
    pTVar7 = &this->InverseMasses;
    if (pTVar7 != pTVar6) {
      pFVar10 = (pTVar7->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar7->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->InverseMasses).ArrayNum = (param_1->InverseMasses).ArrayNum;
      (this->InverseMasses).ArrayMax = (param_1->InverseMasses).ArrayMax;
      (param_1->InverseMasses).ArrayNum = 0;
      (param_1->InverseMasses).ArrayMax = 0;
    }
    pTVar8 = &param_1->BoneData;
    pTVar9 = &this->BoneData;
    if (pTVar9 != pTVar8) {
      pFVar10 = (pTVar9->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->BoneData).ArrayNum = (param_1->BoneData).ArrayNum;
      (this->BoneData).ArrayMax = (param_1->BoneData).ArrayMax;
      (param_1->BoneData).ArrayNum = 0;
      (param_1->BoneData).ArrayMax = 0;
    }
    this->NumFixedVerts = param_1->NumFixedVerts;
    this->MaxBoneWeights = param_1->MaxBoneWeights;
    if (&this->SelfCollisionVertexSet != &param_1->SelfCollisionVertexSet) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
      Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (&this->SelfCollisionVertexSet,&param_1->SelfCollisionVertexSet);
    }
  }
  return;
}

// MigrateFrom @ 148c2dd50

void __thiscall
FClothPhysicalMeshData::MigrateFrom
          (FClothPhysicalMeshData *this,UClothPhysicalMeshDataBase_Legacy *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar14;
  uint *puVar15;
  undefined1 *puVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  uint local_res8 [2];
  int local_res10 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_48;
  
  pTVar1 = &param_1->Vertices;
  if (this != (FClothPhysicalMeshData *)pTVar1) {
    pFVar9 = (this->Vertices).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (this->Vertices).AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Vertices).ArrayNum = (param_1->Vertices).ArrayNum;
    (this->Vertices).ArrayMax = (param_1->Vertices).ArrayMax;
    (param_1->Vertices).ArrayNum = 0;
    (param_1->Vertices).ArrayMax = 0;
  }
  pTVar1 = &param_1->Normals;
  pTVar2 = &this->Normals;
  if (pTVar2 != pTVar1) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Normals).ArrayNum = (param_1->Normals).ArrayNum;
    (this->Normals).ArrayMax = (param_1->Normals).ArrayMax;
    (param_1->Normals).ArrayNum = 0;
    (param_1->Normals).ArrayMax = 0;
  }
  pTVar3 = &param_1->Indices;
  pTVar4 = &this->Indices;
  if (pTVar4 != pTVar3) {
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Indices).ArrayNum = (param_1->Indices).ArrayNum;
    (this->Indices).ArrayMax = (param_1->Indices).ArrayMax;
    (param_1->Indices).ArrayNum = 0;
    (param_1->Indices).ArrayMax = 0;
  }
  pTVar13 = &param_1->InverseMasses;
  pTVar14 = &this->InverseMasses;
  if (pTVar14 != pTVar13) {
    pFVar9 = (pTVar14->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InverseMasses).ArrayNum = (param_1->InverseMasses).ArrayNum;
    (this->InverseMasses).ArrayMax = (param_1->InverseMasses).ArrayMax;
    (param_1->InverseMasses).ArrayNum = 0;
    (param_1->InverseMasses).ArrayMax = 0;
  }
  pTVar5 = &param_1->BoneData;
  pTVar6 = &this->BoneData;
  if (pTVar6 != pTVar5) {
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BoneData).ArrayNum = (param_1->BoneData).ArrayNum;
    (this->BoneData).ArrayMax = (param_1->BoneData).ArrayMax;
    (param_1->BoneData).ArrayNum = 0;
    (param_1->BoneData).ArrayMax = 0;
  }
  this_00 = &this->SelfCollisionVertexSet;
  this->NumFixedVerts = param_1->NumFixedVerts;
  iVar17 = 1;
  this->MaxBoneWeights = param_1->MaxBoneWeights;
  uVar8 = (param_1->SelfCollisionIndices).ArrayNum;
  if (3 < uVar8) {
    uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((((int)uVar8 < 1) || (iVar17 <= (this->SelfCollisionVertexSet).HashSize)) &&
     ((this->SelfCollisionVertexSet).HashSize <= iVar17)) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,uVar8);
  }
  else {
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,uVar8);
    (this->SelfCollisionVertexSet).HashSize = iVar17;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  pFVar18 = (param_1->SelfCollisionIndices).AllocatorInstance.Data;
  iVar17 = (param_1->SelfCollisionIndices).ArrayNum;
  pFVar9 = pFVar18 + (longlong)iVar17 * 4;
  while( true ) {
    if ((param_1->SelfCollisionIndices).ArrayNum != iVar17) {
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar18 == pFVar9) break;
    local_res8[0] = *(uint *)pFVar18;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (&this->SelfCollisionVertexSet,local_res10,(bool *)local_res8);
    pFVar18 = pFVar18 + 4;
  }
  UClothPhysicalMeshDataBase_Legacy::GetFloatArrayIds(param_1,&local_48);
  iVar17 = local_48.ArrayNum;
  pFVar9 = local_48.AllocatorInstance.Data + (longlong)iVar17 * 4;
  FVar19.Data = local_48.AllocatorInstance.Data;
  do {
    if (local_48.ArrayNum != iVar17) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar19.Data == pFVar9) {
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      return;
    }
    uVar8 = *(uint *)FVar19.Data;
    pTVar13 = UClothPhysicalMeshDataBase_Legacy::GetFloatArray(param_1,uVar8);
    if (pTVar13 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      local_res8[0] = uVar8;
      if (*(int *)&(this->WeightMaps).field_0x8 != *(int *)&(this->WeightMaps).field_0x34) {
        puVar10 = *(undefined1 **)&(this->WeightMaps).field_0x40;
        puVar16 = &(this->WeightMaps).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar16 = puVar10;
        }
        uVar12 = *(uint *)(puVar16 +
                          (ulonglong)(*(int *)&(this->WeightMaps).field_0x48 - 1U & uVar8) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            puVar15 = (uint *)((longlong)(int)uVar12 * 0x20 + *(longlong *)&this->WeightMaps);
            if (*puVar15 == uVar8) {
              if (puVar15 != (uint *)0x0) {
                pTVar14 = (TArray<float,TSizedDefaultAllocator<32>_> *)(puVar15 + 2);
                goto LAB_148c2dfeb;
              }
              break;
            }
            uVar12 = puVar15[6];
          } while (uVar12 != 0xffffffff);
        }
      }
      pTVar14 = &TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
                 ::EmplaceByHash<unsigned_int>
                           ((TMapBase<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
                             *)&this->WeightMaps,uVar8,local_res8)->Values;
LAB_148c2dfeb:
      if (pTVar14 != pTVar13) {
        pFVar18 = (pTVar14->AllocatorInstance).Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar14->ArrayNum = pTVar13->ArrayNum;
        pTVar14->ArrayMax = pTVar13->ArrayMax;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
      }
    }
    FVar19.Data = FVar19.Data + 4;
  } while( true );
}

// Reset @ 148c31510

void __thiscall FClothPhysicalMeshData::Reset(FClothPhysicalMeshData *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  float local_res10 [2];
  undefined4 local_38 [4];
  
  uVar7 = (ulonglong)(uint)param_2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->Vertices,&UE::Math::TVector<float>::ZeroVector,param_1);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->Normals,&UE::Math::TVector<float>::ZeroVector,param_1);
  local_res10[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->InverseMasses,local_res10,param_1);
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->BoneData).ArrayMax;
  piVar2 = &(this->BoneData).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,param_1,&(this->BoneData).AllocatorInstance,0,piVar1);
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x4c,4,param_1,&(this->BoneData).AllocatorInstance,piVar2,piVar1);
  DefaultConstructItems<FClothVertBoneData,int>
            ((this->BoneData).AllocatorInstance.Data + (longlong)iVar6 * 0x4c,param_1);
  local_38[0] = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->Indices).ArrayMax;
  (this->Indices).ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_2,&(this->Indices).AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar3 = (this->Indices).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->Indices).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->Indices).AllocatorInstance,piVar1);
      }
      (this->Indices).ArrayNum = iVar6 + 1;
      *(undefined4 *)((this->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_38[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->SelfCollisionVertexSet);
  this->MaxBoneWeights = 0;
  this->NumFixedVerts = 0;
  ClearWeightMaps(this);
  return;
}

