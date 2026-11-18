// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 11

// ~FFrameProvider @ 14d3d0600

void __thiscall TraceServices::FFrameProvider::~FFrameProvider(FFrameProvider *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FFrameProvider *pFVar3;
  
  this->_padding_ = (longlong)&___7FFrameProvider_TraceServices__6B_;
  pFVar3 = this + 1;
  lVar2 = 2;
  do {
    pFVar1 = pFVar3[-1].FrameStartTimes[1].AllocatorInstance.Data;
    pFVar3 = (FFrameProvider *)(pFVar3[-1].FrameStartTimes + 1);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  DestructItems<TraceServices::TPagedArray<TraceServices::FFrame,TraceServices::TPagedArrayPage<TraceServices::FFrame>_>,int>
            ((TPagedArray<TraceServices::FFrame,TraceServices::TPagedArrayPage<TraceServices::FFrame>_>
              *)(this->Frames).AllocatorInstance.Data,(this->Frames).ArrayNum);
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetFrameStartTimes @ 14d3e0a90

TArray<double,TSizedDefaultAllocator<64>_> * __thiscall
TraceServices::FFrameProvider::GetFrameStartTimes(FFrameProvider *this,ETraceFrameType param_1)

{
  return this->FrameStartTimes + (int)param_1;
}

// FFrameProvider @ 14d421960

FFrameProvider * __thiscall
TraceServices::FFrameProvider::FFrameProvider(FFrameProvider *this,IAnalysisSession *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FFrameProvider_TraceServices__6B_;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  this->FrameStartTimes[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FrameStartTimes[0].ArrayNum = 0;
  this->FrameStartTimes[0].ArrayMax = 0;
  this->FrameStartTimes[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FrameStartTimes[1].ArrayNum = 0;
  this->FrameStartTimes[1].ArrayMax = 0;
  uVar3 = (**(code **)((longlong)*this->Session + 0xb8))();
  iVar2 = (this->Frames).ArrayNum;
  if (iVar2 == (this->Frames).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->Frames).AllocatorInstance,&(this->Frames).ArrayMax);
  }
  (this->Frames).ArrayNum = iVar2 + 1;
  lVar4 = (longlong)iVar2 * 0x38;
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + lVar4) = uVar3;
  *(undefined8 *)(pFVar1 + lVar4 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x20) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x28) = 0x10000;
  *(undefined8 *)(pFVar1 + lVar4 + 0x30) = 0;
  uVar3 = (**(code **)((longlong)*this->Session + 0xb8))();
  iVar2 = (this->Frames).ArrayNum;
  if (iVar2 == (this->Frames).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->Frames).AllocatorInstance,&(this->Frames).ArrayMax);
  }
  (this->Frames).ArrayNum = iVar2 + 1;
  lVar4 = (longlong)iVar2 * 0x38;
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + lVar4) = uVar3;
  *(undefined8 *)(pFVar1 + lVar4 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x20) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x28) = 0x10000;
  *(undefined8 *)(pFVar1 + lVar4 + 0x30) = 0;
  return this;
}

// BeginFrame @ 14d441b70

void __thiscall
TraceServices::FFrameProvider::BeginFrame
          (FFrameProvider *this,ETraceFrameType param_1,double param_2)

{
  long64 *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  double local_res18 [2];
  
  lVar14 = (longlong)(int)param_1;
  local_res18[0] = param_2;
  (**(code **)((longlong)*this->Session + 0xb0))();
  uVar8 = 0;
  if ((int)param_1 < (this->Frames).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar13 = lVar14 * 0x38;
  uVar3 = *(undefined8 *)((this->Frames).AllocatorInstance.Data + lVar13 + 0x30);
  uVar8 = 0;
  if ((int)param_1 < (this->Frames).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = (this->Frames).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar4 + lVar13 + 0x20) == 0) ||
     (*(longlong *)(*(longlong *)(pFVar4 + lVar13 + 0x20) + 8) ==
      *(longlong *)(pFVar4 + lVar13 + 0x28))) {
    iVar9 = *(int *)(pFVar4 + lVar13 + 0x10);
    if (iVar9 == *(int *)(pFVar4 + lVar13 + 0x14)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(pFVar4 + lVar13 + 8),
                         (int *)(pFVar4 + lVar13 + 0x14));
    }
    *(int *)(pFVar4 + lVar13 + 0x10) = iVar9 + 1;
    pvVar12 = (void *)((longlong)iVar9 * 0x10 + *(longlong *)(pFVar4 + lVar13 + 8));
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FFrame>,int>(pvVar12,1);
    *(void **)(pFVar4 + lVar13 + 0x20) = pvVar12;
    *(undefined8 *)(pFVar4 + lVar13 + 0x18) = *(undefined8 *)(pFVar4 + lVar13 + 8);
    uVar10 = (**(code **)(**(longlong **)(pFVar4 + lVar13) + 8))
                       (*(longlong **)(pFVar4 + lVar13),*(longlong *)(pFVar4 + lVar13 + 0x28) << 5);
    **(undefined8 **)(pFVar4 + lVar13 + 0x20) = uVar10;
  }
  *(longlong *)(pFVar4 + lVar13 + 0x30) = *(longlong *)(pFVar4 + lVar13 + 0x30) + 1;
  lVar5 = **(longlong **)(pFVar4 + lVar13 + 0x20);
  lVar11 = (*(longlong **)(pFVar4 + lVar13 + 0x20))[1] * 0x20;
  *(undefined8 *)(lVar11 + lVar5) = 0;
  ((undefined8 *)(lVar11 + lVar5))[1] = 0;
  puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(longlong *)(*(longlong *)(pFVar4 + lVar13 + 0x20) + 8) =
       *(longlong *)(*(longlong *)(pFVar4 + lVar13 + 0x20) + 8) + 1;
  *(undefined8 *)(lVar11 + 0x10 + lVar5) = 0x7ff0000000000000;
  *(undefined8 *)(lVar11 + lVar5) = uVar3;
  *(ETraceFrameType *)(lVar11 + 0x18 + lVar5) = param_1;
  *(double *)(lVar11 + 8 + lVar5) = local_res18[0];
  pFVar4 = this->FrameStartTimes[lVar14].AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar4 + this->FrameStartTimes[lVar14].ArrayMax * 8))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar13 = this->FrameStartTimes[lVar14].ArrayNum;
  plVar1 = &this->FrameStartTimes[lVar14].ArrayMax;
  if (lVar13 == *plVar1) {
    lVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                       (0x808,&this->FrameStartTimes[lVar14].AllocatorInstance,plVar1);
  }
  this->FrameStartTimes[lVar14].ArrayNum = lVar13 + 1;
  *(double *)(this->FrameStartTimes[lVar14].AllocatorInstance.Data + lVar13 * 8) = local_res18[0];
  (**(code **)((longlong)*this->Session + 0x38))(this->Session,local_res18[0]);
  return;
}

// EndFrame @ 14d451650

void __thiscall
TraceServices::FFrameProvider::EndFrame(FFrameProvider *this,ETraceFrameType param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  uVar8 = ~param_1 >> 0x1f;
  uVar5 = 0;
  if ((int)param_1 < (this->Frames).ArrayNum) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar7 = (longlong)(int)param_1 * 0x38;
  if (*(longlong *)((this->Frames).AllocatorInstance.Data + lVar7 + 0x30) != 0) {
    uVar5 = 0;
    if ((int)param_1 < (this->Frames).ArrayNum) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->Frames).AllocatorInstance.Data;
    uVar5 = 0;
    if ((int)param_1 < (this->Frames).ArrayNum) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = *(longlong *)((this->Frames).AllocatorInstance.Data + lVar7 + 0x30) - 1;
    uVar2 = *(ulonglong *)(pFVar1 + lVar7 + 0x28);
    *(double *)
     (*(longlong *)(*(longlong *)(pFVar1 + lVar7 + 0x18) + (uVar6 / uVar2) * 0x10) + 0x10 +
     (uVar6 % uVar2) * 0x20) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4517c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(param_2,0));
  return;
}

// EnumerateFrames @ 14d4594c0

void __thiscall
TraceServices::FFrameProvider::EnumerateFrames
          (FFrameProvider *this,ETraceFrameType param_1,double param_2,double param_3,
          TFunctionRef<void___cdecl(TraceServices::FFrame_const_&)> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar7 = 0;
  uVar5 = this->FrameStartTimes[lVar8].ArrayNum;
  if (0 < (longlong)uVar5) {
    do {
      uVar6 = uVar5 >> 1;
      pFVar1 = this->FrameStartTimes[lVar8].AllocatorInstance.Data + (uVar6 + uVar7) * 8;
      if (*(double *)pFVar1 <= param_2 && param_2 != *(double *)pFVar1) {
        uVar7 = (ulonglong)((uint)uVar5 & 1) + uVar6 + uVar7;
      }
      uVar5 = uVar6;
    } while (uVar6 != 0);
  }
  if (0 < (longlong)uVar7) {
    uVar4 = 0;
    if ((int)param_1 < (this->Frames).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Frames).AllocatorInstance.Data;
    uVar5 = uVar7 - 1;
    uVar6 = *(ulonglong *)(pFVar1 + lVar8 * 0x38 + 0x28);
    if (param_2 < *(double *)
                   (*(longlong *)
                     (*(longlong *)(pFVar1 + lVar8 * 0x38 + 0x18) + (uVar5 / uVar6) * 0x10) + 0x10 +
                   (uVar5 % uVar6) * 0x20)) {
      uVar7 = uVar5;
    }
  }
  lVar8 = lVar8 * 0x38;
  while( true ) {
    uVar4 = 0;
    if ((int)param_1 < (this->Frames).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(ulonglong *)((this->Frames).AllocatorInstance.Data + lVar8 + 0x30) <= uVar7) {
      return;
    }
    uVar4 = 0;
    if ((int)param_1 < (this->Frames).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pFVar1 = (this->Frames).AllocatorInstance.Data;
    uVar5 = *(ulonglong *)(pFVar1 + lVar8 + 0x28);
    if (param_3 < *(double *)
                   ((uVar7 % uVar5) * 0x20 +
                    *(longlong *)(*(longlong *)(pFVar1 + lVar8 + 0x18) + (uVar7 / uVar5) * 0x10) + 8
                   )) {
      return;
    }
    (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8);
    uVar7 = uVar7 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// EnumerateFrames @ 14d4596d0

void __thiscall
TraceServices::FFrameProvider::EnumerateFrames
          (FFrameProvider *this,ETraceFrameType param_1,ulong64 param_2,ulong64 param_3,
          TFunctionRef<void___cdecl(TraceServices::FFrame_const_&)> *param_4)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar6 = 0;
  if ((int)param_1 < (this->Frames).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar9 = (longlong)(int)param_1 * 0x38;
  uVar11 = *(ulonglong *)((this->Frames).AllocatorInstance.Data + lVar9 + 0x30);
  if (param_3 < uVar11) {
    uVar11 = param_3;
  }
  if (param_2 < uVar11) {
    uVar6 = 0;
    if ((int)param_1 < (this->Frames).ArrayNum) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->Frames).AllocatorInstance.Data;
    uVar7 = param_2 / *(ulonglong *)(pFVar1 + lVar9 + 0x28);
    if (param_2 != *(ulonglong *)(pFVar1 + lVar9 + 0x30)) {
      if ((*(ulonglong *)(pFVar1 + lVar9 + 0x30) <= param_2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InItemIndex < Outer->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x12e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((ulonglong)(longlong)*(int *)(pFVar1 + lVar9 + 0x10) <= uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentPageIndex < Outer->PagesArray.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x12f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar13 = (longlong *)(*(longlong *)(pFVar1 + lVar9 + 0x18) + uVar7 * 0x10);
      if (*plVar13 == 0) {
        puVar10 = (ulonglong *)0x0;
      }
      else {
        puVar10 = (ulonglong *)(plVar13[1] * 0x20 + -0x20 + *plVar13);
      }
      uVar2 = *(ulonglong *)(pFVar1 + lVar9 + 0x28);
      if (((ulonglong)plVar13[1] <= param_2 % uVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemIndexInPage < CurrentPage->Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                             ,0x134,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar8 = (ulonglong *)((param_2 % uVar2) * 0x20 + *plVar13);
      lVar4 = uVar7 * 0x10;
      while( true ) {
        while( true ) {
          if (puVar8 == (ulonglong *)0x0) {
            return;
          }
          if (uVar11 <= *puVar8) {
            return;
          }
          (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,puVar8);
          if (puVar8 == puVar10) break;
          puVar8 = puVar8 + 4;
        }
        if (uVar7 == (longlong)(*(int *)(pFVar1 + lVar9 + 0x10) + -1)) break;
        lVar12 = lVar4 + 0x10;
        uVar7 = uVar7 + 1;
        puVar8 = *(ulonglong **)(lVar12 + *(longlong *)(pFVar1 + lVar9 + 0x18));
        if (puVar8 == (ulonglong *)0x0) {
          puVar10 = (ulonglong *)0x0;
          lVar4 = lVar12;
        }
        else {
          puVar10 = puVar8 + *(longlong *)(lVar4 + 0x18 + *(longlong *)(pFVar1 + lVar9 + 0x18)) * 4
                             + -4;
          lVar4 = lVar12;
        }
      }
    }
  }
  return;
}

// GetFrame @ 14d467850

FFrame * __thiscall
TraceServices::FFrameProvider::GetFrame
          (FFrameProvider *this,ETraceFrameType param_1,ulong64 param_2)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrame *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  pFVar4 = (FFrame *)0x0;
  uVar3 = 0;
  if ((int)param_1 < (this->Frames).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFrame *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar6 = (this->Frames).AllocatorInstance.Data;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = *(int *)(pFVar6 + (longlong)(int)param_1 * 0x38 + 0x10);
  lVar9 = (longlong)local_48;
  _Src = *(void **)(pFVar6 + (longlong)(int)param_1 * 0x38 + 8);
  if (local_48 == 0) {
    local_44 = 0;
    iVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_48,0,&local_50,local_48,&local_44);
    memcpy(local_50.Data,_Src,lVar9 << 4);
    iVar7 = local_48;
  }
  local_40 = *(longlong *)(pFVar6 + (longlong)(int)param_1 * 0x38 + 0x18);
  local_38 = *(undefined8 *)(pFVar6 + (longlong)(int)param_1 * 0x38 + 0x20);
  local_30 = *(ulonglong *)(pFVar6 + (longlong)(int)param_1 * 0x38 + 0x28);
  local_28 = *(ulonglong *)(pFVar6 + (longlong)(int)param_1 * 0x38 + 0x30);
  if (param_2 < local_28) {
    pFVar4 = (FFrame *)
             ((param_2 % local_30) * 0x20 + *(longlong *)((param_2 / local_30) * 0x10 + local_40));
  }
  pFVar6 = local_50.Data + (longlong)iVar7 * 0x10;
  FVar5.Data = local_50.Data;
  iVar8 = iVar7;
  while( true ) {
    if (iVar8 != iVar7) {
      `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FFrame>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      iVar8 = local_48;
    }
    if (FVar5.Data == pFVar6) break;
    FVar5.Data = FVar5.Data + 0x10;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return pFVar4;
}

// GetFrameCount @ 14d4679f0

ulong64 __thiscall
TraceServices::FFrameProvider::GetFrameCount(FFrameProvider *this,ETraceFrameType param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  uVar3 = 0;
  if ((int)param_1 < (this->Frames).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return *(ulong64 *)((this->Frames).AllocatorInstance.Data + (longlong)(int)param_1 * 0x38 + 0x30);
}

// GetFrameFromTime @ 14d467a80

bool __thiscall
TraceServices::FFrameProvider::GetFrameFromTime
          (FFrameProvider *this,ETraceFrameType param_1,double param_2,FFrame *param_3)

{
  FScriptContainerElement *pFVar1;
  ulong64 *puVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = (longlong)(int)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  lVar12 = 0;
  uVar9 = this->FrameStartTimes[lVar13].ArrayNum;
  if (0 < (longlong)uVar9) {
    do {
      uVar10 = uVar9 >> 1;
      pFVar1 = this->FrameStartTimes[lVar13].AllocatorInstance.Data + (uVar10 + lVar12) * 8;
      if (*(double *)pFVar1 <= param_2 && param_2 != *(double *)pFVar1) {
        lVar12 = (ulonglong)((uint)uVar9 & 1) + uVar10 + lVar12;
      }
      uVar9 = uVar10;
    } while (uVar10 != 0);
    if (0 < lVar12) {
      uVar8 = 0;
      if ((int)param_1 < (this->Frames).ArrayNum) {
        uVar8 = ~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      lVar13 = lVar13 * 0x38;
      if ((*(longlong *)((this->Frames).AllocatorInstance.Data + lVar13 + 0x30) < lVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("LowerBound <= (int64)Frames[FrameType].Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Frames.cpp"
                             ,0x4c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar8 = 0;
      if ((int)param_1 < (this->Frames).ArrayNum) {
        uVar8 = ~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar1 = (this->Frames).AllocatorInstance.Data;
      uVar9 = *(ulonglong *)(pFVar1 + lVar13 + 0x28);
      lVar11 = ((lVar12 - 1U) % uVar9) * 0x20;
      lVar12 = *(longlong *)(*(longlong *)(pFVar1 + lVar13 + 0x18) + ((lVar12 - 1U) / uVar9) * 0x10)
      ;
      puVar2 = (ulong64 *)(lVar12 + lVar11);
      dVar5 = (double)puVar2[1];
      param_3->Index = *puVar2;
      param_3->StartTime = dVar5;
      pdVar3 = (double *)(lVar12 + 0x10 + lVar11);
      dVar5 = pdVar3[1];
      param_3->EndTime = *pdVar3;
      *(double *)&param_3->FrameType = dVar5;
      return true;
    }
  }
  return false;
}

// GetFrameNumberForTimestamp @ 14d467c30

uint __thiscall
TraceServices::FFrameProvider::GetFrameNumberForTimestamp
          (FFrameProvider *this,ETraceFrameType param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  lVar7 = 0;
  uVar5 = this->FrameStartTimes[lVar8].ArrayNum;
  if (0 < (longlong)uVar5) {
    do {
      uVar6 = uVar5 >> 1;
      pFVar1 = this->FrameStartTimes[lVar8].AllocatorInstance.Data + (uVar6 + lVar7) * 8;
      if (*(double *)pFVar1 <= param_2 && param_2 != *(double *)pFVar1) {
        lVar7 = (ulonglong)((uint)uVar5 & 1) + uVar6 + lVar7;
      }
      uVar5 = uVar6;
    } while (uVar6 != 0);
    if (0 < lVar7) {
      uVar4 = 0;
      if ((int)param_1 < (this->Frames).ArrayNum) {
        uVar4 = ~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if ((*(longlong *)((this->Frames).AllocatorInstance.Data + lVar8 * 0x38 + 0x30) < lVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LowerBound <= (int64)Frames[FrameType].Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\Frames.cpp"
                             ,0x86,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      return (int)lVar7 - 1;
    }
  }
  return 0;
}

