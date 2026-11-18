// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FScopedWidgetUpdateTrace @ 1425bd890

FScopedWidgetUpdateTrace * __thiscall
FSlateTrace::FScopedWidgetUpdateTrace::FScopedWidgetUpdateTrace
          (FScopedWidgetUpdateTrace *this,SWidget *param_1)

{
  LARGE_INTEGER local_res8;
  
  this->Widget = param_1;
  this->UpdateFlags = None;
  if ((-1 < SlateChannel->Enabled) &&
     ((param_1->UpdateFlags & (NeedsActiveTimerUpdate|NeedsTick)) != None)) {
    QueryPerformanceCounter(&local_res8);
    this->StartCycle = (ulong64)local_res8;
    this->UpdateFlags = param_1->UpdateFlags & (NeedsActiveTimerUpdate|NeedsTick);
    ConditionallyUpdateWidgetInfo(this->Widget);
  }
  SlateTraceDetail::GScopedUpdateCount = SlateTraceDetail::GScopedUpdateCount + 1;
  return this;
}

// ~FScopedWidgetUpdateTrace @ 1425c1650

void __thiscall
FSlateTrace::FScopedWidgetUpdateTrace::~FScopedWidgetUpdateTrace(FScopedWidgetUpdateTrace *this)

{
  EWidgetUpdateFlags EVar1;
  LARGE_INTEGER local_res8;
  
  SlateTraceDetail::GScopedUpdateCount = SlateTraceDetail::GScopedUpdateCount - 1;
  EVar1 = this->UpdateFlags;
  if (EVar1 != None) {
    QueryPerformanceCounter(&local_res8);
    OutputWidgetUpdate(this->Widget,this->StartCycle,local_res8.QuadPart,EVar1,1);
  }
  return;
}

