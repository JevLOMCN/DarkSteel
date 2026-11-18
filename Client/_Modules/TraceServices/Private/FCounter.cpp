// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 21

// FCounter @ 14d420ea0

FCounter * __thiscall
TraceServices::FCounter::FCounter
          (FCounter *this,ILinearAllocator *param_1,
          TArray<double,TSizedDefaultAllocator<64>_> *param_2)

{
  this->FrameStartTimes = param_2;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__ICounter__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableCounter__;
  (this->IntCounterData).Timestamps.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntCounterData).Timestamps.Pages.ArrayNum = 0;
  (this->IntCounterData).Timestamps.Pages.ArrayMax = 0;
  (this->IntCounterData).Timestamps.FirstPage = (TVariablePagedArrayPage<double> *)0x0;
  (this->IntCounterData).Timestamps.LastPage = (TVariablePagedArrayPage<double> *)0x0;
  (this->IntCounterData).Timestamps.PageGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IntCounterData).Timestamps.PageGroups.ArrayNum = 0;
  (this->IntCounterData).Timestamps.PageGroups.ArrayMax = 0;
  (this->IntCounterData).Timestamps.FirstPageGroup = (TVariablePagedArrayPageGroup<double> *)0x0;
  (this->IntCounterData).Timestamps.LastPageGroup = (TVariablePagedArrayPageGroup<double> *)0x0;
  (this->IntCounterData).Timestamps.TotalItemCount = 0;
  (this->IntCounterData).OpTypes.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntCounterData).OpTypes.Pages.ArrayNum = 0;
  (this->IntCounterData).OpTypes.Pages.ArrayMax = 0;
  (this->IntCounterData).OpTypes.FirstPage =
       (TVariablePagedArrayPage<TraceServices::ECounterOpType> *)0x0;
  (this->IntCounterData).OpTypes.LastPage =
       (TVariablePagedArrayPage<TraceServices::ECounterOpType> *)0x0;
  (this->IntCounterData).OpTypes.PageGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntCounterData).OpTypes.PageGroups.ArrayNum = 0;
  (this->IntCounterData).OpTypes.PageGroups.ArrayMax = 0;
  (this->IntCounterData).OpTypes.FirstPageGroup =
       (TVariablePagedArrayPageGroup<TraceServices::ECounterOpType> *)0x0;
  (this->IntCounterData).OpTypes.LastPageGroup =
       (TVariablePagedArrayPageGroup<TraceServices::ECounterOpType> *)0x0;
  (this->IntCounterData).OpTypes.TotalItemCount = 0;
  (this->IntCounterData).OpArguments.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntCounterData).OpArguments.Pages.ArrayNum = 0;
  (this->IntCounterData).OpArguments.Pages.ArrayMax = 0;
  (this->IntCounterData).OpArguments.FirstPage = (TVariablePagedArrayPage<__int64> *)0x0;
  (this->IntCounterData).OpArguments.LastPage = (TVariablePagedArrayPage<__int64> *)0x0;
  (this->IntCounterData).OpArguments.PageGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IntCounterData).OpArguments.PageGroups.ArrayNum = 0;
  (this->IntCounterData).OpArguments.PageGroups.ArrayMax = 0;
  (this->IntCounterData).OpArguments.FirstPageGroup = (TVariablePagedArrayPageGroup<__int64> *)0x0;
  (this->IntCounterData).OpArguments.LastPageGroup = (TVariablePagedArrayPageGroup<__int64> *)0x0;
  (this->IntCounterData).OpArguments.TotalItemCount = 0;
  (this->DoubleCounterData).Timestamps.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DoubleCounterData).Timestamps.Pages.ArrayNum = 0;
  (this->DoubleCounterData).Timestamps.Pages.ArrayMax = 0;
  (this->DoubleCounterData).Timestamps.FirstPage = (TVariablePagedArrayPage<double> *)0x0;
  (this->DoubleCounterData).Timestamps.LastPage = (TVariablePagedArrayPage<double> *)0x0;
  (this->DoubleCounterData).Timestamps.PageGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DoubleCounterData).Timestamps.PageGroups.ArrayNum = 0;
  (this->DoubleCounterData).Timestamps.PageGroups.ArrayMax = 0;
  (this->DoubleCounterData).Timestamps.FirstPageGroup = (TVariablePagedArrayPageGroup<double> *)0x0;
  (this->DoubleCounterData).Timestamps.LastPageGroup = (TVariablePagedArrayPageGroup<double> *)0x0;
  (this->DoubleCounterData).Timestamps.TotalItemCount = 0;
  (this->DoubleCounterData).OpTypes.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleCounterData).OpTypes.Pages.ArrayNum = 0;
  (this->DoubleCounterData).OpTypes.Pages.ArrayMax = 0;
  (this->DoubleCounterData).OpTypes.FirstPage =
       (TVariablePagedArrayPage<TraceServices::ECounterOpType> *)0x0;
  (this->DoubleCounterData).OpTypes.LastPage =
       (TVariablePagedArrayPage<TraceServices::ECounterOpType> *)0x0;
  (this->DoubleCounterData).OpTypes.PageGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DoubleCounterData).OpTypes.PageGroups.ArrayNum = 0;
  (this->DoubleCounterData).OpTypes.PageGroups.ArrayMax = 0;
  (this->DoubleCounterData).OpTypes.FirstPageGroup =
       (TVariablePagedArrayPageGroup<TraceServices::ECounterOpType> *)0x0;
  (this->DoubleCounterData).OpTypes.LastPageGroup =
       (TVariablePagedArrayPageGroup<TraceServices::ECounterOpType> *)0x0;
  (this->DoubleCounterData).OpTypes.TotalItemCount = 0;
  (this->DoubleCounterData).OpArguments.Pages.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DoubleCounterData).OpArguments.Pages.ArrayNum = 0;
  (this->DoubleCounterData).OpArguments.Pages.ArrayMax = 0;
  (this->DoubleCounterData).OpArguments.FirstPage = (TVariablePagedArrayPage<double> *)0x0;
  (this->DoubleCounterData).OpArguments.LastPage = (TVariablePagedArrayPage<double> *)0x0;
  (this->DoubleCounterData).OpArguments.PageGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DoubleCounterData).OpArguments.PageGroups.ArrayNum = 0;
  (this->DoubleCounterData).OpArguments.PageGroups.ArrayMax = 0;
  (this->DoubleCounterData).OpArguments.FirstPageGroup = (TVariablePagedArrayPageGroup<double> *)0x0
  ;
  (this->DoubleCounterData).OpArguments.LastPageGroup = (TVariablePagedArrayPageGroup<double> *)0x0;
  (this->DoubleCounterData).OpArguments.TotalItemCount = 0;
  this->Name = (wchar_t *)0x0;
  this->Group = (wchar_t *)0x0;
  this->Description = (wchar_t *)0x0;
  this->DisplayHint = CounterDisplayHint_None;
  this->bIsFloatingPoint = false;
  this->bIsResetEveryFrame = false;
  (this->IntCounterData).Timestamps.Allocator = param_1;
  (this->IntCounterData).Timestamps.PageSize = 0x400;
  (this->IntCounterData).OpTypes.Allocator = param_1;
  (this->IntCounterData).OpTypes.PageSize = 0x400;
  (this->IntCounterData).OpArguments.Allocator = param_1;
  (this->IntCounterData).OpArguments.PageSize = 0x400;
  (this->DoubleCounterData).Timestamps.Allocator = param_1;
  (this->DoubleCounterData).Timestamps.PageSize = 0x400;
  (this->DoubleCounterData).OpTypes.Allocator = param_1;
  (this->DoubleCounterData).OpTypes.PageSize = 0x400;
  (this->DoubleCounterData).OpArguments.Allocator = param_1;
  (this->DoubleCounterData).OpArguments.PageSize = 0x400;
  return this;
}

// AddValue @ 14d43e880

void __thiscall TraceServices::FCounter::AddValue(FCounter *this,double param_1,double param_2)

{
  if (*(char *)((longlong)&this->Description + 4) != '\0') {
    TCounterData<double>::InsertOp
              ((TCounterData<double> *)&(this->IntCounterData).OpArguments.TotalItemCount,param_1,
               Add,param_2);
    return;
  }
  TCounterData<__int64>::InsertOp
            ((TCounterData<__int64> *)&this->FrameStartTimes,param_1,Add,(longlong)param_2);
  return;
}

// AddValue @ 14d43e8b0

void __thiscall TraceServices::FCounter::AddValue(FCounter *this,double param_1,long64 param_2)

{
  if (*(char *)((longlong)&this->Description + 4) != '\0') {
    TCounterData<double>::InsertOp
              ((TCounterData<double> *)&(this->IntCounterData).OpArguments.TotalItemCount,param_1,
               Add,(double)param_2);
    return;
  }
  TCounterData<__int64>::InsertOp
            ((TCounterData<__int64> *)&this->FrameStartTimes,param_1,Add,param_2);
  return;
}

// EnumerateFloatOps @ 14d459190

void __thiscall
TraceServices::FCounter::EnumerateFloatOps
          (FCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,double)> *param_4)

{
  TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,double)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_4;
  local_18._8_8_ = *(undefined8 *)&param_4->field_0x8;
  if (this->bIsFloatingPoint != false) {
    EnumerateCounterOpsInternal<double,double>
              (&this->DoubleCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,
               param_2,param_3,&local_18);
    return;
  }
  EnumerateCounterOpsInternal<__int64,double>
            (&this->IntCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,param_2,
             param_3,&local_18);
  return;
}

// EnumerateFloatValues @ 14d459240

void __thiscall
TraceServices::FCounter::EnumerateFloatValues
          (FCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,double)> *param_4)

{
  TFunctionRef<void___cdecl(double,double)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_4;
  local_18._8_8_ = *(undefined8 *)&param_4->field_0x8;
  if (this->bIsFloatingPoint != false) {
    EnumerateCounterValuesInternal<double,double>
              (&this->DoubleCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,
               param_2,param_3,&local_18);
    return;
  }
  EnumerateCounterValuesInternal<__int64,double>
            (&this->IntCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,param_2,
             param_3,&local_18);
  return;
}

// EnumerateOps @ 14d45ad80

void __thiscall
TraceServices::FCounter::EnumerateOps
          (FCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,__int64)> *param_4)

{
  TFunctionRef<void___cdecl(double,TraceServices::ECounterOpType,__int64)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_4;
  local_18._8_8_ = *(undefined8 *)&param_4->field_0x8;
  if (this->bIsFloatingPoint != false) {
    EnumerateCounterOpsInternal<double,__int64>
              (&this->DoubleCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,
               param_2,param_3,&local_18);
    return;
  }
  EnumerateCounterOpsInternal<__int64,__int64>
            (&this->IntCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,param_2,
             param_3,&local_18);
  return;
}

// EnumerateValues @ 14d45dbd0

void __thiscall
TraceServices::FCounter::EnumerateValues
          (FCounter *this,double param_1,double param_2,bool param_3,
          TFunctionRef<void___cdecl(double,__int64)> *param_4)

{
  TFunctionRef<void___cdecl(double,__int64)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_4;
  local_18._8_8_ = *(undefined8 *)&param_4->field_0x8;
  if (this->bIsFloatingPoint != false) {
    EnumerateCounterValuesInternal<double,__int64>
              (&this->DoubleCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,
               param_2,param_3,&local_18);
    return;
  }
  EnumerateCounterValuesInternal<__int64,__int64>
            (&this->IntCounterData,this->FrameStartTimes,this->bIsResetEveryFrame,param_1,param_2,
             param_3,&local_18);
  return;
}

// GetDescription @ 14d4650d0

wchar_t * __thiscall TraceServices::FCounter::GetDescription(FCounter *this)

{
  return this->Description;
}

// GetDisplayHint @ 14d465170

ECounterDisplayHint __thiscall TraceServices::FCounter::GetDisplayHint(FCounter *this)

{
  return this->DisplayHint;
}

// GetGroup @ 14d468380

wchar_t * __thiscall TraceServices::FCounter::GetGroup(FCounter *this)

{
  return this->Group;
}

// GetName @ 14d469c70

wchar_t * __thiscall TraceServices::FCounter::GetName(FCounter *this)

{
  return this->Name;
}

// IsFloatingPoint @ 14d474c50

bool __thiscall TraceServices::FCounter::IsFloatingPoint(FCounter *this)

{
  return this->bIsFloatingPoint;
}

// IsResetEveryFrame @ 14d474cb0

bool __thiscall TraceServices::FCounter::IsResetEveryFrame(FCounter *this)

{
  return this->bIsResetEveryFrame;
}

// SetDescription @ 14d489ed0

void __thiscall TraceServices::FCounter::SetDescription(FCounter *this,wchar_t *param_1)

{
  this->Group = param_1;
  return;
}

// SetDisplayHint @ 14d489ee0

void __thiscall TraceServices::FCounter::SetDisplayHint(FCounter *this,ECounterDisplayHint param_1)

{
  *(ECounterDisplayHint *)&this->Description = param_1;
  return;
}

// SetGroup @ 14d489ef0

void __thiscall TraceServices::FCounter::SetGroup(FCounter *this,wchar_t *param_1)

{
  this->Name = param_1;
  return;
}

// SetIsFloatingPoint @ 14d489f00

void __thiscall TraceServices::FCounter::SetIsFloatingPoint(FCounter *this,bool param_1)

{
  *(bool *)((longlong)&this->Description + 4) = param_1;
  return;
}

// SetIsResetEveryFrame @ 14d489f10

void __thiscall TraceServices::FCounter::SetIsResetEveryFrame(FCounter *this,bool param_1)

{
  *(bool *)((longlong)&this->Description + 5) = param_1;
  return;
}

// SetName @ 14d48a200

void __thiscall TraceServices::FCounter::SetName(FCounter *this,wchar_t *param_1)

{
  (this->DoubleCounterData).OpArguments.TotalItemCount = (ulong64)param_1;
  return;
}

// SetValue @ 14d48bc40

void __thiscall TraceServices::FCounter::SetValue(FCounter *this,double param_1,double param_2)

{
  if (*(char *)((longlong)&this->Description + 4) != '\0') {
    TCounterData<double>::InsertOp
              ((TCounterData<double> *)&(this->IntCounterData).OpArguments.TotalItemCount,param_1,
               Set,param_2);
    return;
  }
  TCounterData<__int64>::InsertOp
            ((TCounterData<__int64> *)&this->FrameStartTimes,param_1,Set,(longlong)param_2);
  return;
}

// SetValue @ 14d48bc70

void __thiscall TraceServices::FCounter::SetValue(FCounter *this,double param_1,long64 param_2)

{
  if (*(char *)((longlong)&this->Description + 4) != '\0') {
    TCounterData<double>::InsertOp
              ((TCounterData<double> *)&(this->IntCounterData).OpArguments.TotalItemCount,param_1,
               Set,(double)param_2);
    return;
  }
  TCounterData<__int64>::InsertOp
            ((TCounterData<__int64> *)&this->FrameStartTimes,param_1,Set,param_2);
  return;
}

