// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// BindStatic<> @ 142bbca40

void __thiscall
TDelegateRegistration<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
BindStatic<>(TDelegateRegistration<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
             *this,_func___cdecl_TSharedRef<IMessageLog,1>_FName_ptr *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIMessageLog___00__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_1;
    if (param_1 == (_func___cdecl_TSharedRef<IMessageLog,1>_FName_ptr *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
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

