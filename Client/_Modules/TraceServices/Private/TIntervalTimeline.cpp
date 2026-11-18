// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 12

// EmplaceBeginEvent<TraceServices::FFileActivity_*_const_&> @ 14d414270

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

ulong64 __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::EmplaceBeginEvent<TraceServices::FFileActivity_*_const_&>
          (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
           *this,double param_1,FFileActivity **param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  ulong64 uVar3;
  ILinearAllocator *pIVar4;
  ulong64 uVar5;
  FFileActivity *pFVar6;
  int iVar7;
  FEventInternal *pFVar8;
  FEventPage *pFVar9;
  double dVar10;
  double dVar11;
  
  uVar3 = (this->Events).TotalItemCount;
  pFVar9 = (this->Events).LastPage;
  if ((pFVar9 == (FEventPage *)0x0) || (pFVar9->Count == (this->Events).PageSize)) {
    iVar7 = (this->Events).PagesArray.ArrayNum;
    piVar1 = &(this->Events).PagesArray.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->Events).PagesArray.AllocatorInstance,piVar1);
    }
    (this->Events).PagesArray.ArrayNum = iVar7 + 1;
    pFVar9 = (FEventPage *)
             ((this->Events).PagesArray.AllocatorInstance.Data + (longlong)iVar7 * 0x38);
    DefaultConstructItems<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage,int>
              (pFVar9,1);
    pIVar4 = (this->Events).Allocator;
    (this->Events).FirstPage = (FEventPage *)(this->Events).PagesArray.AllocatorInstance.Data;
    (this->Events).LastPage = pFVar9;
    pFVar8 = (FEventInternal *)
             (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->Events).PageSize * 0x18);
    ((this->Events).LastPage)->Items = pFVar8;
  }
  puVar2 = &(this->Events).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  pFVar9 = (this->Events).LastPage;
  uVar5 = pFVar9->Count;
  pFVar8 = pFVar9->Items;
  pFVar6 = *param_2;
  pFVar8[uVar5].EndTime = INFINITY;
  pFVar8[uVar5].Event = pFVar6;
  pFVar8[uVar5].StartTime = param_1;
  puVar2 = &((this->Events).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar9 = (this->Events).LastPage;
  if (pFVar9 == this->CurrentPage) {
    dVar10 = pFVar9->BeginTime;
    if (param_1 <= pFVar9->BeginTime) {
      dVar10 = param_1;
    }
    dVar11 = pFVar9->EndTime;
    if (pFVar9->EndTime <= param_1) {
      dVar11 = param_1;
    }
  }
  else {
    this->CurrentPage = pFVar9;
    pFVar9->BeginEventIndex = uVar3;
    dVar11 = param_1;
    dVar10 = param_1;
  }
  pFVar9->BeginTime = dVar10;
  pFVar9->EndTime = dVar11;
  pFVar9->EndEventIndex = uVar3 + 1;
  this->ModCount = this->ModCount + 1;
  pFVar9->OpenEvents = pFVar9->OpenEvents + 1;
  return uVar3;
}

// ~TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings> @ 14d427a50

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::
~TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
          (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
           *this)

{
  TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
  ::
  ~TPagedArray<TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventInternal,TraceServices::TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>::FEventPage>
            (&this->Events);
  return;
}

// EnumerateEvents @ 14d4528d0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::EnumerateEvents(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FFileActivity_*_const_&)>
                 *param_3)

{
  longlong lVar1;
  double *pdVar2;
  FEventInternal *pFVar3;
  FEventInternal *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FEventPage *pFVar8;
  FEventInternal *pFVar9;
  FEventInternal *pFVar10;
  FEventInternal *pFVar11;
  FEventInternal *pFVar12;
  undefined4 local_res8 [2];
  double local_58;
  double local_50 [5];
  
  pFVar11 = (FEventInternal *)0x0;
  if ((this->Events).TotalItemCount != 0) {
    if (((this->Events).PagesArray.ArrayNum == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar8 = (this->Events).FirstPage;
    pFVar10 = pFVar11;
    if (pFVar8->Items != (FEventInternal *)0x0) {
      pFVar10 = pFVar8->Items + (pFVar8->Count - 1);
    }
    if ((pFVar8->Count == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = pFVar8->Items;
    pFVar4 = pFVar8->Items;
    pFVar9 = pFVar11;
    pFVar12 = pFVar11;
    do {
      while( true ) {
        if (pFVar3 == (FEventInternal *)0x0) {
          return;
        }
        pFVar8 = (this->Events).FirstPage;
        if (((*(longlong *)((longlong)&pFVar8->OpenEvents + (longlong)pFVar12) == 0) &&
            (pdVar2 = (double *)((longlong)&pFVar8->EndTime + (longlong)pFVar12),
            *pdVar2 <= param_1 && param_1 != *pdVar2)) ||
           (param_2 < *(double *)((longlong)&pFVar12->StartTime + (longlong)&pFVar8->BeginTime)))
        break;
        local_58 = pFVar3->EndTime;
        if ((param_1 <= local_58) && (local_50[0] = pFVar3->StartTime, local_50[0] <= param_2)) {
          local_res8[0] = 0;
          iVar7 = (**(code **)param_3)
                            (*(undefined8 *)&param_3->field_0x8,local_50,&local_58,local_res8,
                             &pFVar3->Event);
          if (iVar7 == 1) {
            return;
          }
        }
        if (pFVar4 == pFVar10) {
          pFVar3 = pFVar11;
          pFVar4 = pFVar11;
          pFVar10 = pFVar11;
          if (pFVar9 != (FEventInternal *)(longlong)((this->Events).PagesArray.ArrayNum + -1)) {
            pFVar9 = (FEventInternal *)((longlong)&pFVar9->StartTime + 1);
            pFVar12 = (FEventInternal *)((longlong)pFVar9 * 0x38);
            pFVar8 = (this->Events).FirstPage + (longlong)pFVar9;
            pFVar4 = pFVar8->Items;
            if (pFVar4 != (FEventInternal *)0x0) {
              pFVar10 = pFVar4 + (pFVar8->Count - 1);
            }
            pFVar3 = pFVar4;
            if (pFVar8 == (FEventPage *)0x0) {
              pFVar3 = (FEventInternal *)0x0;
            }
          }
        }
        else {
          pFVar3 = pFVar4 + 1;
          pFVar4 = pFVar4 + 1;
        }
      }
      if (pFVar9 == (FEventInternal *)(longlong)((this->Events).PagesArray.ArrayNum + -1)) {
        return;
      }
      pFVar9 = (FEventInternal *)((longlong)&pFVar9->StartTime + 1);
      pFVar12 = (FEventInternal *)((longlong)pFVar9 * 0x38);
      pFVar3 = *(FEventInternal **)((longlong)&pFVar12[1].EndTime + (longlong)pFVar8);
      lVar1 = (longlong)&pFVar8->BeginTime + (longlong)&pFVar12->StartTime;
      pFVar10 = pFVar11;
      if (pFVar3 != (FEventInternal *)0x0) {
        pFVar10 = pFVar3 + *(longlong *)(lVar1 + 0x28) + -1;
      }
      pFVar4 = pFVar3;
    } while (lVar1 != 0);
  }
  return;
}

// EnumerateEvents @ 14d452af0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::EnumerateEvents(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FFileActivity_*_const_&)>
                 *param_3)

{
  (**(code **)(this->_padding_ + 0x58))();
  return;
}

// EnumerateEventsDownSampled @ 14d456550

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::EnumerateEventsDownSampled
          (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FFileActivity_*_const_&)>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\IntervalTimeline.h"
                     ,0x28,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EnumerateEventsDownSampled @ 14d456590

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::EnumerateEventsDownSampled
          (TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FFileActivity_*_const_&)>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\IntervalTimeline.h"
                     ,0x27,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetEndTime @ 14d4652a0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

double __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::GetEndTime(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
             *this)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = (this->Events).TotalItemCount;
  if (uVar1 != 0) {
    uVar3 = uVar1 - 1;
    uVar2 = (this->Events).PageSize;
    return (this->Events).FirstPage[uVar3 / uVar2].Items[uVar3 % uVar2].EndTime;
  }
  return 0.0;
}

// GetEvent @ 14d465570

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

FFileActivity ** __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::GetEvent(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
           *this,ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = (this->Events).PageSize;
  return &(this->Events).FirstPage[param_1 / uVar1].Items[param_1 % uVar1].Event;
}

// GetEventCount @ 14d4656a0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

ulong64 __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::GetEventCount(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
                *this)

{
  return (this->Events).TotalItemCount;
}

// GetEventInfo @ 14d465790

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

bool __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::GetEventInfo(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
               *this,double param_1,double param_2,int param_3,FTimelineEventInfo *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\IntervalTimeline.h"
                     ,0x88,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// GetModCount @ 14d4697e0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

ulong64 __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::GetModCount(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
              *this)

{
  return this->ModCount;
}

// GetStartTime @ 14d46cc60

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

double __thiscall
TraceServices::
TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
::GetStartTime(TIntervalTimeline<TraceServices::FFileActivity_*,TraceServices::FFileActivityProvider::FTimelineSettings>
               *this)

{
  if ((this->Events).TotalItemCount != 0) {
    return ((this->Events).FirstPage)->Items->StartTime;
  }
  return 0.0;
}

