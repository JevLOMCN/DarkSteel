// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FGPUSkinPassthroughVertexFactory @ 147cc37d0

FGPUSkinPassthroughVertexFactory * __thiscall
FGPUSkinPassthroughVertexFactory::FGPUSkinPassthroughVertexFactory
          (FGPUSkinPassthroughVertexFactory *this,Type param_1,EVertexAttributeFlags param_2,
          uint param_3)

{
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)this,param_1,"FGPUSkinPassthroughVertexFactory");
  this->_padding_ = (longlong)&___7FGPUSkinPassthroughVertexFactory__6B_;
  this->LooseParametersUniformBuffer =
       (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0;
  (this->SourceStreamBuffers).Elements[0] = (FRHIBuffer *)0x0;
  (this->SourceStreamBuffers).Elements[1] = (FRHIBuffer *)0x0;
  (this->SourceStreamBuffers).Elements[2] = (FRHIBuffer *)0x0;
  (this->StreamSourceSlots).Elements[0].Reference = (FRHIStreamSourceSlot *)0x0;
  (this->StreamSourceSlots).Elements[1].Reference = (FRHIStreamSourceSlot *)0x0;
  (this->StreamSourceSlots).Elements[2].Reference = (FRHIStreamSourceSlot *)0x0;
  (this->SRVs).Elements[0] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[1] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[2] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[3] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[4] = (FRHIShaderResourceView *)0x0;
  this->PreSkinnedTangentSRV = (FRHIShaderResourceView *)0x0;
  this->VertexAttributesToBind = None;
  this->TangentFormat = PF_Unknown;
  this->NumVertices = param_3;
  this->UpdatedFrameNumber = 0xffffffff;
  this->VertexAttributesRequested = param_2;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// GetOverrideVertexStreams @ 147d0a7d0

void __thiscall
FGPUSkinPassthroughVertexFactory::GetOverrideVertexStreams
          (FGPUSkinPassthroughVertexFactory *this,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  ForElementType<FVertexInputStream> FVar2;
  FRHIStreamSourceSlot *pFVar3;
  int iVar4;
  ForElementType<FVertexInputStream> FVar5;
  
  piVar1 = &param_1->ArrayMax;
  if ((this->VertexAttributesToBind & Position) != None) {
    iVar4 = param_1->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                        (0x40c,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar4 + 1;
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    pFVar3 = (this->StreamSourceSlots).Elements[0].Reference;
    FVar5 = (ForElementType<FVertexInputStream>)param_1;
    if (FVar2 != (ForElementType<FVertexInputStream>)0x0) {
      FVar5 = FVar2;
    }
    *(undefined4 *)((longlong)FVar5 + (longlong)iVar4 * 0xc) = 0x80000000;
    *(FRHIStreamSourceSlot **)((uchar *)((longlong)FVar5 + 4) + (longlong)iVar4 * 0xc) = pFVar3;
  }
  if ((this->VertexAttributesToBind & Tangent) != None) {
    iVar4 = param_1->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                        (0x40c,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar4 + 1;
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    pFVar3 = (this->StreamSourceSlots).Elements[1].Reference;
    FVar5 = (ForElementType<FVertexInputStream>)param_1;
    if (FVar2 != (ForElementType<FVertexInputStream>)0x0) {
      FVar5 = FVar2;
    }
    *(undefined4 *)((longlong)FVar5 + (longlong)iVar4 * 0xc) = 0x80000001;
    *(FRHIStreamSourceSlot **)((uchar *)((longlong)FVar5 + 4) + (longlong)iVar4 * 0xc) = pFVar3;
  }
  if ((this->VertexAttributesToBind & Color) != None) {
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                        (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar4;
    }
    param_1->ArrayNum = iVar4 + 1;
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    pFVar3 = (this->StreamSourceSlots).Elements[2].Reference;
    if (FVar2 != (ForElementType<FVertexInputStream>)0x0) {
      param_1 = (TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    *(undefined4 *)((longlong)param_1 + (longlong)iVar4 * 0xc) = 0x80000002;
    *(FRHIStreamSourceSlot **)((uchar *)((longlong)param_1 + 4) + (longlong)iVar4 * 0xc) = pFVar3;
  }
  return;
}

// GetVertexElements @ 147d12220

void __cdecl
FGPUSkinPassthroughVertexFactory::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,bool param_3,FDataType *param_4,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_5)

{
  if (!param_3) {
    *(undefined2 *)((longlong)&param_4->_padding_ + 5) = 0xe10;
    *(undefined1 *)((longlong)&param_4->_padding_ + 4) = 0;
    *(undefined2 *)((longlong)&param_4->_padding_ + 5) = 0xe10;
    *(undefined1 *)((longlong)&param_4->_padding_ + 4) = 8;
  }
  FLocalVertexFactory::GetVertexElements(param_1,param_2,param_3,param_4,param_5);
  return;
}

// InitRHI @ 147d17060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGPUSkinPassthroughVertexFactory::InitRHI
          (FGPUSkinPassthroughVertexFactory *this,FRHICommandListBase *param_1)

{
  TStaticArray<TRefCountPtr<FRHIStreamSourceSlot>,3,4294967295> *pTVar1;
  byte *pbVar2;
  TRefCountPtr<FRHIStreamSourceSlot> *pTVar3;
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> *pTVar4;
  byte bVar5;
  EPixelFormat EVar6;
  FRHIBuffer *pFVar7;
  FRHIStreamSourceSlot *pFVar8;
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> this_00;
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> TVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  longlong lVar14;
  FRHIStreamSourceSlot *pFVar15;
  FShaderParametersMetadata *pFVar16;
  TRefCountPtr<FRHIUniformBuffer> TVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  Type TVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  FRHIResource *local_res8;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [32];
  
  bVar5 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar20 = (uint)bVar5;
  if (bVar5 == 5) {
    TVar20 = GMaxRHIFeatureLevel;
  }
  lVar14 = (**(code **)(this->_padding_ + 0x30))();
  if (((*(uint *)(lVar14 + 0x38) & 0x4000) == 0) ||
     (bVar11 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar20), !bVar11)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  puVar22 = (undefined8 *)&GNullVertexBuffer.field_0x20;
  if ((this->VertexAttributesRequested & Position) != None) {
    puVar21 = (undefined8 *)(this->_padding_ + 0x20);
    if (this->_padding_ == 0) {
      puVar21 = (undefined8 *)&GNullVertexBuffer.field_0x20;
    }
    pFVar7 = (FRHIBuffer *)*puVar21;
    (this->SourceStreamBuffers).Elements[0] = pFVar7;
    pFVar15 = ::operator_new(0x20);
    if (pFVar15 == (FRHIStreamSourceSlot *)0x0) {
      pFVar15 = (FRHIStreamSourceSlot *)0x0;
    }
    else {
      FRHIResource::FRHIResource((FRHIResource *)pFVar15,RRT_StreamSourceSlot);
      pFVar15->_padding_ = (longlong)&___7FRHIStreamSourceSlot__6B_;
      (pFVar15->Buffer).Reference = pFVar7;
      if (pFVar7 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar7);
      }
      FRHIResource::AddRef((FRHIResource *)pFVar15);
    }
    pTVar1 = &this->StreamSourceSlots;
    if (pTVar1 != (TStaticArray<TRefCountPtr<FRHIStreamSourceSlot>,3,4294967295> *)&local_68) {
      pFVar8 = pTVar1->Elements[0].Reference;
      pTVar1->Elements[0].Reference = pFVar15;
      pFVar15 = pFVar8;
    }
    if (pFVar15 != (FRHIStreamSourceSlot *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar15);
    }
    pbVar2 = (byte *)((longlong)&this->_padding_ + 7);
    *pbVar2 = *pbVar2 | 2;
    this->VertexAttributesToBind = this->VertexAttributesToBind | Position;
    *(undefined2 *)((longlong)&this->_padding_ + 4) = 0xc00;
  }
  if ((this->VertexAttributesRequested & Color) != None) {
    if ((!bVar11) || ((this->_padding_ & 0x400000000000000) == 0)) {
      puVar21 = (undefined8 *)(this->_padding_ + 0x20);
      if (this->_padding_ == 0) {
        puVar21 = (undefined8 *)&GNullVertexBuffer.field_0x20;
      }
      pFVar7 = (FRHIBuffer *)*puVar21;
      (this->SourceStreamBuffers).Elements[2] = pFVar7;
      pFVar15 = ::operator_new(0x20);
      if (pFVar15 == (FRHIStreamSourceSlot *)0x0) {
        pFVar15 = (FRHIStreamSourceSlot *)0x0;
      }
      else {
        FRHIResource::FRHIResource((FRHIResource *)pFVar15,RRT_StreamSourceSlot);
        pFVar15->_padding_ = (longlong)&___7FRHIStreamSourceSlot__6B_;
        (pFVar15->Buffer).Reference = pFVar7;
        if (pFVar7 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar7);
        }
        FRHIResource::AddRef((FRHIResource *)pFVar15);
      }
      pTVar3 = (this->StreamSourceSlots).Elements + 2;
      if (pTVar3 != (TRefCountPtr<FRHIStreamSourceSlot> *)&local_60) {
        pFVar8 = pTVar3->Reference;
        pTVar3->Reference = pFVar15;
        pFVar15 = pFVar8;
      }
      if (pFVar15 != (FRHIStreamSourceSlot *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar15);
      }
      *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x400;
      *(undefined1 *)((longlong)&this->_padding_ + 6) = 8;
      pbVar2 = (byte *)((longlong)&this->_padding_ + 7);
      *pbVar2 = *pbVar2 | 2;
      this->VertexAttributesToBind = this->VertexAttributesToBind | Color;
    }
    *(undefined4 *)&this->_padding_ = 0xffffffff;
  }
  if ((FRHIShaderResourceView *)this->_padding_ != (FRHIShaderResourceView *)0x0) {
    this->PreSkinnedTangentSRV = (FRHIShaderResourceView *)this->_padding_;
  }
  this->TangentFormat = PF_R16G16B16A16_SNORM;
  uVar23 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar23].bContainsValidPlatformInfo == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0xc1,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar23].Language == LANGUAGE_OpenGL) {
    this->TangentFormat = PF_R16G16B16A16_SINT;
  }
  if (((this->VertexAttributesRequested & Tangent) != None) &&
     ((!bVar11 || ((this->_padding_ & 0x400000000000000) == 0)))) {
    EVar6 = this->TangentFormat;
    if (this->_padding_ != 0) {
      puVar22 = (undefined8 *)(this->_padding_ + 0x20);
    }
    pFVar7 = (FRHIBuffer *)*puVar22;
    (this->SourceStreamBuffers).Elements[1] = pFVar7;
    pFVar15 = ::operator_new(0x20);
    if (pFVar15 == (FRHIStreamSourceSlot *)0x0) {
      pFVar15 = (FRHIStreamSourceSlot *)0x0;
    }
    else {
      FRHIResource::FRHIResource((FRHIResource *)pFVar15,RRT_StreamSourceSlot);
      pFVar15->_padding_ = (longlong)&___7FRHIStreamSourceSlot__6B_;
      (pFVar15->Buffer).Reference = pFVar7;
      if (pFVar7 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar7);
      }
      FRHIResource::AddRef((FRHIResource *)pFVar15);
    }
    pTVar3 = (this->StreamSourceSlots).Elements + 1;
    if (pTVar3 != (TRefCountPtr<FRHIStreamSourceSlot> *)&local_58) {
      pFVar8 = pTVar3->Reference;
      pTVar3->Reference = pFVar15;
      pFVar15 = pFVar8;
    }
    if (pFVar15 != (FRHIStreamSourceSlot *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar15);
    }
    pbVar2 = (byte *)((longlong)&this->_padding_ + 7);
    *pbVar2 = *pbVar2 | 2;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    uVar19 = 0xe;
    if (EVar6 == PF_R8G8B8A8_SNORM) {
      uVar19 = 5;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 6) = uVar19;
    uVar13 = 8;
    uVar18 = 0x10;
    if (EVar6 == PF_R8G8B8A8_SNORM) {
      uVar18 = uVar13;
    }
    pbVar2 = (byte *)((longlong)&this->_padding_ + 7);
    *pbVar2 = *pbVar2 | 2;
    *(undefined1 *)((longlong)&this->_padding_ + 5) = uVar18;
    *(undefined1 *)((longlong)&this->_padding_ + 6) = uVar19;
    if (EVar6 == PF_R8G8B8A8_SNORM) {
      uVar13 = 4;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 5) = uVar18;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = uVar13;
    this->VertexAttributesToBind = this->VertexAttributesToBind | Tangent;
  }
  local_48._8_8_ = GNullVertexBuffer._40_8_;
  local_48._16_8_ = GNullVertexBuffer._40_8_;
  local_48._24_8_ = GNullVertexBuffer._40_8_;
  local_48._0_4_ = 0xffffffff;
  pFVar16 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
  if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TVar17 = RHICreateUniformBuffer
                     (&local_res8,(FRHIUniformBufferLayout *)local_48,
                      (EUniformBufferUsage)(pFVar16->Layout).Reference,2);
  this_00 = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)
            (TVar17.Reference)->_padding_;
  if (this_00 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar16 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
    if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((FName)(pFVar16->Layout).Reference != *(FName *)((longlong)this_00 + 0x40)) {
      pFVar16 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
      if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pTVar4 = &this->LooseParametersUniformBuffer;
  if (pTVar4 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> *)&local_50) {
    TVar9 = *pTVar4;
    *pTVar4 = this_00;
    this_00 = TVar9;
  }
  if (this_00 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FLocalVertexFactory::InitRHI((FLocalVertexFactory *)this,param_1);
  return;
}

// ReleaseRHI @ 147d21360

void __thiscall FGPUSkinPassthroughVertexFactory::ReleaseRHI(FGPUSkinPassthroughVertexFactory *this)

{
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> this_00;
  FRHIResource *this_01;
  
  this_00 = this->LooseParametersUniformBuffer;
  if (this_00 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
    this->LooseParametersUniformBuffer =
         (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_01);
  }
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  return;
}

// ResetVertexAttributes @ 147d24c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSkinPassthroughVertexFactory::ResetVertexAttributes
          (FGPUSkinPassthroughVertexFactory *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FRHIStreamSourceSlot *pFVar4;
  FRHIBuffer *pFVar5;
  FRHIBuffer *pFVar6;
  FRHICommandBase *pFVar7;
  undefined8 *local_res8;
  
  pFVar4 = (this->StreamSourceSlots).Elements[0].Reference;
  if (pFVar4 != (FRHIStreamSourceSlot *)0x0) {
    pFVar5 = (this->SourceStreamBuffers).Elements[0];
    if (GRHICommandList.bLatchedBypass) {
      if ((param_1->PersistentState).bImmediate == '\0') {
        if ((!GRHICommandList.bLatchedBypass) || ((param_1->PersistentState).bImmediate == '\0'))
        goto LAB_147d24cf5;
        goto LAB_147d24cfb;
      }
      pFVar6 = (pFVar4->Buffer).Reference;
      if (pFVar6 != pFVar5) {
        (pFVar4->Buffer).Reference = pFVar5;
        if (pFVar5 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar5);
        }
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
    }
    else {
LAB_147d24cf5:
      if (param_1->bExecuting == false) {
        pFVar7 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar7;
        param_1->CommandLink = &pFVar7->Next;
        pFVar7->Next = (FRHICommandBase *)0x0;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__O___UpdateStreamSourceSlot_1_QEAAXPEAVFRHIStreamSourceSlot__PEAVFRHIBuffer___Z___6B_
        ;
        pFVar7[1]._padding_ = (longlong)param_1;
        pFVar7[1].Next = (FRHICommandBase *)pFVar4;
        pFVar7[2]._padding_ = (longlong)pFVar5;
        pFVar7[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
      }
      else {
LAB_147d24cfb:
        pFVar6 = (pFVar4->Buffer).Reference;
        if (pFVar6 != pFVar5) {
          (pFVar4->Buffer).Reference = pFVar5;
          if (pFVar5 != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar5);
          }
          if (pFVar6 != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
        }
      }
      FRHICommandListBase::RHIThreadFence(param_1,true);
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res8 + 6);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (local_res8 != (undefined8 *)0x0)) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
  }
  pFVar4 = (this->StreamSourceSlots).Elements[1].Reference;
  if (pFVar4 != (FRHIStreamSourceSlot *)0x0) {
    pFVar5 = (this->SourceStreamBuffers).Elements[1];
    if (GRHICommandList.bLatchedBypass == false) {
LAB_147d24e68:
      if (param_1->bExecuting == false) {
        pFVar7 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar7;
        param_1->CommandLink = &pFVar7->Next;
        pFVar7->Next = (FRHICommandBase *)0x0;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__O___UpdateStreamSourceSlot_1_QEAAXPEAVFRHIStreamSourceSlot__PEAVFRHIBuffer___Z___6B_
        ;
        pFVar7[1]._padding_ = (longlong)param_1;
        pFVar7[1].Next = (FRHICommandBase *)pFVar4;
        pFVar7[2]._padding_ = (longlong)pFVar5;
        pFVar7[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
      }
      else {
LAB_147d24e6e:
        pFVar6 = (pFVar4->Buffer).Reference;
        if (pFVar6 != pFVar5) {
          (pFVar4->Buffer).Reference = pFVar5;
          if (pFVar5 != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar5);
          }
          if (pFVar6 != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
        }
      }
      FRHICommandListBase::RHIThreadFence(param_1,true);
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res8 + 6);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (local_res8 != (undefined8 *)0x0)) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
    else {
      if ((param_1->PersistentState).bImmediate == '\0') {
        if ((GRHICommandList.bLatchedBypass == false) ||
           ((param_1->PersistentState).bImmediate == '\0')) goto LAB_147d24e68;
        goto LAB_147d24e6e;
      }
      pFVar6 = (pFVar4->Buffer).Reference;
      if (pFVar6 != pFVar5) {
        (pFVar4->Buffer).Reference = pFVar5;
        if (pFVar5 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar5);
        }
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
    }
  }
  pFVar4 = (this->StreamSourceSlots).Elements[2].Reference;
  if (pFVar4 == (FRHIStreamSourceSlot *)0x0) goto LAB_147d24fd4;
  pFVar5 = (this->SourceStreamBuffers).Elements[2];
  if (GRHICommandList.bLatchedBypass == false) {
LAB_147d24f33:
    if (param_1->bExecuting != false) goto LAB_147d24f39;
    pFVar7 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar7;
    param_1->CommandLink = &pFVar7->Next;
    pFVar7->Next = (FRHICommandBase *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__O___UpdateStreamSourceSlot_1_QEAAXPEAVFRHIStreamSourceSlot__PEAVFRHIBuffer___Z___6B_
    ;
    pFVar7[1]._padding_ = (longlong)param_1;
    pFVar7[1].Next = (FRHICommandBase *)pFVar4;
    pFVar7[2]._padding_ = (longlong)pFVar5;
    pFVar7[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    if ((param_1->PersistentState).bImmediate != '\0') {
      pFVar6 = (pFVar4->Buffer).Reference;
      if (pFVar6 != pFVar5) {
        (pFVar4->Buffer).Reference = pFVar5;
        if (pFVar5 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar5);
        }
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar6);
        }
      }
      goto LAB_147d24fd4;
    }
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0')
       ) goto LAB_147d24f33;
LAB_147d24f39:
    pFVar6 = (pFVar4->Buffer).Reference;
    if (pFVar6 != pFVar5) {
      (pFVar4->Buffer).Reference = pFVar5;
      if (pFVar5 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar5);
      }
      if (pFVar6 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar6);
      }
    }
  }
  FRHICommandListBase::RHIThreadFence(param_1,true);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
LAB_147d24fd4:
  (this->SRVs).Elements[0] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[1] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[2] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[3] = (FRHIShaderResourceView *)0x0;
  (this->SRVs).Elements[4] = (FRHIShaderResourceView *)0x0;
  this->UpdatedFrameNumber = 0xffffffff;
  return;
}

// SetVertexAttributes @ 147d2b870

/* WARNING: Removing unreachable block (ram,0x000147d2bb1d) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSkinPassthroughVertexFactory::SetVertexAttributes
          (FGPUSkinPassthroughVertexFactory *this,FRHICommandListBase *param_1,
          FGPUBaseSkinVertexFactory *param_2,FAddVertexAttributeDesc *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FRHIShaderResourceView *pFVar4;
  FRHICommandBase *pFVar5;
  FRHIBuffer *this_00;
  FRHIBuffer *pFVar6;
  FRHICommandBase *pFVar7;
  longlong *plVar8;
  TStaticArray<FRHIBuffer_*,3,4294967295> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  FAddVertexAttributeDesc *pFVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool local_res8;
  undefined8 *local_70;
  FRHIResource *local_68 [2];
  uint local_58 [2];
  FRHIShaderResourceView *local_50;
  FRHIShaderResourceView *local_48;
  FRHIShaderResourceView *local_40;
  
  pFVar4 = (param_3->SRVs).Elements[0];
  uVar10 = 0;
  bVar13 = (this->SRVs).Elements[0] != pFVar4;
  if (bVar13) {
    (this->SRVs).Elements[0] = pFVar4;
  }
  pFVar4 = (param_3->SRVs).Elements[1];
  bVar14 = (this->SRVs).Elements[1] != pFVar4;
  if (bVar14) {
    (this->SRVs).Elements[1] = pFVar4;
  }
  pFVar4 = (param_3->SRVs).Elements[2];
  bVar15 = (this->SRVs).Elements[2] != pFVar4;
  if (bVar15) {
    (this->SRVs).Elements[2] = pFVar4;
  }
  pFVar4 = (param_3->SRVs).Elements[3];
  bVar16 = (this->SRVs).Elements[3] != pFVar4;
  if (bVar16) {
    (this->SRVs).Elements[3] = pFVar4;
  }
  local_res8 = bVar16 || bVar15;
  pFVar4 = (param_3->SRVs).Elements[4];
  if ((this->SRVs).Elements[4] == pFVar4) {
    if ((!bVar16 && !bVar15) && (bVar15 = false, !bVar14 && !bVar13)) goto LAB_147d2badd;
  }
  else {
    (this->SRVs).Elements[4] = pFVar4;
    local_res8 = true;
  }
  bVar15 = local_res8;
  pFVar12 = param_3;
  do {
    pFVar12 = (FAddVertexAttributeDesc *)&pFVar12->StreamBuffers;
    pFVar5 = *(FRHICommandBase **)((longlong)this + (0x248 - (longlong)param_3) + (longlong)pFVar12)
    ;
    if (pFVar5 != (FRHICommandBase *)0x0) {
      pTVar9 = &param_3->StreamBuffers;
      if (((TStaticArray<FRHIBuffer_*,3,4294967295> *)pFVar12)->Elements[0] == (FRHIBuffer *)0x0) {
        pTVar9 = &this->SourceStreamBuffers;
      }
      this_00 = pTVar9->Elements[uVar10];
      if (GRHICommandList.bLatchedBypass == false) {
LAB_147d2b9f3:
        if (param_1->bExecuting == false) {
          pFVar7 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
          param_1->NumCommands = param_1->NumCommands + 1;
          *param_1->CommandLink = pFVar7;
          param_1->CommandLink = &pFVar7->Next;
          pFVar7->Next = (FRHICommandBase *)0x0;
          pFVar7->_padding_ =
               (longlong)
               &
               ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__O___UpdateStreamSourceSlot_1_QEAAXPEAVFRHIStreamSourceSlot__PEAVFRHIBuffer___Z___6B_
          ;
          pFVar7[1]._padding_ = (longlong)param_1;
          pFVar7[1].Next = pFVar5;
          pFVar7[2]._padding_ = (longlong)this_00;
          pFVar7[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
        }
        else {
LAB_147d2ba46:
          pFVar6 = (FRHIBuffer *)pFVar5[1].Next;
          if (pFVar6 != this_00) {
            pFVar5[1].Next = (FRHICommandBase *)this_00;
            if (this_00 != (FRHIBuffer *)0x0) {
              FRHIResource::AddRef((FRHIResource *)this_00);
            }
            if (pFVar6 != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar6);
            }
          }
        }
        FRHICommandListBase::RHIThreadFence(param_1,SUB81(&local_70,0));
        if (local_70 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_70 + 6);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar3 == 1) && (local_70 != (undefined8 *)0x0)) {
            (**(code **)*local_70)(local_70,1);
          }
        }
      }
      else {
        if ((param_1->PersistentState).bImmediate == '\0') {
          if ((GRHICommandList.bLatchedBypass == false) ||
             ((param_1->PersistentState).bImmediate == '\0')) goto LAB_147d2b9f3;
          goto LAB_147d2ba46;
        }
        pFVar6 = (FRHIBuffer *)pFVar5[1].Next;
        if (pFVar6 != this_00) {
          pFVar5[1].Next = (FRHICommandBase *)this_00;
          if (this_00 != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)this_00);
          }
          if (pFVar6 != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
        }
      }
    }
    uVar11 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar11;
  } while ((int)uVar11 < 3);
LAB_147d2badd:
  uVar11 = param_3->FrameNumber;
  bVar16 = this->UpdatedFrameNumber != uVar11;
  if (bVar16) {
    this->UpdatedFrameNumber = uVar11;
  }
  if (bVar15) {
    UpdateUniformBuffer(this,param_1,param_2);
  }
  if (bVar16 || (bVar14 || bVar13)) {
    local_50 = (this->SRVs).Elements[0];
    uVar11 = param_3->FrameNumber;
    if (local_50 == (FRHIShaderResourceView *)0x0) {
      plVar8 = (longlong *)(**(code **)(param_2->_padding_ + 0x88))(param_2,local_68);
      local_50 = (FRHIShaderResourceView *)*plVar8;
      if (local_68[0] != (FRHIResource *)0x0) {
        FRHIResource::Release(local_68[0]);
      }
    }
    pFVar4 = (this->SRVs).Elements[1];
    local_48 = local_50;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      local_48 = pFVar4;
    }
    local_40 = this->PreSkinnedTangentSRV;
    local_58[0] = uVar11;
    FRHICommandListBase::UpdateUniformBuffer
              (param_1,(FRHIUniformBuffer *)this->LooseParametersUniformBuffer,local_58);
  }
  return;
}

// SupportsPositionAndNormalOnlyStream @ 147d32b10

bool __thiscall
FGPUSkinPassthroughVertexFactory::SupportsPositionAndNormalOnlyStream
          (FGPUSkinPassthroughVertexFactory *this)

{
  return false;
}

// SupportsPositionOnlyStream @ 147d32b20

bool __thiscall
FGPUSkinPassthroughVertexFactory::SupportsPositionOnlyStream(FGPUSkinPassthroughVertexFactory *this)

{
  return false;
}

// UpdateLooseUniformBuffer @ 147d385b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSkinPassthroughVertexFactory::UpdateLooseUniformBuffer
          (FGPUSkinPassthroughVertexFactory *this,FRHICommandListBase *param_1,
          FGPUBaseSkinVertexFactory *param_2,uint param_3)

{
  FRHIShaderResourceView *pFVar1;
  longlong *plVar2;
  FRHIResource *local_res8;
  uint local_38 [2];
  FRHIShaderResourceView *local_30;
  FRHIShaderResourceView *local_28;
  FRHIShaderResourceView *local_20;
  
  local_30 = (this->SRVs).Elements[0];
  if (local_30 == (FRHIShaderResourceView *)0x0) {
    plVar2 = (longlong *)(**(code **)(param_2->_padding_ + 0x88))(param_2,&local_res8);
    local_30 = (FRHIShaderResourceView *)*plVar2;
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  pFVar1 = (this->SRVs).Elements[1];
  local_28 = local_30;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    local_28 = pFVar1;
  }
  local_20 = this->PreSkinnedTangentSRV;
  local_38[0] = param_3;
  FRHICommandListBase::UpdateUniformBuffer
            (param_1,(FRHIUniformBuffer *)this->LooseParametersUniformBuffer,local_38);
  return;
}

// UpdateUniformBuffer @ 147d390c0

/* WARNING: Removing unreachable block (ram,0x000147d39235) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGPUSkinPassthroughVertexFactory::UpdateUniformBuffer
          (FGPUSkinPassthroughVertexFactory *this,FRHICommandListBase *param_1,
          FGPUBaseSkinVertexFactory *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  Type TVar5;
  undefined4 uVar6;
  longlong *plVar7;
  FRHIShaderResourceView *pFVar8;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FRHIResource *local_res20;
  FRHIResource *local_78 [2];
  FLocalVertexFactoryUniformShaderParameters local_68;
  
  local_res8 = 0;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar5 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar5 = GMaxRHIFeatureLevel;
  }
  if (TVar5 == Num) {
    EVar4 = SP_NumPlatforms;
  }
  else {
    EVar4 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar5];
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar4].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar4].bSupportsManualVertexFetch != 0) {
    pFVar8 = (this->SRVs).Elements[2];
    if (pFVar8 == (FRHIShaderResourceView *)0x0) {
      plVar7 = (longlong *)(**(code **)(param_2->_padding_ + 0x90))(param_2,&local_res8);
      this->_padding_ = *plVar7;
      if ((FRHIResource *)CONCAT44(uStackX_c,local_res8) != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)CONCAT44(uStackX_c,local_res8));
      }
    }
    else {
      this->_padding_ = (longlong)pFVar8;
    }
    pFVar8 = (this->SRVs).Elements[3];
    bVar3 = pFVar8 == (FRHIShaderResourceView *)0x0;
    if (bVar3) {
      plVar7 = (longlong *)(**(code **)(param_2->_padding_ + 0xa0))(param_2,&local_res20);
      pFVar8 = (FRHIShaderResourceView *)*plVar7;
    }
    this->_padding_ = (longlong)pFVar8;
    if ((bVar3) && (local_res20 != (FRHIResource *)0x0)) {
      FRHIResource::Release(local_res20);
    }
    if ((this->SRVs).Elements[3] == (FRHIShaderResourceView *)0x0) {
      uVar6 = (**(code **)(param_2->_padding_ + 0xb0))(param_2);
    }
    else {
      uVar6 = (undefined4)this->_padding_;
    }
    *(undefined4 *)&this->_padding_ = uVar6;
    pFVar8 = (this->SRVs).Elements[4];
    if (pFVar8 == (FRHIShaderResourceView *)0x0) {
      plVar7 = (longlong *)(**(code **)(param_2->_padding_ + 0x98))(param_2,local_78);
      this->_padding_ = *plVar7;
      if (local_78[0] != (FRHIResource *)0x0) {
        FRHIResource::Release(local_78[0]);
      }
    }
    else {
      this->_padding_ = (longlong)pFVar8;
    }
    local_68.VertexFetch_PositionBuffer = (FRHIShaderResourceView *)0x0;
    local_68.VertexFetch_PreSkinPositionBuffer = (FRHIShaderResourceView *)0x0;
    local_68.VertexFetch_PackedTangentsBuffer = (FRHIShaderResourceView *)0x0;
    local_68.VertexFetch_ColorComponentsBuffer = (FRHIShaderResourceView *)0x0;
    local_68.VertexFetch_TexCoordBuffer = (FRHIShaderResourceView *)0x0;
    GetLocalVFUniformShaderParameters
              (&local_68,(FLocalVertexFactory *)this,(uint)*(byte *)((longlong)&this->_padding_ + 6)
               ,(FColorVertexBuffer *)0x0,0,0);
    FRHICommandListBase::UpdateUniformBuffer(param_1,(FRHIUniformBuffer *)this->_padding_,&local_68)
    ;
  }
  return;
}

