// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CreateBufferInitializer @ 147699120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBufferInitializer * __thiscall
FRHICommandListBase::CreateBufferInitializer
          (FRHICommandListBase *this,FRHIBufferInitializer *__return_storage_ptr__,
          FRHIBufferCreateDesc *param_1)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  FRHIBufferInitializer *pFVar4;
  
  EVar1 = this->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHIBufferInitializer *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (this->ActivePipelines == None) {
    SwitchPipeline(this,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,__return_storage_ptr__,this,param_1);
    SwitchPipeline(this,None);
    return __return_storage_ptr__;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// GetAsImmediate @ 1478cf930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListImmediate * __thiscall FRHICommandListBase::GetAsImmediate(FRHICommandListBase *this)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListImmediate *pFVar3;
  
  if ((this->PersistentState).bImmediate == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0x17,L"This operation expects the immediate command list.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHICommandListImmediate *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRHICommandListImmediate *)this;
}

// UpdateStreamSourceSlot @ 147d38d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::UpdateStreamSourceSlot
          (FRHICommandListBase *this,FRHIStreamSourceSlot *param_1,FRHIBuffer *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHICommandBase *pFVar7;
  undefined8 *local_res10;
  
  if (param_1 == (FRHIStreamSourceSlot *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamSourceSlotRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,899,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) {
    if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0'))
       && (this->bExecuting == false)) {
      pFVar7 = FMemStackBase::Alloc(&this->MemManager,0x30,8);
      this->NumCommands = this->NumCommands + 1;
      *this->CommandLink = pFVar7;
      this->CommandLink = &pFVar7->Next;
      pFVar7->Next = (FRHICommandBase *)0x0;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__O___UpdateStreamSourceSlot_1_QEAAXPEAVFRHIStreamSourceSlot__PEAVFRHIBuffer___Z___6B_
      ;
      pFVar7[1]._padding_ = (longlong)this;
      pFVar7[1].Next = (FRHICommandBase *)param_1;
      pFVar7[2]._padding_ = (longlong)param_2;
      pFVar7[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    }
    else {
      pFVar4 = (param_1->Buffer).Reference;
      if (pFVar4 != param_2) {
        (param_1->Buffer).Reference = param_2;
        if (param_2 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)param_2);
        }
        if (pFVar4 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar4);
        }
      }
    }
    RHIThreadFence(this,true);
    if (local_res10 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res10 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_res10 != (undefined8 *)0x0)) {
        (**(code **)*local_res10)(local_res10,1);
      }
    }
  }
  else {
    pFVar4 = (param_1->Buffer).Reference;
    if (pFVar4 != param_2) {
      (param_1->Buffer).Reference = param_2;
      if (param_2 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)param_2);
      }
      if (pFVar4 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
        return;
      }
    }
  }
  return;
}

// UpdateFromBufferTexture2D @ 148a1ef00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::UpdateFromBufferTexture2D
          (FRHICommandListBase *this,FRHITexture *param_1,uint param_2,
          FUpdateTextureRegion2D *param_3,uint param_4,FRHIBuffer *param_5,uint param_6)

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
                       ,0x3b5,
                       L"UpdateFromBufferTexture2D out of bounds on X. Texture: %s, %i, %i, %i");
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
                       ,0x3b6,
                       L"UpdateFromBufferTexture2D out of bounds on Y. Texture: %s, %i, %i, %i");
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
  (**(code **)(GDynamicRHI->_padding_ + 0x1f8))
            (GDynamicRHI,this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (bVar3) {
    SwitchPipeline(this,None);
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

