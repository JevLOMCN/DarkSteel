// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// Lock @ 145ea5e70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGScatterUploader::Lock(FRDGScatterUploader *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (this->State != (atomic<FRDGScatterUploader::EState>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::Empty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x38b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  this->State = (atomic<FRDGScatterUploader::EState>)0x1;
  UNLOCK();
  pvVar3 = FRHICommandListBase::LockBuffer
                     (param_1,this->ScatterBuffer,0,this->ScatterBytes,RLM_WriteOnly);
  this->_padding_ = (longlong)pvVar3;
  pvVar3 = FRHICommandListBase::LockBuffer
                     (param_1,this->UploadBuffer,0,this->UploadBytes,RLM_WriteOnly);
  this->_padding_ = (longlong)pvVar3;
  return;
}

// Unlock @ 145ebc080

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGScatterUploader::Unlock(FRDGScatterUploader *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->State != (atomic<FRDGScatterUploader::EState>)0x1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::Locked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x393,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  this->State = (atomic<FRDGScatterUploader::EState>)0x2;
  UNLOCK();
  FRHICommandListBase::UnlockBuffer(param_1,this->ScatterBuffer);
  FRHICommandListBase::UnlockBuffer(param_1,this->UploadBuffer);
  return;
}

