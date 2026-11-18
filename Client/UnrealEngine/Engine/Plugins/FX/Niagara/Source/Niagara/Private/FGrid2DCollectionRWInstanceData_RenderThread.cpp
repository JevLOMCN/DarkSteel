// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FGrid2DCollectionRWInstanceData_RenderThread @ 1491685e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGrid2DCollectionRWInstanceData_RenderThread * __thiscall
FGrid2DCollectionRWInstanceData_RenderThread::FGrid2DCollectionRWInstanceData_RenderThread
          (FGrid2DCollectionRWInstanceData_RenderThread *this,
          FGrid2DCollectionRWInstanceData_RenderThread *param_1)

{
  bool bVar1;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar2;
  FNiagaraPooledRWTexture *pFVar3;
  double dVar4;
  
  this->SourceDIName = param_1->SourceDIName;
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  (this->NumCells).field0_0x0 = (param_1->NumCells).field0_0x0;
  this->NumAttributes = param_1->NumAttributes;
  dVar4 = (param_1->CellSize).field0_0x0._s_0.Y;
  (this->CellSize).field0_0x0._s_0.X = (param_1->CellSize).field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->WorldBBoxSize).field0_0x0._s_0.Y;
  (this->WorldBBoxSize).field0_0x0._s_0.X = (param_1->WorldBBoxSize).field0_0x0._s_0.X;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = dVar4;
  (this->PixelFormat).bIsSet = false;
  bVar1 = (param_1->PixelFormat).bIsSet;
  (this->PixelFormat).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->PixelFormat).TypedValue = (param_1->PixelFormat).TypedValue;
  }
  (this->Buffers).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
        )0x0;
  if ((param_1->Buffers).AllocatorInstance.SecondaryData ==
      (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
      )0x0) {
    memmove(&this->Buffers,&param_1->Buffers,0x10);
  }
  FVar2 = (this->Buffers).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
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
  pFVar3 = param_1->DestinationData;
  (this->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
  this->DestinationData = pFVar3;
  (this->RenderTargetToCopyTo).Reference = (param_1->RenderTargetToCopyTo).Reference;
  (param_1->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
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
  this->OtherProxy = param_1->OtherProxy;
  return this;
}

// ~FGrid2DCollectionRWInstanceData_RenderThread @ 14916ae90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FGrid2DCollectionRWInstanceData_RenderThread::~FGrid2DCollectionRWInstanceData_RenderThread
          (FGrid2DCollectionRWInstanceData_RenderThread *this)

{
  FScriptContainerElement *pFVar1;
  FRHITexture *this_00;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar2;
  
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
  this_00 = (this->RenderTargetToCopyTo).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
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
  return;
}

// BeginSimulate @ 149170670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGrid2DCollectionRWInstanceData_RenderThread::BeginSimulate
          (FGrid2DCollectionRWInstanceData_RenderThread *this,FRDGBuilder *param_1,bool param_2)

{
  int *piVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  FNiagaraPooledRWTexture *pFVar9;
  FNiagaraPooledRWTexture *pFVar10;
  FRDGTextureUAV *pFVar11;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar12;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar13;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  int local_d0;
  int iStack_cc;
  TVector4<float>_u_0 local_c8;
  FLinearColor local_b8;
  undefined1 local_a8 [24];
  float local_90;
  int local_8c;
  undefined4 local_88;
  TIntPoint<int>_u_0_s_0 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined1 local_76;
  EPixelFormat local_75;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar8 = (this->Buffers).ArrayNum;
  FVar12 = (this->Buffers).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                 )0x0) {
    FVar12 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
              )&this->Buffers;
  }
  FVar13 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
            )((longlong)FVar12 + (longlong)iVar8 * 8);
  while( true ) {
    if ((this->Buffers).ArrayNum != iVar8) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (FVar12 == FVar13) goto LAB_149170720;
    if ((*(longlong *)FVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                           ,0xa7a,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(FNiagaraPooledRWTexture **)FVar12 != this->CurrentData) || (!param_2)) break;
    FVar12 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
              )((longlong)FVar12 + 8);
  }
  this->DestinationData = *(FNiagaraPooledRWTexture **)FVar12;
LAB_149170720:
  if ((this->DestinationData == (FNiagaraPooledRWTexture *)0x0) &&
     ((this->PixelFormat).bIsSet != false)) {
    pFVar9 = ::operator_new(0x28);
    pFVar10 = (FNiagaraPooledRWTexture *)0x0;
    if (pFVar9 != (FNiagaraPooledRWTexture *)0x0) {
      (pFVar9->Texture).Reference = (IPooledRenderTarget *)0x0;
      pFVar9->TransientRDGTexture = (FRDGTexture *)0x0;
      pFVar9->TransientRDGSRV = (FRDGTextureSRV *)0x0;
      pFVar9->TransientRDGUAV = (FRDGTextureUAV *)0x0;
      pFVar9->NumBytes = 0;
      pFVar10 = pFVar9;
    }
    this->DestinationData = pFVar10;
    iVar8 = (this->Buffers).ArrayNum;
    piVar1 = &(this->Buffers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>_>
                        (0x808,&(this->Buffers).AllocatorInstance,piVar1);
    }
    (this->Buffers).ArrayNum = iVar8 + 1;
    FVar12 = (this->Buffers).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
              )&this->Buffers;
    if (FVar12 != (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                   )0x0) {
      FVar13 = FVar12;
    }
    *(FNiagaraPooledRWTexture **)((longlong)FVar13 + (longlong)iVar8 * 8) = this->DestinationData;
    uVar6 = FClearValueBinding::Black.Value.Color[3];
    uVar5 = FClearValueBinding::Black.Value._4_8_;
    uVar4 = FClearValueBinding::Black._0_8_;
    uVar2 = *(undefined2 *)&this->NumAttributes;
    if (((this->PixelFormat).bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_84 = (this->NumCells).field0_0x0._s_0;
    local_d0 = local_84.X;
    iStack_cc = local_84.Y;
    local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_75 = (this->PixelFormat).TypedValue;
    local_7c = 1;
    local_76 = 1;
    local_5c = 1;
    local_a8._0_8_ = 0x20008;
    local_a8._8_8_ = uVar4;
    local_a8._16_8_ = uVar5;
    local_90 = (float)uVar6;
    local_88 = 0;
    local_78 = 0x101;
    local_74 = 0xff00;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_7a = uVar2;
    FNiagaraPooledRWTexture::InitializeInternal
              (this->DestinationData,param_1,L"Grid2D::GridTexture",(FRDGTextureDesc *)local_a8);
    local_c8._0_8_ = 0;
    local_c8._8_8_ = 0;
    FLinearColor::FLinearColor(&local_b8,(TVector4<float> *)&local_c8._s_0);
    pFVar11 = FNiagaraPooledRWTexture::GetOrCreateUAV(this->DestinationData,param_1);
    AddClearUAVPass(param_1,pFVar11,&local_b8,Compute);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}

// EndSimulate @ 149178930

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FGrid2DCollectionRWInstanceData_RenderThread::EndSimulate
          (FGrid2DCollectionRWInstanceData_RenderThread *this)

{
  this->CurrentData = this->DestinationData;
  this->DestinationData = (FNiagaraPooledRWTexture *)0x0;
  return;
}

