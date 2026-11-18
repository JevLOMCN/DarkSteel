// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// AddRaw<FWmfMediaTracks> @ 14ea93580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
::AddRaw<FWmfMediaTracks>
          (TMulticastDelegateRegistration<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
           *this,FWmfMediaTracks *param_1,pmf_974ddd6c *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateHandle FVar5;
  undefined8 *in_R9;
  FDestructionSentinel local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_88._0_8_ = *in_R9;
  local_88.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWmfMediaTracks____A6AXPEBEIUFTimespan__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = param_2;
    puVar3[4] = local_88._0_8_;
    puVar3[5] = local_88.Accessor;
    if ((param_2 == (pmf_974ddd6c *)0x0) || (puVar3[4] == 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar5.ID = (*pcVar1)();
        return (FDelegateHandle)FVar5.ID;
      }
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,
             (TDelegate<void___cdecl(unsigned_char_const_*,unsigned_int,FTimespan,FTimespan),FDefaultDelegateUserPolicy>
              *)param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

