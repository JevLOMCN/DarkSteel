// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// FDefaultBufferInitializer @ 14596de90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDefaultBufferInitializer * __thiscall
UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer
          (FDefaultBufferInitializer *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  undefined ***pppuVar1;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FRHIBuffer *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (param_2 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  local_30 = (undefined ***)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                ::Call;
  local_40 = param_2;
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)this,param_1,param_2,(void *)0x0,0,
             (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return this;
}

