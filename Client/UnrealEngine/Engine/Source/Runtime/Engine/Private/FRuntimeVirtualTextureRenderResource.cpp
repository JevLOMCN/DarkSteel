// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// operator() @ 1489bec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FRuntimeVirtualTextureRenderResource::Init'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  bool bVar2;
  FVirtualTextureProducerHandle FVar3;
  IRendererModule *pIVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStackY_c8 [32];
  undefined4 local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [80];
  FAdaptiveVTDescription local_38 [2];
  
  local_38[1]._4_8_ = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98 = **(undefined4 **)this;
  lVar1 = *(longlong *)(*(undefined4 **)this + 2);
  if (lVar1 != 0) {
    pIVar4 = GetRendererModule();
    (**(code **)((longlong)*pIVar4 + 0x148))(pIVar4,lVar1);
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x10);
  if (lVar1 != 0) {
    pIVar4 = GetRendererModule();
    (**(code **)((longlong)*pIVar4 + 0x158))(pIVar4,lVar1);
  }
  pIVar4 = GetRendererModule();
  FVar3 = IRendererModule::RegisterVirtualTextureProducer
                    (pIVar4,(FVTProducerDescription *)local_94,
                     (IVirtualTexture *)((longlong)this + 0x10));
  uVar6 = 0;
  **(undefined4 **)this = *(undefined4 *)CONCAT44(extraout_var,FVar3.PackedValue);
  local_88._60_8_ = 0;
  local_88[0x44] = 0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  local_88._16_4_ = 0;
  local_88._20_4_ = 0;
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = 0xff;
  local_88[0x1b] = '\0';
  local_88._28_4_ = (FVirtualTextureProducerHandle)0x0;
  local_88._32_4_ = (FVirtualTextureProducerHandle)0x0;
  local_88._36_4_ = (FVirtualTextureProducerHandle)0x0;
  local_88._40_4_ = (FVirtualTextureProducerHandle)0x0;
  local_88._44_8_ = 0;
  local_88._52_8_ = 0;
  bVar2 = FRuntimeVirtualTextureRenderResource::FillVTDescriptions
                    (*(FVirtualTextureProducerHandle **)this,
                     (FVTProducerDescription *)((longlong)this + 0x10),
                     (FResourceInitDesc *)((longlong)this + 0xd8),
                     (FAllocatedVTDescription *)local_88,local_38);
  if (bVar2) {
    *(undefined8 *)(*(longlong *)this + 8) = 0;
    if (local_88[0x19] != '\0') {
      pIVar4 = GetRendererModule();
      uVar6 = (**(code **)((longlong)*pIVar4 + 0x150))(pIVar4,param_1,local_38,local_88);
    }
  }
  else {
    uVar5 = uVar6;
    if (local_88[0x19] != '\0') {
      pIVar4 = GetRendererModule();
      uVar5 = (**(code **)((longlong)*pIVar4 + 0x140))(pIVar4,param_1,local_88);
    }
    *(undefined8 *)(*(longlong *)this + 8) = uVar5;
  }
  *(undefined8 *)(*(longlong *)this + 0x10) = uVar6;
  pIVar4 = GetRendererModule();
  (**(code **)((longlong)*pIVar4 + 0x168))(pIVar4,&local_98);
  return;
}

// operator() @ 1489bedf0

void __thiscall
`FRuntimeVirtualTextureRenderResource::Release'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  IRendererModule *pIVar2;
  
  lVar1 = *(longlong *)((longlong)this + 0x10);
  if (lVar1 != 0) {
    pIVar2 = GetRendererModule();
    (**(code **)((longlong)*pIVar2 + 0x148))(pIVar2,lVar1);
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  if (lVar1 != 0) {
    pIVar2 = GetRendererModule();
    (**(code **)((longlong)*pIVar2 + 0x158))(pIVar2,lVar1);
  }
  pIVar2 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x0001489bee5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 0x168))(pIVar2,this,*(code **)((longlong)*pIVar2 + 0x168));
  return;
}

// FillVTDescriptions @ 1489dd6a0

bool __cdecl
FRuntimeVirtualTextureRenderResource::FillVTDescriptions
          (FVirtualTextureProducerHandle *param_1,FVTProducerDescription *param_2,
          FResourceInitDesc *param_3,FAllocatedVTDescription *param_4,
          FAdaptiveVTDescription *param_5)

{
  ulonglong uVar1;
  uchar uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar6 = param_2->BlockHeightInTiles;
  if (param_2->BlockHeightInTiles < param_2->BlockWidthInTiles) {
    uVar6 = param_2->BlockWidthInTiles;
  }
  uVar9 = 1;
  if (uVar6 != 0) {
    uVar9 = uVar6;
  }
  uVar1 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar7 = (int)lVar3;
  if ((param_3->bAdaptive == false) || (iVar7 < 0xb)) {
    bVar11 = false;
    bVar10 = false;
    uVar9 = 1 << ((byte)lVar3 & 0x1f);
    iVar4 = 0;
    iVar5 = 0;
    uVar6 = 0x1000;
    if ((int)uVar9 < 0x1000) {
      uVar6 = uVar9;
    }
    uVar9 = 0x20;
    if (0x20 < (int)uVar6) {
      uVar9 = uVar6;
    }
    if (param_3->bPrivateSpace == false) {
      bVar8 = 0;
      goto LAB_1489dd73d;
    }
  }
  else {
    iVar4 = ::`anonymous_namespace'::GetPageTableTileCountLog2(iVar7);
    iVar5 = ::`anonymous_namespace'::GetPageTableTileCountLog2(iVar7);
    uVar9 = 1 << ((byte)iVar4 & 0x1f);
    iVar5 = (iVar7 - iVar5) + 2;
    uVar6 = 0x1000;
    if ((int)uVar9 < 0x1000) {
      uVar6 = uVar9;
    }
    bVar10 = true;
    uVar9 = 0x20;
    if (0x20 < (int)uVar6) {
      bVar10 = true;
      uVar9 = uVar6;
    }
  }
  bVar8 = 1;
  bVar11 = bVar10;
  iVar4 = iVar5;
LAB_1489dd73d:
  param_4->Dimensions = param_2->Dimensions;
  param_4->TileSize = param_2->TileSize;
  param_4->TileBorderSize = param_2->TileBorderSize;
  uVar2 = param_2->NumTextureLayers;
  (param_4->field11_0x44).PackedFlags = (param_4->field11_0x44).PackedFlags & 0xfe;
  (param_4->field11_0x44).PackedFlags = (param_4->field11_0x44).PackedFlags | bVar8;
  param_4->NumTextureLayers = uVar2;
  (param_4->field11_0x44).PackedFlags =
       (param_4->field11_0x44).PackedFlags ^
       (param_3->bSinglePhysicalSpace * '\x02' ^ (param_4->field11_0x44).PackedFlags) & 2;
  uVar6 = 0;
  if (bVar8 != 0) {
    uVar6 = uVar9;
  }
  param_4->MaxSpaceSize = uVar6;
  uVar6 = 0;
  if (param_2->NumTextureLayers != '\0') {
    do {
      param_4->ProducerHandle[uVar6] = *param_1;
      param_4->ProducerLayerIndex[uVar6] = (uchar)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2->NumTextureLayers);
  }
  uVar6 = 0;
  if (0 < iVar7 - iVar4) {
    uVar6 = iVar7 - iVar4;
  }
  param_5->TileCountX = param_2->BlockWidthInTiles;
  param_5->TileCountY = param_2->BlockHeightInTiles;
  param_5->MaxAdaptiveLevel = uVar6;
  return bVar11;
}

// Init @ 1489f2680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRuntimeVirtualTextureRenderResource::Init
          (FRuntimeVirtualTextureRenderResource *this,IVirtualTexture *param_1,
          FVTProducerDescription *param_2,FResourceInitDesc *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_188 [32];
  FRuntimeVirtualTextureRenderResource *local_168;
  IVirtualTexture *pIStack_160;
  FName local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined5 uStack_8d;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_158 = param_2->Name;
  pcStack_150 = *(code **)&param_2->FullNameHash;
  local_98 = *(code **)(param_2->PhysicalGroupIndex + 3);
  local_148 = *(code **)&param_2->TileSize;
  pcStack_140 = *(code **)&param_2->BlockWidthInTiles;
  local_88[0] = (code *)0x0;
  local_138 = *(code **)&param_2->DepthInTiles;
  pcStack_130 = *(code **)&param_2->Dimensions;
  local_128 = *(code **)(param_2->LayerFormat + 5);
  pcStack_120 = *(code **)((longlong)&param_2->LayerFallbackColor[0].field0_0x0 + 4);
  local_118 = *(code **)((longlong)&param_2->LayerFallbackColor[0].field0_0x0 + 0xc);
  pcStack_110 = *(code **)((longlong)&param_2->LayerFallbackColor[1].field0_0x0 + 4);
  local_108 = *(code **)((longlong)&param_2->LayerFallbackColor[1].field0_0x0 + 0xc);
  pcStack_100 = *(code **)((longlong)&param_2->LayerFallbackColor[2].field0_0x0 + 4);
  local_f8 = *(code **)((longlong)&param_2->LayerFallbackColor[2].field0_0x0 + 0xc);
  pcStack_f0 = *(code **)((longlong)&param_2->LayerFallbackColor[3].field0_0x0 + 4);
  local_d8 = *(code **)((longlong)&param_2->LayerFallbackColor[4].field0_0x0 + 0xc);
  pcStack_d0 = *(code **)((longlong)&param_2->LayerFallbackColor[5].field0_0x0 + 4);
  local_e8 = *(code **)((longlong)&param_2->LayerFallbackColor[3].field0_0x0 + 0xc);
  pcStack_e0 = *(code **)((longlong)&param_2->LayerFallbackColor[4].field0_0x0 + 4);
  local_c8 = *(code **)((longlong)&param_2->LayerFallbackColor[5].field0_0x0 + 0xc);
  pcStack_c0 = *(code **)((longlong)&param_2->LayerFallbackColor[6].field0_0x0 + 4);
  local_b8 = *(code **)((longlong)&param_2->LayerFallbackColor[6].field0_0x0 + 0xc);
  pcStack_b0 = *(code **)((longlong)&param_2->LayerFallbackColor[7].field0_0x0 + 4);
  local_a8 = *(code **)((longlong)&param_2->LayerFallbackColor[7].field0_0x0 + 0xc);
  pcStack_a0 = *(code **)(param_2->bIsLayerSRGB + 4);
  uStack_90._0_1_ = param_3->bSinglePhysicalSpace;
  uStack_90._1_1_ = param_3->bPrivateSpace;
  uStack_8e = param_3->bAdaptive;
  local_168 = this;
  pIStack_160 = param_1;
  local_60 = FMemory::Malloc(0xe8,8);
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__Init_FRuntimeVirtualTextureRenderResource__QEAAXPEAVIVirtualTexture__AEBUFVTProducerDescription__AEBUFResourceInitDesc_3__Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_60[1] = (code *)local_168;
  local_60[2] = (code *)pIStack_160;
  *(FName *)(local_60 + 3) = local_158;
  local_60[4] = pcStack_150;
  local_60[5] = local_148;
  local_60[6] = pcStack_140;
  local_60[7] = local_138;
  local_60[8] = pcStack_130;
  local_60[9] = local_128;
  local_60[10] = pcStack_120;
  local_60[0xb] = local_118;
  local_60[0xc] = pcStack_110;
  local_60[0xd] = local_108;
  local_60[0xe] = pcStack_100;
  local_60[0xf] = local_f8;
  local_60[0x10] = pcStack_f0;
  local_60[0x11] = local_e8;
  local_60[0x12] = pcStack_e0;
  local_60[0x13] = local_d8;
  local_60[0x14] = pcStack_d0;
  local_60[0x15] = local_c8;
  local_60[0x16] = pcStack_c0;
  local_60[0x17] = local_b8;
  local_60[0x18] = pcStack_b0;
  local_60[0x19] = local_a8;
  local_60[0x1a] = pcStack_a0;
  local_60[0x1b] = local_98;
  local_60[0x1c] = (code *)CONCAT53(uStack_8d,CONCAT12(uStack_8e,uStack_90));
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRuntimeVirtualTextureRenderResource::Init'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRuntimeVirtualTextureRenderResource::Init_::__l2::TSTR_FRuntimeVirtualTextureRenderResource_Init159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRuntimeVirtualTextureRenderResource::Init'::__l2::TSTR_FRuntimeVirtualTextureRenderResource_Init159>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

