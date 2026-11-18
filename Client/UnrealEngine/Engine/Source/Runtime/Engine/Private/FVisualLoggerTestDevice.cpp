// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FVisualLoggerTestDevice @ 1489b6030

FVisualLoggerTestDevice * __thiscall
FVisualLoggerTestDevice::FVisualLoggerTestDevice(FVisualLoggerTestDevice *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVisualLoggerTestDevice__6B_;
  (this->LastEntry).TimeStamp = -1.0;
  (this->LastEntry).WorldTimeStamp = -1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastEntry).Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastEntry).Location.field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastEntry).bPassedClassAllowList = '\0';
  (this->LastEntry).bIsInitialized = '\0';
  (this->LastEntry).bIsLocationValid = '\0';
  (this->LastEntry).bIsAllowedToLog = '\0';
  (this->LastEntry).bPassedObjectAllowList = '\0';
  (this->LastEntry).Location.field0_0x0._s_0.Z = (double)uVar2;
  (this->LastEntry).Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastEntry).Events.ArrayNum = 0;
  (this->LastEntry).Events.ArrayMax = 0;
  (this->LastEntry).LogLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastEntry).LogLines.ArrayNum = 0;
  (this->LastEntry).LogLines.ArrayMax = 0;
  (this->LastEntry).Status.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastEntry).Status.ArrayNum = 0;
  (this->LastEntry).Status.ArrayMax = 0;
  (this->LastEntry).ElementsToDraw.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastEntry).ElementsToDraw.ArrayNum = 0;
  (this->LastEntry).ElementsToDraw.ArrayMax = 0;
  (this->LastEntry).HistogramSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastEntry).HistogramSamples.ArrayNum = 0;
  (this->LastEntry).HistogramSamples.ArrayMax = 0;
  (this->LastEntry).DataBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastEntry).DataBlocks.ArrayNum = 0;
  (this->LastEntry).DataBlocks.ArrayMax = 0;
  this->LastObject = (UObject *)0x0;
  FVisualLogEntry::Reset(&this->LastEntry);
  return this;
}

// Cleanup @ 1489cfdf0

void __thiscall FVisualLoggerTestDevice::Cleanup(FVisualLoggerTestDevice *this,bool param_1)

{
  this->LastObject = (UObject *)0x0;
  FVisualLogEntry::Reset(&this->LastEntry);
  return;
}

// Serialize @ 148a13040

void __thiscall
FVisualLoggerTestDevice::Serialize
          (FVisualLoggerTestDevice *this,UObject *param_1,FName *param_2,FName *param_3,
          FName *param_4,FVisualLogEntry *param_5)

{
  this->LastObject = param_1;
  FVisualLogEntry::operator=(&this->LastEntry,param_5);
  return;
}

