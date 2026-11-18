// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FLandscapeTextureAtlas @ 147abbd30

FLandscapeTextureAtlas * __thiscall
FLandscapeTextureAtlas::FLandscapeTextureAtlas(FLandscapeTextureAtlas *this,ESubAllocType param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FLandscapeTextureAtlas__6B_;
  (this->AddrSpaceAllocator).MarkerQuadTree.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->AddrSpaceAllocator).MarkerQuadTree.NumBits = 0;
  (this->AddrSpaceAllocator).MarkerQuadTree.MaxBits = 0x80;
  (this->AddrSpaceAllocator).LevelOffsets.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->AddrSpaceAllocator).LevelOffsets.ArrayNum = 0;
  (this->AddrSpaceAllocator).LevelOffsets.ArrayMax = 8;
  *(undefined8 *)&(this->AddrSpaceAllocator).SubAllocInfos = 0;
  *(undefined8 *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x8 = 0;
  *(undefined8 *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x20 = 0;
  *(undefined4 *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x28 = 0;
  *(undefined4 *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x2c = 0x80;
  *(undefined4 *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x34 = 0;
  *(undefined4 *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingAllocations).Elements = 0;
  *(undefined8 *)&(this->PendingAllocations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingAllocations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingAllocations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingAllocations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAllocations).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingAllocations).Elements.field_0x30 = 0xffffffff;
  (this->PendingAllocations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingAllocations).HashSize = 0;
  *(undefined8 *)&(this->FailedAllocations).Elements = 0;
  *(undefined8 *)&(this->FailedAllocations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FailedAllocations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FailedAllocations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FailedAllocations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FailedAllocations).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->FailedAllocations).Elements.field_0x30 = 0xffffffff;
  (this->FailedAllocations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FailedAllocations).HashSize = 0;
  *(undefined8 *)&(this->CurrentAllocations).Elements = 0;
  *(undefined8 *)&(this->CurrentAllocations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentAllocations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x30 = 0xffffffff;
  (this->CurrentAllocations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentAllocations).HashSize = 0;
  (this->PendingStreamingTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingStreamingTextures).ArrayNum = 0;
  (this->PendingStreamingTextures).ArrayMax = 0;
  (this->AtlasTextureRHI).Reference = (IPooledRenderTarget *)0x0;
  this->MaxDownSampleLevel = 0;
  this->Generation = 0;
  this->SubAllocType = param_1;
  return this;
}

// ~FLandscapeTextureAtlas @ 147abf090

void __thiscall FLandscapeTextureAtlas::~FLandscapeTextureAtlas(FLandscapeTextureAtlas *this)

{
  IPooledRenderTarget *pIVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  ForElementType<unsigned_int> FVar4;
  
  pIVar1 = (this->AtlasTextureRHI).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pFVar2 = (this->PendingStreamingTextures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->CurrentAllocations).HashSize = 0;
  FVar3 = (this->CurrentAllocations).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CurrentAllocations).Elements);
  (this->FailedAllocations).HashSize = 0;
  FVar3 = (this->FailedAllocations).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FailedAllocations).Elements);
  (this->PendingAllocations).HashSize = 0;
  FVar3 = (this->PendingAllocations).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingAllocations).Elements);
  TSparseArray<FLandscapeTextureAtlas::FSubAllocator::FSubAllocInfo,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FLandscapeTextureAtlas::FSubAllocator::FSubAllocInfo,FDefaultSparseArrayAllocator>
            (&(this->AddrSpaceAllocator).SubAllocInfos);
  FVar4 = (this->AddrSpaceAllocator).LevelOffsets.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->AddrSpaceAllocator).MarkerQuadTree.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AddAllocation @ 147ac45c0

void __thiscall
FLandscapeTextureAtlas::AddAllocation(FLandscapeTextureAtlas *this,UTexture2D *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  int iVar7;
  UTexture2D *local_18;
  undefined4 local_10;
  uint local_c;
  
  if ((param_1 == (UTexture2D *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                         ,0x472,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if (*(int *)&(this->CurrentAllocations).Elements.field_0x8 !=
      *(int *)&(this->CurrentAllocations).Elements.field_0x34) {
    FVar5 = (this->CurrentAllocations).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->CurrentAllocations).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->CurrentAllocations).HashSize - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&(this->CurrentAllocations).Elements;
      do {
        lVar6 = lVar1 + (longlong)iVar7 * 0x18;
        if (*(UTexture2D **)(lVar1 + (longlong)iVar7 * 0x18) == param_1) {
          if ((iVar7 != -1) && (lVar6 != 0)) {
            uVar4 = *(uint *)(lVar6 + 0xc) + 4;
            *(uint *)(lVar6 + 0xc) = (uVar4 ^ *(uint *)(lVar6 + 0xc)) & 3 ^ uVar4;
            return;
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x10);
      } while (iVar7 != -1);
    }
  }
  if (*(int *)&(this->FailedAllocations).Elements.field_0x8 !=
      *(int *)&(this->FailedAllocations).Elements.field_0x34) {
    FVar5 = (this->FailedAllocations).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->FailedAllocations).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->FailedAllocations).HashSize - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&(this->FailedAllocations).Elements;
      do {
        lVar6 = lVar1 + (longlong)iVar7 * 0x18;
        if (*(UTexture2D **)(lVar1 + (longlong)iVar7 * 0x18) == param_1) {
          if (lVar6 != 0) goto LAB_147ac47b9;
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x10);
      } while (iVar7 != -1);
    }
  }
  if (*(int *)&(this->PendingAllocations).Elements.field_0x8 !=
      *(int *)&(this->PendingAllocations).Elements.field_0x34) {
    FVar5 = (this->PendingAllocations).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->PendingAllocations).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->PendingAllocations).HashSize - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&(this->PendingAllocations).Elements;
      do {
        lVar6 = lVar1 + (longlong)iVar7 * 0x18;
        if (*(UTexture2D **)(lVar1 + (longlong)iVar7 * 0x18) == param_1) {
          if (lVar6 != 0) {
LAB_147ac47b9:
            uVar4 = *(uint *)(lVar6 + 0xc) + 4;
            *(uint *)(lVar6 + 0xc) = (*(uint *)(lVar6 + 0xc) ^ uVar4) & 3 ^ uVar4;
            return;
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x10);
      } while (iVar7 != -1);
    }
  }
  local_c = param_2 & 3 | 4;
  local_10 = 0xffffffff;
  local_18 = param_1;
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  ::Emplace<FLandscapeTextureAtlas::FAllocation>
            (&this->PendingAllocations,(FAllocation *)&stack0x00000008,(bool *)&local_18);
  return;
}

// CalculateDownSampleLevel @ 147ac9140

uint __thiscall
FLandscapeTextureAtlas::CalculateDownSampleLevel
          (FLandscapeTextureAtlas *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (this->AddrSpaceAllocator).TileSize;
  uVar2 = 0;
  while ((uVar1 < param_1 >> ((byte)uVar2 & 0x1f) || (uVar1 < param_2 >> ((byte)uVar2 & 0x1f)))) {
    uVar2 = uVar2 + 1;
    if (this->MaxDownSampleLevel < uVar2) {
      return this->MaxDownSampleLevel;
    }
  }
  return uVar2;
}

// GetAllocationHandle @ 147ae3890

uint __thiscall
FLandscapeTextureAtlas::GetAllocationHandle(FLandscapeTextureAtlas *this,UTexture2D *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->CurrentAllocations).Elements.field_0x8 !=
      *(int *)&(this->CurrentAllocations).Elements.field_0x34) {
    FVar4 = (this->CurrentAllocations).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->CurrentAllocations).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->CurrentAllocations).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5))
                    * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->CurrentAllocations).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UTexture2D **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return 0xffffffff;
          }
          return *(uint *)(lVar1 + 8);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return 0xffffffff;
}

// GetAllocationScaleBias @ 147ae3940

TVector4<float> * __thiscall
FLandscapeTextureAtlas::GetAllocationScaleBias
          (FLandscapeTextureAtlas *this,TVector4<float> *__return_storage_ptr__,uint param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TVector4<float> *pTVar5;
  undefined1 *puVar6;
  
  if ((-1 < (int)param_1) &&
     ((int)param_1 < *(int *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x28)) {
    if (*(int *)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x28 <= (int)param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector4<float> *)(*pcVar2)();
        return pTVar5;
      }
    }
    puVar6 = *(undefined1 **)&(this->AddrSpaceAllocator).SubAllocInfos.field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AddrSpaceAllocator).SubAllocInfos.field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0)
    goto LAB_147ae39e6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SubAllocInfos.IsValidIndex(Handle)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                     ,0x64d,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TVector4<float> *)(*pcVar2)();
    return pTVar5;
  }
LAB_147ae39e6:
  puVar1 = (undefined8 *)
           ((longlong)(int)param_1 * 0x20 + 0x10 +
           *(longlong *)&(this->AddrSpaceAllocator).SubAllocInfos);
  uVar3 = puVar1[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// GetAtlasTexture @ 147ae3b30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FLandscapeTextureAtlas::GetAtlasTexture(FLandscapeTextureAtlas *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  if ((this->AtlasTextureRHI).Reference != (IPooledRenderTarget *)0x0) {
    pFVar1 = FRDGBuilder::RegisterExternalTexture(param_1,&this->AtlasTextureRHI,None);
    return pFVar1;
  }
  return (FRDGTexture *)0x0;
}

// InitializeIfNeeded @ 147af41b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLandscapeTextureAtlas::InitializeIfNeeded(FLandscapeTextureAtlas *this)

{
  byte *pbVar1;
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *pTVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  ESubAllocType EVar6;
  ForElementType<FSetElementId> FVar7;
  IPooledRenderTarget *pIVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  undefined1 auStackY_148 [32];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  int local_e8;
  undefined1 local_e4 [12];
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 local_8c;
  wchar_t local_88 [4];
  undefined1 local_80 [20];
  int local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined2 local_54;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  EVar6 = this->SubAllocType;
  uVar10 = GHFVisibilityAtlasDownSampleLevel;
  uVar16 = GHFVisibilityAtlasDimInTiles;
  uVar12 = GHFVisibilityAtlasTileSize;
  if (EVar6 == SAT_Height) {
    uVar10 = GHeightFieldAtlasDownSampleLevel;
    uVar16 = GHeightFieldAtlasDimInTiles;
    uVar12 = GHeightFieldAtlasTileSize;
  }
  if (((((this->AtlasTextureRHI).Reference == (IPooledRenderTarget *)0x0) ||
       ((this->AddrSpaceAllocator).TileSize != uVar12)) ||
      ((this->AddrSpaceAllocator).DimInTiles != uVar16)) || (this->MaxDownSampleLevel != uVar10)) {
    FSubAllocator::Init(&this->AddrSpaceAllocator,uVar12,1,uVar16);
    uVar16 = 0;
    if (0 < (this->PendingStreamingTextures).ArrayNum) {
      lVar17 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < (this->PendingStreamingTextures).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar16 = uVar16 + 1;
        pFVar4 = (this->PendingStreamingTextures).AllocatorInstance.Data + lVar17;
        lVar17 = lVar17 + 8;
        pbVar1 = (byte *)(*(longlong *)pFVar4 + 0xd0);
        *pbVar1 = *pbVar1 & 0xf7;
      } while ((int)uVar16 < (this->PendingStreamingTextures).ArrayNum);
    }
    (this->PendingStreamingTextures).ArrayNum = 0;
    if ((this->PendingStreamingTextures).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PendingStreamingTextures).AllocatorInstance,0,
                 &(this->PendingStreamingTextures).ArrayMax);
    }
    pTVar2 = &this->CurrentAllocations;
    iStack_d0 = 0;
    iVar13 = *(int *)&(this->CurrentAllocations).Elements.field_0x28;
    TStack_108.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->CurrentAllocations).Elements.field_0x10;
    local_b8 = 0;
    uStack_cc = 1;
    iStack_bc = 0;
    if (iVar13 != 0) {
      puVar18 = *(uint **)&(this->CurrentAllocations).Elements.field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)TStack_108.Array;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar17 = (longlong)iStack_d0;
        local_b8 = local_b8 + 0x20;
        iStack_d0 = iStack_d0 + 1;
        iStack_bc = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_147af439f;
        uVar16 = puVar18[lVar17 + 1];
      }
      uStack_cc = -uVar16 & uVar16;
      uVar5 = (ulonglong)uStack_cc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_e8 = (int)lVar17;
      iStack_bc = local_e8 + -1 + local_b8;
      if (iVar13 < iStack_bc) {
        iStack_bc = iVar13;
      }
    }
LAB_147af439f:
    uStack_c0 = 0xffffffff;
    uStack_b4 = local_8c;
    TStack_108._padding_ = CONCAT44(uStack_cc,iStack_d0);
    TStack_108.UnvisitedBitMask = 0xffffffff;
    TStack_108._28_4_ = local_8c;
    TStack_108.BaseBitIndex = local_b8;
    local_d8 = pTVar2;
    local_c8 = (undefined1 *)TStack_108.Array;
    TStack_108.CurrentBitIndex = iStack_bc;
    if (iStack_bc < iVar13) {
      do {
        uVar5 = *(ulonglong *)
                 (*(longlong *)&pTVar2->Elements + (longlong)TStack_108.CurrentBitIndex * 0x18);
        uVar16 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        if (*(int *)&(this->PendingAllocations).Elements.field_0x8 !=
            *(int *)&(this->PendingAllocations).Elements.field_0x34) {
          FVar7 = (this->PendingAllocations).Hash.SecondaryData;
          FVar15 = (ForElementType<FSetElementId>)&(this->PendingAllocations).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = FVar7;
          }
          iVar13 = *(int *)((longlong)FVar15 +
                           (ulonglong)
                           ((this->PendingAllocations).HashSize - 1U & (uVar16 >> 0x10 ^ uVar16)) *
                           4);
          if (iVar13 != -1) {
            lVar17 = *(longlong *)&(this->PendingAllocations).Elements;
            do {
              if (*(ulonglong *)(lVar17 + (longlong)iVar13 * 0x18) == uVar5) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!PendingAllocations.Contains(*It)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                    ,0x45d,L"");
                if (bVar11) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                break;
              }
              iVar13 = *(int *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18);
            } while (iVar13 != -1);
          }
        }
        TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
        ::Emplace<FLandscapeTextureAtlas::FAllocation_const_&>
                  (&this->PendingAllocations,(FAllocation *)local_e4,
                   (bool *)(*(longlong *)&pTVar2->Elements +
                           (longlong)TStack_108.CurrentBitIndex * 0x18));
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      } while (TStack_108.CurrentBitIndex < (TStack_108.Array)->NumBits);
    }
    if (*(int *)&(this->CurrentAllocations).Elements.field_0x8 !=
        *(int *)&(this->CurrentAllocations).Elements.field_0x34) {
      TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->CurrentAllocations);
      iVar13 = *(int *)&(this->CurrentAllocations).Elements.field_0xc;
      *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x8 = 0;
      if (iVar13 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&this->CurrentAllocations,0,
                   (int *)&(this->CurrentAllocations).Elements.field_0xc);
      }
      *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->CurrentAllocations).Elements.field_0x28 = 0;
    }
    uVar16 = (this->AddrSpaceAllocator).DimInTexels;
    local_80._16_4_ = FClearValueBinding::None.Value.Color[3];
    local_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_3c = 1;
    local_64 = CONCAT44(uVar16,uVar16);
    local_55 = 3;
    if (EVar6 == SAT_Height) {
      local_55 = 0x28;
    }
    local_88[0] = L'\b';
    local_88[1] = L'\x02';
    local_88[2] = L'\0';
    local_88[3] = L'\0';
    local_68 = 0;
    local_5c = 0x10001;
    local_80._0_8_ = FClearValueBinding::None._0_8_;
    local_80._8_8_ = FClearValueBinding::None.Value._4_8_;
    local_58 = 0x101;
    local_56 = 0;
    local_54 = 0xff00;
    local_48 = (void *)0x0;
    local_40 = 0;
    TVar14 = AllocatePooledTexture((FRDGTextureDesc *)(local_e4 + 4),local_88);
    pTVar3 = &this->AtlasTextureRHI;
    if ((IPooledRenderTarget *)pTVar3 != TVar14.Reference) {
      pIVar8 = pTVar3->Reference;
      pTVar3->Reference = (IPooledRenderTarget *)(TVar14.Reference)->_padding_;
      (TVar14.Reference)->_padding_ = 0;
      if (pIVar8 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar8->_padding_ + 0x38))();
      }
    }
    if ((longlong *)local_e4._4_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_e4._4_8_ + 0x38))();
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    this->Generation = this->Generation + 1;
    this->MaxDownSampleLevel = uVar10;
  }
  return;
}

// RemoveAllocation @ 147b0b510

void __thiscall
FLandscapeTextureAtlas::RemoveAllocation(FLandscapeTextureAtlas *this,UTexture2D *param_1)

{
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  UTexture2D *pUVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  UTexture2D *local_res10;
  int local_res18;
  
  this_00 = &this->PendingAllocations;
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  local_res10 = param_1;
  if (*(int *)&(this->PendingAllocations).Elements.field_0x8 !=
      *(int *)&(this->PendingAllocations).Elements.field_0x34) {
    FVar8 = (this->PendingAllocations).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->PendingAllocations).Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 +
                     (ulonglong)((this->PendingAllocations).HashSize - 1U & uVar7) * 4);
    if (iVar10 != -1) {
      lVar11 = *(longlong *)&this_00->Elements;
      do {
        if (*(UTexture2D **)(lVar11 + (longlong)iVar10 * 0x18) == param_1) {
          if (iVar10 != -1) {
            lVar1 = (longlong)iVar10 * 0x18;
            if ((*(uint *)(lVar11 + 0xc + (longlong)iVar10 * 0x18) < 4) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PendingAllocations[Id].RefCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                   ,0x492,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = *(uint *)(*(longlong *)&this_00->Elements + 0xc + lVar1);
            uVar7 = (uVar7 & 0xfffffffc) - 4 | uVar7 & 3;
            *(uint *)(*(longlong *)&this_00->Elements + 0xc + lVar1) = uVar7;
            if (3 < uVar7) {
              return;
            }
            pFVar6 = (this->PendingStreamingTextures).AllocatorInstance.Data;
            pFVar3 = pFVar6 + (longlong)(this->PendingStreamingTextures).ArrayNum * 8;
            if (pFVar6 != pFVar3) {
              while (*(UTexture2D **)pFVar6 != local_res10) {
                pFVar6 = pFVar6 + 8;
                if (pFVar6 == pFVar3) {
                  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(this_00,iVar10);
                  return;
                }
              }
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!PendingStreamingTextures.Contains(Texture)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                 ,0x495,L"");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
            ::RemoveByIndex(this_00,iVar10);
            return;
          }
          break;
        }
        iVar10 = *(int *)(lVar11 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (*(int *)&(this->FailedAllocations).Elements.field_0x8 !=
      *(int *)&(this->FailedAllocations).Elements.field_0x34) {
    FVar8 = (this->FailedAllocations).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->FailedAllocations).Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 +
                     (ulonglong)((this->FailedAllocations).HashSize - 1U & uVar7) * 4);
    if (iVar10 != -1) {
      lVar11 = *(longlong *)&(this->FailedAllocations).Elements;
      do {
        if (*(UTexture2D **)(lVar11 + (longlong)iVar10 * 0x18) == param_1) {
          if (iVar10 != -1) {
            lVar1 = (longlong)iVar10 * 0x18;
            if ((*(uint *)(lVar11 + 0xc + (longlong)iVar10 * 0x18) < 4) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FailedAllocations[Id].RefCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                   ,0x49e,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar11 = *(longlong *)&(this->FailedAllocations).Elements;
            uVar7 = *(uint *)(lVar11 + 0xc + lVar1);
            uVar7 = (uVar7 & 0xfffffffc) - 4 | uVar7 & 3;
            *(uint *)(lVar11 + 0xc + lVar1) = uVar7;
            if (3 < uVar7) {
              return;
            }
            pFVar6 = (this->PendingStreamingTextures).AllocatorInstance.Data;
            pFVar3 = pFVar6 + (longlong)(this->PendingStreamingTextures).ArrayNum * 8;
            if (pFVar6 != pFVar3) {
              while (*(UTexture2D **)pFVar6 != local_res10) {
                pFVar6 = pFVar6 + 8;
                if (pFVar6 == pFVar3) {
                  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(&this->FailedAllocations,iVar10);
                  return;
                }
              }
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!PendingStreamingTextures.Contains(Texture)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                 ,0x4a1,L"");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
            ::RemoveByIndex(&this->FailedAllocations,iVar10);
            return;
          }
          break;
        }
        iVar10 = *(int *)(lVar11 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (*(int *)&(this->CurrentAllocations).Elements.field_0x8 !=
      *(int *)&(this->CurrentAllocations).Elements.field_0x34) {
    FVar8 = (this->CurrentAllocations).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->CurrentAllocations).Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 +
                     (ulonglong)((this->CurrentAllocations).HashSize - 1U & uVar7) * 4);
    if (iVar10 != -1) {
      lVar11 = *(longlong *)&(this->CurrentAllocations).Elements;
      while (*(UTexture2D **)(lVar11 + (longlong)iVar10 * 0x18) != param_1) {
        iVar10 = *(int *)(lVar11 + 0x10 + (longlong)iVar10 * 0x18);
        if (iVar10 == -1) {
          return;
        }
      }
      if (iVar10 != -1) {
        lVar1 = lVar11 + (longlong)iVar10 * 0x18;
        if (((*(uint *)(lVar11 + 0xc + (longlong)iVar10 * 0x18) < 4) ||
            (*(uint *)(lVar1 + 8) == 0xffffffff)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Allocation.RefCount && Allocation.Handle != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                               ,0x4ab,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = (*(uint *)(lVar1 + 0xc) & 0xfffffffc) - 4 | *(uint *)(lVar1 + 0xc) & 3;
        *(uint *)(lVar1 + 0xc) = uVar7;
        if (uVar7 < 4) {
          FSubAllocator::Free(&this->AddrSpaceAllocator,*(uint *)(lVar1 + 8));
          pFVar3 = (this->PendingStreamingTextures).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
              ((FScriptContainerElement *)&local_res10 <
               pFVar3 + (longlong)(this->PendingStreamingTextures).ArrayMax * 8)) &&
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
          iVar2 = (this->PendingStreamingTextures).ArrayNum;
          if (iVar2 != 0) {
            pFVar3 = (this->PendingStreamingTextures).AllocatorInstance.Data;
            iVar12 = 0;
            bVar5 = *(UTexture2D **)pFVar3 != local_res10;
            lVar11 = 0;
            pUVar9 = local_res10;
            iVar13 = 0;
            do {
              iVar14 = iVar13;
              do {
                lVar11 = lVar11 + 1;
                iVar14 = iVar14 + 1;
                if (iVar2 <= lVar11) break;
              } while (bVar5 == (*(UTexture2D **)(pFVar3 + lVar11 * 8) != pUVar9));
              if (bVar5 != false) {
                if (iVar12 != iVar13) {
                  memmove(pFVar3 + (longlong)iVar12 * 8,pFVar3 + (longlong)iVar13 * 8,
                          (longlong)(iVar14 - iVar13) << 3);
                  pUVar9 = local_res10;
                }
                iVar12 = iVar12 + (iVar14 - iVar13);
              }
              bVar5 = (bool)(bVar5 ^ 1);
              iVar13 = iVar14;
            } while (lVar11 < iVar2);
            (this->PendingStreamingTextures).ArrayNum = iVar12;
            local_res18 = iVar12;
          }
          TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
          ::RemoveByIndex(&this->CurrentAllocations,iVar10);
        }
      }
    }
  }
  return;
}

// UpdateAllocations @ 147b1f520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FLandscapeTextureAtlas::UpdateAllocations
          (FLandscapeTextureAtlas *this,FRDGBuilder *param_1,Type param_2)

{
  int *piVar1;
  FMemStackBase *pFVar2;
  UTexture2D *this_00;
  ForElementType<FSetElementId> FVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  byte bVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  FLandscapeTextureAtlas *pFVar10;
  FMemStackBase *pFVar11;
  FRDGTexture *pFVar12;
  FRDGBuilder *pFVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  FTextureResource *pFVar21;
  FRDGTextureUAV *pFVar22;
  FGlobalShaderMap *pFVar23;
  FShaderType *pFVar24;
  FName FVar25;
  undefined8 *puVar26;
  FRDGEventName *pFVar27;
  FShaderParametersMetadata *pFVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  ForElementType<FLandscapeTextureAtlas::FPendingUpload> FVar31;
  ForElementType<FSetElementId> FVar32;
  uint uVar33;
  uint uVar34;
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *this_01;
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *pTVar35;
  FSubAllocator *pFVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint *puVar39;
  char cVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined1 auStackY_408 [32];
  FIdentityFunctor local_3b8;
  char local_3b7;
  FLandscapeTextureAtlas *local_3b0;
  uint local_3a8;
  UTexture2D *local_3a0;
  UTexture2D *local_398;
  FSubAllocator *local_390;
  FMemStackBase *local_388;
  FRDGTextureUAV *local_380;
  TBitArray<FDefaultBitArrayAllocator> *local_378;
  FRDGTextureUAVDesc local_370;
  undefined8 *local_358;
  undefined8 *local_350;
  Type local_348;
  FRDGBuilder *local_340;
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *local_338;
  uint uStack_330;
  uint uStack_32c;
  undefined1 *local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  uint local_318;
  undefined4 uStack_314;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  TIntVector3<int>_u_0 local_2f8;
  TIntVector3<int>_u_0 local_2e8;
  undefined1 local_2d8 [16];
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *local_2a0;
  int local_298;
  undefined1 local_294 [12];
  void *local_288;
  void *local_280;
  FIdentityFunctor *local_278;
  undefined1 local_270 [16];
  int local_260;
  TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
  *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined1 local_230 [8];
  undefined1 local_228 [16];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  FString local_1d8;
  TShaderRefBase<FUploadHeightFieldToAtlasCS,FShaderMapPointerTable> local_1c8;
  FString local_1b8;
  TShaderRefBase<FUploadVisibilityToAtlasCS,FShaderMapPointerTable> local_1a8;
  FRDGEventName local_198;
  FRDGEventName local_180 [2];
  undefined4 local_14c;
  undefined4 local_12c;
  ForElementType<FLandscapeTextureAtlas::FPendingUpload> local_128;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
  uVar41 = 0;
  local_3a8 = 0;
  local_3b0 = this;
  local_348 = param_2;
  local_340 = param_1;
  if ((*(int *)(param_1->_padding_ + 0x29c) !=
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("GraphBuilder.RHICmdList.GetGPUMask() == FRHIGPUMask::All()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                          ,0x50a,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  InitializeIfNeeded(this);
  local_128.SecondaryData = (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0;
  local_60 = 0;
  local_5c = 8;
  uVar29 = uVar41;
  if (0 < (this->PendingStreamingTextures).ArrayNum) {
    pFVar36 = (FSubAllocator *)&this->PendingStreamingTextures;
    local_378 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    local_390 = pFVar36;
    do {
      pTVar8 = local_378;
      local_380 = (FRDGTextureUAV *)CONCAT44(local_380._4_4_,~uVar41 >> 0x1f);
      if ((int)uVar41 < (int)pFVar36->TileSizeWithBorder) {
        uVar29 = ~uVar41 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = *(UTexture2D **)((pTVar8->AllocatorInstance).InlineData + *(longlong *)pFVar36);
      uVar15 = UTexture2D::GetSizeX(this_00);
      uVar16 = UTexture2D::GetSizeY(this_00);
      uVar29 = (this->AddrSpaceAllocator).TileSize;
      uVar33 = 0;
      do {
        if ((uVar15 >> ((byte)uVar33 & 0x1f) <= uVar29) &&
           (uVar34 = uVar33, uVar16 >> ((byte)uVar33 & 0x1f) <= uVar29)) break;
        uVar33 = uVar33 + 1;
        uVar34 = this->MaxDownSampleLevel;
      } while (uVar33 <= this->MaxDownSampleLevel);
      iVar17 = UTexture2D::GetNumMips(this_00);
      iVar18 = UTexture2D::GetNumResidentMips(this_00);
      if (uVar34 < (uint)(iVar17 - iVar18)) {
        uVar29 = 0;
        pFVar36 = local_390;
      }
      else {
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xf7;
        local_388 = (FMemStackBase *)CONCAT44(local_388._4_4_,uVar34 - (iVar17 - iVar18));
        uVar29 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
                 -0x7a143595;
        uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        if (*(int *)&(this->CurrentAllocations).Elements.field_0x8 !=
            *(int *)&(this->CurrentAllocations).Elements.field_0x34) {
          FVar3 = (this->CurrentAllocations).Hash.SecondaryData;
          FVar32 = (ForElementType<FSetElementId>)&(this->CurrentAllocations).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar32 = FVar3;
          }
          iVar17 = *(int *)((longlong)FVar32 +
                           (ulonglong)
                           ((this->CurrentAllocations).HashSize - 1U & (uVar29 >> 0x10 ^ uVar29)) *
                           4);
          if (iVar17 != -1) {
            lVar20 = *(longlong *)&(this->CurrentAllocations).Elements;
            do {
              lVar38 = lVar20 + (longlong)iVar17 * 0x18;
              if (*(UTexture2D **)(lVar20 + (longlong)iVar17 * 0x18) == this_00) {
                if ((lVar38 == 0) || (*(int *)(lVar38 + 8) == -1)) goto LAB_147b1f76e;
                goto LAB_147b1f794;
              }
              iVar17 = *(int *)(lVar38 + 0x10);
            } while (iVar17 != -1);
          }
        }
        lVar38 = 0;
LAB_147b1f76e:
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Allocation && Allocation->Handle != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                            ,0x524,L"");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_147b1f794:
        uVar29 = *(uint *)(lVar38 + 0xc);
        bVar7 = (byte)uVar34 & 0x1f;
        if (local_60 == local_5c) {
          local_60 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureAtlas::FPendingUpload>_>
                               (0x818,&local_128,&local_5c);
        }
        lVar20 = (longlong)local_60;
        FVar31 = (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)&local_128;
        if (local_128.SecondaryData != (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0)
        {
          FVar31 = local_128.SecondaryData;
        }
        local_60 = local_60 + 1;
        FPendingUpload::FPendingUpload
                  ((FPendingUpload *)((longlong)FVar31 + lVar20 * 0x18),this_00,
                   uVar15 >> ((byte)uVar34 & 0x1f),uVar16 >> bVar7,(uint)local_388,
                   *(uint *)(lVar38 + 8),uVar29 & 3);
        pFVar36 = local_390;
        uVar29 = 0 >> bVar7;
        pTVar8 = local_378 + -1;
        uVar15 = uVar29;
        if ((int)uVar41 < (int)local_390->TileSizeWithBorder) {
          uVar15 = (uint)local_380;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<UTexture2D_*,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  ((TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)pFVar36,uVar41);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)pFVar36,pFVar36->TileSizeWithBorder,
                   (int *)&pFVar36->DimInTiles);
        local_378 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar8->NumBits;
        this = local_3b0;
        uVar41 = uVar41 - 1;
      }
      local_378 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((longlong)(local_378->AllocatorInstance).InlineData + 8);
      uVar41 = uVar41 + 1;
    } while ((int)uVar41 < (this->PendingStreamingTextures).ArrayNum);
  }
  iVar17 = *(int *)&(this->PendingAllocations).Elements.field_0x8;
  iVar18 = *(int *)&(this->PendingAllocations).Elements.field_0x34;
  if (iVar17 != iVar18) {
    pFVar36 = (FSubAllocator *)&this->PendingAllocations;
    local_278 = &local_3b8;
    local_390 = pFVar36;
    if (0 < iVar17 - iVar18) {
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pFVar36);
      iVar17 = *(int *)&(this->PendingAllocations).Elements.field_0x8 -
               *(int *)&(this->PendingAllocations).Elements.field_0x34;
      pTVar4 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **)
                &((TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
                   *)pFVar36)->Elements;
      if ((iVar17 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>::FElementCompareClass<_FLandscapeTextureAtlas::UpdateAllocations_::__l2::<lambda_1>_>_>_>
                (pTVar4,iVar17,local_3b8,
                 (FElementCompareClass<_public:_void___cdecl_FLandscapeTextureAtlas::UpdateAllocations(FRDGBuilder_&,ERHIFeatureLevel::Type)_::_2_::<lambda_1>_>
                  *)&local_278);
    }
    TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
              *)pFVar36);
    uVar41 = *(uint *)&(this->PendingAllocations).Elements.field_0x28;
    local_378 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(this->PendingAllocations).Elements.field_0x10;
    cVar40 = '\0';
    local_3b7 = '\0';
    uStack_32c = 1;
    local_318 = uVar29;
    uStack_330 = uVar29;
    uStack_31c = uVar29;
    if (uVar41 != 0) {
      puVar39 = *(uint **)&(this->PendingAllocations).Elements.field_0x20;
      if (puVar39 == (uint *)0x0) {
        puVar39 = (uint *)local_378;
      }
      uVar15 = *puVar39;
      while (uVar15 == 0) {
        lVar20 = (longlong)(int)uStack_330;
        local_318 = local_318 + 0x20;
        uStack_330 = uStack_330 + 1;
        uStack_31c = uVar41;
        if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_330)
        goto LAB_147b1f9ed;
        uVar15 = puVar39[lVar20 + 1];
      }
      uStack_32c = -uVar15 & uVar15;
      uVar37 = (ulonglong)uStack_32c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_298 = (int)lVar20;
      uStack_31c = (local_318 - 1) + local_298;
      if ((int)uVar41 < (int)uStack_31c) {
        uStack_31c = uVar41;
      }
    }
LAB_147b1f9ed:
    uStack_320 = 0xffffffff;
    uStack_314 = local_14c;
    TStack_250._padding_ = CONCAT44(uStack_32c,uStack_330);
    TStack_250.CurrentBitIndex = uStack_31c;
    TStack_250.UnvisitedBitMask = 0xffffffff;
    TStack_250._28_4_ = local_14c;
    TStack_250.BaseBitIndex = local_318;
    local_338 = (TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
                 *)pFVar36;
    local_328 = (undefined1 *)local_378;
    local_258 = (TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
                 *)pFVar36;
    TStack_250.Array = local_378;
    uVar15 = uStack_31c;
    if ((int)uStack_31c < (int)uVar41) {
      do {
        local_2d8 = *(undefined1 (*) [16])
                     (*(longlong *)&local_258->Elements + (longlong)(int)uVar15 * 0x18);
        uVar41 = local_2d8._12_4_;
        if (cVar40 == '\0') {
          local_3a0 = local_2d8._0_8_;
          uVar16 = UTexture2D::GetSizeX(local_2d8._0_8_);
          uVar33 = UTexture2D::GetSizeY(local_3a0);
          pFVar10 = local_3b0;
          uVar15 = (local_3b0->AddrSpaceAllocator).TileSize;
          do {
            if ((uVar16 >> ((byte)uVar29 & 0x1f) <= uVar15) &&
               (uVar34 = uVar29, uVar33 >> ((byte)uVar29 & 0x1f) <= uVar15)) break;
            uVar29 = uVar29 + 1;
            uVar34 = local_3b0->MaxDownSampleLevel;
          } while (uVar29 <= local_3b0->MaxDownSampleLevel);
          uVar16 = uVar16 >> ((byte)uVar34 & 0x1f);
          uVar33 = uVar33 >> ((byte)uVar34 & 0x1f);
          uVar29 = FSubAllocator::Alloc(&local_3b0->AddrSpaceAllocator,uVar16,uVar33);
          if (uVar29 == 0xffffffff) {
            this_01 = &pFVar10->FailedAllocations;
            TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
            ::Emplace<FLandscapeTextureAtlas::FAllocation_const_&>
                      (this_01,(FAllocation *)local_294,(bool *)local_2d8);
            uVar29 = 0;
            local_3b7 = '\x01';
            cVar40 = '\x01';
          }
          else {
            iVar18 = UTexture2D::GetNumMips(local_3a0);
            iVar19 = UTexture2D::GetNumResidentMips(local_3a0);
            pFVar10 = local_3b0;
            iVar17 = uVar34 - (iVar18 - iVar19);
            if (uVar34 < (uint)(iVar18 - iVar19)) {
              pTVar35 = &local_3b0->PendingStreamingTextures;
              *(byte *)&local_3a0->_padding_ = (byte)local_3a0->_padding_ | 8;
              pFVar30 = (pTVar35->AllocatorInstance).Data;
              pFVar5 = pFVar30 + (longlong)(local_3b0->PendingStreamingTextures).ArrayNum * 8;
              for (; pFVar30 != pFVar5; pFVar30 = pFVar30 + 8) {
                if (*(UTexture2D **)pFVar30 == local_3a0) {
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!PendingStreamingTextures.Contains(SourceTexture)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                      ,0x54c,L"");
                  if (bVar14) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  break;
                }
              }
              pFVar5 = (pTVar35->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)&local_3a0) &&
                  ((FScriptContainerElement *)&local_3a0 <
                   pFVar5 + (longlong)(pFVar10->PendingStreamingTextures).ArrayMax * 8)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar17 = (pFVar10->PendingStreamingTextures).ArrayNum;
              piVar1 = &(pFVar10->PendingStreamingTextures).ArrayMax;
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar35->AllocatorInstance,piVar1);
              }
              (pFVar10->PendingStreamingTextures).ArrayNum = iVar17 + 1;
              *(UTexture2D **)((pTVar35->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_3a0
              ;
              iVar17 = 0;
            }
            local_2d8._8_4_ = uVar29;
            TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
            ::Emplace<FLandscapeTextureAtlas::FAllocation_const_&>
                      (&pFVar10->CurrentAllocations,(FAllocation *)(local_294 + 4),(bool *)local_2d8
                      );
            if (local_60 == local_5c) {
              local_60 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureAtlas::FPendingUpload>_>
                                   (0x818,&local_128,&local_5c);
            }
            lVar20 = (longlong)local_60;
            FVar31 = (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)&local_128;
            if (local_128.SecondaryData !=
                (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0) {
              FVar31 = local_128.SecondaryData;
            }
            local_60 = local_60 + 1;
            pFVar21 = UTexture::GetResource((UTexture *)local_3a0);
            lVar38 = pFVar21->_padding_;
            *(uint *)((uchar *)((longlong)FVar31 + 0xc) + lVar20 * 0x18) = uVar33;
            *(uint *)((uchar *)((longlong)FVar31 + 0x14) + lVar20 * 0x18) = uVar29 * 4 | uVar41 & 3;
            *(longlong *)((longlong)FVar31 + lVar20 * 0x18) = lVar38;
            *(uint *)((uchar *)((longlong)FVar31 + 8) + lVar20 * 0x18) = uVar16;
            *(int *)((uchar *)((longlong)FVar31 + 0x10) + lVar20 * 0x18) = iVar17;
            this_01 = &local_3b0->FailedAllocations;
            uVar29 = 0;
            cVar40 = local_3b7;
          }
        }
        else {
          this_01 = &local_3b0->FailedAllocations;
          TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
          ::Emplace<FLandscapeTextureAtlas::FAllocation_const_&>
                    (this_01,(FAllocation *)local_230,(bool *)local_2d8);
        }
        TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
        uVar15 = TStack_250.CurrentBitIndex;
      } while (TStack_250.CurrentBitIndex < (TStack_250.Array)->NumBits);
      pFVar36 = local_390;
      if (cVar40 != '\0') {
        local_270._8_8_ = &local_3b8;
        if (0 < *(int *)&(this_01->Elements).field_0x8 - *(int *)&(this_01->Elements).field_0x34) {
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01);
          iVar17 = *(int *)&(this_01->Elements).field_0x8 - *(int *)&(this_01->Elements).field_0x34;
          pTVar4 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **)&this_01->Elements;
          if ((iVar17 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          AlgoImpl::
          IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FLandscapeTextureAtlas::FAllocation>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>::FElementCompareClass<_FLandscapeTextureAtlas::UpdateAllocations_::__l2::<lambda_1>_>_>_>
                    (pTVar4,iVar17,local_3b8,
                     (FElementCompareClass<_public:_void___cdecl_FLandscapeTextureAtlas::UpdateAllocations(FRDGBuilder_&,ERHIFeatureLevel::Type)_::_2_::<lambda_1>_>
                      *)(local_270 + 8));
        }
        TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
        ::Rehash(this_01);
        pFVar36 = local_390;
      }
    }
    pTVar8 = local_378;
    bVar14 = 1 < *(int *)(pFVar36->LevelOffsets).AllocatorInstance.InlineData;
    if (!bVar14) {
      TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
                        *)pFVar36);
    }
    pFVar36->TileSizeWithBorder = uVar29;
    if (pFVar36->DimInTiles != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pFVar36,uVar29,(int *)&pFVar36->DimInTiles);
    }
    pTVar9 = &pFVar36->MarkerQuadTree;
    (pTVar9->AllocatorInstance).InlineData[8] = 0xff;
    (pTVar9->AllocatorInstance).InlineData[9] = 0xff;
    (pTVar9->AllocatorInstance).InlineData[10] = 0xff;
    (pTVar9->AllocatorInstance).InlineData[0xb] = 0xff;
    *(uint *)((pFVar36->MarkerQuadTree).AllocatorInstance.InlineData + 0xc) = uVar29;
    pTVar8->NumBits = uVar29;
    if ((pTVar8->MaxBits < 0) || (0x80 < pTVar8->MaxBits)) {
      pTVar8->MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(pTVar8,0);
    }
    this = local_3b0;
    if (bVar14) {
      *(int *)(pFVar36->LevelOffsets).AllocatorInstance.InlineData = 1;
      TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
      ::Rehash((TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
                *)pFVar36);
      this = local_3b0;
    }
  }
  if (*(int *)&(this->FailedAllocations).Elements.field_0x8 !=
      *(int *)&(this->FailedAllocations).Elements.field_0x34) {
    local_338 = &this->FailedAllocations;
    uVar41 = *(uint *)&(this->FailedAllocations).Elements.field_0x28;
    local_328 = &(this->FailedAllocations).Elements.field_0x10;
    uStack_32c = 1;
    uStack_330 = uVar29;
    local_318 = uVar29;
    uStack_31c = uVar29;
    if (uVar41 != 0) {
      puVar39 = *(uint **)&(this->FailedAllocations).Elements.field_0x20;
      if (puVar39 == (uint *)0x0) {
        puVar39 = (uint *)local_328;
      }
      uVar15 = *puVar39;
      while (uVar15 == 0) {
        lVar20 = (longlong)(int)uStack_330;
        local_318 = local_318 + 0x20;
        uStack_330 = uStack_330 + 1;
        uStack_31c = uVar41;
        if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_330)
        goto LAB_147b1fed1;
        uVar15 = puVar39[lVar20 + 1];
      }
      uStack_32c = -uVar15 & uVar15;
      uVar37 = (ulonglong)uStack_32c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_260 = (int)lVar20;
      uStack_31c = (local_318 - 1) + local_260;
      if ((int)uVar41 < (int)uStack_31c) {
        uStack_31c = uVar41;
      }
    }
LAB_147b1fed1:
    uStack_320 = 0xffffffff;
    uStack_314 = local_12c;
    TStack_2c0._padding_ = CONCAT44(uStack_32c,uStack_330);
    TStack_2c0.CurrentBitIndex = uStack_31c;
    TStack_2c0.UnvisitedBitMask = 0xffffffff;
    TStack_2c0._28_4_ = local_12c;
    TStack_2c0.BaseBitIndex = local_318;
    this = local_3b0;
    local_2c8 = local_338;
    TStack_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_328;
    local_2a0 = local_338;
    if ((int)uStack_31c < (int)uVar41) {
      local_390 = &local_3b0->AddrSpaceAllocator;
      uVar41 = uStack_31c;
      do {
        pFVar36 = local_390;
        pFVar10 = local_3b0;
        local_228 = *(undefined1 (*) [16])
                     (*(longlong *)&local_2c8->Elements + (longlong)(int)uVar41 * 0x18);
        local_398 = local_228._0_8_;
        uVar15 = local_228._12_4_;
        uVar16 = UTexture2D::GetSizeX(local_398);
        uVar33 = UTexture2D::GetSizeY(local_398);
        uVar41 = pFVar36->TileSize;
        do {
          if ((uVar16 >> ((byte)uVar29 & 0x1f) <= uVar41) &&
             (uVar34 = uVar29, uVar33 >> ((byte)uVar29 & 0x1f) <= uVar41)) break;
          uVar29 = uVar29 + 1;
          uVar34 = pFVar10->MaxDownSampleLevel;
        } while (uVar29 <= pFVar10->MaxDownSampleLevel);
        uVar16 = uVar16 >> ((byte)uVar34 & 0x1f);
        uVar33 = uVar33 >> ((byte)uVar34 & 0x1f);
        uVar41 = FSubAllocator::Alloc(pFVar36,uVar16,uVar33);
        this = local_3b0;
        if (uVar41 == 0xffffffff) break;
        iVar18 = UTexture2D::GetNumMips(local_398);
        iVar19 = UTexture2D::GetNumResidentMips(local_398);
        pFVar10 = local_3b0;
        iVar17 = uVar34 - (iVar18 - iVar19);
        if (uVar34 < (uint)(iVar18 - iVar19)) {
          pTVar35 = &local_3b0->PendingStreamingTextures;
          *(byte *)&local_398->_padding_ = (byte)local_398->_padding_ | 8;
          pFVar30 = (pTVar35->AllocatorInstance).Data;
          pFVar5 = pFVar30 + (longlong)(local_3b0->PendingStreamingTextures).ArrayNum * 8;
          for (; pFVar30 != pFVar5; pFVar30 = pFVar30 + 8) {
            if (*(UTexture2D **)pFVar30 == local_398) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!PendingStreamingTextures.Contains(SourceTexture)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DistanceFieldAtlas.cpp"
                                  ,0x57a,L"");
              if (bVar14) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              break;
            }
          }
          pFVar5 = (pTVar35->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_398) &&
              ((FScriptContainerElement *)&local_398 <
               pFVar5 + (longlong)(pFVar10->PendingStreamingTextures).ArrayMax * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar17 = (pFVar10->PendingStreamingTextures).ArrayNum;
          piVar1 = &(pFVar10->PendingStreamingTextures).ArrayMax;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar35->AllocatorInstance,piVar1);
          }
          (pFVar10->PendingStreamingTextures).ArrayNum = iVar17 + 1;
          *(UTexture2D **)((pTVar35->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_398;
          iVar17 = 0;
        }
        local_228._8_4_ = uVar41;
        TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
        ::Emplace<FLandscapeTextureAtlas::FAllocation_const_&>
                  (&local_3b0->CurrentAllocations,(FAllocation *)local_270,(bool *)local_228);
        if (local_60 == local_5c) {
          local_60 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureAtlas::FPendingUpload>_>
                               (0x818,&local_128,&local_5c);
        }
        lVar20 = (longlong)local_60;
        FVar31 = (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)&local_128;
        if (local_128.SecondaryData != (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0)
        {
          FVar31 = local_128.SecondaryData;
        }
        local_60 = local_60 + 1;
        pFVar21 = UTexture::GetResource((UTexture *)local_398);
        *(longlong *)((longlong)FVar31 + lVar20 * 0x18) = pFVar21->_padding_;
        *(uint *)((uchar *)((longlong)FVar31 + 0x14) + lVar20 * 0x18) = uVar41 * 4 | uVar15 & 3;
        *(uint *)((uchar *)((longlong)FVar31 + 8) + lVar20 * 0x18) = uVar16;
        *(uint *)((uchar *)((longlong)FVar31 + 0xc) + lVar20 * 0x18) = uVar33;
        *(int *)((uchar *)((longlong)FVar31 + 0x10) + lVar20 * 0x18) = iVar17;
        TSet<FLandscapeTextureAtlas::FAllocation,DefaultKeyFuncs<FLandscapeTextureAtlas::FAllocation,0>,FDefaultSetAllocator>
        ::RemoveByIndex(local_2a0,TStack_2c0.CurrentBitIndex);
        TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
        this = local_3b0;
        if ((TStack_2c0.Array)->NumBits <= TStack_2c0.CurrentBitIndex) break;
        uVar29 = 0;
        uVar41 = TStack_2c0.CurrentBitIndex;
      } while( true );
    }
  }
  pFVar13 = local_340;
  if (local_60 != 0) {
    local_370.Texture = FRDGBuilder::RegisterExternalTexture(local_340,&this->AtlasTextureRHI,None);
    uVar37 = 0;
    local_370._padding_._1_1_ = 0;
    local_370._padding_._2_4_ = 0;
    local_370._padding_._6_1_ = 0;
    local_370._padding_._0_1_ = ((local_370.Texture)->Desc).field_0x34;
    local_370._padding_._0_1_ = '\0';
    FRDGUserValidation::ValidateCreateUAV(&pFVar13->UserValidation,&local_370);
    pFVar12 = local_370.Texture;
    local_388 = (FMemStackBase *)&pFVar13->_padding_;
    pFVar22 = FMemStackBase::Alloc(local_388,0x50,8);
    lVar20 = pFVar12->_padding_;
    *(byte *)&pFVar22->_padding_ = (byte)pFVar22->_padding_ & 0xfe;
    pFVar22->_padding_ = lVar20;
    pFVar22->_padding_ = 0;
    *(undefined1 *)&pFVar22->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar22->_padding_ + 4) = 0xffffffffffffffff;
    *(undefined1 *)&pFVar22->_padding_ = 1;
    pFVar22->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
    *(undefined1 *)&(pFVar22->Desc)._padding_ = (undefined1)local_370._padding_;
    *(undefined1 *)((longlong)&(pFVar22->Desc)._padding_ + 1) = local_370._padding_._1_1_;
    *(undefined2 *)((longlong)&(pFVar22->Desc)._padding_ + 2) = local_370._padding_._2_2_;
    *(undefined2 *)((longlong)&(pFVar22->Desc)._padding_ + 4) = local_370._padding_._4_2_;
    *(undefined1 *)&(pFVar22->Desc)._padding_ = 0;
    *(undefined1 *)((longlong)&(pFVar22->Desc)._padding_ + 6) = local_370._padding_._6_1_;
    *(char *)&(pFVar22->Desc)._padding_ = (char)local_370._padding_;
    if ((char)local_370._padding_ != '\0') {
      *(undefined1 *)((longlong)&(pFVar22->Desc)._padding_ + 7) = local_370._padding_._7_1_;
    }
    piVar1 = &(pFVar13->Views).Array.ArrayMax;
    (pFVar22->Desc).Texture = local_370.Texture;
    iVar17 = (pFVar13->Views).Array.ArrayNum;
    local_380 = pFVar22;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                         (0x808,(ForElementType<FRDGView_*> *)&pFVar13->Views,piVar1);
    }
    (pFVar13->Views).Array.ArrayNum = iVar17 + 1;
    (pFVar13->Views).Array.AllocatorInstance.Data[iVar17] = (FRDGView *)pFVar22;
    *(int *)((longlong)&pFVar22->_padding_ + 4) = (pFVar13->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUAV(&pFVar13->UserValidation,pFVar22);
    if (local_3b0->SubAllocType == SAT_Height) {
      pFVar23 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)local_348]);
      pFVar24 = (FShaderType *)FUploadHeightFieldToAtlasCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar23,&local_218,pFVar24,0);
      if (local_218.ShaderContent == (FShader *)0x0) {
        FVar25 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_288);
        ::FName::ToString((FName *)FVar25,&local_1d8);
        FUploadHeightFieldToAtlasCS::GetStaticType();
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FUploadHeightFieldToAtlasCS::GetStaticType();
      pFVar11 = local_388;
      local_1c8.ShaderContent = (FUploadHeightFieldToAtlasCS *)local_218.ShaderContent;
      local_1c8.ShaderMap = local_218.ShaderMap;
      if (0 < local_60) {
        pFVar2 = local_388 + 1;
        uVar42 = uVar37;
        do {
          puVar26 = FMemStackBase::Alloc(local_388,0x60,0x10);
          if (puVar26 == (undefined8 *)0x0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar14) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            *puVar26 = &___7__TObject_VFParameters_FUploadHeightFieldToAtlasCS___FRDGAllocator__6B_;
            puVar26[4] = 0;
            *(undefined4 *)(puVar26 + 5) = 0;
            puVar26[7] = 0;
            puVar26[8] = 0;
            puVar26[10] = 0;
            *(undefined4 *)((longlong)puVar26 + 0x2c) = 0x3f800000;
          }
          local_358 = puVar26;
          if ((((FScriptContainerElement *)pFVar2->Top <= (FScriptContainerElement *)&local_358) &&
              ((FScriptContainerElement *)&local_358 <
               (FScriptContainerElement *)pFVar2->Top +
               (longlong)*(int *)((longlong)&pFVar11[1].End + 4) * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar17 = *(int *)&pFVar11[1].End;
          if (iVar17 == *(int *)((longlong)&pFVar11[1].End + 4)) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)pFVar2,
                                (int *)((longlong)&pFVar11[1].End + 4));
          }
          *(int *)&pFVar11[1].End = iVar17 + 1;
          *(undefined8 **)((FScriptContainerElement *)pFVar2->Top + (longlong)iVar17 * 8) =
               local_358;
          uVar29 = (uint)uVar37;
          uVar41 = 0;
          if ((int)uVar29 < local_60) {
            uVar41 = ~uVar29 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar31 = (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)&local_128;
          if (local_128.SecondaryData != (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0
             ) {
            FVar31 = local_128.SecondaryData;
          }
          if (local_3b0->SubAllocType == SAT_Height) {
            puVar26[10] = local_380;
          }
          else {
            local_208 = 0;
            uStack_200 = 0;
            *(undefined4 *)
             ((longlong)&local_208 +
             ((FPendingUpload *)((longlong)FVar31 + uVar42))->VisibilityChannel * 4) = 0x3f800000;
            puVar26[10] = local_208;
            puVar26[0xb] = uStack_200;
            puVar26[0xc] = local_380;
          }
          FPendingUpload::SetCommonShaderParameters
                    ((FPendingUpload *)((longlong)FVar31 + uVar42),&local_308,
                     (FLandscapeTextureAtlas *)(puVar26 + 2));
          pFVar27 = FRDGEventName::FRDGEventName(&local_198,1,L"UploadHeightFieldToAtlas");
          pFVar28 = FUploadHeightFieldToAtlasCS::FParameters::FTypeInfo::GetStructMetadata();
          local_2f8._s_0.X = local_308;
          local_2f8._s_0.Y = local_304;
          local_2f8._s_0.Z = 1;
          FComputeShaderUtils::AddPass<FUploadHeightFieldToAtlasCS>
                    (local_340,pFVar27,Compute,&local_1c8,pFVar28,(FParameters *)(puVar26 + 2),
                     (TIntVector3<int> *)&local_2f8._s_0);
          uVar41 = local_3a8;
          local_3a8 = local_3a8 & 0xfffffffd;
          if (local_198.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (((uVar41 & 1) != 0) && (local_3a8 = uVar41 & 0xfffffffc, local_288 != (void *)0x0)) {
            FMemory::Free(local_288);
          }
          uVar37 = (ulonglong)(uVar29 + 1);
          uVar42 = uVar42 + 0x18;
        } while ((int)(uVar29 + 1) < local_60);
      }
    }
    else {
      pFVar23 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)local_348]);
      pFVar24 = (FShaderType *)FUploadVisibilityToAtlasCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar23,&local_1f8,pFVar24,0);
      if (local_1f8.ShaderContent == (FShader *)0x0) {
        FVar25 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_280);
        ::FName::ToString((FName *)FVar25,&local_1b8);
        FUploadVisibilityToAtlasCS::GetStaticType();
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FUploadVisibilityToAtlasCS::GetStaticType();
      pFVar11 = local_388;
      local_1a8.ShaderContent = (FUploadVisibilityToAtlasCS *)local_1f8.ShaderContent;
      local_1a8.ShaderMap = local_1f8.ShaderMap;
      if (0 < local_60) {
        pFVar2 = local_388 + 1;
        uVar42 = uVar37;
        do {
          puVar26 = FMemStackBase::Alloc(local_388,0x70,0x10);
          if (puVar26 == (undefined8 *)0x0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar14) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            *puVar26 = &___7__TObject_VFParameters_FUploadVisibilityToAtlasCS___FRDGAllocator__6B_;
            puVar26[4] = 0;
            *(undefined4 *)(puVar26 + 5) = 0;
            puVar26[7] = 0;
            puVar26[8] = 0;
            puVar26[10] = 0;
            *(undefined4 *)(puVar26 + 0xb) = 0;
            puVar26[0xc] = 0;
            *(undefined4 *)((longlong)puVar26 + 0x2c) = 0x3f800000;
            *(undefined4 *)((longlong)puVar26 + 0x5c) = 0x3f800000;
          }
          local_350 = puVar26;
          if ((((FScriptContainerElement *)pFVar2->Top <= (FScriptContainerElement *)&local_350) &&
              ((FScriptContainerElement *)&local_350 <
               (FScriptContainerElement *)pFVar2->Top +
               (longlong)*(int *)((longlong)&pFVar11[1].End + 4) * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar17 = *(int *)&pFVar11[1].End;
          if (iVar17 == *(int *)((longlong)&pFVar11[1].End + 4)) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)pFVar2,
                                (int *)((longlong)&pFVar11[1].End + 4));
          }
          *(int *)&pFVar11[1].End = iVar17 + 1;
          *(undefined8 **)((FScriptContainerElement *)pFVar2->Top + (longlong)iVar17 * 8) =
               local_350;
          uVar29 = (uint)uVar37;
          uVar41 = 0;
          if ((int)uVar29 < local_60) {
            uVar41 = ~uVar29 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar31 = (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)&local_128;
          if (local_128.SecondaryData != (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0
             ) {
            FVar31 = local_128.SecondaryData;
          }
          if (local_3b0->SubAllocType == SAT_Height) {
            puVar26[10] = local_380;
          }
          else {
            local_1e8 = 0;
            uStack_1e0 = 0;
            *(undefined4 *)
             ((longlong)&local_1e8 +
             ((FPendingUpload *)((longlong)FVar31 + uVar42))->VisibilityChannel * 4) = 0x3f800000;
            puVar26[10] = local_1e8;
            puVar26[0xb] = uStack_1e0;
            puVar26[0xc] = local_380;
          }
          FPendingUpload::SetCommonShaderParameters
                    ((FPendingUpload *)((longlong)FVar31 + uVar42),&local_300,
                     (FLandscapeTextureAtlas *)(puVar26 + 2));
          pFVar27 = FRDGEventName::FRDGEventName(local_180,1,L"UploadVisibilityToAtlas");
          pFVar28 = FUploadVisibilityToAtlasCS::FParameters::FTypeInfo::GetStructMetadata();
          local_2e8._s_0.X = local_300;
          local_2e8._s_0.Y = local_2fc;
          local_2e8._s_0.Z = 1;
          FComputeShaderUtils::AddPass<FUploadVisibilityToAtlasCS>
                    (local_340,pFVar27,Compute,&local_1a8,pFVar28,(FParameters *)(puVar26 + 2),
                     (TIntVector3<int> *)&local_2e8._s_0);
          uVar41 = local_3a8;
          local_3a8 = local_3a8 & 0xfffffff7;
          if (local_180[0].FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180[0].FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (((uVar41 & 4) != 0) && (local_3a8 = uVar41 & 0xfffffff3, local_280 != (void *)0x0)) {
            FMemory::Free(local_280);
          }
          uVar37 = (ulonglong)(uVar29 + 1);
          uVar42 = uVar42 + 0x18;
        } while ((int)(uVar29 + 1) < local_60);
      }
    }
  }
  if (local_128.SecondaryData != (ForElementType<FLandscapeTextureAtlas::FPendingUpload>)0x0) {
    FMemory::Free((void *)local_128.SecondaryData);
  }
  return;
}

// UpdateAllocations @ 147b20a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FLandscapeTextureAtlas::UpdateAllocations
          (FLandscapeTextureAtlas *this,FRHICommandListImmediate *param_1,Type param_2)

{
  undefined1 auStackY_838 [32];
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_838;
  local_808.EventFormat = L"";
  local_808.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_808.FormattedEventName.Data.ArrayNum = 0;
  local_808.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_808,None,GMaxRHIShaderPlatform);
  UpdateAllocations(this,&local_7e8,param_2);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

