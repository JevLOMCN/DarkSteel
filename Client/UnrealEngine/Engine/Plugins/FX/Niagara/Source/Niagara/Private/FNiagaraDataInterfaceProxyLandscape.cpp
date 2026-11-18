// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ConsumePerInstanceDataFromGameThread @ 1491733f0

void __thiscall
FNiagaraDataInterfaceProxyLandscape::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyLandscape *this,void *param_1,ulong64 *param_2)

{
  int *piVar1;
  TArray<FRegionRequest,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  double dVar5;
  FNDILandscapeData_RenderThread *pFVar6;
  
  pFVar6 = TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
                       *)&this->SystemInstancesToProxyData_RT,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  (pFVar6->LandscapeData).TextureResources = *(FLandscapeTextureResource **)param_1;
  pTVar2 = &(pFVar6->LandscapeData).RegionRequests;
  *(undefined8 *)&(pFVar6->LandscapeData).CachedHeightTextureLWCTile.field0_0x0 =
       *(undefined8 *)((longlong)param_1 + 8);
  (pFVar6->LandscapeData).CachedHeightTextureLWCTile.field0_0x0._s_0.Z =
       *(float *)((longlong)param_1 + 0x10);
  dVar5 = *(double *)((longlong)param_1 + 0x28);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][0] =
       *(double *)((longlong)param_1 + 0x20);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x38);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][2] =
       *(double *)((longlong)param_1 + 0x30);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x48);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][0] =
       *(double *)((longlong)param_1 + 0x40);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x58);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][2] =
       *(double *)((longlong)param_1 + 0x50);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x68);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][0] =
       *(double *)((longlong)param_1 + 0x60);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x78);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][2] =
       *(double *)((longlong)param_1 + 0x70);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x88);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][0] =
       *(double *)((longlong)param_1 + 0x80);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x98);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][2] =
       *(double *)((longlong)param_1 + 0x90);
  (pFVar6->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0xa8);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][0] =
       *(double *)((longlong)param_1 + 0xa0);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0xb8);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][2] =
       *(double *)((longlong)param_1 + 0xb0);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 200);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][0] =
       *(double *)((longlong)param_1 + 0xc0);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0xd8);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][2] =
       *(double *)((longlong)param_1 + 0xd0);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0xe8);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][0] =
       *(double *)((longlong)param_1 + 0xe0);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0xf8);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][2] =
       *(double *)((longlong)param_1 + 0xf0);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x108);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][0] =
       *(double *)((longlong)param_1 + 0x100);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][1] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x118);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][2] =
       *(double *)((longlong)param_1 + 0x110);
  (pFVar6->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][3] = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x128);
  (pFVar6->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.X =
       *(double *)((longlong)param_1 + 0x120);
  (pFVar6->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Y = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x138);
  (pFVar6->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Z =
       *(double *)((longlong)param_1 + 0x130);
  (pFVar6->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.W = dVar5;
  dVar5 = *(double *)((longlong)param_1 + 0x148);
  (pFVar6->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.X =
       *(double *)((longlong)param_1 + 0x140);
  (pFVar6->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.Y = dVar5;
  if (pTVar2 != (TArray<FRegionRequest,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x150)) {
    iVar3 = (pFVar6->LandscapeData).RegionRequests.ArrayMax;
    piVar1 = &(pFVar6->LandscapeData).RegionRequests.ArrayMax;
    iVar4 = *(int *)((longlong)param_1 + 0x158);
    _Src = *(void **)((longlong)param_1 + 0x150);
    (pFVar6->LandscapeData).RegionRequests.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x30);
      }
    }
  }
  (pFVar6->LandscapeData).BaseColorVirtualTextureUnpackType =
       *(EBaseColorUnpackType *)((longlong)param_1 + 0x160);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 149186710

int __thiscall
FNiagaraDataInterfaceProxyLandscape::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyLandscape *this)

{
  return 0x170;
}

// UpdateProxy_RT @ 149190110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraDataInterfaceProxyLandscape::UpdateProxy_RT
          (FNiagaraDataInterfaceProxyLandscape *this,ulong64 param_1,URuntimeVirtualTexture *param_2
          ,bool param_3,URuntimeVirtualTexture *param_4,URuntimeVirtualTexture *param_5,
          ERuntimeVirtualTextureMaterialType param_6)

{
  FVirtualTexturePage *this_00;
  FNDILandscapeData_RenderThread *pFVar1;
  IAllocatedVirtualTexture *pIVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  FNDILandscapeData_RenderThread *this_01;
  IRendererModule *pIVar5;
  FNDILandscapeData_RenderThread **ppFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_1a8 [32];
  double local_130;
  double dStack_128;
  undefined1 local_120 [16];
  FNDILandscapeData_RenderThread *local_110;
  FVirtualTexturePage *local_108;
  FVirtualTexturePage *local_100;
  FNDILandscapeData_RenderThread *local_f8 [23];
  
  local_f8[0] = (FNDILandscapeData_RenderThread *)(__security_cookie.value ^ (ulonglong)auStack_1a8)
  ;
  this_01 = TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
                    *)&this->SystemInstancesToProxyData_RT,param_1);
  if (this_01 != (FNDILandscapeData_RenderThread *)0x0) {
    FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
              (&this_01->BaseColorVirtualLayer,param_2,0,param_3);
    FNDILandscapeData_RenderThread::FVirtualTexturePage::Update
              (&this_01->BaseColorVirtualPage,param_2,0,true,false);
    FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
              (&this_01->HeightVirtualLayer,param_4,0,false);
    FNDILandscapeData_RenderThread::FVirtualTexturePage::Update
              (&this_01->HeightVirtualPage,param_4,0,true,true);
    this_00 = &this_01->NormalVirtualPage;
    FNDILandscapeData_RenderThread::FVirtualTexturePage::Update(this_00,param_5,0,true,false);
    if (param_6 == BaseColor_Normal_Roughness) {
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
                (&this_01->NormalVirtualLayer0,param_5,0,false);
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
                (&this_01->NormalVirtualLayer1,param_5,1,false);
      this_01->NormalUnpackMode = B5G6R5;
    }
    else if (param_6 == BaseColor_Normal_Specular) {
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
                (&this_01->NormalVirtualLayer0,param_5,0,false);
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
                (&this_01->NormalVirtualLayer1,param_5,1,false);
      this_01->NormalUnpackMode = BC3BC3;
    }
    else if ((param_6 == BaseColor_Normal_Specular_YCoCg) ||
            (param_6 == BaseColor_Normal_Specular_Mask_YCoCg)) {
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
                (&this_01->NormalVirtualLayer0,param_5,1,false);
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
                (&this_01->NormalVirtualLayer1,param_5,2,false);
      this_01->NormalUnpackMode = BC5BC1;
    }
    else {
      FNDILandscapeData_RenderThread::FVirtualTexturePage::Reset(this_00);
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Reset(&this_01->NormalVirtualLayer0);
      FNDILandscapeData_RenderThread::FVirtualTextureLayer::Reset(&this_01->NormalVirtualLayer1);
      this_01->NormalUnpackMode = None;
    }
    pFVar3 = (this_01->LandscapeData).RegionRequests.AllocatorInstance.Data;
    uVar4 = (this_01->LandscapeData).RegionRequests.ArrayNum;
    (this_01->LandscapeData).RegionRequests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->LandscapeData).RegionRequests.ArrayNum = 0;
    (this_01->LandscapeData).RegionRequests.ArrayMax = 0;
    if (uVar4 != 0) {
      pIVar5 = GetRendererModule();
      for (pFVar7 = pFVar3 + 0x2d; pFVar7 + -0x2d != pFVar3 + (longlong)(int)uVar4 * 0x30;
          pFVar7 = pFVar7 + 0x30) {
        ppFVar6 = &local_110;
        local_110 = (FNDILandscapeData_RenderThread *)0x0;
        if (pFVar7[-1] != (FScriptContainerElement)0x0) {
          local_110 = this_01;
        }
        local_108 = (FVirtualTexturePage *)0x0;
        if (*pFVar7 != (FScriptContainerElement)0x0) {
          local_108 = &this_01->HeightVirtualPage;
        }
        local_100 = (FVirtualTexturePage *)0x0;
        if (pFVar7[1] != (FScriptContainerElement)0x0) {
          local_100 = this_00;
        }
        do {
          pFVar1 = *ppFVar6;
          if (((pFVar1 != (FNDILandscapeData_RenderThread *)0x0) &&
              ((pFVar1->BaseColorVirtualPage).PageTableRef.Reference != (FRHITexture *)0x0)) &&
             (pIVar2 = (pFVar1->BaseColorVirtualPage).AllocatedTexture,
             pIVar2 != (IAllocatedVirtualTexture *)0x0)) {
            local_130 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_128 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
            local_120._8_4_ = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
            local_120._0_8_ = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
            local_120._12_4_ =
                 (int)((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >> 0x20);
            (**(code **)((longlong)*pIVar5 + 0x198))(pIVar5,pIVar2,local_120,&local_130);
          }
          ppFVar6 = ppFVar6 + 1;
        } while (ppFVar6 != local_f8);
      }
    }
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

