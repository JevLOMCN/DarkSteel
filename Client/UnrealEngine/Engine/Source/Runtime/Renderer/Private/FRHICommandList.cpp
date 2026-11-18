// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 20

// ApplyCachedRenderTargets @ 14473f6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FRHICommandList::ApplyCachedRenderTargets
          (FRHICommandList *this,FGraphicsPipelineStateInitializer *param_1)

{
  EPixelFormat EVar1;
  longlong lVar2;
  ETextureCreateFlags *pEVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(uint *)&this->field_0x1c0;
  uVar5 = 0;
  param_1->RenderTargetsEnabled = uVar4;
  if (uVar4 != 0) {
    do {
      if (*(longlong **)(&this->field_0x1c8 + uVar5 * 0x18) == (longlong *)0x0) {
        (param_1->RenderTargetFormats).Elements[uVar5] = '\0';
      }
      else {
        lVar2 = (**(code **)(**(longlong **)(&this->field_0x1c8 + uVar5 * 0x18) + 0x20))();
        (param_1->RenderTargetFormats).Elements[uVar5] = *(uchar *)(lVar2 + 0x33);
        pEVar3 = (ETextureCreateFlags *)
                 (**(code **)(**(longlong **)(&this->field_0x1c8 + uVar5 * 0x18) + 0x20))();
        (param_1->RenderTargetFlags).Elements[uVar5] = *pEVar3;
      }
      if ((param_1->RenderTargetFormats).Elements[uVar5] != '\0') {
        lVar2 = (**(code **)(**(longlong **)(&this->field_0x1c8 + uVar5 * 0x18) + 0x20))();
        param_1->NumSamples = (ushort)*(byte *)(lVar2 + 0x31);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_1->RenderTargetsEnabled);
  }
  if (*(longlong **)&this->field_0x288 == (longlong *)0x0) {
    param_1->DepthStencilTargetFormat = PF_Unknown;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)&this->field_0x288 + 0x20))();
    param_1->DepthStencilTargetFormat = *(EPixelFormat *)(lVar2 + 0x33);
    pEVar3 = (ETextureCreateFlags *)(**(code **)(**(longlong **)&this->field_0x288 + 0x20))();
    param_1->DepthStencilTargetFlag = *pEVar3;
  }
  EVar1 = param_1->DepthStencilTargetFormat;
  param_1->DepthTargetLoadAction = this->field_0x290;
  param_1->DepthTargetStoreAction = this->field_0x291;
  param_1->StencilTargetLoadAction = this->field_0x292;
  param_1->StencilTargetStoreAction = this->field_0x293;
  (param_1->DepthStencilAccess).Value = *(Type *)&this->field_0x294;
  if (EVar1 != PF_Unknown) {
    lVar2 = (**(code **)(**(longlong **)&this->field_0x288 + 0x20))();
    param_1->NumSamples = (ushort)*(byte *)(lVar2 + 0x31);
  }
  param_1->SubpassHint = this->field_0x298;
  param_1->SubpassIndex = this->field_0x299;
  param_1->MultiViewCount = this->field_0x29a;
  param_1->bHasFragmentDensityAttachment = (bool)(this->field_0x29b & 1);
  return;
}

// DrawIndexedPrimitive @ 144753c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::DrawIndexedPrimitive
          (FRHICommandList *this,FRHIBuffer *param_1,int param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7)

{
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x1f8))
              (pIVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x30,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    *puVar2 = &___7FRHICommandDrawIndexedPrimitive__6B_;
    *(uint *)((longlong)puVar2 + 0x24) = param_5;
    *(uint *)(puVar2 + 5) = param_6;
    puVar2[1] = 0;
    *(uint *)((longlong)puVar2 + 0x2c) = param_7;
    puVar2[2] = param_1;
    *(int *)(puVar2 + 3) = param_2;
    *(uint *)((longlong)puVar2 + 0x1c) = param_3;
    *(uint *)(puVar2 + 4) = param_4;
  }
  return;
}

// DrawPrimitive @ 144753d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::DrawPrimitive(FRHICommandList *this,uint param_1,uint param_2,uint param_3)

{
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x1e0))(pIVar1,param_1,param_2,param_3);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &___7FRHICommandDrawPrimitive__6B_;
    *(uint *)(puVar2 + 2) = param_1;
    *(uint *)((longlong)puVar2 + 0x14) = param_2;
    *(uint *)(puVar2 + 3) = param_3;
  }
  return;
}

// SetBatchedShaderParameters @ 14478dae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::SetBatchedShaderParameters
          (FRHICommandList *this,FRHIGraphicsShader *param_1,FRHIBatchedShaderParameters *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  FRHIShaderParameter *pFVar6;
  FRHIShaderParameterResource *pFVar7;
  FRHIShaderParameterResource *pFVar8;
  code *pcVar9;
  bool bVar10;
  IRHICommandContext *pIVar11;
  undefined8 *puVar12;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_bc;
  uint uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  FRHIShaderParameterResource *local_48;
  undefined8 uStack_40;
  FRHIShaderParameterResource *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  if (0 < (param_2->BindlessParameters).ArrayNum + (param_2->ResourceParameters).ArrayNum +
          (param_2->Parameters).ArrayNum) {
    if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
      pIVar11 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
      local_48 = (param_2->BindlessParameters).DataPtr;
      puVar5 = (param_2->ParametersData).DataPtr;
      local_38 = (param_2->ResourceParameters).DataPtr;
      uStack_40 = CONCAT44(uStack_9c,(param_2->BindlessParameters).ArrayNum);
      pFVar6 = (param_2->Parameters).DataPtr;
      uStack_30 = CONCAT44(uStack_8c,(param_2->ResourceParameters).ArrayNum);
      iStack_20 = (param_2->Parameters).ArrayNum;
      iStack_10 = (param_2->ParametersData).ArrayNum;
      local_88 = SUB84(pFVar6,0);
      uStack_84 = (undefined4)((ulonglong)pFVar6 >> 0x20);
      local_c8 = SUB84(puVar5,0);
      uStack_c4 = (undefined4)((ulonglong)puVar5 >> 0x20);
      local_28 = local_88;
      uStack_24 = uStack_84;
      local_18 = local_c8;
      uStack_14 = uStack_c4;
      (**(code **)(pIVar11->_padding_ + 0x1c0))
                (pIVar11,param_1,&local_18,&local_28,&local_38,&local_48);
      param_2->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
      (param_2->ParametersData).DataPtr = (uchar *)0x0;
      *(ulonglong *)&(param_2->ParametersData).ArrayNum = (ulonglong)uStack_bc << 0x20;
      (param_2->Parameters).DataPtr = (FRHIShaderParameter *)0x0;
      *(ulonglong *)&(param_2->Parameters).ArrayNum = (ulonglong)uStack_bc << 0x20;
      (param_2->ResourceParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
      *(ulonglong *)&(param_2->ResourceParameters).ArrayNum = (ulonglong)uStack_bc << 0x20;
    }
    else {
      if ((FRHICommandListBase *)this != param_2->Allocator->RHICmdList) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("this == &ShaderParameters.Allocator.RHICmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x4f6,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      puVar12 = FMemStackBase::Alloc((FMemStackBase *)this,0x58,8);
      *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
      **(undefined8 **)&this->field_0x30 = puVar12;
      *(undefined8 **)&this->field_0x30 = puVar12 + 1;
      pFVar7 = (param_2->BindlessParameters).DataPtr;
      iVar1 = (param_2->ResourceParameters).ArrayNum;
      iVar2 = (param_2->BindlessParameters).ArrayNum;
      pFVar8 = (param_2->ResourceParameters).DataPtr;
      iVar3 = (param_2->Parameters).ArrayNum;
      puVar5 = (param_2->ParametersData).DataPtr;
      iVar4 = (param_2->ParametersData).ArrayNum;
      puVar12[5] = (param_2->Parameters).DataPtr;
      puVar12[6] = CONCAT44(uStack_5c,iVar3);
      puVar12[2] = param_1;
      *puVar12 = &___7__FRHICommandSetShaderParameters_VFRHIGraphicsShader____6B_;
      puVar12[9] = pFVar7;
      puVar12[10] = CONCAT44(uStack_ac,iVar2);
      puVar12[3] = puVar5;
      puVar12[4] = CONCAT44(uStack_6c,iVar4);
      puVar12[1] = 0;
      puVar12[7] = pFVar8;
      puVar12[8] = CONCAT44(uStack_4c,iVar1);
      param_2->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
      (param_2->ParametersData).DataPtr = (uchar *)0x0;
      *(ulonglong *)&(param_2->ParametersData).ArrayNum = (ulonglong)uStack_ac << 0x20;
      (param_2->Parameters).DataPtr = (FRHIShaderParameter *)0x0;
      *(ulonglong *)&(param_2->Parameters).ArrayNum = (ulonglong)uStack_ac << 0x20;
      (param_2->ResourceParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
      *(ulonglong *)&(param_2->ResourceParameters).ArrayNum = (ulonglong)uStack_ac << 0x20;
      uStack_bc = uStack_ac;
    }
    *(undefined4 *)&(param_2->BindlessParameters).DataPtr = 0;
    *(undefined4 *)((longlong)&(param_2->BindlessParameters).DataPtr + 4) = 0;
    (param_2->BindlessParameters).ArrayNum = 0;
    *(uint *)&(param_2->BindlessParameters).field_0xc = uStack_bc;
  }
  return;
}

// SetDepthBounds @ 14478deb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandList::SetDepthBounds(FRHICommandList *this,float param_1,float param_2)

{
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
                    /* WARNING: Could not recover jumptable at 0x00014478df02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x220))(pIVar1,param_1,param_2);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x18,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar2;
  *(undefined8 **)&this->field_0x30 = puVar2 + 1;
  puVar2[1] = 0;
  *(float *)(puVar2 + 2) = param_1;
  *(float *)((longlong)puVar2 + 0x14) = param_2;
  *puVar2 = &___7FRHICommandSetDepthBounds__6B_;
  return;
}

// SetStreamSource @ 14478e6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::SetStreamSource
          (FRHICommandList *this,uint param_1,FRHIBuffer *param_2,uint param_3)

{
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x198))(pIVar1,param_1,param_2,param_3);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &___7FRHICommandSetStreamSource__6B_;
    *(uint *)(puVar2 + 2) = param_1;
    puVar2[3] = param_2;
    *(uint *)(puVar2 + 4) = param_3;
  }
  return;
}

// SetViewport @ 14478ebe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::SetViewport
          (FRHICommandList *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x1a0))(pIVar1,param_1,param_2,param_3,param_4,param_5,param_6)
    ;
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    *(float *)((longlong)puVar2 + 0x1c) = param_4;
    puVar2[1] = 0;
    *(float *)((longlong)puVar2 + 0x24) = param_6;
    *puVar2 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar2 + 2) = param_1;
    *(float *)((longlong)puVar2 + 0x14) = param_2;
    *(float *)(puVar2 + 3) = param_3;
    *(float *)(puVar2 + 4) = param_5;
  }
  return;
}

// CommitShaderBindingTable @ 144804b70

void __thiscall
FRHICommandList::CommitShaderBindingTable(FRHICommandList *this,FRHIShaderBindingTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((param_1->Initializer).ShaderBindingMode & Inline) != Disabled) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(SBT->GetInitializer().ShaderBindingMode, ERayTracingShaderBindingMode::Inline)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1105,
                       L"Use CommitShaderBindingTable function which also provides the InlineBindingDataBuffer when SBT has inline binding mode set"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CommitShaderBindingTable(this,param_1,(FRHIBuffer *)0x0);
  return;
}

// CommitShaderBindingTable @ 144804bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::CommitShaderBindingTable
          (FRHICommandList *this,FRHIShaderBindingTable *param_1,FRHIBuffer *param_2)

{
  int *piVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  IRHICommandContext *pIVar3;
  undefined8 *puVar4;
  undefined8 *local_res20;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar3->_padding_ + 0x280);
                    /* WARNING: Could not recover jumptable at 0x000144804c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar3,param_1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar4 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar4;
  *(undefined8 **)&this->field_0x30 = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &___7FRHICommandCommitShaderBindingTable__6B_;
  puVar4[2] = param_1;
  puVar4[3] = param_2;
  FRHICommandListBase::RHIThreadFence((FRHICommandListBase *)this,true);
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res20 != (undefined8 *)0x0)) {
      (**(code **)*local_res20)(local_res20,1);
    }
  }
  return;
}

// SetBindingsOnShaderBindingTable @ 14482ed90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::SetBindingsOnShaderBindingTable
          (FRHICommandList *this,FRHIShaderBindingTable *param_1,FRayTracingPipelineState *param_2,
          uint param_3,FRayTracingLocalShaderBindings *param_4,ERayTracingBindingType param_5,
          bool param_6)

{
  int *piVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  uint uVar4;
  IRHICommandContext *pIVar5;
  FRHIRayTracingPipelineState *pFVar6;
  void *_Dst;
  void *pvVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *local_38;
  
  uVar12 = (ulonglong)param_3;
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar5 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar5->_padding_ + 0x278);
    pFVar6 = GetRHIRayTracingPipelineState(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014482ee03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar5,param_1,pFVar6,uVar12);
    return;
  }
  uVar13 = (param_1->Initializer).LocalBindingDataSize;
  uVar4 = GetRHIRayTracingPipelineStateMaxLocalBindingDataSize(param_2);
  if ((uVar13 < uVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetRHIRayTracingPipelineStateMaxLocalBindingDataSize(Pipeline) <= SBT->GetInitializer().LocalBindingDataSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1135,L""), bVar3)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _Dst = (void *)0x0;
  if (param_6) {
    if (param_3 != 0) {
      _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(ulonglong)(param_3 * 0x38),8);
      memcpy(_Dst,param_4,(ulonglong)(param_3 * 0x38));
      if (param_3 != 0) {
        puVar11 = (ushort *)((longlong)_Dst + 0x20);
        do {
          if (*puVar11 != 0) {
            pvVar7 = FMemStackBase::Alloc((FMemStackBase *)this,(ulonglong)*puVar11 << 3,8);
            uVar13 = 0;
            *(void **)(puVar11 + 4) = pvVar7;
            if (*puVar11 != 0) {
              do {
                uVar8 = (ulonglong)uVar13;
                uVar13 = uVar13 + 1;
                *(undefined8 *)(uVar8 * 8 + *(longlong *)(puVar11 + 4)) =
                     *(undefined8 *)
                      (uVar8 * 8 +
                      *(longlong *)((longlong)puVar11 + (longlong)param_4 + (8 - (longlong)_Dst)));
              } while (uVar13 < *puVar11);
            }
          }
          if (puVar11[1] != 0) {
            pvVar7 = FMemStackBase::Alloc((FMemStackBase *)this,(ulonglong)puVar11[1],0x10);
            *(void **)(puVar11 + 8) = pvVar7;
            memcpy(pvVar7,*(void **)((longlong)puVar11 + (longlong)param_4 + (0x10 - (longlong)_Dst)
                                    ),(ulonglong)puVar11[1]);
          }
          puVar11 = puVar11 + 0x1c;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)this,0x40,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar9;
    puVar10 = puVar9 + 1;
    *(undefined8 **)&this->field_0x30 = puVar10;
    *puVar9 = &___7FRHICommandSetBindingsOnShaderBindingTable__6B_;
    puVar9[6] = _Dst;
  }
  else {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)this,0x40,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar9;
    puVar10 = puVar9 + 1;
    *(undefined8 **)&this->field_0x30 = puVar10;
    *puVar9 = &___7FRHICommandSetBindingsOnShaderBindingTable__6B_;
    puVar9[6] = param_4;
  }
  *(ERayTracingBindingType *)(puVar9 + 7) = param_5;
  *(uint *)(puVar9 + 5) = param_3;
  puVar9[4] = param_2;
  puVar9[3] = 0;
  puVar9[2] = param_1;
  *puVar10 = 0;
  FRHICommandListBase::RHIThreadFence((FRHICommandListBase *)this,true);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_38 != (undefined8 *)0x0)) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  return;
}

// DrawIndexedPrimitiveIndirect @ 144870060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::DrawIndexedPrimitiveIndirect
          (FRHICommandList *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3)

{
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x200))(pIVar1,param_1,param_2,param_3);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &___7FRHICommandDrawIndexedPrimitiveIndirect__6B_;
    puVar2[2] = param_1;
    puVar2[3] = param_2;
    *(uint *)(puVar2 + 4) = param_3;
  }
  return;
}

// SetScissorRect @ 1448a0500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::SetScissorRect
          (FRHICommandList *this,bool param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0x1b0))(pIVar1,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &___7FRHICommandSetScissorRect__6B_;
    *(uint *)((longlong)puVar2 + 0x1c) = param_4;
    *(uint *)(puVar2 + 4) = param_5;
    *(bool *)(puVar2 + 2) = param_1;
    *(uint *)((longlong)puVar2 + 0x14) = param_2;
    *(uint *)(puVar2 + 3) = param_3;
  }
  return;
}

// DrawPrimitiveIndirect @ 14490e5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::DrawPrimitiveIndirect(FRHICommandList *this,FRHIBuffer *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHICommandContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x1e8);
                    /* WARNING: Could not recover jumptable at 0x00014490e631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar2;
  *(undefined8 **)&this->field_0x30 = puVar2 + 1;
  puVar2[1] = 0;
  puVar2[2] = param_1;
  *puVar2 = &___7FRHICommandDrawPrimitiveIndirect__6B_;
  *(uint *)(puVar2 + 3) = param_2;
  return;
}

// BeginRenderPass @ 144c2b1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::BeginRenderPass(FRHICommandList *this,FRHIRenderPassInfo *param_1,wchar_t *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  FRHITexture *pFVar3;
  undefined8 uVar4;
  FRHIRenderTargetView *pFVar5;
  bool bVar6;
  int iVar7;
  IRHICommandContext *pIVar8;
  undefined8 *puVar9;
  size_t sVar10;
  wchar_t *_Dest;
  undefined8 *puVar11;
  byte bVar12;
  FRHIRenderPassInfo *pFVar13;
  FRHISetRenderTargetsInfo *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_238 [32];
  FRHISetRenderTargetsInfo local_218;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  if ((this->field_0x29b & 2) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10a5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->field_0x29b & 4) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInsideComputePass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10a6,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRHIRenderPassInfo::Validate(param_1);
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)this,0x100,8);
    lVar17 = 2;
    pFVar13 = param_1;
    puVar11 = puVar9;
    do {
      pFVar3 = (pFVar13->ColorRenderTargets).Elements[0].ResolveTarget;
      *puVar11 = (pFVar13->ColorRenderTargets).Elements[0].RenderTarget;
      puVar11[1] = pFVar3;
      pFVar3 = (pFVar13->ColorRenderTargets).Elements[1].RenderTarget;
      puVar11[2] = *(undefined8 *)&(pFVar13->ColorRenderTargets).Elements[0].ArraySlice;
      puVar11[3] = pFVar3;
      uVar1 = *(undefined8 *)&(pFVar13->ColorRenderTargets).Elements[1].ArraySlice;
      puVar11[4] = (pFVar13->ColorRenderTargets).Elements[1].ResolveTarget;
      puVar11[5] = uVar1;
      pFVar3 = (pFVar13->ColorRenderTargets).Elements[2].ResolveTarget;
      puVar11[6] = (pFVar13->ColorRenderTargets).Elements[2].RenderTarget;
      puVar11[7] = pFVar3;
      pFVar3 = (pFVar13->ColorRenderTargets).Elements[3].RenderTarget;
      puVar11[8] = *(undefined8 *)&(pFVar13->ColorRenderTargets).Elements[2].ArraySlice;
      puVar11[9] = pFVar3;
      uVar1 = *(undefined8 *)&(pFVar13->ColorRenderTargets).Elements[3].ArraySlice;
      puVar11[10] = (pFVar13->ColorRenderTargets).Elements[3].ResolveTarget;
      puVar11[0xb] = uVar1;
      pFVar3 = (pFVar13->ColorRenderTargets).Elements[4].ResolveTarget;
      puVar11[0xc] = (pFVar13->ColorRenderTargets).Elements[4].RenderTarget;
      puVar11[0xd] = pFVar3;
      pFVar3 = (pFVar13->ColorRenderTargets).Elements[5].RenderTarget;
      puVar11[0xe] = *(undefined8 *)&(pFVar13->ColorRenderTargets).Elements[4].ArraySlice;
      puVar11[0xf] = pFVar3;
      lVar17 = lVar17 + -1;
      pFVar13 = (FRHIRenderPassInfo *)&(pFVar13->ColorRenderTargets).Elements[5].ResolveTarget;
      puVar11 = puVar11 + 0x10;
    } while (lVar17 != 0);
    sVar10 = wcslen(param_2);
    iVar7 = (int)sVar10;
    _Dest = FMemStackBase::Alloc((FMemStackBase *)this,(longlong)(iVar7 * 2) + 2,2);
    wcsncpy(_Dest,param_2,(longlong)iVar7);
    _Dest[iVar7] = L'\0';
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar11;
    *(undefined8 **)&this->field_0x30 = puVar11 + 1;
    puVar11[1] = 0;
    puVar11[2] = puVar9;
    puVar11[3] = _Dest;
    *puVar11 = &___7FRHICommandBeginRenderPass__6B_;
  }
  else {
    pIVar8 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar8->_padding_ + 0x248))(pIVar8,param_1,param_2);
  }
  FRHISetRenderTargetsInfo::FRHISetRenderTargetsInfo(&local_218);
  FRHIRenderPassInfo::ConvertToRenderTargetsInfo(param_1,&local_218);
  if (0 < local_218.NumColorRenderTargets) {
    pFVar14 = &local_218;
    uVar16 = 0;
    do {
      pFVar5 = pFVar14->ColorRenderTarget;
      uVar4 = *(undefined8 *)&pFVar14->ColorRenderTarget[0].MipIndex;
      uVar15 = (int)uVar16 + 1;
      uVar1 = *(undefined8 *)&pFVar14->ColorRenderTarget[0].LoadAction;
      pFVar14 = (FRHISetRenderTargetsInfo *)(pFVar14->ColorRenderTarget + 1);
      *(FRHITexture **)(&this->field_0x1c8 + uVar16 * 0x18) = pFVar5->Texture;
      *(undefined8 *)((longlong)(&this->field_0x1c8 + uVar16 * 0x18) + 8) = uVar4;
      *(undefined8 *)(&this->field_0x1d8 + uVar16 * 0x18) = uVar1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < local_218.NumColorRenderTargets);
  }
  *(int *)&this->field_0x1c0 = local_218.NumColorRenderTargets;
  bVar12 = local_218.ShadingRateTexture != (FRHITexture *)0x0 | this->field_0x29b & 0xfe;
  this->field_0x29b = bVar12;
  this->field_0x29a = local_218.MultiViewCount;
  *(undefined4 *)&this->field_0x288 = local_218.DepthStencilRenderTarget.Texture._0_4_;
  *(undefined4 *)&this->field_0x28c = local_218.DepthStencilRenderTarget.Texture._4_4_;
  this->field_0x290 = local_218.DepthStencilRenderTarget.DepthLoadAction;
  this->field_0x291 = local_218.DepthStencilRenderTarget.DepthStoreAction;
  this->field_0x292 = local_218.DepthStencilRenderTarget.StencilLoadAction;
  this->field_0x293 = local_218.DepthStencilRenderTarget.StencilStoreAction;
  *(Type *)&this->field_0x294 = local_218.DepthStencilRenderTarget.DepthStencilAccess.Value;
  this->field_0x298 = param_1->SubpassHint;
  this->field_0x299 = 0;
  this->field_0x29b = bVar12 | 2;
  if (param_1->NumOcclusionQueries != 0) {
    this->field_0x29b = bVar12 | 10;
    (**(code **)(GDynamicRHI->_padding_ + 0x268))(GDynamicRHI,this,1);
  }
  return;
}

// EndRenderPass @ 144d6dd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandList::EndRenderPass(FRHICommandList *this)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  IRHICommandContext *pIVar4;
  undefined8 *puVar5;
  
  if ((this->field_0x29b & 2) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->field_0x29b & 4) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInsideComputePass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = this->field_0x29b;
  if ((bVar3 & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,this,1);
    this->field_0x29b = this->field_0x29b & 0xf7;
    bVar3 = this->field_0x29b;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar3 & 0x20) == 0)) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x10,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar5;
    *(undefined8 **)&this->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar4 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar4->_padding_ + 0x250))(pIVar4);
  }
  this->field_0x29b = this->field_0x29b & 0xfd;
  *(undefined2 *)&this->field_0x298 = 0;
  return;
}

// CopyBufferRegion @ 144e82180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::CopyBufferRegion
          (FRHICommandList *this,FRHIBuffer *param_1,ulong64 param_2,FRHIBuffer *param_3,
          ulong64 param_4,ulong64 param_5)

{
  code *pcVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  undefined8 *puVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((this->field_0x29b & 2) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOutsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10f1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 == param_1) {
    UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FRHICommandList_&>(&local_58,this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceBuffer != DestBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10f3,L"\nBreadcrumbs: %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((ulonglong)(param_1->Desc).Size < param_5 + param_2) {
    UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FRHICommandList_&>(&local_48,this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DstOffset + NumBytes <= DestBuffer->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10f4,L"\nBreadcrumbs: %s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((ulonglong)(param_3->Desc).Size < param_4 + param_5) {
    UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FRHICommandList_&>(&local_38,this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcOffset + NumBytes <= SourceBuffer->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10f5,L"\nBreadcrumbs: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)this,0x38,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar4;
    *(undefined8 **)&this->field_0x30 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &___7FRHICommandCopyBufferRegion__6B_;
    puVar4[2] = param_1;
    puVar4[3] = param_2;
    puVar4[4] = param_3;
    puVar4[5] = param_4;
    puVar4[6] = param_5;
  }
  else {
    pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar3->_padding_ + 0x268))(pIVar3,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// NextSubpass @ 144fcce60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandList::NextSubpass(FRHICommandList *this)

{
  code *pcVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  undefined8 *puVar4;
  
  if ((this->field_0x29b & 2) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10e2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((GRHICommandList.bLatchedBypass != false) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar3->_padding_ + 600))(pIVar3);
    this->field_0x299 = this->field_0x299 + '\x01';
    return;
  }
  puVar4 = FMemStackBase::Alloc((FMemStackBase *)this,0x10,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar4;
  *(undefined8 **)&this->field_0x30 = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &___7FRHICommandNextSubpass__6B_;
  this->field_0x299 = this->field_0x299 + '\x01';
  return;
}

// SetDefaultRayTracingHitGroup @ 14533be00

void __thiscall
FRHICommandList::SetDefaultRayTracingHitGroup
          (FRHICommandList *this,FRHIShaderBindingTable *param_1,FRayTracingPipelineState *param_2,
          uint param_3)

{
  FRayTracingLocalShaderBindings *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)this,0x38,8);
  *(undefined4 *)&pFVar1->field_0x1 = 0;
  *(undefined2 *)&pFVar1->field_0x5 = 0;
  pFVar1->field_0x7 = 0;
  pFVar1->NumUniformBuffers = 0;
  pFVar1->LooseParameterDataSize = 0;
  *(undefined4 *)&pFVar1->field_0x24 = 0;
  pFVar1->Geometry = (FRHIRayTracingGeometry *)0x0;
  pFVar1->SegmentIndex = 0;
  pFVar1->RecordIndex = 0;
  pFVar1->UserData = 0;
  pFVar1->UniformBuffers = (FRHIUniformBuffer **)0x0;
  pFVar1->LooseParameterData = (uchar *)0x0;
  pFVar1->BindingType = Transient;
  pFVar1->ShaderIndexInPipeline = param_3;
  SetBindingsOnShaderBindingTable(this,param_1,param_2,1,pFVar1,HitGroup,false);
  return;
}

// SetRayTracingMissShader @ 14533bea0

void __thiscall
FRHICommandList::SetRayTracingMissShader
          (FRHICommandList *this,FRHIShaderBindingTable *param_1,uint param_2,
          FRayTracingPipelineState *param_3,uint param_4,uint param_5,FRHIUniformBuffer **param_6,
          uint param_7)

{
  FRHIUniformBuffer ***pppFVar1;
  FRayTracingLocalShaderBindings *pFVar2;
  FRHIUniformBuffer **_Dst;
  longlong lVar3;
  ulonglong uVar4;
  
  pFVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x38,8);
  *(undefined4 *)&pFVar2->field_0x1 = 0;
  pppFVar1 = &pFVar2->UniformBuffers;
  *(undefined2 *)&pFVar2->field_0x5 = 0;
  pFVar2->field_0x7 = 0;
  *(undefined4 *)&pFVar2->field_0x24 = 0;
  pFVar2->RecordIndex = param_2;
  pFVar2->BindingType = Transient;
  pFVar2->Geometry = (FRHIRayTracingGeometry *)0x0;
  pFVar2->SegmentIndex = 0;
  pFVar2->LooseParameterDataSize = 0;
  pFVar2->LooseParameterData = (uchar *)0x0;
  pFVar2->ShaderIndexInPipeline = param_4;
  pFVar2->UserData = param_7;
  *pppFVar1 = (FRHIUniformBuffer **)0x0;
  pFVar2->NumUniformBuffers = (ushort)param_5;
  if (param_5 != 0) {
    _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(ulonglong)param_5 << 3,8);
    *pppFVar1 = _Dst;
    if (param_5 != 0) {
      if (((param_5 < 2) || ((_Dst <= param_6 + (param_5 - 1) && (param_6 <= _Dst + (param_5 - 1))))
          ) || ((_Dst <= pppFVar1 && (pppFVar1 <= _Dst + (param_5 - 1))))) {
        uVar4 = (ulonglong)param_5;
        lVar3 = 0;
        do {
          *(undefined8 *)(lVar3 + (longlong)*pppFVar1) = *(undefined8 *)((longlong)param_6 + lVar3);
          uVar4 = uVar4 - 1;
          lVar3 = lVar3 + 8;
        } while (uVar4 != 0);
      }
      else {
        memcpy(_Dst,param_6,(ulonglong)param_5 << 3);
      }
    }
  }
  SetBindingsOnShaderBindingTable(this,param_1,param_3,1,pFVar2,MissShader,false);
  return;
}

// CopyTexture @ 1454e7ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList::CopyTexture
          (FRHICommandList *this,FRHITexture *param_1,FRHITexture *param_2,
          FRHICopyTextureInfo *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  undefined8 *puVar5;
  
  if ((param_1 == (FRHITexture *)0x0) || (param_2 == (FRHITexture *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceTextureRHI && DestTextureRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1077,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceTextureRHI != DestTextureRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1078,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->field_0x29b & 2) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOutsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1079,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((this->field_0x29b & 0x20) == 0)) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x60,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar5;
    *(undefined8 **)&this->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &___7FRHICommandCopyTexture__6B_;
    uVar2 = *(undefined8 *)((longlong)&(param_3->Size).field0_0x0 + 8);
    puVar5[2] = *(undefined8 *)&(param_3->Size).field0_0x0;
    puVar5[3] = uVar2;
    uVar2 = *(undefined8 *)&(param_3->DestPosition).field0_0x0;
    puVar5[4] = *(undefined8 *)((longlong)&(param_3->SourcePosition).field0_0x0 + 4);
    puVar5[5] = uVar2;
    uVar2 = *(undefined8 *)&param_3->DestSliceIndex;
    puVar5[6] = *(undefined8 *)((longlong)&(param_3->DestPosition).field0_0x0 + 8);
    puVar5[7] = uVar2;
    puVar5[8] = *(undefined8 *)&param_3->SourceMipIndex;
    *(uint *)(puVar5 + 9) = param_3->NumMips;
    puVar5[10] = param_1;
    puVar5[0xb] = param_2;
    if (param_1 == (FRHITexture *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6604847226579585294>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x90e,"SourceTexture");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (puVar5[0xb] == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6604847226579585295>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x90f,"DestTexture");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    pIVar4 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    (**(code **)(pIVar4->_padding_ + 0x260))(pIVar4,param_1,param_2,param_3);
  }
  return;
}

