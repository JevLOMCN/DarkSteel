// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 3

// StaticStruct @ 148c4dc80

UScriptStruct * __cdecl FAutomationDeviceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationDeviceInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomationDeviceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationDeviceInfo,(UObject *)pUVar1,
                         L"AutomationDeviceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationDeviceInfo.OuterSingleton;
}

// FAutomationDeviceInfo @ 148c533d0

FAutomationDeviceInfo * __thiscall
FAutomationDeviceInfo::FAutomationDeviceInfo
          (FAutomationDeviceInfo *this,FAutomationDeviceInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  ::FString::FString(&this->DeviceName,&param_1->DeviceName);
  uVar1 = (param_1->Instance).B;
  uVar2 = (param_1->Instance).C;
  uVar3 = (param_1->Instance).D;
  (this->Instance).A = (param_1->Instance).A;
  (this->Instance).B = uVar1;
  (this->Instance).C = uVar2;
  (this->Instance).D = uVar3;
  ::FString::FString(&this->InstanceName,&param_1->InstanceName);
  ::FString::FString(&this->Platform,&param_1->Platform);
  ::FString::FString(&this->OSVersion,&param_1->OSVersion);
  ::FString::FString(&this->Model,&param_1->Model);
  ::FString::FString(&this->GPU,&param_1->GPU);
  ::FString::FString(&this->CPUModel,&param_1->CPUModel);
  this->RAMInGB = param_1->RAMInGB;
  ::FString::FString(&this->RenderMode,&param_1->RenderMode);
  ::FString::FString(&this->RHI,&param_1->RHI);
  ::FString::FString(&this->AppInstanceLog,&param_1->AppInstanceLog);
  return this;
}

// ~FAutomationDeviceInfo @ 148c54000

void __thiscall FAutomationDeviceInfo::~FAutomationDeviceInfo(FAutomationDeviceInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AppInstanceLog).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RHI).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderMode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CPUModel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GPU).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Model).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OSVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

