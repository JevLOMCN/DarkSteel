// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FPersistentBuffer @ 1453fa0b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPersistentBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
          (FPersistentBuffer *this,int param_1,wchar_t *param_2,bool param_3)

{
  this->MinimumNumElementsReserved = param_1;
  this->Name = param_2;
  this->bRoundUpToPOT = param_3;
  (this->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// Empty @ 14542dad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Empty(FPersistentBuffer *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->PooledBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014542db03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// Register @ 145446cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
          (FPersistentBuffer *this,FRDGBuilder *param_1)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PooledBuffer,None);
  return pFVar1;
}

// ResizeAndClearBufferIfNeeded @ 14544e9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::FPersistentBuffer::ResizeAndClearBufferIfNeeded
          (FPersistentBuffer *this,FRDGBuilder *param_1,FRDGBufferDesc *param_2)

{
  FRDGPooledBuffer *pFVar1;
  FRDGBuffer *pFVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  FMemsetResourceParams local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = (this->PooledBuffer).Reference;
  uVar3 = 0;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar3 = (pFVar1->Desc).NumElements;
  }
  pFVar2 = ::ResizeBufferIfNeeded(param_1,&this->PooledBuffer,param_2,this->Name);
  local_38.Count = (pFVar2->Desc).NumElements;
  if (uVar3 < local_38.Count) {
    local_38.Count = local_38.Count - uVar3;
    local_38.Value = 0;
    local_38.DstOffset = uVar3;
    MemsetResource(param_1,pFVar2,&local_38);
  }
  return pFVar2;
}

// ResizeBufferIfNeeded @ 14544ea50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
UE::RendererPrivateUtils::Implementation::FPersistentBuffer::ResizeBufferIfNeeded
          (FPersistentBuffer *this,FRDGBuilder *param_1,FRDGBufferDesc *param_2)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = ::ResizeBufferIfNeeded(param_1,&this->PooledBuffer,param_2,this->Name);
  return pFVar1;
}

