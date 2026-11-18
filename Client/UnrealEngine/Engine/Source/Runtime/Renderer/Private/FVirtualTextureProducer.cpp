// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FVirtualTextureProducer @ 1458d13b0

void __thiscall FVirtualTextureProducer::~FVirtualTextureProducer(FVirtualTextureProducer *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FVirtualTextureProducer::FPhysicalGroupDesc,int>
            ((FPhysicalGroupDesc *)(this->PhysicalGroups).AllocatorInstance.Data,
             (this->PhysicalGroups).ArrayNum);
  pFVar1 = (this->PhysicalGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Release @ 1459157d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVirtualTextureProducer::Release
          (FVirtualTextureProducer *this,FVirtualTextureSystem *param_1,
          FVirtualTextureProducerHandle *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  IVirtualTexture *pIVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  TEnumAsByte<EPixelFormat> TVar17;
  TEnumAsByte<EPixelFormat> TVar18;
  TEnumAsByte<EPixelFormat> TVar19;
  TEnumAsByte<EPixelFormat> TVar20;
  TEnumAsByte<EPixelFormat> TVar21;
  bool bVar22;
  uint uVar23;
  FTaskGraphInterface *pFVar24;
  FVTProducerDescription *pFVar25;
  TRefCountPtr<FBaseGraphTask> *pTVar26;
  uint uVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStackY_178 [32];
  TRefCountPtr<FBaseGraphTask> local_148 [4];
  TRefCountPtr<FBaseGraphTask> *local_128;
  int local_120;
  undefined4 local_11c;
  FVTProducerDescription local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,"FVirtualTextureProducer::Release",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  if ((this->Description).bPersistentHighestMip != false) {
    FVirtualTextureSystem::ForceUnlockAllTiles(param_1,param_2,this);
  }
  uVar27 = 0;
  if ((this->Description).NumPhysicalGroups != '\0') {
    do {
      uVar23 = 0;
      if ((int)uVar27 < (this->PhysicalGroups).ArrayNum) {
        uVar23 = ~uVar27 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar28 = (longlong)(int)uVar27;
      FTexturePagePool::EvictPages
                ((FTexturePagePool *)
                 (*(longlong *)((this->PhysicalGroups).AllocatorInstance.Data + lVar28 * 8) + 0x58),
                 param_1,param_2);
      uVar23 = 0;
      if ((int)uVar27 < (this->PhysicalGroups).ArrayNum) {
        uVar23 = ~uVar27 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->PhysicalGroups).AllocatorInstance.Data;
      lVar4 = *(longlong *)(pFVar3 + lVar28 * 8);
      if (lVar4 != 0) {
        *(undefined8 *)(pFVar3 + lVar28 * 8) = 0;
        if ((*(int *)(lVar4 + 0x25c) == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs > 0u",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTexturePhysicalSpace.h"
                                ,0x75,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)(lVar4 + 0x25c) = *(int *)(lVar4 + 0x25c) + -1;
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < (this->Description).NumPhysicalGroups);
  }
  piVar1 = &(this->PhysicalGroups).ArrayMax;
  pFVar3 = (this->PhysicalGroups).AllocatorInstance.Data;
  iVar2 = (this->PhysicalGroups).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FVirtualTextureProducer::FPhysicalGroupDesc,int>
              ((FPhysicalGroupDesc *)pFVar3,iVar2);
    (this->PhysicalGroups).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PhysicalGroups).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FVirtualTextureProducer::FPhysicalGroupDesc,int>
              ((FPhysicalGroupDesc *)pFVar3,iVar2);
    (this->PhysicalGroups).ArrayNum = 0;
  }
  local_128 = (TRefCountPtr<FBaseGraphTask> *)0x0;
  local_120 = 0;
  local_11c = 4;
  (**(code **)((longlong)*this->VirtualTexture + 0x30))(this->VirtualTexture,param_2,local_148);
  if (local_120 != 0) {
    bVar22 = -1 < CpuChannel->Enabled;
    if (bVar22) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId34,"FVirtualTextureProducer::Release_Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.cpp"
                 ,0x22);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId34);
    }
    pFVar24 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar24 + 0x60))
              (pFVar24,local_148,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  pIVar5 = this->VirtualTexture;
  if (pIVar5 != (IVirtualTexture *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  this->VirtualTexture = (IVirtualTexture *)0x0;
  pFVar25 = FVTProducerDescription::FVTProducerDescription(&local_118);
  uVar27 = pFVar25->FullNameHash;
  bVar22 = pFVar25->bPersistentHighestMip;
  bVar8 = pFVar25->bContinuousUpdate;
  bVar9 = pFVar25->bRequiresSinglePhysicalPool;
  bVar10 = pFVar25->bNotifyCompleted;
  (this->Description).Name = pFVar25->Name;
  (this->Description).FullNameHash = uVar27;
  (this->Description).bPersistentHighestMip = bVar22;
  (this->Description).bContinuousUpdate = bVar8;
  (this->Description).bRequiresSinglePhysicalPool = bVar9;
  (this->Description).bNotifyCompleted = bVar10;
  uVar27 = pFVar25->TileBorderSize;
  uVar23 = pFVar25->BlockWidthInTiles;
  uVar11 = pFVar25->BlockHeightInTiles;
  (this->Description).TileSize = pFVar25->TileSize;
  (this->Description).TileBorderSize = uVar27;
  (this->Description).BlockWidthInTiles = uVar23;
  (this->Description).BlockHeightInTiles = uVar11;
  uVar12 = pFVar25->WidthInBlocks;
  uVar13 = pFVar25->HeightInBlocks;
  uVar14 = pFVar25->Dimensions;
  uVar15 = pFVar25->MaxLevel;
  uVar16 = pFVar25->NumTextureLayers;
  TVar17.Value = pFVar25->LayerFormat[0].Value;
  TVar18.Value = pFVar25->LayerFormat[1].Value;
  TVar19.Value = pFVar25->LayerFormat[2].Value;
  TVar20.Value = pFVar25->LayerFormat[3].Value;
  TVar21.Value = pFVar25->LayerFormat[4].Value;
  (this->Description).DepthInTiles = pFVar25->DepthInTiles;
  (this->Description).WidthInBlocks = uVar12;
  (this->Description).HeightInBlocks = uVar13;
  (this->Description).Dimensions = uVar14;
  (this->Description).MaxLevel = uVar15;
  (this->Description).NumTextureLayers = uVar16;
  (this->Description).LayerFormat[0] = (TEnumAsByte<EPixelFormat>)TVar17.Value;
  (this->Description).LayerFormat[1] = (TEnumAsByte<EPixelFormat>)TVar18.Value;
  (this->Description).LayerFormat[2] = (TEnumAsByte<EPixelFormat>)TVar19.Value;
  (this->Description).LayerFormat[3] = (TEnumAsByte<EPixelFormat>)TVar20.Value;
  (this->Description).LayerFormat[4] = (TEnumAsByte<EPixelFormat>)TVar21.Value;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[0].field0_0x0 + 4);
  *(undefined8 *)((this->Description).LayerFormat + 5) = *(undefined8 *)(pFVar25->LayerFormat + 5);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[0].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[1].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[0].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[0].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[1].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[2].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[1].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[1].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[2].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[3].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[2].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[2].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[3].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[4].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[3].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[3].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[4].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[5].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[4].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[4].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[5].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[6].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[5].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[5].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[6].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[7].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[6].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[6].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[7].field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)(pFVar25->bIsLayerSRGB + 4);
  *(undefined8 *)((longlong)&(this->Description).LayerFallbackColor[7].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&pFVar25->LayerFallbackColor[7].field0_0x0 + 0xc);
  *(undefined8 *)((this->Description).bIsLayerSRGB + 4) = uVar7;
  *(undefined8 *)((this->Description).PhysicalGroupIndex + 3) =
       *(undefined8 *)(pFVar25->PhysicalGroupIndex + 3);
  pTVar26 = local_148;
  if (local_128 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar26 = local_128;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar26,local_120);
  if (local_128 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    FMemory::Free(local_128);
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

