// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// AsIterationProxy @ 148e5bca0

FNiagaraDataInterfaceProxyRW * __thiscall
FNiagaraDataInterfaceProxyRW::AsIterationProxy(FNiagaraDataInterfaceProxyRW *this)

{
  return this;
}

// ConsumePerInstanceDataFromGameThread @ 148e5e760

void __thiscall
FNiagaraDataInterfaceProxyRW::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyRW *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceRW.h"
                     ,0x58,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetElementCount @ 148e68df0

TIntVector3<int> * __thiscall
FNiagaraDataInterfaceProxyRW::GetElementCount
          (FNiagaraDataInterfaceProxyRW *this,TIntVector3<int> *__return_storage_ptr__,
          ulong64 param_1)

{
  undefined4 uVar1;
  
  uVar1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar1;
  return __return_storage_ptr__;
}

// GetGPUInstanceCountOffset @ 148e6ca40

uint __thiscall
FNiagaraDataInterfaceProxyRW::GetGPUInstanceCountOffset
          (FNiagaraDataInterfaceProxyRW *this,ulong64 param_1)

{
  return 0xffffffff;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e759a0

int __thiscall
FNiagaraDataInterfaceProxyRW::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyRW *this)

{
  return 0;
}

// GetDispatchArgs @ 149235a40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRW::GetDispatchArgs
          (FNiagaraDataInterfaceProxyRW *this,FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FNiagaraSimStageData *pFVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  uVar2 = (**(code **)(*(longlong *)this + 0x70))(this,param_1->SystemInstanceID);
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)this + 0x68))(this,local_18,param_1->SystemInstanceID);
  pFVar1 = param_1->SimStageData;
  *(undefined8 *)&(pFVar1->DispatchArgs).ElementCount.field0_0x0 = *puVar3;
  (pFVar1->DispatchArgs).ElementCount.field0_0x0._s_0.Z = *(int *)(puVar3 + 1);
  (param_1->SimStageData->DispatchArgs).GpuElementCountOffset = uVar2;
  return;
}

