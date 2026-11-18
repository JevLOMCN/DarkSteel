// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FTextureLayout3d @ 14485d570

FTextureLayout3d * __thiscall
FTextureLayout3d::FTextureLayout3d
          (FTextureLayout3d *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,bool param_7,bool param_8,bool param_9)

{
  TArray<FTextureLayout3d::FUnusedLeaf,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FTextureLayout3d *pFVar8;
  longlong lVar9;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar10;
  
  this->bPowerOfTwoSize = param_7;
  pTVar1 = &this->UnusedLeaves;
  this->bAlignByFour = param_8;
  this->bAllowShrink = param_9;
  this->MinSizeX = param_1;
  this->MinSizeY = param_2;
  this->MinSizeZ = param_3;
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->SizeZ = param_3;
  (this->Nodes).AllocatorInstance.SecondaryData =
       (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 5;
  (this->FreeNodeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeNodeIndices).ArrayNum = 0;
  (this->FreeNodeIndices).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UnusedLeaves).ArrayNum = 0;
  (this->UnusedLeaves).ArrayMax = 0;
  *(undefined8 *)&this->UsedLeaves = 0;
  *(undefined8 *)&(this->UsedLeaves).field_0x8 = 0;
  *(undefined8 *)&(this->UsedLeaves).field_0x20 = 0;
  *(undefined4 *)&(this->UsedLeaves).field_0x28 = 0;
  *(undefined4 *)&(this->UsedLeaves).field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedLeaves).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsedLeaves).field_0x34 = 0;
  *(undefined8 *)&(this->UsedLeaves).field_0x40 = 0;
  *(undefined4 *)&(this->UsedLeaves).field_0x48 = 0;
  if (((0xfffe < param_4) || (0xfffe < param_5)) || (0xfffe < param_6)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxSizeX < 0xffff && MaxSizeY < 0xffff && MaxSizeZ < 0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout3d.h"
                       ,0x26,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTextureLayout3d *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (param_6 != (param_6 & 0xffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTextureLayout3d *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (param_5 != (param_5 & 0xffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTextureLayout3d *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (param_4 != (param_4 & 0xffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTextureLayout3d *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (this->Nodes).ArrayNum;
  piVar2 = &(this->Nodes).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout3d::FTextureLayoutNode3d>_>
                      (0x41c,&(this->Nodes).AllocatorInstance,piVar2);
  }
  (this->Nodes).ArrayNum = iVar7 + 1;
  FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar10 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  lVar9 = (longlong)iVar7 * 0x1c;
  *(undefined8 *)((longlong)FVar10 + lVar9) = 0xffffffffffffffff;
  puVar3 = (uchar *)((longlong)FVar10 + 8) + lVar9;
  puVar3[0] = 0xff;
  puVar3[1] = 0xff;
  puVar3[2] = 0xff;
  puVar3[3] = 0xff;
  puVar3 = (uchar *)((longlong)FVar10 + 0xc) + lVar9;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  ((uchar *)((longlong)FVar10 + 0x10) + lVar9)[0] = '\0';
  ((uchar *)((longlong)FVar10 + 0x10) + lVar9)[1] = '\0';
  *(short *)((uchar *)((longlong)FVar10 + 0x12) + lVar9) = (short)param_4;
  *(short *)((uchar *)((longlong)FVar10 + 0x14) + lVar9) = (short)param_5;
  *(short *)((uchar *)((longlong)FVar10 + 0x16) + lVar9) = (short)param_6;
  ((uchar *)((longlong)FVar10 + 0x18))[lVar9] = '\0';
  if (param_6 != (param_6 & 0xffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTextureLayout3d *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (param_5 != (param_5 & 0xffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTextureLayout3d *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (param_4 != (param_4 & 0xffff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FTextureLayout3d *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (this->UnusedLeaves).ArrayNum;
  piVar2 = &(this->UnusedLeaves).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->UnusedLeaves).ArrayNum = iVar7 + 1;
  lVar9 = (longlong)iVar7;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + lVar9 * 0x10) = 0;
  *(undefined2 *)(pFVar4 + lVar9 * 0x10 + 4) = 0;
  *(short *)(pFVar4 + lVar9 * 0x10 + 6) = (short)param_4;
  *(short *)(pFVar4 + lVar9 * 0x10 + 8) = (short)param_5;
  *(short *)(pFVar4 + lVar9 * 0x10 + 10) = (short)param_6;
  *(undefined4 *)(pFVar4 + lVar9 * 0x10 + 0xc) = 0;
  return this;
}

// ~FTextureLayout3d @ 14485e770

void __thiscall FTextureLayout3d::~FTextureLayout3d(FTextureLayout3d *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar3;
  
  *(undefined4 *)&(this->UsedLeaves).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UsedLeaves).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UsedLeaves);
  pFVar2 = (this->UnusedLeaves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FreeNodeIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  return;
}

// AddElement @ 144865700

bool __thiscall
FTextureLayout3d::AddElement
          (FTextureLayout3d *this,uint *param_1,uint *param_2,uint *param_3,uint param_4,
          uint param_5,uint param_6)

{
  int *piVar1;
  TArray<FTextureLayout3d::FUnusedLeaf,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint local_68;
  uint local_64;
  int local_60;
  TPairInitializer<UE::Math::TIntVector3<int>_&&,int_const_&> local_5c;
  undefined4 *local_48;
  uint *local_40;
  
  if (((param_4 == 0) || (param_5 == 0)) || (param_6 == 0)) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 0;
    return true;
  }
  if (this->bAlignByFour != false) {
    param_4 = param_4 + 3 & 0xfffffffc;
    param_5 = param_5 + 3 & 0xfffffffc;
    param_6 = param_6 + 3 & 0xfffffffc;
  }
  uVar11 = 0;
  local_60 = -1;
  local_68 = 0xffffffff;
  if (0 < (this->UnusedLeaves).ArrayNum) {
    pTVar2 = &this->UnusedLeaves;
    lVar14 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (param_4 <= *(ushort *)((pTVar2->AllocatorInstance).Data + lVar14 + 6)) {
        uVar8 = 0;
        if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (param_5 <= *(ushort *)((pTVar2->AllocatorInstance).Data + lVar14 + 8)) {
          uVar8 = 0;
          if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (param_6 <= *(ushort *)((pTVar2->AllocatorInstance).Data + lVar14 + 10)) {
            if (local_60 == -1) {
              uVar8 = 0;
              if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
                uVar8 = uVar12;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              local_60 = *(int *)((pTVar2->AllocatorInstance).Data + lVar14 + 0xc);
              local_68 = uVar11;
            }
            uVar8 = 0;
            if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
              uVar8 = uVar12;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            if (*(ushort *)((pTVar2->AllocatorInstance).Data + lVar14) + param_4 <= this->SizeX) {
              uVar8 = 0;
              if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
                uVar8 = uVar12;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              if (*(ushort *)((pTVar2->AllocatorInstance).Data + lVar14 + 2) + param_5 <=
                  this->SizeY) {
                uVar8 = 0;
                if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
                  uVar8 = uVar12;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                if (*(ushort *)((pTVar2->AllocatorInstance).Data + lVar14 + 4) + param_6 <=
                    this->SizeZ) {
                  uVar8 = 0;
                  if ((int)uVar11 < (this->UnusedLeaves).ArrayNum) {
                    uVar8 = uVar12;
                  }
                  if ((uVar8 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                  iVar13 = *(int *)((pTVar2->AllocatorInstance).Data +
                                   (longlong)(int)uVar11 * 0x10 + 0xc);
                  local_68 = uVar11;
                  goto LAB_144865a49;
                }
              }
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar11 < (this->UnusedLeaves).ArrayNum);
    iVar13 = -1;
LAB_144865a49:
    if (local_68 != 0xffffffff) {
      uVar11 = 0;
      if ((int)local_68 < (this->UnusedLeaves).ArrayNum) {
        uVar11 = ~local_68 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar3 = (this->UnusedLeaves).ArrayNum;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      iVar9 = iVar3 + ~local_68;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar4 + (longlong)(int)local_68 * 0x10,pFVar4 + (longlong)(iVar3 - iVar9) * 0x10,
                (longlong)iVar9 << 4);
      }
      piVar1 = &(this->UnusedLeaves).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,&pTVar2->AllocatorInstance,(this->UnusedLeaves).ArrayNum,
                 &(this->UnusedLeaves).ArrayMax);
    }
    if (iVar13 == -1) {
      if (local_60 == -1) {
        return false;
      }
      local_64 = AddSurfaceInner(this,local_60,param_4,param_5,param_6,true);
    }
    else {
      local_64 = AddSurfaceInner(this,iVar13,param_4,param_5,param_6,false);
      if ((local_64 == 0xffffffff) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NodeIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout3d.h"
                             ,0x68,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    uVar11 = local_64;
    if (local_64 != 0xffffffff) {
      uVar8 = 0;
      if ((int)local_64 < (this->Nodes).ArrayNum) {
        uVar8 = ~local_64 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar10 = (this->Nodes).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar10 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
      }
      lVar14 = (longlong)(int)uVar11 * 0x1c;
      ((uchar *)((longlong)FVar10 + 0x18))[lVar14] = '\x01';
      *param_1 = (uint)*(ushort *)((uchar *)((longlong)FVar10 + 0xc) + lVar14);
      *param_2 = (uint)*(ushort *)((uchar *)((longlong)FVar10 + 0xe) + lVar14);
      local_5c.Value._4_4_ = (uint)*(ushort *)((uchar *)((longlong)FVar10 + 0x10) + lVar14);
      *param_3 = local_5c.Value._4_4_;
      local_5c.Key._4_4_ = *param_1;
      local_5c.Value._0_4_ = *param_2;
      local_48 = (undefined4 *)((longlong)&local_5c.Key + 4);
      local_40 = &local_64;
      TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Math::TIntVector3<int>_&&,int_const_&>_>
                ((TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
                  *)&this->UsedLeaves,&local_5c,(bool *)&local_48);
      UpdateSize(this,*param_1 + param_4,*param_2 + param_5,*param_3 + param_6);
      return true;
    }
  }
  return false;
}

// AddSurfaceInner @ 144866600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FTextureLayout3d::AddSurfaceInner
          (FTextureLayout3d *this,int param_1,uint param_2,uint param_3,uint param_4,bool param_5)

{
  TArray<FTextureLayout3d::FTextureLayoutNode3d,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar18;
  uint uVar19;
  int *piVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  longlong lVar23;
  ushort uStack_6c;
  ushort uStack_6a;
  ushort local_58;
  ushort uStack_56;
  ushort uStack_54;
  ushort uStack_52;
  
  pTVar1 = &this->Nodes;
  while( true ) {
    while( true ) {
      uVar19 = (uint)~param_1 >> 0x1f;
      uVar16 = 0;
      if (param_1 < (this->Nodes).ArrayNum) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        iVar15 = (*pcVar10)();
        return iVar15;
      }
      FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar18 = FVar9;
      }
      lVar23 = (longlong)param_1 * 0x1c;
      piVar20 = (int *)((longlong)FVar18 + lVar23);
      if (*piVar20 == -1) break;
      iVar15 = AddSurfaceInner(this,*piVar20,param_2,param_3,param_4,param_5);
      if (iVar15 != -1) {
        return iVar15;
      }
      uVar16 = 0;
      if (param_1 < (this->Nodes).ArrayNum) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        iVar15 = (*pcVar10)();
        return iVar15;
      }
      FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar18 = FVar9;
      }
      param_1 = *(uint *)(lVar23 + 4 + (longlong)FVar18);
    }
    if ((char)piVar20[6] != '\0') {
      return -1;
    }
    uVar13 = *(ushort *)((longlong)piVar20 + 0x12);
    if (uVar13 < param_2) {
      return -1;
    }
    uVar14 = *(ushort *)(piVar20 + 5);
    if (uVar14 < param_3) {
      return -1;
    }
    uVar3 = *(ushort *)((longlong)piVar20 + 0x16);
    if (uVar3 < param_4) break;
    if (!param_5) {
      if (this->SizeX < *(ushort *)(piVar20 + 3) + param_2) {
        return -1;
      }
      if (this->SizeY < *(ushort *)((longlong)piVar20 + 0xe) + param_3) {
        return -1;
      }
      if (this->SizeZ < *(ushort *)(piVar20 + 4) + param_4) {
        return -1;
      }
    }
    if (((uVar13 == param_2) && (uVar14 == param_3)) && (uVar3 == param_4)) {
      return param_1;
    }
    uVar16 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar16 = uVar19;
    }
    if ((uVar16 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      iVar15 = (*pcVar10)();
      return iVar15;
    }
    FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar18 = FVar9;
    }
    uVar11 = *(undefined8 *)(lVar23 + (longlong)FVar18 + 8);
    uVar2 = *(undefined8 *)(lVar23 + 0x10 + (longlong)FVar18);
    if ((this->FreeNodeIndices).ArrayNum == 0) {
      uVar16 = (this->Nodes).ArrayNum;
      piVar20 = &(this->Nodes).ArrayMax;
      if (uVar16 == *piVar20) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout3d::FTextureLayoutNode3d>_>
                           (0x41c,&pTVar1->AllocatorInstance,piVar20);
      }
      (this->Nodes).ArrayNum = uVar16 + 1;
    }
    else {
      uVar16 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeNodeIndices,Default);
    }
    piVar20 = &(this->Nodes).ArrayMax;
    if ((this->FreeNodeIndices).ArrayNum == 0) {
      uVar17 = (this->Nodes).ArrayNum;
      if (uVar17 == *piVar20) {
        uVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureLayout3d::FTextureLayoutNode3d>_>
                           (0x41c,&pTVar1->AllocatorInstance,piVar20);
      }
      (this->Nodes).ArrayNum = uVar17 + 1;
    }
    else {
      uVar17 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeNodeIndices,Default);
    }
    uVar22 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar22 = uVar19;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      iVar15 = (*pcVar10)();
      return iVar15;
    }
    FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar18 = FVar9;
    }
    *(uint *)(lVar23 + (longlong)FVar18) = uVar16;
    uVar22 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar22 = uVar19;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      iVar15 = (*pcVar10)();
      return iVar15;
    }
    FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar18 = FVar9;
    }
    uVar19 = ~uVar16 >> 0x1f;
    *(uint *)(lVar23 + 4 + (longlong)FVar18) = uVar17;
    iVar15 = (this->Nodes).ArrayNum;
    uStack_6c = (ushort)((ulonglong)uVar11 >> 0x20);
    uStack_6a = (ushort)((ulonglong)uVar11 >> 0x30);
    local_58 = (ushort)uVar2;
    uStack_56 = (ushort)((ulonglong)uVar2 >> 0x10);
    uStack_54 = (ushort)((ulonglong)uVar2 >> 0x20);
    uStack_52 = (ushort)((ulonglong)uVar2 >> 0x30);
    if (uVar14 - param_3 < uVar13 - param_2) {
      if (uVar3 - param_4 < uVar13 - param_2) {
        uVar22 = 0;
        if ((int)uVar16 < iVar15) {
          uVar22 = uVar19;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          iVar15 = (*pcVar10)();
          return iVar15;
        }
        FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
        if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
          FVar18 = FVar9;
        }
        uVar13 = IntCastChecked<unsigned_short,unsigned_int>(param_2);
        lVar23 = (longlong)(int)uVar16 * 0x1c;
        uVar22 = ~uVar17 >> 0x1f;
        *(ushort *)(lVar23 + 0x12 + (longlong)FVar18) = uVar13;
        *(ushort *)(lVar23 + 0x14 + (longlong)FVar18) = uStack_54;
        *(ushort *)(lVar23 + 0x16 + (longlong)FVar18) = uStack_52;
        *(ushort *)(lVar23 + 0xe + (longlong)FVar18) = uStack_6a;
        *(undefined8 *)(lVar23 + (longlong)FVar18) = 0xffffffffffffffff;
        *(int *)(lVar23 + 8 + (longlong)FVar18) = param_1;
        *(ushort *)(lVar23 + 0xc + (longlong)FVar18) = uStack_6c;
        *(ushort *)(lVar23 + 0x10 + (longlong)FVar18) = local_58;
        *(undefined1 *)(lVar23 + 0x18 + (longlong)FVar18) = 0;
        uVar19 = 0;
        if ((int)uVar17 < (this->Nodes).ArrayNum) {
          uVar19 = uVar22;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          iVar15 = (*pcVar10)();
          return iVar15;
        }
        FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
        if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
          FVar18 = FVar9;
        }
        uVar13 = IntCastChecked<unsigned_short,unsigned_int>(uStack_56 - param_2);
        uVar14 = IntCastChecked<unsigned_short,unsigned_int>(uStack_6c + param_2);
        lVar23 = (longlong)(int)uVar17 * 0x1c;
        *(ushort *)(lVar23 + 0xc + (longlong)FVar18) = uVar14;
        *(ushort *)(lVar23 + 0xe + (longlong)FVar18) = uStack_6a;
        *(ushort *)(lVar23 + 0x10 + (longlong)FVar18) = local_58;
        *(ushort *)(lVar23 + 0x14 + (longlong)FVar18) = uStack_54;
        *(ushort *)(lVar23 + 0x16 + (longlong)FVar18) = uStack_52;
        *(undefined8 *)(lVar23 + (longlong)FVar18) = 0xffffffffffffffff;
        *(int *)(lVar23 + 8 + (longlong)FVar18) = param_1;
        *(ushort *)(lVar23 + 0x12 + (longlong)FVar18) = uVar13;
        *(undefined1 *)(lVar23 + 0x18 + (longlong)FVar18) = 0;
      }
      else {
        uVar22 = 0;
        if ((int)uVar16 < iVar15) {
          uVar22 = uVar19;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          iVar15 = (*pcVar10)();
          return iVar15;
        }
        FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
        if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
          FVar18 = FVar9;
        }
        uVar13 = IntCastChecked<unsigned_short,unsigned_int>(param_4);
        lVar23 = (longlong)(int)uVar16 * 0x1c;
        uVar22 = ~uVar17 >> 0x1f;
        *(ushort *)(lVar23 + 0xc + (longlong)FVar18) = uStack_6c;
        *(ushort *)(lVar23 + 0x16 + (longlong)FVar18) = uVar13;
        *(undefined8 *)(lVar23 + (longlong)FVar18) = 0xffffffffffffffff;
        *(int *)(lVar23 + 8 + (longlong)FVar18) = param_1;
        *(ushort *)(lVar23 + 0xe + (longlong)FVar18) = uStack_6a;
        *(ushort *)(lVar23 + 0x12 + (longlong)FVar18) = uStack_56;
        *(ushort *)(lVar23 + 0x14 + (longlong)FVar18) = uStack_54;
        *(ushort *)(lVar23 + 0x10 + (longlong)FVar18) = local_58;
        *(undefined1 *)(lVar23 + 0x18 + (longlong)FVar18) = 0;
        uVar19 = 0;
        if ((int)uVar17 < (this->Nodes).ArrayNum) {
          uVar19 = uVar22;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          iVar15 = (*pcVar10)();
          return iVar15;
        }
        FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
        if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
          FVar18 = FVar9;
        }
        uVar13 = IntCastChecked<unsigned_short,unsigned_int>(uStack_52 - param_4);
        uVar14 = IntCastChecked<unsigned_short,unsigned_int>(local_58 + param_4);
        lVar23 = (longlong)(int)uVar17 * 0x1c;
        *(ushort *)(lVar23 + 0x10 + (longlong)FVar18) = uVar14;
        *(ushort *)(lVar23 + 0x12 + (longlong)FVar18) = uStack_56;
        *(ushort *)(lVar23 + 0xc + (longlong)FVar18) = uStack_6c;
        *(ushort *)(lVar23 + 0x14 + (longlong)FVar18) = uStack_54;
        *(undefined8 *)(lVar23 + (longlong)FVar18) = 0xffffffffffffffff;
        *(int *)(lVar23 + 8 + (longlong)FVar18) = param_1;
        *(ushort *)(lVar23 + 0xe + (longlong)FVar18) = uStack_6a;
        *(ushort *)(lVar23 + 0x16 + (longlong)FVar18) = uVar13;
        *(undefined1 *)(lVar23 + 0x18 + (longlong)FVar18) = 0;
      }
    }
    else if (uVar3 - param_4 < uVar14 - param_3) {
      uVar22 = 0;
      if ((int)uVar16 < iVar15) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        iVar15 = (*pcVar10)();
        return iVar15;
      }
      FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar18 = FVar9;
      }
      uVar13 = IntCastChecked<unsigned_short,unsigned_int>(param_3);
      lVar23 = (longlong)(int)uVar16 * 0x1c;
      uVar22 = ~uVar17 >> 0x1f;
      *(ushort *)(lVar23 + 0x14 + (longlong)FVar18) = uVar13;
      *(ushort *)(lVar23 + 0xc + (longlong)FVar18) = uStack_6c;
      *(ushort *)(lVar23 + 0x16 + (longlong)FVar18) = uStack_52;
      *(ushort *)(lVar23 + 0x10 + (longlong)FVar18) = local_58;
      *(ushort *)(lVar23 + 0x12 + (longlong)FVar18) = uStack_56;
      *(undefined8 *)(lVar23 + (longlong)FVar18) = 0xffffffffffffffff;
      *(int *)(lVar23 + 8 + (longlong)FVar18) = param_1;
      *(ushort *)(lVar23 + 0xe + (longlong)FVar18) = uStack_6a;
      *(undefined1 *)(lVar23 + 0x18 + (longlong)FVar18) = 0;
      uVar19 = 0;
      if ((int)uVar17 < (this->Nodes).ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        iVar15 = (*pcVar10)();
        return iVar15;
      }
      FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar18 = FVar9;
      }
      uVar13 = IntCastChecked<unsigned_short,unsigned_int>(uStack_54 - param_3);
      uVar14 = IntCastChecked<unsigned_short,unsigned_int>(uStack_6a + param_3);
      lVar23 = (longlong)(int)uVar17 * 0x1c;
      *(ushort *)((uchar *)((longlong)FVar18 + 0xe) + lVar23) = uVar14;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x10) + lVar23) = local_58;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x12) + lVar23) = uStack_56;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x16) + lVar23) = uStack_52;
      *(undefined8 *)((longlong)FVar18 + lVar23) = 0xffffffffffffffff;
      *(int *)((uchar *)((longlong)FVar18 + 8) + lVar23) = param_1;
      *(ushort *)((uchar *)((longlong)FVar18 + 0xc) + lVar23) = uStack_6c;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x14) + lVar23) = uVar13;
      ((uchar *)((longlong)FVar18 + 0x18))[lVar23] = '\0';
    }
    else {
      uVar22 = 0;
      if ((int)uVar16 < iVar15) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        iVar15 = (*pcVar10)();
        return iVar15;
      }
      FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar18 = FVar9;
      }
      uVar13 = IntCastChecked<unsigned_short,unsigned_int>(param_4);
      lVar23 = (longlong)(int)uVar16 * 0x1c;
      uVar22 = ~uVar17 >> 0x1f;
      *(ushort *)(lVar23 + 0xc + (longlong)FVar18) = uStack_6c;
      *(ushort *)(lVar23 + 0x16 + (longlong)FVar18) = uVar13;
      *(undefined8 *)(lVar23 + (longlong)FVar18) = 0xffffffffffffffff;
      *(int *)(lVar23 + 8 + (longlong)FVar18) = param_1;
      *(ushort *)(lVar23 + 0xe + (longlong)FVar18) = uStack_6a;
      *(ushort *)(lVar23 + 0x12 + (longlong)FVar18) = uStack_56;
      *(ushort *)(lVar23 + 0x14 + (longlong)FVar18) = uStack_54;
      *(ushort *)(lVar23 + 0x10 + (longlong)FVar18) = local_58;
      *(undefined1 *)(lVar23 + 0x18 + (longlong)FVar18) = 0;
      uVar19 = 0;
      if ((int)uVar17 < (this->Nodes).ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        iVar15 = (*pcVar10)();
        return iVar15;
      }
      FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar18 = FVar9;
      }
      uVar13 = IntCastChecked<unsigned_short,unsigned_int>(uStack_52 - param_4);
      uVar14 = IntCastChecked<unsigned_short,unsigned_int>(local_58 + param_4);
      lVar23 = (longlong)(int)uVar17 * 0x1c;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x10) + lVar23) = uVar14;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x12) + lVar23) = uStack_56;
      *(ushort *)((uchar *)((longlong)FVar18 + 0xc) + lVar23) = uStack_6c;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x14) + lVar23) = uStack_54;
      *(undefined8 *)((longlong)FVar18 + lVar23) = 0xffffffffffffffff;
      *(int *)((uchar *)((longlong)FVar18 + 8) + lVar23) = param_1;
      *(ushort *)((uchar *)((longlong)FVar18 + 0xe) + lVar23) = uStack_6a;
      *(ushort *)((uchar *)((longlong)FVar18 + 0x16) + lVar23) = uVar13;
      ((uchar *)((longlong)FVar18 + 0x18))[lVar23] = '\0';
    }
    if (((uVar22 & (int)uVar17 < (this->Nodes).ArrayNum) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      iVar15 = (*pcVar10)();
      return iVar15;
    }
    FVar9 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar9 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar18 = FVar9;
    }
    lVar23 = (longlong)FVar18 + lVar23;
    iVar15 = (this->UnusedLeaves).ArrayNum;
    piVar20 = &(this->UnusedLeaves).ArrayMax;
    if (iVar15 == *piVar20) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&(this->UnusedLeaves).AllocatorInstance,piVar20);
    }
    (this->UnusedLeaves).ArrayNum = iVar15 + 1;
    uVar4 = *(undefined2 *)(lVar23 + 0x16);
    uVar5 = *(undefined2 *)(lVar23 + 0x12);
    uVar6 = *(undefined2 *)(lVar23 + 0x10);
    uVar7 = *(undefined2 *)(lVar23 + 0xe);
    uVar8 = *(undefined2 *)(lVar23 + 0xc);
    pFVar21 = (this->UnusedLeaves).AllocatorInstance.Data + (longlong)iVar15 * 0x10;
    *(undefined2 *)(pFVar21 + 8) = *(undefined2 *)(lVar23 + 0x14);
    *(undefined2 *)(pFVar21 + 10) = uVar4;
    *(undefined2 *)pFVar21 = uVar8;
    *(undefined2 *)(pFVar21 + 2) = uVar7;
    *(undefined2 *)(pFVar21 + 4) = uVar6;
    *(undefined2 *)(pFVar21 + 6) = uVar5;
    *(uint *)(pFVar21 + 0xc) = uVar17;
    param_1 = uVar16;
  }
  return -1;
}

// FindParentNode @ 144879b30

int __thiscall FTextureLayout3d::FindParentNode(FTextureLayout3d *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
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
  FVar5 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar5 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  return *(int *)((uchar *)((longlong)FVar5 + 8) + (longlong)param_1 * 0x1c);
}

// IsNodeUsed @ 144888a70

bool __thiscall FTextureLayout3d::IsNodeUsed(FTextureLayout3d *this,int param_1)

{
  TArray<FTextureLayout3d::FTextureLayoutNode3d,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar6;
  uint uVar7;
  longlong lVar8;
  
  pTVar1 = &this->Nodes;
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar5 = uVar7;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FVar6 = (this->Nodes).AllocatorInstance.SecondaryData;
  lVar8 = (longlong)param_1 * 0x1c;
  if (FVar6 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar6 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
  }
  if (*(int *)((longlong)FVar6 + lVar8) != -1) {
    uVar5 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar6 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar6 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    }
    bVar3 = IsNodeUsed(this,*(int *)((longlong)FVar6 + lVar8));
    if (bVar3) {
      return true;
    }
    uVar5 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar6 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar6 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    }
    bVar3 = IsNodeUsed(this,*(int *)((uchar *)((longlong)FVar6 + 4) + lVar8));
    if (bVar3) {
      return true;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar5 = uVar7;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FVar6 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar6 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
  }
  if (((uchar *)((longlong)FVar6 + 0x18))[lVar8] != '\0') {
    return true;
  }
  return false;
}

// RemoveChildren @ 144891410

void __thiscall FTextureLayout3d::RemoveChildren(FTextureLayout3d *this,int param_1)

{
  TArray<FTextureLayout3d::FTextureLayoutNode3d,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FTextureLayout3d::FUnusedLeaf,TSizedDefaultAllocator<32>_> *pTVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int *piVar20;
  int local_58;
  int local_54 [5];
  
  uVar14 = 0;
  pTVar1 = &this->Nodes;
  uVar19 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  uVar9 = uVar8;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar9 = uVar19;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
  iVar10 = (this->Nodes).ArrayNum;
  lVar18 = (longlong)param_1 * 0x1c;
  if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
  }
  if (*(int *)((longlong)FVar12 + lVar18) == -1) {
    if (param_1 < iVar10) {
      uVar8 = uVar19;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    }
    if ((*(int *)((uchar *)((longlong)FVar12 + 4) + lVar18) != -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Nodes[NodeIndex].ChildB == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout3d.h"
                           ,0x1fc,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    uVar9 = uVar8;
    if (param_1 < iVar10) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    }
    if ((*(int *)((uchar *)((longlong)FVar12 + 4) + lVar18) == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Nodes[NodeIndex].ChildB != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout3d.h"
                           ,0x200,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar8 = uVar19;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    }
    RemoveChildren(this,*(int *)((longlong)FVar12 + lVar18));
    uVar8 = 0;
    uVar9 = uVar8;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    }
    RemoveChildren(this,*(int *)((uchar *)((longlong)FVar12 + 4) + lVar18));
    uVar9 = uVar8;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    pTVar2 = &this->FreeNodeIndices;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    }
    local_58 = *(int *)((longlong)FVar12 + lVar18);
    if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar5 + (longlong)(this->FreeNodeIndices).ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->FreeNodeIndices).ArrayNum;
    piVar20 = &(this->FreeNodeIndices).ArrayMax;
    if (iVar10 == *piVar20) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar20);
    }
    (this->FreeNodeIndices).ArrayNum = iVar10 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_58;
    if (0 < (this->UnusedLeaves).ArrayNum) {
      pTVar3 = &this->UnusedLeaves;
      uVar16 = uVar14;
      uVar15 = uVar14;
      do {
        uVar13 = (uint)uVar16;
        uVar17 = ~uVar13 >> 0x1f;
        uVar9 = uVar8;
        if ((int)uVar13 < (this->UnusedLeaves).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)((pTVar3->AllocatorInstance).Data + uVar15 + 0xc) == local_58) {
          if ((int)uVar13 < (this->UnusedLeaves).ArrayNum) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = (this->UnusedLeaves).ArrayNum;
          iVar11 = ~uVar13 + iVar10;
          pFVar5 = (pTVar3->AllocatorInstance).Data;
          if (1 < iVar11) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            memmove(pFVar5 + (longlong)(int)uVar13 * 0x10,
                    pFVar5 + (longlong)(iVar10 - iVar11) * 0x10,(longlong)iVar11 << 4);
          }
          piVar20 = &(this->UnusedLeaves).ArrayNum;
          *piVar20 = *piVar20 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&pTVar3->AllocatorInstance,(this->UnusedLeaves).ArrayNum,
                     &(this->UnusedLeaves).ArrayMax);
          break;
        }
        uVar16 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0x10;
      } while ((int)(uVar13 + 1) < (this->UnusedLeaves).ArrayNum);
    }
    piVar20 = &(this->FreeNodeIndices).ArrayMax;
    uVar8 = 0;
    uVar9 = uVar8;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
    }
    local_54[0] = *(int *)((uchar *)((longlong)FVar12 + 4) + lVar18);
    if (((pFVar5 <= (FScriptContainerElement *)local_54) &&
        ((FScriptContainerElement *)local_54 < pFVar5 + (longlong)*piVar20 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->FreeNodeIndices).ArrayNum;
    if (iVar10 == *piVar20) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar20);
    }
    (this->FreeNodeIndices).ArrayNum = iVar10 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_54[0];
    if (0 < (this->UnusedLeaves).ArrayNum) {
      pTVar3 = &this->UnusedLeaves;
      uVar16 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar17 = ~uVar13 >> 0x1f;
        uVar9 = uVar8;
        if ((int)uVar13 < (this->UnusedLeaves).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)((pTVar3->AllocatorInstance).Data + uVar16 + 0xc) == local_54[0]) {
          uVar9 = uVar8;
          if ((int)uVar13 < (this->UnusedLeaves).ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (this->UnusedLeaves).ArrayNum;
          pFVar5 = (pTVar3->AllocatorInstance).Data;
          iVar10 = ~uVar13 + iVar11;
          if (1 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            memmove(pFVar5 + (longlong)(int)uVar13 * 0x10,
                    pFVar5 + (longlong)(iVar11 - iVar10) * 0x10,(longlong)iVar10 << 4);
          }
          piVar20 = &(this->UnusedLeaves).ArrayNum;
          *piVar20 = *piVar20 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&pTVar3->AllocatorInstance,(this->UnusedLeaves).ArrayNum,
                     &(this->UnusedLeaves).ArrayMax);
          break;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar16 = uVar16 + 0x10;
      } while ((int)(uVar13 + 1) < (this->UnusedLeaves).ArrayNum);
    }
    uVar9 = uVar8;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar9 = uVar19;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
    }
    *(undefined4 *)((longlong)FVar12 + lVar18) = 0xffffffff;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar8 = uVar19;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar12 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
    }
    puVar4 = (uchar *)((longlong)FVar12 + 4) + lVar18;
    puVar4[0] = 0xff;
    puVar4[1] = 0xff;
    puVar4[2] = 0xff;
    puVar4[3] = 0xff;
  }
  return;
}

// RemoveElement @ 144891f10

bool __thiscall
FTextureLayout3d::RemoveElement
          (FTextureLayout3d *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6)

{
  TArray<FTextureLayout3d::FTextureLayoutNode3d,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TMap<UE::Math::TIntVector3<int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>_>
  *this_00;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar15;
  undefined1 *puVar16;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar17;
  uint *puVar18;
  undefined1 *puVar19;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar20;
  uint uVar21;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar25;
  longlong lVar26;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar27;
  uint local_res10;
  uint local_res18;
  TIntVector3<int>_u_0 local_48;
  
  this_00 = &this->UsedLeaves;
  local_48._s_0.X = param_1;
  local_48._s_0.Y = param_2;
  local_48._s_0.Z = param_3;
  uVar12 = FCrc::MemCrc_DEPRECATED(&local_48,0xc,0);
  uVar12 = TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<UE::Math::TIntVector3<int>_>
                     ((TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
                       *)this_00,uVar12,(TIntVector3<int> *)&local_48._s_0);
  if (uVar12 == 0xffffffff) {
    return false;
  }
  lVar26 = (longlong)(int)uVar12 * 0x18;
  local_res10 = *(uint *)(lVar26 + 0xc + *(longlong *)&this_00->field_0x0);
  if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&(this->UsedLeaves).field_0x28)) {
    if ((*(int *)&(this->UsedLeaves).field_0x28 <= (int)uVar12) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    puVar16 = *(undefined1 **)&(this->UsedLeaves).field_0x20;
    puVar19 = &(this->UsedLeaves).field_0x10;
    if (puVar16 != (undefined1 *)0x0) {
      puVar19 = puVar16;
    }
    if ((*(uint *)(puVar19 + (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar12 & 0x1f) & 1) != 0) goto LAB_144892009;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar10) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
LAB_144892009:
  puVar16 = *(undefined1 **)&(this->UsedLeaves).field_0x40;
  lVar8 = *(longlong *)&this_00->field_0x0;
  if (puVar16 == (undefined1 *)0x0) {
    puVar16 = &(this->UsedLeaves).field_0x38;
  }
  puVar18 = (uint *)(puVar16 + (longlong)*(int *)(lVar8 + 0x14 + lVar26) * 4);
  do {
    uVar21 = *puVar18;
    if (uVar21 == 0xffffffff) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NextElementIndex != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                          ,0x2b5,L"Corrupt hash");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
    }
    else if (uVar21 == uVar12) {
      *puVar18 = *(uint *)(lVar8 + 0x10 + lVar26);
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,uVar12,1);
      if (local_res10 == 0xffffffff) {
        return false;
      }
      if (this->bAlignByFour != false) {
        param_4 = param_4 + 3 & 0xfffffffc;
      }
      pTVar1 = &this->Nodes;
      uVar21 = ~local_res10 >> 0x1f;
      uVar12 = 0;
      if ((int)local_res10 < (this->Nodes).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      lVar26 = (longlong)(int)local_res10 * 0x1c;
      if (FVar15 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar15 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      }
      if (*(ushort *)((uchar *)((longlong)FVar15 + 0x12) + lVar26) == param_4) {
        if (this->bAlignByFour != false) {
          param_5 = param_5 + 3 & 0xfffffffc;
        }
        uVar12 = 0;
        if ((int)local_res10 < (this->Nodes).ArrayNum) {
          uVar12 = uVar21;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
          FVar15 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
        }
        if (*(ushort *)((uchar *)((longlong)FVar15 + 0x14) + lVar26) != param_5) goto LAB_1448921ff;
        if (this->bAlignByFour != false) {
          param_6 = param_6 + 3 & 0xfffffffc;
        }
        uVar12 = 0;
        if ((int)local_res10 < (this->Nodes).ArrayNum) {
          uVar12 = uVar21;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
          FVar15 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
        }
        if (*(ushort *)((uchar *)((longlong)FVar15 + 0x16) + lVar26) != param_6) goto LAB_1448921ff;
      }
      else {
LAB_1448921ff:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Nodes[FoundNodeIndex].SizeX == (bAlignByFour ? ((ElementSizeX + 3u) & ~3u) : ElementSizeX) && Nodes[FoundNodeIndex].SizeY == (bAlignByFour ? ((ElementSizeY + 3u) & ~3u) : ElementSizeY) && Nodes[FoundNodeIndex].SizeZ == (bAlignByFour ? ((ElementSizeZ + 3u) & ~3u) : ElementSizeZ)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout3d.h"
                            ,0x93,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
      }
      uVar12 = 0;
      if ((int)local_res10 < (this->Nodes).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar15 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      }
      ((uchar *)((longlong)FVar15 + 0x18))[lVar26] = '\0';
      uVar12 = FindParentNode(this,local_res10);
      local_res18 = 0xffffffff;
      if (uVar12 == 0xffffffff) goto LAB_144892773;
      break;
    }
    puVar18 = (uint *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)uVar21 * 0x18 + 0x10);
  } while( true );
  while( true ) {
    uVar13 = 0;
    if ((int)uVar12 < (this->Nodes).ArrayNum) {
      uVar13 = uVar24;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar17 = FVar15;
    }
    if (*(char *)((longlong)(int)uVar12 * 0x1c + 0x18 + (longlong)FVar17) != '\0') break;
    uVar12 = 0;
    if ((int)uVar21 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar21 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar17 = FVar15;
    }
    uVar12 = *(uint *)((longlong)(int)uVar21 * 0x1c + 4 + (longlong)FVar17);
    lVar26 = (longlong)(int)uVar12;
    uVar13 = 0;
    if ((int)uVar12 < (this->Nodes).ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar17 = FVar15;
    }
    if (*(int *)(lVar26 * 0x1c + (longlong)FVar17) != -1) {
      uVar13 = 0;
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar17 = FVar15;
      }
      bVar10 = IsNodeUsed(this,*(int *)(lVar26 * 0x1c + (longlong)FVar17));
      if (bVar10) break;
      uVar13 = 0;
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar17 = FVar15;
      }
      bVar10 = IsNodeUsed(this,*(int *)(lVar26 * 0x1c + 4 + (longlong)FVar17));
      if (bVar10) break;
    }
    uVar13 = 0;
    if ((int)uVar12 < (this->Nodes).ArrayNum) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar17 = FVar15;
    }
    if (*(char *)(lVar26 * 0x1c + 0x18 + (longlong)FVar17) != '\0') break;
    uVar12 = 0;
    if ((int)uVar21 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar21 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar17 = FVar15;
    }
    uVar12 = *(uint *)((longlong)(int)uVar21 * 0x1c + 8 + (longlong)FVar17);
    local_res18 = uVar21;
    if (uVar12 == 0xffffffff) break;
    uVar21 = uVar12;
    uVar12 = 0;
    if ((int)uVar21 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar21 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar17 = FVar15;
    }
    uVar12 = *(uint *)((longlong)(int)uVar21 * 0x1c + (longlong)FVar17);
    uVar24 = ~uVar12 >> 0x1f;
    uVar13 = 0;
    if ((int)uVar12 < (this->Nodes).ArrayNum) {
      uVar13 = uVar24;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return (bool)uVar11;
    }
    FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
    if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FVar17 = FVar15;
    }
    lVar26 = (longlong)(int)uVar12 * 0x1c;
    if (*(int *)((longlong)FVar17 + lVar26) != -1) {
      uVar13 = 0;
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar13 = uVar24;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar17 = FVar15;
      }
      bVar10 = IsNodeUsed(this,*(int *)((longlong)FVar17 + lVar26));
      if (bVar10) break;
      uVar13 = 0;
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar13 = uVar24;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)pTVar1;
      if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
        FVar17 = FVar15;
      }
      bVar10 = IsNodeUsed(this,*(int *)((uchar *)((longlong)FVar17 + 4) + lVar26));
      if (bVar10) break;
    }
  }
  if (local_res18 != 0xffffffff) {
    RemoveChildren(this,local_res18);
    local_res10 = local_res18;
  }
LAB_144892773:
  uVar21 = ~local_res10 >> 0x1f;
  uVar12 = 0;
  if ((int)local_res10 < (this->Nodes).ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar15 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  uVar12 = 0;
  if ((int)local_res10 < (this->Nodes).ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar17 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar17 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  uVar12 = 0;
  if ((int)local_res10 < (this->Nodes).ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar25 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar25 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar25 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  uVar12 = 0;
  if ((int)local_res10 < (this->Nodes).ArrayNum) {
    uVar12 = ~local_res10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar27 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar27 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar27 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  uVar12 = 0;
  if ((int)local_res10 < (this->Nodes).ArrayNum) {
    uVar12 = ~local_res10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar22 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar22 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar22 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  uVar12 = 0;
  if ((int)local_res10 < (this->Nodes).ArrayNum) {
    uVar12 = ~local_res10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar20 = (this->Nodes).AllocatorInstance.SecondaryData;
  piVar2 = &(this->UnusedLeaves).ArrayMax;
  if (FVar20 == (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FVar20 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
  }
  iVar14 = (this->UnusedLeaves).ArrayNum;
  if (iVar14 == *piVar2) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&(this->UnusedLeaves).AllocatorInstance,piVar2);
  }
  lVar26 = (longlong)(int)local_res10 * 0x1c;
  (this->UnusedLeaves).ArrayNum = iVar14 + 1;
  pFVar23 = (this->UnusedLeaves).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
  uVar3 = *(undefined2 *)(lVar26 + 0x16 + (longlong)FVar15);
  uVar4 = *(undefined2 *)(lVar26 + 0x14 + (longlong)FVar17);
  uVar5 = *(undefined2 *)(lVar26 + 0x12 + (longlong)FVar25);
  uVar6 = *(undefined2 *)(lVar26 + 0x10 + (longlong)FVar27);
  uVar7 = *(undefined2 *)(lVar26 + 0xe + (longlong)FVar22);
  *(undefined2 *)pFVar23 = *(undefined2 *)(lVar26 + 0xc + (longlong)FVar20);
  *(uint *)(pFVar23 + 0xc) = local_res10;
  *(undefined2 *)(pFVar23 + 2) = uVar7;
  *(undefined2 *)(pFVar23 + 4) = uVar6;
  *(undefined2 *)(pFVar23 + 6) = uVar5;
  *(undefined2 *)(pFVar23 + 8) = uVar4;
  *(undefined2 *)(pFVar23 + 10) = uVar3;
  if (this->bAllowShrink != false) {
    uVar12 = 0;
    this->SizeX = this->MinSizeX;
    this->SizeY = this->MinSizeY;
    this->SizeZ = this->MinSizeZ;
    if (0 < (this->Nodes).ArrayNum) {
      lVar26 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar12 < (this->Nodes).ArrayNum) {
          uVar21 = ~uVar12 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar15 = (this->Nodes).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)&this->Nodes;
        if (FVar15 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
          FVar17 = FVar15;
        }
        if (*(char *)(lVar26 + 0x18 + (longlong)FVar17) != '\0') {
          UpdateSize(this,(uint)*(ushort *)(lVar26 + 0x12 + (longlong)FVar17) +
                          (uint)*(ushort *)(lVar26 + 0xc + (longlong)FVar17),
                     (uint)*(ushort *)(lVar26 + 0x14 + (longlong)FVar17) +
                     (uint)*(ushort *)(lVar26 + 0xe + (longlong)FVar17),
                     (uint)*(ushort *)(lVar26 + 0x16 + (longlong)FVar17) +
                     (uint)*(ushort *)(lVar26 + 0x10 + (longlong)FVar17));
        }
        uVar12 = uVar12 + 1;
        lVar26 = lVar26 + 0x1c;
      } while ((int)uVar12 < (this->Nodes).ArrayNum);
    }
  }
  return true;
}

// UpdateSize @ 1448b16c0

void __thiscall
FTextureLayout3d::UpdateSize(FTextureLayout3d *this,uint param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (this->bPowerOfTwoSize != false) {
    uVar3 = 1;
    if (param_1 != 0) {
      uVar3 = param_1;
    }
    uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_1 = 1 << ((byte)lVar2 & 0x1f);
    uVar3 = 1;
    if (param_2 != 0) {
      uVar3 = param_2;
    }
    uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_2 = 1 << ((byte)lVar2 & 0x1f);
    uVar3 = 1;
    if (param_3 != 0) {
      uVar3 = param_3;
    }
    uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_3 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (param_3 < this->SizeZ) {
    param_3 = this->SizeZ;
  }
  if (param_2 < this->SizeY) {
    param_2 = this->SizeY;
  }
  if (param_1 < this->SizeX) {
    param_1 = this->SizeX;
  }
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->SizeZ = param_3;
  return;
}

