// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 9

// FRHIGPUTextureReadback @ 145c87810

FRHIGPUTextureReadback * __thiscall
FRHIGPUTextureReadback::FRHIGPUTextureReadback(FRHIGPUTextureReadback *this,FName param_1)

{
  FRHIGPUMemoryReadback::FRHIGPUMemoryReadback((FRHIGPUMemoryReadback *)this,param_1);
  this->_padding_ = (longlong)&___7FRHIGPUTextureReadback__6B_;
  this->DestinationStagingTextures[0].Reference = (FRHITexture *)0x0;
  this->DestinationStagingTextures[1].Reference = (FRHITexture *)0x0;
  this->DestinationStagingTextures[2].Reference = (FRHITexture *)0x0;
  this->DestinationStagingTextures[3].Reference = (FRHITexture *)0x0;
  this->DestinationStagingTextures[4].Reference = (FRHITexture *)0x0;
  this->DestinationStagingTextures[5].Reference = (FRHITexture *)0x0;
  this->DestinationStagingTextures[6].Reference = (FRHITexture *)0x0;
  this->DestinationStagingTextures[7].Reference = (FRHITexture *)0x0;
  return this;
}

// EnqueueCopy @ 145c9de20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145c9dee5) */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRHIGPUTextureReadback::EnqueueCopy
          (FRHIGPUTextureReadback *this,FRHICommandList *param_1,FRHITexture *param_2,
          TIntVector3<int> *param_3,uint param_4,TIntVector3<int> *param_5)

{
  char cVar1;
  FRHIGPUMask FVar2;
  FRHITexture *pFVar3;
  FRHITexture *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TIntVector3<int> *pTVar8;
  FRHICommandListBase *this_00;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  FRHITextureDesc *pFVar13;
  IRHICommandContext *pIVar14;
  FRHICommandBase *pFVar15;
  longlong *plVar16;
  ELLMTag EVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  TRefCountPtr<FRHITexture> *pTVar20;
  ushort uVar21;
  int iVar22;
  int iVar23;
  undefined1 auStackY_488 [32];
  undefined8 local_458;
  uint local_44c;
  FLLMScope local_448 [2];
  FRHITexture *local_440;
  uint local_438;
  TRefCountPtr<FRHITexture> local_430;
  FRHIGPUTextureReadback *local_428;
  TIntVector3<int> *local_420;
  FRHICommandListBase *local_418;
  TIntPoint<int>_u_0_s_0 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  int local_3f8;
  int iStack_3f4;
  FMemScope local_3f0;
  longlong local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  int iStack_3d4;
  FRHICommandBase *pFStack_3d0;
  int local_3c8;
  uint uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  longlong local_3b8;
  undefined4 local_3b0;
  uint local_3a8;
  undefined4 local_3a4;
  uint local_3a0;
  FName local_39c [2];
  FRHITransitionInfo *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  FString local_378;
  TArrayView<FRHITransitionInfo_const_,int> local_368;
  FRHITransitionInfo local_358;
  undefined4 local_328;
  undefined2 local_324;
  FRHITexture *local_320;
  undefined1 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined1 local_30c;
  undefined1 local_300;
  FRHITexture **local_2f8;
  TIntVector3<int> *local_2f0;
  uint *local_2e8;
  TIntVector3<int> *local_2e0;
  FRHITexture **local_2d8;
  TIntVector3<int> *local_2d0;
  uint *local_2c8;
  TIntVector3<int> *local_2c0;
  TArrayView<FRHITransitionInfo_const_,int> local_2b8;
  TArrayView<FRHITransitionInfo_const_,int> local_2a8;
  TArrayView<FRHITransitionInfo_const_,int> local_298;
  FRHITextureDesc local_288;
  FScriptContainerElement *local_238;
  int local_230;
  undefined4 local_22c;
  longlong local_228;
  undefined8 local_220;
  undefined8 local_218;
  FRHITextureDesc local_208;
  FScriptContainerElement *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  FRHITextureDesc local_188;
  FScriptContainerElement *local_138;
  ERHIAccess local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_108 [48];
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  FRHICommandListBase *local_a8;
  FRHITexture *local_a0;
  ulonglong local_78;
  
  pTVar8 = param_5;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_440 = param_2;
  local_428 = this;
  local_420 = param_3;
  local_418 = (FRHICommandListBase *)param_1;
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&param_1->field_0x29c;
  if (local_440 != (FRHITexture *)0x0) {
    lVar12 = (**(code **)(local_440->_padding_ + 0x20))();
    if ((1 < *(byte *)(lVar12 + 0x31)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!SourceTexture->IsMultisampled()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIGPUReadback.cpp"
                            ,0x6e,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_438 = (uint)this->_padding_;
    local_3a8 = 0;
    if (local_438 != 0) {
      for (; (local_438 >> local_3a8 & 1) == 0; local_3a8 = local_3a8 + 1) {
      }
    }
    uVar18 = 0x20;
    if (local_438 != 0) {
      uVar18 = (ulonglong)local_3a8;
    }
    local_44c = (uint)uVar18;
    local_3a4 = 0;
    if (local_438 != 0) {
      uVar9 = local_368._12_4_;
      uStack_3fc = local_368._12_4_;
      uStack_400 = 1;
      uVar6._4_4_ = local_368._12_4_;
      uVar6._0_4_ = 1;
      local_408 = (TIntPoint<int>_u_0_s_0)&local_328;
      do {
        FVar2.GPUMask = (((FRHICommandListBase *)param_1)->PersistentState).CurrentGPUMask.GPUMask;
        FRHIComputeCommandList::SetGPUMask
                  ((FRHIComputeCommandList *)param_1,(FRHIGPUMask)(1 << ((byte)uVar18 & 0x1f)));
        pTVar20 = this->DestinationStagingTextures + uVar18;
        if (pTVar20->Reference == (FRHITexture *)0x0) {
LAB_145c9e018:
          if (((pTVar8->field0_0x0)._s_0.X < 1) || ((pTVar8->field0_0x0)._s_0.Y < 1)) {
            lVar12 = (**(code **)(local_440->_padding_ + 0x20))();
            cVar1 = *(char *)(lVar12 + 0x32);
            if (cVar1 == '\0') {
LAB_145c9e07a:
              uVar21 = 1;
LAB_145c9e080:
              local_458 = *(undefined8 *)(lVar12 + 0x24);
            }
            else {
              if (cVar1 == '\x01') {
LAB_145c9e06c:
                uVar21 = *(ushort *)(lVar12 + 0x2e);
                goto LAB_145c9e080;
              }
              if (cVar1 == '\x02') {
                uVar21 = *(ushort *)(lVar12 + 0x2c);
                goto LAB_145c9e080;
              }
              if (cVar1 == '\x03') goto LAB_145c9e07a;
              if (cVar1 == '\x04') goto LAB_145c9e06c;
              local_458 = 0;
              uVar21 = 0;
            }
            iVar22 = (int)local_458;
            iVar23 = (int)((ulonglong)local_458 >> 0x20);
          }
          else {
            iVar22 = (int)*(undefined8 *)&pTVar8->field0_0x0;
            iVar23 = (int)((ulonglong)*(undefined8 *)&pTVar8->field0_0x0 >> 0x20);
            uVar21 = (ushort)(pTVar8->field0_0x0)._s_0.Z;
          }
          local_408.Y = iVar23;
          local_408.X = iVar22;
          local_39c[0] = *(FName *)(local_428->_padding_ + 0x1c);
          ::FName::ToString(local_39c,&local_378);
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_378.Data.ArrayNum != 0) {
            FVar19.Data = local_378.Data.AllocatorInstance.Data;
          }
          pFVar13 = (FRHITextureDesc *)(**(code **)(local_440->_padding_ + 0x20))();
          FRHITextureDesc::FRHITextureDesc(&local_208,pFVar13);
          local_3f8 = local_408.X;
          iStack_3f4 = local_408.Y;
          local_208.Extent.field0_0x0._s_0 = (TIntPoint<int>_u_0)local_408;
          local_1b0 = 0x2000;
          local_1a8 = 0;
          local_1a0 = 0;
          local_198 = 0;
          local_208.Flags = HideInVisualizeTexture|CPUReadback;
          local_1b8 = FVar19.Data;
          FRHITextureDesc::FRHITextureDesc(&local_288,&local_208);
          local_238 = local_1b8;
          local_230 = (int)local_1b0;
          local_22c = local_1b0._4_4_;
          local_228 = local_1a8;
          local_220 = local_1a0;
          local_218 = local_198;
          if (local_208.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_208.AliasableFormats.AllocatorInstance.SecondaryData);
          }
          if (GRHIGlobals.SupportLinearTextureVolumeFormat == false) {
            if (1 < (pTVar8->field0_0x0)._s_0.Z) {
              local_2d8 = &local_440;
              local_2c0 = pTVar8;
              local_2d0 = local_420;
              local_2c8 = &param_4;
              `FRHIGPUTextureReadback::EnqueueCopy'::__l39::<lambda_2>::operator()(&local_2d8);
            }
            local_288.Depth = 1;
            local_288.ArraySize = 1;
            local_288.Dimension = Texture2D;
          }
          else if (local_288.Dimension == Texture2DArray) {
LAB_145c9e1c8:
            if (1 < (pTVar8->field0_0x0)._s_0.Z) {
              local_2f8 = &local_440;
              local_2e0 = pTVar8;
              local_2f0 = local_420;
              local_2e8 = &param_4;
              `FRHIGPUTextureReadback::EnqueueCopy'::__l37::<lambda_1>::operator()(&local_2f8);
            }
            local_288.ArraySize = 1;
          }
          else if (local_288.Dimension == Texture3D) {
            local_288.Depth = uVar21;
          }
          else if (local_288.Dimension == TextureCubeArray) goto LAB_145c9e1c8;
          EVar17 = Textures;
          if (((undefined1)local_288.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
            EVar17 = RenderTargets;
          }
          FLLMScope::FLLMScope(local_448,EVar17,false,None,Default,true);
          EVar17 = Textures;
          if (((undefined1)local_288.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
            EVar17 = RenderTargets;
          }
          FMemScope::FMemScope(&local_3f0,EVar17,true);
          if (local_230 == 0) {
            FRHITextureDesc::FRHITextureDesc(&local_188,&local_288);
            local_138 = local_238;
            local_130 = local_230;
            local_12c = local_22c;
            local_120 = local_220;
            local_128 = local_228;
            local_118 = local_218;
            local_130 = RHIGetDefaultResourceState
                                  (CONCAT71(local_288.Flags._1_7_,(undefined1)local_288.Flags),
                                   local_228 != 0);
            (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_108,param_1);
            if (local_188.AliasableFormats.AllocatorInstance.SecondaryData !=
                (ForElementType<EPixelFormat>)0x0) {
              FMemory::Free((void *)local_188.AliasableFormats.AllocatorInstance.SecondaryData);
            }
          }
          else {
            (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_108,param_1);
          }
          FMemScope::~FMemScope(&local_3f0);
          FLLMScope::~FLLMScope(local_448);
          FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_108);
          if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHITexture *)0x0)) {
            FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_108);
          }
          if (local_d8 != 0) {
            plVar16 = local_c8;
            if (local_b0 != (longlong *)0x0) {
              plVar16 = local_b0;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (local_108._0_8_ != 0) {
            plVar16 = (longlong *)(local_108 + 0x10);
            if ((longlong *)local_108._40_8_ != (longlong *)0x0) {
              plVar16 = (longlong *)local_108._40_8_;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (pTVar20 == &local_430) {
LAB_145c9e449:
            if (local_430.Reference != (FRHITexture *)0x0) {
              FRHIResource::Release((FRHIResource *)local_430.Reference);
            }
          }
          else {
            pFVar3 = pTVar20->Reference;
            pTVar20->Reference = local_430.Reference;
            local_430.Reference = (FRHITexture *)0x0;
            if (pFVar3 != (FRHITexture *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar3);
              goto LAB_145c9e449;
            }
          }
          if (local_288.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_288.AliasableFormats.AllocatorInstance.SecondaryData);
          }
          param_3 = local_420;
          uVar11 = local_44c;
          if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.Data.AllocatorInstance.Data);
            param_3 = local_420;
          }
        }
        else {
          if (GRHIGlobals.SupportLinearTextureVolumeFormat != false) {
            lVar12 = (**(code **)(pTVar20->Reference->_padding_ + 0x20))();
            cVar1 = *(char *)(lVar12 + 0x32);
            lVar12 = (**(code **)(local_440->_padding_ + 0x20))();
            if (cVar1 != *(char *)(lVar12 + 0x32)) goto LAB_145c9e018;
            uVar18 = (ulonglong)local_44c;
          }
          uStack_37c = uVar9;
          uStack_380 = 1;
          local_358.AccessBefore = CPURead;
          local_358._padding_._4_2_ = 0xffff;
          local_358.field1_0x8.Resource = (FRHIResource *)pTVar20->Reference;
          uVar7._4_4_ = uVar9;
          uVar7._0_4_ = 1;
          local_358._padding_._0_4_ = 0xffffffff;
          local_358.Type = Texture;
          local_358.AccessAfter = CopyDest;
          local_358.Flags = None;
          local_358.CommitInfo.bIsSet = false;
          local_388 = &local_358;
          local_2b8.DataPtr = &local_358;
          local_2b8._8_8_ = uVar7;
          FRHICommandListBase::TransitionInternal((FRHICommandListBase *)param_1,&local_2b8,None);
          local_2a8.DataPtr = &local_358;
          local_2a8._8_8_ = uVar7;
          FRHIComputeCommandList::SetTrackedAccess
                    ((FRHIComputeCommandList *)param_1,&local_2a8,
                     ((FRHICommandListBase *)param_1)->ActivePipelines);
          uVar11 = (uint)uVar18;
        }
        pFVar3 = local_440;
        local_3e8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        iStack_3e0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        uStack_3dc = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        uStack_3d8 = (undefined4)
                     ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
        iStack_3d4 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        pFStack_3d0 = (FRHICommandBase *)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        local_3c8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        local_3b0 = 1;
        local_3b8 = 0;
        if ((-1 < (param_3->field0_0x0)._s_0.X) && (-1 < (param_3->field0_0x0)._s_0.Y)) {
          iStack_3d4 = (param_3->field0_0x0)._s_0.Z;
          uStack_3dc = (undefined4)*(undefined8 *)&param_3->field0_0x0;
          uStack_3d8 = (undefined4)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
        }
        if ((0 < (pTVar8->field0_0x0)._s_0.X) && (0 < (pTVar8->field0_0x0)._s_0.Y)) {
          local_3e8 = *(longlong *)&pTVar8->field0_0x0;
          iStack_3e0 = (pTVar8->field0_0x0)._s_0.Z;
        }
        uStack_3c4 = param_4;
        uStack_3c0 = 0;
        uStack_3bc = 1;
        pFVar4 = local_428->DestinationStagingTextures[uVar11].Reference;
        if (((local_440 == (FRHITexture *)0x0) || (pFVar4 == (FRHITexture *)0x0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceTextureRHI && DestTextureRHI",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                ,0x1077,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pFVar3 == pFVar4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceTextureRHI != DestTextureRHI",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                ,0x1078,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = local_418;
        if (((local_418->PersistentState).bInsideRenderPass != '\0') &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsOutsideRenderPass()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                ,0x1079,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((GRHICommandList.bLatchedBypass == false) ||
           ((this_00->PersistentState).bImmediate == '\0')) {
          pFVar15 = FMemStackBase::Alloc(&this_00->MemManager,0x60,8);
          local_418->NumCommands = local_418->NumCommands + 1;
          *local_418->CommandLink = pFVar15;
          local_418->CommandLink = &pFVar15->Next;
          pFVar15->Next = (FRHICommandBase *)0x0;
          pFVar15->_padding_ = (longlong)&___7FRHICommandCopyTexture__6B_;
          pFVar15[1]._padding_ = local_3e8;
          pFVar15[1].Next = (FRHICommandBase *)CONCAT44(uStack_3dc,iStack_3e0);
          pFVar15[2]._padding_ = CONCAT44(iStack_3d4,uStack_3d8);
          pFVar15[2].Next = pFStack_3d0;
          pFVar15[3]._padding_ = CONCAT44(uStack_3c4,local_3c8);
          pFVar15[3].Next = (FRHICommandBase *)CONCAT44(uStack_3bc,uStack_3c0);
          pFVar15[4]._padding_ = local_3b8;
          *(undefined4 *)&pFVar15[4].Next = local_3b0;
          pFVar15[5]._padding_ = (longlong)pFVar3;
          pFVar15[5].Next = (FRHICommandBase *)pFVar4;
          if ((pFVar3 == (FRHITexture *)0x0) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6604847226579585294>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x90e,"SourceTexture"), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pFVar15[5].Next == (FRHICommandBase *)0x0) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6604847226579585295>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x90f,"DestTexture"), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          pIVar14 = FRHICommandListBase::GetContext(this_00);
          (**(code **)(pIVar14->_padding_ + 0x260))(pIVar14,pFVar3);
        }
        param_1 = (FRHICommandList *)local_418;
        local_328 = 0xffffffff;
        local_324 = 0xffff;
        local_318 = 1;
        local_314 = 0x2000;
        local_30c = 0;
        local_320 = local_428->DestinationStagingTextures[uVar11].Reference;
        local_310 = 1;
        local_300 = 0;
        local_298.DataPtr = (FRHITransitionInfo *)&local_328;
        local_298._8_8_ = uVar6;
        FRHICommandListBase::TransitionInternal(local_418,&local_298,None);
        local_368.DataPtr = (FRHITransitionInfo *)&local_328;
        local_368._8_8_ = uVar6;
        FRHIComputeCommandList::SetTrackedAccess
                  ((FRHIComputeCommandList *)param_1,&local_368,
                   ((FRHICommandListBase *)param_1)->ActivePipelines);
        this = local_428;
        (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1);
        FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar2);
        local_438 = local_438 & ~(1 << ((byte)local_44c & 0x1f));
        local_44c = 0;
        if (local_438 != 0) {
          for (; (local_438 >> local_44c & 1) == 0; local_44c = local_44c + 1) {
          }
        }
        if (local_438 == 0) {
          return;
        }
        uVar18 = (ulonglong)local_44c;
        param_3 = local_420;
        local_3a0 = local_44c;
      } while( true );
    }
  }
  return;
}

// GetGPUSizeBytes @ 145ca9440

ulong64 __thiscall FRHIGPUTextureReadback::GetGPUSizeBytes(FRHIGPUTextureReadback *this)

{
  EPixelFormat EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FRHITextureDesc *pFVar6;
  ulong64 uVar7;
  byte bVar8;
  int iVar9;
  TRefCountPtr<FRHITexture> *pTVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong64 local_res18;
  longlong local_res20;
  
  uVar7 = 0;
  pTVar10 = this->DestinationStagingTextures;
  local_res18 = 0;
  local_res20 = 8;
  do {
    if (pTVar10->Reference != (FRHITexture *)0x0) {
      pFVar6 = (FRHITextureDesc *)(**(code **)(pTVar10->Reference->_padding_ + 0x20))();
      uVar11 = pFVar6->NumMips - 1;
      FRHITextureDesc::Validate(pFVar6,L"CalcMemorySizeEstimate",true);
      if ((pFVar6->NumMips == 0) || (pFVar6->NumMips <= uVar11)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FirstMipIndex < NumMips && FirstMipIndex <= LastMipIndex && LastMipIndex < NumMips"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                           ,0x737,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
      }
      EVar1 = pFVar6->Format;
      lVar12 = 0;
      uVar15 = 0;
      do {
        bVar8 = (byte)uVar15;
        iVar9 = (pFVar6->Extent).field0_0x0._s_0.X >> (bVar8 & 0x1f);
        uVar14 = (uint)(pFVar6->Depth >> (bVar8 & 0x1f));
        iVar13 = (pFVar6->Extent).field0_0x0._s_0.Y >> (bVar8 & 0x1f);
        iVar4 = 1;
        if (1 < iVar9) {
          iVar4 = iVar9;
        }
        iVar9 = 1;
        if (1 < iVar13) {
          iVar9 = iVar13;
        }
        uVar5 = 1;
        if (1 < uVar14) {
          uVar5 = uVar14;
        }
        uVar15 = uVar15 + 1;
        lVar12 = lVar12 + (ulonglong)
                          (uint)(((int)((uVar5 - 1) + GPixelFormats[EVar1].BlockSizeZ) /
                                 GPixelFormats[EVar1].BlockSizeZ) *
                                 ((iVar4 + -1 + GPixelFormats[EVar1].BlockSizeX) /
                                 GPixelFormats[EVar1].BlockSizeX) *
                                 ((iVar9 + -1 + GPixelFormats[EVar1].BlockSizeY) /
                                 GPixelFormats[EVar1].BlockSizeY) * GPixelFormats[EVar1].BlockBytes)
        ;
      } while (uVar15 <= uVar11);
      lVar12 = lVar12 * (ulonglong)pFVar6->NumSamples * (ulonglong)pFVar6->ArraySize;
      if ((pFVar6->Dimension == TextureCube) || (pFVar6->Dimension == TextureCubeArray)) {
        lVar12 = lVar12 * 6;
      }
      uVar7 = local_res18 + lVar12;
      local_res18 = uVar7;
    }
    pTVar10 = pTVar10 + 1;
    local_res20 = local_res20 + -1;
  } while (local_res20 != 0);
  return uVar7;
}

// Lock @ 145cb2860

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FRHIGPUTextureReadback::Lock(FRHIGPUTextureReadback *this,int *param_1,int *param_2)

{
  longlong lVar1;
  FRHITexture *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  int local_res20 [2];
  int local_38 [2];
  void *local_30;
  FMemScope local_28 [2];
  
  uVar3 = 0;
  bVar5 = (int)this->_padding_ != 0;
  if (bVar5) {
    for (; ((uint)this->_padding_ >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar4 = 0x20;
  if (bVar5) {
    uVar4 = (ulonglong)uVar3;
  }
  if (this->DestinationStagingTextures[uVar4].Reference != (FRHITexture *)0x0) {
    lVar1 = this->_padding_;
    *(int *)((longlong)&this->_padding_ + 4) = (int)uVar4;
    pFVar2 = this->DestinationStagingTextures[uVar4].Reference;
    local_30 = (void *)0x0;
    local_38[0] = 0;
    local_res20[0] = 0;
    FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
    FMemScope::FMemScope(local_28,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x428))
              (GDynamicRHI,0x154be5ed0,pFVar2,uVar4,lVar1,&local_30,local_38,local_res20);
    FMemScope::~FMemScope(local_28);
    FLLMScope::~FLLMScope(local_res8);
    if (param_2 != (int *)0x0) {
      *param_2 = local_res20[0];
    }
    *param_1 = local_38[0];
    return local_30;
  }
  *param_1 = 0;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  return (void *)0x0;
}

// Lock @ 145cb2990

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FRHIGPUTextureReadback::Lock(FRHIGPUTextureReadback *this,uint param_1)

{
  longlong lVar1;
  FRHITexture *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  FLLMScope local_res8 [5];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  void *local_28;
  FMemScope local_20;
  
  uVar3 = 0;
  bVar5 = (int)this->_padding_ != 0;
  if (bVar5) {
    for (; ((uint)this->_padding_ >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar4 = 0x20;
  if (bVar5) {
    uVar4 = (ulonglong)uVar3;
  }
  if (this->DestinationStagingTextures[uVar4].Reference != (FRHITexture *)0x0) {
    lVar1 = this->_padding_;
    *(int *)((longlong)&this->_padding_ + 4) = (int)uVar4;
    pFVar2 = this->DestinationStagingTextures[uVar4].Reference;
    local_28 = (void *)0x0;
    local_res20[0] = 0;
    local_res18[0] = 0;
    FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_20,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x428))
              (GDynamicRHI,0x154be5ed0,pFVar2,uVar4,lVar1,&local_28,local_res20,local_res18);
    FMemScope::~FMemScope(&local_20);
    FLLMScope::~FLLMScope(local_res8);
    return local_28;
  }
  return (void *)0x0;
}

// LockTexture @ 145cb31f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHIGPUTextureReadback::LockTexture
          (FRHIGPUTextureReadback *this,FRHICommandListImmediate *param_1,void **param_2,
          int *param_3)

{
  longlong lVar1;
  FRHITexture *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  int local_res18 [2];
  undefined4 local_38 [2];
  void *local_30;
  FMemScope local_28 [2];
  
  uVar3 = 0;
  bVar5 = (int)this->_padding_ != 0;
  if (bVar5) {
    for (; ((uint)this->_padding_ >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar4 = 0x20;
  if (bVar5) {
    uVar4 = (ulonglong)uVar3;
  }
  if (this->DestinationStagingTextures[uVar4].Reference != (FRHITexture *)0x0) {
    lVar1 = this->_padding_;
    *(int *)((longlong)&this->_padding_ + 4) = (int)uVar4;
    pFVar2 = this->DestinationStagingTextures[uVar4].Reference;
    local_30 = (void *)0x0;
    local_res18[0] = 0;
    local_38[0] = 0;
    FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
    FMemScope::FMemScope(local_28,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x428))
              (GDynamicRHI,0x154be5ed0,pFVar2,uVar4,lVar1,&local_30,local_res18,local_38);
    FMemScope::~FMemScope(local_28);
    FLLMScope::~FLLMScope(local_res8);
    *param_3 = local_res18[0];
    *param_2 = local_30;
    return;
  }
  *param_3 = 0;
  *param_2 = (void *)0x0;
  return;
}

// Unlock @ 145cc8220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHIGPUTextureReadback::Unlock(FRHIGPUTextureReadback *this)

{
  uint uVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  bool bVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->DestinationStagingTextures[*(uint *)((longlong)&this->_padding_ + 4)].Reference ==
      (FRHITexture *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4114345590282780940>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIGPUReadback.cpp"
                       ,0x10c,"DestinationStagingTextures[LastLockGPUIndex]");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  pFVar2 = this->DestinationStagingTextures[uVar1].Reference;
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x430))(GDynamicRHI,0x154be5ed0,pFVar2,uVar1);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// operator() @ 1504da6d0

bool __thiscall `FRHIGPUTextureReadback::EnqueueCopy'::__l37::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res18 [2];
  FString local_48;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4114345590282780831>);
  if (bVar2) {
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_48);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4114345590282780831>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504da7f2;
    }
  }
  bVar2 = false;
LAB_1504da7f2:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504da8e0

bool __thiscall `FRHIGPUTextureReadback::EnqueueCopy'::__l39::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res18 [2];
  FString local_48;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4114345590282780842>);
  if (bVar2) {
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_48);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4114345590282780842>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504daa02;
    }
  }
  bVar2 = false;
LAB_1504daa02:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

