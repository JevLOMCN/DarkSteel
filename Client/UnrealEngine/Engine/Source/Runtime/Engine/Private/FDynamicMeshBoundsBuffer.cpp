// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DispatchClearSlots @ 147c43330

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FDynamicMeshBoundsBuffer::DispatchClearSlots
          (FDynamicMeshBoundsBuffer *this,FRHICommandList *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  int iVar1;
  atomic<unsigned_int> aVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  FRHIResource *this_00;
  FInitDynamicMeshBoundsCS *pFVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  FGlobalShaderMap *this_01;
  FGlobalShaderType *pFVar10;
  FShaderType *pFVar11;
  FName this_02;
  FShaderParametersMetadata *pFVar12;
  FRHIComputeShader *pFVar13;
  FRHIBatchedShaderUnbinds *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FRHIResource *local_res20;
  FRHIResource *local_188;
  TShaderRefBase<FInitDynamicMeshBoundsCS,FShaderMapPointerTable> local_178;
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  wchar_t *local_158;
  undefined1 *puStack_150;
  ERHIAccess local_148;
  undefined4 uStack_144;
  longlong lStack_140;
  longlong local_138;
  undefined1 local_130 [64];
  FShaderMapBase *pFStack_f0;
  int local_e8 [2];
  FRHIResource *local_e0;
  FRHIUnorderedAccessView *local_d8;
  undefined1 local_c8 [8];
  FString local_c0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  longlong local_98;
  longlong lStack_90;
  wchar_t *local_88;
  undefined1 *puStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  
  lVar18 = 8;
  lVar8 = 8;
  if ((this->Allocator).bGrowOnly == false) {
    lVar8 = 4;
  }
  if ((*(int *)((this->Allocator).FreeSpans.AllocatorInstance.InlineData + lVar8 + -0x10) != 0) &&
     (param_2->NumBits != 0)) {
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    local_168 = (param_2->NumBits + 0x1fU >> 5) << 2;
    uVar16 = 1;
    local_130._16_8_ = param_2;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      local_130._16_8_ = FVar3;
    }
    local_130._8_8_ = &___7FResourceArrayUploadArrayView__6B_;
    iStack_15c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_158 = L"DynamicMeshBoundsBuffer.SlotsToClearMaskBuffer";
    local_188 = (FRHIResource *)0x0;
    uStack_164 = 4;
    uStack_160 = 0x10104;
    lStack_140 = 0;
    local_138 = 0;
    local_130._24_4_ = local_168;
    local_148 = RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|Volatile,false);
    local_98 = CONCAT44(uStack_164,local_168);
    lStack_90 = CONCAT44(iStack_15c,uStack_160);
    puStack_150 = local_130 + 8;
    uStack_144 = 2;
    local_78 = CONCAT44(2,local_148);
    local_88 = local_158;
    local_68 = local_138;
    lStack_70 = lStack_140;
    puStack_80 = puStack_150;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)&local_res20);
    this_00 = local_res20;
    local_130._8_8_ = &___7FResourceArrayUploadInterface__6B_;
    local_res20 = (FRHIResource *)0x0;
    local_130._32_8_ = 0;
    local_130._40_8_ = 0;
    if ((this_00 == (FRHIResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TargetBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xb15,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar2 = this_00[9].AtomicFlags.Packed;
    if (((uint)aVar2 >> 0x14 & 1) != 0) {
      if (((((int)this_00[9]._padding_ != 0) || (*(int *)((longlong)&this_00[9]._padding_ + 4) != 0)
           ) || (aVar2 != (atomic<unsigned_int>)0x100000)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x54f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TargetBuffer->GetDesc().IsNull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xb16,
                         L"Null buffer resources are placeholders for the streaming system. They do not contain a valid descriptor for this function to use. Call SetType() instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    aVar2 = this_00[9].AtomicFlags.Packed;
    if (((uint)aVar2 & 0x10) == 0) {
      if (((uint)aVar2 >> 0x10 & 1) == 0) {
        bVar7 = (byte)((uint)aVar2 >> 0xc) & 2 | 1;
      }
      else {
        bVar7 = 2;
      }
    }
    else {
      bVar7 = 4;
    }
    local_130[0x22] = bVar7;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_130,
                       (FInitializer *)this_00);
    if ((FRHIShaderResourceView *)&stack0xffffffffffffffa8 != TVar9.Reference) {
      local_188 = *(FRHIResource **)TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
    }
    if ((FRHIResource *)local_130._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_130._0_8_);
    }
    local_d8 = (this->MeshBoundsBuffer).UAV.Reference;
    if ((this->Allocator).bGrowOnly == false) {
      lVar18 = 4;
    }
    local_e8[0] = *(int *)((this->Allocator).FreeSpans.AllocatorInstance.InlineData + lVar18 + -0x10
                          );
    local_e0 = local_188;
    this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar10 = FInitDynamicMeshBoundsCS::GetStaticType();
    if (*(int *)&pFVar10->field_0x50 != 1) {
      local_res8[0] = 0;
      `FGlobalShaderMap::GetShader<FInitDynamicMeshBoundsCS>'::__l2::<lambda_1>::operator()
                (local_res8);
    }
    pFVar11 = (FShaderType *)FInitDynamicMeshBoundsCS::GetStaticType();
    FGlobalShaderMap::GetShader
              (this_01,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_130 + 0x38),pFVar11,
               0);
    if ((FShader *)local_130._56_8_ == (FShader *)0x0) {
      this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c8);
      ::FName::ToString((FName *)this_02,&local_c0);
      FInitDynamicMeshBoundsCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FInitDynamicMeshBoundsCS::GetStaticType();
    local_178.ShaderContent = (FInitDynamicMeshBoundsCS *)local_130._56_8_;
    local_178.ShaderMap = pFStack_f0;
    uVar15 = (int)((local_e8[0] + 0x3f >> 0x1f & 0x3fU) + local_e8[0] + 0x3f) >> 6;
    if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
        (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                           ,400,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar19 = 1;
    uVar17 = uVar15;
    if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar15) {
      uVar17 = 0x80;
      uVar16 = (int)(((int)(uVar15 + 0x7f) >> 0x1f & 0x7fU) + uVar15 + 0x7f) >> 7;
    }
    if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < (int)uVar16) {
      iVar1 = uVar16 + 0x7f;
      uVar16 = 0x80;
      uVar19 = (int)((iVar1 >> 0x1f & 0x7fU) + iVar1) >> 7;
    }
    if (((int)(uVar17 * uVar16 * uVar19) < (int)uVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                           ,0x19f,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar12 = FInitDynamicMeshBoundsCS::FParameters::FTypeInfo::GetStructMetadata();
    if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar17) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<9083860753072521649>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                           ,0x1b1,
                           "GroupCount.X <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < (int)uVar16) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<9083860753072521650>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                           ,0x1b2,
                           "GroupCount.Y <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z < (int)uVar19) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<9083860753072521651>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                           ,0x1b3,
                           "GroupCount.Z <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Z"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar13 = TShaderRefBase<FInitDynamicMeshBoundsCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_178);
    SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar13);
    pFVar5 = local_178.ShaderContent;
    local_a8.ShaderContent = (FShader *)local_178.ShaderContent;
    local_a8.ShaderMap = local_178.ShaderMap;
    ValidateShaderParameters(&local_a8,pFVar12,local_e8);
    ::SetShaderParameters
              ((FRHIComputeCommandList *)param_1,pFVar13,(FShaderParameterBindings *)pFVar5,pFVar12,
               local_e8);
    FRHIComputeCommandList::DispatchComputeShader
              ((FRHIComputeCommandList *)param_1,uVar17,uVar16,uVar19);
    pFVar13 = TShaderRefBase<FInitDynamicMeshBoundsCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_178);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar14 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
      if ((((FShaderParameterBindings *)&pFVar5->field_0x0)->RootParameterBufferIndex != 0xffff) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnsetShaderUAVs(pFVar14,(FShaderParameterBindings *)pFVar5);
      FRHIComputeCommandList::SetBatchedShaderUnbinds
                ((FRHIComputeCommandList *)param_1,pFVar13,pFVar14);
    }
    if (local_188 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_188);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// Update @ 147c8e190

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDynamicMeshBoundsShaderParameters * __thiscall
FDynamicMeshBoundsBuffer::Update
          (FDynamicMeshBoundsBuffer *this,FDynamicMeshBoundsShaderParameters *__return_storage_ptr__
          ,FRHICommandList *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FRHITransitionInfo local_88;
  FRHITransitionInfo local_58;
  
  lVar7 = 8;
  lVar4 = 8;
  if ((this->Allocator).bGrowOnly == false) {
    lVar4 = 4;
  }
  iVar6 = *(int *)((this->Allocator).FreeSpans.AllocatorInstance.InlineData + lVar4 + -0x10);
  iVar3 = 1;
  if (iVar6 != 0) {
    iVar3 = iVar6;
  }
  uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar6 = 1 << ((byte)lVar4 & 0x1f);
  if (iVar6 < 0x80) {
    iVar6 = 0x80;
  }
  ResizeResourceIfNeeded<FRWBufferStructured>
            (param_1,&this->MeshBoundsBuffer,iVar6 << 5,L"DynamicMeshBoundsBuffer.MeshBoundsBuffer")
  ;
  local_a8.ArrayNum = 1;
  local_88._padding_._4_2_ = 0xffff;
  local_88.field1_0x8 = (FRHITransitionInfo_u_8)(this->MeshBoundsBuffer).UAV.Reference;
  local_a8.DataPtr = &local_88;
  local_88._padding_._0_4_ = 0xffffffff;
  local_98.ArrayNum = 1;
  local_98._12_4_ = local_a8._12_4_;
  local_88.Type = UAV;
  local_88.AccessBefore = None;
  local_88.AccessAfter = UAVCompute;
  local_88.Flags = None;
  local_88.CommitInfo.bIsSet = false;
  local_98.DataPtr = local_a8.DataPtr;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,&local_98,AllowDecayPipelines);
  DispatchClearSlots(this,param_1,&this->SlotsToClearMask);
  local_a8.ArrayNum = 1;
  local_58._padding_._0_4_ = 0xffffffff;
  local_58._padding_._4_2_ = 0xffff;
  local_58.field1_0x8 = (FRHITransitionInfo_u_8)(this->MeshBoundsBuffer).UAV.Reference;
  local_a8.DataPtr = &local_58;
  local_58.Type = UAV;
  local_58.AccessBefore = UAVCompute;
  local_58.AccessAfter = UAVCompute;
  local_58.Flags = None;
  local_58.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
  DispatchClearSlots(this,param_1,param_2);
  lVar4 = 8;
  if ((this->Allocator).bGrowOnly == false) {
    lVar4 = 4;
  }
  iVar6 = *(int *)((this->Allocator).FreeSpans.AllocatorInstance.InlineData + lVar4 + -0x10);
  (this->SlotsToClearMask).NumBits = 0;
  uVar5 = iVar6 + 0x1fU & 0xffffffe0;
  iVar6 = (this->SlotsToClearMask).MaxBits;
  if ((iVar6 < (int)uVar5) || (0x80 < iVar6)) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar2 = uVar5;
    }
    (this->SlotsToClearMask).MaxBits = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->SlotsToClearMask,0);
  }
  if ((this->Allocator).bGrowOnly == false) {
    lVar7 = 4;
  }
  __return_storage_ptr__->DynamicMeshBoundsBuffer = (this->MeshBoundsBuffer).SRV.Reference;
  __return_storage_ptr__->DynamicMeshBoundsMax =
       *(uint *)((this->Allocator).FreeSpans.AllocatorInstance.InlineData + lVar7 + -0x10);
  return __return_storage_ptr__;
}

