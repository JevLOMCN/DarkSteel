// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// CreateManualVertexFetchUniformBuffer @ 147c40880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCacheVertexVertexFactory::CreateManualVertexFetchUniformBuffer
          (FGeometryCacheVertexVertexFactory *this,FRHICommandListBase *param_1,
          FVertexBuffer *param_2,FVertexBuffer *param_3,FGeometryCacheVertexFactoryUserData *param_4
          )

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIUniformBuffer> *pTVar2;
  int iVar3;
  FRHIShaderResourceView *pFVar4;
  FVertexBuffer *pFVar5;
  FRHIUniformBuffer *this_00;
  FRHIUniformBuffer *pFVar6;
  code *pcVar7;
  undefined8 this_01;
  FGeometryCacheVertexFactoryUserData *pFVar8;
  bool bVar9;
  TRefCountPtr<FRHIShaderResourceView> TVar10;
  FShaderParametersMetadata *pFVar11;
  TRefCountPtr<FRHIUniformBuffer> TVar12;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  undefined1 local_e8 [40];
  ForAnyElementType local_c0;
  undefined1 local_b8 [16];
  FRHIResource *local_a8;
  ForAnyElementType local_a0;
  longlong lStack_98;
  ForAnyElementType local_90;
  longlong lStack_88;
  ForAnyElementType local_80;
  longlong lStack_78;
  ForAnyElementType local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  
  pFVar8 = param_4;
  local_e8._0_8_ = GDefaultGeometryCacheVertexBuffer._40_8_;
  if (param_2 != (FVertexBuffer *)0x0) {
    lStack_98 = 0;
    local_a0.Data = (FScriptContainerElement *)0x10d00;
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)&param_4,
                        (FInitializer *)(param_2->VertexBufferRHI).Reference);
    pTVar1 = &pFVar8->PositionSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if (param_4 != (FGeometryCacheVertexFactoryUserData *)0x0) {
      FRHIResource::Release((FRHIResource *)param_4);
    }
    local_e8._0_8_ = pTVar1->Reference;
  }
  pFVar5 = (this->Data).TangentBasisComponents[0].VertexBuffer;
  if (pFVar5 == (FVertexBuffer *)0x0) {
    local_e8._16_8_ = GDummyTangentBuffer._40_8_;
  }
  else {
    lStack_88 = 0;
    local_90.Data = (FScriptContainerElement *)0x13d00;
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)&local_res8,
                        (FInitializer *)(pFVar5->VertexBufferRHI).Reference);
    pTVar1 = &pFVar8->TangentXSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    local_e8._16_8_ = pTVar1->Reference;
  }
  pFVar5 = (this->Data).TangentBasisComponents[1].VertexBuffer;
  local_e8._24_8_ = GDummyTangentBuffer._40_8_;
  if (pFVar5 != (FVertexBuffer *)0x0) {
    lStack_78 = 0;
    local_80.Data = (FScriptContainerElement *)0x13d00;
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)&local_res18,
                        (FInitializer *)(pFVar5->VertexBufferRHI).Reference);
    pTVar1 = &pFVar8->TangentZSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
    local_e8._24_8_ = pTVar1->Reference;
  }
  this_01 = GNullColorVertexBuffer._40_8_;
  pFVar5 = (this->Data).ColorComponent.VertexBuffer;
  pTVar1 = &pFVar8->ColorSRV;
  if (pFVar5 == (FVertexBuffer *)0x0) {
    pFVar4 = pTVar1->Reference;
    if (pFVar4 != (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_) {
      pTVar1->Reference = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
      if (this_01 != 0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
  }
  else {
    lStack_68 = 0;
    local_70.Data = (FScriptContainerElement *)0x10200;
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)&local_res20,
                        (FInitializer *)(pFVar5->VertexBufferRHI).Reference);
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  local_e8._32_8_ = pTVar1->Reference;
  if (param_3 == (FVertexBuffer *)0x0) {
    local_e8._8_8_ = GDefaultGeometryCacheVertexBuffer._40_8_;
    if (param_2 != (FVertexBuffer *)0x0) {
      local_e8._8_8_ = (pFVar8->PositionSRV).Reference;
    }
  }
  else {
    lStack_58 = 0;
    local_60 = 0x10d00;
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_b8,
                        (FInitializer *)(param_3->VertexBufferRHI).Reference);
    pTVar1 = &pFVar8->MotionBlurDataSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_b8._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8._0_8_);
    }
    local_e8._8_8_ = pTVar1->Reference;
  }
  iVar3 = (this->Data).TextureCoordinates.ArrayNum;
  local_c0.Data = (FScriptContainerElement *)GDefaultGeometryCacheVertexBuffer._40_8_;
  if (iVar3 != 0) {
    if ((1 < iVar3) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data.TextureCoordinates.Num() <= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                           ,0x1c6,
                           L"We\'re assuming FGeometryCacheSceneProxy uses only one TextureCoordinates vertex buffer"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lStack_48 = 0;
    local_50 = 0x10d00;
    if (((this->Data).TextureCoordinates.ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TVar10 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)(local_b8 + 8),
                        *(FInitializer **)
                         (*(longlong *)
                           (this->Data).TextureCoordinates.AllocatorInstance.InlineData[0].Pad +
                         0x20));
    pTVar1 = &pFVar8->TexCoordsSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar10.Reference) {
      pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar10.Reference;
      *(undefined8 *)TVar10.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_b8._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8._8_8_);
    }
    local_c0.Data = (FScriptContainerElement *)pTVar1->Reference;
  }
  pFVar11 = FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata();
  if (((pFVar11->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TVar12 = RHICreateUniformBuffer
                     (&local_a8,(FRHIUniformBufferLayout *)local_e8,
                      (EUniformBufferUsage)(pFVar11->Layout).Reference,ValidateResources);
  this_00 = (FRHIUniformBuffer *)(TVar12.Reference)->_padding_;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar11 = FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata();
    if (((pFVar11->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar11->Layout).Reference != (this_00->Layout).Reference) {
      pFVar11 = FGeometryCacheManualVertexFetchUniformBufferParameters::GetStructMetadata();
      if (((pFVar11->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  if (local_a8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_a8);
  }
  pTVar2 = &pFVar8->ManualVertexFetchUniformBuffer;
  if (pTVar2 != (TRefCountPtr<FRHIUniformBuffer> *)&local_40) {
    pFVar6 = pTVar2->Reference;
    pTVar2->Reference = this_00;
    this_00 = pFVar6;
  }
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// CreateManualVertexFetchUniformBuffer @ 147c40d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCacheVertexVertexFactory::CreateManualVertexFetchUniformBuffer
          (FGeometryCacheVertexVertexFactory *this,FVertexBuffer *param_1,FVertexBuffer *param_2,
          FGeometryCacheVertexFactoryUserData *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CreateManualVertexFetchUniformBuffer
            (this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,param_1,param_2,
             param_3);
  return;
}

// GetPSOPrecacheVertexFetchElements @ 147c57ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FGeometryCacheVertexVertexFactory::GetPSOPrecacheVertexFetchElements
          (EVertexInputStreamType param_1,TArray<FVertexElement,TFixedAllocator<17>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_68 [10];
  uchar auStack_5e [6];
  undefined1 local_58 [10];
  uchar auStack_4e [6];
  undefined1 local_48 [10];
  uchar auStack_3e [6];
  undefined1 local_38 [10];
  uchar auStack_2e [6];
  uchar local_28;
  uchar uStack_27;
  uchar uStack_26;
  uchar uStack_25;
  uchar uStack_24;
  uchar uStack_23;
  uchar uStack_22;
  uchar uStack_21;
  
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\x03';
  local_58[3] = '\0';
  local_58[4] = '\f';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_58) &&
      (local_58 < (param_2->AllocatorInstance).InlineData + param_2->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                      (0x208,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
       CONCAT26(local_58._6_2_,CONCAT42(local_58._2_4_,local_58._0_2_));
  if (param_1 == PositionAndNormalOnly) {
    local_58[8] = '\x01';
    local_58[9] = '\0';
    builtin_memcpy(auStack_4e,"\x05\x01\b",4);
    auStack_4e[4] = '\0';
    auStack_4e[5] = '\0';
    if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_58 + 8)) &&
        (local_58 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
         CONCAT26(auStack_4e._4_2_,CONCAT42(auStack_4e._0_4_,local_58._8_2_));
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if ((bVar3) &&
     (bVar3 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform),
     !bVar3)) {
    if (param_1 == Default) {
      local_68[8] = '\x01';
      local_68[9] = '\0';
      builtin_memcpy(auStack_5e,"\x05\x01\x04",4);
      auStack_5e[4] = '\0';
      auStack_5e[5] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_68 + 8)) &&
          (local_68 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(auStack_5e._4_2_,CONCAT42(auStack_5e._0_4_,local_68._8_2_));
      local_68[8] = '\x02';
      local_68[9] = '\0';
      builtin_memcpy(auStack_5e,"\x05\x02\x04",4);
      auStack_5e[4] = '\0';
      auStack_5e[5] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_68 + 8)) &&
          (local_68 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      local_38[0] = '\x03';
      local_38[1] = '\0';
      param_2->ArrayNum = iVar4 + 1;
      local_38[2] = '\b';
      local_38[3] = '\x03';
      local_38[4] = '\x04';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(auStack_5e._4_2_,CONCAT42(auStack_5e._0_4_,local_68._8_2_));
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_38) &&
          (local_38 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      local_38[8] = '\x04';
      local_38[9] = '\0';
      param_2->ArrayNum = iVar4 + 1;
      builtin_memcpy(auStack_2e,"\x03\x04\f",4);
      auStack_2e[4] = '\0';
      auStack_2e[5] = '\0';
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(local_38._6_2_,CONCAT42(local_38._2_4_,local_38._0_2_));
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_38 + 8)) &&
          (local_38 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      local_68[0] = '\x05';
      local_68[1] = '\0';
      param_2->ArrayNum = iVar4 + 1;
      local_68[2] = '\x02';
      local_68[3] = '\x05';
      local_68[4] = '\b';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(auStack_2e._4_2_,CONCAT42(auStack_2e._0_4_,local_38._8_2_));
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_68) &&
          (local_68 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(local_68._6_2_,CONCAT42(local_68._2_4_,local_68._0_2_));
      local_68[0] = '\x06';
      local_68[1] = '\0';
      local_68[2] = '\x02';
      local_68[3] = '\x06';
      local_68[4] = '\b';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_68) &&
          (local_68 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(local_68._6_2_,CONCAT42(local_68._2_4_,local_68._0_2_));
      local_68[0] = '\a';
      local_68[1] = '\0';
      local_68[2] = '\x02';
      local_68[3] = '\a';
      local_68[4] = '\b';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_68) &&
          (local_68 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(local_68._6_2_,CONCAT42(local_68._2_4_,local_68._0_2_));
      local_68[0] = '\b';
      local_68[1] = '\0';
      local_68[2] = '\x02';
      local_68[3] = '\b';
      local_68[4] = '\b';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_68) &&
          (local_68 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      local_28 = '\t';
      uStack_27 = '\0';
      param_2->ArrayNum = iVar4 + 1;
      uStack_26 = '\x14';
      uStack_25 = '\r';
      uStack_24 = '\x04';
      uStack_23 = '\0';
      *(ulonglong *)(param_2->AllocatorInstance).InlineData[iVar4].Pad =
           CONCAT26(local_68._6_2_,CONCAT42(local_68._2_4_,local_68._0_2_));
      uStack_22 = '\x01';
      uStack_21 = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffd8) &&
          (&stack0xffffffffffffffd8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(_uStack_22,CONCAT42(_uStack_26,_local_28));
    }
    else if (param_1 == PositionOnly) {
      local_48[8] = '\x01';
      local_48[9] = '\0';
      auStack_3e[4] = '\x01';
      auStack_3e[5] = '\0';
      builtin_memcpy(auStack_3e,"\x14\x01\x04",4);
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_48 + 8)) &&
          (local_48 + 8 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(auStack_3e._4_2_,CONCAT42(auStack_3e._0_4_,local_48._8_2_));
    }
    else {
      if (param_1 != PositionAndNormalOnly) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                           ,299,L"");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_48[0] = '\x02';
      local_48[1] = '\0';
      local_48[6] = '\x01';
      local_48[7] = '\0';
      local_48[2] = '\x14';
      local_48[3] = '\x02';
      local_48[4] = '\x04';
      local_48[5] = '\0';
      if (((param_2 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_48) &&
          (local_48 < (param_2->AllocatorInstance).InlineData + *piVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4;
      uVar5 = CONCAT26(local_48._6_2_,CONCAT42(local_48._2_4_,local_48._0_2_));
    }
    *(undefined8 *)(param_2->AllocatorInstance).InlineData[lVar6].Pad = uVar5;
  }
  return;
}

// GetType @ 147c5cb70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
FGeometryCacheVertexVertexFactory::GetType(FGeometryCacheVertexVertexFactory *this)

{
  return &StaticType;
}

// GetVertexElements @ 147c5d4a0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
FGeometryCacheVertexVertexFactory::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,FDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4,
          TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5,int *param_6,int *param_7)

{
  int *piVar1;
  EVertexStreamUsage EVar2;
  uchar uVar3;
  uchar uVar4;
  uchar auVar5 [8];
  code *pcVar6;
  TTypeCompatibleBytes<FVertexElement> TVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  TTypeCompatibleBytes<FVertexStreamComponent> *pTVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  undefined1 local_f8 [9];
  uchar uStack_ef;
  uchar uStack_ee;
  uchar uStack_ed;
  ushort uStack_ec;
  ushort uStack_ea;
  undefined1 local_e8 [9];
  uchar auStack_df [3];
  ushort uStack_dc;
  uchar auStack_da [2];
  undefined1 local_d8 [9];
  uchar uStack_cf;
  uchar uStack_ce;
  uchar uStack_cd;
  ushort uStack_cc;
  ushort uStack_ca;
  undefined1 local_c8 [24];
  uint local_b0;
  ushort local_ac;
  EVertexStreamUsage local_aa;
  uchar local_a9;
  FVertexStream local_a8;
  FVertexStream local_98;
  undefined1 local_88 [8];
  TTypeCompatibleBytes<FVertexElement> local_80;
  FVertexStream local_78;
  FVertexStream local_68;
  FVertexStream local_58;
  FVertexStream local_48;
  
  if ((param_2 != Default) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputStreamType == EVertexInputStreamType::Default",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                         ,0xbf,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  auVar5 = (uchar  [8])(param_3->PositionComponent).VertexBuffer;
  if ((auVar5 != (uchar  [8])0x0) || (param_3->bIsDummyData != false)) {
    EVar2 = (param_3->PositionComponent).VertexStreamUsage;
    uVar3 = (param_3->PositionComponent).Type.Value;
    uVar4 = (param_3->PositionComponent).Offset;
    local_a8.Stride = (ushort)(param_3->PositionComponent).Stride;
    local_a8.Offset = (param_3->PositionComponent).StreamOffset;
    local_a8.Padding = '\0';
    local_a8.VertexBuffer = (FVertexBuffer *)auVar5;
    local_a8.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_a8);
    local_f8[8] = (uchar)iVar9;
    uStack_ec = local_a8.Stride;
    uStack_ea = (ushort)(EVar2 & Instancing);
    uStack_ed = '\0';
    uStack_ef = uVar4;
    uStack_ee = uVar3;
    if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_f8 + 8)) &&
       ((local_f8 + 8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_4->ArrayNum;
    if (iVar9 == param_4->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar9 + 1;
    *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(uStack_ea,
                  CONCAT24(uStack_ec,
                           CONCAT13(uStack_ed,CONCAT12(uStack_ee,CONCAT11(uStack_ef,local_f8[8])))))
    ;
    uVar12 = param_4->ArrayNum - 1;
    uVar14 = 0;
    if ((int)uVar12 < param_4->ArrayNum) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *param_6 = (uint)(param_4->AllocatorInstance).InlineData[(longlong)param_4->ArrayNum + -1].Pad
                     [0];
  }
  auVar5 = (uchar  [8])param_3->TangentBasisComponents[0].VertexBuffer;
  if ((auVar5 != (uchar  [8])0x0) || (param_3->bIsDummyData != false)) {
    EVar2 = param_3->TangentBasisComponents[0].VertexStreamUsage;
    uVar3 = param_3->TangentBasisComponents[0].Type.Value;
    uVar4 = param_3->TangentBasisComponents[0].Offset;
    local_ac = (ushort)param_3->TangentBasisComponents[0].Stride;
    local_b0 = param_3->TangentBasisComponents[0].StreamOffset;
    local_a9 = '\0';
    local_c8._16_8_ = auVar5;
    local_aa = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                      (param_5,(FVertexStream *)(local_c8 + 0x10));
    local_f8[0] = (uchar)iVar9;
    local_f8._4_2_ = local_ac;
    local_f8._6_2_ = ZEXT12(EVar2 & Instancing);
    local_f8[3] = '\x01';
    local_f8[1] = uVar4;
    local_f8[2] = uVar3;
    if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8) &&
       ((local_f8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_4->ArrayNum;
    if (iVar9 == param_4->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar9 + 1;
    *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_f8._6_2_,
                  CONCAT24(local_f8._4_2_,
                           CONCAT13(local_f8[3],
                                    CONCAT12(local_f8[2],CONCAT11(local_f8[1],local_f8[0])))));
  }
  piVar15 = &param_4->ArrayMax;
  auVar5 = (uchar  [8])param_3->TangentBasisComponents[1].VertexBuffer;
  if ((auVar5 != (uchar  [8])0x0) || (param_3->bIsDummyData != false)) {
    EVar2 = param_3->TangentBasisComponents[1].VertexStreamUsage;
    uVar3 = param_3->TangentBasisComponents[1].Type.Value;
    uVar4 = param_3->TangentBasisComponents[1].Offset;
    local_ac = (ushort)param_3->TangentBasisComponents[1].Stride;
    local_b0 = param_3->TangentBasisComponents[1].StreamOffset;
    local_a9 = '\0';
    local_c8._16_8_ = auVar5;
    local_aa = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                      (param_5,(FVertexStream *)(local_c8 + 0x10));
    local_f8[0] = (uchar)iVar9;
    local_f8._4_2_ = local_ac;
    local_f8._6_2_ = ZEXT12(EVar2 & Instancing);
    local_f8[3] = '\x02';
    local_f8[1] = uVar4;
    local_f8[2] = uVar3;
    if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_f8) &&
       ((local_f8 < (param_4->AllocatorInstance).InlineData + *piVar15 &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_4->ArrayNum;
    if (iVar9 == *piVar15) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar15);
    }
    param_4->ArrayNum = iVar9 + 1;
    *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar9].Pad =
         CONCAT26(local_f8._6_2_,
                  CONCAT24(local_f8._4_2_,
                           CONCAT13(local_f8[3],
                                    CONCAT12(local_f8[2],CONCAT11(local_f8[1],local_f8[0])))));
  }
  piVar16 = &param_4->ArrayNum;
  piVar15 = &param_4->ArrayMax;
  auVar5 = (uchar  [8])(param_3->ColorComponent).VertexBuffer;
  if (auVar5 == (uchar  [8])0x0) {
    local_80.Pad[0] = '\0';
    local_80.Pad[1] = '\0';
    local_80.Pad[2] = '\0';
    local_80.Pad[3] = '\0';
    local_80.Pad[4] = '\0';
    local_80.Pad[5] = '\0';
    local_80.Pad[6] = '\0';
    local_80.Pad[7] = '\0';
    local_88 = (undefined1  [8])&GNullColorVertexBuffer;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>
                      (param_5,(FVertexStream *)local_88);
    TVar7.Pad = local_80.Pad;
    local_e8[8] = (uchar)iVar9;
    uStack_dc._0_1_ = local_80.Pad[4];
    uStack_dc._1_1_ = local_80.Pad[5];
    auStack_da[0] = '\0';
    auStack_da[1] = '\0';
    auStack_df[0] = '\0';
    auStack_df[1] = '\b';
    auStack_df[2] = '\x03';
    local_80.Pad = TVar7.Pad;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_e8 + 8)) &&
        (local_e8 + 8 < (param_4->AllocatorInstance).InlineData + *piVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *piVar16;
    if (iVar9 == *piVar15) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar15);
    }
    *piVar16 = iVar9 + 1;
    uVar11 = CONCAT26(auStack_da,
                      CONCAT24(uStack_dc,
                               CONCAT13(auStack_df[2],CONCAT21(auStack_df._0_2_,local_e8[8]))));
  }
  else {
    EVar2 = (param_3->ColorComponent).VertexStreamUsage;
    uVar3 = (param_3->ColorComponent).Type.Value;
    uVar4 = (param_3->ColorComponent).Offset;
    local_98.Stride = (ushort)(param_3->ColorComponent).Stride;
    local_98.Offset = (param_3->ColorComponent).StreamOffset;
    local_98.Padding = '\0';
    local_98.VertexBuffer = (FVertexBuffer *)auVar5;
    local_98.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_98);
    local_e8[0] = (uchar)iVar9;
    local_e8._4_2_ = local_98.Stride;
    local_e8._6_2_ = ZEXT12(EVar2 & Instancing);
    local_e8[3] = '\x03';
    local_e8[1] = uVar4;
    local_e8[2] = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_e8) &&
        (local_e8 < (param_4->AllocatorInstance).InlineData + *piVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *piVar16;
    if (iVar9 == *piVar15) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,piVar15);
    }
    *piVar16 = iVar9 + 1;
    uVar11 = CONCAT26(local_e8._6_2_,
                      CONCAT24(local_e8._4_2_,
                               CONCAT13(local_e8[3],
                                        CONCAT12(local_e8[2],CONCAT11(local_e8[1],local_e8[0])))));
  }
  *(undefined8 *)(param_4->AllocatorInstance).InlineData[iVar9].Pad = uVar11;
  auVar5 = (uchar  [8])(param_3->MotionBlurDataComponent).VertexBuffer;
  if ((auVar5 == (uchar  [8])0x0) && (param_3->bIsDummyData == false)) {
    auVar5 = (uchar  [8])(param_3->PositionComponent).VertexBuffer;
    if (auVar5 == (uchar  [8])0x0) goto LAB_147c5dd28;
    EVar2 = (param_3->PositionComponent).VertexStreamUsage;
    uVar3 = (param_3->PositionComponent).Type.Value;
    uVar4 = (param_3->PositionComponent).Offset;
    local_78.Stride = (ushort)(param_3->PositionComponent).Stride;
    local_78.Offset = (param_3->PositionComponent).StreamOffset;
    local_78.Padding = '\0';
    local_78.VertexBuffer = (FVertexBuffer *)auVar5;
    local_78.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_78);
    local_d8[0] = (uchar)iVar9;
    local_d8._4_2_ = local_78.Stride;
    local_d8._6_2_ = ZEXT12(EVar2 & Instancing);
    local_d8[3] = '\x04';
    local_d8[1] = uVar4;
    local_d8[2] = uVar3;
    if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d8) &&
        (local_d8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar15 = &param_4->ArrayNum;
    iVar9 = *piVar15;
    if (iVar9 == param_4->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
      *piVar15 = iVar9;
    }
    *piVar15 = iVar9 + 1;
    uVar11 = CONCAT26(local_d8._6_2_,
                      CONCAT24(local_d8._4_2_,
                               CONCAT13(local_d8[3],
                                        CONCAT12(local_d8[2],CONCAT11(local_d8[1],local_d8[0])))));
  }
  else {
    EVar2 = (param_3->MotionBlurDataComponent).VertexStreamUsage;
    uVar3 = (param_3->MotionBlurDataComponent).Type.Value;
    uVar4 = (param_3->MotionBlurDataComponent).Offset;
    local_68.Stride = (ushort)(param_3->MotionBlurDataComponent).Stride;
    local_68.Offset = (param_3->MotionBlurDataComponent).StreamOffset;
    local_68.Padding = '\0';
    local_68.VertexBuffer = (FVertexBuffer *)auVar5;
    local_68.VertexStreamUsage = EVar2;
    iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_68);
    local_d8[8] = (uchar)iVar9;
    uStack_cc = local_68.Stride;
    uStack_ca = (ushort)(EVar2 & Instancing);
    uStack_cd = '\x04';
    uStack_cf = uVar4;
    uStack_ce = uVar3;
    if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_d8 + 8)) &&
       ((local_d8 + 8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *piVar16;
    if (iVar9 == param_4->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
      *piVar16 = iVar9;
    }
    *piVar16 = iVar9 + 1;
    uVar11 = CONCAT26(uStack_ca,
                      CONCAT24(uStack_cc,
                               CONCAT13(uStack_cd,
                                        CONCAT12(uStack_ce,CONCAT11(uStack_cf,local_d8[8])))));
  }
  *(undefined8 *)(param_4->AllocatorInstance).InlineData[iVar9].Pad = uVar11;
LAB_147c5dd28:
  piVar15 = &param_4->ArrayNum;
  uVar12 = *piVar15 - 1;
  uVar14 = 0;
  if ((int)uVar12 < *piVar15) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *param_7 = (uint)(param_4->AllocatorInstance).InlineData[(longlong)*piVar15 + -1].Pad[0];
  piVar16 = &(param_3->TextureCoordinates).ArrayNum;
  iVar9 = *piVar16;
  if (iVar9 != 0) {
    if (0 < iVar9) {
      uVar14 = 0;
      do {
        piVar1 = &param_4->ArrayMax;
        uVar12 = 0;
        if ((int)uVar14 < (param_3->TextureCoordinates).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar13 = (param_3->TextureCoordinates).AllocatorInstance.InlineData + (int)uVar14;
        local_58.Padding = '\0';
        local_58.VertexBuffer = *(FVertexBuffer **)pTVar13->Pad;
        EVar2 = pTVar13->Pad[0xf];
        uVar3 = pTVar13->Pad[0xe];
        local_58.Stride = (ushort)pTVar13->Pad[0xd];
        local_58.Offset = *(uint *)(pTVar13->Pad + 8);
        uVar4 = pTVar13->Pad[0xc];
        local_58.VertexStreamUsage = EVar2;
        iVar9 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_58);
        local_c8[0] = (uchar)iVar9;
        local_c8[3] = (char)uVar14 + '\x05';
        local_c8._4_2_ = local_58.Stride;
        local_c8._6_2_ = ZEXT12(EVar2 & Instancing);
        local_c8[1] = uVar4;
        local_c8[2] = uVar3;
        if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_c8) &&
            (local_c8 < (param_4->AllocatorInstance).InlineData + *piVar1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = *piVar15;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                            (0x208,&param_4->AllocatorInstance,piVar1);
          *piVar15 = iVar9;
        }
        *piVar15 = iVar9 + 1;
        uVar14 = uVar14 + 1;
        *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar9].Pad =
             CONCAT26(local_c8._6_2_,
                      CONCAT24(local_c8._4_2_,
                               CONCAT13(local_c8[3],
                                        CONCAT12(local_c8[2],CONCAT11(local_c8[1],local_c8[0])))));
        iVar9 = *piVar16;
      } while ((int)uVar14 < iVar9);
    }
    piVar15 = &param_4->ArrayNum;
    for (; iVar9 < 4; iVar9 = iVar9 + 1) {
      iVar10 = (param_3->TextureCoordinates).ArrayNum;
      uVar12 = iVar10 - 1;
      uVar14 = 0;
      if ((int)uVar12 < iVar10) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar13 = (param_3->TextureCoordinates).AllocatorInstance.InlineData + (int)uVar12;
      local_48.Padding = '\0';
      local_48.VertexBuffer = *(FVertexBuffer **)pTVar13->Pad;
      EVar2 = pTVar13->Pad[0xf];
      uVar3 = pTVar13->Pad[0xe];
      local_48.Stride = (ushort)pTVar13->Pad[0xd];
      local_48.Offset = *(uint *)(pTVar13->Pad + 8);
      uVar4 = pTVar13->Pad[0xc];
      local_48.VertexStreamUsage = EVar2;
      iVar10 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(param_5,&local_48);
      local_c8[8] = (uchar)iVar10;
      local_c8[0xb] = (char)iVar9 + '\x05';
      local_c8._12_2_ = local_48.Stride;
      local_c8._14_2_ = ZEXT12(EVar2 & Instancing);
      local_c8[9] = uVar4;
      local_c8[10] = uVar3;
      if (((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c8 + 8)) &&
          (local_c8 + 8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *piVar15;
      if (iVar10 == param_4->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                           (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
        *piVar15 = iVar10;
      }
      *piVar15 = iVar10 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar10].Pad =
           CONCAT26(local_c8._14_2_,
                    CONCAT24(local_c8._12_2_,
                             CONCAT13(local_c8[0xb],
                                      CONCAT12(local_c8[10],CONCAT11(local_c8[9],local_c8[8])))));
    }
  }
  return;
}

// GetVertexElements @ 147c5e100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FGeometryCacheVertexVertexFactory::GetVertexElements
          (Type param_1,EVertexInputStreamType param_2,FDataType *param_3,
          TArray<FVertexElement,TFixedAllocator<17>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [144];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_1c = 8;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_b8[0xc] = 0xff;
  local_b8[0xd] = 0xff;
  local_b8[0xe] = 0xff;
  local_b8[0xf] = 0xff;
  local_b8[8] = 0xff;
  local_b8[9] = 0xff;
  local_b8[10] = 0xff;
  local_b8[0xb] = 0xff;
  GetVertexElements(param_1,param_2,param_3,param_4,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)(local_b8 + 0x10),(int *)(local_b8 + 0xc),(int *)(local_b8 + 8));
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  if (bVar2) {
    bVar2 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (!bVar2) {
      local_b8[0] = (uchar)local_20;
      local_b8[1] = '\0';
      local_b8[2] = '\x14';
      local_b8[3] = '\r';
      local_b8[4] = '\x04';
      local_b8[5] = '\0';
      local_b8[6] = '\x01';
      local_b8[7] = '\0';
      if ((param_4 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_b8) &&
         (local_b8 < (param_4->AllocatorInstance).InlineData + param_4->ArrayMax)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = param_4->ArrayNum;
      if (iVar3 == param_4->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar3 + 1;
      *(ulonglong *)(param_4->AllocatorInstance).InlineData[iVar3].Pad =
           CONCAT44(local_b8._4_4_,CONCAT13(local_b8[3],CONCAT21(local_b8._1_2_,local_b8[0])));
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// InitRHI @ 147c659d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCacheVertexVertexFactory::InitRHI
          (FGeometryCacheVertexVertexFactory *this,FRHICommandListBase *param_1)

{
  FDataType *pFVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  FVertexElement FVar7;
  Type TVar8;
  longlong lVar9;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [16];
  FVertexStreamComponent local_1e8;
  TArray<FVertexElement,TFixedAllocator<17>_> local_1d8;
  undefined8 local_148 [17];
  int local_c0;
  int local_bc;
  TArray<FVertexElement,TFixedAllocator<17>_> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar1 = &this->Data;
  if ((pFVar1->PositionComponent).VertexBuffer ==
      (this->Data).TangentBasisComponents[0].VertexBuffer) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.PositionComponent.VertexBuffer != Data.TangentBasisComponents[0].VertexBuffer"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x141,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->Data).MotionBlurDataComponent.VertexBuffer ==
      (this->Data).TangentBasisComponents[0].VertexBuffer) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.MotionBlurDataComponent.VertexBuffer != Data.TangentBasisComponents[0].VertexBuffer"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x143,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->Data).MotionBlurDataComponent.VertexBuffer == (pFVar1->PositionComponent).VertexBuffer)
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.MotionBlurDataComponent.VertexBuffer != Data.PositionComponent.VertexBuffer"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x144,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((pFVar1->PositionComponent).VertexBuffer !=
      (this->Data).TangentBasisComponents[0].VertexBuffer) {
    local_c0 = 0;
    local_bc = 0x11;
    FVar7 = FVertexFactory::AccessStreamComponent
                      ((FVertexFactory *)this,(FVertexStreamComponent *)local_1f8,(uchar)pFVar1,
                       Default);
    if ((local_148 <= (ulonglong)FVar7) &&
       ((ulonglong)FVar7 < (ulonglong)((longlong)local_148 + (longlong)local_bc * 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_c0 == local_bc) {
      local_c0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                           (0x208,(ForElementType<FVertexElement> *)local_148,&local_bc);
    }
    lVar9 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    *(undefined8 *)((longlong)local_148 + lVar9 * 8) = *(undefined8 *)FVar7;
    FVertexFactory::AddPrimitiveIdStreamElement
              ((FVertexFactory *)this,PositionOnly,
               (TArray<FVertexElement,TFixedAllocator<17>_> *)local_148,'\x01','\x01');
    FVertexFactory::InitDeclaration
              ((FVertexFactory *)this,(TArray<FVertexElement,TFixedAllocator<17>_> *)local_148,
               PositionOnly);
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0x11;
    FVar7 = FVertexFactory::AccessStreamComponent
                      ((FVertexFactory *)this,(FVertexStreamComponent *)(local_1f8 + 8),
                       (uchar)pFVar1,Default);
    if ((&local_1d8 <= (ulonglong)FVar7) &&
       ((ulonglong)FVar7 < local_1d8.AllocatorInstance.InlineData + local_1d8.ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
      local_1d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
    }
    lVar9 = (longlong)local_1d8.ArrayNum;
    local_1d8.ArrayNum = local_1d8.ArrayNum + 1;
    *(undefined8 *)local_1d8.AllocatorInstance.InlineData[lVar9].Pad = *(undefined8 *)FVar7;
    FVar7 = FVertexFactory::AccessStreamComponent
                      ((FVertexFactory *)this,&local_1e8,(char)this + 0x90,PositionOnly);
    if ((&local_1d8 <= (ulonglong)FVar7) &&
       ((ulonglong)FVar7 < local_1d8.AllocatorInstance.InlineData + local_1d8.ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
      local_1d8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                     (0x208,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
    }
    lVar9 = (longlong)local_1d8.ArrayNum;
    local_1d8.ArrayNum = local_1d8.ArrayNum + 1;
    *(undefined8 *)local_1d8.AllocatorInstance.InlineData[lVar9].Pad = *(undefined8 *)FVar7;
    FVertexFactory::AddPrimitiveIdStreamElement
              ((FVertexFactory *)this,PositionAndNormalOnly,&local_1d8,'\x02','\x02');
    FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_1d8,PositionAndNormalOnly);
  }
  bVar4 = *(byte *)((longlong)&this->_padding_ + 4);
  local_b8.ArrayNum = 0;
  piVar2 = &this->MotionBlurDataStreamIndex;
  local_b8.ArrayMax = 0x11;
  TVar8 = (uint)bVar4;
  if (bVar4 == 5) {
    TVar8 = GMaxRHIFeatureLevel;
  }
  piVar3 = &this->PositionStreamIndex;
  GetVertexElements(TVar8,Default,pFVar1,&local_b8,
                    (TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)&this->_padding_,piVar3,piVar2);
  FVertexFactory::AddPrimitiveIdStreamElement((FVertexFactory *)this,Default,&local_b8,'\r','\r');
  if ((int)this->_padding_ < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Streams.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x15e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*piVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PositionStreamIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x15f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*piVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MotionBlurDataStreamIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*piVar2 == *piVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MotionBlurDataStreamIndex != PositionStreamIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x161,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVertexFactory::InitDeclaration((FVertexFactory *)this,&local_b8,Default);
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(GetDeclaration())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x165,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ModifyCompilationEnvironment @ 147c6f6e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FGeometryCacheVertexVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = UseGPUScene((FStaticShaderPlatform)param_1->Platform,
                      (FGenericStaticFeatureLevel)
                      FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel);
  if (bVar3) {
    EVar1 = param_1->Platform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (1 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      bVar3 = true;
      goto LAB_147c6f789;
    }
  }
  bVar3 = false;
LAB_147c6f789:
  if (((param_1->VertexFactoryType->Flags & SupportsPrimitiveIdStream) == None) || (!bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",bVar3);
  return;
}

// SetData @ 147c7fd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCacheVertexVertexFactory::SetData
          (FGeometryCacheVertexVertexFactory *this,FRHICommandListBase *param_1,FDataType *param_2)

{
  uchar uVar1;
  code *pcVar2;
  uint uVar3;
  uchar uVar4;
  TEnumAsByte<EVertexElementType> TVar5;
  EVertexStreamUsage EVar6;
  bool bVar7;
  
  uVar1 = (param_2->ColorComponent).Type.Value;
  if ((uVar1 != '\0') && (uVar1 != '\b')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InData.ColorComponent.Type == VET_None) || (InData.ColorComponent.Type == VET_Color)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x6d,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = (param_2->PositionComponent).StreamOffset;
  uVar1 = (param_2->PositionComponent).Offset;
  uVar4 = (param_2->PositionComponent).Stride;
  TVar5.Value = (param_2->PositionComponent).Type.Value;
  EVar6 = (param_2->PositionComponent).VertexStreamUsage;
  (this->Data).PositionComponent.VertexBuffer = (param_2->PositionComponent).VertexBuffer;
  (this->Data).PositionComponent.StreamOffset = uVar3;
  (this->Data).PositionComponent.Offset = uVar1;
  (this->Data).PositionComponent.Stride = uVar4;
  (this->Data).PositionComponent.Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).PositionComponent.VertexStreamUsage = EVar6;
  uVar3 = param_2->TangentBasisComponents[0].StreamOffset;
  uVar1 = param_2->TangentBasisComponents[0].Offset;
  uVar4 = param_2->TangentBasisComponents[0].Stride;
  TVar5.Value = param_2->TangentBasisComponents[0].Type.Value;
  EVar6 = param_2->TangentBasisComponents[0].VertexStreamUsage;
  (this->Data).TangentBasisComponents[0].VertexBuffer =
       param_2->TangentBasisComponents[0].VertexBuffer;
  (this->Data).TangentBasisComponents[0].StreamOffset = uVar3;
  (this->Data).TangentBasisComponents[0].Offset = uVar1;
  (this->Data).TangentBasisComponents[0].Stride = uVar4;
  (this->Data).TangentBasisComponents[0].Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).TangentBasisComponents[0].VertexStreamUsage = EVar6;
  uVar3 = param_2->TangentBasisComponents[1].StreamOffset;
  uVar1 = param_2->TangentBasisComponents[1].Offset;
  uVar4 = param_2->TangentBasisComponents[1].Stride;
  TVar5.Value = param_2->TangentBasisComponents[1].Type.Value;
  EVar6 = param_2->TangentBasisComponents[1].VertexStreamUsage;
  (this->Data).TangentBasisComponents[1].VertexBuffer =
       param_2->TangentBasisComponents[1].VertexBuffer;
  (this->Data).TangentBasisComponents[1].StreamOffset = uVar3;
  (this->Data).TangentBasisComponents[1].Offset = uVar1;
  (this->Data).TangentBasisComponents[1].Stride = uVar4;
  (this->Data).TangentBasisComponents[1].Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).TangentBasisComponents[1].VertexStreamUsage = EVar6;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_>::operator=
            (&(this->Data).TextureCoordinates,&param_2->TextureCoordinates);
  uVar3 = (param_2->ColorComponent).StreamOffset;
  uVar1 = (param_2->ColorComponent).Offset;
  uVar4 = (param_2->ColorComponent).Stride;
  TVar5.Value = (param_2->ColorComponent).Type.Value;
  EVar6 = (param_2->ColorComponent).VertexStreamUsage;
  (this->Data).ColorComponent.VertexBuffer = (param_2->ColorComponent).VertexBuffer;
  (this->Data).ColorComponent.StreamOffset = uVar3;
  (this->Data).ColorComponent.Offset = uVar1;
  (this->Data).ColorComponent.Stride = uVar4;
  (this->Data).ColorComponent.Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).ColorComponent.VertexStreamUsage = EVar6;
  uVar3 = (param_2->MotionBlurDataComponent).StreamOffset;
  uVar1 = (param_2->MotionBlurDataComponent).Offset;
  uVar4 = (param_2->MotionBlurDataComponent).Stride;
  TVar5.Value = (param_2->MotionBlurDataComponent).Type.Value;
  EVar6 = (param_2->MotionBlurDataComponent).VertexStreamUsage;
  (this->Data).MotionBlurDataComponent.VertexBuffer =
       (param_2->MotionBlurDataComponent).VertexBuffer;
  (this->Data).MotionBlurDataComponent.StreamOffset = uVar3;
  (this->Data).MotionBlurDataComponent.Offset = uVar1;
  (this->Data).MotionBlurDataComponent.Stride = uVar4;
  (this->Data).MotionBlurDataComponent.Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).MotionBlurDataComponent.VertexStreamUsage = EVar6;
  (this->Data).bIsDummyData = param_2->bIsDummyData;
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// SetData @ 147c7fe00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCacheVertexVertexFactory::SetData
          (FGeometryCacheVertexVertexFactory *this,FDataType *param_1)

{
  uchar uVar1;
  code *pcVar2;
  uint uVar3;
  uchar uVar4;
  TEnumAsByte<EVertexElementType> TVar5;
  EVertexStreamUsage EVar6;
  bool bVar7;
  
  bVar7 = IsInRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (param_1->ColorComponent).Type.Value;
  if ((uVar1 != '\0') && (uVar1 != '\b')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InData.ColorComponent.Type == VET_None) || (InData.ColorComponent.Type == VET_Color)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeometryCacheVertexFactory.cpp"
                       ,0x6d,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = (param_1->PositionComponent).StreamOffset;
  uVar1 = (param_1->PositionComponent).Offset;
  uVar4 = (param_1->PositionComponent).Stride;
  TVar5.Value = (param_1->PositionComponent).Type.Value;
  EVar6 = (param_1->PositionComponent).VertexStreamUsage;
  (this->Data).PositionComponent.VertexBuffer = (param_1->PositionComponent).VertexBuffer;
  (this->Data).PositionComponent.StreamOffset = uVar3;
  (this->Data).PositionComponent.Offset = uVar1;
  (this->Data).PositionComponent.Stride = uVar4;
  (this->Data).PositionComponent.Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).PositionComponent.VertexStreamUsage = EVar6;
  uVar3 = param_1->TangentBasisComponents[0].StreamOffset;
  uVar1 = param_1->TangentBasisComponents[0].Offset;
  uVar4 = param_1->TangentBasisComponents[0].Stride;
  TVar5.Value = param_1->TangentBasisComponents[0].Type.Value;
  EVar6 = param_1->TangentBasisComponents[0].VertexStreamUsage;
  (this->Data).TangentBasisComponents[0].VertexBuffer =
       param_1->TangentBasisComponents[0].VertexBuffer;
  (this->Data).TangentBasisComponents[0].StreamOffset = uVar3;
  (this->Data).TangentBasisComponents[0].Offset = uVar1;
  (this->Data).TangentBasisComponents[0].Stride = uVar4;
  (this->Data).TangentBasisComponents[0].Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).TangentBasisComponents[0].VertexStreamUsage = EVar6;
  uVar3 = param_1->TangentBasisComponents[1].StreamOffset;
  uVar1 = param_1->TangentBasisComponents[1].Offset;
  uVar4 = param_1->TangentBasisComponents[1].Stride;
  TVar5.Value = param_1->TangentBasisComponents[1].Type.Value;
  EVar6 = param_1->TangentBasisComponents[1].VertexStreamUsage;
  (this->Data).TangentBasisComponents[1].VertexBuffer =
       param_1->TangentBasisComponents[1].VertexBuffer;
  (this->Data).TangentBasisComponents[1].StreamOffset = uVar3;
  (this->Data).TangentBasisComponents[1].Offset = uVar1;
  (this->Data).TangentBasisComponents[1].Stride = uVar4;
  (this->Data).TangentBasisComponents[1].Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).TangentBasisComponents[1].VertexStreamUsage = EVar6;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_>::operator=
            (&(this->Data).TextureCoordinates,&param_1->TextureCoordinates);
  uVar3 = (param_1->ColorComponent).StreamOffset;
  uVar1 = (param_1->ColorComponent).Offset;
  uVar4 = (param_1->ColorComponent).Stride;
  TVar5.Value = (param_1->ColorComponent).Type.Value;
  EVar6 = (param_1->ColorComponent).VertexStreamUsage;
  (this->Data).ColorComponent.VertexBuffer = (param_1->ColorComponent).VertexBuffer;
  (this->Data).ColorComponent.StreamOffset = uVar3;
  (this->Data).ColorComponent.Offset = uVar1;
  (this->Data).ColorComponent.Stride = uVar4;
  (this->Data).ColorComponent.Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).ColorComponent.VertexStreamUsage = EVar6;
  uVar3 = (param_1->MotionBlurDataComponent).StreamOffset;
  uVar1 = (param_1->MotionBlurDataComponent).Offset;
  uVar4 = (param_1->MotionBlurDataComponent).Stride;
  TVar5.Value = (param_1->MotionBlurDataComponent).Type.Value;
  EVar6 = (param_1->MotionBlurDataComponent).VertexStreamUsage;
  (this->Data).MotionBlurDataComponent.VertexBuffer =
       (param_1->MotionBlurDataComponent).VertexBuffer;
  (this->Data).MotionBlurDataComponent.StreamOffset = uVar3;
  (this->Data).MotionBlurDataComponent.Offset = uVar1;
  (this->Data).MotionBlurDataComponent.Stride = uVar4;
  (this->Data).MotionBlurDataComponent.Type = (TEnumAsByte<EVertexElementType>)TVar5.Value;
  (this->Data).MotionBlurDataComponent.VertexStreamUsage = EVar6;
  (this->Data).bIsDummyData = param_1->bIsDummyData;
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// ShouldCompilePermutation @ 147c835d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGeometryCacheVertexVertexFactory::ShouldCompilePermutation
          (FVertexFactoryShaderPermutationParameters *param_1)

{
  return ((param_1->MaterialParameters)._padding_ & 0x2000000002U) != 0;
}

