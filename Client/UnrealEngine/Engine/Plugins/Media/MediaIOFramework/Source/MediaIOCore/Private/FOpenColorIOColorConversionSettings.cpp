// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// FOpenColorIOColorConversionSettings @ 14d78a850

FOpenColorIOColorConversionSettings * __thiscall
FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
          (FOpenColorIOColorConversionSettings *this,FOpenColorIOColorConversionSettings *param_1)

{
  UOpenColorIOConfiguration *pUVar1;
  
  pUVar1 = (param_1->ConfigurationSource).field0_0x0.DebugPtr;
  (this->ConfigurationSource).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UOpenColorIOConfiguration *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (param_1->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
  (param_1->SourceColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).ColorSpaceName.Data.ArrayNum =
       (param_1->SourceColorSpace).ColorSpaceName.Data.ArrayNum;
  (this->SourceColorSpace).ColorSpaceName.Data.ArrayMax =
       (param_1->SourceColorSpace).ColorSpaceName.Data.ArrayMax;
  (param_1->SourceColorSpace).ColorSpaceName.Data.ArrayNum = 0;
  (param_1->SourceColorSpace).ColorSpaceName.Data.ArrayMax = 0;
  (this->SourceColorSpace).FamilyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).FamilyName.Data.AllocatorInstance.Data =
       (param_1->SourceColorSpace).FamilyName.Data.AllocatorInstance.Data;
  (param_1->SourceColorSpace).FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).FamilyName.Data.ArrayNum =
       (param_1->SourceColorSpace).FamilyName.Data.ArrayNum;
  (this->SourceColorSpace).FamilyName.Data.ArrayMax =
       (param_1->SourceColorSpace).FamilyName.Data.ArrayMax;
  (param_1->SourceColorSpace).FamilyName.Data.ArrayNum = 0;
  (param_1->SourceColorSpace).FamilyName.Data.ArrayMax = 0;
  (this->SourceColorSpace).Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).Description.Data.AllocatorInstance.Data =
       (param_1->SourceColorSpace).Description.Data.AllocatorInstance.Data;
  (param_1->SourceColorSpace).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).Description.Data.ArrayNum =
       (param_1->SourceColorSpace).Description.Data.ArrayNum;
  (this->SourceColorSpace).Description.Data.ArrayMax =
       (param_1->SourceColorSpace).Description.Data.ArrayMax;
  (param_1->SourceColorSpace).Description.Data.ArrayNum = 0;
  (param_1->SourceColorSpace).Description.Data.ArrayMax = 0;
  (this->DestinationColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (param_1->DestinationColorSpace).ColorSpaceName.Data.AllocatorInstance.Data;
  (param_1->DestinationColorSpace).ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).ColorSpaceName.Data.ArrayNum =
       (param_1->DestinationColorSpace).ColorSpaceName.Data.ArrayNum;
  (this->DestinationColorSpace).ColorSpaceName.Data.ArrayMax =
       (param_1->DestinationColorSpace).ColorSpaceName.Data.ArrayMax;
  (param_1->DestinationColorSpace).ColorSpaceName.Data.ArrayNum = 0;
  (param_1->DestinationColorSpace).ColorSpaceName.Data.ArrayMax = 0;
  (this->DestinationColorSpace).FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).FamilyName.Data.AllocatorInstance.Data =
       (param_1->DestinationColorSpace).FamilyName.Data.AllocatorInstance.Data;
  (param_1->DestinationColorSpace).FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).FamilyName.Data.ArrayNum =
       (param_1->DestinationColorSpace).FamilyName.Data.ArrayNum;
  (this->DestinationColorSpace).FamilyName.Data.ArrayMax =
       (param_1->DestinationColorSpace).FamilyName.Data.ArrayMax;
  (param_1->DestinationColorSpace).FamilyName.Data.ArrayNum = 0;
  (param_1->DestinationColorSpace).FamilyName.Data.ArrayMax = 0;
  (this->DestinationColorSpace).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).Description.Data.AllocatorInstance.Data =
       (param_1->DestinationColorSpace).Description.Data.AllocatorInstance.Data;
  (param_1->DestinationColorSpace).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).Description.Data.ArrayNum =
       (param_1->DestinationColorSpace).Description.Data.ArrayNum;
  (this->DestinationColorSpace).Description.Data.ArrayMax =
       (param_1->DestinationColorSpace).Description.Data.ArrayMax;
  (param_1->DestinationColorSpace).Description.Data.ArrayNum = 0;
  (param_1->DestinationColorSpace).Description.Data.ArrayMax = 0;
  (this->DestinationDisplayView).Display.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).Display.Data.AllocatorInstance.Data =
       (param_1->DestinationDisplayView).Display.Data.AllocatorInstance.Data;
  (param_1->DestinationDisplayView).Display.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).Display.Data.ArrayNum =
       (param_1->DestinationDisplayView).Display.Data.ArrayNum;
  (this->DestinationDisplayView).Display.Data.ArrayMax =
       (param_1->DestinationDisplayView).Display.Data.ArrayMax;
  (param_1->DestinationDisplayView).Display.Data.ArrayNum = 0;
  (param_1->DestinationDisplayView).Display.Data.ArrayMax = 0;
  (this->DestinationDisplayView).View.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).View.Data.AllocatorInstance.Data =
       (param_1->DestinationDisplayView).View.Data.AllocatorInstance.Data;
  (param_1->DestinationDisplayView).View.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).View.Data.ArrayNum =
       (param_1->DestinationDisplayView).View.Data.ArrayNum;
  (this->DestinationDisplayView).View.Data.ArrayMax =
       (param_1->DestinationDisplayView).View.Data.ArrayMax;
  (param_1->DestinationDisplayView).View.Data.ArrayNum = 0;
  (param_1->DestinationDisplayView).View.Data.ArrayMax = 0;
  (this->DestinationDisplayView).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).Description.Data.AllocatorInstance.Data =
       (param_1->DestinationDisplayView).Description.Data.AllocatorInstance.Data;
  (param_1->DestinationDisplayView).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestinationDisplayView).Description.Data.ArrayNum =
       (param_1->DestinationDisplayView).Description.Data.ArrayNum;
  (this->DestinationDisplayView).Description.Data.ArrayMax =
       (param_1->DestinationDisplayView).Description.Data.ArrayMax;
  (param_1->DestinationDisplayView).Description.Data.ArrayNum = 0;
  (param_1->DestinationDisplayView).Description.Data.ArrayMax = 0;
  this->DisplayViewDirection = param_1->DisplayViewDirection;
  return this;
}

// FOpenColorIOColorConversionSettings @ 14d78a9f0

FOpenColorIOColorConversionSettings * __thiscall
FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
          (FOpenColorIOColorConversionSettings *this,FOpenColorIOColorConversionSettings *param_1)

{
  UOpenColorIOConfiguration *pUVar1;
  
  pUVar1 = (param_1->ConfigurationSource).field0_0x0.DebugPtr;
  (this->ConfigurationSource).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UOpenColorIOConfiguration *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  ::FString::FString(&(this->SourceColorSpace).ColorSpaceName,
                     &(param_1->SourceColorSpace).ColorSpaceName);
  ::FString::FString(&(this->SourceColorSpace).FamilyName,&(param_1->SourceColorSpace).FamilyName);
  ::FString::FString(&(this->SourceColorSpace).Description,&(param_1->SourceColorSpace).Description)
  ;
  ::FString::FString(&(this->DestinationColorSpace).ColorSpaceName,
                     &(param_1->DestinationColorSpace).ColorSpaceName);
  ::FString::FString(&(this->DestinationColorSpace).FamilyName,
                     &(param_1->DestinationColorSpace).FamilyName);
  ::FString::FString(&(this->DestinationColorSpace).Description,
                     &(param_1->DestinationColorSpace).Description);
  ::FString::FString(&(this->DestinationDisplayView).Display,
                     &(param_1->DestinationDisplayView).Display);
  ::FString::FString(&(this->DestinationDisplayView).View,&(param_1->DestinationDisplayView).View);
  ::FString::FString(&(this->DestinationDisplayView).Description,
                     &(param_1->DestinationDisplayView).Description);
  this->DisplayViewDirection = param_1->DisplayViewDirection;
  return this;
}

