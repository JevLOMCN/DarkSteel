// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FindFreeElement @ 144919340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FRenderTargetPool::FindFreeElement
          (FRenderTargetPool *this,FRHICommandListBase *param_1,FPooledRenderTargetDesc *param_2,
          TRefCountPtr<IPooledRenderTarget> *param_3,wchar_t *param_4)

{
  bool bVar1;
  FRHITextureDesc *pFVar2;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar2 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_88,param_2);
  bVar1 = FindFreeElement(this,param_1,pFVar2,param_3,param_4);
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  return bVar1;
}

