// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// AddDelegateInstance<TDelegate<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>_> @ 14a78d470

FDelegateHandle __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
AddDelegateInstance<TDelegate<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar6 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      CompactInvocationList(this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar2 = *(longlong **)&in_R8->field_0x8, plVar2 != (longlong *)0x0)) {
        puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res10);
        uVar6 = *puVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar4 = (this->InvocationList).ArrayNum;
      piVar1 = &(this->InvocationList).ArrayMax;
      *(undefined8 *)param_1 = uVar6;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->InvocationList).AllocatorInstance,piVar1);
      }
      (this->InvocationList).ArrayNum = iVar4 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((this->InvocationList).AllocatorInstance.Data + (longlong)iVar4 * 0x10),in_R8);
      goto LAB_14a78d552;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14a78d552:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

