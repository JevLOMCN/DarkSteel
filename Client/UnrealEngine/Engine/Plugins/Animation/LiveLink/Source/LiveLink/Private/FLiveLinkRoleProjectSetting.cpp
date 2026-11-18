// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// StaticStruct @ 14cff5860

UScriptStruct * __cdecl FLiveLinkRoleProjectSetting::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkRoleProjectSetting.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UScriptStruct_FLiveLinkRoleProjectSetting.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting,(UObject *)pUVar1,
                         L"LiveLinkRoleProjectSetting");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkRoleProjectSetting.OuterSingleton;
}

// FLiveLinkRoleProjectSetting @ 14d011d10

FLiveLinkRoleProjectSetting * __thiscall
FLiveLinkRoleProjectSetting::FLiveLinkRoleProjectSetting
          (FLiveLinkRoleProjectSetting *this,TSubclassOf<ULiveLinkSubjectSettings> param_1)

{
  UClass *pUVar1;
  
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = *(UClass **)param_1.Class.field0_0x0;
  (this->SettingClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->FrameInterpolationProcessor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->FramePreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramePreProcessors).ArrayNum = 0;
  (this->FramePreProcessors).ArrayMax = 0;
  return this;
}

