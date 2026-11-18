// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 1

// OnPinComponentToARPin @ 14cf584a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FARSystemSupportBase::OnPinComponentToARPin
          (FARSystemSupportBase *this,USceneComponent *param_1,UARPin *param_2)

{
  UARPin *pUVar1;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (param_2 == (UARPin *)0x0) {
    if ((byte)LogAR._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    return false;
  }
  if (param_1 == (USceneComponent *)0x0) {
    if ((byte)LogAR._0_1_ < 3) {
      return false;
    }
    local_res18[0] = param_2->DebugName;
    ::FName::ToString(local_res18,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    return false;
  }
  pUVar1 = (UARPin *)(**(code **)(*(longlong *)this + 0x98))();
  if (pUVar1 != (UARPin *)0x0) {
    if (pUVar1 == param_2) {
      if ((byte)LogAR._0_1_ < 3) {
        return true;
      }
      local_res18[0] = param_2->DebugName;
      ::FName::ToString(local_res18,&local_28);
      (**(code **)(param_1->_padding_ + 0x478))(param_1,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return true;
    }
    if (2 < (byte)LogAR._0_1_) {
      local_res18[0] = param_2->DebugName;
      ::FName::ToString(local_res18,&local_38);
      (**(code **)(param_1->_padding_ + 0x478))(param_1,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    (pUVar1->PinnedComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (param_2->PinnedComponent).field0_0x0.DebugPtr = param_1;
  return true;
}

