// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FModeRecord @ 147cc5990

FModeRecord * __thiscall
FGroomVisualizationData::FModeRecord::FModeRecord(FModeRecord *this,FModeRecord *param_1)

{
  (this->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.AllocatorInstance.Data = (param_1->ModeString).Data.AllocatorInstance.Data
  ;
  (param_1->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.ArrayNum = (param_1->ModeString).Data.ArrayNum;
  (this->ModeString).Data.ArrayMax = (param_1->ModeString).Data.ArrayMax;
  (param_1->ModeString).Data.ArrayNum = 0;
  (param_1->ModeString).Data.ArrayMax = 0;
  this->ModeName = param_1->ModeName;
  FText::FText(&this->ModeText,&param_1->ModeText);
  FText::FText(&this->ModeDesc,&param_1->ModeDesc);
  this->Mode = param_1->Mode;
  this->DefaultComposited = param_1->DefaultComposited;
  return this;
}

// FModeRecord @ 147ea6360

FModeRecord * __thiscall
FLumenVisualizationData::FModeRecord::FModeRecord(FModeRecord *this,FModeRecord *param_1)

{
  (this->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.AllocatorInstance.Data = (param_1->ModeString).Data.AllocatorInstance.Data
  ;
  (param_1->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.ArrayNum = (param_1->ModeString).Data.ArrayNum;
  (this->ModeString).Data.ArrayMax = (param_1->ModeString).Data.ArrayMax;
  (param_1->ModeString).Data.ArrayNum = 0;
  (param_1->ModeString).Data.ArrayMax = 0;
  this->ModeName = param_1->ModeName;
  FText::FText(&this->ModeText,&param_1->ModeText);
  FText::FText(&this->ModeDesc,&param_1->ModeDesc);
  this->ModeType = param_1->ModeType;
  this->ModeID = param_1->ModeID;
  this->DefaultComposited = param_1->DefaultComposited;
  return this;
}

// FModeRecord @ 147fa4930

FModeRecord * __thiscall
FNaniteVisualizationData::FModeRecord::FModeRecord(FModeRecord *this,FModeRecord *param_1)

{
  bool bVar1;
  
  (this->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.AllocatorInstance.Data = (param_1->ModeString).Data.AllocatorInstance.Data
  ;
  (param_1->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.ArrayNum = (param_1->ModeString).Data.ArrayNum;
  (this->ModeString).Data.ArrayMax = (param_1->ModeString).Data.ArrayMax;
  (param_1->ModeString).Data.ArrayNum = 0;
  (param_1->ModeString).Data.ArrayMax = 0;
  this->ModeName = param_1->ModeName;
  FText::FText(&this->ModeText,&param_1->ModeText);
  FText::FText(&this->ModeDesc,&param_1->ModeDesc);
  this->ModeType = param_1->ModeType;
  this->ModeID = param_1->ModeID;
  this->DefaultComposited = param_1->DefaultComposited;
  bVar1 = param_1->bDrawLegend;
  (this->LegendEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bDrawLegend = bVar1;
  (this->LegendEntries).AllocatorInstance.Data = (param_1->LegendEntries).AllocatorInstance.Data;
  (param_1->LegendEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegendEntries).ArrayNum = (param_1->LegendEntries).ArrayNum;
  (this->LegendEntries).ArrayMax = (param_1->LegendEntries).ArrayMax;
  (param_1->LegendEntries).ArrayNum = 0;
  (param_1->LegendEntries).ArrayMax = 0;
  return this;
}

// FModeRecord @ 1483e1ce0

FModeRecord * __thiscall
FRayTracingVisualizationData::FModeRecord::FModeRecord(FModeRecord *this,FModeRecord *param_1)

{
  (this->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.AllocatorInstance.Data = (param_1->ModeString).Data.AllocatorInstance.Data
  ;
  (param_1->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.ArrayNum = (param_1->ModeString).Data.ArrayNum;
  (this->ModeString).Data.ArrayMax = (param_1->ModeString).Data.ArrayMax;
  (param_1->ModeString).Data.ArrayNum = 0;
  (param_1->ModeString).Data.ArrayMax = 0;
  this->ModeName = param_1->ModeName;
  FText::FText(&this->ModeText,&param_1->ModeText);
  FText::FText(&this->ModeDesc,&param_1->ModeDesc);
  this->ModeType = param_1->ModeType;
  this->ModeID = param_1->ModeID;
  this->bTonemapped = param_1->bTonemapped;
  this->bHiddenInEditor = param_1->bHiddenInEditor;
  return this;
}

// FModeRecord @ 148805c80

FModeRecord * __thiscall
FSubstrateVisualizationData::FModeRecord::FModeRecord(FModeRecord *this,FModeRecord *param_1)

{
  (this->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.AllocatorInstance.Data = (param_1->ModeString).Data.AllocatorInstance.Data
  ;
  (param_1->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.ArrayNum = (param_1->ModeString).Data.ArrayNum;
  (this->ModeString).Data.ArrayMax = (param_1->ModeString).Data.ArrayMax;
  (param_1->ModeString).Data.ArrayNum = 0;
  (param_1->ModeString).Data.ArrayMax = 0;
  this->ModeName = param_1->ModeName;
  FText::FText(&this->ModeText,&param_1->ModeText);
  FText::FText(&this->ModeDesc,&param_1->ModeDesc);
  this->ViewMode = param_1->ViewMode;
  this->bDefaultComposited = param_1->bDefaultComposited;
  this->bAvailableCommand = param_1->bAvailableCommand;
  FText::FText(&this->UnavailableReason,&param_1->UnavailableReason);
  return this;
}

// FModeRecord @ 1489b3b60

FModeRecord * __thiscall
FVirtualShadowMapVisualizationData::FModeRecord::FModeRecord(FModeRecord *this,FModeRecord *param_1)

{
  (this->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.AllocatorInstance.Data = (param_1->ModeString).Data.AllocatorInstance.Data
  ;
  (param_1->ModeString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModeString).Data.ArrayNum = (param_1->ModeString).Data.ArrayNum;
  (this->ModeString).Data.ArrayMax = (param_1->ModeString).Data.ArrayMax;
  (param_1->ModeString).Data.ArrayNum = 0;
  (param_1->ModeString).Data.ArrayMax = 0;
  this->ModeName = param_1->ModeName;
  FText::FText(&this->ModeText,&param_1->ModeText);
  FText::FText(&this->ModeDesc,&param_1->ModeDesc);
  this->ModeType = param_1->ModeType;
  this->ModeID = param_1->ModeID;
  this->ViewModeIndex = param_1->ViewModeIndex;
  return this;
}

