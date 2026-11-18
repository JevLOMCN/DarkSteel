// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 1

// CreateRaw<FRenderDocPluginModule> @ 14e2c7c10

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateRaw<FRenderDocPluginModule>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FRenderDocPluginModule *param_1,pmf_582f4921 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFRenderDocPluginModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = param_1;
    puVar6[4] = uVar3;
    puVar6[5] = uVar4;
    if ((param_1 == (FRenderDocPluginModule *)0x0) || (puVar6[4] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

