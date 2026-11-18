// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FGrid3DCollectionRWInstanceData_RenderThread @ 149168c70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGrid3DCollectionRWInstanceData_RenderThread * __thiscall
FGrid3DCollectionRWInstanceData_RenderThread::FGrid3DCollectionRWInstanceData_RenderThread
          (FGrid3DCollectionRWInstanceData_RenderThread *this,
          FGrid3DCollectionRWInstanceData_RenderThread *param_1)

{
  bool bVar1;
  uint uVar2;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar3;
  FNiagaraPooledRWTexture *pFVar4;
  double dVar5;
  
  this->SourceDIName = param_1->SourceDIName;
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  *(undefined8 *)&(this->NumCells).field0_0x0 = *(undefined8 *)&(param_1->NumCells).field0_0x0;
  (this->NumCells).field0_0x0._s_0.Z = (param_1->NumCells).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NumTiles).field0_0x0 = *(undefined8 *)&(param_1->NumTiles).field0_0x0;
  (this->NumTiles).field0_0x0._s_0.Z = (param_1->NumTiles).field0_0x0._s_0.Z;
  this->TotalNumAttributes = param_1->TotalNumAttributes;
  this->TotalNumNamedAttributes = param_1->TotalNumNamedAttributes;
  dVar5 = (param_1->CellSize).field0_0x0._s_0.Y;
  (this->CellSize).field0_0x0._s_0.X = (param_1->CellSize).field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = dVar5;
  (this->CellSize).field0_0x0._s_0.Z = (param_1->CellSize).field0_0x0._s_0.Z;
  dVar5 = (param_1->WorldBBoxSize).field0_0x0._s_0.Y;
  (this->WorldBBoxSize).field0_0x0._s_0.X = (param_1->WorldBBoxSize).field0_0x0._s_0.X;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = dVar5;
  (this->WorldBBoxSize).field0_0x0._s_0.Z = (param_1->WorldBBoxSize).field0_0x0._s_0.Z;
  (this->PixelFormat).bIsSet = false;
  bVar1 = (param_1->PixelFormat).bIsSet;
  (this->PixelFormat).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->PixelFormat).TypedValue = (param_1->PixelFormat).TypedValue;
  }
  this->UseRGBATexture = param_1->UseRGBATexture;
  (this->AttributeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeIndices).AllocatorInstance.Data =
       (param_1->AttributeIndices).AllocatorInstance.Data;
  (param_1->AttributeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeIndices).ArrayNum = (param_1->AttributeIndices).ArrayNum;
  (this->AttributeIndices).ArrayMax = (param_1->AttributeIndices).ArrayMax;
  (param_1->AttributeIndices).ArrayNum = 0;
  (param_1->AttributeIndices).ArrayMax = 0;
  (this->Vars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vars).AllocatorInstance.Data = (param_1->Vars).AllocatorInstance.Data;
  (param_1->Vars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vars).ArrayNum = (param_1->Vars).ArrayNum;
  (this->Vars).ArrayMax = (param_1->Vars).ArrayMax;
  (param_1->Vars).ArrayNum = 0;
  (param_1->Vars).ArrayMax = 0;
  (this->VarComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VarComponents).AllocatorInstance.Data = (param_1->VarComponents).AllocatorInstance.Data;
  (param_1->VarComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VarComponents).ArrayNum = (param_1->VarComponents).ArrayNum;
  (this->VarComponents).ArrayMax = (param_1->VarComponents).ArrayMax;
  (param_1->VarComponents).ArrayNum = 0;
  (param_1->VarComponents).ArrayMax = 0;
  (this->Offsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Offsets).AllocatorInstance.Data = (param_1->Offsets).AllocatorInstance.Data;
  (param_1->Offsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Offsets).ArrayNum = (param_1->Offsets).ArrayNum;
  (this->Offsets).ArrayMax = (param_1->Offsets).ArrayMax;
  (param_1->Offsets).ArrayNum = 0;
  (param_1->Offsets).ArrayMax = 0;
  (this->Buffers).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
        )0x0;
  if ((param_1->Buffers).AllocatorInstance.SecondaryData ==
      (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
      )0x0) {
    memmove(&this->Buffers,&param_1->Buffers,0x10);
  }
  FVar3 = (this->Buffers).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->Buffers).AllocatorInstance.SecondaryData =
       (param_1->Buffers).AllocatorInstance.SecondaryData;
  (param_1->Buffers).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
        )0x0;
  (this->Buffers).ArrayNum = (param_1->Buffers).ArrayNum;
  (this->Buffers).ArrayMax = (param_1->Buffers).ArrayMax;
  (param_1->Buffers).ArrayNum = 0;
  (param_1->Buffers).ArrayMax = 2;
  this->CurrentData = param_1->CurrentData;
  pFVar4 = param_1->DestinationData;
  (this->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
  this->DestinationData = pFVar4;
  (this->PerAttributeData).Buffer.Reference = (param_1->PerAttributeData).Buffer.Reference;
  (param_1->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PerAttributeData).SRV.Reference = (param_1->PerAttributeData).SRV.Reference;
  (param_1->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar2 = (param_1->PerAttributeData).NumBytes;
  (this->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
  (this->PerAttributeData).NumBytes = uVar2;
  (this->RenderTargetToCopyTo).Reference = (param_1->RenderTargetToCopyTo).Reference;
  (param_1->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
  (this->AttributeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeNames).AllocatorInstance.Data = (param_1->AttributeNames).AllocatorInstance.Data;
  (param_1->AttributeNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeNames).ArrayNum = (param_1->AttributeNames).ArrayNum;
  (this->AttributeNames).ArrayMax = (param_1->AttributeNames).ArrayMax;
  (param_1->AttributeNames).ArrayNum = 0;
  (param_1->AttributeNames).ArrayMax = 0;
  this->OtherProxy = param_1->OtherProxy;
  return this;
}

// ~FGrid3DCollectionRWInstanceData_RenderThread @ 14916af30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FGrid3DCollectionRWInstanceData_RenderThread::~FGrid3DCollectionRWInstanceData_RenderThread
          (FGrid3DCollectionRWInstanceData_RenderThread *this)

{
  FScriptContainerElement *pFVar1;
  FRHITexture *this_00;
  FRHIShaderResourceView *this_01;
  FRHIBuffer *this_02;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar2;
  
  pFVar1 = (this->AttributeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->RenderTargetToCopyTo).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->PerAttributeData).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->PerAttributeData).Buffer.Reference;
  if (this_02 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  FVar2 = (this->Buffers).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )0x0) {
    FVar2 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
             )&this->Buffers;
  }
  DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int>
            ((TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_> *)FVar2,
             (this->Buffers).ArrayNum);
  FVar2 = (this->Buffers).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->Offsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VarComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// BeginSimulate @ 1491708e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGrid3DCollectionRWInstanceData_RenderThread::BeginSimulate
          (FGrid3DCollectionRWInstanceData_RenderThread *this,FRDGBuilder *param_1,bool param_2)

{
  int *piVar1;
  EPixelFormat EVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  FRDGBuilder *pFVar7;
  bool bVar8;
  int iVar9;
  FNiagaraPooledRWTexture *pFVar10;
  FNiagaraPooledRWTexture *pFVar11;
  FRDGTextureUAV *pFVar12;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar13;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  int local_e0;
  int iStack_dc;
  FRDGBuilder *local_d8;
  TVector4<float>_u_0 local_c8;
  FLinearColor local_b8;
  undefined1 local_a8 [24];
  float local_90;
  int local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  EPixelFormat local_75;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar9 = (this->Buffers).ArrayNum;
  FVar13 = (this->Buffers).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                 )0x0) {
    FVar13 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
              )&this->Buffers;
  }
  FVar14 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
            )((longlong)FVar13 + (longlong)iVar9 * 8);
  local_d8 = param_1;
  while( true ) {
    if ((this->Buffers).ArrayNum != iVar9) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (FVar13 == FVar14) goto LAB_149170995;
    if ((*(longlong *)FVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0xf57,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(FNiagaraPooledRWTexture **)FVar13 != this->CurrentData) || (!param_2)) break;
    FVar13 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
              )((longlong)FVar13 + 8);
  }
  this->DestinationData = *(FNiagaraPooledRWTexture **)FVar13;
LAB_149170995:
  if ((this->DestinationData == (FNiagaraPooledRWTexture *)0x0) &&
     ((this->PixelFormat).bIsSet != false)) {
    pFVar10 = ::operator_new(0x28);
    pFVar11 = (FNiagaraPooledRWTexture *)0x0;
    if (pFVar10 != (FNiagaraPooledRWTexture *)0x0) {
      (pFVar10->Texture).Reference = (IPooledRenderTarget *)0x0;
      pFVar10->TransientRDGTexture = (FRDGTexture *)0x0;
      pFVar10->TransientRDGSRV = (FRDGTextureSRV *)0x0;
      pFVar10->TransientRDGUAV = (FRDGTextureUAV *)0x0;
      pFVar10->NumBytes = 0;
      pFVar11 = pFVar10;
    }
    this->DestinationData = pFVar11;
    iVar9 = (this->Buffers).ArrayNum;
    piVar1 = &(this->Buffers).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>_>
                        (0x808,&(this->Buffers).AllocatorInstance,piVar1);
    }
    (this->Buffers).ArrayNum = iVar9 + 1;
    FVar13 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
              )&this->Buffers;
    if (FVar13 != (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                   )0x0) {
      FVar14 = FVar13;
    }
    *(FNiagaraPooledRWTexture **)((longlong)FVar14 + (longlong)iVar9 * 8) = this->DestinationData;
    uVar6 = FClearValueBinding::Black.Value.Color[3];
    uVar5 = FClearValueBinding::Black.Value._4_8_;
    uVar4 = FClearValueBinding::Black._0_8_;
    iVar16 = (this->NumTiles).field0_0x0._s_0.X * (this->NumCells).field0_0x0._s_0.X;
    iVar15 = (this->NumTiles).field0_0x0._s_0.Y * (this->NumCells).field0_0x0._s_0.Y;
    iVar9 = (this->NumTiles).field0_0x0._s_0.Z * (this->NumCells).field0_0x0._s_0.Z;
    if (((this->PixelFormat).bIsSet == false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar2 = (this->PixelFormat).TypedValue;
    if ((0xffff < iVar9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                           ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = local_d8;
    local_88 = 0;
    local_68 = (void *)0x0;
    local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_60 = 0;
    local_5c = 1;
    local_84._4_4_ = iVar15;
    local_84._0_4_ = iVar16;
    local_a8._0_8_ = 0x20008;
    local_a8._8_8_ = uVar4;
    local_a8._16_8_ = uVar5;
    local_90 = (float)uVar6;
    local_7c = (undefined2)iVar9;
    local_7a = 0x1010001;
    local_76 = 2;
    local_74 = 0xff00;
    local_e0 = iVar16;
    iStack_dc = iVar15;
    local_75 = EVar2;
    FNiagaraPooledRWTexture::InitializeInternal
              (this->DestinationData,local_d8,L"Grid3D::GridTexture",(FRDGTextureDesc *)local_a8);
    local_c8._0_8_ = 0;
    local_c8._8_8_ = 0;
    FLinearColor::FLinearColor(&local_b8,(TVector4<float> *)&local_c8._s_0);
    pFVar12 = FNiagaraPooledRWTexture::GetOrCreateUAV(this->DestinationData,pFVar7);
    AddClearUAVPass(pFVar7,pFVar12,&local_b8,Compute);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}

// EndSimulate @ 149178950

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FGrid3DCollectionRWInstanceData_RenderThread::EndSimulate
          (FGrid3DCollectionRWInstanceData_RenderThread *this)

{
  this->CurrentData = this->DestinationData;
  this->DestinationData = (FNiagaraPooledRWTexture *)0x0;
  return;
}

