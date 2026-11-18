// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// FDefaultTextureInitializer @ 14596df40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDefaultTextureInitializer * __thiscall
UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer
          (FDefaultTextureInitializer *this,FRHICommandListBase *param_1,FRHITexture *param_2)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined1 auStackY_c8 [32];
  code *local_88 [2];
  undefined **local_78;
  FRHITexture *local_70;
  undefined ***local_60;
  undefined1 local_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_2 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_26_>__0___0FDefaultTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_58._0_8_ = 0;
  local_88[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                ::Call;
  local_30 = (longlong *)0x0;
  local_70 = param_2;
  FRHITextureInitializer::FRHITextureInitializer
            ((FRHITextureInitializer *)this,param_1,param_2,(void *)0x0,0,
             (TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)local_88,
             (TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
              *)local_58);
  if (local_58._0_8_ != 0) {
    plVar1 = (longlong *)(local_58 + 0x10);
    if (local_30 != (longlong *)0x0) {
      plVar1 = local_30;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar2 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar2 = local_60;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return this;
}

