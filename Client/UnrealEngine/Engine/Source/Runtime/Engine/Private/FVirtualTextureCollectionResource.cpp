// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FVirtualTextureCollectionResource @ 1489b4cc0

FVirtualTextureCollectionResource * __thiscall
FVirtualTextureCollectionResource::FVirtualTextureCollectionResource
          (FVirtualTextureCollectionResource *this,UVirtualTextureCollection *param_1)

{
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  void *_Src;
  EPixelFormat EVar5;
  FTextureResource *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  FTextureCollectionResource::FTextureCollectionResource
            ((FTextureCollectionResource *)this,(UTextureCollection *)param_1);
  pTVar1 = &this->Textures;
  this->PageTable = (FRHITexture *)0x0;
  this->_padding_ = (longlong)&___7FVirtualTextureCollectionResource__6B_;
  (this->VirtualUniforms)._padding_ =
       (longlong)&___7__TResourceArray_UFIndirectVirtualTextureEntry_HLSL_UE___0A___6B_;
  piVar2 = &(this->Textures).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  *piVar2 = 0;
  (this->BuildSettings).TileSize = 0;
  (this->BuildSettings).TileBorderSize = 0;
  (this->VirtualCollectionRHI).Reference = (FRHIBuffer *)0x0;
  (this->VirtualCollectionRHISRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ProducerHandle).PackedValue = 0;
  (this->VirtualUniforms)._padding_ = 0;
  (this->VirtualUniforms)._padding_ = 0;
  (this->VirtualUniforms).bNeedsCPUAccess = false;
  this->PhysicalTextureSRV = (FRHIShaderResourceView *)0x0;
  this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  this->Format = PF_Unknown;
  this->bIsSRGB = false;
  this->bAllowFormatConversion = false;
  *(undefined1 *)&this->_padding_ = 0;
  if (pTVar1 != (TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)&param_1->_padding_) {
    iVar4 = (int)param_1->_padding_;
    _Src = (void *)param_1->_padding_;
    (this->Textures).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  this->bIsSRGB = param_1->bIsSRGB;
  this->bAllowFormatConversion = param_1->bAllowFormatConversion;
  FVirtualTextureBuildSettings::Init(&this->BuildSettings);
  if (this->Format == PF_Unknown) {
    if (this->bAllowFormatConversion == false) {
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      iVar4 = (this->Textures).ArrayNum;
      pFVar3 = pFVar9 + (longlong)iVar4 * 8;
      do {
        if ((this->Textures).ArrayNum != iVar4) {
          `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar9 == pFVar3) {
          this->Format = PF_R8G8B8A8;
          this->bIsSRGB = true;
          goto LAB_1489b4e91;
        }
        if ((*(UTexture **)pFVar9 != (UTexture *)0x0) &&
           (pFVar6 = UTexture::GetResource(*(UTexture **)pFVar9), pFVar6 != (FTextureResource *)0x0)
           ) {
          plVar7 = (longlong *)(**(code **)(pFVar6->_padding_ + 0x98))(pFVar6);
          if (plVar7 == (longlong *)0x0) {
            lVar8 = (**(code **)(pFVar6->_padding_ + 0x58))(pFVar6);
            if (lVar8 == 0) goto LAB_1489b4e68;
            EVar5 = *(EPixelFormat *)(lVar8 + 0x94);
          }
          else {
            EVar5 = (**(code **)(*plVar7 + 0xa0))(plVar7,0);
          }
          if (EVar5 != PF_Unknown) goto LAB_1489b4e6e;
        }
LAB_1489b4e68:
        pFVar9 = pFVar9 + 8;
      } while( true );
    }
    FindConservativeFormat(this);
  }
LAB_1489b4e91:
  if (this->Format == PF_BC7) {
    this->bIsSRGB = false;
  }
  (param_1->RuntimePixelFormat).Value = this->Format;
  return this;
LAB_1489b4e6e:
  this->Format = EVar5;
  this->bIsSRGB = *(bool *)((longlong)&pFVar6->_padding_ + 6);
  goto LAB_1489b4e91;
}

// ~FVirtualTextureCollectionResource @ 1489ba010

void __thiscall
FVirtualTextureCollectionResource::~FVirtualTextureCollectionResource
          (FVirtualTextureCollectionResource *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  FScriptContainerElement *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->VirtualUniforms)._padding_);
  (this->VirtualUniforms)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this_00 = (this->VirtualCollectionRHISRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->VirtualCollectionRHI).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ComputeLayout @ 1489d1b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVirtualTextureCollectionResource::ComputeLayout
          (FVirtualTextureCollectionResource *this,FTextureCollectionProducerData *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  FTextureCollectionProducerData *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FTextureResource *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStack_158 [32];
  undefined1 local_108 [4];
  uint local_104;
  uint local_100;
  uint uStack_fc;
  FTextureCollectionProducerData *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  FScriptContainerElement *local_e0;
  FTextureLayout local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar16 = (this->Textures).AllocatorInstance.Data;
  uVar15 = (this->Textures).ArrayNum;
  uVar12 = (ulonglong)(int)uVar15;
  pFVar14 = pFVar16 + uVar12 * 8;
  local_d8.MinSizeX = 0;
  local_d8.MinSizeY = 0;
  local_d8.SizeX = 0;
  local_d8.SizeY = 0;
  local_d8.AspectRatio = None;
  local_d8.bPowerOfTwoSize = false;
  local_d8.bAlignByFour = true;
  local_d8.Nodes.AllocatorInstance.SecondaryData =
       (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0;
  local_d8.Nodes.ArrayMax = 5;
  local_d8.Nodes.ArrayNum = 1;
  local_d8.Nodes.AllocatorInstance.InlineData[0] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[1] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[2] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[3] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[4] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[5] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[6] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[7] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[8] = '\0';
  local_d8.Nodes.AllocatorInstance.InlineData[9] = '\0';
  local_d8.Nodes.AllocatorInstance.InlineData[10] = '\0';
  local_d8.Nodes.AllocatorInstance.InlineData[0xb] = '\0';
  local_d8.Nodes.AllocatorInstance.InlineData[0xc] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[0xd] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[0xe] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[0xf] = 0xff;
  local_d8.Nodes.AllocatorInstance.InlineData[0x10] = '\0';
  uVar17 = uVar15;
  local_104 = uVar15;
  local_f8 = param_1;
  local_e0 = pFVar14;
  do {
    if ((this->Textures).ArrayNum != (int)uVar12) {
      local_108[0] = 0;
      `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (pFVar16 == pFVar14) {
      uVar15 = local_d8.SizeX;
      if (local_d8.SizeX == 0) {
        uVar15 = 1;
      }
      (local_f8->BlockCount).field0_0x0._s_0.X = uVar15;
      uVar15 = local_d8.SizeY;
      if (local_d8.SizeY == 0) {
        uVar15 = 1;
      }
      (local_f8->BlockCount).field0_0x0._s_0.Y = uVar15;
      if (local_d8.Nodes.AllocatorInstance.SecondaryData !=
          (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
        FMemory::Free((void *)local_d8.Nodes.AllocatorInstance.SecondaryData);
      }
      return;
    }
    if (*(UTexture **)pFVar16 != (UTexture *)0x0) {
      pFVar10 = UTexture::GetResource(*(UTexture **)pFVar16);
      if (pFVar10 != (FTextureResource *)0x0) {
        uVar7 = (this->BuildSettings).TileSize;
        iVar6 = (**(code **)(pFVar10->_padding_ + 0x30))(pFVar10);
        uVar7 = (iVar6 + -1 + uVar7) / uVar7;
        uVar8 = (this->BuildSettings).TileSize;
        uVar9 = 1;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        uVar12 = (ulonglong)(uVar9 - 1) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_f0 = (undefined4)lVar11;
        iVar6 = (**(code **)(pFVar10->_padding_ + 0x38))(pFVar10);
        uVar8 = (iVar6 + -1 + uVar8) / uVar8;
        uVar7 = 1;
        if (uVar8 != 0) {
          uVar7 = uVar8;
        }
        uVar12 = (ulonglong)(uVar7 - 1) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar8 = 1 << ((byte)lVar2 & 0x1f);
        local_ec = (undefined4)lVar2;
        uVar7 = 1 << ((byte)lVar11 & 0x1f);
        if ((uVar7 == 0) || (uVar8 == 0)) {
          uVar15 = 0;
          uVar17 = 0;
        }
        else {
          if (local_d8.bAlignByFour != false) {
            uVar7 = uVar7 + 3 & 0xfffffffc;
            uVar8 = uVar8 + 3 & 0xfffffffc;
          }
          uVar9 = FTextureLayout::AddSurfaceInner(&local_d8,0,uVar7,uVar8,false);
          if (uVar9 == 0xffffffff) {
            uVar9 = FTextureLayout::AddSurfaceInner(&local_d8,0,uVar7,uVar8,true);
            if (uVar9 == 0xffffffff) goto LAB_1489d1e2b;
          }
          uVar15 = 0;
          if ((int)uVar9 < local_d8.Nodes.ArrayNum) {
            uVar15 = ~uVar9 >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FVar13 = (ForElementType<FTextureLayout::FTextureLayoutNode>)&local_d8.Nodes;
          if (local_d8.Nodes.AllocatorInstance.SecondaryData !=
              (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
            FVar13 = local_d8.Nodes.AllocatorInstance.SecondaryData;
          }
          lVar11 = (longlong)(int)uVar9;
          uVar15 = (uint)*(ushort *)((uchar *)((longlong)FVar13 + 8) + lVar11 * 0x14);
          uVar17 = (uint)*(ushort *)((uchar *)((longlong)FVar13 + 10) + lVar11 * 0x14);
          ((uchar *)((longlong)FVar13 + 0x10))[lVar11 * 0x14] = '\x01';
          uVar7 = uVar15 + uVar7;
          uVar8 = uVar17 + uVar8;
          if (local_d8.bPowerOfTwoSize == false) {
            if (uVar7 < local_d8.SizeX) {
              uVar7 = local_d8.SizeX;
            }
            if (uVar8 < local_d8.SizeY) {
              uVar8 = local_d8.SizeY;
            }
            local_d8.SizeY = uVar8;
            local_d8.SizeX = uVar7;
          }
          else {
            uVar9 = 1;
            if (uVar7 != 0) {
              uVar9 = uVar7;
            }
            uVar12 = (ulonglong)(uVar9 - 1) * 2 + 1;
            lVar11 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar7 = 1 << ((byte)lVar11 & 0x1f);
            local_e8 = (undefined4)lVar11;
            if (uVar7 < local_d8.SizeX) {
              uVar7 = local_d8.SizeX;
            }
            uVar9 = 1;
            if (uVar8 != 0) {
              uVar9 = uVar8;
            }
            uVar12 = (ulonglong)(uVar9 - 1) * 2 + 1;
            lVar11 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar8 = 1 << ((byte)lVar11 & 0x1f);
            local_e4 = (undefined4)lVar11;
            if (uVar8 < local_d8.SizeY) {
              uVar8 = local_d8.SizeY;
            }
            local_d8.SizeY = uVar8;
            local_d8.SizeX = uVar7;
            if (local_d8.AspectRatio != None) {
              if (local_d8.AspectRatio == Force2To1) {
                local_d8.SizeX = uVar8 * 2;
                if (uVar8 * 2 < uVar7) {
                  local_d8.SizeX = uVar7;
                }
                local_d8.SizeY = local_d8.SizeX >> 1;
                if (local_d8.SizeX >> 1 < uVar8) {
                  local_d8.SizeY = uVar8;
                }
              }
              else if (local_d8.AspectRatio == ForceSquare) {
                if (uVar8 < uVar7) {
                  uVar8 = uVar7;
                }
                local_d8.SizeY = uVar8;
                local_d8.SizeX = uVar8;
              }
              else {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!\"Enclosing block should never be called\"",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureLayout.h"
                                   ,0x183,L"");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
            }
          }
        }
LAB_1489d1e2b:
        pFVar4 = local_f8;
        pFVar14 = (local_f8->BlockCoordinates).AllocatorInstance.Data;
        local_100 = uVar15;
        uStack_fc = uVar17;
        if ((pFVar14 <= (FScriptContainerElement *)&local_100) &&
           ((FScriptContainerElement *)&local_100 <
            pFVar14 + (longlong)(local_f8->BlockCoordinates).ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = (pFVar4->BlockCoordinates).ArrayNum;
        piVar1 = &(pFVar4->BlockCoordinates).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(pFVar4->BlockCoordinates).AllocatorInstance,piVar1);
        }
        (pFVar4->BlockCoordinates).ArrayNum = iVar6 + 1;
        *(ulonglong *)((pFVar4->BlockCoordinates).AllocatorInstance.Data + (longlong)iVar6 * 8) =
             CONCAT44(uStack_fc,local_100);
        pFVar14 = local_e0;
      }
    }
    uVar12 = (ulonglong)local_104;
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// CreateIndexTable @ 1489d4120

void __thiscall
FVirtualTextureCollectionResource::CreateIndexTable
          (FVirtualTextureCollectionResource *this,FTextureCollectionProducerData *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FTextureResource *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 local_58;
  
  pTVar1 = &param_1->BlockVirtualPageTable;
  uVar12 = (param_1->BlockCount).field0_0x0._s_0.Y * (param_1->BlockCount).field0_0x0._s_0.X;
  uVar15 = (ulonglong)uVar12;
  local_68[0] = 0xffffffff;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar2 = &(param_1->BlockVirtualPageTable).ArrayMax;
  (param_1->BlockVirtualPageTable).ArrayNum = 0;
  if (*piVar2 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (0 < (int)uVar12) {
    do {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_68) &&
          ((FScriptContainerElement *)local_68 < pFVar3 + (longlong)*piVar2 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (param_1->BlockVirtualPageTable).ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->BlockVirtualPageTable).ArrayNum = iVar7 + 1;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_68[0];
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  uVar12 = 0;
  if (0 < (this->Textures).ArrayNum) {
    local_60 = 0;
    do {
      lVar11 = local_60;
      uVar13 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->Textures).ArrayNum) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((this->Textures).AllocatorInstance.Data + lVar11) != 0) {
        uVar8 = 0;
        if ((int)uVar12 < (this->Textures).ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = UTexture::GetResource
                            (*(UTexture **)((this->Textures).AllocatorInstance.Data + lVar11));
        if (pFVar10 != (FTextureResource *)0x0) {
          uVar8 = (this->BuildSettings).TileSize;
          iVar7 = (**(code **)(pFVar10->_padding_ + 0x30))(pFVar10);
          uVar15 = (ulonglong)(iVar7 + -1 + uVar8) / (ulonglong)uVar8;
          uVar8 = (this->BuildSettings).TileSize;
          iVar7 = (**(code **)(pFVar10->_padding_ + 0x38))();
          uVar8 = (iVar7 + -1 + uVar8) / uVar8;
          uVar14 = 0;
          if ((int)uVar12 < (param_1->BlockCoordinates).ArrayNum) {
            uVar14 = uVar13;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = 0;
          uVar4 = *(undefined8 *)((param_1->BlockCoordinates).AllocatorInstance.Data + local_60);
          lVar11 = local_60;
          local_58 = uVar4;
          if (uVar8 != 0) {
            local_58._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
            iVar7 = local_58._4_4_;
            do {
              uVar14 = (iVar7 + uVar13) * (param_1->BlockCount).field0_0x0._s_0.X + (int)uVar4;
              uVar16 = uVar15;
              if ((int)uVar15 != 0) {
                do {
                  uVar9 = 0;
                  if ((int)uVar14 < (param_1->BlockVirtualPageTable).ArrayNum) {
                    uVar9 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar11 = (longlong)(int)uVar14;
                  if ((*(int *)((pTVar1->AllocatorInstance).Data + lVar11 * 4) != -1) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Data.BlockVirtualPageTable[RowOffset + X] == INDEX_NONE",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VirtualTextureCollection.cpp"
                                         ,0x266,L"Overlapping host index page table"), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar9 = 0;
                  if ((int)uVar14 < (param_1->BlockVirtualPageTable).ArrayNum) {
                    uVar9 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar14 = uVar14 + 1;
                  *(uint *)((pTVar1->AllocatorInstance).Data + lVar11 * 4) = uVar12;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
                iVar7 = local_58._4_4_;
              }
              uVar13 = uVar13 + 1;
              lVar11 = local_60;
            } while (uVar13 < uVar8);
          }
        }
      }
      local_60 = lVar11 + 8;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->Textures).ArrayNum);
  }
  return;
}

// FindConservativeFormat @ 1489e1fe0

void __thiscall
FVirtualTextureCollectionResource::FindConservativeFormat(FVirtualTextureCollectionResource *this)

{
  EPixelFormat EVar1;
  int iVar2;
  code *pcVar3;
  EPixelFormat EVar4;
  bool bVar5;
  bool bVar6;
  EPixelFormat EVar7;
  uint uVar8;
  FTextureResource *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  EPixelFormat *pEVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  byte bVar20;
  undefined1 local_res10 [8];
  int local_res18;
  FScriptContainerElement *local_res20;
  int iStack_60;
  int iStack_5c;
  
  pFVar19 = (this->Textures).AllocatorInstance.Data;
  EVar7 = PF_Unknown;
  iVar2 = (this->Textures).ArrayNum;
  bVar20 = false;
  iVar18 = 0;
  local_res18 = 0;
  local_res20 = pFVar19 + (longlong)iVar2 * 8;
  pFVar16 = local_res20;
  iVar17 = 0;
LAB_1489e2020:
  do {
    if ((this->Textures).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar19 == pFVar16) {
      if (iVar18 == 0) {
        if (EVar7 == PF_Unknown) {
          this->Format = PF_R8G8B8A8;
          this->bIsSRGB = true;
          return;
        }
        this->Format = EVar7;
      }
      else {
        EVar7 = PF_A32B32G32R32F;
        pEVar12 = &GPixelFormats[0].UnrealFormat;
        lVar11 = 0x5e;
        iStack_5c = SUB84(GPixelFormats[1]._24_8_,4);
        iStack_60 = (int)GPixelFormats[1]._24_8_;
        do {
          if ((pEVar12[0x20] & 1) != 0) {
            EVar1 = *pEVar12;
            switch(EVar1) {
            case PF_DXT1:
            case PF_DXT3:
            case PF_DXT5:
            case PF_BC5:
            case PF_BC4:
            case PF_BC6H:
            case PF_BC7:
              break;
            default:
              if (((iVar18 <= *(int *)(pEVar12 + 0x14)) && (iVar17 <= *(int *)(pEVar12 + 0x10))) &&
                 ((*(int *)(pEVar12 + 0x14) < iStack_5c || (*(int *)(pEVar12 + 0x10) < iStack_60))))
              {
                iStack_60 = GPixelFormats[EVar1].BlockBytes;
                iStack_5c = GPixelFormats[EVar1].NumComponents;
                EVar7 = EVar1;
              }
            }
          }
          pEVar12 = pEVar12 + 0x30;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        this->Format = EVar7;
      }
      this->bIsSRGB = (bool)bVar20;
      return;
    }
    EVar1 = EVar7;
    if ((*(UTexture **)pFVar19 != (UTexture *)0x0) &&
       (pFVar9 = UTexture::GetResource(*(UTexture **)pFVar19), pFVar16 = local_res20,
       pFVar9 != (FTextureResource *)0x0)) {
      bVar20 = bVar20 | *(byte *)((longlong)&pFVar9->_padding_ + 6);
      plVar10 = (longlong *)(**(code **)(pFVar9->_padding_ + 0x98))(pFVar9);
      if (plVar10 == (longlong *)0x0) {
        lVar11 = (**(code **)(pFVar9->_padding_ + 0x58))(pFVar9);
        pFVar16 = local_res20;
        if (lVar11 == 0) goto LAB_1489e20bf;
        EVar4 = *(EPixelFormat *)(lVar11 + 0x94);
      }
      else {
        EVar4 = (**(code **)(*plVar10 + 0xa0))(plVar10,0);
      }
      pFVar16 = local_res20;
      iVar17 = local_res18;
      if (((EVar4 != PF_Unknown) && (EVar4 != EVar7)) && (EVar1 = EVar4, EVar7 != PF_Unknown)) {
        bVar5 = IsBlockCompressedFormat(EVar4);
        bVar6 = IsBlockCompressedFormat(EVar7);
        if (bVar6) {
          if (bVar5) {
            uVar15 = 0;
            pEVar12 = Ascending;
            do {
              if (*pEVar12 == EVar4) goto LAB_1489e212d;
              uVar15 = uVar15 + 1;
              pEVar12 = pEVar12 + 1;
            } while (uVar15 < 7);
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VirtualTextureCollection.cpp"
                               ,0x343,L"Unexpected block compressed format");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar15 = 0;
LAB_1489e212d:
            uVar8 = 0;
            pEVar12 = Ascending;
            do {
              if (*pEVar12 == EVar7) goto LAB_1489e216d;
              uVar8 = uVar8 + 1;
              pEVar12 = pEVar12 + 1;
            } while (uVar8 < 7);
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VirtualTextureCollection.cpp"
                               ,0x343,L"Unexpected block compressed format");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = 0;
LAB_1489e216d:
            if ((int)uVar8 < (int)uVar15) {
              EVar7 = EVar4;
            }
            pFVar19 = pFVar19 + 8;
            pFVar16 = local_res20;
            iVar17 = local_res18;
            goto LAB_1489e2020;
          }
          EVar7 = GetBlockCompressionSourceFormat(EVar7);
        }
        else if (bVar5) {
          EVar4 = GetBlockCompressionSourceFormat(EVar4);
        }
        iVar14 = GPixelFormats[EVar4].NumComponents;
        iVar13 = iVar14;
        if (iVar14 < iVar18) {
          iVar13 = iVar18;
        }
        iVar17 = GPixelFormats[EVar4].BlockBytes;
        iVar18 = iVar14;
        if (iVar14 < iVar13) {
          iVar18 = iVar13;
        }
        iVar14 = iVar17;
        if (iVar17 < local_res18) {
          iVar14 = local_res18;
        }
        if (iVar17 < iVar14) {
          iVar17 = iVar14;
        }
        pFVar19 = pFVar19 + 8;
        pFVar16 = local_res20;
        local_res18 = iVar17;
        goto LAB_1489e2020;
      }
    }
LAB_1489e20bf:
    EVar7 = EVar1;
    pFVar19 = pFVar19 + 8;
  } while( true );
}

// FindFirstFormat @ 1489e2340

void __thiscall
FVirtualTextureCollectionResource::FindFirstFormat(FVirtualTextureCollectionResource *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EPixelFormat EVar3;
  FTextureResource *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->Textures).AllocatorInstance.Data;
  iVar2 = (this->Textures).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  do {
    if ((this->Textures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar1) {
      this->Format = PF_R8G8B8A8;
      this->bIsSRGB = true;
      return;
    }
    if ((*(UTexture **)pFVar7 != (UTexture *)0x0) &&
       (pFVar4 = UTexture::GetResource(*(UTexture **)pFVar7), pFVar4 != (FTextureResource *)0x0)) {
      plVar5 = (longlong *)(**(code **)(pFVar4->_padding_ + 0x98))(pFVar4);
      if (plVar5 == (longlong *)0x0) {
        lVar6 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4);
        if (lVar6 == 0) goto LAB_1489e23cb;
        EVar3 = *(EPixelFormat *)(lVar6 + 0x94);
      }
      else {
        EVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,0);
      }
      if (EVar3 != PF_Unknown) {
        this->Format = EVar3;
        this->bIsSRGB = *(bool *)((longlong)&pFVar4->_padding_ + 6);
        return;
      }
    }
LAB_1489e23cb:
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// FormatCollectionError @ 1489e4300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVirtualTextureCollectionResource::FormatCollectionError
          (FVirtualTextureCollectionResource *this,wchar_t *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  if (1 < (byte)LogVirtualTextureCollection._0_1_) {
    uVar3 = 0;
    if ((int)param_2 < (this->Textures).ArrayNum) {
      uVar3 = ~param_2 >> 0x1f;
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
    local_res20 = *(FName *)(*(longlong *)
                              ((this->Textures).AllocatorInstance.Data + (longlong)(int)param_2 * 8)
                            + 0x18);
    ::FName::ToString(&local_res20,&local_28);
    ::FName::ToString((FName *)((longlong)&this->_padding_ + 4),&local_38);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogVirtualTextureCollection);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetVirtualPackedUniform @ 1489f0830

FIndirectVirtualTextureUniform * __thiscall
FVirtualTextureCollectionResource::GetVirtualPackedUniform
          (FVirtualTextureCollectionResource *this,
          FIndirectVirtualTextureUniform *__return_storage_ptr__)

{
  int iVar1;
  
  *(undefined8 *)&(__return_storage_ptr__->Pad).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Pad).field0_0x0 + 8) = 0;
  *(undefined8 *)&__return_storage_ptr__->PackedPageTableUniform[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->PackedPageTableUniform[0].field0_0x0 + 8) = 0;
  *(undefined8 *)&__return_storage_ptr__->PackedPageTableUniform[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->PackedPageTableUniform[1].field0_0x0 + 8) = 0;
  *(undefined8 *)&(__return_storage_ptr__->PackedUniform).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->PackedUniform).field0_0x0 + 8) = 0;
  iVar1 = (this->Textures).ArrayNum;
  if (iVar1 != 0) {
    __return_storage_ptr__->UniformCountSub1 = iVar1 - 1;
  }
  (**(code **)(this->AllocatedVT->_padding_ + 0x38))
            (this->AllocatedVT,__return_storage_ptr__->PackedPageTableUniform);
  (**(code **)(this->AllocatedVT->_padding_ + 0x40))
            (this->AllocatedVT,&__return_storage_ptr__->PackedUniform,0);
  return __return_storage_ptr__;
}

// InitRHI @ 1489f3610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVirtualTextureCollectionResource::InitRHI
          (FVirtualTextureCollectionResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  uint *puVar2;
  uint uVar3;
  FRHIBuffer *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FTextureResource *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar23;
  ulonglong uVar15;
  undefined8 *puVar16;
  IRendererModule *pIVar17;
  FVirtualTextureProducerHandle *pFVar18;
  IAllocatedVirtualTexture *pIVar19;
  FRHIShaderResourceView *pFVar20;
  FRHITexture *pFVar21;
  TRefCountPtr<FRHIBuffer> TVar22;
  ulonglong uVar24;
  wchar_t *pwVar25;
  TRefCountPtr<FRHIShaderResourceView> *pTVar26;
  longlong lVar27;
  uchar uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auStackY_288 [32];
  uint local_258;
  longlong local_250;
  FTextureCollectionProducerData local_248;
  FLLMScope local_210 [2];
  TRefCountPtr<FRHIShaderResourceView> local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  EPixelFormat EStack_1ef;
  undefined2 uStack_1ee;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  longlong local_1e0;
  FName local_1d8;
  uint local_1d0;
  undefined1 local_1cc [4];
  FRHICommandListBase *local_1c8;
  FRHIBufferCreateDesc local_1c0;
  TResourceArray<UE::HLSL::FIndirectVirtualTextureEntry,0> *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  FAllocatedVTDescription local_168;
  FVTProducerDescription local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar9 = (this->Textures).ArrayNum;
  uVar24 = 0;
  this->PageTable = (FRHITexture *)0x0;
  this->PhysicalTextureSRV = (FRHIShaderResourceView *)0x0;
  local_248.Textures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Textures.ArrayNum = 0;
  local_248.Textures.ArrayMax = 0;
  local_248.BlockVirtualPageTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.BlockVirtualPageTable.ArrayNum = 0;
  local_248.BlockVirtualPageTable.ArrayMax = 0;
  local_248.BlockCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.BlockCoordinates.ArrayNum = 0;
  local_248.BlockCoordinates.ArrayMax = 0;
  local_1c8 = param_1;
  if ((int)uVar9 < 1) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
  }
  else {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar9,(ForAnyElementType *)&local_248,&local_248.Textures.ArrayNum,
                       &local_248.Textures.ArrayMax);
    memset(local_248.Textures.AllocatorInstance.Data + (longlong)iVar8 * 0x20,0,
           (longlong)(int)uVar9 << 5);
  }
  ComputeLayout(this,&local_248);
  CreateIndexTable(this,&local_248);
  local_258 = 0;
  uVar28 = '\0';
  TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_>::SetNumZeroed
            ((TArray<UE::HLSL::FIndirectVirtualTextureEntry,TMemoryImageAllocator<0>_> *)
             &(this->VirtualUniforms)._padding_,(this->Textures).ArrayNum,Default);
  if (0 < (this->Textures).ArrayNum) {
    local_1e0 = 0;
    local_250 = 0;
    uVar29 = uVar24;
    uVar15 = uVar24;
    do {
      lVar27 = local_1e0;
      uVar30 = (uint)uVar15;
      uVar31 = ~uVar30 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar30 < (this->Textures).ArrayNum) {
        uVar9 = uVar31;
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
      if (*(longlong *)((this->Textures).AllocatorInstance.Data + lVar27) != 0) {
        uVar9 = 0;
        if ((int)uVar30 < (this->Textures).ArrayNum) {
          uVar9 = uVar31;
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
        pFVar12 = UTexture::GetResource
                            (*(UTexture **)((this->Textures).AllocatorInstance.Data + uVar29 * 8));
        if (pFVar12 != (FTextureResource *)0x0) {
          local_200 = 0;
          uStack_1f8 = 0;
          local_1f0 = 0;
          EStack_1ef = PF_Unknown;
          plVar13 = (longlong *)(**(code **)(pFVar12->_padding_ + 0x98))(pFVar12);
          if (plVar13 == (longlong *)0x0) {
            lVar14 = (**(code **)(pFVar12->_padding_ + 0x58))(pFVar12);
            if (lVar14 == 0) {
              pwVar25 = L"Invalid resource";
            }
            else {
              if (this->bAllowFormatConversion != false) {
                local_1f0 = 1;
                uVar9 = 0;
                if ((int)uVar30 < (this->Textures).ArrayNum) {
                  uVar9 = uVar31;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar9 = *(uint *)(lVar14 + 0x7c);
                uVar3 = *(uint *)(lVar14 + 0x78);
                uStack_1f8 = *(undefined8 *)((this->Textures).AllocatorInstance.Data + uVar29 * 8);
                EStack_1ef = *(EPixelFormat *)(lVar14 + 0x94);
                uVar10 = uVar9;
                if (uVar9 < uVar3) {
                  uVar10 = uVar3;
                }
                uVar11 = 1;
                if (uVar10 != 0) {
                  uVar11 = uVar10;
                }
                uVar24 = (ulonglong)(uVar11 - 1) * 2 + 1;
                lVar5 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                  }
                }
                local_1d0 = (uint)lVar5;
                if (*(int *)(lVar14 + 0x18) == -1) {
                  bVar23 = 0;
                }
                else {
                  bVar23 = (byte)((ulonglong)*(undefined8 *)(lVar14 + 0x68) >> 0x18);
                }
                uVar10 = (uint)bVar23;
                if (local_1d0 < bVar23) {
                  uVar10 = local_1d0;
                }
                if (uVar10 < local_258) {
                  uVar10 = local_258;
                }
                uStack_1e8 = (this->BuildSettings).TileSize;
                uStack_1ec = ((uStack_1e8 - 1) + uVar3) / uStack_1e8;
                uStack_1e8 = ((uStack_1e8 - 1) + uVar9) / uStack_1e8;
                goto LAB_1489f3a04;
              }
              pwVar25 = L"Non-virtual entries requires format conversion";
            }
          }
          else {
            iVar8 = (**(code **)(*plVar13 + 200))(plVar13);
            if (iVar8 == 1) {
              EStack_1ef = (**(code **)(*plVar13 + 0xa0))(plVar13);
              if (EStack_1ef != this->Format) {
                if (this->bAllowFormatConversion == false) {
                  pwVar25 = L"Mismatched format to collection";
                  goto LAB_1489f3b7d;
                }
                local_1f0 = 1;
              }
              local_200 = (undefined4)plVar13[0x13];
              uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
              uVar9 = (this->BuildSettings).TileSize;
              if (uVar10 < local_258) {
                uVar10 = local_258;
              }
              iVar8 = (**(code **)(*plVar13 + 0x30))(plVar13);
              uStack_1ec = (iVar8 + -1 + uVar9) / uVar9;
              uVar9 = (this->BuildSettings).TileSize;
              iVar8 = (**(code **)(*plVar13 + 0x38))(plVar13);
              uStack_1e8 = (iVar8 + -1 + uVar9) / uVar9;
              pIVar17 = GetRendererModule();
              (**(code **)((longlong)*pIVar17 + 0x170))
                        (pIVar17,plVar13 + 0x13,OnTextureCollectionVirtualTextureDestroyed,this);
              lVar27 = local_1e0;
LAB_1489f3a04:
              uVar24 = (ulonglong)uVar10;
              uVar9 = 0;
              if ((int)uVar30 < local_248.Textures.ArrayNum) {
                uVar9 = uVar31;
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
              plVar13 = &(this->VirtualUniforms)._padding_;
              *(ulonglong *)(local_248.Textures.AllocatorInstance.Data + local_250) =
                   CONCAT44(uStack_1fc,local_200);
              *(undefined8 *)(local_248.Textures.AllocatorInstance.Data + local_250 + 8) =
                   uStack_1f8;
              *(ulonglong *)(local_248.Textures.AllocatorInstance.Data + local_250 + 0x10) =
                   CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,CONCAT11(EStack_1ef,local_1f0)));
              *(ulonglong *)(local_248.Textures.AllocatorInstance.Data + local_250 + 0x10 + 8) =
                   CONCAT44(uStack_1e4,uStack_1e8);
              uVar9 = 0;
              if ((int)uVar30 < (int)(this->VirtualUniforms)._padding_) {
                uVar9 = uVar31;
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
              uVar15 = *plVar13;
              if ((uVar15 & 1) != 0) {
                uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)plVar13;
              }
              puVar2 = (uint *)(uVar15 + uVar29 * 8);
              uVar9 = 0;
              if ((int)uVar30 < local_248.BlockCoordinates.ArrayNum) {
                uVar9 = uVar31;
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
              *puVar2 = *(uint *)(local_248.BlockCoordinates.AllocatorInstance.Data + uVar29 * 8);
              uVar9 = 0;
              if ((int)uVar30 < local_248.BlockCoordinates.ArrayNum) {
                uVar9 = uVar31;
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
              *puVar2 = *puVar2 | *(int *)(local_248.BlockCoordinates.AllocatorInstance.Data +
                                          uVar29 * 8 + 4) << 0x10;
              puVar2[1] = uStack_1e8 << 0x10 | uStack_1ec;
              local_258 = uVar10;
              goto LAB_1489f3b92;
            }
            pwVar25 = L"Multiple physical layers are not supported";
          }
LAB_1489f3b7d:
          FormatCollectionError(this,pwVar25,uVar30);
          uVar24 = (ulonglong)local_258;
        }
      }
LAB_1489f3b92:
      uVar28 = (uchar)uVar24;
      local_250 = local_250 + 0x20;
      local_1e0 = lVar27 + 8;
      uVar15 = (ulonglong)(uVar30 + 1);
      uVar29 = uVar29 + 1;
      param_1 = local_1c8;
    } while ((int)(uVar30 + 1) < (this->Textures).ArrayNum);
  }
  FVTProducerDescription::FVTProducerDescription(&local_118);
  ::FName::FName(&local_1d8,L"TextureCollectionVirtualRedirector");
  local_118.Name.Number = local_1d8.Number;
  local_118.Name.ComparisonIndex.Value = local_1d8.ComparisonIndex.Value;
  local_118.FullNameHash = ::GetTypeHash(local_1d8.ComparisonIndex);
  local_118.FullNameHash = local_118.FullNameHash + local_1d8.Number;
  local_118.TileSize = (this->BuildSettings).TileSize;
  local_118.TileBorderSize = (this->BuildSettings).TileBorderSize;
  local_118.BlockWidthInTiles = local_248.BlockCount.field0_0x0._s_0.X;
  local_118.BlockHeightInTiles = local_248.BlockCount.field0_0x0._s_0.Y;
  local_118.LayerFormat[0].Value = this->Format;
  local_118.bIsLayerSRGB[0] = this->bIsSRGB;
  local_118.bContinuousUpdate = false;
  local_118.Dimensions = '\x02';
  local_118.DepthInTiles = 1;
  local_118.NumTextureLayers = '\x01';
  local_118.NumPhysicalGroups = '\x01';
  local_118.Priority = Normal;
  local_118.MaxLevel = uVar28;
  puVar16 = ::operator_new(0x1f8);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7FTextureCollectionVirtualRedirector__6B_;
    puVar16[1] = local_248.Textures.AllocatorInstance.Data;
    local_248.Textures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar16 + 2) = local_248.Textures.ArrayNum;
    *(int *)((longlong)puVar16 + 0x14) = local_248.Textures.ArrayMax;
    local_248.Textures.ArrayNum = 0;
    local_248.Textures.ArrayMax = 0;
    puVar16[3] = local_248.BlockVirtualPageTable.AllocatorInstance.Data;
    local_248.BlockVirtualPageTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar16 + 4) = local_248.BlockVirtualPageTable.ArrayNum;
    *(int *)((longlong)puVar16 + 0x24) = local_248.BlockVirtualPageTable.ArrayMax;
    local_248.BlockVirtualPageTable.ArrayNum = 0;
    local_248.BlockVirtualPageTable.ArrayMax = 0;
    puVar16[5] = local_248.BlockCoordinates.AllocatorInstance.Data;
    local_248.BlockCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar16 + 6) = local_248.BlockCoordinates.ArrayNum;
    *(int *)((longlong)puVar16 + 0x34) = local_248.BlockCoordinates.ArrayMax;
    local_248.BlockCoordinates.ArrayNum = 0;
    local_248.BlockCoordinates.ArrayMax = 0;
    puVar16[7] = CONCAT44(local_248.BlockCount.field0_0x0._s_0.Y,
                          local_248.BlockCount.field0_0x0._s_0.X);
    *(FName *)(puVar16 + 8) = local_118.Name;
    puVar16[9] = CONCAT26(local_118._14_2_,
                          CONCAT15(local_118.bContinuousUpdate,
                                   CONCAT14(local_118.bPersistentHighestMip,local_118.FullNameHash))
                         );
    puVar16[10] = CONCAT44(local_118.TileBorderSize,local_118.TileSize);
    puVar16[0xb] = CONCAT44(local_118.BlockHeightInTiles,local_118.BlockWidthInTiles);
    puVar16[0xc] = CONCAT44(local_118._36_4_,local_118.DepthInTiles);
    puVar16[0xd] = CONCAT44(local_118.LayerFormat._1_4_,
                            CONCAT13(local_118.LayerFormat[0].Value,
                                     CONCAT12(local_118.NumTextureLayers,
                                              CONCAT11(local_118.MaxLevel,local_118.Dimensions))));
    puVar16[0xe] = local_118._48_8_;
    puVar16[0xf] = local_118.LayerFallbackColor[0].field0_0x0._4_8_;
    puVar16[0x10] = local_118.LayerFallbackColor._12_8_;
    puVar16[0x11] = local_118.LayerFallbackColor[1].field0_0x0._4_8_;
    puVar16[0x12] = local_118.LayerFallbackColor._28_8_;
    puVar16[0x13] = local_118.LayerFallbackColor[2].field0_0x0._4_8_;
    puVar16[0x14] = local_118.LayerFallbackColor._44_8_;
    puVar16[0x15] = local_118.LayerFallbackColor[3].field0_0x0._4_8_;
    puVar16[0x16] = local_118.LayerFallbackColor._60_8_;
    puVar16[0x17] = local_118.LayerFallbackColor[4].field0_0x0._4_8_;
    puVar16[0x18] = local_118.LayerFallbackColor._76_8_;
    puVar16[0x19] = local_118.LayerFallbackColor[5].field0_0x0._4_8_;
    puVar16[0x1a] = local_118.LayerFallbackColor._92_8_;
    puVar16[0x1b] = local_118.LayerFallbackColor[6].field0_0x0._4_8_;
    puVar16[0x1c] = local_118.LayerFallbackColor._108_8_;
    puVar16[0x1d] = local_118.LayerFallbackColor[7].field0_0x0._4_8_;
    puVar16[0x1e] =
         CONCAT44(local_118.bIsLayerSRGB._0_4_,local_118.LayerFallbackColor[7].field0_0x0._s_0.A);
    puVar16[0x1f] = CONCAT44(local_118._188_4_,local_118.bIsLayerSRGB._4_4_);
    puVar16[0x20] =
         CONCAT26(local_118._198_2_,CONCAT15(local_118.Priority,local_118.PhysicalGroupIndex._3_5_))
    ;
    puVar16[0x22] = 0;
    puVar16[0x23] = 0;
    puVar16[0x24] = 0;
    puVar16[0x25] = 0;
    puVar16[0x21] = &___7FTextureCollectionVirtualAdapterFinalizer__6B_;
    *(FName *)(puVar16 + 0x26) = local_118.Name;
    puVar16[0x27] =
         CONCAT26(local_118._14_2_,
                  CONCAT15(local_118.bContinuousUpdate,
                           CONCAT14(local_118.bPersistentHighestMip,local_118.FullNameHash)));
    puVar16[0x28] = CONCAT44(local_118.TileBorderSize,local_118.TileSize);
    puVar16[0x29] = CONCAT44(local_118.BlockHeightInTiles,local_118.BlockWidthInTiles);
    puVar16[0x2a] = CONCAT44(local_118._36_4_,local_118.DepthInTiles);
    puVar16[0x2b] =
         CONCAT44(local_118.LayerFormat._1_4_,
                  CONCAT13(local_118.LayerFormat[0].Value,
                           CONCAT12(local_118.NumTextureLayers,
                                    CONCAT11(local_118.MaxLevel,local_118.Dimensions))));
    puVar16[0x2c] = local_118._48_8_;
    puVar16[0x2d] = local_118.LayerFallbackColor[0].field0_0x0._4_8_;
    puVar16[0x2e] = local_118.LayerFallbackColor._12_8_;
    puVar16[0x2f] = local_118.LayerFallbackColor[1].field0_0x0._4_8_;
    puVar16[0x30] = local_118.LayerFallbackColor._28_8_;
    puVar16[0x31] = local_118.LayerFallbackColor[2].field0_0x0._4_8_;
    puVar16[0x32] = local_118.LayerFallbackColor._44_8_;
    puVar16[0x33] = local_118.LayerFallbackColor[3].field0_0x0._4_8_;
    puVar16[0x34] = local_118.LayerFallbackColor._60_8_;
    puVar16[0x35] = local_118.LayerFallbackColor[4].field0_0x0._4_8_;
    puVar16[0x36] = local_118.LayerFallbackColor._76_8_;
    puVar16[0x37] = local_118.LayerFallbackColor[5].field0_0x0._4_8_;
    puVar16[0x38] = local_118.LayerFallbackColor._92_8_;
    puVar16[0x39] = local_118.LayerFallbackColor[6].field0_0x0._4_8_;
    puVar16[0x3a] = local_118.LayerFallbackColor._108_8_;
    puVar16[0x3b] = local_118.LayerFallbackColor[7].field0_0x0._4_8_;
    puVar16[0x3c] =
         CONCAT44(local_118.bIsLayerSRGB._0_4_,local_118.LayerFallbackColor[7].field0_0x0._s_0.A);
    puVar16[0x3d] = CONCAT44(local_118._188_4_,local_118.bIsLayerSRGB._4_4_);
    puVar16[0x3e] =
         CONCAT26(local_118._198_2_,CONCAT15(local_118.Priority,local_118.PhysicalGroupIndex._3_5_))
    ;
  }
  pIVar17 = GetRendererModule();
  pFVar18 = (FVirtualTextureProducerHandle *)
            (**(code **)((longlong)*pIVar17 + 0x160))(pIVar17,local_1cc,param_1,&local_118);
  local_168.ProducerHandle[0] = *pFVar18;
  local_168.TileSize = (this->BuildSettings).TileSize;
  local_168.TileBorderSize = (this->BuildSettings).TileBorderSize;
  this->ProducerHandle = local_168.ProducerHandle[0];
  local_168.Name.ComparisonIndex.Value = 0;
  local_168.Name.Number = 0;
  local_168.MaxSpaceSize = 0;
  local_168.IndirectionTextureSize = 0;
  local_168.Dimensions = '\x02';
  local_168.NumTextureLayers = '\x01';
  local_168.ForceSpaceID = 0xff;
  local_168.AdaptiveLevelBias = '\0';
  local_168.ProducerHandle[1] = (FVirtualTextureProducerHandle)0x0;
  local_168.ProducerHandle[2] = (FVirtualTextureProducerHandle)0x0;
  local_168.ProducerHandle[3] = (FVirtualTextureProducerHandle)0x0;
  local_168.ProducerHandle[4] = (FVirtualTextureProducerHandle)0x0;
  local_168.ProducerHandle[5] = (FVirtualTextureProducerHandle)0x0;
  local_168.ProducerHandle[6] = (FVirtualTextureProducerHandle)0x0;
  iVar8 = 0;
  local_168.ProducerHandle[7].PackedValue = 0;
  local_168.field11_0x44.PackedFlags = '\0';
  local_168.ProducerLayerIndex[0] = '\0';
  local_168.ProducerLayerIndex[1] = '\0';
  local_168.ProducerLayerIndex[2] = '\0';
  local_168.ProducerLayerIndex[3] = '\0';
  local_168.ProducerLayerIndex[4] = '\0';
  local_168.ProducerLayerIndex[5] = '\0';
  local_168.ProducerLayerIndex[6] = '\0';
  local_168.ProducerLayerIndex[7] = '\0';
  pIVar17 = GetRendererModule();
  pIVar19 = IRendererModule::AllocateVirtualTexture(pIVar17,&local_168);
  this->AllocatedVT = pIVar19;
  pFVar20 = (FRHIShaderResourceView *)
            (**(code **)(pIVar19->_padding_ + 0x30))(pIVar19,0,this->bIsSRGB);
  this->PhysicalTextureSRV = pFVar20;
  pFVar21 = (FRHITexture *)(**(code **)(this->AllocatedVT->_padding_ + 0x10))(this->AllocatedVT,0);
  this->PageTable = pFVar21;
  pIVar17 = GetRendererModule();
  (**(code **)((longlong)*pIVar17 + 0x170))
            (pIVar17,&this->ProducerHandle,OnTextureCollectionVirtualTextureDestroyed);
  if ((this->PageTable == (FRHITexture *)0x0) ||
     (this->PhysicalTextureSRV == (FRHIShaderResourceView *)0x0)) {
    this->PageTable = (GBlackUintTexture->TextureRHI).Reference;
    this->PhysicalTextureSRV = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  }
  if ((int)(this->VirtualUniforms)._padding_ == 0) {
    plVar13 = &(this->VirtualUniforms)._padding_;
    if (*(int *)((longlong)&(this->VirtualUniforms)._padding_ + 4) == 0) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)plVar13,
                         (int *)((longlong)&(this->VirtualUniforms)._padding_ + 4));
      *(int *)&(this->VirtualUniforms)._padding_ = iVar8;
    }
    *(int *)&(this->VirtualUniforms)._padding_ = iVar8 + 1;
    uVar24 = *plVar13;
    if ((uVar24 & 1) != 0) {
      uVar24 = (longlong)plVar13 + ((longlong)uVar24 >> 0x18);
    }
    *(undefined8 *)(uVar24 + (longlong)iVar8 * 8) = 0;
  }
  local_1c0.InitialState = (int)(this->VirtualUniforms)._padding_ << 3;
  local_1c0.OwnerName = (FName)0x151bf8f00;
  local_1c0.ClassName.Number = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_188 = &this->VirtualUniforms;
  local_1c0.InitAction = 8;
  local_1c0.ClassName.ComparisonIndex.Value = 0x101;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0x70;
  local_17c = 2;
  TVar22 = FRHICommandListBase::CreateBuffer(param_1,&local_1c0);
  pTVar1 = &this->VirtualCollectionRHI;
  if ((FRHIBuffer *)pTVar1 != TVar22.Reference) {
    pFVar4 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar22.Reference)->_padding_;
    (TVar22.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_1c0._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1c0._padding_);
  }
  pFVar4 = pTVar1->Reference;
  local_1c0.InitialData = (FResourceArrayUploadInterface *)0x0;
  local_1c0.DebugName = (wchar_t *)0x14400;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_210,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&local_1c0._padding_,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_208,param_1,pFVar4);
  FMemScope::~FMemScope((FMemScope *)&local_1c0._padding_);
  FLLMScope::~FLLMScope(local_210);
  pTVar26 = &this->VirtualCollectionRHISRV;
  if (pTVar26 != &local_208) {
    pFVar20 = pTVar26->Reference;
    pTVar26->Reference = local_208.Reference;
    local_208.Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar20 == (FRHIShaderResourceView *)0x0) goto LAB_1489f40f7;
    FRHIResource::Release((FRHIResource *)pFVar20);
  }
  if (local_208.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_208.Reference);
  }
LAB_1489f40f7:
  if (local_248.BlockCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.BlockCoordinates.AllocatorInstance.Data);
  }
  if (local_248.BlockVirtualPageTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.BlockVirtualPageTable.AllocatorInstance.Data);
  }
  if (local_248.Textures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Textures.AllocatorInstance.Data);
  }
  return;
}

// ReleaseRHI @ 148a07b70

void __thiscall
FVirtualTextureCollectionResource::ReleaseRHI(FVirtualTextureCollectionResource *this)

{
  IRendererModule *pIVar1;
  
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x178))(pIVar1,this);
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1,this->AllocatedVT);
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x168))(pIVar1,&this->ProducerHandle);
    this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  }
  return;
}

