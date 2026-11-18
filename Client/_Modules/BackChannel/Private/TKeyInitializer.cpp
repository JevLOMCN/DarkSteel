// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 1

// operator<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_> @ 14e7f2820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<FString_const_&>::
operator<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_28;
  
  local_28._padding_ = 0;
  local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_28._24_8_ = _UNK_150631d48;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x10,&local_28);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_28.InvocationList.AllocatorInstance.Data,local_28.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_28.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_28.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  return __return_storage_ptr__;
}

