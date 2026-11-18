// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// BindRaw<FIoDispatcherImpl> @ 141788980

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindRaw<FIoDispatcherImpl>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          FIoDispatcherImpl *param_1,pmf_66b5d7c5 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_10 = &this->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherImpl____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_1;
    *(pmf_66b5d7c5 *)(puVar3 + 4) = param_2;
    if ((param_1 == (FIoDispatcherImpl *)0x0) || (param_2 == (pmf_66b5d7c5)0x0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
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

