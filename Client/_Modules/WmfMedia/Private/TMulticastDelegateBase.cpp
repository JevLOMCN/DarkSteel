// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 2

// AddDelegateInstance<TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>_> @ 14ea93320

FDelegateHandle __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
AddDelegateInstance<TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
          *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  uVar7 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_40);
  if ((*(int *)&in_R8->field_0x10 != 0) &&
     (plVar2 = *(longlong **)&in_R8->field_0x8, plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x38))();
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_14ea93388;
    }
  }
  bVar3 = false;
LAB_14ea93388:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (bVar3) {
    CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_40);
    if ((*(int *)&in_R8->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&in_R8->field_0x8, plVar2 != (longlong *)0x0)) {
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res10);
      uVar7 = *puVar6;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    *(undefined8 *)param_1 = uVar7;
    piVar1 = &(this->InvocationList).ArrayMax;
    iVar5 = (this->InvocationList).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->InvocationList).AllocatorInstance,piVar1);
    }
    (this->InvocationList).ArrayNum = iVar5 + 1;
    TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
    TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               ((this->InvocationList).AllocatorInstance.Data + (longlong)iVar5 * 0x10),in_R8);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// AddDelegateInstance<TDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>_> @ 14ea93450

FDelegateHandle __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
AddDelegateInstance<TDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  uVar7 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_40);
  if ((*(int *)&in_R8->field_0x10 != 0) &&
     (plVar2 = *(longlong **)&in_R8->field_0x8, plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x38))();
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_14ea934b8;
    }
  }
  bVar3 = false;
LAB_14ea934b8:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (bVar3) {
    CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_40);
    if ((*(int *)&in_R8->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&in_R8->field_0x8, plVar2 != (longlong *)0x0)) {
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res10);
      uVar7 = *puVar6;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    *(undefined8 *)param_1 = uVar7;
    piVar1 = &(this->InvocationList).ArrayMax;
    iVar5 = (this->InvocationList).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->InvocationList).AllocatorInstance,piVar1);
    }
    (this->InvocationList).ArrayNum = iVar5 + 1;
    TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
    TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               ((this->InvocationList).AllocatorInstance.Data + (longlong)iVar5 * 0x10),in_R8);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

