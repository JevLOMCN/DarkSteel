// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// Exec_Dev @ 145b85080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FVulkanCommandsHelper::Exec_Dev
          (FVulkanCommandsHelper *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"VULKAN_SIMULATE_LOST_SURFACE",true);
  if (bVar1) {
    GSimulateLostSurfaceInNextPresent = true;
    pwVar2 = L"Vulkan: simulating lost surface next frame\'s present";
  }
  else {
    bVar1 = FParse::Command(local_res18,L"VULKAN_SIMULATE_SUBOPTIMAL_SURFACE",true);
    if (bVar1) {
      GSimulateSuboptimalSurfaceInNextTick = true;
      pwVar2 = L"Vulkan: simulating suboptimal surface next frame";
    }
    else {
      bVar1 = FParse::Command(local_res18,L"VULKAN_SIMULATE_SWAPCHAIN_LOST_SURFACE",true);
      if (!bVar1) {
        return false;
      }
      GSimulateLostSurfaceInNextSwapChain = true;
      pwVar2 = L"Vulkan: simulating lost surface on next swapchain creation";
    }
  }
  ::FString::PrintfImpl(&local_18,pwVar2);
  FOutputDevice::Log(param_3,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

