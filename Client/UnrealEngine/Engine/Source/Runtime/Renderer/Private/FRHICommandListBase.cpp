// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// GetPipeline @ 14475eb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

ERHIPipeline __thiscall FRHICommandListBase::GetPipeline(FRHICommandListBase *this)

{
  code *pcVar1;
  bool bVar2;
  ERHIPipeline EVar3;
  ERHIPipeline EVar4;
  
  EVar3 = this->ActivePipelines;
  EVar4 = None;
  if (EVar3 != None) {
    if ((EVar3 & EVar3 - Graphics) != None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      return this->ActivePipelines;
    }
    EVar4 = this->ActivePipelines;
  }
  return EVar4;
}

// GetScratchShaderUnbinds @ 14475fac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBatchedShaderUnbinds * __thiscall
FRHICommandListBase::GetScratchShaderUnbinds(FRHICommandListBase *this)

{
  int iVar1;
  bool bVar2;
  undefined1 local_res8 [32];
  
  if (0 < (this->ScratchShaderUnbinds).Unbinds.ArrayNum) {
    bVar2 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()(local_res8)
    ;
    if (!bVar2) {
      iVar1 = (this->ScratchShaderUnbinds).Unbinds.ArrayMax;
      (this->ScratchShaderUnbinds).Unbinds.ArrayNum = 0;
      if (iVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)&this->ScratchShaderUnbinds,0,
                   &(this->ScratchShaderUnbinds).Unbinds.ArrayMax);
      }
    }
  }
  return &this->ScratchShaderUnbinds;
}

// GetScratchShaderParameters @ 144816940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBatchedShaderParameters * __thiscall
FRHICommandListBase::GetScratchShaderParameters(FRHICommandListBase *this)

{
  FRHIBatchedShaderParameters *pFVar1;
  bool bVar2;
  FRHIBatchedShaderParametersAllocator *pFVar3;
  FRHIBatchedShaderParametersAllocator *pFVar4;
  FRHIBatchedShaderParametersAllocator *pFVar5;
  undefined1 local_res8 [8];
  uint uStack_c;
  
  pFVar5 = (FRHIBatchedShaderParametersAllocator *)0x0;
  pFVar3 = (FRHIBatchedShaderParametersAllocator *)
           (this->ShaderParameterState).ScratchShaderParameters;
  if (pFVar3 == (FRHIBatchedShaderParametersAllocator *)0x0) {
    pFVar3 = FMemStackBase::Alloc(&this->MemManager,0x48,0x10);
    if (pFVar3 != (FRHIBatchedShaderParametersAllocator *)0x0) {
      pFVar4 = FMemStackBase::Alloc(&this->MemManager,0xb8,0x10);
      if (pFVar4 != (FRHIBatchedShaderParametersAllocator *)0x0) {
        pFVar4->Next = (this->ShaderParameterState).AllocatorsRoot;
        pFVar4->RHICmdList = this;
        FMemStackBase::FMemStackBase(&pFVar4->ParametersData,Small);
        FMemStackBase::FMemStackBase(&pFVar4->Parameters,Small);
        FMemStackBase::FMemStackBase(&pFVar4->ResourceParameters,Small);
        FMemStackBase::FMemStackBase(&pFVar4->BindlessParameters,Small);
        pFVar4->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
        (this->ShaderParameterState).AllocatorsRoot = pFVar4;
        pFVar5 = pFVar4;
      }
      pFVar3->Next = pFVar5;
      ((TArrayView<unsigned_char,int> *)&pFVar3->RHICmdList)->DataPtr = (uchar *)0x0;
      *(int *)&(pFVar3->ParametersData).Top = 0;
      (pFVar3->ParametersData).End = (uchar *)0x0;
      *(undefined4 *)&(pFVar3->ParametersData).TopChunk = 0;
      (pFVar3->ParametersData).TopMark = (FMemMark *)0x0;
      (pFVar3->ParametersData).NumMarks = 0;
      (pFVar3->Parameters).Top = (uchar *)0x0;
      *(int *)&(pFVar3->Parameters).End = 0;
      pFVar5 = pFVar3;
    }
    (this->ShaderParameterState).ScratchShaderParameters = (FRHIBatchedShaderParameters *)pFVar5;
    pFVar3 = pFVar5;
  }
  if ((0 < *(int *)&(pFVar3->Parameters).End + (pFVar3->ParametersData).NumMarks +
           *(int *)&(pFVar3->ParametersData).TopChunk) &&
     (bVar2 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                        (local_res8), !bVar2)) {
    pFVar1 = (this->ShaderParameterState).ScratchShaderParameters;
    pFVar1->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    (pFVar1->ParametersData).DataPtr = (uchar *)0x0;
    *(ulonglong *)&(pFVar1->ParametersData).ArrayNum = (ulonglong)uStack_c << 0x20;
    (pFVar1->Parameters).DataPtr = (FRHIShaderParameter *)0x0;
    *(ulonglong *)&(pFVar1->Parameters).ArrayNum = (ulonglong)uStack_c << 0x20;
    (pFVar1->ResourceParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
    *(ulonglong *)&(pFVar1->ResourceParameters).ArrayNum = (ulonglong)uStack_c << 0x20;
    (pFVar1->BindlessParameters).DataPtr = (FRHIShaderParameterResource *)0x0;
    *(ulonglong *)&(pFVar1->BindlessParameters).ArrayNum = (ulonglong)uStack_c << 0x20;
  }
  return (this->ShaderParameterState).ScratchShaderParameters;
}

// CreateBuffer @ 14486ca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FRHICommandListBase::CreateBuffer(FRHICommandListBase *this,FRHIBufferCreateDesc *param_1)

{
  ERHIPipeline EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  FRHIBufferCreateDesc *in_R8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((int)in_R8->_padding_ == 0) {
    uVar2 = (uint)in_R8->_padding_;
    if ((uVar2 >> 0x14 & 1) == 0) {
      InvalidBufferFatalError(this,in_R8);
    }
    else if ((*(int *)((longlong)&in_R8->_padding_ + 4) != 0) || (uVar2 != 0x100000)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x54f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Reference = (FRHIBuffer *)(*pcVar3)();
        return (TRefCountPtr<FRHIBuffer>)TVar5.Reference;
      }
    }
  }
  if (in_R8->InitAction == Initializer) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x327,
                       L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (FRHIBuffer *)(*pcVar3)();
      return (TRefCountPtr<FRHIBuffer>)TVar5.Reference;
    }
  }
  EVar1 = this->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (FRHIBuffer *)(*pcVar3)();
      return (TRefCountPtr<FRHIBuffer>)TVar5.Reference;
    }
  }
  bVar4 = this->ActivePipelines == None;
  if (bVar4) {
    SwitchPipeline(this,Graphics);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_78,this);
  FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_78);
  if ((local_48 != (FRHICommandListBase *)0x0) && (local_40 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_78);
  }
  if (local_78._0_8_ != 0) {
    plVar6 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (bVar4) {
    SwitchPipeline(this,None);
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// LockBuffer @ 144889a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FRHICommandListBase::LockBuffer
          (FRHICommandListBase *this,FRHIBuffer *param_1,uint param_2,uint param_3,
          EResourceLockMode param_4)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if ((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
      (this->bExecuting != false)) &&
     ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2ed,
                       L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  EVar1 = this->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  bVar3 = this->ActivePipelines == None;
  if (bVar3) {
    SwitchPipeline(this,Graphics);
  }
  pvVar4 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))
                             (GDynamicRHI,this,param_1,param_2,param_3,param_4);
  if (bVar3) {
    SwitchPipeline(this,None);
  }
  return pvVar4;
}

// UnlockBuffer @ 1448abe80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandListBase::UnlockBuffer(FRHICommandListBase *this,FRHIBuffer *param_1)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
      (this->bExecuting != false)) &&
     ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2f5,
                       L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ActivePipelines == None) {
    SwitchPipeline(this,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,this,param_1);
    SwitchPipeline(this,None);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001448abf67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,this,param_1);
  return;
}

// UpdateTexture3D @ 144b4e630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::UpdateTexture3D
          (FRHICommandListBase *this,FRHITexture *param_1,uint param_2,
          FUpdateTextureRegion3D *param_3,uint param_4,uint param_5,uchar *param_6)

{
  char cVar1;
  ERHIPipeline EVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FName local_res20;
  FName local_78;
  FMemScope local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (*(uint *)(lVar5 + 0x24) < param_3->DestX + param_3->Width) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_res10[0] = (FName)param_1->_padding_;
    ::FName::ToString(local_res10,&local_68);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestX + UpdateRegion.Width <= Texture->GetSizeX()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x3bf,L"UpdateTexture3D out of bounds on X. Texture: %s, %i, %i, %i");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (*(uint *)(lVar5 + 0x28) < param_3->DestY + param_3->Height) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_res20 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res20,&local_58);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestY + UpdateRegion.Height <= Texture->GetSizeY()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x3c0,L"UpdateTexture3D out of bounds on Y. Texture: %s, %i, %i, %i");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  cVar1 = *(char *)(lVar5 + 0x32);
  if (cVar1 == '\0') {
LAB_144b4e7e8:
    uVar6 = 1;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar6 = (uint)*(ushort *)(lVar5 + 0x2c);
        goto LAB_144b4e7ed;
      }
      if (cVar1 == '\x03') goto LAB_144b4e7e8;
      if (cVar1 != '\x04') {
        uVar6 = 0;
        goto LAB_144b4e7ed;
      }
    }
    uVar6 = (uint)*(ushort *)(lVar5 + 0x2e);
  }
LAB_144b4e7ed:
  if (uVar6 < param_3->DestZ + param_3->Depth) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_78 = (FName)param_1->_padding_;
    ::FName::ToString(&local_78,&local_48);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestZ + UpdateRegion.Depth <= Texture->GetSizeZ()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x3c1,L"UpdateTexture3D out of bounds on Z. Texture: %s, %i, %i, %i");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_70,Textures,true);
  EVar2 = this->ActivePipelines;
  if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = this->ActivePipelines == None;
  if (bVar4) {
    SwitchPipeline(this,Graphics);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x200))
            (GDynamicRHI,this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (bVar4) {
    SwitchPipeline(this,None);
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CreateTexture @ 144f01440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FRHICommandListBase::CreateTexture(FRHICommandListBase *this,FRHITextureCreateDesc *param_1)

{
  longlong *plVar1;
  ELLMTag EVar2;
  ELLMTag EVar3;
  FRHITextureDesc *in_R8;
  undefined1 auStackY_188 [32];
  FLLMScope local_158 [2];
  FMemScope local_150;
  FRHITextureDesc local_148;
  ETextureCreateFlags local_f8;
  EClearBinding local_f0;
  float local_ec;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [48];
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  FRHICommandListBase *local_68;
  FRHITexture *local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  EVar3 = Textures;
  EVar2 = Textures;
  if ((in_R8->Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
    EVar2 = RenderTargets;
  }
  FLLMScope::FLLMScope(local_158,EVar2,false,None,Default,true);
  if ((in_R8->Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
    EVar3 = RenderTargets;
  }
  FMemScope::FMemScope(&local_150,EVar3,true);
  if (in_R8[1].ClearValue.ColorBinding == ENoneBound) {
    FRHITextureDesc::FRHITextureDesc(&local_148,in_R8);
    local_f8 = in_R8[1].Flags;
    local_e8 = *(longlong *)((longlong)&in_R8[1].ClearValue.Value + 4);
    local_f0 = in_R8[1].ClearValue.ColorBinding;
    local_ec = in_R8[1].ClearValue.Value.Color[0];
    local_e0 = *(undefined8 *)((longlong)&in_R8[1].ClearValue.Value + 0xc);
    local_d8 = *(undefined8 *)&in_R8[1].ExtData;
    local_f0 = RHIGetDefaultResourceState(in_R8->Flags,local_e8 != 0);
    (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_c8,this,&local_148);
    if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,local_c8,this);
  }
  FMemScope::~FMemScope(&local_150);
  FLLMScope::~FLLMScope(local_158);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_c8);
  if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_c8);
  }
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar1 = local_70;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_c8._0_8_ != 0) {
    plVar1 = (longlong *)(local_c8 + 0x10);
    if ((longlong *)local_c8._40_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_c8._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// CreateShaderResourceView @ 144f8e660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FRHICommandListBase::CreateShaderResourceView
          (FRHICommandListBase *this,FRHIBuffer *param_1,FInitializer *param_2)

{
  FLLMScope local_res10 [2];
  FMemScope local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (local_18,&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                       ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,param_1,this,param_2);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// UpdateUniformBuffer @ 144ff6610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::UpdateUniformBuffer
          (FRHICommandListBase *this,FRHIUniformBuffer *param_1,void *param_2)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = this->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ActivePipelines == None) {
    SwitchPipeline(this,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,this,param_1,param_2);
    SwitchPipeline(this,None);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ff66c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,this,param_1,param_2);
  return;
}

// CreateBatchedShaderParameterAllocator @ 14504eac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBatchedShaderParametersAllocator * __thiscall
FRHICommandListBase::CreateBatchedShaderParameterAllocator
          (FRHICommandListBase *this,ERHIBatchedShaderParameterAllocatorPageSize param_1)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  bool bVar2;
  
  pFVar1 = FMemStackBase::Alloc(&this->MemManager,0xb8,0x10);
  if (pFVar1 != (FRHIBatchedShaderParametersAllocator *)0x0) {
    bVar2 = param_1 != Small;
    pFVar1->Next = (this->ShaderParameterState).AllocatorsRoot;
    pFVar1->RHICmdList = this;
    FMemStackBase::FMemStackBase(&pFVar1->ParametersData,bVar2);
    FMemStackBase::FMemStackBase(&pFVar1->Parameters,bVar2);
    FMemStackBase::FMemStackBase(&pFVar1->ResourceParameters,bVar2);
    FMemStackBase::FMemStackBase(&pFVar1->BindlessParameters,bVar2);
    pFVar1->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    (this->ShaderParameterState).AllocatorsRoot = pFVar1;
    return pFVar1;
  }
  return (FRHIBatchedShaderParametersAllocator *)0x0;
}

// CreateTextureInitializer @ 1450c1f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHITextureInitializer * __thiscall
FRHICommandListBase::CreateTextureInitializer
          (FRHICommandListBase *this,FRHITextureInitializer *__return_storage_ptr__,
          FRHITextureCreateDesc *param_1)

{
  ELLMTag EVar1;
  ELLMTag EVar2;
  undefined1 auStackY_f8 [32];
  FLLMScope local_c8 [2];
  FMemScope local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_80 [8];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  ERHIAccess local_60;
  ERHITextureInitAction local_5c;
  FResourceBulkDataInterface *local_58;
  FName local_50;
  FName local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  EVar2 = Textures;
  EVar1 = Textures;
  if ((param_1->_padding_ & 5) != 0) {
    EVar1 = RenderTargets;
  }
  FLLMScope::FLLMScope(local_c8,EVar1,false,None,Default,true);
  if ((param_1->_padding_ & 5) != 0) {
    EVar2 = RenderTargets;
  }
  FMemScope::FMemScope(&local_c0,EVar2,true);
  if (param_1->InitialState == None) {
    local_b0 = param_1->_padding_;
    lStack_a8 = param_1->_padding_;
    local_6c = 1;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_86 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
    local_b8 = param_1->_padding_;
    local_85 = *(undefined1 *)((longlong)&param_1->_padding_ + 3);
    local_84 = *(undefined1 *)((longlong)&param_1->_padding_ + 4);
    local_94 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
    local_8c = *(undefined2 *)((longlong)&param_1->_padding_ + 4);
    local_8a = *(undefined2 *)((longlong)&param_1->_padding_ + 6);
    local_88 = (undefined1)param_1->_padding_;
    local_87 = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
    local_a0 = (undefined4)param_1->_padding_;
    local_98 = (undefined4)param_1->_padding_;
    local_83 = *(undefined1 *)((longlong)&param_1->_padding_ + 5);
    local_9c = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
              (local_80,(TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                         *)&param_1->_padding_);
    local_68 = param_1->DebugName;
    local_58 = param_1->BulkData;
    local_60 = param_1->InitialState;
    local_5c = param_1->InitAction;
    local_50 = param_1->ClassName;
    local_48 = param_1->OwnerName;
    local_60 = RHIGetDefaultResourceState
                         (param_1->_padding_,local_58 != (FResourceBulkDataInterface *)0x0);
    (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,__return_storage_ptr__,this,&local_b8)
    ;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x198))(GDynamicRHI,__return_storage_ptr__,this,param_1);
  }
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_c8);
  return __return_storage_ptr__;
}

// UpdateTexture2D @ 145164ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::UpdateTexture2D
          (FRHICommandListBase *this,FRHITexture *param_1,uint param_2,
          FUpdateTextureRegion2D *param_3,uint param_4,uchar *param_5)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FName local_res20;
  FMemScope local_68;
  FString local_60;
  FString local_50;
  
  lVar4 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (*(uint *)(lVar4 + 0x24) < param_3->DestX + param_3->Width) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_res10[0] = (FName)param_1->_padding_;
    ::FName::ToString(local_res10,&local_60);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestX + UpdateRegion.Width <= Texture->GetSizeX()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x394,L"UpdateTexture2D out of bounds on X. Texture: %s, %i, %i, %i");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (*(uint *)(lVar4 + 0x28) < param_3->DestY + param_3->Height) {
    (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_res20 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res20,&local_50);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UpdateRegion.DestY + UpdateRegion.Height <= Texture->GetSizeY()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x395,L"UpdateTexture2D out of bounds on Y. Texture: %s, %i, %i, %i");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_68,Textures,true);
  EVar1 = this->ActivePipelines;
  if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = this->ActivePipelines == None;
  if (bVar3) {
    SwitchPipeline(this,Graphics);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1f0))
            (GDynamicRHI,this,param_1,param_2,param_3,param_4,param_5);
  if (bVar3) {
    SwitchPipeline(this,None);
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CreateShaderResourceView @ 1456fd0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FRHICommandListBase::CreateShaderResourceView
          (FRHICommandListBase *this,FRHITexture *param_1,FInitializer *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name983,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name983,true);
  lVar3 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
  if (lVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture->GetTextureReference() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x3d8,
                       L"Creating a shader resource view of an FRHITextureReference is not supported."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FRHIShaderResourceView *)(*pcVar1)();
      return (TRefCountPtr<FRHIShaderResourceView>)TVar4.Reference;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,param_1,this,param_2);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// CreateUnorderedAccessView @ 145762af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FRHICommandListBase::CreateUnorderedAccessView
          (FRHICommandListBase *this,FRHIBuffer *param_1,FInitializer *param_2)

{
  FLLMScope local_res10 [2];
  FMemScope local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name991,L"RHIMisc/CreateUnorderedAccessView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name991,false,None,Default,true);
  FMemScope::FMemScope
            (local_18,&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                       ::__l2::LLMScope_Name991,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,param_1,this,param_2);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// operator() @ 1504c2c60

bool __thiscall
`FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6604847226579584185>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6604847226579584185>,
                       &`public:___cdecl_`public:_struct_FRHIBatchedShaderUnbinds&___ptr64___cdecl_FRHICommandListBase::GetScratchShaderUnbinds(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504c2ca0

bool __thiscall
`FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6604847226579584175>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6604847226579584175>,
                       &`public:___cdecl_`public:_struct_FRHIBatchedShaderParameters&___ptr64___cdecl_FRHICommandListBase::GetScratchShaderParameters(void)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

