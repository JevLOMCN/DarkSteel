// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FScopedWidgetPaintTrace @ 1425bd760

FScopedWidgetPaintTrace * __thiscall
FSlateTrace::FScopedWidgetPaintTrace::FScopedWidgetPaintTrace
          (FScopedWidgetPaintTrace *this,SWidget *param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  FScopedWidgetPaintTrace *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  LARGE_INTEGER local_res8;
  
  this->Widget = param_1;
  this->StartPaintCount = SlateTraceDetail::GFramePaintCount;
  if (-1 < SlateChannel->Enabled) {
    QueryPerformanceCounter(&local_res8);
    pSVar1 = this->Widget;
    this->StartCycle = (ulong64)local_res8;
    uVar5 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    if (0x3fff < uVar5 + 0x12) {
      SlateTraceDetail::FlushWidgetUpdateStepsBuffer();
      uVar5 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    }
    uVar6 = uVar5;
    if (SlateTraceDetail::GScopedPaintCount == 0) {
      uVar6 = (ulonglong)((int)uVar5 + 1);
      SlateTraceDetail::WidgetUpdateStepsBuffer[uVar5] =
           SlateTraceDetail::kWidgetUpdateStepsCommand_NewRootPaint;
    }
    SlateTraceDetail::WidgetUpdateStepsBuffer[uVar6] =
         SlateTraceDetail::kWidgetUpdateStepsCommand_StartPaint;
    *(LARGE_INTEGER *)(SlateTraceDetail::WidgetUpdateStepsBuffer + ((int)uVar6 + 1)) = local_res8;
    SlateTraceDetail::WidgetUpdateStepsIndex = (int)uVar6 + 9;
    if ((pSVar1 == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InWidget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                           ,0x8b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedWidgetPaintTrace *)(*pcVar2)();
      return pFVar4;
    }
    uVar5 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    SlateTraceDetail::WidgetUpdateStepsIndex = SlateTraceDetail::WidgetUpdateStepsIndex + 8;
    *(ulong64 *)(SlateTraceDetail::WidgetUpdateStepsBuffer + uVar5) = pSVar1->UniqueIdentifier;
    ConditionallyUpdateWidgetInfo(this->Widget);
  }
  SlateTraceDetail::GScopedPaintCount = SlateTraceDetail::GScopedPaintCount + 1;
  SlateTraceDetail::GFramePaintCount = SlateTraceDetail::GFramePaintCount + 1;
  return this;
}

// ~FScopedWidgetPaintTrace @ 1425c13e0

void __thiscall
FSlateTrace::FScopedWidgetPaintTrace::~FScopedWidgetPaintTrace(FScopedWidgetPaintTrace *this)

{
  ulonglong uVar1;
  uint uVar2;
  EWidgetUpdateFlags EVar3;
  bool bVar4;
  LARGE_INTEGER local_res10 [3];
  
  SlateTraceDetail::GScopedPaintCount = SlateTraceDetail::GScopedPaintCount - 1;
  if (-1 < SlateChannel->Enabled) {
    QueryPerformanceCounter(local_res10);
    uVar1 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    uVar2 = SlateTraceDetail::GFramePaintCount - this->StartPaintCount;
    if (0x3fff < uVar1 + 9) {
      SlateTraceDetail::FlushWidgetUpdateStepsBuffer();
      uVar1 = (ulonglong)SlateTraceDetail::WidgetUpdateStepsIndex;
    }
    bVar4 = SlateTraceDetail::GScopedPaintCount == 0;
    SlateTraceDetail::WidgetUpdateStepsBuffer[uVar1] =
         SlateTraceDetail::kWidgetUpdateStepsCommand_EndPaint;
    SlateTraceDetail::WidgetUpdateStepsIndex = (int)uVar1 + 9;
    ((LARGE_INTEGER *)(SlateTraceDetail::WidgetUpdateStepsBuffer + ((int)uVar1 + 1)))->QuadPart =
         (LONGLONG)local_res10[0];
    if (bVar4) {
      EVar3 = NeedsRepaint;
      if (this->Widget->bCachedVolatile != '\0') {
        EVar3 = NeedsVolatilePaint;
      }
      OutputWidgetUpdate(this->Widget,this->StartCycle,local_res10[0].QuadPart,EVar3,uVar2);
    }
  }
  return;
}

