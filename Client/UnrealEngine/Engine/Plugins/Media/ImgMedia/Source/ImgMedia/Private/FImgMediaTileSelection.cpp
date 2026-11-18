// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 13

// FImgMediaTileSelection @ 14ea38d70

FImgMediaTileSelection * __thiscall
FImgMediaTileSelection::FImgMediaTileSelection
          (FImgMediaTileSelection *this,FImgMediaTileSelection *param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  (this->Tiles).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->Tiles).AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
    memmove(this,param_1,0x10);
  }
  FVar1 = (this->Tiles).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Tiles).AllocatorInstance.SecondaryData = (param_1->Tiles).AllocatorInstance.SecondaryData;
  (param_1->Tiles).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Tiles).NumBits = (param_1->Tiles).NumBits;
  (this->Tiles).MaxBits = (param_1->Tiles).MaxBits;
  (param_1->Tiles).NumBits = 0;
  (param_1->Tiles).MaxBits = 0;
  (this->Dimensions).field0_0x0 = (param_1->Dimensions).field0_0x0;
  (this->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0;
  (this->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0;
  this->bCachedVisibleRegionDirty = param_1->bCachedVisibleRegionDirty;
  return this;
}

// FImgMediaTileSelection @ 14ea38e00

FImgMediaTileSelection * __thiscall
FImgMediaTileSelection::FImgMediaTileSelection
          (FImgMediaTileSelection *this,FImgMediaTileSelection *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  
  (this->Tiles).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Tiles).NumBits = 0;
  (this->Tiles).MaxBits = 0;
  uVar4 = (param_1->Tiles).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    (this->Tiles).MaxBits = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->Tiles,0);
  }
  iVar1 = (param_1->Tiles).NumBits;
  (this->Tiles).NumBits = iVar1;
  if (iVar1 != 0) {
    FVar2 = (param_1->Tiles).AllocatorInstance.SecondaryData;
    _Src = (ForElementType<unsigned_int>)param_1;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      _Src = FVar2;
    }
    FVar2 = (this->Tiles).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      _Dst = FVar2;
    }
    memcpy((void *)_Dst,(void *)_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  (this->Dimensions).field0_0x0 = (param_1->Dimensions).field0_0x0;
  (this->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0;
  (this->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0;
  this->bCachedVisibleRegionDirty = param_1->bCachedVisibleRegionDirty;
  return this;
}

// FImgMediaTileSelection @ 14ea38eb0

FImgMediaTileSelection * __thiscall
FImgMediaTileSelection::FImgMediaTileSelection
          (FImgMediaTileSelection *this,int param_1,int param_2,bool param_3)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  
  (this->Tiles).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Tiles).MaxBits = 0x80;
  (this->Tiles).NumBits = param_1 * param_2;
  uVar3 = param_1 * param_2 + 0x1f;
  uVar7 = uVar3 >> 5;
  if (uVar3 >> 5 != 0) {
    if (4 < uVar7) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this,0,uVar7,4);
      (this->Tiles).MaxBits = uVar7 << 5;
    }
    FVar2 = (this->Tiles).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar2;
    }
    if (uVar7 < 9) {
      for (uVar5 = (ulonglong)uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)FVar6 = -(uint)param_3;
        FVar6 = (ForElementType<unsigned_int>)((longlong)FVar6 + 4);
      }
    }
    else {
      memset((void *)FVar6,-(uint)param_3 & 0xff,(ulonglong)uVar7 << 2);
    }
    iVar4 = (this->Tiles).NumBits;
    uVar7 = iVar4 >> 0x1f & 0x1f;
    uVar3 = iVar4 + uVar7;
    iVar4 = (uVar3 & 0x1f) - uVar7;
    if (iVar4 != 0) {
      FVar2 = (this->Tiles).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<unsigned_int>)this;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar6 = FVar2;
      }
      puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
    }
  }
  (this->Dimensions).field0_0x0._s_0.X = param_1;
  (this->Dimensions).field0_0x0._s_0.Y = param_2;
  (this->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->bCachedVisibleRegionDirty = true;
  return this;
}

// Contains @ 14ea45bf0

bool __thiscall
FImgMediaTileSelection::Contains(FImgMediaTileSelection *this,FImgMediaTileSelection *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  FVar3 = (this->Tiles).AllocatorInstance.SecondaryData;
  uVar11 = (this->Tiles).NumBits;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    this = (FImgMediaTileSelection *)FVar3;
  }
  iVar13 = 0;
  iVar7 = uVar11 + 0x1f;
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
  uVar11 = uVar11 & 0x8000001f;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
  }
  FVar3 = (param_1->Tiles).AllocatorInstance.SecondaryData;
  uVar9 = (param_1->Tiles).NumBits;
  uVar4 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
  if (0x1f < (int)(0x20 - uVar11)) {
    uVar4 = 0xffffffff;
  }
  uVar11 = 0xffffffff;
  if (iVar7 == 1) {
    uVar11 = uVar4;
  }
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (FImgMediaTileSelection *)FVar3;
  }
  iVar8 = uVar9 + 0x1f;
  iVar12 = 0;
  iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
  uVar9 = uVar9 & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  iVar1 = iVar8 + -1;
  iVar6 = iVar1;
  uVar5 = 0xffffffff >> ((byte)(0x20 - uVar9) & 0x1f);
  if (0x1f < (int)(0x20 - uVar9)) {
    uVar5 = 0xffffffff;
  }
  do {
    uVar9 = 0xffffffff;
    if (iVar6 == 0) {
      uVar9 = uVar5;
    }
    if (iVar13 < iVar7) {
      uVar2 = *(uint *)((longlong)this + (longlong)iVar13 * 4);
      uVar10 = uVar2 & uVar11;
      if (uVar11 == 0xffffffff) {
        uVar10 = uVar2;
      }
      if (iVar12 < iVar8) goto LAB_14ea45cdf;
      uVar11 = 0;
    }
    else {
      if (iVar8 <= iVar12) {
        return true;
      }
      uVar10 = 0;
LAB_14ea45cdf:
      uVar11 = *(uint *)((longlong)param_1 + (longlong)iVar12 * 4);
      if (uVar9 != 0xffffffff) {
        uVar11 = uVar11 & uVar9;
      }
    }
    if ((uVar10 != uVar11) && ((uVar11 & uVar10) != uVar11)) {
      return false;
    }
    iVar13 = iVar13 + 1;
    uVar11 = 0xffffffff;
    if (iVar13 == iVar7 + -1) {
      uVar11 = uVar4;
    }
    iVar12 = iVar12 + 1;
    iVar6 = iVar12 - iVar1;
  } while( true );
}

// CreateForTargetMipLevel @ 14ea46400

FImgMediaTileSelection * __cdecl
FImgMediaTileSelection::CreateForTargetMipLevel
          (FImgMediaTileSelection *__return_storage_ptr__,TIntPoint<int> *param_1,
          TIntPoint<int> *param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FImgMediaTileSelection *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if ((param_3 < 0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2330921284600332238>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Assets\\ImgMediaMipMapInfo.cpp"
                         ,0x32,"TargetMipLevel >= 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImgMediaTileSelection *)(*pcVar1)();
    return pFVar3;
  }
  iVar4 = (param_2->field0_0x0)._s_0.X;
  if ((iVar4 == 0) || (iVar6 = (param_2->field0_0x0)._s_0.Y, iVar6 == 0)) {
    iVar6 = 1;
    iVar4 = 1;
  }
  else {
    iVar5 = 1 << ((byte)param_3 & 0x1f);
    fVar8 = (float)((param_1->field0_0x0)._s_0.X / iVar5);
    fVar7 = (float)((param_1->field0_0x0)._s_0.Y / iVar5);
    iVar4 = -((int)ROUND(__real_bf000000 - (fVar8 + fVar8) / (float)iVar4) >> 1);
    iVar6 = -((int)ROUND(__real_bf000000 - (fVar7 + fVar7) / (float)iVar6) >> 1);
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    if (iVar4 < 1) {
      iVar4 = 1;
    }
  }
  FImgMediaTileSelection(__return_storage_ptr__,iVar4,iVar6,param_4);
  return __return_storage_ptr__;
}

// GetVisibleCoordinates @ 14ea4f190

TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> * __thiscall
FImgMediaTileSelection::GetVisibleCoordinates
          (FImgMediaTileSelection *this,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < (this->Dimensions).field0_0x0._s_0.Y) {
    do {
      iVar5 = (this->Dimensions).field0_0x0._s_0.X;
      iVar10 = 0;
      if (0 < iVar5) {
        do {
          uVar9 = iVar5 * iVar11 + iVar10;
          if ((((int)uVar9 < 0) || ((this->Tiles).NumBits <= (int)uVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar6;
          }
          FVar1 = (this->Tiles).AllocatorInstance.SecondaryData;
          FVar7 = (ForElementType<unsigned_int>)this;
          if (FVar1 != (ForElementType<unsigned_int>)0x0) {
            FVar7 = FVar1;
          }
          uVar8 = uVar9 & 0x1f;
          if ((int)uVar9 < 0) {
            uVar9 = uVar9 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar7 + (longlong)((int)uVar9 >> 5) * 4) >> uVar8 & 1) != 0) {
            iVar5 = __return_storage_ptr__->ArrayNum;
            if (iVar5 == __return_storage_ptr__->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar5 + 1;
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            *(int *)(pFVar2 + (longlong)iVar5 * 8) = iVar10;
            *(int *)(pFVar2 + (longlong)iVar5 * 8 + 4) = iVar11;
          }
          iVar5 = (this->Dimensions).field0_0x0._s_0.X;
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (this->Dimensions).field0_0x0._s_0.Y);
  }
  return __return_storage_ptr__;
}

// GetVisibleRegion @ 14ea4f2b0

TIntRect<int> * __thiscall
FImgMediaTileSelection::GetVisibleRegion
          (FImgMediaTileSelection *this,TIntRect<int> *__return_storage_ptr__)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TIntRect<int> *pTVar5;
  TIntPoint<int>_u_0 TVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  TIntPoint<int>_u_0 TVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_res8;
  int iStackX_c;
  
  if (this->bCachedVisibleRegionDirty == false) goto LAB_14ea4f439;
  iVar11 = 0;
  iVar14 = -0x80000000;
  iVar13 = -0x80000000;
  iVar16 = 0x7fffffff;
  iVar15 = 0x7fffffff;
  local_res8 = 0x7fffffff;
  iStackX_c = 0x7fffffff;
  if ((this->Dimensions).field0_0x0._s_0.Y < 1) {
LAB_14ea4f3fa:
    TVar6 = (TIntPoint<int>_u_0)0x0;
    TVar9 = (TIntPoint<int>_u_0)0x0;
  }
  else {
    do {
      iVar4 = (this->Dimensions).field0_0x0._s_0.X;
      iVar12 = 0;
      if (0 < iVar4) {
        do {
          uVar10 = iVar4 * iVar11 + iVar12;
          if ((((int)uVar10 < 0) || ((this->Tiles).NumBits <= (int)uVar10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TIntRect<int> *)(*pcVar2)();
            return pTVar5;
          }
          FVar1 = (this->Tiles).AllocatorInstance.SecondaryData;
          FVar7 = (ForElementType<unsigned_int>)this;
          if (FVar1 != (ForElementType<unsigned_int>)0x0) {
            FVar7 = FVar1;
          }
          uVar8 = uVar10 & 0x1f;
          if ((int)uVar10 < 0) {
            uVar10 = uVar10 + 0x1f;
          }
          iVar4 = iVar13;
          if ((*(uint *)((longlong)FVar7 + (longlong)((int)uVar10 >> 5) * 4) >> uVar8 & 1) != 0) {
            iVar4 = iVar12;
            if (iVar16 < iVar12) {
              iVar4 = iVar16;
            }
            iVar16 = iVar4;
            iVar4 = iVar11;
            if (iVar15 < iVar11) {
              iVar4 = iVar15;
            }
            iVar15 = iVar4;
            iVar4 = iVar12;
            if (iVar12 < iVar14) {
              iVar4 = iVar14;
            }
            iVar14 = iVar4;
            iVar4 = iVar11;
            if (iVar11 < iVar13) {
              iVar4 = iVar13;
            }
          }
          iVar13 = iVar4;
          iVar4 = (this->Dimensions).field0_0x0._s_0.X;
          iVar12 = iVar12 + 1;
          local_res8 = iVar16;
          iStackX_c = iVar15;
        } while (iVar12 < iVar4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (this->Dimensions).field0_0x0._s_0.Y);
    if ((iVar14 < iVar16) || (iVar13 < iVar15)) goto LAB_14ea4f3fa;
    TVar6._s_0.Y = iStackX_c;
    TVar6._s_0.X = local_res8;
    TVar9._s_0.Y = iVar13 + 1;
    TVar9._s_0.X = iVar14 + 1;
  }
  (this->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0 = TVar6;
  (this->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0 = TVar9;
  this->bCachedVisibleRegionDirty = false;
LAB_14ea4f439:
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 =
       (this->CachedVisibleRegion).field0_0x0._s_0.Min.field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 =
       (this->CachedVisibleRegion).field0_0x0._s_0.Max.field0_0x0;
  return __return_storage_ptr__;
}

// GetVisibleRegions @ 14ea4f460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> * __thiscall
FImgMediaTileSelection::GetVisibleRegions
          (FImgMediaTileSelection *this,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FImgMediaTileSelection *param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar14;
  ForElementType<unsigned_int> FVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint uVar19;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar25;
  int iVar26;
  undefined1 auStack_f8 [32];
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *local_d8;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined1 local_a7 [3];
  int local_a4;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_a0;
  ForAnyElementType local_90;
  uint local_88;
  uint uStack_84;
  uint local_80;
  int local_78;
  int iStack_74;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  undefined8 local_60;
  ForElementType<unsigned_int> local_58;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  uStack_84 = 0;
  local_a4 = 0;
  local_70 = __return_storage_ptr__;
  if (0 < (this->Dimensions).field0_0x0._s_0.Y) {
    do {
      iVar18 = local_a4;
      iVar23 = 0;
      local_40 = (this->Dimensions).field0_0x0._s_0.X;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      local_58.SecondaryData = (ForElementType<unsigned_int>)0x0;
      uVar22 = local_40 + 0x1f;
      local_3c = 0x80;
      uVar19 = uVar22 >> 5;
      if (uVar22 >> 5 != 0) {
        if (4 < uVar19) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_58,0,uVar19,4);
          local_3c = uVar19 << 5;
        }
        FVar12 = (ForElementType<unsigned_int>)&local_58;
        if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_58.SecondaryData;
        }
        memset((void *)FVar12,0,(ulonglong)uVar19 << 2);
        uVar22 = local_40 & 0x8000001f;
        if ((int)uVar22 < 0) {
          uVar22 = (uVar22 - 1 | 0xffffffe0) + 1;
        }
        if (uVar22 != 0) {
          FVar12 = (ForElementType<unsigned_int>)&local_58;
          if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_58.SecondaryData;
          }
          puVar2 = (uint *)((longlong)FVar12 +
                           (longlong)((int)(local_40 + ((int)local_40 >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar22 & 0x1f);
        }
      }
      iVar11 = (this->Dimensions).field0_0x0._s_0.X;
      if (0 < iVar11) {
        iVar26 = 1;
        do {
          uVar22 = iVar11 * iVar18 + iVar23;
          local_80 = iVar26;
          if (param_1 == (FImgMediaTileSelection *)0x0) {
            if ((((int)uVar22 < 0) || ((this->Tiles).NumBits <= (int)uVar22)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar13;
            }
            FVar12 = (this->Tiles).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<unsigned_int>)this;
            if (FVar12 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = FVar12;
            }
            uVar19 = uVar22 & 0x1f;
            if ((int)uVar22 < 0) {
              uVar22 = uVar22 + 0x1f;
            }
            uVar19 = *(uint *)((longlong)FVar15 + (longlong)((int)uVar22 >> 5) * 4) >> uVar19 & 1;
joined_r0x00014ea4f835:
            if (uVar19 != 0) {
              iVar18 = iVar26 + -1;
              local_78 = iVar18;
              iStack_74 = local_a4;
              if (((iVar18 < 0) || ((int)local_40 <= iVar18)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
                ;
                return pTVar13;
              }
              FVar12 = (ForElementType<unsigned_int>)&local_58;
              if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar12 = local_58.SecondaryData;
              }
              iVar11 = iVar18;
              if (iVar18 < 0) {
                iVar11 = iVar26 + 0x1e;
              }
              puVar2 = (uint *)((longlong)FVar12 + (longlong)(iVar11 >> 5) * 4);
              *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
              if (0 < iVar18) {
                uVar22 = iVar26 - 2;
                if ((((int)uVar22 < 0) || ((int)local_40 <= (int)uVar22)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
                            (*pcVar6)();
                  return pTVar13;
                }
                FVar12 = (ForElementType<unsigned_int>)&local_58;
                if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar12 = local_58.SecondaryData;
                }
                uVar19 = uVar22 & 0x1f;
                if ((int)uVar22 < 0) {
                  uVar22 = iVar26 + 0x1d;
                }
                if ((*(uint *)((longlong)FVar12 + (longlong)((int)uVar22 >> 5) * 4) >> uVar19 & 1)
                    != 0) {
                  uVar19 = local_a0.ArrayNum - 1;
                  uVar22 = 0;
                  if ((int)uVar19 < local_a0.ArrayNum) {
                    uVar22 = ~uVar19 >> 0x1f;
                  }
                  if (uVar22 == 0) {
                    local_d8 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
                               (longlong)(int)uVar19;
                    local_d0 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
                               (longlong)local_a0.ArrayNum;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar9) {
                      pcVar6 = (code *)swi(3);
                      pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
                                (*pcVar6)();
                      return pTVar13;
                    }
                  }
                  local_68 = CONCAT44(iStack_74,local_78);
                  iVar18 = iStack_74 + 1;
                  iVar11 = iVar26;
                  if (*(int *)(local_a0.AllocatorInstance.Data +
                              (longlong)local_a0.ArrayNum * 0x10 + -0x10) < iVar26) {
                    iVar11 = *(int *)(local_a0.AllocatorInstance.Data +
                                     (longlong)local_a0.ArrayNum * 0x10 + -0x10);
                  }
                  iVar4 = *(int *)(local_a0.AllocatorInstance.Data +
                                  (longlong)local_a0.ArrayNum * 0x10 + -0xc);
                  *(int *)(local_a0.AllocatorInstance.Data +
                          (longlong)local_a0.ArrayNum * 0x10 + -0x10) = iVar11;
                  iVar11 = iVar18;
                  if (iVar4 < iVar18) {
                    iVar11 = *(int *)(local_a0.AllocatorInstance.Data +
                                     (longlong)local_a0.ArrayNum * 0x10 + -0xc);
                  }
                  iVar4 = *(int *)(local_a0.AllocatorInstance.Data +
                                  (longlong)local_a0.ArrayNum * 0x10 + -8);
                  *(int *)(local_a0.AllocatorInstance.Data +
                          (longlong)local_a0.ArrayNum * 0x10 + -0xc) = iVar11;
                  iVar11 = iVar26;
                  if (iVar26 < iVar4) {
                    iVar11 = *(int *)(local_a0.AllocatorInstance.Data +
                                     (longlong)local_a0.ArrayNum * 0x10 + -8);
                  }
                  iVar4 = *(int *)(local_a0.AllocatorInstance.Data +
                                  (longlong)local_a0.ArrayNum * 0x10 + -4);
                  *(int *)(local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10 + -8
                          ) = iVar11;
                  if (iVar18 < iVar4) {
                    iVar18 = *(int *)(local_a0.AllocatorInstance.Data +
                                     (longlong)local_a0.ArrayNum * 0x10 + -4);
                  }
                  *(int *)(local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10 + -4
                          ) = iVar18;
                  iVar18 = local_a4;
                  goto LAB_14ea4f88a;
                }
              }
              uVar7 = CONCAT44(iStack_74,local_78);
              iVar11 = iStack_74 + 1;
              iVar18 = local_a0.ArrayNum;
              local_60 = uVar7;
              if (local_a0.ArrayNum == local_a0.ArrayMax) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
              }
              local_a0.ArrayNum = iVar18 + 1;
              *(undefined8 *)(local_a0.AllocatorInstance.Data + (longlong)iVar18 * 0x10) = uVar7;
              *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar18 * 0x10 + 8) =
                   CONCAT44(iVar11,iVar26);
              iVar18 = local_a4;
            }
          }
          else {
            if ((((int)uVar22 < 0) || ((this->Tiles).NumBits <= (int)uVar22)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar13;
            }
            FVar12 = (this->Tiles).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<unsigned_int>)this;
            if (FVar12 != (ForElementType<unsigned_int>)0x0) {
              FVar15 = FVar12;
            }
            uVar19 = 1 << ((byte)uVar22 & 0x1f);
            uVar10 = uVar22;
            if ((int)uVar22 < 0) {
              uVar10 = uVar22 + 0x1f;
            }
            lVar16 = (longlong)((int)uVar10 >> 5) * 4;
            iVar18 = local_a4;
            if ((*(uint *)(lVar16 + (longlong)FVar15) & uVar19) == 0) {
              if ((((int)uVar22 < 0) || ((param_1->Tiles).NumBits <= (int)uVar22)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
                ;
                return pTVar13;
              }
              FVar12 = (param_1->Tiles).AllocatorInstance.SecondaryData;
              FVar15 = (ForElementType<unsigned_int>)param_1;
              if (FVar12 != (ForElementType<unsigned_int>)0x0) {
                FVar15 = FVar12;
              }
              uVar19 = *(uint *)((longlong)FVar15 + lVar16) & uVar19;
              iVar18 = local_a4;
              goto joined_r0x00014ea4f835;
            }
          }
LAB_14ea4f88a:
          iVar11 = (this->Dimensions).field0_0x0._s_0.X;
          iVar26 = iVar26 + 1;
          iVar23 = iVar23 + 1;
        } while ((int)local_80 < iVar11);
      }
      if (0 < local_a0.ArrayNum) {
        if ((local_90.Data <= &local_a0) &&
           (&local_a0 <
            (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
            (local_90.Data + (longlong)(int)uStack_84 * 0x10))) {
          local_c0 = (longlong)(int)local_88;
          local_b8 = 0x10;
          local_d8 = &local_a0;
          local_d0 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)local_90.Data;
          local_c8 = (longlong)(int)uStack_84;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar13;
          }
        }
        if (local_88 == uStack_84) {
          local_88 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_90,(int *)&uStack_84);
        }
        lVar16 = (longlong)(int)local_88;
        local_88 = local_88 + 1;
        pFVar17 = local_90.Data + lVar16 * 0x10;
        *(undefined8 *)&pFVar17->field_0x0 = 0;
        *(FScriptContainerElement **)&pFVar17->field_0x0 = local_a0.AllocatorInstance.Data;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar17 + 8) = local_a0.ArrayNum;
        *(int *)(pFVar17 + 0xc) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
      }
      if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_58.SecondaryData);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      local_a4 = iVar18 + 1;
    } while (local_a4 < (this->Dimensions).field0_0x0._s_0.Y);
  }
  uVar24 = (ulonglong)(int)local_88;
  piVar3 = &local_70->ArrayMax;
  (local_70->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_70->ArrayNum = 0;
  *piVar3 = 0;
  pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
            (local_90.Data + uVar24 * 0x10);
  local_80 = local_88;
  FVar21.Data = local_90.Data;
  do {
    if (local_88 != (uint)uVar24) {
      local_a8 = 0;
      `TCheckedPointerIterator<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_a8);
    }
    pTVar8 = local_70;
    if ((TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)FVar21.Data == pTVar13) {
      DestructItems<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)local_90.Data,
                 local_88);
      if ((TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)local_90.Data !=
          (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_90.Data);
      }
      return local_70;
    }
    iVar18 = ((TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)FVar21.Data)->ArrayNum;
    pTVar20 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
              (((TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)FVar21.Data)->
              AllocatorInstance).Data;
    pTVar25 = pTVar20 + iVar18;
LAB_14ea4f9f2:
    if (((TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)FVar21.Data)->ArrayNum !=
        iVar18) {
      local_a7[0] = 0;
      `TCheckedPointerIterator<UE::Math::TIntRect<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_a7);
    }
    if (pTVar20 != pTVar25) {
      pTVar5 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)
               (pTVar8->AllocatorInstance).Data;
      if (pTVar5 != pTVar5 + pTVar8->ArrayNum) {
        pTVar14 = pTVar5;
        do {
          if (((*(int *)&(pTVar20->AllocatorInstance).Data ==
                *(int *)&(pTVar14->AllocatorInstance).Data) &&
              (pTVar20->ArrayNum == pTVar14->ArrayNum)) &&
             (*(int *)((longlong)&(pTVar20->AllocatorInstance).Data + 4) == pTVar14->ArrayMax)) {
            pTVar14->ArrayMax = pTVar14->ArrayMax + 1;
            pTVar20 = pTVar20 + 1;
            goto LAB_14ea4f9f2;
          }
          pTVar14 = pTVar14 + 1;
        } while (pTVar14 != pTVar5 + pTVar8->ArrayNum);
      }
      if ((pTVar5 <= pTVar20) && (pTVar20 < pTVar5 + *piVar3)) {
        local_b8 = 0x10;
        local_d8 = pTVar20;
        local_d0 = pTVar5;
        local_c8 = (longlong)*piVar3;
        local_c0 = (longlong)pTVar8->ArrayNum;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar13 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar13;
        }
      }
      iVar23 = pTVar8->ArrayNum;
      if (iVar23 == *piVar3) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar8->AllocatorInstance,piVar3);
      }
      pTVar8->ArrayNum = iVar23 + 1;
      pFVar17 = (pTVar8->AllocatorInstance).Data + (longlong)iVar23 * 0x10;
      *(FScriptContainerElement **)pFVar17 = (pTVar20->AllocatorInstance).Data;
      piVar1 = &pTVar20->ArrayNum;
      pTVar20 = pTVar20 + 1;
      *(undefined8 *)(pFVar17 + 8) = *(undefined8 *)piVar1;
      goto LAB_14ea4f9f2;
    }
    uVar24 = (ulonglong)local_80;
    FVar21.Data = FVar21.Data + 0x10;
  } while( true );
}

// Include @ 14ea50b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FImgMediaTileSelection::Include(FImgMediaTileSelection *this,FImgMediaTileSelection *param_1)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_68 [32];
  <lambda_1> local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  ForElementType<unsigned_int> local_20;
  int local_18;
  int iStack_14;
  TIntPoint<int>_u_0 local_10;
  
  local_10 = (TIntPoint<int>_u_0)(__security_cookie.value ^ (ulonglong)auStackY_68);
  if (((this->Tiles).NumBits != (param_1->Tiles).NumBits) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2330921284600332182>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Assets\\ImgMediaMipMapInfo.cpp"
                         ,0x6a,"Tiles.Num() == Other.Tiles.Num()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this == param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("&A != &B",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x52d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_20 = (ForElementType<unsigned_int>)0x0;
  local_18 = 0;
  iStack_14 = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (&this->Tiles,&param_1->Tiles,
             (TBitArray<FDefaultBitArrayAllocator> *)&stack0xffffffffffffffd0,MaxSize,local_38);
  if (this != (FImgMediaTileSelection *)&stack0xffffffffffffffd0) {
    if (local_20 == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(this->Tiles).AllocatorInstance.InlineData = local_30;
      *(undefined8 *)((this->Tiles).AllocatorInstance.InlineData + 8) = uStack_28;
    }
    FVar1 = (this->Tiles).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->Tiles).AllocatorInstance.SecondaryData = local_20;
    (this->Tiles).NumBits = local_18;
    (this->Tiles).MaxBits = iStack_14;
    local_18 = 0;
    iStack_14 = 0;
    local_20 = (ForElementType<unsigned_int>)0x0;
  }
  if (local_20 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_20);
  }
  return;
}

// IsAnyVisible @ 14ea51960

bool __thiscall FImgMediaTileSelection::IsAnyVisible(FImgMediaTileSelection *this)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  bool bVar9;
  
  FVar8 = (this->Tiles).AllocatorInstance.SecondaryData;
  iVar3 = (this->Tiles).NumBits;
  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
    this = (FImgMediaTileSelection *)FVar8;
  }
  uVar6 = 0;
  uVar1 = iVar3 + 0x1f;
  FVar8 = (ForElementType<unsigned_int>)this;
  if (uVar1 >> 5 != 0) {
    while (*(int *)FVar8 == 0) {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      FVar8 = (ForElementType<unsigned_int>)((longlong)FVar8 + 4);
      if ((int)(uVar1 >> 5) <= (int)uVar5) {
        return false;
      }
    }
    puVar2 = (uint *)((longlong)this + uVar6 * 4);
    iVar4 = 0;
    bVar9 = *puVar2 != 0;
    if (bVar9) {
      for (; (*puVar2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
      }
    }
    iVar7 = 0x20;
    if (bVar9) {
      iVar7 = iVar4;
    }
    iVar7 = iVar7 + (int)uVar6 * 0x20;
    if (iVar7 < iVar3) goto LAB_14ea519b9;
  }
  iVar7 = -1;
LAB_14ea519b9:
  return iVar7 != -1;
}

// IsVisible @ 14ea51dd0

bool __thiscall
FImgMediaTileSelection::IsVisible(FImgMediaTileSelection *this,int param_1,int param_2)

{
  uint uVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  uVar1 = param_2 * (this->Dimensions).field0_0x0._s_0.X + param_1;
  if (((int)uVar1 < 0) || ((this->Tiles).NumBits <= (int)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar2 = (this->Tiles).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (FImgMediaTileSelection *)FVar2;
  }
  return (*(uint *)((longlong)this +
                   (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar1 & 0x1f) & 1) != 0;
}

// NumVisibleTiles @ 14ea536b0

int __thiscall FImgMediaTileSelection::NumVisibleTiles(FImgMediaTileSelection *this)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = 0;
  iVar10 = 0;
  if (0 < (this->Dimensions).field0_0x0._s_0.Y) {
    do {
      iVar4 = (this->Dimensions).field0_0x0._s_0.X;
      iVar9 = 0;
      if (0 < iVar4) {
        do {
          uVar8 = iVar4 * iVar10 + iVar9;
          if ((((int)uVar8 < 0) || ((this->Tiles).NumBits <= (int)uVar8)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          FVar1 = (this->Tiles).AllocatorInstance.SecondaryData;
          FVar6 = (ForElementType<unsigned_int>)this;
          if (FVar1 != (ForElementType<unsigned_int>)0x0) {
            FVar6 = FVar1;
          }
          uVar7 = uVar8 & 0x1f;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar6 + (longlong)((int)uVar8 >> 5) * 4) >> uVar7 & 1) != 0) {
            iVar5 = iVar5 + 1;
          }
          iVar4 = (this->Dimensions).field0_0x0._s_0.X;
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar4);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (this->Dimensions).field0_0x0._s_0.Y);
  }
  return iVar5;
}

// SetVisible @ 14ea5bfb0

void __thiscall
FImgMediaTileSelection::SetVisible(FImgMediaTileSelection *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (this->Dimensions).field0_0x0._s_0.X;
  iVar8 = (this->Dimensions).field0_0x0._s_0.Y + -1;
  iVar7 = iVar2 + -1;
  if (param_2 < iVar8) {
    iVar8 = param_2;
  }
  if (param_1 < iVar7) {
    iVar7 = param_1;
  }
  iVar7 = iVar8 * iVar2 + iVar7;
  if ((iVar7 < 0) || ((this->Tiles).NumBits <= iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (this->Tiles).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_int>)this;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FVar6 = FVar3;
  }
  puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  this->bCachedVisibleRegionDirty = true;
  return;
}

