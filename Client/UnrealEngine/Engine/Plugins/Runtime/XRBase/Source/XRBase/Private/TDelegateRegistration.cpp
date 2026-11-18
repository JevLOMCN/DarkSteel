// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// BindRaw<FDefaultSpectatorScreenController> @ 14cf787d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
::BindRaw<FDefaultSpectatorScreenController>
          (TDelegateRegistration<void___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,UE::Math::TVector2<double>),FDefaultDelegateUserPolicy>
           *this,FDefaultSpectatorScreenController *param_1,pmf_dc7a4ce2 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDefaultSpectatorScreenController____A6AXAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____11U__TVector2_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = param_1;
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
    if ((param_1 == (FDefaultSpectatorScreenController *)0x0) || (puVar5[4] == 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

