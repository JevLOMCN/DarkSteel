// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 342

// Construct<FSlateWidgetStyle> @ 14241e360

void __cdecl UE::CoreUObject::Private::Construct<FSlateWidgetStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// ConstructForTests<FSlateWidgetStyle> @ 14241e370

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateWidgetStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Destruct<FSlateWidgetStyle> @ 14241e380

void __cdecl UE::CoreUObject::Private::Destruct<FSlateWidgetStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateWidgetStyle__6B_;
  return;
}

// Copy<FSlateWidgetStyle> @ 14241e390

bool __cdecl
UE::CoreUObject::Private::Copy<FSlateWidgetStyle>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FMargin> @ 14241e5d0

void __cdecl UE::CoreUObject::Private::Construct<FMargin>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMargin> @ 14241e5e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMargin>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Construct<FFontSdfSettings> @ 14241e670

void __cdecl UE::CoreUObject::Private::Construct<FFontSdfSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x20;
  return;
}

// ConstructForTests<FFontSdfSettings> @ 14241e680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFontSdfSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x20;
  return;
}

// Destruct<FFontSdfSettings> @ 14241e690

void __cdecl UE::CoreUObject::Private::Destruct<FFontSdfSettings>(void *param_1)

{
  return;
}

// Copy<FFontSdfSettings> @ 14241e6a0

bool __cdecl
UE::CoreUObject::Private::Copy<FFontSdfSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FCurveSequence,FCurveSequence_*_&> @ 1424229d0

FCurveSequence * __cdecl
UE::Core::Private::DereferenceIfNecessary<FCurveSequence,FCurveSequence_*_&>
          (FCurveSequence **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::Private::FSlateCrashReporterHandler,UE::Slate::Private::FSlateCrashReporterHandler_*_&> @ 1424229f0

FSlateCrashReporterHandler * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::Private::FSlateCrashReporterHandler,UE::Slate::Private::FSlateCrashReporterHandler_*_&>
          (FSlateCrashReporterHandler **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&> @ 142422a10

FConsoleSlateDebugger * __cdecl
UE::Core::Private::DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>
          (FConsoleSlateDebugger **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&> @ 142422a30

FConsoleSlateDebuggerBreak * __cdecl
UE::Core::Private::DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
          (FConsoleSlateDebuggerBreak **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&> @ 142422a50

FConsoleSlateDebuggerInvalidate * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
          (FConsoleSlateDebuggerInvalidate **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&> @ 142422a70

FConsoleSlateDebuggerInvalidationRoot * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&>
          (FConsoleSlateDebuggerInvalidationRoot **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&> @ 142422a90

FConsoleSlateDebuggerPaint * __cdecl
UE::Core::Private::DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&>
          (FConsoleSlateDebuggerPaint **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebuggerPassBase,FConsoleSlateDebuggerPassBase_*_&> @ 142422ab0

FConsoleSlateDebuggerPassBase * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FConsoleSlateDebuggerPassBase,FConsoleSlateDebuggerPassBase_*_&>
          (FConsoleSlateDebuggerPassBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&> @ 142422ad0

FConsoleSlateDebuggerPrepass * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&>
          (FConsoleSlateDebuggerPrepass **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&> @ 142422af0

FConsoleSlateDebuggerUpdate * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
          (FConsoleSlateDebuggerUpdate **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSlateInvalidationRoot,FSlateInvalidationRoot_*_&> @ 142422b10

FSlateInvalidationRoot * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateInvalidationRoot,FSlateInvalidationRoot_*_&>
          (FSlateInvalidationRoot **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_> @ 142425260

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FArrangedWidget> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 142425300

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (ushort param_1,ForElementType<FSlateInvalidationWidgetHeapElement> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 1424253d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (ushort param_1,ForElementType<FSlateInvalidationWidgetHeapElement> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 1424254a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (ushort param_1,ForElementType<FSlateInvalidationWidgetHeapElement> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x65) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_> @ 142425570

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
          (ushort param_1,ForElementType<FArrangedWidget> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_> @ 142425630

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
          (ushort param_1,ForElementType<unsigned___int64> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_> @ 142425700

/* WARNING: Removing unreachable block (ram,0x000142425747) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_>
          (ushort param_1,ForElementType<FSlateInvalidationWidgetHeapElement_*> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FSlateInvalidationWidgetHeapElement_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 142425820

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (uint param_1,uint param_2,ForElementType<FSlateInvalidationWidgetHeapElement> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 1424258e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (uint param_1,uint param_2,ForElementType<FSlateInvalidationWidgetHeapElement> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 1424259a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (uint param_1,uint param_2,ForElementType<FSlateInvalidationWidgetHeapElement> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x65) {
    iVar2 = 100;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 142425ad0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSlateInvalidationWidgetHeapElement> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_> @ 142425b50

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSlateInvalidationWidgetHeapElement> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x65) {
      iVar1 = 100;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateInvalidationWidgetHeapElement>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_> @ 142425bd0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FArrangedWidget> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_> @ 142425c50

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FSlateInvalidationWidgetHeapElement_*> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<FSlateInvalidationWidgetHeapElement_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// EInvalidateWidgetReason_HasPostUpdateFlag @ 14243b4f0

bool __cdecl
UE::Slate::Private::EInvalidateWidgetReason_HasPostUpdateFlag(EInvalidateWidgetReason param_1)

{
  return (param_1 & (Prepass|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|Layout)) !=
         None;
}

// EInvalidateWidgetReason_HasPreUpdateFlag @ 14243b500

bool __cdecl
UE::Slate::Private::EInvalidateWidgetReason_HasPreUpdateFlag(EInvalidateWidgetReason param_1)

{
  return (param_1 & (AttributeRegistration|Visibility|ChildOrder|Layout)) != None;
}

// Construct<FCompositeFont> @ 142458a50

void __cdecl UE::CoreUObject::Private::Construct<FCompositeFont>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// ConstructForTests<FCompositeFont> @ 142458a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompositeFont>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Destruct<FCompositeFont> @ 142458ab0

void __cdecl UE::CoreUObject::Private::Destruct<FCompositeFont>(void *param_1)

{
  DestructItems<FCompositeSubFont,int>
            (*(FCompositeSubFont **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FTypefaceEntry,int>
            (*(FTypefaceEntry **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FTypefaceEntry,int>(*(FTypefaceEntry **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCompositeFont> @ 142458ac0

bool __cdecl UE::CoreUObject::Private::Copy<FCompositeFont>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FCompositeSubFont *pFVar5;
  FTypeface *pFVar6;
  int *piVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FTypeface::operator=(param_1,param_2);
    FTypeface::operator=
              ((FTypeface *)((longlong)param_1 + 0x10),(FTypeface *)((longlong)param_2 + 0x10));
    piVar1 = &(((FTypeface *)((longlong)param_2 + 0x20))->Fonts).ArrayNum;
    piVar7 = &(((FTypeface *)((longlong)param_1 + 0x20))->Fonts).ArrayNum;
    *(undefined4 *)&(((FTypeface *)((longlong)param_1 + 0x20))->Fonts).AllocatorInstance.Data =
         *(undefined4 *)&(((FTypeface *)((longlong)param_2 + 0x20))->Fonts).AllocatorInstance.Data;
    if (piVar7 != piVar1) {
      DestructItems<FCompositeSubFont,int>
                (*(FCompositeSubFont **)piVar7,
                 *(int *)&(((FTypeface *)((longlong)param_1 + 0x30))->Fonts).AllocatorInstance.Data)
      ;
      iVar3 = *(int *)&(((FTypeface *)((longlong)param_2 + 0x30))->Fonts).AllocatorInstance.Data;
      piVar2 = (int *)((longlong)
                       &(((FTypeface *)((longlong)param_1 + 0x30))->Fonts).AllocatorInstance.Data +
                      4);
      pFVar5 = *(FCompositeSubFont **)piVar1;
      iVar4 = *piVar2;
      *(int *)&(((FTypeface *)((longlong)param_1 + 0x30))->Fonts).AllocatorInstance.Data = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar3,iVar4,(ForAnyElementType *)piVar7,iVar3,piVar2);
        ConstructItems<FCompositeSubFont,FCompositeSubFont,int>(*(void **)piVar7,pFVar5,iVar3);
      }
    }
    pFVar6 = (FTypeface *)((longlong)param_2 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x40);
    *(char *)&(((FTypeface *)((longlong)param_1 + 0x30))->Fonts).ArrayNum =
         (char)(pFVar6->Fonts).ArrayNum;
    param_1 = (FTypeface *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FCompositeSubFont> @ 142459250

void __cdecl UE::CoreUObject::Private::Construct<FCompositeSubFont>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FCompositeSubFont> @ 142459280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompositeSubFont>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCompositeSubFont> @ 1424592b0

void __cdecl UE::CoreUObject::Private::Destruct<FCompositeSubFont>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FTypefaceEntry,int>(*(FTypefaceEntry **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCompositeSubFont> @ 142459300

bool __cdecl
UE::CoreUObject::Private::Copy<FCompositeSubFont>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  ForAnyElementType _Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FTypeface::operator=(param_1,param_2);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x10) =
         *(undefined4 *)&(((FTypeface *)((longlong)param_2 + 0x10))->Fonts).AllocatorInstance.Data;
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
      iVar3 = *(int *)&(((FTypeface *)((longlong)param_2 + 0x20))->Fonts).AllocatorInstance.Data;
      piVar2 = (int *)((longlong)param_1 + 0x24);
      _Src.Data = *(FScriptContainerElement **)((longlong)param_2 + 0x18);
      *(int *)((longlong)param_1 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,_Src.Data,(longlong)iVar3 << 4);
        }
      }
    }
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (int *)((longlong)param_1 + 0x38);
  }
  return true;
}

// Construct<FCompositeFallbackFont> @ 1424594e0

void __cdecl UE::CoreUObject::Private::Construct<FCompositeFallbackFont>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCompositeFallbackFont> @ 142459500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompositeFallbackFont>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCompositeFallbackFont> @ 142459520

void __cdecl UE::CoreUObject::Private::Destruct<FCompositeFallbackFont>(void *param_1)

{
  DestructItems<FTypefaceEntry,int>(*(FTypefaceEntry **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCompositeFallbackFont> @ 142459560

bool __cdecl
UE::CoreUObject::Private::Copy<FCompositeFallbackFont>(void *param_1,void *param_2,int param_3)

{
  FTypeface *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FTypeface *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FTypeface::operator=((FTypeface *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Fonts.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypeface> @ 142459620

void __cdecl UE::CoreUObject::Private::Construct<FTypeface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTypeface> @ 142459630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypeface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTypeface> @ 142459640

void __cdecl UE::CoreUObject::Private::Destruct<FTypeface>(void *param_1)

{
  DestructItems<FTypefaceEntry,int>(*(FTypefaceEntry **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FTypeface> @ 142459680

bool __cdecl UE::CoreUObject::Private::Copy<FTypeface>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FTypefaceEntry *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FTypefaceEntry,int>((FTypefaceEntry *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FTypefaceEntry *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FTypefaceEntry,FTypefaceEntry,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypefaceEntry> @ 142459770

void __cdecl UE::CoreUObject::Private::Construct<FTypefaceEntry>(void *param_1)

{
  uint uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
  *(uint *)((longlong)param_1 + 0x18) = uVar1;
  return;
}

// ConstructForTests<FTypefaceEntry> @ 1424597b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypefaceEntry>(void *param_1)

{
  uint uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
  *(uint *)((longlong)param_1 + 0x18) = uVar1;
  return;
}

// Destruct<FTypefaceEntry> @ 1424597f0

void __cdecl UE::CoreUObject::Private::Destruct<FTypefaceEntry>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FTypefaceEntry> @ 142459810

bool __cdecl UE::CoreUObject::Private::Copy<FTypefaceEntry>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_1 + lVar2 + 8));
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x1c);
      *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x1d);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x20);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x28), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x28);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFontData> @ 142459910

void __cdecl UE::CoreUObject::Private::Construct<FFontData>(void *param_1)

{
  uint uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
  *(uint *)((longlong)param_1 + 0x10) = uVar1;
  return;
}

// ConstructForTests<FFontData> @ 142459950

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFontData>(void *param_1)

{
  uint uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
  *(uint *)((longlong)param_1 + 0x10) = uVar1;
  return;
}

// Destruct<FFontData> @ 142459990

void __cdecl UE::CoreUObject::Private::Destruct<FFontData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// SerializeArchive<FFontData> @ 1424599b0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FFontData>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FFontData::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FFontData> @ 1424599d0

bool __cdecl UE::CoreUObject::Private::Copy<FFontData>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  UObject *pUVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x10) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x15);
    *(int *)((longlong)param_1 + 0x18) = *(int *)((longlong)param_2 + 0x18);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (UObject *)(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data,
       pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(FScriptContainerElement **)((longlong)param_1 + 0x20) = (pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Identical<FFontData> @ 142459a80

bool __cdecl
UE::CoreUObject::Private::Identical<FFontData>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = FFontData::operator==(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// Construct<FSlateFontInfo> @ 142459aa0

void __cdecl UE::CoreUObject::Private::Construct<FSlateFontInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x41c00000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 2;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  return;
}

// ConstructForTests<FSlateFontInfo> @ 142459af0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateFontInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x41c00000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 2;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  return;
}

// Destruct<FSlateFontInfo> @ 142459b40

void __cdecl UE::CoreUObject::Private::Destruct<FSlateFontInfo>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  return;
}

// GetStructTypeHash<FFontData> @ 142459b50

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FFontData>(void *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x20);
  if (uVar1 == 0) {
    uVar4 = *(uint *)((longlong)param_1 + 0x10);
    uVar5 = uVar4 >> 0xd ^ -uVar4;
    uVar2 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar6 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 0xc;
    uVar4 = (uVar2 - uVar5) - uVar6 ^ uVar5 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 5;
    uVar2 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar2) - uVar6 ^ uVar2 << 10;
    uVar4 = (uVar6 - uVar4) - uVar2 ^ uVar4 >> 0xf;
    iVar3 = uVar4 - *(byte *)((longlong)param_1 + 0x14);
    uVar2 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar4;
    uVar5 = (*(byte *)((longlong)param_1 + 0x14) - uVar2) - iVar3 ^ uVar2 >> 0xd;
    uVar4 = (iVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
    uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
    uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar4 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 0xf;
    iVar3 = uVar4 - *(byte *)((longlong)param_1 + 0x15);
    uVar2 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar4;
    uVar5 = (*(byte *)((longlong)param_1 + 0x15) - uVar2) - iVar3 ^ uVar2 >> 0xd;
    uVar4 = (iVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
    uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
    uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar4 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 0xf;
  }
  else {
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar5 = uVar4 >> 0xd ^ -uVar4;
    uVar2 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar6 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 0xc;
    uVar4 = (uVar2 - uVar5) - uVar6 ^ uVar5 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 5;
    uVar2 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar2) - uVar6 ^ uVar2 << 10;
    uVar4 = (uVar6 - uVar4) - uVar2 ^ uVar4 >> 0xf;
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x18);
  uVar5 = uVar4 - uVar2 ^ uVar2 >> 0xd;
  uVar6 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar4 = (uVar2 - uVar6) - uVar5 ^ uVar6 >> 0xd;
  uVar2 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xc;
  uVar5 = (uVar6 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xf;
}

// Copy<FSlateFontInfo> @ 142459b60

bool __cdecl UE::CoreUObject::Private::Copy<FSlateFontInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar5 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar5[1] = puVar1[1];
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined1 *)((longlong)puVar5 + 0x14) = *(undefined1 *)((longlong)puVar1 + 0x14);
      *(undefined1 *)((longlong)puVar5 + 0x15) = *(undefined1 *)((longlong)puVar1 + 0x15);
      *(undefined1 *)((longlong)puVar5 + 0x16) = *(undefined1 *)((longlong)puVar1 + 0x16);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[3] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[3]);
      }
      puVar5[3] = puVar1[3];
      uVar3 = puVar1[5];
      puVar5[4] = puVar1[4];
      puVar5[5] = uVar3;
      lVar2 = puVar1[7];
      uVar3 = puVar1[6];
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar5[7];
      puVar5[6] = uVar3;
      puVar5[7] = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      puVar5[8] = puVar1[8];
      *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(puVar1 + 9);
      *(undefined4 *)((longlong)puVar5 + 0x4c) = *(undefined4 *)((longlong)puVar1 + 0x4c);
      *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(puVar1 + 10);
      *(undefined1 *)((longlong)puVar5 + 0x54) = *(undefined1 *)((longlong)puVar1 + 0x54);
      *(undefined1 *)((longlong)puVar5 + 0x55) = *(undefined1 *)((longlong)puVar1 + 0x55);
      *(undefined1 *)((longlong)puVar5 + 0x56) = *(undefined1 *)((longlong)puVar1 + 0x56);
      *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(puVar1 + 0xb);
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 0xc;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FSlateFontInfo> @ 142459cc0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FSlateFontInfo>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  uVar2 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar4 = uVar2 >> 0xd ^ -uVar2;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar2 = ((uint)(*(ulonglong *)((longlong)param_1 + 0x30) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 0x30) >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar5 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar4 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar2 = ((uint)(*(ulonglong *)((longlong)param_1 + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 8) >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ((uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xd;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x40);
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  fVar6 = *(float *)((longlong)param_1 + 0x48);
  if (__real_477fff00 <= *(float *)((longlong)param_1 + 0x48)) {
    fVar6 = __real_477fff00;
  }
  uVar2 = uVar2 + (int)((ulonglong)uVar1 >> 0x20);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar4 = ((uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar5 = ((uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf) - (int)fVar6 ^ (uint)fVar6 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - (int)fVar6 ^ uVar5 << 8;
  uVar4 = ((int)fVar6 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar2 = *(uint *)((longlong)param_1 + 0x4c);
  fVar6 = *(float *)((longlong)param_1 + 0x50);
  if (__real_40a00000 <= *(float *)((longlong)param_1 + 0x50)) {
    fVar6 = __real_40a00000;
  }
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  if (fVar6 <= __real_c0a00000) {
    fVar6 = __real_c0a00000;
  }
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar4 = ((uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar3 = ((uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf) - (int)fVar6 ^ (uint)fVar6 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - (int)fVar6 ^ uVar3 << 8;
  uVar4 = ((int)fVar6 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar5 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar4 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar2 = ::GetTypeHash((FFontOutlineSettings *)((longlong)param_1 + 0x10));
  uVar3 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xf;
}

// Construct<FFontOutlineSettings> @ 142459d90

void __cdecl UE::CoreUObject::Private::Construct<FFontOutlineSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  return;
}

// ConstructForTests<FFontOutlineSettings> @ 142459dc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFontOutlineSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  return;
}

// Destruct<FFontOutlineSettings> @ 142459df0

void __cdecl UE::CoreUObject::Private::Destruct<FFontOutlineSettings>(void *param_1)

{
  return;
}

// Copy<FFontOutlineSettings> @ 142459e00

bool __cdecl
UE::CoreUObject::Private::Copy<FFontOutlineSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)((longlong)pvVar2 + 4);
      *(undefined1 *)((longlong)puVar3 + 5) = *(undefined1 *)((longlong)pvVar2 + 5);
      *(undefined1 *)((longlong)puVar3 + 6) = *(undefined1 *)((longlong)pvVar2 + 6);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 8));
      }
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)((longlong)pvVar2 + 8);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x18);
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)((longlong)pvVar2 + 0x10);
      *(undefined8 *)(puVar3 + 6) = uVar1;
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x20);
      puVar3 = puVar3 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FFontOutlineSettings> @ 142459eb0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FFontOutlineSettings>(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)param_1;
  uVar4 = uVar3 >> 0xd ^ -uVar3;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar3 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar1 = uVar3 - *(byte *)((longlong)param_1 + 4);
  uVar2 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
  uVar4 = (*(byte *)((longlong)param_1 + 4) - uVar2) - iVar1 ^ uVar2 >> 0xd;
  uVar3 = (iVar1 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar3 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  iVar1 = uVar3 - *(byte *)((longlong)param_1 + 5);
  uVar2 = 0x9e3779b9 - uVar3 ^ iVar1 * 0x100;
  uVar4 = (*(byte *)((longlong)param_1 + 5) - uVar2) - iVar1 ^ uVar2 >> 0xd;
  uVar3 = (iVar1 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// DereferenceIfNecessary<FCompositeFontCache,FCompositeFontCache_*_&> @ 14245ba10

FCompositeFontCache * __cdecl
UE::Core::Private::DereferenceIfNecessary<FCompositeFontCache,FCompositeFontCache_*_&>
          (FCompositeFontCache **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSlateFontCache,FSlateFontCache_*_&> @ 14245ba30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateFontCache * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateFontCache,FSlateFontCache_*_&>
          (FSlateFontCache **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FCachedTypefaceData::FCachedFontData>_> @ 142460b80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FCachedTypefaceData::FCachedFontData>_>
          (ushort param_1,ForElementType<FCachedTypefaceData::FCachedFontData> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FCachedTypefaceData::FCachedFontData>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FCachedTypefaceData,1>_>_> @ 142460de0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FCachedTypefaceData,1>_>_>
          (ushort param_1,ForElementType<TSharedPtr<FCachedTypefaceData,1>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<FCachedTypefaceData,1>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>_> @ 142460eb0

/* WARNING: Removing unreachable block (ram,0x000142460ef7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>_>
          (ushort param_1,ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_> @ 142460f40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,int param_3,ForElementType<bool> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_> @ 142461020

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,ForElementType<bool> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>_> @ 1424610e0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// operator<< @ 14247a240

FArchive * __cdecl UE::Slate::operator<<(FArchive *param_1,FGlyphHeader *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uchar *puVar3;
  int *piVar4;
  
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  }
  else {
    param_2->Flags = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar1 = &param_2->ContourCount;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->ContourDataStart;
  puVar2 = &param_1->field_0x2a;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->ContourDataLength;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->CoordinateDataStart;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->CoordinateDataLength;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 14247a420

FArchive * __cdecl UE::Slate::operator<<(FArchive *param_1,FPreprocessedFontGeometry *param_2)

{
  FArchive *pFVar1;
  
  pFVar1 = ::operator<<(param_1,&param_2->GlobalWindingReversal);
  TSetPrivateFriend::
  Serialize<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
            (pFVar1,(TSet<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
                     *)&param_2->Glyphs);
  pFVar1 = TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                     (pFVar1,&param_2->ContourData);
  pFVar1 = TArrayPrivateFriend::Serialize<short,TSizedDefaultAllocator<32>_>
                     (pFVar1,&param_2->CoordinateData);
  return pFVar1;
}

// IsAscentDescentOverrideEnabled @ 14249a8f0

bool __cdecl
UE::Slate::FontUtils::IsAscentDescentOverrideEnabled(TObjectPtr<UObject_const_> param_1)

{
  UObjectBaseUtility *this;
  UClass *pUVar1;
  longlong *plVar2;
  longlong lVar3;
  
  this = *(UObjectBaseUtility **)param_1.field0_0x0;
  if (this != (UObjectBaseUtility *)0x0) {
    pUVar1 = UFontProviderInterface::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        return (bool)*(undefined1 *)(lVar3 + 0x38);
      }
    }
  }
  return true;
}

// Construct<FPointerEvent> @ 1424c4590

void __cdecl UE::CoreUObject::Private::Construct<FPointerEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = LStackX_8;
  *(undefined ***)param_1 = &___7FPointerEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(FTouchKeySet **)((longlong)param_1 + 0x40) = &FTouchKeySet::EmptySet;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  return;
}

// ConstructForTests<FPointerEvent> @ 1424c45a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPointerEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = LStackX_8;
  *(undefined ***)param_1 = &___7FPointerEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(FTouchKeySet **)((longlong)param_1 + 0x40) = &FTouchKeySet::EmptySet;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  return;
}

// Destruct<FPointerEvent> @ 1424c45b0

void __cdecl UE::CoreUObject::Private::Destruct<FPointerEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPointerEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58));
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  return;
}

// Copy<FPointerEvent> @ 1424c45f0

bool __cdecl UE::CoreUObject::Private::Copy<FPointerEvent>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)pvVar4 + 8) =
         *(undefined2 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    *(undefined1 *)((longlong)pvVar4 + 10) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0xc) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0x10) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x18) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x20) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x28) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x30) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x38) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x40) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x48) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x48 - (longlong)param_1));
    lVar1 = *(longlong *)((longlong)pvVar4 + (longlong)param_2 + (0x58 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x50 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x58);
    *(undefined8 *)((longlong)pvVar4 + 0x50) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x58) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x60) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 100) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (100 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0x68) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar4 + 0x6c) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x6c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar4 + 0x6d) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x6d - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x70) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar4 + 0x78) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar4 + 0x79) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x79 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar4 + 0x7a) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x7a - (longlong)param_1));
    pvVar4 = (void *)((longlong)pvVar4 + 0x80);
  }
  return true;
}

// Construct<FCharacterEvent> @ 1424c50a0

void __cdecl UE::CoreUObject::Private::Construct<FCharacterEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = LStackX_8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(ulonglong *)((longlong)param_1 + 0x20) =
       CONCAT62(LStackX_8.QuadPart._2_6_,LStackX_8.s.LowPart._0_2_);
  *(undefined ***)param_1 = &___7FCharacterEvent__6B_;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FCharacterEvent> @ 1424c50b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCharacterEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = LStackX_8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(ulonglong *)((longlong)param_1 + 0x20) =
       CONCAT62(LStackX_8.QuadPart._2_6_,LStackX_8.s.LowPart._0_2_);
  *(undefined ***)param_1 = &___7FCharacterEvent__6B_;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FCharacterEvent> @ 1424c50c0

void __cdecl UE::CoreUObject::Private::Destruct<FCharacterEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  return;
}

// Copy<FCharacterEvent> @ 1424c5120

bool __cdecl
UE::CoreUObject::Private::Copy<FCharacterEvent>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)pvVar1 + 8) =
         *(undefined2 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x28) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FAnalogInputEvent> @ 1424c5350

void __cdecl UE::CoreUObject::Private::Construct<FAnalogInputEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = LStackX_8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(ulonglong *)((longlong)param_1 + 0x20) =
       CONCAT62(LStackX_8.QuadPart._2_6_,LStackX_8.s.LowPart._0_2_);
  *(undefined ***)param_1 = &___7FKeyEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)param_1 = &___7FAnalogInputEvent__6B_;
  return;
}

// ConstructForTests<FAnalogInputEvent> @ 1424c5360

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnalogInputEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = LStackX_8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(ulonglong *)((longlong)param_1 + 0x20) =
       CONCAT62(LStackX_8.QuadPart._2_6_,LStackX_8.s.LowPart._0_2_);
  *(undefined ***)param_1 = &___7FKeyEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)param_1 = &___7FAnalogInputEvent__6B_;
  return;
}

// Destruct<FAnalogInputEvent> @ 1424c5370

void __cdecl UE::CoreUObject::Private::Destruct<FAnalogInputEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FKeyEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  return;
}

// Copy<FAnalogInputEvent> @ 1424c53b0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnalogInputEvent>(void *param_1,void *param_2,int param_3)

{
  FKeyEvent *pFVar1;
  FKeyEvent *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FKeyEvent *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FKeyEvent::operator=(this,pFVar1);
      *(int *)&this[1]._padding_ = (int)pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FKeyEvent *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FKeyEvent> @ 1424c5570

void __cdecl UE::CoreUObject::Private::Construct<FKeyEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = LStackX_8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(ulonglong *)((longlong)param_1 + 0x20) =
       CONCAT62(LStackX_8.QuadPart._2_6_,LStackX_8.s.LowPart._0_2_);
  *(undefined ***)param_1 = &___7FKeyEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FKeyEvent> @ 1424c5580

void __cdecl UE::CoreUObject::Private::ConstructForTests<FKeyEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = LStackX_8.s.LowPart._0_2_ & 0xfe00;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(ulonglong *)((longlong)param_1 + 0x20) =
       CONCAT62(LStackX_8.QuadPart._2_6_,LStackX_8.s.LowPart._0_2_);
  *(undefined ***)param_1 = &___7FKeyEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FKeyEvent> @ 1424c5590

void __cdecl UE::CoreUObject::Private::Destruct<FKeyEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FKeyEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  return;
}

// Copy<FKeyEvent> @ 1424c55d0

bool __cdecl UE::CoreUObject::Private::Copy<FKeyEvent>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)pvVar4 + 8) =
         *(undefined2 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    *(undefined1 *)((longlong)pvVar4 + 10) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0xc) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0x10) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x18) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x20) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x28) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1));
    lVar1 = *(longlong *)((longlong)pvVar4 + (longlong)param_2 + (0x38 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x30 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x38);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x38) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x40) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0x44) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x44 - (longlong)param_1));
    pvVar4 = (void *)((longlong)pvVar4 + 0x48);
  }
  return true;
}

// Construct<FInputEvent> @ 1424c56e0

void __cdecl UE::CoreUObject::Private::Construct<FInputEvent>(void *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  QueryPerformanceCounter(local_res8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = local_res8[0];
  return;
}

// ConstructForTests<FInputEvent> @ 1424c5730

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputEvent>(void *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  QueryPerformanceCounter(local_res8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = local_res8[0];
  return;
}

// Destruct<FInputEvent> @ 1424c5780

void __cdecl UE::CoreUObject::Private::Destruct<FInputEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  return;
}

// Copy<FInputEvent> @ 1424c5830

bool __cdecl UE::CoreUObject::Private::Copy<FInputEvent>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)pvVar1 + 8) =
         *(undefined2 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FCaptureLostEvent> @ 1424c6020

void __cdecl UE::CoreUObject::Private::Construct<FCaptureLostEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FCaptureLostEvent> @ 1424c6030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCaptureLostEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FCaptureLostEvent> @ 1424c6040

void __cdecl UE::CoreUObject::Private::Destruct<FCaptureLostEvent>(void *param_1)

{
  return;
}

// Copy<FCaptureLostEvent> @ 1424c6050

bool __cdecl
UE::CoreUObject::Private::Copy<FCaptureLostEvent>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFocusEvent> @ 1424c6100

void __cdecl UE::CoreUObject::Private::Construct<FFocusEvent>(void *param_1)

{
  *(undefined2 *)param_1 = 0x200;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FFocusEvent> @ 1424c6120

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFocusEvent>(void *param_1)

{
  *(undefined2 *)param_1 = 0x200;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FFocusEvent> @ 1424c6140

void __cdecl UE::CoreUObject::Private::Destruct<FFocusEvent>(void *param_1)

{
  return;
}

// Copy<FFocusEvent> @ 1424c6190

bool __cdecl UE::CoreUObject::Private::Copy<FFocusEvent>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGeometry> @ 1424c62f0

void __cdecl UE::CoreUObject::Private::Construct<FGeometry>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfe;
  return;
}

// ConstructForTests<FGeometry> @ 1424c6340

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGeometry>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfe;
  return;
}

// Construct<FNavigationMethodProximity> @ 1424c6750

void __cdecl UE::CoreUObject::Private::Construct<FNavigationMethodProximity>(void *param_1)

{
  memset(param_1,0,0x108);
  FNavigationMethodProximity::FNavigationMethodProximity(param_1);
  return;
}

// ConstructForTests<FNavigationMethodProximity> @ 1424c6780

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavigationMethodProximity>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FNavigationMethodProximity__6B_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  return;
}

// Destruct<FNavigationMethodProximity> @ 1424c6790

void __cdecl UE::CoreUObject::Private::Destruct<FNavigationMethodProximity>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FNavigationMethodProximity> @ 1424c67a0

bool __cdecl
UE::CoreUObject::Private::Copy<FNavigationMethodProximity>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    operator=((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
               *)((longlong)param_1 + 0x18),
              (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
               *)((longlong)param_2 + 0x18));
    *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
    this = (TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)((longlong)param_1 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
    if (this != (TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)((longlong)param_2 + 0x78)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)param_1 + 0xb0),
                 (int *)((longlong)param_1 + 0xc0),
                 (ForElementType<FSetElementId> *)((longlong)param_2 + 0xb0),
                 *(int *)((longlong)param_2 + 0xc0));
      iVar2 = *(int *)((longlong)param_2 + 0x80);
      TSparseArray<TSparseSetElement<SWidget_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar2);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,(ForAnyElementType *)this,(int *)((longlong)param_1 + 0x80),
                 (int *)((longlong)param_1 + 0x84));
      *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 0xa8);
      *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x88) !=
          (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x88)) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x88),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x88));
      }
      if (iVar2 != 0) {
        memcpy(*(void **)this,*(void **)((longlong)param_2 + 0x78),(longlong)iVar2 << 4);
      }
    }
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 200),
               (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 200));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0xd8);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0xd8)) {
      iVar2 = *(int *)((longlong)param_2 + 0xe0);
      piVar1 = (int *)((longlong)param_1 + 0xe4);
      pFVar3 = ((ForAnyElementType *)((longlong)param_2 + 0xd8))->Data;
      *(int *)((longlong)param_1 + 0xe0) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar4->Data,pFVar3,(longlong)iVar2 << 2);
        }
      }
    }
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0xe8),
               (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0xe8));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0xf8);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0xf8)) {
      iVar2 = *(int *)((longlong)param_2 + 0x100);
      piVar1 = (int *)((longlong)param_1 + 0x104);
      pFVar3 = ((ForAnyElementType *)((longlong)param_2 + 0xf8))->Data;
      *(int *)((longlong)param_1 + 0x100) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar4->Data,pFVar3,(longlong)iVar2 << 4);
        }
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x108);
    param_2 = (void *)((longlong)param_2 + 0x108);
  }
  return true;
}

// Construct<FNavigationMethodOrthogonal> @ 1424c6c50

void __cdecl UE::CoreUObject::Private::Construct<FNavigationMethodOrthogonal>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined ***)param_1 = &___7FNavigationMethodOrthogonal__6B_;
  return;
}

// ConstructForTests<FNavigationMethodOrthogonal> @ 1424c6c90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavigationMethodOrthogonal>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FNavigationMethodOrthogonal__6B_;
  return;
}

// Destruct<FNavigationMethodOrthogonal> @ 1424c6cd0

void __cdecl UE::CoreUObject::Private::Destruct<FNavigationMethodOrthogonal>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FNavigationMethodOrthogonal> @ 1424c6d90

bool __cdecl
UE::CoreUObject::Private::Copy<FNavigationMethodOrthogonal>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    operator=((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
               *)((longlong)pvVar1 + 0x18),
              (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
               *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x68);
  }
  return true;
}

// Construct<FNavigationMethod> @ 1424c6e40

void __cdecl UE::CoreUObject::Private::Construct<FNavigationMethod>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FNavigationMethod__6B_;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  return;
}

// ConstructForTests<FNavigationMethod> @ 1424c6e80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavigationMethod>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNavigationMethod__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FNavigationMethod> @ 1424c6ec0

void __cdecl UE::CoreUObject::Private::Destruct<FNavigationMethod>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FNavigationMethod> @ 1424c6f00

bool __cdecl
UE::CoreUObject::Private::Copy<FNavigationMethod>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    operator=((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
               *)((longlong)pvVar1 + 0x18),
              (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
               *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x68);
  }
  return true;
}

// Construct<FNavigationEvent> @ 1424c70f0

void __cdecl UE::CoreUObject::Private::Construct<FNavigationEvent>(void *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  QueryPerformanceCounter(local_res8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = local_res8[0];
  *(undefined ***)param_1 = &___7FNavigationEvent__6B_;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x207;
  return;
}

// ConstructForTests<FNavigationEvent> @ 1424c7150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNavigationEvent>(void *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  QueryPerformanceCounter(local_res8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = local_res8[0];
  *(undefined ***)param_1 = &___7FNavigationEvent__6B_;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x207;
  return;
}

// Destruct<FNavigationEvent> @ 1424c71b0

void __cdecl UE::CoreUObject::Private::Destruct<FNavigationEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  return;
}

// Copy<FNavigationEvent> @ 1424c71d0

bool __cdecl
UE::CoreUObject::Private::Copy<FNavigationEvent>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)pvVar1 + 8) =
         *(undefined2 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x28) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x29) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x29 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FMotionEvent> @ 1424c7240

void __cdecl UE::CoreUObject::Private::Construct<FMotionEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = LStackX_8;
  *(undefined ***)param_1 = &___7FMotionEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FMotionEvent> @ 1424c7250

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionEvent>(void *param_1)

{
  LARGE_INTEGER LStackX_8;
  
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(ushort *)((longlong)param_1 + 8) = *(ushort *)((longlong)param_1 + 8) & 0xfe00;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  QueryPerformanceCounter(&LStackX_8);
  *(LARGE_INTEGER *)((longlong)param_1 + 0x20) = LStackX_8;
  *(undefined ***)param_1 = &___7FMotionEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FMotionEvent> @ 1424c7260

void __cdecl UE::CoreUObject::Private::Destruct<FMotionEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInputEvent__6B_;
  return;
}

// Copy<FMotionEvent> @ 1424c7280

bool __cdecl UE::CoreUObject::Private::Copy<FMotionEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    param_1 = (void *)((longlong)param_1 + 0x88);
    param_2 = (void *)((longlong)param_2 + 0x88);
  }
  return true;
}

// DereferenceIfNecessary<FSlateFontServices,FSlateFontServices_*_&> @ 1424d9c60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateFontServices * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateFontServices,FSlateFontServices_*_&>
          (FSlateFontServices **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSlateRenderer,FSlateRenderer_*_&> @ 1424d9c80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRenderer * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateRenderer,FSlateRenderer_*_&>
          (FSlateRenderer **param_1)

{
  return *param_1;
}

// GetStructPtr<FNavigationMethod,FNavigationMethod> @ 1424e6ed0

FNavigationMethod * __cdecl
UE::StructUtils::GetStructPtr<FNavigationMethod,FNavigationMethod>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  FNavigationMethod *pFVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FNavigationMethod *)0x0;
  }
  local_res8 = param_1;
  if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethod,(UObject *)pUVar3,
                         L"NavigationMethod");
  }
  if (local_res8 != Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar3 = Z_Construct_UPackage__Script_SlateCore();
      Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethod,(UObject *)pUVar3,
                           L"NavigationMethod");
      if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0
         ) goto LAB_1424e6f80;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton)->_padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
LAB_1424e6f80:
      local_res10[0] = &local_res8;
      bVar2 = `UE::StructUtils::GetStructPtr<FNavigationMethod,FNavigationMethod>'::__l7::<lambda_1>
              ::operator()(local_res10);
      pFVar4 = (FNavigationMethod *)0x0;
      if (bVar2) {
        pFVar4 = param_2;
      }
      return pFVar4;
    }
  }
  return param_2;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementData_*>_> @ 1424e7470

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementData_*>_>
          (ushort param_1,ForElementType<FSlateCachedElementData_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateCachedElementData_*>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_> @ 1424e7530

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_>
          (ushort param_1,ForElementType<FSlateCachedElementList_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x33) {
      iVar8 = 0x32;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x33) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateCachedElementList_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>_> @ 1424e7600

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>_>
          (ushort param_1,ForElementType<FHittestGrid_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateWindowElementList::FWidgetDrawElementState>_> @ 1424e76d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateWindowElementList::FWidgetDrawElementState>_>
          (ushort param_1,ForElementType<FSlateWindowElementList::FWidgetDrawElementState> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x33) {
      iVar8 = 0x32;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x33) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateWindowElementList::FWidgetDrawElementState>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid::FWidgetIndex>_> @ 1424e77a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid::FWidgetIndex>_>
          (ushort param_1,ForElementType<FHittestGrid::FWidgetIndex> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x65) {
      iVar8 = 100;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x65) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FHittestGrid::FWidgetIndex>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>_> @ 1424e7870

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>_>
          (ushort param_1,ForElementType<FSlateCachedClipState> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EWidgetPixelSnapping>_> @ 1424e7940

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EWidgetPixelSnapping>_>
          (ushort param_1,ForElementType<EWidgetPixelSnapping> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_EWidgetPixelSnapping>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType> @ 1424e7a00

/* WARNING: Removing unreachable block (ram,0x0001424e7a4e) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
          (ushort param_1,ForAnyElementType *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  ulong64 uVar5;
  int iVar6;
  
  iVar2 = *param_3;
  bVar3 = (byte)param_1;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    lVar4 = 4;
    if (iVar2 != 0) {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar5 = FMemory::QuantizeSize((ulonglong)bVar3 * lVar4,0);
    iVar6 = (int)(uVar5 / bVar3);
    if (iVar6 < (int)uVar1) {
      iVar6 = 0x7fffffff;
    }
    FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::ResizeAllocation
              (param_2,iVar2,iVar6,(uint)bVar3);
    *param_3 = iVar6;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType> @ 1424e7ab0

/* WARNING: Removing unreachable block (ram,0x0001424e7afe) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
          (ushort param_1,ForAnyElementType *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  ulong64 uVar5;
  int iVar6;
  
  iVar2 = *param_3;
  bVar3 = (byte)param_1;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    lVar4 = 4;
    if (iVar2 != 0) {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar5 = FMemory::QuantizeSize((ulonglong)bVar3 * lVar4,0);
    iVar6 = (int)(uVar5 / bVar3);
    if (iVar6 < (int)uVar1) {
      iVar6 = 0x7fffffff;
    }
    FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
    ResizeAllocation(param_2,iVar2,iVar6,(uint)bVar3);
    *param_3 = iVar6;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<100,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<TTuple<int,int>_>_> @ 1424e7b60

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<100,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<TTuple<int,int>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<TTuple<int,int>_> *param_4,
          int *param_5,int *param_6)

{
  ForElementType<TTuple<int,int>_> *this;
  int iVar1;
  TTuple<int,int> *_Src;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar1 = *param_5;
  uVar4 = *param_6;
  uVar2 = iVar1 + param_3;
  *param_5 = uVar2;
  if ((uint)param_3 <= uVar4 - iVar1) {
    return iVar1;
  }
  if ((int)uVar2 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar2);
  }
  uVar3 = (ulonglong)param_1;
  if (uVar2 < 0x65) {
    uVar4 = 100;
    _Src = (param_4->SecondaryData).Data;
  }
  else {
    if (uVar4 < 0x65) {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar2) {
        uVar4 = uVar2;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10 + uVar2;
    }
    this = &param_4->SecondaryData;
    if ((int)uVar4 < (int)uVar2) {
      uVar4 = 0x7fffffff;
    }
    _Src = this->Data;
    if (100 < uVar4) {
      if (_Src == (TTuple<int,int> *)0x0) {
        TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<int,int>_>::
        ResizeAllocation(this,0,uVar4,uVar3);
        memmove(this->Data,param_4,(longlong)iVar1 << 3);
      }
      else {
        TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<int,int>_>::
        ResizeAllocation(this,iVar1,uVar4,uVar3);
      }
      goto LAB_1424e7c6e;
    }
  }
  if (_Src != (TTuple<int,int> *)0x0) {
    memmove(param_4,_Src,(longlong)iVar1 << 3);
    if (0x7ffffffe < uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(0,uVar3);
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((param_4->SecondaryData).Data);
    (param_4->SecondaryData).Data = (TTuple<int,int> *)0x0;
  }
LAB_1424e7c6e:
  *param_6 = uVar4;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_> @ 1424e7cb0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FArrangedWidget> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType> @ 1424e7d80

int __cdecl
UE::Core::Private::
ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar2 = *param_5;
  iVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar6 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar5 = (ulonglong)(int)uVar1;
    if (iVar6 == 0) {
      uVar3 = 4;
      if (4 < uVar5) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(param_1 * uVar3,0);
    iVar6 = (int)(uVar4 / param_1);
    if (iVar6 < (int)uVar1) {
      iVar6 = 0x7fffffff;
    }
    FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
    ResizeAllocation(param_4,iVar2,iVar6,param_1);
    *param_6 = iVar6;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1424e7e40

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_> @ 1424e7f00

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_>
          (uint param_1,uint param_2,ForElementType<FSlateCachedElementList_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x33) {
    iVar2 = 0x32;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateCachedElementList_*>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateWindowElementList::FWidgetDrawElementState>_> @ 1424e7fc0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateWindowElementList::FWidgetDrawElementState>_>
          (uint param_1,uint param_2,
          ForElementType<FSlateWindowElementList::FWidgetDrawElementState> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x33) {
    iVar2 = 0x32;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateWindowElementList::FWidgetDrawElementState>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_> @ 1424e8080

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
          (uint param_1,uint param_2,ForElementType<FArrangedWidget> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EWidgetPixelSnapping>_> @ 1424e8140

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EWidgetPixelSnapping>_>
          (uint param_1,uint param_2,ForElementType<EWidgetPixelSnapping> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_EWidgetPixelSnapping>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1424e8200

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementData_*>_> @ 1424e8280

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementData_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSlateCachedElementData_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateCachedElementData_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_> @ 1424e8300

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSlateCachedElementList_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x33) {
      iVar1 = 0x32;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateCachedElementList_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>_> @ 1424e8380

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSlateCachedClipState> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType> @ 1424e8400

void __cdecl
UE::Core::Private::
ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * (ulonglong)param_1,0);
    iVar1 = (int)(uVar2 / param_1);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::ResizeAllocation
              (param_4,param_5,iVar1,param_1);
  }
  return;
}

// ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType> @ 1424e8480

void __cdecl
UE::Core::Private::
ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * (ulonglong)param_1,0);
    iVar1 = (int)(uVar2 / param_1);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
    ResizeAllocation(param_4,param_5,iVar1,param_1);
  }
  return;
}

// IsParentsEnabled @ 1425114d0

bool __cdecl UE::Slate::Private::IsParentsEnabled(SWidget *param_1)

{
  FSlateWidgetPersistentState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  if (param_1 == (SWidget *)0x0) {
    return true;
  }
  do {
    if (param_1->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      return false;
    }
    pTVar2 = (param_1->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pFVar1 = &param_1->PersistentState;
    param_1 = (SWidget *)0x0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar2->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return true;
        }
        LOCK();
        aVar4 = pTVar2->SharedReferenceCount;
        bVar5 = aVar3 == aVar4;
        if (bVar5) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar5);
      param_1 = (pFVar1->PaintParent).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  } while (param_1 != (SWidget *)0x0);
  return true;
}

// MinkowskiDistance @ 142516610

float __cdecl
UE::Slate::Private::MinkowskiDistance
          (TVector2<float> *param_1,TVector2<float> *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 <= 0.0) {
    param_3 = __real_00800000;
  }
  fVar1 = powf((float)((uint)((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff),param_3);
  fVar2 = powf((float)((uint)((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff),param_3);
  fVar1 = powf(fVar1 + fVar2,__real_3f800000 / param_3);
  return fVar1;
}

// Construct<FInlineTextImageStyle> @ 142524c50

void __cdecl UE::CoreUObject::Private::Construct<FInlineTextImageStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FInlineTextImageStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  *(undefined2 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// ConstructForTests<FInlineTextImageStyle> @ 142524c90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInlineTextImageStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FInlineTextImageStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  *(undefined2 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// Destruct<FInlineTextImageStyle> @ 142524cd0

void __cdecl UE::CoreUObject::Private::Destruct<FInlineTextImageStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInlineTextImageStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FInlineTextImageStyle> @ 142524d10

bool __cdecl
UE::CoreUObject::Private::Copy<FInlineTextImageStyle>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar1 + 0x10),
               (FSlateBrush *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    *(undefined2 *)((longlong)pvVar1 + 0xc0) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0xd0);
  }
  return true;
}

// Construct<FVolumeControlStyle> @ 142524f50

void __cdecl UE::CoreUObject::Private::Construct<FVolumeControlStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FVolumeControlStyle__6B_;
  FSliderStyle::FSliderStyle((FSliderStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x450));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x500));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x5b0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x660));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x710));
  return;
}

// ConstructForTests<FVolumeControlStyle> @ 142524f60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVolumeControlStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FVolumeControlStyle__6B_;
  FSliderStyle::FSliderStyle((FSliderStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x450));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x500));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x5b0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x660));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x710));
  return;
}

// Destruct<FVolumeControlStyle> @ 142524f70

void __cdecl UE::CoreUObject::Private::Destruct<FVolumeControlStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FVolumeControlStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x710) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x7b0));
  *(undefined ***)((longlong)param_1 + 0x660) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x700));
  *(undefined ***)((longlong)param_1 + 0x5b0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x650));
  *(undefined ***)((longlong)param_1 + 0x500) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x5a0));
  *(undefined ***)((longlong)param_1 + 0x450) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4f0));
  FSliderStyle::~FSliderStyle((FSliderStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FVolumeControlStyle> @ 142524fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FVolumeControlStyle>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x20),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0xd0),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0xd0 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x180),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x180 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x230),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x230 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x2e0),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x2e0 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x390),
               (FSlateBrush *)((longlong)pvVar2 + (longlong)param_2 + (0x390 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar2 + 0x440) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x440 - (longlong)param_1));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x450),(FSlateBrush *)((longlong)pvVar1 + 0x450));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x500),(FSlateBrush *)((longlong)pvVar1 + 0x500));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x5b0),(FSlateBrush *)((longlong)pvVar1 + 0x5b0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x660),(FSlateBrush *)((longlong)pvVar1 + 0x660));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar2 + 0x710),(FSlateBrush *)((longlong)pvVar1 + 0x710));
    pvVar1 = (void *)((longlong)pvVar1 + 0x7c0);
    pvVar2 = (void *)((longlong)pvVar2 + 0x7c0);
  }
  return true;
}

// Construct<FToolBarStyle> @ 1425251b0

void __cdecl UE::CoreUObject::Private::Construct<FToolBarStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FToolBarStyle__6B_;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x220));
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x500))
  ;
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x1180));
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x1ad0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x2030));
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x23c0));
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x2920));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x3270));
  *(undefined8 *)((longlong)param_1 + 0x363c) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x3600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3608) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3610) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3618) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3620) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3628) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3630) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3638) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x365c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x366c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x367c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3684) = 0;
  *(undefined4 *)((longlong)param_1 + 0x368c) = 0;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3690),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined8 *)((longlong)param_1 + 0x3740) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3748) = 0;
  FWrapButtonStyle::FWrapButtonStyle((FWrapButtonStyle *)((longlong)param_1 + 0x3750));
  *(undefined8 *)((longlong)param_1 + 0x3e90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ea0) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3ea4) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x3ea8) = 0x41800000;
  *(undefined4 *)((longlong)param_1 + 0x3eac) = 0x41800000;
  *(undefined1 *)((longlong)param_1 + 0x3eb0) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3eb4) = 0x42800000;
  *(undefined4 *)((longlong)param_1 + 0x3ebc) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x3ec0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3ec8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ecc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ed0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ed8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ee0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ee8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ef1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ef4) = 0;
  return;
}

// ConstructForTests<FToolBarStyle> @ 1425251c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FToolBarStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FToolBarStyle__6B_;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x220));
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x500))
  ;
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x1180));
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x1ad0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x2030));
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x23c0));
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x2920));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x3270));
  *(undefined8 *)((longlong)param_1 + 0x363c) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x3600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3608) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3610) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3618) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3620) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3628) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3630) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3638) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x365c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x366c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x367c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3684) = 0;
  *(undefined4 *)((longlong)param_1 + 0x368c) = 0;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3690),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined8 *)((longlong)param_1 + 0x3740) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3748) = 0;
  FWrapButtonStyle::FWrapButtonStyle((FWrapButtonStyle *)((longlong)param_1 + 0x3750));
  *(undefined8 *)((longlong)param_1 + 0x3e90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ea0) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3ea4) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x3ea8) = 0x41800000;
  *(undefined4 *)((longlong)param_1 + 0x3eac) = 0x41800000;
  *(undefined1 *)((longlong)param_1 + 0x3eb0) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3eb4) = 0x42800000;
  *(undefined4 *)((longlong)param_1 + 0x3ebc) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x3ec0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3ec8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ecc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ed0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ed8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ee0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ee8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ef1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ef4) = 0;
  return;
}

// Destruct<FToolBarStyle> @ 1425251d0

void __cdecl UE::CoreUObject::Private::Destruct<FToolBarStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FToolBarStyle__6B_;
  if (*(char *)((longlong)param_1 + 0x3e60) != '\0') {
    *(undefined ***)((longlong)param_1 + 0x3db0) = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x3e50));
  }
  TOptional<FComboButtonStyle>::~TOptional<FComboButtonStyle>
            ((TOptional<FComboButtonStyle> *)((longlong)param_1 + 0x3830));
  *(undefined ***)((longlong)param_1 + 0x3770) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x3810));
  *(undefined ***)((longlong)param_1 + 0x3690) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x3730));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x3270));
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x2920));
  *(undefined ***)((longlong)param_1 + 0x2830) = &___7FSlateBrush__6B_;
  *(FSlateWidgetStyle *)((longlong)param_1 + 0x23c0) =
       (FSlateWidgetStyle)&___7FComboButtonStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28d0));
  *(undefined ***)((longlong)param_1 + 0x2760) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2800));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x23d0));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x23c0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x2030));
  *(FSlateWidgetStyle *)((longlong)param_1 + 0x1ad0) =
       (FSlateWidgetStyle)&___7FComboButtonStyle__6B_;
  *(undefined ***)((longlong)param_1 + 8000) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1fe0));
  *(undefined ***)((longlong)param_1 + 0x1e70) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1f10));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x1ae0));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x1ad0));
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x1180));
  FEditableTextBoxStyle::~FEditableTextBoxStyle
            ((FEditableTextBoxStyle *)((longlong)param_1 + 0x500));
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x220));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Construct<FSlateBrush> @ 142525220

void __cdecl UE::CoreUObject::Private::Construct<FSlateBrush>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined ***)param_1 = &___7FSlateBrush__6B_;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  FVar1 = FLinearColor::Transparent;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x60))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 1;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfc;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 4;
  FSlateResourceHandle::FSlateResourceHandle((FSlateResourceHandle *)((longlong)param_1 + 0x98));
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FSlateBrush> @ 142525230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateBrush>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined ***)param_1 = &___7FSlateBrush__6B_;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  FVar1 = FLinearColor::Transparent;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x60))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 1;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfc;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 4;
  FSlateResourceHandle::FSlateResourceHandle((FSlateResourceHandle *)((longlong)param_1 + 0x98));
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Copy<FToolBarStyle> @ 142525280

bool __cdecl UE::CoreUObject::Private::Copy<FToolBarStyle>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)param_1 + 0x220),
               (FTextBlockStyle *)((longlong)param_2 + 0x220));
    FEditableTextBoxStyle::operator=
              ((FEditableTextBoxStyle *)((longlong)param_1 + 0x500),
               (FEditableTextBoxStyle *)((longlong)param_2 + 0x500));
    FCheckBoxStyle::operator=
              ((FCheckBoxStyle *)((longlong)param_1 + 0x1180),
               (FCheckBoxStyle *)((longlong)param_2 + 0x1180));
    FComboButtonStyle::operator=
              ((FComboButtonStyle *)((longlong)param_1 + 0x1ad0),
               (FComboButtonStyle *)((longlong)param_2 + 0x1ad0));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x2030),
               (FButtonStyle *)((longlong)param_2 + 0x2030));
    FComboButtonStyle::operator=
              ((FComboButtonStyle *)((longlong)param_1 + 0x23c0),
               (FComboButtonStyle *)((longlong)param_2 + 0x23c0));
    FCheckBoxStyle::operator=
              ((FCheckBoxStyle *)((longlong)param_1 + 0x2920),
               (FCheckBoxStyle *)((longlong)param_2 + 0x2920));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x3270),
               (FButtonStyle *)((longlong)param_2 + 0x3270));
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3608);
    *(undefined8 *)((longlong)param_1 + 0x3600) = *(undefined8 *)((longlong)param_2 + 0x3600);
    *(undefined8 *)((longlong)param_1 + 0x3608) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x3610) = *(undefined4 *)((longlong)param_2 + 0x3610);
    *(undefined4 *)((longlong)param_1 + 0x3614) = *(undefined4 *)((longlong)param_2 + 0x3614);
    *(undefined4 *)((longlong)param_1 + 0x3618) = *(undefined4 *)((longlong)param_2 + 0x3618);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3624);
    *(undefined8 *)((longlong)param_1 + 0x361c) = *(undefined8 *)((longlong)param_2 + 0x361c);
    *(undefined8 *)((longlong)param_1 + 0x3624) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3634);
    *(undefined8 *)((longlong)param_1 + 0x362c) = *(undefined8 *)((longlong)param_2 + 0x362c);
    *(undefined8 *)((longlong)param_1 + 0x3634) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x363c) = *(undefined4 *)((longlong)param_2 + 0x363c);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3648);
    *(undefined8 *)((longlong)param_1 + 0x3640) = *(undefined8 *)((longlong)param_2 + 0x3640);
    *(undefined8 *)((longlong)param_1 + 0x3648) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3658);
    *(undefined8 *)((longlong)param_1 + 0x3650) = *(undefined8 *)((longlong)param_2 + 0x3650);
    *(undefined8 *)((longlong)param_1 + 0x3658) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3668);
    *(undefined8 *)((longlong)param_1 + 0x3660) = *(undefined8 *)((longlong)param_2 + 0x3660);
    *(undefined8 *)((longlong)param_1 + 0x3668) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3678);
    *(undefined8 *)((longlong)param_1 + 0x3670) = *(undefined8 *)((longlong)param_2 + 0x3670);
    *(undefined8 *)((longlong)param_1 + 0x3678) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3688);
    *(undefined8 *)((longlong)param_1 + 0x3680) = *(undefined8 *)((longlong)param_2 + 0x3680);
    *(undefined8 *)((longlong)param_1 + 0x3688) = uVar2;
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x3690),
               (FSlateBrush *)((longlong)param_2 + 0x3690));
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3748);
    *(undefined8 *)((longlong)param_1 + 0x3740) = *(undefined8 *)((longlong)param_2 + 0x3740);
    *(undefined8 *)((longlong)param_1 + 0x3748) = uVar2;
    FWrapButtonStyle::operator=
              ((FWrapButtonStyle *)((longlong)param_1 + 0x3750),
               (FWrapButtonStyle *)((longlong)param_2 + 0x3750));
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3e98);
    *(undefined8 *)((longlong)param_1 + 0x3e90) = *(undefined8 *)((longlong)param_2 + 0x3e90);
    *(undefined8 *)((longlong)param_1 + 0x3e98) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x3ea0) = *(undefined4 *)((longlong)param_2 + 0x3ea0);
    *(undefined1 *)((longlong)param_1 + 0x3ea4) = *(undefined1 *)((longlong)param_2 + 0x3ea4);
    *(undefined1 *)((longlong)param_1 + 0x3ea5) = *(undefined1 *)((longlong)param_2 + 0x3ea5);
    *(undefined8 *)((longlong)param_1 + 0x3ea8) = *(undefined8 *)((longlong)param_2 + 0x3ea8);
    *(undefined1 *)((longlong)param_1 + 0x3eb0) = *(undefined1 *)((longlong)param_2 + 0x3eb0);
    *(undefined4 *)((longlong)param_1 + 0x3eb4) = *(undefined4 *)((longlong)param_2 + 0x3eb4);
    *(undefined4 *)((longlong)param_1 + 0x3eb8) = *(undefined4 *)((longlong)param_2 + 0x3eb8);
    *(undefined4 *)((longlong)param_1 + 0x3ebc) = *(undefined4 *)((longlong)param_2 + 0x3ebc);
    *(undefined4 *)((longlong)param_1 + 0x3ec0) = *(undefined4 *)((longlong)param_2 + 0x3ec0);
    *(undefined4 *)((longlong)param_1 + 0x3ec4) = *(undefined4 *)((longlong)param_2 + 0x3ec4);
    *(undefined4 *)((longlong)param_1 + 0x3ec8) = *(undefined4 *)((longlong)param_2 + 0x3ec8);
    *(undefined1 *)((longlong)param_1 + 0x3ecc) = *(undefined1 *)((longlong)param_2 + 0x3ecc);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3ed8);
    *(undefined8 *)((longlong)param_1 + 0x3ed0) = *(undefined8 *)((longlong)param_2 + 0x3ed0);
    *(undefined8 *)((longlong)param_1 + 0x3ed8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3ee8);
    *(undefined8 *)((longlong)param_1 + 0x3ee0) = *(undefined8 *)((longlong)param_2 + 0x3ee0);
    *(undefined8 *)((longlong)param_1 + 0x3ee8) = uVar2;
    if ((undefined1 *)((longlong)param_2 + 0x3ef0) != (undefined1 *)((longlong)param_1 + 0x3ef0)) {
      if (*(char *)((longlong)param_2 + 0x3ef1) == '\0') {
        if (*(char *)((longlong)param_1 + 0x3ef1) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x3ef1) = 0;
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x3ef0) = *(undefined1 *)((longlong)param_2 + 0x3ef0);
        *(undefined1 *)((longlong)param_1 + 0x3ef1) = 1;
      }
    }
    puVar1 = (undefined4 *)((longlong)param_2 + 0x3ef4);
    param_2 = (void *)((longlong)param_2 + 0x3f00);
    *(undefined4 *)((longlong)param_1 + 0x3ef4) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x3f00);
  }
  return true;
}

// Destruct<FSlateBrush> @ 1425255d0

void __cdecl UE::CoreUObject::Private::Destruct<FSlateBrush>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa0));
  return;
}

// Copy<FSlateBrush> @ 1425255f0

bool __cdecl UE::CoreUObject::Private::Copy<FSlateBrush>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  byte bVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
    *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
    *(undefined1 *)((longlong)param_1 + 0x1f) = *(undefined1 *)((longlong)param_2 + 0x1f);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x38) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x38));
    }
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x68) = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x88) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x90);
    bVar5 = (*(byte *)((longlong)param_1 + 0x94) ^ *(byte *)((longlong)param_2 + 0x94)) & 1 ^
            *(byte *)((longlong)param_1 + 0x94);
    *(byte *)((longlong)param_1 + 0x94) = bVar5;
    bVar5 = (bVar5 ^ *(byte *)((longlong)param_2 + 0x94)) & 2 ^ bVar5;
    *(byte *)((longlong)param_1 + 0x94) = bVar5;
    *(byte *)((longlong)param_1 + 0x94) = (bVar5 ^ *(byte *)((longlong)param_2 + 0x94)) & 4 ^ bVar5;
    lVar2 = *(longlong *)((longlong)param_2 + 0xa0);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x98);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0x98) = uVar3;
    *(longlong *)((longlong)param_1 + 0xa0) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    puVar1 = (undefined8 *)((longlong)param_2 + 0xa8);
    param_2 = (void *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xa8) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0xb0);
  }
  return true;
}

// Construct<FSliderStyle> @ 1425257f0

void __cdecl UE::CoreUObject::Private::Construct<FSliderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  *(undefined4 *)((longlong)param_1 + 0x430) = 0x40000000;
  return;
}

// ConstructForTests<FSliderStyle> @ 142525800

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSliderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  *(undefined4 *)((longlong)param_1 + 0x430) = 0x40000000;
  return;
}

// Destruct<FSliderStyle> @ 142525810

void __cdecl UE::CoreUObject::Private::Destruct<FSliderStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSliderStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x380) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSliderStyle> @ 142525820

bool __cdecl UE::CoreUObject::Private::Copy<FSliderStyle>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x380),(FSlateBrush *)((longlong)param_2 + 0x380)
              );
    puVar1 = (undefined4 *)((longlong)param_2 + 0x430);
    param_2 = (void *)((longlong)param_2 + 0x440);
    *(undefined4 *)((longlong)param_1 + 0x430) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x440);
  }
  return true;
}

// Construct<FSlateBrushOutlineSettings> @ 142525950

void __cdecl UE::CoreUObject::Private::Construct<FSlateBrushOutlineSettings>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = FLinearColor::Transparent;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// ConstructForTests<FSlateBrushOutlineSettings> @ 142525980

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateBrushOutlineSettings>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FVar1 = FLinearColor::Transparent;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Destruct<FSlateBrushOutlineSettings> @ 1425259b0

void __cdecl UE::CoreUObject::Private::Destruct<FSlateBrushOutlineSettings>(void *param_1)

{
  return;
}

// Copy<FSlateBrushOutlineSettings> @ 1425259c0

bool __cdecl
UE::CoreUObject::Private::Copy<FSlateBrushOutlineSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSearchBoxStyle> @ 14252cc30

void __cdecl UE::CoreUObject::Private::Construct<FSearchBoxStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSearchBoxStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x10));
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)((longlong)param_1 + 0xc90));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xcf0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xda0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xe50));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xf00));
  *(undefined8 *)((longlong)param_1 + 0xfb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfb8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfd0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfda) = 0;
  return;
}

// ConstructForTests<FSearchBoxStyle> @ 14252cc40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSearchBoxStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSearchBoxStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x10));
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)((longlong)param_1 + 0xc90));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xcf0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xda0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xe50));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xf00));
  *(undefined8 *)((longlong)param_1 + 0xfb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfb8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfd0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfda) = 0;
  return;
}

// Destruct<FSearchBoxStyle> @ 14252cc50

void __cdecl UE::CoreUObject::Private::Destruct<FSearchBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSearchBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xf00) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 4000));
  *(undefined ***)((longlong)param_1 + 0xe50) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xef0));
  *(undefined ***)((longlong)param_1 + 0xda0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xe40));
  *(undefined ***)((longlong)param_1 + 0xcf0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xd90));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xcc8));
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x10))
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSearchBoxStyle> @ 14252cc60

bool __cdecl
UE::CoreUObject::Private::Copy<FSearchBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FEditableTextBoxStyle::operator=
              ((FEditableTextBoxStyle *)((longlong)param_1 + 0x10),
               (FEditableTextBoxStyle *)((longlong)param_2 + 0x10));
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 0xc90),
               (FSlateFontInfo *)((longlong)param_2 + 0xc90));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xcf0),(FSlateBrush *)((longlong)param_2 + 0xcf0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xda0),(FSlateBrush *)((longlong)param_2 + 0xda0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xe50),(FSlateBrush *)((longlong)param_2 + 0xe50)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xf00),(FSlateBrush *)((longlong)param_2 + 0xf00)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xfb8);
    *(undefined8 *)((longlong)param_1 + 0xfb0) = *(undefined8 *)((longlong)param_2 + 0xfb0);
    *(undefined8 *)((longlong)param_1 + 0xfb8) = uVar1;
    if ((undefined8 *)((longlong)param_2 + 0xfc0) != (undefined8 *)((longlong)param_1 + 0xfc0)) {
      if (*(char *)((longlong)param_2 + 0xfd0) == '\0') {
        if (*(char *)((longlong)param_1 + 0xfd0) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0xfd0) = 0;
        }
      }
      else {
        uVar1 = *(undefined8 *)((longlong)param_2 + 0xfc8);
        *(undefined8 *)((longlong)param_1 + 0xfc0) = *(undefined8 *)((longlong)param_2 + 0xfc0);
        *(undefined8 *)((longlong)param_1 + 0xfc8) = uVar1;
        *(undefined1 *)((longlong)param_1 + 0xfd0) = 1;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xfd8) = *(undefined1 *)((longlong)param_2 + 0xfd8);
    *(undefined1 *)((longlong)param_1 + 0xfd9) = *(undefined1 *)((longlong)param_2 + 0xfd9);
    *(undefined1 *)((longlong)param_1 + 0xfda) = *(undefined1 *)((longlong)param_2 + 0xfda);
    param_1 = (void *)((longlong)param_1 + 0xfe0);
    param_2 = (void *)((longlong)param_2 + 0xfe0);
  }
  return true;
}

// Construct<FWrapButtonStyle> @ 14252cda0

void __cdecl UE::CoreUObject::Private::Construct<FWrapButtonStyle>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  *(undefined1 *)((longlong)param_1 + 0x640) = 0;
  *(undefined1 *)((longlong)param_1 + 0x650) = 1;
  *(undefined1 *)((longlong)param_1 + 0x710) = 0;
  *(undefined4 *)((longlong)param_1 + 0x720) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x724) = 1;
  *(undefined8 *)((longlong)param_1 + 0x728) = 0;
  *(undefined8 *)((longlong)param_1 + 0x730) = 0;
  *(undefined1 *)((longlong)param_1 + 0x738) = 1;
  return;
}

// ConstructForTests<FWrapButtonStyle> @ 14252cdb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWrapButtonStyle>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  *(undefined1 *)((longlong)param_1 + 0x640) = 0;
  *(undefined1 *)((longlong)param_1 + 0x650) = 1;
  *(undefined1 *)((longlong)param_1 + 0x710) = 0;
  *(undefined4 *)((longlong)param_1 + 0x720) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x724) = 1;
  *(undefined8 *)((longlong)param_1 + 0x728) = 0;
  *(undefined8 *)((longlong)param_1 + 0x730) = 0;
  *(undefined1 *)((longlong)param_1 + 0x738) = 1;
  return;
}

// Destruct<FWrapButtonStyle> @ 14252cdc0

void __cdecl UE::CoreUObject::Private::Destruct<FWrapButtonStyle>(void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x710) != '\0') {
    *(undefined ***)((longlong)param_1 + 0x660) = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x700));
  }
  TOptional<FComboButtonStyle>::~TOptional<FComboButtonStyle>
            ((TOptional<FComboButtonStyle> *)((longlong)param_1 + 0xe0));
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xc0));
  return;
}

// Copy<FWrapButtonStyle> @ 14252ce20

bool __cdecl
UE::CoreUObject::Private::Copy<FWrapButtonStyle>(void *param_1,void *param_2,int param_3)

{
  FComboButtonStyle *this;
  FSlateBrush *this_00;
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar5 = param_1;
    do {
      puVar1 = (undefined8 *)((longlong)puVar5 + ((longlong)param_2 - (longlong)param_1));
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar3;
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)((longlong)pvVar4 + 0x10);
      FSlateBrush::operator=((FSlateBrush *)(puVar5 + 4),(FSlateBrush *)((longlong)pvVar4 + 0x20));
      this = (FComboButtonStyle *)(puVar5 + 0x1c);
      *(undefined1 *)(puVar5 + 0x1a) = *(undefined1 *)((longlong)pvVar4 + 0xd0);
      if ((FComboButtonStyle *)((longlong)pvVar4 + 0xe0) != this) {
        if (*(char *)((longlong)pvVar4 + 0x640) == '\0') {
          if (*(char *)(puVar5 + 200) != '\0') {
            *(undefined ***)this = &___7FComboButtonStyle__6B_;
            puVar5[0xaa] = &___7FSlateBrush__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)puVar5[0xbe]);
            puVar5[0x90] = &___7FSlateBrush__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)puVar5[0xa4]);
            FButtonStyle::~FButtonStyle((FButtonStyle *)(puVar5 + 0x1e));
            FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
            *(undefined1 *)(puVar5 + 200) = 0;
          }
        }
        else {
          if (*(char *)(puVar5 + 200) != '\0') {
            *(undefined ***)this = &___7FComboButtonStyle__6B_;
            puVar5[0xaa] = &___7FSlateBrush__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)puVar5[0xbe]);
            puVar5[0x90] = &___7FSlateBrush__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)puVar5[0xa4]);
            FButtonStyle::~FButtonStyle((FButtonStyle *)(puVar5 + 0x1e));
            FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
          }
          FComboButtonStyle::FComboButtonStyle(this,(FComboButtonStyle *)((longlong)pvVar4 + 0xe0));
          *(undefined1 *)(puVar5 + 200) = 1;
        }
      }
      this_00 = (FSlateBrush *)(puVar5 + 0xcc);
      *(undefined1 *)(puVar5 + 0xca) = *(undefined1 *)((longlong)pvVar4 + 0x650);
      if ((FSlateBrush *)((longlong)pvVar4 + 0x660) != this_00) {
        if (*(char *)((longlong)pvVar4 + 0x710) == '\0') {
          if (*(char *)(puVar5 + 0xe2) != '\0') {
            pTVar2 = (TReferenceControllerBase<1> *)puVar5[0xe0];
            this_00->_padding_ = (longlong)&___7FSlateBrush__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            *(undefined1 *)(puVar5 + 0xe2) = 0;
          }
        }
        else {
          if (*(char *)(puVar5 + 0xe2) != '\0') {
            pTVar2 = (TReferenceControllerBase<1> *)puVar5[0xe0];
            this_00->_padding_ = (longlong)&___7FSlateBrush__6B_;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
          }
          FSlateBrush::FSlateBrush(this_00,(FSlateBrush *)((longlong)pvVar4 + 0x660));
          *(undefined1 *)(puVar5 + 0xe2) = 1;
        }
      }
      if ((undefined8 *)((longlong)pvVar4 + 0x720) != puVar5 + 0xe4) {
        if (*(char *)((longlong)pvVar4 + 0x724) == '\0') {
          if (*(char *)((longlong)puVar5 + 0x724) != '\0') {
            *(undefined1 *)((longlong)puVar5 + 0x724) = 0;
          }
        }
        else {
          *(undefined4 *)(puVar5 + 0xe4) = *(undefined4 *)((longlong)pvVar4 + 0x720);
          *(undefined1 *)((longlong)puVar5 + 0x724) = 1;
        }
      }
      if ((undefined8 *)((longlong)pvVar4 + 0x728) != puVar5 + 0xe5) {
        if (*(char *)((longlong)pvVar4 + 0x738) == '\0') {
          if (*(char *)(puVar5 + 0xe7) != '\0') {
            *(undefined1 *)(puVar5 + 0xe7) = 0;
          }
        }
        else {
          uVar3 = *(undefined8 *)((longlong)pvVar4 + 0x730);
          puVar5[0xe5] = *(undefined8 *)((longlong)pvVar4 + 0x728);
          puVar5[0xe6] = uVar3;
          *(undefined1 *)(puVar5 + 0xe7) = 1;
        }
      }
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x740);
      puVar5 = puVar5 + 0xe8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSegmentedControlStyle> @ 14252d200

void __cdecl UE::CoreUObject::Private::Construct<FSegmentedControlStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 aTStackX_8 [4];
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSegmentedControlStyle__6B_;
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x10));
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x960));
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x12b0));
  aTStackX_8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&aTStackX_8[0]._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1c00),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined8 *)((longlong)param_1 + 0x1cb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cb8) = 0;
  return;
}

// ConstructForTests<FSegmentedControlStyle> @ 14252d210

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSegmentedControlStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 aTStackX_8 [4];
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSegmentedControlStyle__6B_;
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x10));
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x960));
  FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x12b0));
  aTStackX_8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&aTStackX_8[0]._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1c00),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined8 *)((longlong)param_1 + 0x1cb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cb8) = 0;
  return;
}

// Destruct<FSegmentedControlStyle> @ 14252d220

void __cdecl UE::CoreUObject::Private::Destruct<FSegmentedControlStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSegmentedControlStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x1c00) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1ca0));
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x12b0));
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x960));
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSegmentedControlStyle> @ 14252d2d0

bool __cdecl
UE::CoreUObject::Private::Copy<FSegmentedControlStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FCheckBoxStyle::operator=
              ((FCheckBoxStyle *)((longlong)param_1 + 0x10),
               (FCheckBoxStyle *)((longlong)param_2 + 0x10));
    FCheckBoxStyle::operator=
              ((FCheckBoxStyle *)((longlong)param_1 + 0x960),
               (FCheckBoxStyle *)((longlong)param_2 + 0x960));
    FCheckBoxStyle::operator=
              ((FCheckBoxStyle *)((longlong)param_1 + 0x12b0),
               (FCheckBoxStyle *)((longlong)param_2 + 0x12b0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1c00),
               (FSlateBrush *)((longlong)param_2 + 0x1c00));
    puVar1 = (undefined8 *)((longlong)param_2 + 0x1cb0);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x1cb8);
    param_2 = (void *)((longlong)param_2 + 0x1cc0);
    *(undefined8 *)((longlong)param_1 + 0x1cb0) = *puVar1;
    *(undefined8 *)((longlong)param_1 + 0x1cb8) = uVar2;
    param_1 = (void *)((longlong)param_1 + 0x1cc0);
  }
  return true;
}

// Construct<FExpandableAreaStyle> @ 14252d3a0

void __cdecl UE::CoreUObject::Private::Construct<FExpandableAreaStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FExpandableAreaStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  *(undefined4 *)((longlong)param_1 + 0x170) = 0x3dcccccd;
  return;
}

// ConstructForTests<FExpandableAreaStyle> @ 14252d3f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FExpandableAreaStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FExpandableAreaStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  *(undefined4 *)((longlong)param_1 + 0x170) = 0x3dcccccd;
  return;
}

// Destruct<FExpandableAreaStyle> @ 14252d440

void __cdecl UE::CoreUObject::Private::Destruct<FExpandableAreaStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FExpandableAreaStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FExpandableAreaStyle> @ 14252d4e0

bool __cdecl
UE::CoreUObject::Private::Copy<FExpandableAreaStyle>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    puVar1 = (undefined4 *)((longlong)param_2 + 0x170);
    param_2 = (void *)((longlong)param_2 + 0x180);
    *(undefined4 *)((longlong)param_1 + 0x170) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x180);
  }
  return true;
}

// Construct<FStyleTheme> @ 14252d580

void __cdecl UE::CoreUObject::Private::Construct<FStyleTheme>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FStyleTheme> @ 14252d5e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStyleTheme>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FStyleTheme> @ 14252d620

void __cdecl UE::CoreUObject::Private::Destruct<FStyleTheme>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014252d656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}

// Copy<FStyleTheme> @ 14252d670

bool __cdecl UE::CoreUObject::Private::Copy<FStyleTheme>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  FScriptContainerElement *_Src;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar4 = (undefined4 *)(lVar11 + (longlong)param_1);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      *(undefined4 *)param_1 = *puVar4;
      *(undefined4 *)((longlong)param_1 + 4) = uVar8;
      *(undefined4 *)((longlong)param_1 + 8) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
      plVar6 = *(longlong **)((longlong)param_1 + lVar11 + 0x10);
      plVar7 = *(longlong **)((longlong)param_1 + 0x10);
      if (plVar7 != plVar6) {
        *(longlong **)((longlong)param_1 + 0x10) = plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6,local_res18);
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar11 + 0x18)
      ;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),
                 (FString *)((longlong)param_1 + lVar11 + 0x20));
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar11 + 0x30);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x30);
      if (pFVar2 != pFVar1) {
        iVar5 = *(int *)((longlong)param_1 + lVar11 + 0x38);
        piVar3 = (int *)((longlong)param_1 + 0x3c);
        _Src = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x38) = iVar5;
        if ((iVar5 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar5,*piVar3,pFVar2,iVar5,piVar3);
          if (iVar5 != 0) {
            memcpy(pFVar2->Data,_Src,(longlong)iVar5 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FProgressBarStyle> @ 14252d8c0

void __cdecl UE::CoreUObject::Private::Construct<FProgressBarStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FProgressBarStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  *(undefined1 *)((longlong)param_1 + 0x220) = 0;
  return;
}

// ConstructForTests<FProgressBarStyle> @ 14252d910

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProgressBarStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FProgressBarStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  *(undefined1 *)((longlong)param_1 + 0x220) = 0;
  return;
}

// Destruct<FProgressBarStyle> @ 14252d960

void __cdecl UE::CoreUObject::Private::Destruct<FProgressBarStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FProgressBarStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FProgressBarStyle> @ 14252d970

bool __cdecl
UE::CoreUObject::Private::Copy<FProgressBarStyle>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    puVar1 = (undefined1 *)((longlong)param_2 + 0x220);
    param_2 = (void *)((longlong)param_2 + 0x230);
    *(undefined1 *)((longlong)param_1 + 0x220) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x230);
  }
  return true;
}

// Construct<FStyleColorList> @ 14252da20

void __cdecl UE::CoreUObject::Private::Construct<FStyleColorList>(void *param_1)

{
  memset(param_1,0,0x7a0);
  FStyleColorList::FStyleColorList(param_1);
  return;
}

// ConstructForTests<FStyleColorList> @ 14252da50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStyleColorList>(void *param_1)

{
  longlong lVar1;
  FText *this;
  
  *(FLinearColor_u_0 *)param_1 = FLinearColor::Transparent.field0_0x0;
  memset((void *)((longlong)param_1 + 0x10),0,0x3c0);
  this = (FText *)((longlong)param_1 + 0x3d0);
  lVar1 = 0x3d;
  do {
    FText::FText(this);
    this = this + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// Destruct<FStyleColorList> @ 14252da60

void __cdecl UE::CoreUObject::Private::Destruct<FStyleColorList>(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_1 + 0x7a0;
  lVar2 = 0x3d;
  do {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar2 != 0);
  return;
}

// Copy<FStyleColorList> @ 14252daf0

bool __cdecl
UE::CoreUObject::Private::Copy<FStyleColorList>(void *param_1,void *param_2,int param_3)

{
  FStyleColorList *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FStyleColorList::operator=
                (this,(FStyleColorList *)(((longlong)param_2 - (longlong)param_1) + (longlong)this))
      ;
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInlineEditableTextBlockStyle> @ 14252dd00

void __cdecl UE::CoreUObject::Private::Construct<FInlineEditableTextBlockStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x10));
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0xc90));
  return;
}

// ConstructForTests<FInlineEditableTextBlockStyle> @ 14252dd40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInlineEditableTextBlockStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x10));
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0xc90));
  return;
}

// Destruct<FInlineEditableTextBlockStyle> @ 14252dd80

void __cdecl UE::CoreUObject::Private::Destruct<FInlineEditableTextBlockStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0xc90));
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)((longlong)param_1 + 0x10))
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FInlineEditableTextBlockStyle> @ 14252de00

bool __cdecl
UE::CoreUObject::Private::Copy<FInlineEditableTextBlockStyle>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FEditableTextBoxStyle::operator=
              ((FEditableTextBoxStyle *)((longlong)pvVar1 + 0x10),
               (FEditableTextBoxStyle *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)pvVar1 + 0xc90),
               (FTextBlockStyle *)
               ((longlong)pvVar1 + (longlong)param_2 + (0xc90 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0xf70);
  }
  return true;
}

// Construct<FWindowStyle> @ 14252e050

void __cdecl UE::CoreUObject::Private::Construct<FWindowStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FWindowStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x3a0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x730));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xac0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xe50));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x11e0));
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x1570));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1850));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1900));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x19b0));
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x1a70) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x1a60))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1a80));
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x1b40) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x1b30))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1b50));
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x1c10) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x1c00))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1c20));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1cd0));
  *(undefined4 *)((longlong)param_1 + 0x1d80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d84) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1d88) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1d8c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1d90) = 0x40a00000;
  return;
}

// ConstructForTests<FWindowStyle> @ 14252e060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWindowStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FWindowStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x3a0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x730));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xac0));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xe50));
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x11e0));
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x1570));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1850));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1900));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x19b0));
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x1a70) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x1a60))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1a80));
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x1b40) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x1b30))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1b50));
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x1c10) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x1c00))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1c20));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1cd0));
  *(undefined4 *)((longlong)param_1 + 0x1d80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d84) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1d88) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1d8c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1d90) = 0x40a00000;
  return;
}

// Destruct<FWindowStyle> @ 14252e070

void __cdecl UE::CoreUObject::Private::Destruct<FWindowStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FWindowStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x1cd0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1d70));
  *(undefined ***)((longlong)param_1 + 0x1c20) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1cc0));
  *(undefined ***)((longlong)param_1 + 0x1b50) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1bf0));
  *(undefined ***)((longlong)param_1 + 0x1a80) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1b20));
  *(undefined ***)((longlong)param_1 + 0x19b0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1a50));
  *(undefined ***)((longlong)param_1 + 0x1900) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x19a0));
  *(undefined ***)((longlong)param_1 + 0x1850) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18f0));
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x1570));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x11e0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xe50));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xac0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x730));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x3a0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FWindowStyle> @ 14252e0c0

bool __cdecl UE::CoreUObject::Private::Copy<FWindowStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x10),(FButtonStyle *)((longlong)param_2 + 0x10)
              );
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x3a0),
               (FButtonStyle *)((longlong)param_2 + 0x3a0));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x730),
               (FButtonStyle *)((longlong)param_2 + 0x730));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0xac0),
               (FButtonStyle *)((longlong)param_2 + 0xac0));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0xe50),
               (FButtonStyle *)((longlong)param_2 + 0xe50));
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x11e0),
               (FButtonStyle *)((longlong)param_2 + 0x11e0));
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)param_1 + 0x1570),
               (FTextBlockStyle *)((longlong)param_2 + 0x1570));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1850),
               (FSlateBrush *)((longlong)param_2 + 0x1850));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1900),
               (FSlateBrush *)((longlong)param_2 + 0x1900));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x19b0),
               (FSlateBrush *)((longlong)param_2 + 0x19b0));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1a68);
    *(undefined8 *)((longlong)param_1 + 0x1a60) = *(undefined8 *)((longlong)param_2 + 0x1a60);
    *(undefined8 *)((longlong)param_1 + 0x1a68) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x1a70) = *(undefined4 *)((longlong)param_2 + 0x1a70);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1a80),
               (FSlateBrush *)((longlong)param_2 + 0x1a80));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1b38);
    *(undefined8 *)((longlong)param_1 + 0x1b30) = *(undefined8 *)((longlong)param_2 + 0x1b30);
    *(undefined8 *)((longlong)param_1 + 0x1b38) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x1b40) = *(undefined4 *)((longlong)param_2 + 0x1b40);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1b50),
               (FSlateBrush *)((longlong)param_2 + 0x1b50));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c08);
    *(undefined8 *)((longlong)param_1 + 0x1c00) = *(undefined8 *)((longlong)param_2 + 0x1c00);
    *(undefined8 *)((longlong)param_1 + 0x1c08) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x1c10) = *(undefined4 *)((longlong)param_2 + 0x1c10);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1c20),
               (FSlateBrush *)((longlong)param_2 + 0x1c20));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1cd0),
               (FSlateBrush *)((longlong)param_2 + 0x1cd0));
    *(undefined4 *)((longlong)param_1 + 0x1d80) = *(undefined4 *)((longlong)param_2 + 0x1d80);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x1d8c);
    *(undefined8 *)((longlong)param_1 + 0x1d84) = *(undefined8 *)((longlong)param_2 + 0x1d84);
    *(undefined8 *)((longlong)param_1 + 0x1d8c) = uVar1;
    param_1 = (void *)((longlong)param_1 + 0x1da0);
    param_2 = (void *)((longlong)param_2 + 0x1da0);
  }
  return true;
}

// Construct<FEditableTextBoxStyle> @ 14252e2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FEditableTextBoxStyle>(void *param_1)

{
  FLinearColor FVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  FTextBlockStyle *pFVar6;
  FSlateFontInfo *pFVar7;
  TVector2<float>_u_0 TStackX_10;
  FMargin FStack_428;
  undefined4 uStack_418;
  FSlateBrush FStack_408;
  FSlateFontInfo FStack_358;
  undefined **appuStack_2f8 [8];
  FSharedReferencer<1> FStack_2b8;
  undefined **ppuStack_238;
  FSharedReferencer<1> FStack_198;
  undefined **ppuStack_188;
  FSharedReferencer<1> FStack_e8;
  undefined **ppuStack_d8;
  FSharedReferencer<1> FStack_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FEditableTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x2d8) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x40000000;
  pFVar6 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)appuStack_2f8);
  pFVar7 = FStyleDefaults::GetFontInfo(&FStack_358,9);
  FSlateFontInfo::operator=(&pFVar6->Font,pFVar7);
  uVar2 = _UNK_15090c6d8;
  *(undefined8 *)&(pFVar6->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar6->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar2;
  uStack_418 = CONCAT22(uStack_418._2_2_,2);
  uVar5 = uStack_418;
  uStack_418._0_1_ = (undefined1)2;
  uStack_418._1_1_ = (undefined1)(2 >> 8);
  (pFVar6->ColorAndOpacity).ColorUseRule = (undefined1)uStack_418;
  (pFVar6->ColorAndOpacity).ColorTableId = uStack_418._1_1_;
  *(undefined2 *)&(pFVar6->ColorAndOpacity).field_0x12 = uStack_418._2_2_;
  (pFVar6->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Highlight.SpecifiedColor.field0_0x0;
  EVar3 = FStyleColors::Highlight.ColorTableId;
  uVar4 = FStyleColors::Highlight._18_2_;
  (pFVar6->SelectedBackgroundColor).ColorUseRule = FStyleColors::Highlight.ColorUseRule;
  (pFVar6->SelectedBackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(pFVar6->SelectedBackgroundColor).field_0x12 = uVar4;
  (pFVar6->HighlightColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  EVar3 = FStyleColors::Black.ColorTableId;
  uVar4 = FStyleColors::Black._18_2_;
  (pFVar6->HighlightColor).ColorUseRule = FStyleColors::Black.ColorUseRule;
  (pFVar6->HighlightColor).ColorTableId = EVar3;
  *(undefined2 *)&(pFVar6->HighlightColor).field_0x12 = uVar4;
  TStackX_10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_428.Left = 0.0;
  FStack_428.Top = 0.0;
  FStack_428.Right = 0.0;
  FStack_428.Bottom = 0.0;
  uStack_418 = uVar5;
  FSlateBrush::FSlateBrush
            (&FStack_408,Image,(FName)0x0,&FStack_428,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_10._s_0,&FStyleColors::AccentGreen,
             (UObject *)0x0,false);
  FStack_408._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar6->HighlightShape,&FStack_408);
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x2e0),pFVar6);
  FStack_408._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_408.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_358.CompositeFont.SharedReferenceCount.ReferenceController);
  appuStack_2f8[0] = &___7FTextBlockStyle__6B_;
  ppuStack_d8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38.ReferenceController);
  ppuStack_188 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e8.ReferenceController);
  ppuStack_238 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_198.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2b8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)appuStack_2f8);
  *(undefined8 *)((longlong)param_1 + 0x5c0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x5d0) = 2;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x5e4) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x5d4))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x5e8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5f0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x5f8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x608) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x60c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x610) = 0;
  *(undefined8 *)((longlong)param_1 + 0x618) = 0;
  *(undefined8 *)((longlong)param_1 + 0x620) = 0;
  *(undefined8 *)((longlong)param_1 + 0x628) = 0;
  FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)((longlong)param_1 + 0x630));
  return;
}

// ConstructForTests<FEditableTextBoxStyle> @ 14252e330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEditableTextBoxStyle>(void *param_1)

{
  FLinearColor FVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  FTextBlockStyle *pFVar6;
  FSlateFontInfo *pFVar7;
  TVector2<float>_u_0 TStackX_10;
  FMargin FStack_428;
  undefined4 uStack_418;
  FSlateBrush FStack_408;
  FSlateFontInfo FStack_358;
  undefined **appuStack_2f8 [8];
  FSharedReferencer<1> FStack_2b8;
  undefined **ppuStack_238;
  FSharedReferencer<1> FStack_198;
  undefined **ppuStack_188;
  FSharedReferencer<1> FStack_e8;
  undefined **ppuStack_d8;
  FSharedReferencer<1> FStack_38;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FEditableTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x2d8) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x40000000;
  pFVar6 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)appuStack_2f8);
  pFVar7 = FStyleDefaults::GetFontInfo(&FStack_358,9);
  FSlateFontInfo::operator=(&pFVar6->Font,pFVar7);
  uVar2 = _UNK_15090c6d8;
  *(undefined8 *)&(pFVar6->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar6->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar2;
  uStack_418 = CONCAT22(uStack_418._2_2_,2);
  uVar5 = uStack_418;
  uStack_418._0_1_ = (undefined1)2;
  uStack_418._1_1_ = (undefined1)(2 >> 8);
  (pFVar6->ColorAndOpacity).ColorUseRule = (undefined1)uStack_418;
  (pFVar6->ColorAndOpacity).ColorTableId = uStack_418._1_1_;
  *(undefined2 *)&(pFVar6->ColorAndOpacity).field_0x12 = uStack_418._2_2_;
  (pFVar6->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Highlight.SpecifiedColor.field0_0x0;
  EVar3 = FStyleColors::Highlight.ColorTableId;
  uVar4 = FStyleColors::Highlight._18_2_;
  (pFVar6->SelectedBackgroundColor).ColorUseRule = FStyleColors::Highlight.ColorUseRule;
  (pFVar6->SelectedBackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(pFVar6->SelectedBackgroundColor).field_0x12 = uVar4;
  (pFVar6->HighlightColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  EVar3 = FStyleColors::Black.ColorTableId;
  uVar4 = FStyleColors::Black._18_2_;
  (pFVar6->HighlightColor).ColorUseRule = FStyleColors::Black.ColorUseRule;
  (pFVar6->HighlightColor).ColorTableId = EVar3;
  *(undefined2 *)&(pFVar6->HighlightColor).field_0x12 = uVar4;
  TStackX_10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_428.Left = 0.0;
  FStack_428.Top = 0.0;
  FStack_428.Right = 0.0;
  FStack_428.Bottom = 0.0;
  uStack_418 = uVar5;
  FSlateBrush::FSlateBrush
            (&FStack_408,Image,(FName)0x0,&FStack_428,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_10._s_0,&FStyleColors::AccentGreen,
             (UObject *)0x0,false);
  FStack_408._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar6->HighlightShape,&FStack_408);
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x2e0),pFVar6);
  FStack_408._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_408.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_358.CompositeFont.SharedReferenceCount.ReferenceController);
  appuStack_2f8[0] = &___7FTextBlockStyle__6B_;
  ppuStack_d8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38.ReferenceController);
  ppuStack_188 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e8.ReferenceController);
  ppuStack_238 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_198.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2b8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)appuStack_2f8);
  *(undefined8 *)((longlong)param_1 + 0x5c0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x5d0) = 2;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x5e4) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x5d4))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x5e8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5f0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x5f8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x608) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x60c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x610) = 0;
  *(undefined8 *)((longlong)param_1 + 0x618) = 0;
  *(undefined8 *)((longlong)param_1 + 0x620) = 0;
  *(undefined8 *)((longlong)param_1 + 0x628) = 0;
  FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)((longlong)param_1 + 0x630));
  return;
}

// Destruct<FEditableTextBoxStyle> @ 14252e340

void __cdecl UE::CoreUObject::Private::Destruct<FEditableTextBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle((FScrollBarStyle *)((longlong)param_1 + 0x630));
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x2e0));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FEditableTextBoxStyle> @ 14252e390

bool __cdecl
UE::CoreUObject::Private::Copy<FEditableTextBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x2d8);
    *(undefined8 *)((longlong)param_1 + 0x2d0) = *(undefined8 *)((longlong)param_2 + 0x2d0);
    *(undefined8 *)((longlong)param_1 + 0x2d8) = uVar1;
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)param_1 + 0x2e0),
               (FTextBlockStyle *)((longlong)param_2 + 0x2e0));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x5c8);
    *(undefined8 *)((longlong)param_1 + 0x5c0) = *(undefined8 *)((longlong)param_2 + 0x5c0);
    *(undefined8 *)((longlong)param_1 + 0x5c8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x5d0) = *(undefined4 *)((longlong)param_2 + 0x5d0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x5dc);
    *(undefined8 *)((longlong)param_1 + 0x5d4) = *(undefined8 *)((longlong)param_2 + 0x5d4);
    *(undefined8 *)((longlong)param_1 + 0x5dc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x5e4) = *(undefined4 *)((longlong)param_2 + 0x5e4);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x5f0);
    *(undefined8 *)((longlong)param_1 + 0x5e8) = *(undefined8 *)((longlong)param_2 + 0x5e8);
    *(undefined8 *)((longlong)param_1 + 0x5f0) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x5f8) = *(undefined4 *)((longlong)param_2 + 0x5f8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x604);
    *(undefined8 *)((longlong)param_1 + 0x5fc) = *(undefined8 *)((longlong)param_2 + 0x5fc);
    *(undefined8 *)((longlong)param_1 + 0x604) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x60c) = *(undefined4 *)((longlong)param_2 + 0x60c);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x618);
    *(undefined8 *)((longlong)param_1 + 0x610) = *(undefined8 *)((longlong)param_2 + 0x610);
    *(undefined8 *)((longlong)param_1 + 0x618) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x628);
    *(undefined8 *)((longlong)param_1 + 0x620) = *(undefined8 *)((longlong)param_2 + 0x620);
    *(undefined8 *)((longlong)param_1 + 0x628) = uVar1;
    FScrollBarStyle::operator=
              ((FScrollBarStyle *)((longlong)param_1 + 0x630),
               (FScrollBarStyle *)((longlong)param_2 + 0x630));
    param_2 = (void *)((longlong)param_2 + 0xc80);
    param_1 = (void *)((longlong)param_1 + 0xc80);
  }
  return true;
}

// Construct<FScrollBorderStyle> @ 14252e590

void __cdecl UE::CoreUObject::Private::Construct<FScrollBorderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FScrollBorderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  return;
}

// ConstructForTests<FScrollBorderStyle> @ 14252e5d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScrollBorderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FScrollBorderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  return;
}

// Destruct<FScrollBorderStyle> @ 14252e610

void __cdecl UE::CoreUObject::Private::Destruct<FScrollBorderStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FScrollBorderStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FScrollBorderStyle> @ 14252e6b0

bool __cdecl
UE::CoreUObject::Private::Copy<FScrollBorderStyle>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar1 + 0x10),
               (FSlateBrush *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar1 + 0xc0),
               (FSlateBrush *)((longlong)pvVar1 + (longlong)param_2 + (0xc0 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x170);
  }
  return true;
}

// Construct<FScrollBarStyle> @ 14252e870

void __cdecl UE::CoreUObject::Private::Construct<FScrollBarStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FScrollBarStyle__6B_;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4e0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x590),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined4 *)((longlong)param_1 + 0x640) = 0x41800000;
  return;
}

// ConstructForTests<FScrollBarStyle> @ 14252e880

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScrollBarStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FScrollBarStyle__6B_;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4e0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x590),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined4 *)((longlong)param_1 + 0x640) = 0x41800000;
  return;
}

// Destruct<FScrollBarStyle> @ 14252e890

void __cdecl UE::CoreUObject::Private::Destruct<FScrollBarStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FScrollBarStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x590) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x630));
  *(undefined ***)((longlong)param_1 + 0x4e0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x580));
  *(undefined ***)((longlong)param_1 + 0x430) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4d0));
  *(undefined ***)((longlong)param_1 + 0x380) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FScrollBarStyle> @ 14252e8e0

bool __cdecl
UE::CoreUObject::Private::Copy<FScrollBarStyle>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x380),(FSlateBrush *)((longlong)param_2 + 0x380)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x430),(FSlateBrush *)((longlong)param_2 + 0x430)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x4e0),(FSlateBrush *)((longlong)param_2 + 0x4e0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x590),(FSlateBrush *)((longlong)param_2 + 0x590)
              );
    puVar1 = (undefined4 *)((longlong)param_2 + 0x640);
    param_2 = (void *)((longlong)param_2 + 0x650);
    *(undefined4 *)((longlong)param_1 + 0x640) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x650);
  }
  return true;
}

// Construct<FScrollBoxStyle> @ 14252ebf0

void __cdecl UE::CoreUObject::Private::Construct<FScrollBoxStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined4 *)((longlong)param_1 + 8) = 0x41100000;
  *(undefined ***)param_1 = &___7FScrollBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  return;
}

// ConstructForTests<FScrollBoxStyle> @ 14252ec00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScrollBoxStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined4 *)((longlong)param_1 + 8) = 0x41100000;
  *(undefined ***)param_1 = &___7FScrollBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  return;
}

// Destruct<FScrollBoxStyle> @ 14252ec10

void __cdecl UE::CoreUObject::Private::Destruct<FScrollBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FScrollBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FScrollBoxStyle> @ 14252ec60

bool __cdecl
UE::CoreUObject::Private::Copy<FScrollBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x2d8);
    *(undefined8 *)((longlong)param_1 + 0x2d0) = *(undefined8 *)((longlong)param_2 + 0x2d0);
    *(undefined8 *)((longlong)param_1 + 0x2d8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x2e8);
    *(undefined8 *)((longlong)param_1 + 0x2e0) = *(undefined8 *)((longlong)param_2 + 0x2e0);
    *(undefined8 *)((longlong)param_1 + 0x2e8) = uVar1;
    param_1 = (void *)((longlong)param_1 + 0x2f0);
    param_2 = (void *)((longlong)param_2 + 0x2f0);
  }
  return true;
}

// Construct<FEditableTextStyle> @ 14252ee30

void __cdecl UE::CoreUObject::Private::Construct<FEditableTextStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FEditableTextStyle__6B_;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 8),9);
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x78) = 2;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x80));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x130));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1e0));
  return;
}

// ConstructForTests<FEditableTextStyle> @ 14252ee40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEditableTextStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FEditableTextStyle__6B_;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)((longlong)param_1 + 8),9);
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x78) = 2;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x80));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x130));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x1e0));
  return;
}

// Destruct<FEditableTextStyle> @ 14252ee50

void __cdecl UE::CoreUObject::Private::Destruct<FEditableTextStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FEditableTextStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x1e0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x280));
  *(undefined ***)((longlong)param_1 + 0x130) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1d0));
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x120));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FEditableTextStyle> @ 14252eea0

bool __cdecl
UE::CoreUObject::Private::Copy<FEditableTextStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 8),(FSlateFontInfo *)((longlong)param_2 + 8));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x78);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x80),(FSlateBrush *)((longlong)param_2 + 0x80));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x130),(FSlateBrush *)((longlong)param_2 + 0x130)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x1e0),(FSlateBrush *)((longlong)param_2 + 0x1e0)
              );
    param_2 = (void *)((longlong)param_2 + 0x290);
    param_1 = (void *)((longlong)param_1 + 0x290);
  }
  return true;
}

// Construct<FSlateSound> @ 14252f010

void __cdecl UE::CoreUObject::Private::Construct<FSlateSound>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSlateSound> @ 14252f030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateSound>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSlateSound> @ 14252f050

void __cdecl UE::CoreUObject::Private::Destruct<FSlateSound>(void *param_1)

{
  return;
}

// Copy<FSlateSound> @ 14252f0a0

bool __cdecl UE::CoreUObject::Private::Copy<FSlateSound>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDockTabStyle> @ 14252f130

void __cdecl UE::CoreUObject::Private::Construct<FDockTabStyle>(void *param_1)

{
  FTextBlockStyle *pFVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FDockTabStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3a0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x450));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x500));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x5b0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x660));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x710));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x7c0));
  pFVar1 = FTextBlockStyle::GetDefault();
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x870),pFVar1);
  *(undefined4 *)((longlong)param_1 + 0xb60) = 0x41800000;
  *(undefined8 *)((longlong)param_1 + 0xb50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb58) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0x41800000;
  *(undefined8 *)((longlong)param_1 + 0xb6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb78) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xb90) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xba0) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xba4) = 2;
  *(undefined8 *)((longlong)param_1 + 0xba8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbb0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 3000) = 2;
  *(undefined8 *)((longlong)param_1 + 0xbbc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbc8) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xbcc) = 2;
  *(undefined4 *)((longlong)param_1 + 0xbd0) = 0x3f800000;
  return;
}

// ConstructForTests<FDockTabStyle> @ 14252f140

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDockTabStyle>(void *param_1)

{
  FTextBlockStyle *pFVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FDockTabStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3a0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x450));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x500));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x5b0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x660));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x710));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x7c0));
  pFVar1 = FTextBlockStyle::GetDefault();
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x870),pFVar1);
  *(undefined4 *)((longlong)param_1 + 0xb60) = 0x41800000;
  *(undefined8 *)((longlong)param_1 + 0xb50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb58) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0x41800000;
  *(undefined8 *)((longlong)param_1 + 0xb6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb78) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xb90) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xba0) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xba4) = 2;
  *(undefined8 *)((longlong)param_1 + 0xba8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbb0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 3000) = 2;
  *(undefined8 *)((longlong)param_1 + 0xbbc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbc8) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xbcc) = 2;
  *(undefined4 *)((longlong)param_1 + 0xbd0) = 0x3f800000;
  return;
}

// Destruct<FDockTabStyle> @ 14252f150

void __cdecl UE::CoreUObject::Private::Destruct<FDockTabStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDockTabStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x870));
  *(undefined ***)((longlong)param_1 + 0x7c0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x860));
  *(undefined ***)((longlong)param_1 + 0x710) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x7b0));
  *(undefined ***)((longlong)param_1 + 0x660) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x700));
  *(undefined ***)((longlong)param_1 + 0x5b0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x650));
  *(undefined ***)((longlong)param_1 + 0x500) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x5a0));
  *(undefined ***)((longlong)param_1 + 0x450) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4f0));
  *(undefined ***)((longlong)param_1 + 0x3a0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x440));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// StructuredSerializeFromMismatchedTag<FSlateSound> @ 14252f160

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FSlateSound>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined8 local_res8;
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    local_res8 = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res8);
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = local_res8;
    *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    return true;
  }
  return false;
}

// Copy<FDockTabStyle> @ 14252f230

bool __cdecl UE::CoreUObject::Private::Copy<FDockTabStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x10),(FButtonStyle *)((longlong)param_2 + 0x10)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x3a0),(FSlateBrush *)((longlong)param_2 + 0x3a0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x450),(FSlateBrush *)((longlong)param_2 + 0x450)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x500),(FSlateBrush *)((longlong)param_2 + 0x500)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x5b0),(FSlateBrush *)((longlong)param_2 + 0x5b0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x660),(FSlateBrush *)((longlong)param_2 + 0x660)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x710),(FSlateBrush *)((longlong)param_2 + 0x710)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x7c0),(FSlateBrush *)((longlong)param_2 + 0x7c0)
              );
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)param_1 + 0x870),
               (FTextBlockStyle *)((longlong)param_2 + 0x870));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb58);
    *(undefined8 *)((longlong)param_1 + 0xb50) = *(undefined8 *)((longlong)param_2 + 0xb50);
    *(undefined8 *)((longlong)param_1 + 0xb58) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xb60) = *(undefined8 *)((longlong)param_2 + 0xb60);
    *(undefined4 *)((longlong)param_1 + 0xb68) = *(undefined4 *)((longlong)param_2 + 0xb68);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb74);
    *(undefined8 *)((longlong)param_1 + 0xb6c) = *(undefined8 *)((longlong)param_2 + 0xb6c);
    *(undefined8 *)((longlong)param_1 + 0xb74) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xb7c) = *(undefined4 *)((longlong)param_2 + 0xb7c);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb88);
    *(undefined8 *)((longlong)param_1 + 0xb80) = *(undefined8 *)((longlong)param_2 + 0xb80);
    *(undefined8 *)((longlong)param_1 + 0xb88) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xb90) = *(undefined4 *)((longlong)param_2 + 0xb90);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb9c);
    *(undefined8 *)((longlong)param_1 + 0xb94) = *(undefined8 *)((longlong)param_2 + 0xb94);
    *(undefined8 *)((longlong)param_1 + 0xb9c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xba4) = *(undefined4 *)((longlong)param_2 + 0xba4);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xbb0);
    *(undefined8 *)((longlong)param_1 + 0xba8) = *(undefined8 *)((longlong)param_2 + 0xba8);
    *(undefined8 *)((longlong)param_1 + 0xbb0) = uVar1;
    *(undefined4 *)((longlong)param_1 + 3000) = *(undefined4 *)((longlong)param_2 + 3000);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xbc4);
    *(undefined8 *)((longlong)param_1 + 0xbbc) = *(undefined8 *)((longlong)param_2 + 0xbbc);
    *(undefined8 *)((longlong)param_1 + 0xbc4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xbcc) = *(undefined4 *)((longlong)param_2 + 0xbcc);
    *(undefined4 *)((longlong)param_1 + 0xbd0) = *(undefined4 *)((longlong)param_2 + 0xbd0);
    param_1 = (void *)((longlong)param_1 + 0xbe0);
    param_2 = (void *)((longlong)param_2 + 0xbe0);
  }
  return true;
}

// Construct<FHyperlinkStyle> @ 14252f420

void __cdecl UE::CoreUObject::Private::Construct<FHyperlinkStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FHyperlinkStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x3a0));
  *(undefined8 *)((longlong)param_1 + 0x680) = 0;
  *(undefined8 *)((longlong)param_1 + 0x688) = 0;
  return;
}

// ConstructForTests<FHyperlinkStyle> @ 14252f470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHyperlinkStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FHyperlinkStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x3a0));
  *(undefined8 *)((longlong)param_1 + 0x680) = 0;
  *(undefined8 *)((longlong)param_1 + 0x688) = 0;
  return;
}

// Destruct<FHyperlinkStyle> @ 14252f4c0

void __cdecl UE::CoreUObject::Private::Destruct<FHyperlinkStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FHyperlinkStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x3a0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FHyperlinkStyle> @ 14252f500

bool __cdecl
UE::CoreUObject::Private::Copy<FHyperlinkStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x10),(FButtonStyle *)((longlong)param_2 + 0x10)
              );
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)param_1 + 0x3a0),
               (FTextBlockStyle *)((longlong)param_2 + 0x3a0));
    puVar1 = (undefined8 *)((longlong)param_2 + 0x680);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x688);
    param_2 = (void *)((longlong)param_2 + 0x690);
    *(undefined8 *)((longlong)param_1 + 0x680) = *puVar1;
    *(undefined8 *)((longlong)param_1 + 0x688) = uVar2;
    param_1 = (void *)((longlong)param_1 + 0x690);
  }
  return true;
}

// Construct<FHeaderRowStyle> @ 14252f660

void __cdecl UE::CoreUObject::Private::Construct<FHeaderRowStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FHeaderRowStyle__6B_;
  FTableColumnHeaderStyle::FTableColumnHeaderStyle
            ((FTableColumnHeaderStyle *)((longlong)param_1 + 0x10));
  FTableColumnHeaderStyle::FTableColumnHeaderStyle
            ((FTableColumnHeaderStyle *)((longlong)param_1 + 0x650));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0xc90));
  *(undefined ***)((longlong)param_1 + 0xc90) = &___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xca0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xd50));
  *(undefined4 *)((longlong)param_1 + 0xe00) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xe10));
  *(undefined8 *)((longlong)param_1 + 0xec0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xed0) = 0;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xee0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined4 *)((longlong)param_1 + 0xf90) = 0;
  return;
}

// ConstructForTests<FHeaderRowStyle> @ 14252f670

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHeaderRowStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FHeaderRowStyle__6B_;
  FTableColumnHeaderStyle::FTableColumnHeaderStyle
            ((FTableColumnHeaderStyle *)((longlong)param_1 + 0x10));
  FTableColumnHeaderStyle::FTableColumnHeaderStyle
            ((FTableColumnHeaderStyle *)((longlong)param_1 + 0x650));
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0xc90));
  *(undefined ***)((longlong)param_1 + 0xc90) = &___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xca0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xd50));
  *(undefined4 *)((longlong)param_1 + 0xe00) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xe10));
  *(undefined8 *)((longlong)param_1 + 0xec0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xed0) = 0;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xee0),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined4 *)((longlong)param_1 + 0xf90) = 0;
  return;
}

// Destruct<FHeaderRowStyle> @ 14252f680

void __cdecl UE::CoreUObject::Private::Destruct<FHeaderRowStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FHeaderRowStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xee0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xf80));
  *(undefined ***)((longlong)param_1 + 0xe10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xeb0));
  *(undefined ***)((longlong)param_1 + 0xd50) = &___7FSlateBrush__6B_;
  *(FSlateWidgetStyle *)((longlong)param_1 + 0xc90) = (FSlateWidgetStyle)&___7FSplitterStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xdf0));
  *(undefined ***)((longlong)param_1 + 0xca0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xd40));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0xc90));
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle
            ((FTableColumnHeaderStyle *)((longlong)param_1 + 0x650));
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle
            ((FTableColumnHeaderStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FHeaderRowStyle> @ 14252f6d0

bool __cdecl
UE::CoreUObject::Private::Copy<FHeaderRowStyle>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  pvVar2 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FTableColumnHeaderStyle::operator=
              ((FTableColumnHeaderStyle *)((longlong)pvVar4 + 0x10),
               (FTableColumnHeaderStyle *)((longlong)pvVar2 + 0x10));
    FTableColumnHeaderStyle::operator=
              ((FTableColumnHeaderStyle *)((longlong)pvVar4 + 0x650),
               (FTableColumnHeaderStyle *)((longlong)pvVar2 + 0x650));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar4 + 0xca0),
               (FSlateBrush *)((longlong)pvVar4 + (longlong)param_2 + (0xca0 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar4 + 0xd50),
               (FSlateBrush *)((longlong)pvVar4 + (longlong)param_2 + (0xd50 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar4 + 0xe00) = *(undefined4 *)((longlong)pvVar2 + 0xe00);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar4 + 0xe10),(FSlateBrush *)((longlong)pvVar2 + 0xe10));
    uVar3 = *(undefined8 *)((longlong)pvVar2 + 0xec8);
    *(undefined8 *)((longlong)pvVar4 + 0xec0) = *(undefined8 *)((longlong)pvVar2 + 0xec0);
    *(undefined8 *)((longlong)pvVar4 + 0xec8) = uVar3;
    *(undefined4 *)((longlong)pvVar4 + 0xed0) = *(undefined4 *)((longlong)pvVar2 + 0xed0);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar4 + 0xee0),(FSlateBrush *)((longlong)pvVar2 + 0xee0));
    puVar1 = (undefined4 *)((longlong)pvVar2 + 0xf90);
    pvVar2 = (void *)((longlong)pvVar2 + 4000);
    *(undefined4 *)((longlong)pvVar4 + 0xf90) = *puVar1;
    pvVar4 = (void *)((longlong)pvVar4 + 4000);
  }
  return true;
}

// Construct<FComboBoxStyle> @ 14252f810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FComboBoxStyle>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x10));
  uVar2 = _UNK_15076b1f8;
  uVar1 = ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x570) = 0;
  *(undefined8 *)((longlong)param_1 + 0x578) = 0;
  *(undefined8 *)((longlong)param_1 + 0x580) = 0;
  *(undefined8 *)((longlong)param_1 + 0x588) = 0;
  *(undefined8 *)((longlong)param_1 + 0x590) = 0;
  *(undefined8 *)((longlong)param_1 + 0x598) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5a0) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x5a8) = 0x40800000;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x530) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x538) = uVar2;
  return;
}

// ConstructForTests<FComboBoxStyle> @ 14252f820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComboBoxStyle>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x10));
  uVar2 = _UNK_15076b1f8;
  uVar1 = ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x570) = 0;
  *(undefined8 *)((longlong)param_1 + 0x578) = 0;
  *(undefined8 *)((longlong)param_1 + 0x580) = 0;
  *(undefined8 *)((longlong)param_1 + 0x588) = 0;
  *(undefined8 *)((longlong)param_1 + 0x590) = 0;
  *(undefined8 *)((longlong)param_1 + 0x598) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5a0) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x5a8) = 0x40800000;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x530) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x538) = uVar2;
  return;
}

// Destruct<FComboBoxStyle> @ 14252f830

void __cdecl UE::CoreUObject::Private::Destruct<FComboBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FComboBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x480) = &___7FSlateBrush__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FComboButtonStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x520));
  *(undefined ***)((longlong)param_1 + 0x3b0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x450));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x20));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FComboBoxStyle> @ 14252f840

bool __cdecl UE::CoreUObject::Private::Copy<FComboBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FComboButtonStyle::operator=
              ((FComboButtonStyle *)((longlong)param_1 + 0x10),
               (FComboButtonStyle *)((longlong)param_2 + 0x10));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x570) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x570));
    }
    *(undefined8 *)((longlong)param_1 + 0x570) = *(undefined8 *)((longlong)param_2 + 0x570);
    *(undefined8 *)((longlong)param_1 + 0x578) = *(undefined8 *)((longlong)param_2 + 0x578);
    *(undefined8 *)((longlong)param_1 + 0x580) = *(undefined8 *)((longlong)param_2 + 0x580);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x588) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x588));
    }
    *(undefined8 *)((longlong)param_1 + 0x588) = *(undefined8 *)((longlong)param_2 + 0x588);
    *(undefined8 *)((longlong)param_1 + 0x590) = *(undefined8 *)((longlong)param_2 + 0x590);
    *(undefined8 *)((longlong)param_1 + 0x598) = *(undefined8 *)((longlong)param_2 + 0x598);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x5a8);
    *(undefined8 *)((longlong)param_1 + 0x5a0) = *(undefined8 *)((longlong)param_2 + 0x5a0);
    *(undefined8 *)((longlong)param_1 + 0x5a8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x5b8);
    *(undefined8 *)((longlong)param_1 + 0x5b0) = *(undefined8 *)((longlong)param_2 + 0x5b0);
    *(undefined8 *)((longlong)param_1 + 0x5b8) = uVar1;
    param_1 = (void *)((longlong)param_1 + 0x5c0);
    param_2 = (void *)((longlong)param_2 + 0x5c0);
  }
  return true;
}

// Construct<FTableColumnHeaderStyle> @ 14252fa90

void __cdecl UE::CoreUObject::Private::Construct<FTableColumnHeaderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTableColumnHeaderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4e0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x590));
  return;
}

// ConstructForTests<FTableColumnHeaderStyle> @ 14252faa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTableColumnHeaderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTableColumnHeaderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4e0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x590));
  return;
}

// Destruct<FTableColumnHeaderStyle> @ 14252fab0

void __cdecl UE::CoreUObject::Private::Destruct<FTableColumnHeaderStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableColumnHeaderStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x590) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x630));
  *(undefined ***)((longlong)param_1 + 0x4e0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x580));
  *(undefined ***)((longlong)param_1 + 0x430) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4d0));
  *(undefined ***)((longlong)param_1 + 0x380) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FTableColumnHeaderStyle> @ 14252fac0

bool __cdecl
UE::CoreUObject::Private::Copy<FTableColumnHeaderStyle>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x380),(FSlateBrush *)((longlong)param_2 + 0x380)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x430),(FSlateBrush *)((longlong)param_2 + 0x430)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x4e0),(FSlateBrush *)((longlong)param_2 + 0x4e0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x590),(FSlateBrush *)((longlong)param_2 + 0x590)
              );
    param_2 = (void *)((longlong)param_2 + 0x640);
    param_1 = (void *)((longlong)param_1 + 0x640);
  }
  return true;
}

// Construct<FComboButtonStyle> @ 14252fbd0

void __cdecl UE::CoreUObject::Private::Construct<FComboButtonStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FComboButtonStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3a0));
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x450))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x458))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x470));
  *(undefined4 *)((longlong)param_1 + 0x530) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x520) = 0;
  *(undefined8 *)((longlong)param_1 + 0x528) = 0;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x538) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x540) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x548) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x550) = 2;
  return;
}

// ConstructForTests<FComboButtonStyle> @ 14252fbe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComboButtonStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FComboButtonStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x3a0));
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x450))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x458))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x470));
  *(undefined4 *)((longlong)param_1 + 0x530) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x520) = 0;
  *(undefined8 *)((longlong)param_1 + 0x528) = 0;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x538) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x540) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x548) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x550) = 2;
  return;
}

// Destruct<FComboButtonStyle> @ 14252fbf0

void __cdecl UE::CoreUObject::Private::Destruct<FComboButtonStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FComboButtonStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x470) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x510));
  *(undefined ***)((longlong)param_1 + 0x3a0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x440));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FComboButtonStyle> @ 14252fc60

bool __cdecl
UE::CoreUObject::Private::Copy<FComboButtonStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x10),(FButtonStyle *)((longlong)param_2 + 0x10)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x3a0),(FSlateBrush *)((longlong)param_2 + 0x3a0)
              );
    *(undefined8 *)((longlong)param_1 + 0x450) = *(undefined8 *)((longlong)param_2 + 0x450);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x460);
    *(undefined8 *)((longlong)param_1 + 0x458) = *(undefined8 *)((longlong)param_2 + 0x458);
    *(undefined8 *)((longlong)param_1 + 0x460) = uVar1;
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x470),(FSlateBrush *)((longlong)param_2 + 0x470)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x528);
    *(undefined8 *)((longlong)param_1 + 0x520) = *(undefined8 *)((longlong)param_2 + 0x520);
    *(undefined8 *)((longlong)param_1 + 0x528) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x538);
    *(undefined8 *)((longlong)param_1 + 0x530) = *(undefined8 *)((longlong)param_2 + 0x530);
    *(undefined8 *)((longlong)param_1 + 0x538) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x548);
    *(undefined8 *)((longlong)param_1 + 0x540) = *(undefined8 *)((longlong)param_2 + 0x540);
    *(undefined8 *)((longlong)param_1 + 0x548) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x550) = *(undefined1 *)((longlong)param_2 + 0x550);
    param_1 = (void *)((longlong)param_1 + 0x560);
    param_2 = (void *)((longlong)param_2 + 0x560);
  }
  return true;
}

// Construct<FTableRowStyle> @ 14252fe50

void __cdecl UE::CoreUObject::Private::Construct<FTableRowStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTableRowStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  *(undefined1 *)((longlong)param_1 + 0x380) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x390));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x440));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4f0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x5a0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x650));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x700));
  *(undefined8 *)((longlong)param_1 + 0x7b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x7c0) = 2;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x7d4) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x7c4))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x7e0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x890));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x940));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x9f0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xaa0));
  return;
}

// ConstructForTests<FTableRowStyle> @ 14252fe60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTableRowStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTableRowStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  *(undefined1 *)((longlong)param_1 + 0x380) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x390));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x440));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4f0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x5a0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x650));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x700));
  *(undefined8 *)((longlong)param_1 + 0x7b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x7c0) = 2;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x7d4) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x7c4))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x7e0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x890));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x940));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x9f0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xaa0));
  return;
}

// Destruct<FTableRowStyle> @ 14252fe70

void __cdecl UE::CoreUObject::Private::Destruct<FTableRowStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xaa0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb40));
  *(undefined ***)((longlong)param_1 + 0x9f0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa90));
  *(undefined ***)((longlong)param_1 + 0x940) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x9e0));
  *(undefined ***)((longlong)param_1 + 0x890) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x930));
  *(undefined ***)((longlong)param_1 + 0x7e0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x880));
  *(undefined ***)((longlong)param_1 + 0x700) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x7a0));
  *(undefined ***)((longlong)param_1 + 0x650) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x6f0));
  *(undefined ***)((longlong)param_1 + 0x5a0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x640));
  *(undefined ***)((longlong)param_1 + 0x4f0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x590));
  *(undefined ***)((longlong)param_1 + 0x440) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4e0));
  *(undefined ***)((longlong)param_1 + 0x390) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x430));
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FTableRowStyle> @ 14252fe80

bool __cdecl UE::CoreUObject::Private::Copy<FTableRowStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    *(undefined1 *)((longlong)param_1 + 0x380) = *(undefined1 *)((longlong)param_2 + 0x380);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x390),(FSlateBrush *)((longlong)param_2 + 0x390)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x440),(FSlateBrush *)((longlong)param_2 + 0x440)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x4f0),(FSlateBrush *)((longlong)param_2 + 0x4f0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x5a0),(FSlateBrush *)((longlong)param_2 + 0x5a0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x650),(FSlateBrush *)((longlong)param_2 + 0x650)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x700),(FSlateBrush *)((longlong)param_2 + 0x700)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x7b8);
    *(undefined8 *)((longlong)param_1 + 0x7b0) = *(undefined8 *)((longlong)param_2 + 0x7b0);
    *(undefined8 *)((longlong)param_1 + 0x7b8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x7c0) = *(undefined4 *)((longlong)param_2 + 0x7c0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x7cc);
    *(undefined8 *)((longlong)param_1 + 0x7c4) = *(undefined8 *)((longlong)param_2 + 0x7c4);
    *(undefined8 *)((longlong)param_1 + 0x7cc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x7d4) = *(undefined4 *)((longlong)param_2 + 0x7d4);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x7e0),(FSlateBrush *)((longlong)param_2 + 0x7e0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x890),(FSlateBrush *)((longlong)param_2 + 0x890)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x940),(FSlateBrush *)((longlong)param_2 + 0x940)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x9f0),(FSlateBrush *)((longlong)param_2 + 0x9f0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xaa0),(FSlateBrush *)((longlong)param_2 + 0xaa0)
              );
    param_2 = (void *)((longlong)param_2 + 0xb50);
    param_1 = (void *)((longlong)param_1 + 0xb50);
  }
  return true;
}

// Construct<FButtonStyle> @ 142530060

void __cdecl UE::CoreUObject::Private::Construct<FButtonStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FButtonStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x368) = 0;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2e0) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x308) = 2;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x318) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x31c) = 2;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x220),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// ConstructForTests<FButtonStyle> @ 142530070

void __cdecl UE::CoreUObject::Private::ConstructForTests<FButtonStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FButtonStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x368) = 0;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2e0) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2f0) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x308) = 2;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x318) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x31c) = 2;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x220),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// Destruct<FButtonStyle> @ 142530080

void __cdecl UE::CoreUObject::Private::Destruct<FButtonStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FButtonStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FButtonStyle> @ 142530390

bool __cdecl UE::CoreUObject::Private::Copy<FButtonStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x2d8);
    *(undefined8 *)((longlong)param_1 + 0x2d0) = *(undefined8 *)((longlong)param_2 + 0x2d0);
    *(undefined8 *)((longlong)param_1 + 0x2d8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2e0) = *(undefined4 *)((longlong)param_2 + 0x2e0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x2ec);
    *(undefined8 *)((longlong)param_1 + 0x2e4) = *(undefined8 *)((longlong)param_2 + 0x2e4);
    *(undefined8 *)((longlong)param_1 + 0x2ec) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_2 + 0x2f4);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x300);
    *(undefined8 *)((longlong)param_1 + 0x2f8) = *(undefined8 *)((longlong)param_2 + 0x2f8);
    *(undefined8 *)((longlong)param_1 + 0x300) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x308) = *(undefined4 *)((longlong)param_2 + 0x308);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x314);
    *(undefined8 *)((longlong)param_1 + 0x30c) = *(undefined8 *)((longlong)param_2 + 0x30c);
    *(undefined8 *)((longlong)param_1 + 0x314) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)((longlong)param_2 + 0x31c);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x328);
    *(undefined8 *)((longlong)param_1 + 800) = *(undefined8 *)((longlong)param_2 + 800);
    *(undefined8 *)((longlong)param_1 + 0x328) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x338);
    *(undefined8 *)((longlong)param_1 + 0x330) = *(undefined8 *)((longlong)param_2 + 0x330);
    *(undefined8 *)((longlong)param_1 + 0x338) = uVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x340) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x340));
    }
    *(undefined8 *)((longlong)param_1 + 0x340) = *(undefined8 *)((longlong)param_2 + 0x340);
    *(undefined8 *)((longlong)param_1 + 0x348) = *(undefined8 *)((longlong)param_2 + 0x348);
    *(undefined8 *)((longlong)param_1 + 0x350) = *(undefined8 *)((longlong)param_2 + 0x350);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x358) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x358));
    }
    *(undefined8 *)((longlong)param_1 + 0x358) = *(undefined8 *)((longlong)param_2 + 0x358);
    *(undefined8 *)((longlong)param_1 + 0x360) = *(undefined8 *)((longlong)param_2 + 0x360);
    *(undefined8 *)((longlong)param_1 + 0x368) = *(undefined8 *)((longlong)param_2 + 0x368);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x370) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x370));
    }
    *(undefined8 *)((longlong)param_1 + 0x370) = *(undefined8 *)((longlong)param_2 + 0x370);
    *(undefined8 *)((longlong)param_1 + 0x378) = *(undefined8 *)((longlong)param_2 + 0x378);
    *(undefined8 *)((longlong)param_1 + 0x380) = *(undefined8 *)((longlong)param_2 + 0x380);
    param_1 = (void *)((longlong)param_1 + 0x390);
    param_2 = (void *)((longlong)param_2 + 0x390);
  }
  return true;
}

// Construct<FTableViewStyle> @ 142530920

void __cdecl UE::CoreUObject::Private::Construct<FTableViewStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 aTStackX_8 [4];
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTableViewStyle__6B_;
  aTStackX_8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&aTStackX_8[0]._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// ConstructForTests<FTableViewStyle> @ 142530970

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTableViewStyle>(void *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 aTStackX_8 [4];
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTableViewStyle__6B_;
  aTStackX_8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&aTStackX_8[0]._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10),pFVar1);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// Destruct<FTableViewStyle> @ 142530980

void __cdecl UE::CoreUObject::Private::Destruct<FTableViewStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableViewStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FTableViewStyle> @ 1425309c0

bool __cdecl
UE::CoreUObject::Private::Copy<FTableViewStyle>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FSlateBrush *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (0x10 - (longlong)param_1);
      this = (FSlateBrush *)((longlong)pvVar2 + 0x10);
      pvVar2 = (void *)((longlong)pvVar2 + 0xc0);
      FSlateBrush::operator=(this,(FSlateBrush *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTextBlockStyle> @ 142530a20

void __cdecl UE::CoreUObject::Private::Construct<FTextBlockStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x7c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x84))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 2;
  FVar1 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xa8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined2 *)((longlong)param_1 + 0x2d0) = 0;
  return;
}

// ConstructForTests<FTextBlockStyle> @ 142530a30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTextBlockStyle>(void *param_1)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x7c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x84))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 2;
  FVar1 = FLinearColor::Black;
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xa8))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined2 *)((longlong)param_1 + 0x2d0) = 0;
  return;
}

// Destruct<FTextBlockStyle> @ 142530a40

void __cdecl UE::CoreUObject::Private::Destruct<FTextBlockStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTextBlockStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FTextBlockStyle> @ 142530a50

bool __cdecl
UE::CoreUObject::Private::Copy<FTextBlockStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateFontInfo::operator=
              ((FSlateFontInfo *)((longlong)param_1 + 8),(FSlateFontInfo *)((longlong)param_2 + 8));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x78);
    *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x8c);
    *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)((longlong)param_2 + 0x84);
    *(undefined8 *)((longlong)param_1 + 0x8c) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x9c);
    *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
    *(undefined8 *)((longlong)param_1 + 0x9c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_2 + 0xa8);
    *(undefined8 *)((longlong)param_1 + 0xb0) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0xb8);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    *(undefined1 *)((longlong)param_1 + 0x2d0) = *(undefined1 *)((longlong)param_2 + 0x2d0);
    *(undefined1 *)((longlong)param_1 + 0x2d1) = *(undefined1 *)((longlong)param_2 + 0x2d1);
    param_1 = (void *)((longlong)param_1 + 0x2e0);
    param_2 = (void *)((longlong)param_2 + 0x2e0);
  }
  return true;
}

// Construct<FSplitterStyle> @ 142530c00

void __cdecl UE::CoreUObject::Private::Construct<FSplitterStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  return;
}

// ConstructForTests<FSplitterStyle> @ 142530c40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSplitterStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  return;
}

// Destruct<FSplitterStyle> @ 142530c80

void __cdecl UE::CoreUObject::Private::Destruct<FSplitterStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSplitterStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSplitterStyle> @ 142530ce0

bool __cdecl UE::CoreUObject::Private::Copy<FSplitterStyle>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar1 + 0x10),
               (FSlateBrush *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)pvVar1 + 0xc0),
               (FSlateBrush *)((longlong)pvVar1 + (longlong)param_2 + (0xc0 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x170);
  }
  return true;
}

// Construct<FCheckBoxStyle> @ 142530db0

void __cdecl UE::CoreUObject::Private::Construct<FCheckBoxStyle>(void *param_1)

{
  FLinearColor FVar1;
  FSlateBrush *pFVar2;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FCheckBoxStyle__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4e0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x590));
  *(undefined8 *)((longlong)param_1 + 0x640) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x648) = 0;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x650),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x700),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x7b0),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined8 *)((longlong)param_1 + 0x860) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x868) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x86c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x870) = 2;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x880) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x884) = 2;
  *(undefined8 *)((longlong)param_1 + 0x888) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x890) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x894) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x898) = 2;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8a8) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x8ac) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x8c0) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x8d4) = 2;
  *(undefined2 *)((longlong)param_1 + 0x8e8) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8d0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8e0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = 0x3f800000;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x8fc) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x8ec))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x908) = 0;
  *(undefined8 *)((longlong)param_1 + 0x910) = 0;
  *(undefined8 *)((longlong)param_1 + 0x918) = 0;
  *(undefined8 *)((longlong)param_1 + 0x920) = 0;
  *(undefined8 *)((longlong)param_1 + 0x928) = 0;
  *(undefined8 *)((longlong)param_1 + 0x930) = 0;
  *(undefined8 *)((longlong)param_1 + 0x938) = 0;
  *(undefined8 *)((longlong)param_1 + 0x940) = 0;
  return;
}

// ConstructForTests<FCheckBoxStyle> @ 142530dc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCheckBoxStyle>(void *param_1)

{
  FLinearColor FVar1;
  FSlateBrush *pFVar2;
  TVector2<float>_u_0 TStackX_8;
  undefined **appuStack_b8 [20];
  TReferenceControllerBase<1> *pTStack_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FCheckBoxStyle__6B_;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x4e0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x590));
  *(undefined8 *)((longlong)param_1 + 0x640) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x648) = 0;
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x650),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x700),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)appuStack_b8,
                      (FDeprecateVector2DParameter *)&TStackX_8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x7b0),pFVar2);
  appuStack_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined8 *)((longlong)param_1 + 0x860) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x868) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x86c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x870) = 2;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x880) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x884) = 2;
  *(undefined8 *)((longlong)param_1 + 0x888) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x890) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x894) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x898) = 2;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8a8) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x8ac) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8b8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x8c0) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x8d4) = 2;
  *(undefined2 *)((longlong)param_1 + 0x8e8) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8d0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8e0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = 0x3f800000;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)param_1 + 0x8fc) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x8ec))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x908) = 0;
  *(undefined8 *)((longlong)param_1 + 0x910) = 0;
  *(undefined8 *)((longlong)param_1 + 0x918) = 0;
  *(undefined8 *)((longlong)param_1 + 0x920) = 0;
  *(undefined8 *)((longlong)param_1 + 0x928) = 0;
  *(undefined8 *)((longlong)param_1 + 0x930) = 0;
  *(undefined8 *)((longlong)param_1 + 0x938) = 0;
  *(undefined8 *)((longlong)param_1 + 0x940) = 0;
  return;
}

// Destruct<FCheckBoxStyle> @ 142530dd0

void __cdecl UE::CoreUObject::Private::Destruct<FCheckBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCheckBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x7b0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x850));
  *(undefined ***)((longlong)param_1 + 0x700) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x7a0));
  *(undefined ***)((longlong)param_1 + 0x650) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x6f0));
  *(undefined ***)((longlong)param_1 + 0x590) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x630));
  *(undefined ***)((longlong)param_1 + 0x4e0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x580));
  *(undefined ***)((longlong)param_1 + 0x430) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4d0));
  *(undefined ***)((longlong)param_1 + 0x380) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FCheckBoxStyle> @ 142530e20

bool __cdecl UE::CoreUObject::Private::Copy<FCheckBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x380),(FSlateBrush *)((longlong)param_2 + 0x380)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x430),(FSlateBrush *)((longlong)param_2 + 0x430)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x4e0),(FSlateBrush *)((longlong)param_2 + 0x4e0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x590),(FSlateBrush *)((longlong)param_2 + 0x590)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x648);
    *(undefined8 *)((longlong)param_1 + 0x640) = *(undefined8 *)((longlong)param_2 + 0x640);
    *(undefined8 *)((longlong)param_1 + 0x648) = uVar1;
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x650),(FSlateBrush *)((longlong)param_2 + 0x650)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x700),(FSlateBrush *)((longlong)param_2 + 0x700)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x7b0),(FSlateBrush *)((longlong)param_2 + 0x7b0)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x868);
    *(undefined8 *)((longlong)param_1 + 0x860) = *(undefined8 *)((longlong)param_2 + 0x860);
    *(undefined8 *)((longlong)param_1 + 0x868) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x870) = *(undefined4 *)((longlong)param_2 + 0x870);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x87c);
    *(undefined8 *)((longlong)param_1 + 0x874) = *(undefined8 *)((longlong)param_2 + 0x874);
    *(undefined8 *)((longlong)param_1 + 0x87c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x884) = *(undefined4 *)((longlong)param_2 + 0x884);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x890);
    *(undefined8 *)((longlong)param_1 + 0x888) = *(undefined8 *)((longlong)param_2 + 0x888);
    *(undefined8 *)((longlong)param_1 + 0x890) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x898) = *(undefined4 *)((longlong)param_2 + 0x898);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x8a4);
    *(undefined8 *)((longlong)param_1 + 0x89c) = *(undefined8 *)((longlong)param_2 + 0x89c);
    *(undefined8 *)((longlong)param_1 + 0x8a4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x8ac) = *(undefined4 *)((longlong)param_2 + 0x8ac);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x8b8);
    *(undefined8 *)((longlong)param_1 + 0x8b0) = *(undefined8 *)((longlong)param_2 + 0x8b0);
    *(undefined8 *)((longlong)param_1 + 0x8b8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x8c0) = *(undefined4 *)((longlong)param_2 + 0x8c0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x8cc);
    *(undefined8 *)((longlong)param_1 + 0x8c4) = *(undefined8 *)((longlong)param_2 + 0x8c4);
    *(undefined8 *)((longlong)param_1 + 0x8cc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x8d4) = *(undefined4 *)((longlong)param_2 + 0x8d4);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x8e0);
    *(undefined8 *)((longlong)param_1 + 0x8d8) = *(undefined8 *)((longlong)param_2 + 0x8d8);
    *(undefined8 *)((longlong)param_1 + 0x8e0) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x8e8) = *(undefined4 *)((longlong)param_2 + 0x8e8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x8f4);
    *(undefined8 *)((longlong)param_1 + 0x8ec) = *(undefined8 *)((longlong)param_2 + 0x8ec);
    *(undefined8 *)((longlong)param_1 + 0x8f4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x8fc) = *(undefined4 *)((longlong)param_2 + 0x8fc);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x900) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x900));
    }
    *(undefined8 *)((longlong)param_1 + 0x900) = *(undefined8 *)((longlong)param_2 + 0x900);
    *(undefined8 *)((longlong)param_1 + 0x908) = *(undefined8 *)((longlong)param_2 + 0x908);
    *(undefined8 *)((longlong)param_1 + 0x910) = *(undefined8 *)((longlong)param_2 + 0x910);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x918) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x918));
    }
    *(undefined8 *)((longlong)param_1 + 0x918) = *(undefined8 *)((longlong)param_2 + 0x918);
    *(undefined8 *)((longlong)param_1 + 0x920) = *(undefined8 *)((longlong)param_2 + 0x920);
    *(undefined8 *)((longlong)param_1 + 0x928) = *(undefined8 *)((longlong)param_2 + 0x928);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x930) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x930));
    }
    *(undefined8 *)((longlong)param_1 + 0x930) = *(undefined8 *)((longlong)param_2 + 0x930);
    *(undefined8 *)((longlong)param_1 + 0x938) = *(undefined8 *)((longlong)param_2 + 0x938);
    *(undefined8 *)((longlong)param_1 + 0x940) = *(undefined8 *)((longlong)param_2 + 0x940);
    param_1 = (void *)((longlong)param_1 + 0x950);
    param_2 = (void *)((longlong)param_2 + 0x950);
  }
  return true;
}

// Construct<FSpinBoxStyle> @ 1425314a0

void __cdecl UE::CoreUObject::Private::Construct<FSpinBoxStyle>(void *param_1)

{
  TVector2<float>_u_0 TStackX_8;
  FMargin FStack_d8;
  FSlateBrush FStack_c8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSpinBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_d8.Left = 0.0;
  FStack_d8.Top = 0.0;
  FStack_d8.Right = 0.0;
  FStack_d8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_c8,NoDrawType,(FName)0x0,&FStack_d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_c8.bIsSet = '\0';
  FStack_c8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),&FStack_c8);
  FStack_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_d8.Left = 0.0;
  FStack_d8.Top = 0.0;
  FStack_d8.Right = 0.0;
  FStack_d8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_c8,NoDrawType,(FName)0x0,&FStack_d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_c8.bIsSet = '\0';
  FStack_c8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0),&FStack_c8);
  FStack_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430));
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4e8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x4f0) = 2;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4f8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x500) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x508) = 0;
  *(undefined4 *)((longlong)param_1 + 0x510) = 0;
  return;
}

// ConstructForTests<FSpinBoxStyle> @ 1425314b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSpinBoxStyle>(void *param_1)

{
  TVector2<float>_u_0 TStackX_8;
  FMargin FStack_d8;
  FSlateBrush FStack_c8;
  
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSpinBoxStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_d8.Left = 0.0;
  FStack_d8.Top = 0.0;
  FStack_d8.Right = 0.0;
  FStack_d8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_c8,NoDrawType,(FName)0x0,&FStack_d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_c8.bIsSet = '\0';
  FStack_c8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0),&FStack_c8);
  FStack_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  TStackX_8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_d8.Left = 0.0;
  FStack_d8.Top = 0.0;
  FStack_d8.Right = 0.0;
  FStack_d8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_c8,NoDrawType,(FName)0x0,&FStack_d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStackX_8._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  FStack_c8.bIsSet = '\0';
  FStack_c8._padding_ = (longlong)&___7FSlateOptionalBrush__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0),&FStack_c8);
  FStack_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x380));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x430));
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4e8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x4f0) = 2;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4f8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x500) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x508) = 0;
  *(undefined4 *)((longlong)param_1 + 0x510) = 0;
  return;
}

// Destruct<FSpinBoxStyle> @ 1425314c0

void __cdecl UE::CoreUObject::Private::Destruct<FSpinBoxStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSpinBoxStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x430) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x4d0));
  *(undefined ***)((longlong)param_1 + 0x380) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x420));
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSpinBoxStyle> @ 142531510

bool __cdecl UE::CoreUObject::Private::Copy<FSpinBoxStyle>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x380),(FSlateBrush *)((longlong)param_2 + 0x380)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x430),(FSlateBrush *)((longlong)param_2 + 0x430)
              );
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x4e8);
    *(undefined8 *)((longlong)param_1 + 0x4e0) = *(undefined8 *)((longlong)param_2 + 0x4e0);
    *(undefined8 *)((longlong)param_1 + 0x4e8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x4f0) = *(undefined4 *)((longlong)param_2 + 0x4f0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x4fc);
    *(undefined8 *)((longlong)param_1 + 0x4f4) = *(undefined8 *)((longlong)param_2 + 0x4f4);
    *(undefined8 *)((longlong)param_1 + 0x4fc) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x50c);
    *(undefined8 *)((longlong)param_1 + 0x504) = *(undefined8 *)((longlong)param_2 + 0x504);
    *(undefined8 *)((longlong)param_1 + 0x50c) = uVar1;
    param_1 = (void *)((longlong)param_1 + 0x520);
    param_2 = (void *)((longlong)param_2 + 0x520);
  }
  return true;
}

// Construct<FSlateColor> @ 142531760

void __cdecl UE::CoreUObject::Private::Construct<FSlateColor>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSlateColor> @ 142531780

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateColor>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSlateColor> @ 1425317a0

void __cdecl UE::CoreUObject::Private::Destruct<FSlateColor>(void *param_1)

{
  return;
}

// Copy<FSlateColor> @ 1425317f0

bool __cdecl UE::CoreUObject::Private::Copy<FSlateColor>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FSlateColor> @ 142535270

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FSlateColor>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FArchive *this;
  uint *puVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar8;
  FPropertyTypeName local_res8 [2];
  uint local_res20 [2];
  FLinearColor_u_0 local_38;
  uint local_28;
  
  local_res8[0].Index = (param_1->TypeName).Index;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  local_res20[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res20[0];
  bVar6 = FPropertyTypeName::IsStruct(local_res8,FVar4);
  if (bVar6) {
    this = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar3 = (uint *)**(undefined8 **)&this->field_0x8;
    if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar3 + 1) {
      if ((this->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this + 0x188))(this,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this,(uint *)local_res8);
      }
    }
    else {
      local_res8[0].Index = *puVar3;
      **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    }
    local_28 = local_28 & 0xffffff00;
    fVar1 = FLinearColor::sRGBToLinearTable[local_res8[0].Index._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res8[0].Index];
    fVar8 = (float)((uint)local_res8[0].Index >> 0x18) * __real_3b808081;
    *(float *)param_3 = FLinearColor::sRGBToLinearTable[local_res8[0].Index._2_1_];
    *(float *)((longlong)param_3 + 4) = fVar1;
    *(float *)((longlong)param_3 + 8) = fVar2;
    *(float *)((longlong)param_3 + 0xc) = fVar8;
    *(uint *)((longlong)param_3 + 0x10) = local_28;
    return true;
  }
  local_res8[0].Index = (param_1->TypeName).Index;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
  local_res20[1] = 0;
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = local_res20[0];
  bVar6 = FPropertyTypeName::IsStruct(local_res8,FVar5);
  if (bVar6) {
    ::operator<<(param_2,(FLinearColor *)&local_38._s_0);
    local_28 = local_28 & 0xffffff00;
    *(undefined8 *)param_3 = local_38._0_8_;
    *(undefined8 *)((longlong)param_3 + 8) = local_38._8_8_;
    *(uint *)((longlong)param_3 + 0x10) = local_28;
    return true;
  }
  return false;
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_> @ 14253bff0

/* WARNING: Removing unreachable block (ram,0x00014253c037) */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<int>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_> @ 14253c080

void __cdecl
UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// CallbackForFVectorAttribute @ 142568690

TVector2<double> * __cdecl
UE::Slate::Private::CallbackForFVectorAttribute(TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  return __return_storage_ptr__;
}

// CallbackForIntAttribute @ 1425686b0

int __cdecl UE::Slate::Private::CallbackForIntAttribute(int param_1)

{
  return param_1;
}

// Construct<FDeprecateSlateVector2D> @ 1425ad390

void __cdecl UE::CoreUObject::Private::Construct<FDeprecateSlateVector2D>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FDeprecateSlateVector2D> @ 1425ad3a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDeprecateSlateVector2D>(void *param_1)

{
  return;
}

// SerializeSlot<FDeprecateSlateVector2D> @ 1425ad3b0

bool __cdecl
UE::CoreUObject::Private::SerializeSlot<FDeprecateSlateVector2D>
          (FStructuredArchiveSlot param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UE::Math::operator<<(param_1,param_2);
  return true;
}

// StructuredSerializeFromMismatchedTag<FDeprecateSlateVector2D> @ 1425ad410

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FDeprecateSlateVector2D>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FArchive *pFVar6;
  TVector2<float>_u_0 local_res8;
  uint local_res10 [4];
  FSlotBase local_res20;
  TVector2<double>_u_0 local_28;
  
  local_res8._s_0.X = (float)(param_1->TypeName).Index;
  local_res20.StructuredArchive = (FStructuredArchive *)param_2;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  local_res10[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res10[0];
  bVar4 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8._s_0,FVar1);
  if (!bVar4) {
    local_res8._s_0.X = (float)(param_1->TypeName).Index;
    FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
    local_res10[0] = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    local_res10[1] = 0;
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_res10[0];
    bVar4 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8._s_0,FVar2);
    if (!bVar4) {
      local_res8._s_0.X = (float)(param_1->TypeName).Index;
      FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
      local_res10[0] = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
      local_res10[1] = 0;
      FVar3.Number = 0;
      FVar3.ComparisonIndex.Value = local_res10[0];
      bVar4 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8._s_0,FVar3);
      if (!bVar4) {
        return false;
      }
      pFVar6 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res20);
      if (0x3eb < (int)((ulonglong)*(undefined8 *)&pFVar6->field_0x40 >> 0x20)) goto LAB_1425ad45a;
    }
    UE::Math::operator<<
              ((FStructuredArchiveSlot)local_res20.StructuredArchive,
               (TVector2<float> *)&local_res8._s_0);
    *(float *)param_3 = local_res8._s_0.X;
    *(float *)((longlong)param_3 + 4) = local_res8._s_0.Y;
    return true;
  }
LAB_1425ad45a:
  UE::Math::operator<<
            ((FStructuredArchiveSlot)local_res20.StructuredArchive,
             (TVector2<double> *)&local_28._s_0);
  *(float *)param_3 = (float)local_28._s_0.X;
  *(float *)((longlong)param_3 + 4) = (float)local_28._s_0.Y;
  return true;
}

// GetStructTypeHash<FDeprecateSlateVector2D> @ 1425ad550

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FDeprecateSlateVector2D>(void *param_1)

{
  uint uVar1;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,8,0);
  return uVar1;
}

// DereferenceIfNecessary<SWindow,SWindow_*_&> @ 1425b3240

/* WARNING: Enum "Type": Some values do not have unique names */

SWindow * __cdecl UE::Core::Private::DereferenceIfNecessary<SWindow,SWindow_*_&>(SWindow **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_> @ 1425b87e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FSlateAttributeDescriptor::FContainer> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FSlateAttributeDescriptor::FContainer>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_> @ 1425b8880

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_> @ 1425b8950

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_>
          (ushort param_1,ForElementType<FSlateAttributeDescriptor::FContainer> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateAttributeDescriptor::FContainer>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_> @ 1425b8a20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_>
          (ushort param_1,ForElementType<FSlateAttributeMetaData::FGetterItem> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateAttributeMetaData::FGetterItem>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<SWidget_const_,1>_>_> @ 1425b8d50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<SWidget_const_,1>_>_>
          (ushort param_1,ForElementType<TWeakPtr<SWidget_const_,1>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakPtr<SWidget_const_,1>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FName>_> @ 1425b8e20

/* WARNING: Removing unreachable block (ram,0x0001425b8e67) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FName>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_> @ 1425b8eb0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_>
          (uint param_1,uint param_2,ForElementType<FSlateAttributeMetaData::FGetterItem> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FSlateAttributeMetaData::FGetterItem>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_> @ 1425b8f70

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 1425b9170

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FName>_> @ 1425b91f0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FName>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// operator<< @ 1425c2e70

void __cdecl UE::Math::operator<<(FStructuredArchiveSlot param_1,TVector2<float> *param_2)

{
  FArchive *pFVar1;
  float *pfVar2;
  float *pfVar3;
  
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)param_2);
    }
  }
  else {
    (param_2->field0_0x0)._s_0.X = *pfVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->field0_0x0)._s_0.Y;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c2f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
  return;
}

// AddEmptyWidget @ 1425c79e0

TSharedRef<SWidget,1> * __cdecl
UE::Slate::Private::AddEmptyWidget
          (TSharedRef<SWidget,1> *__return_storage_ptr__,TSharedPtr<SVerticalBox,1> *param_1,
          int param_2)

{
  SVerticalBox *pSVar1;
  code *pcVar2;
  SEmptyLeftWidget *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FSlateBaseNamedArgs *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FSlot *this;
  ForAnyElementType FVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res20;
  TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> local_378;
  FName local_360;
  FMemScope local_358;
  FSlot *local_350;
  FString local_348;
  undefined8 local_338;
  FSharedReferencer<1> local_330;
  undefined **local_328;
  undefined8 *local_320;
  SWidget *local_318;
  FSharedReferencer<1> local_310 [4];
  undefined1 local_2f0 [40];
  FSlotArgumentsMixin local_2c8;
  TPanelChildren<SBoxPanel::FSlot> *local_238;
  int local_230;
  FSlateBaseNamedArgs local_228;
  
  ::FString::PrintfImpl(&local_348,L"TagLeafWidget-%d");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_348.Data.ArrayNum != 0) {
    FVar10.Data = local_348.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar10.Data);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FSlateBaseNamedArgs *)SEmptyLeftWidget::FArguments::FArguments((FArguments *)&local_228)
  ;
  pFVar8->_Tag = local_res20;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_360 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_358,&local_360,true);
  TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
            (&local_378,"SEmptyLeftWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateInvalidationWidgetListTest.cpp"
             ,0x35,local_res8);
  FMemScope::~FMemScope(&local_358);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_378._Widget.Object;
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_378._Widget.Object,pFVar8);
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  if ((local_378._Widget.Object)->bForceVolatile == '\0') {
    cVar6 = (**(code **)(*(longlong *)&(local_378._Widget.Object)->field_0x0 + 0x228))
                      (local_378._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_1425c7b65;
  }
  bVar7 = 0x20;
LAB_1425c7b65:
  (local_378._Widget.Object)->bCachedVolatile = '\0';
  (local_378._Widget.Object)->field_0x30 = (local_378._Widget.Object)->field_0x30 | bVar7;
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  (local_378._Widget.Object)->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  FVar4.ReferenceController = local_378._Widget.SharedReferenceCount.ReferenceController;
  local_378._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_378._Widget.Object = (SEmptyLeftWidget *)0x0;
  if ((SWidget *)pSVar3 == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  if (param_1->Object == (SVerticalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  pSVar1 = param_1->Object;
  this = ::operator_new(0x58);
  local_350 = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x18 = 0;
    *(undefined8 *)&this->field_0x20 = 0;
    *(undefined8 *)&this->field_0x28 = 0;
    *(undefined8 *)&this->field_0x30 = 0;
    *(undefined8 *)&this->field_0x38 = 0;
    *(undefined8 *)&this->field_0x40 = 0;
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    local_350 = SVerticalBox::FSlot::FSlot(this);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_320,(FSlot *)&local_350);
  local_318 = __return_storage_ptr__->Object;
  local_238 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  local_330.ReferenceController = (__return_storage_ptr__->SharedReferenceCount).ReferenceController
  ;
  local_328 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_230 = -1;
  if (local_330.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_330.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_330.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_338 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_310,&local_330);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.ReferenceController);
  local_328 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_320 != (undefined8 *)0x0) {
    if (local_230 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_238,(FSlotArguments *)&local_320);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_238,(FSlotArguments *)&local_320,local_230)
      ;
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
  if ((void *)local_2f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310[0].ReferenceController);
  if (local_320 != (undefined8 *)0x0) {
    (**(code **)*local_320)(local_320,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// AddEmptyWidget @ 1425c7db0

TSharedRef<SWidget,1> * __cdecl
UE::Slate::Test::Private::AddEmptyWidget
          (TSharedRef<SWidget,1> *__return_storage_ptr__,TSharedPtr<SVerticalBox,1> *param_1,
          int param_2)

{
  SVerticalBox *pSVar1;
  code *pcVar2;
  SEmptyLeftWidget *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FSlateBaseNamedArgs *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FSlot *this;
  ForAnyElementType FVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res20;
  TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> local_378;
  FName local_360;
  FMemScope local_358;
  FSlot *local_350;
  FString local_348;
  undefined8 local_338;
  FSharedReferencer<1> local_330;
  undefined **local_328;
  undefined8 *local_320;
  SWidget *local_318;
  FSharedReferencer<1> local_310 [4];
  undefined1 local_2f0 [40];
  FSlotArgumentsMixin local_2c8;
  TPanelChildren<SBoxPanel::FSlot> *local_238;
  int local_230;
  FSlateBaseNamedArgs local_228;
  
  ::FString::PrintfImpl(&local_348,L"TagLeafWidget-%d");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_348.Data.ArrayNum != 0) {
    FVar10.Data = local_348.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar10.Data);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FSlateBaseNamedArgs *)SEmptyLeftWidget::FArguments::FArguments((FArguments *)&local_228)
  ;
  pFVar8->_Tag = local_res20;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_360 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_358,&local_360,true);
  TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
            (&local_378,"SEmptyLeftWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateChildrenTest.cpp"
             ,0x8a,local_res8);
  FMemScope::~FMemScope(&local_358);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_378._Widget.Object;
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_378._Widget.Object,pFVar8);
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  if ((local_378._Widget.Object)->bForceVolatile == '\0') {
    cVar6 = (**(code **)(*(longlong *)&(local_378._Widget.Object)->field_0x0 + 0x228))
                      (local_378._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_1425c7f35;
  }
  bVar7 = 0x20;
LAB_1425c7f35:
  (local_378._Widget.Object)->bCachedVolatile = '\0';
  (local_378._Widget.Object)->field_0x30 = (local_378._Widget.Object)->field_0x30 | bVar7;
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  (local_378._Widget.Object)->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
  if ((SWidget *)local_378._Widget.Object == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  FVar4.ReferenceController = local_378._Widget.SharedReferenceCount.ReferenceController;
  local_378._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_378._Widget.Object = (SEmptyLeftWidget *)0x0;
  if ((SWidget *)pSVar3 == (SWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  if (param_1->Object == (SVerticalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  pSVar1 = param_1->Object;
  this = ::operator_new(0x58);
  local_350 = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x18 = 0;
    *(undefined8 *)&this->field_0x20 = 0;
    *(undefined8 *)&this->field_0x28 = 0;
    *(undefined8 *)&this->field_0x30 = 0;
    *(undefined8 *)&this->field_0x38 = 0;
    *(undefined8 *)&this->field_0x40 = 0;
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    local_350 = SVerticalBox::FSlot::FSlot(this);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_320,(FSlot *)&local_350);
  local_318 = __return_storage_ptr__->Object;
  local_238 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  local_330.ReferenceController = (__return_storage_ptr__->SharedReferenceCount).ReferenceController
  ;
  local_328 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_230 = -1;
  if (local_330.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_330.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_330.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_338 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_310,&local_330);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.ReferenceController);
  local_328 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_320 != (undefined8 *)0x0) {
    if (local_230 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_238,(FSlotArguments *)&local_320);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_238,(FSlotArguments *)&local_320,local_230)
      ;
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
  if ((void *)local_2f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310[0].ReferenceController);
  if (local_320 != (undefined8 *)0x0) {
    (**(code **)*local_320)(local_320,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// AddVerticalBox @ 1425ca370

TSharedRef<SVerticalBox,1> * __cdecl
UE::Slate::Private::AddVerticalBox
          (TSharedRef<SVerticalBox,1> *__return_storage_ptr__,TSharedPtr<SVerticalBox,1> *param_1,
          wchar_t param_2)

{
  SVerticalBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  FArguments *pFVar3;
  FSlot *this;
  FMemScope FVar4;
  FSlot *local_res8;
  FName local_res10;
  T0RequiredArgs local_res18 [8];
  FName local_res20;
  undefined1 local_258 [8];
  FSharedReferencer<1> local_250;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_248;
  undefined1 local_230 [16];
  SVerticalBox *local_220;
  FSharedReferencer<1> local_218 [4];
  undefined1 local_1f8 [40];
  FSlotArgumentsMixin local_1d0;
  TPanelChildren<SBoxPanel::FSlot> *local_140;
  int local_138;
  ForAnyElementType local_38;
  int local_30;
  
  ::FString::PrintfImpl((FString *)local_258,L"TagVerticalBox-%c");
  FVar4 = (FMemScope)L"";
  if ((int)local_250.ReferenceController != 0) {
    FVar4 = (FMemScope)local_258;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar4);
  if ((FMemScope)local_258 != (FMemScope)0x0) {
    FMemory::Free((void *)local_258);
  }
  pFVar3 = SVerticalBox::FArguments::FArguments((FArguments *)local_230);
  pFVar3->_padding_ = (longlong)local_res10;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)local_258,&local_res20,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_248,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateInvalidationWidgetListTest.cpp"
             ,0x2a,local_res18);
  FMemScope::~FMemScope((FMemScope *)local_258);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_248,__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>((FSlotArguments *)local_38.Data,local_30);
  if ((FSlotArguments *)local_38.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_230);
  pSVar1 = param_1->Object;
  if (pSVar1 != (SVerticalBox *)0x0) {
    this = ::operator_new(0x58);
    local_res8 = (FSlot *)0x0;
    if (this != (FSlot *)0x0) {
      *(undefined8 *)this = 0;
      *(undefined8 *)&this->field_0x8 = 0;
      *(undefined8 *)&this->field_0x10 = 0;
      *(undefined8 *)&this->field_0x18 = 0;
      *(undefined8 *)&this->field_0x20 = 0;
      *(undefined8 *)&this->field_0x28 = 0;
      *(undefined8 *)&this->field_0x30 = 0;
      *(undefined8 *)&this->field_0x38 = 0;
      *(undefined8 *)&this->field_0x40 = 0;
      *(undefined8 *)&this->field_0x48 = 0;
      *(undefined8 *)&this->field_0x50 = 0;
      local_res8 = SVerticalBox::FSlot::FSlot(this);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)(local_230 + 8),(FSlot *)&local_res8);
    local_140 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
    local_138 = -1;
    pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    local_220 = __return_storage_ptr__->Object;
    local_230._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_258[0] = false;
    local_258._1_3_ = 0;
    local_258._4_4_ = 0;
    local_250.ReferenceController = pTVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_218,&local_250);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_250.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_230._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    if ((undefined8 *)local_230._8_8_ != (undefined8 *)0x0) {
      if (local_138 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_140,(FSlotArguments *)(local_230 + 8));
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_140,(FSlotArguments *)(local_230 + 8),local_138);
      }
    }
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1d0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    if ((void *)local_1f8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218[0].ReferenceController);
    if ((undefined8 *)local_230._8_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_230._8_8_)(local_230._8_8_,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// AddVerticalBox @ 1425ca620

TSharedRef<SVerticalBox,1> * __cdecl
UE::Slate::Test::Private::AddVerticalBox
          (TSharedRef<SVerticalBox,1> *__return_storage_ptr__,TSharedPtr<SVerticalBox,1> *param_1,
          wchar_t param_2)

{
  SVerticalBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  FArguments *pFVar3;
  FSlot *this;
  FMemScope FVar4;
  FSlot *local_res8;
  FName local_res10;
  T0RequiredArgs local_res18 [8];
  FName local_res20;
  undefined1 local_258 [8];
  FSharedReferencer<1> local_250;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_248;
  undefined1 local_230 [16];
  SVerticalBox *local_220;
  FSharedReferencer<1> local_218 [4];
  undefined1 local_1f8 [40];
  FSlotArgumentsMixin local_1d0;
  TPanelChildren<SBoxPanel::FSlot> *local_140;
  int local_138;
  ForAnyElementType local_38;
  int local_30;
  
  ::FString::PrintfImpl((FString *)local_258,L"TagVerticalBox-%c");
  FVar4 = (FMemScope)L"";
  if ((int)local_250.ReferenceController != 0) {
    FVar4 = (FMemScope)local_258;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar4);
  if ((FMemScope)local_258 != (FMemScope)0x0) {
    FMemory::Free((void *)local_258);
  }
  pFVar3 = SVerticalBox::FArguments::FArguments((FArguments *)local_230);
  pFVar3->_padding_ = (longlong)local_res10;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)local_258,&local_res20,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_248,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateChildrenTest.cpp"
             ,0x7f,local_res18);
  FMemScope::~FMemScope((FMemScope *)local_258);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_248,__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>((FSlotArguments *)local_38.Data,local_30);
  if ((FSlotArguments *)local_38.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_230);
  pSVar1 = param_1->Object;
  if (pSVar1 != (SVerticalBox *)0x0) {
    this = ::operator_new(0x58);
    local_res8 = (FSlot *)0x0;
    if (this != (FSlot *)0x0) {
      *(undefined8 *)this = 0;
      *(undefined8 *)&this->field_0x8 = 0;
      *(undefined8 *)&this->field_0x10 = 0;
      *(undefined8 *)&this->field_0x18 = 0;
      *(undefined8 *)&this->field_0x20 = 0;
      *(undefined8 *)&this->field_0x28 = 0;
      *(undefined8 *)&this->field_0x30 = 0;
      *(undefined8 *)&this->field_0x38 = 0;
      *(undefined8 *)&this->field_0x40 = 0;
      *(undefined8 *)&this->field_0x48 = 0;
      *(undefined8 *)&this->field_0x50 = 0;
      local_res8 = SVerticalBox::FSlot::FSlot(this);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)(local_230 + 8),(FSlot *)&local_res8);
    local_140 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
    local_138 = -1;
    pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    local_220 = __return_storage_ptr__->Object;
    local_230._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_258[0] = false;
    local_258._1_3_ = 0;
    local_258._4_4_ = 0;
    local_250.ReferenceController = pTVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_218,&local_250);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_250.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_230._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    if ((undefined8 *)local_230._8_8_ != (undefined8 *)0x0) {
      if (local_138 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_140,(FSlotArguments *)(local_230 + 8));
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_140,(FSlotArguments *)(local_230 + 8),local_138);
      }
    }
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1d0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    if ((void *)local_1f8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218[0].ReferenceController);
    if ((undefined8 *)local_230._8_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_230._8_8_)(local_230._8_8_,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// BuildChildTest @ 1425ce770

TSharedRef<SVerticalBox,1> * __cdecl
UE::Slate::Test::Private::BuildChildTest
          (TSharedRef<SVerticalBox,1> *__return_storage_ptr__,TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWeakChild *pSVar4;
  SSingleChild *pSVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  SVerticalBox *pSVar8;
  bool bVar9;
  FArguments *pFVar10;
  TSharedRef<SVerticalBox,1> *pTVar11;
  TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *pTVar12;
  FSlot *pFVar13;
  FArguments *pFVar14;
  TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *pTVar15;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  TSharedRef<SVerticalBox,1> local_8b8;
  TSharedPtr<SWidget,1> local_8a8;
  TSharedRef<SVerticalBox,1> local_898;
  SVerticalBox *local_888;
  TReferenceControllerBase<1> *pTStack_880;
  TSharedRef<SVerticalBox,1> local_878;
  FName local_868;
  FMemScope local_860;
  FSlot *local_858;
  FName local_850;
  FName local_848;
  FMemScope local_840;
  FSlot *local_838;
  FName local_830;
  undefined8 local_828;
  FSharedReferencer<1> local_820;
  undefined8 local_818;
  FSharedReferencer<1> local_810;
  TSharedRef<SVerticalBox,1> local_808;
  TSharedPtr<SVerticalBox,1> local_7f8;
  TSharedPtr<SVerticalBox,1> local_7e8;
  TSharedRef<SVerticalBox,1> local_7d8;
  TSharedPtr<SVerticalBox,1> local_7c8;
  TSharedPtr<SVerticalBox,1> local_7b8;
  TSharedRef<SWidget,1> local_7a8;
  TSharedPtr<SVerticalBox,1> local_798;
  TSharedRef<SWidget,1> local_788;
  TSharedPtr<SVerticalBox,1> local_778;
  SWidget *local_768;
  TReferenceControllerBase<1> *pTStack_760;
  TSharedRef<UE::Slate::Test::Private::SWeakChild,1> local_758;
  TSharedPtr<SVerticalBox,1> local_748;
  TSharedPtr<SVerticalBox,1> local_738;
  TSharedRef<SWidget,1> local_728;
  TSharedPtr<SVerticalBox,1> local_718;
  TSharedRef<SWidget,1> local_708;
  TSharedRef<UE::Slate::Test::Private::SSingleChild,1> local_6f8;
  TSharedPtr<SVerticalBox,1> local_6e8;
  TSharedPtr<SVerticalBox,1> local_6d8;
  TSharedRef<SWidget,1> local_6c8;
  TSharedPtr<SVerticalBox,1> local_6b8;
  TSharedRef<SWidget,1> local_6a8;
  TSharedPtr<SVerticalBox,1> local_698;
  TSharedRef<SWidget,1> local_688;
  TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> local_678;
  TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> local_660;
  undefined **local_648;
  undefined8 *local_640;
  SWeakChild *local_638;
  FSharedReferencer<1> local_630 [4];
  undefined1 local_610 [40];
  FSlotArgumentsMixin local_5e8;
  TPanelChildren<SBoxPanel::FSlot> *local_558;
  int local_550;
  undefined **local_548;
  undefined8 *local_540;
  SSingleChild *local_538;
  FSharedReferencer<1> local_530 [4];
  undefined1 local_510 [40];
  FSlotArgumentsMixin local_4e8;
  TPanelChildren<SBoxPanel::FSlot> *local_458;
  int local_450;
  FArguments local_448;
  FArguments local_240;
  
  local_7c8.Object = (SVerticalBox *)0x0;
  local_7c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AddVerticalBox(&local_898,&local_7c8,L'D');
  local_7b8.Object = local_898.Object;
  local_7b8.SharedReferenceCount.ReferenceController =
       local_898.SharedReferenceCount.ReferenceController;
  if (local_898.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_898.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_7a8,&local_7b8,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a8.SharedReferenceCount.ReferenceController);
  local_798.Object = local_898.Object;
  local_798.SharedReferenceCount.ReferenceController =
       local_898.SharedReferenceCount.ReferenceController;
  if (local_898.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_898.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_788,&local_798,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_788.SharedReferenceCount.ReferenceController);
  local_8a8.Object = (SWidget *)local_898.Object;
  local_8a8.SharedReferenceCount.ReferenceController =
       local_898.SharedReferenceCount.ReferenceController;
  if (local_898.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_898.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_898.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1 != &local_8a8) {
    param_1->Object = (SWidget *)local_898.Object;
    local_8a8.Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_8a8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_898.SharedReferenceCount.ReferenceController);
  local_778.Object = (SVerticalBox *)0x0;
  local_778.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AddVerticalBox(__return_storage_ptr__,&local_778,L'A');
  local_7f8.Object = __return_storage_ptr__->Object;
  local_7f8.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_7f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_878,&local_7f8,L'B');
  ::FName::FName(&local_848,L"Weak-C");
  pFVar10 = SWeakChild::FArguments::FArguments(&local_448);
  pFVar10->_padding_ = (longlong)local_848;
  if (param_1->Object == (SWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedRef<SVerticalBox,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedRef<SVerticalBox,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_768 = (pFVar10->_Content).Widget.Object;
  pTStack_760 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_Content).Widget.Object = pSVar1;
  (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_760);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_868 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_860,&local_868,true);
  TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>
            (&local_678,"SWeakChild",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateChildrenTest.cpp"
             ,0xe2,local_res8);
  FMemScope::~FMemScope(&local_860);
  FLLMScope::~FLLMScope(local_res18);
  pTVar12 = TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>::
            operator<<=(&local_678,&local_758,pFVar10);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar12->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_678._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_448);
  pSVar8 = local_878.Object;
  pFVar13 = ::operator_new(0x58);
  local_858 = (FSlot *)0x0;
  if (pFVar13 != (FSlot *)0x0) {
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)&pFVar13->field_0x8 = 0;
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    *(undefined8 *)&pFVar13->field_0x20 = 0;
    *(undefined8 *)&pFVar13->field_0x28 = 0;
    *(undefined8 *)&pFVar13->field_0x30 = 0;
    *(undefined8 *)&pFVar13->field_0x38 = 0;
    *(undefined8 *)&pFVar13->field_0x40 = 0;
    *(undefined8 *)&pFVar13->field_0x48 = 0;
    *(undefined8 *)&pFVar13->field_0x50 = 0;
    local_858 = SVerticalBox::FSlot::FSlot(pFVar13);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_640,(FSlot *)&local_858);
  local_550 = -1;
  local_558 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar8->field_0x218;
  local_648 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_828 = 0;
  local_820.ReferenceController = pTVar3;
  local_638 = pSVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_630,&local_820);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_820.ReferenceController);
  local_648 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_640 != (undefined8 *)0x0) {
    if (local_550 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_558,(FSlotArguments *)&local_640);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_558,(FSlotArguments *)&local_640,local_550)
      ;
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_610);
  if ((void *)local_610._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_610._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_610);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_630[0].ReferenceController);
  if (local_640 != (undefined8 *)0x0) {
    (**(code **)*local_640)(local_640,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_748.Object = (SVerticalBox *)0x0;
  local_748.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AddVerticalBox(&local_8b8,&local_748,L'F');
  local_738.Object = local_8b8.Object;
  local_738.SharedReferenceCount.ReferenceController =
       local_8b8.SharedReferenceCount.ReferenceController;
  if (local_8b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_728,&local_738,3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_728.SharedReferenceCount.ReferenceController);
  local_718.Object = local_8b8.Object;
  local_718.SharedReferenceCount.ReferenceController =
       local_8b8.SharedReferenceCount.ReferenceController;
  if (local_8b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_708,&local_718,4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_708.SharedReferenceCount.ReferenceController);
  ::FName::FName(&local_850,L"Single-E");
  pFVar14 = SSingleChild::FArguments::FArguments(&local_240);
  FVar7.ReferenceController = local_8b8.SharedReferenceCount.ReferenceController;
  pFVar14->_padding_ = (longlong)local_850;
  local_888 = local_8b8.Object;
  pTStack_880 = local_8b8.SharedReferenceCount.ReferenceController;
  if (local_8b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar14->_Content).Widget.Object = (SWidget *)local_8b8.Object;
  (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_8b8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_830 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_840,&local_830,true);
  TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>
            (&local_660,"SSingleChild",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateChildrenTest.cpp"
             ,0xeb,local_res10);
  FMemScope::~FMemScope(&local_840);
  FLLMScope::~FLLMScope(local_res20);
  pTVar15 = TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>::
            operator<<=(&local_660,&local_6f8,pFVar14);
  pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar15->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_240._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
  pSVar8 = local_878.Object;
  pFVar13 = ::operator_new(0x58);
  local_838 = (FSlot *)0x0;
  if (pFVar13 != (FSlot *)0x0) {
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)&pFVar13->field_0x8 = 0;
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    *(undefined8 *)&pFVar13->field_0x20 = 0;
    *(undefined8 *)&pFVar13->field_0x28 = 0;
    *(undefined8 *)&pFVar13->field_0x30 = 0;
    *(undefined8 *)&pFVar13->field_0x38 = 0;
    *(undefined8 *)&pFVar13->field_0x40 = 0;
    *(undefined8 *)&pFVar13->field_0x48 = 0;
    *(undefined8 *)&pFVar13->field_0x50 = 0;
    local_838 = SVerticalBox::FSlot::FSlot(pFVar13);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_540,(FSlot *)&local_838);
  local_548 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_458 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar8->field_0x218;
  local_450 = -1;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_818 = 0;
  local_810.ReferenceController = pTVar2;
  local_538 = pSVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_530,&local_810);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_810.ReferenceController);
  local_548 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_540 != (undefined8 *)0x0) {
    if (local_450 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_458,(FSlotArguments *)&local_540);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_458,(FSlotArguments *)&local_540,local_450)
      ;
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_4e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
  if ((void *)local_510._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_510._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_510);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_530[0].ReferenceController);
  if (local_540 != (undefined8 *)0x0) {
    (**(code **)*local_540)(local_540,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8b8.SharedReferenceCount.ReferenceController);
  local_6e8.Object = local_878.Object;
  local_6e8.SharedReferenceCount.ReferenceController =
       local_878.SharedReferenceCount.ReferenceController;
  if (local_878.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_878.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_878.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_808,&local_6e8,L'G');
  local_6d8.Object = local_808.Object;
  local_6d8.SharedReferenceCount.ReferenceController =
       local_808.SharedReferenceCount.ReferenceController;
  if (local_808.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_808.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_808.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_6c8,&local_6d8,5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c8.SharedReferenceCount.ReferenceController);
  local_6b8.Object = local_808.Object;
  local_6b8.SharedReferenceCount.ReferenceController =
       local_808.SharedReferenceCount.ReferenceController;
  if (local_808.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_808.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_808.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_6a8,&local_6b8,6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_808.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_878.SharedReferenceCount.ReferenceController);
  local_7e8.Object = __return_storage_ptr__->Object;
  local_7e8.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_7e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_7d8,&local_7e8,L'H');
  local_698.Object = local_7d8.Object;
  local_698.SharedReferenceCount.ReferenceController =
       local_7d8.SharedReferenceCount.ReferenceController;
  if (local_7d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_688,&local_698,7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_688.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// BuildNormalTest @ 1425cf040

TSharedRef<SVerticalBox,1> * __cdecl
UE::Slate::Test::Private::BuildNormalTest(TSharedRef<SVerticalBox,1> *__return_storage_ptr__)

{
  SVerticalBox *pSVar1;
  FSlot *pFVar2;
  FSlot *this;
  FSlot *local_res8;
  TSharedPtr<SVerticalBox,1> local_148;
  TSharedRef<SVerticalBox,1> local_138;
  TSharedRef<SVerticalBox,1> local_128;
  TSharedPtr<SVerticalBox,1> local_118;
  undefined **local_108;
  undefined8 *local_100;
  SWidget *local_f8;
  FSharedReferencer<1> local_f0 [4];
  undefined1 local_d0 [40];
  FSlotArgumentsMixin local_a8;
  TPanelChildren<SBoxPanel::FSlot> *local_18;
  int local_10;
  
  local_148.Object = (SVerticalBox *)0x0;
  local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AddVerticalBox(__return_storage_ptr__,&local_148,L'A');
  local_148.Object = __return_storage_ptr__->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_128,&local_148,L'B');
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  local_148.Object = __return_storage_ptr__->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_128,&local_148,L'C');
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  pSVar1 = __return_storage_ptr__->Object;
  pFVar2 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (pFVar2 != (FSlot *)0x0) {
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)&pFVar2->field_0x8 = 0;
    *(undefined8 *)&pFVar2->field_0x10 = 0;
    *(undefined8 *)&pFVar2->field_0x18 = 0;
    *(undefined8 *)&pFVar2->field_0x20 = 0;
    *(undefined8 *)&pFVar2->field_0x28 = 0;
    *(undefined8 *)&pFVar2->field_0x30 = 0;
    *(undefined8 *)&pFVar2->field_0x38 = 0;
    *(undefined8 *)&pFVar2->field_0x40 = 0;
    *(undefined8 *)&pFVar2->field_0x48 = 0;
    *(undefined8 *)&pFVar2->field_0x50 = 0;
    local_res8 = SVerticalBox::FSlot::FSlot(pFVar2);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_100,(FSlot *)&local_res8);
  local_f8 = SNullWidget::NullWidget.Object;
  local_18 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_10 = -1;
  local_138.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_138.Object = (SVerticalBox *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_f0,&local_138.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_100 != (undefined8 *)0x0) {
    if (local_10 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_18,(FSlotArguments *)&local_100);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_18,(FSlotArguments *)&local_100,local_10);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0[0].ReferenceController);
  if (local_100 != (undefined8 *)0x0) {
    (**(code **)*local_100)(local_100,1);
  }
  local_148.Object = __return_storage_ptr__->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_138,&local_148,L'D');
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = __return_storage_ptr__->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_128,&local_148,L'E');
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_138,&local_148,10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  local_148.Object = __return_storage_ptr__->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_138,&local_148,L'F');
  local_148.Object = local_138.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_138.SharedReferenceCount.ReferenceController;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_128,&local_148,L'G');
  local_148.Object = local_128.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_118,&local_148,0xb);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  pSVar1 = local_128.Object;
  this = ::operator_new(0x58);
  pFVar2 = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x18 = 0;
    *(undefined8 *)&this->field_0x20 = 0;
    *(undefined8 *)&this->field_0x28 = 0;
    *(undefined8 *)&this->field_0x30 = 0;
    *(undefined8 *)&this->field_0x38 = 0;
    *(undefined8 *)&this->field_0x40 = 0;
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    pFVar2 = SVerticalBox::FSlot::FSlot(this);
  }
  local_res8 = pFVar2;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_100,(FSlot *)&local_res8);
  local_f8 = SNullWidget::NullWidget.Object;
  local_18 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_10 = -1;
  local_148.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_148.Object = (SVerticalBox *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_f0,&local_148.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  local_108 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_100 != (undefined8 *)0x0) {
    if (local_10 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_18,(FSlotArguments *)&local_100);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_18,(FSlotArguments *)&local_100,local_10);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0[0].ReferenceController);
  if (local_100 != (undefined8 *)0x0) {
    (**(code **)*local_100)(local_100,1);
  }
  local_118.Object = local_128.Object;
  local_118.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_148,&local_118,0xc);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  local_118.Object = local_138.Object;
  local_118.SharedReferenceCount.ReferenceController =
       local_138.SharedReferenceCount.ReferenceController;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox((TSharedRef<SVerticalBox,1> *)&local_148,&local_118,L'H');
  local_118.Object = local_148.Object;
  local_118.SharedReferenceCount.ReferenceController =
       local_148.SharedReferenceCount.ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_128,&local_118,0xd);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  local_118.Object = local_138.Object;
  local_118.SharedReferenceCount.ReferenceController =
       local_138.SharedReferenceCount.ReferenceController;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox((TSharedRef<SVerticalBox,1> *)&local_148,&local_118,L'I');
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_148.Object = __return_storage_ptr__->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_138,&local_148,L'J');
  local_118.Object = local_138.Object;
  local_118.SharedReferenceCount.ReferenceController =
       local_138.SharedReferenceCount.ReferenceController;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_148,&local_118,0xe);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// BuildTestUI_Child @ 1425cf830

TSharedRef<SVerticalBox,1> * __cdecl
UE::Slate::Private::BuildTestUI_Child
          (TSharedRef<SVerticalBox,1> *__return_storage_ptr__,TSharedPtr<SVerticalBox,1> *param_1,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *param_2,
          TSharedPtr<SVerticalBox,1> *param_3,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *param_4,
          TSharedPtr<SVerticalBox,1> *param_5,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *param_6,
          TSharedPtr<SVerticalBox,1> *param_7,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *param_8,
          TSharedPtr<SVerticalBox,1> *param_9,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *param_10)

{
  FSharedReferencer<1> *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedRef<SVerticalBox,1> *pTVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  int *piVar8;
  SVerticalBox *local_368;
  TReferenceControllerBase<1> *local_360;
  SWidget *local_358;
  TReferenceControllerBase<1> *local_350;
  SWidget *local_348;
  TReferenceControllerBase<1> *local_340;
  SWidget *local_338;
  TReferenceControllerBase<1> *local_330;
  SVerticalBox *local_328;
  TReferenceControllerBase<1> *local_320;
  SVerticalBox *local_318;
  TReferenceControllerBase<1> *local_310;
  SVerticalBox *local_308;
  TReferenceControllerBase<1> *local_300;
  SWidget *local_2f8;
  TReferenceControllerBase<1> *local_2f0;
  SVerticalBox *local_2e8;
  TReferenceControllerBase<1> *local_2e0;
  SVerticalBox *local_2d8;
  TReferenceControllerBase<1> *pTStack_2d0;
  SVerticalBox *local_2c8;
  TReferenceControllerBase<1> *pTStack_2c0;
  SVerticalBox *local_2b8;
  TReferenceControllerBase<1> *pTStack_2b0;
  TSharedPtr<SVerticalBox,1> local_2a8;
  TSharedPtr<SVerticalBox,1> local_298;
  TSharedPtr<SVerticalBox,1> local_288;
  TSharedPtr<SVerticalBox,1> local_278;
  TSharedPtr<SVerticalBox,1> local_268;
  TSharedRef<SVerticalBox,1> local_258;
  TSharedRef<SVerticalBox,1> local_248;
  TSharedRef<SVerticalBox,1> local_238;
  TSharedPtr<SVerticalBox,1> local_228;
  TSharedPtr<SVerticalBox,1> local_218;
  TSharedPtr<SVerticalBox,1> local_208;
  TSharedPtr<SVerticalBox,1> local_1f8;
  TSharedPtr<SVerticalBox,1> local_1e8;
  TSharedPtr<SVerticalBox,1> local_1d8;
  TSharedPtr<SVerticalBox,1> local_1c8;
  TSharedPtr<SVerticalBox,1> local_1b8;
  TSharedPtr<SVerticalBox,1> local_1a8;
  TSharedPtr<SVerticalBox,1> local_198;
  TSharedPtr<SVerticalBox,1> local_188;
  TSharedPtr<SVerticalBox,1> local_178;
  TSharedPtr<SVerticalBox,1> local_168;
  TSharedRef<SVerticalBox,1> local_158;
  TSharedRef<SVerticalBox,1> local_148;
  TSharedRef<SWidget,1> local_138;
  TSharedRef<SWidget,1> local_128;
  TSharedRef<SWidget,1> local_118;
  TSharedRef<SVerticalBox,1> local_108;
  TSharedRef<SVerticalBox,1> local_f8;
  TSharedPtr<SVerticalBox,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  TSharedPtr<SVerticalBox,1> local_c8;
  TSharedRef<SWidget,1> local_b8;
  TSharedPtr<SVerticalBox,1> local_a8;
  TSharedRef<SWidget,1> local_98;
  TSharedPtr<SVerticalBox,1> local_88;
  TSharedRef<SWidget,1> local_78;
  TSharedRef<SVerticalBox,1> local_68;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SVerticalBox,1> local_48;
  
  local_168.Object = (SVerticalBox *)0x0;
  local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = AddVerticalBox(&local_158,&local_168,L'A');
  local_2a8.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  local_2a8.Object = pTVar5->Object;
  if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1 != &local_2a8) {
    param_1->Object = local_2a8.Object;
    local_2a8.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_2a8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  local_228.Object = param_1->Object;
  local_228.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = AddVerticalBox(&local_148,&local_228,L'B');
  local_298.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  local_298.Object = pTVar5->Object;
  if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = &param_3->SharedReferenceCount;
  if (param_3 != &local_298) {
    param_3->Object = local_298.Object;
    local_298.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(pFVar1,&local_298.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  local_368 = param_3->Object;
  local_360 = pFVar1->ReferenceController;
  if (local_360 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_360->SharedReferenceCount = (atomic<int>)((int)local_360->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_368) &&
     ((FScriptContainerElement *)&local_368 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_368;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_360;
  local_360 = (TReferenceControllerBase<1> *)0x0;
  local_368 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_218.Object = param_3->Object;
  local_218.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = AddEmptyWidget(&local_138,&local_218,1);
  local_358 = pTVar6->Object;
  local_350 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_350 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_350->SharedReferenceCount = (atomic<int>)((int)local_350->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_4->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_358) &&
     ((FScriptContainerElement *)&local_358 < pFVar7 + (longlong)param_4->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_4->ArrayNum;
  if (iVar4 == param_4->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar4 + 1;
  pFVar7 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SWidget **)pFVar7 = local_358;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_350;
  local_350 = (TReferenceControllerBase<1> *)0x0;
  local_358 = (SWidget *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_208.Object = param_3->Object;
  local_208.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  piVar8 = &param_4->ArrayNum;
  pTVar6 = AddEmptyWidget(&local_128,&local_208,2);
  local_348 = pTVar6->Object;
  local_340 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_340 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_340->SharedReferenceCount = (atomic<int>)((int)local_340->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_4->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_348) &&
     ((FScriptContainerElement *)&local_348 < pFVar7 + (longlong)param_4->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = *piVar8;
  if (iVar4 == param_4->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    *piVar8 = iVar4;
  }
  *piVar8 = iVar4 + 1;
  pFVar7 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SWidget **)pFVar7 = local_348;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_340;
  local_340 = (TReferenceControllerBase<1> *)0x0;
  local_348 = (SWidget *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  local_1f8.Object = param_3->Object;
  local_1f8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  piVar8 = &param_4->ArrayNum;
  pTVar6 = AddEmptyWidget(&local_118,&local_1f8,3);
  local_338 = pTVar6->Object;
  local_330 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_330 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_330->SharedReferenceCount = (atomic<int>)((int)local_330->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_4->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_338) &&
     ((FScriptContainerElement *)&local_338 < pFVar7 + (longlong)param_4->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = *piVar8;
  if (iVar4 == param_4->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    *piVar8 = iVar4;
  }
  *piVar8 = iVar4 + 1;
  pFVar7 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SWidget **)pFVar7 = local_338;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_330;
  local_330 = (TReferenceControllerBase<1> *)0x0;
  local_338 = (SWidget *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  local_1e8.Object = param_1->Object;
  local_1e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = AddVerticalBox(&local_108,&local_1e8,L'C');
  local_288.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  local_288.Object = pTVar5->Object;
  if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_5 != &local_288) {
    param_5->Object = local_288.Object;
    local_288.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_5->SharedReferenceCount,&local_288.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  local_328 = param_5->Object;
  local_320 = (param_5->SharedReferenceCount).ReferenceController;
  if (local_320 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_320->SharedReferenceCount = (atomic<int>)((int)local_320->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_328) &&
     ((FScriptContainerElement *)&local_328 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  piVar8 = &param_2->ArrayMax;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar8);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_328;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_320;
  local_320 = (TReferenceControllerBase<1> *)0x0;
  local_328 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_1d8.Object = param_1->Object;
  local_1d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = AddVerticalBox(&local_f8,&local_1d8,L'D');
  local_278.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  local_278.Object = pTVar5->Object;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = &param_7->SharedReferenceCount;
  if (param_7 != &local_278) {
    param_7->Object = local_278.Object;
    local_278.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(pFVar1,&local_278.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  local_318 = param_7->Object;
  local_310 = pFVar1->ReferenceController;
  if (local_310 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_310->SharedReferenceCount = (atomic<int>)((int)local_310->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_318) &&
     ((FScriptContainerElement *)&local_318 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar8);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_318;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_310;
  local_310 = (TReferenceControllerBase<1> *)0x0;
  local_318 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_1c8.Object = param_7->Object;
  local_1c8.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_258,&local_1c8,L'E');
  local_2d8 = local_258.Object;
  pTStack_2d0 = local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_8->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_2d8) &&
     ((FScriptContainerElement *)&local_2d8 < pFVar7 + (longlong)param_8->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_8->ArrayNum;
  if (iVar4 == param_8->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_8->AllocatorInstance,&param_8->ArrayMax);
  }
  param_8->ArrayNum = iVar4 + 1;
  pFVar7 = (param_8->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_2d8;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTStack_2d0;
  pTStack_2d0 = (TReferenceControllerBase<1> *)0x0;
  local_2d8 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_e8.Object = local_258.Object;
  local_e8.SharedReferenceCount.ReferenceController =
       local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_d8,&local_e8,4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  local_c8.Object = local_258.Object;
  local_c8.SharedReferenceCount.ReferenceController =
       local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_b8,&local_c8,5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  local_1b8.Object = param_7->Object;
  local_1b8.SharedReferenceCount.ReferenceController =
       (param_7->SharedReferenceCount).ReferenceController;
  if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_248,&local_1b8,L'F');
  local_2c8 = local_248.Object;
  pTStack_2c0 = local_248.SharedReferenceCount.ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_8->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_2c8) &&
     ((FScriptContainerElement *)&local_2c8 < pFVar7 + (longlong)param_8->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_8->ArrayNum;
  if (iVar4 == param_8->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_8->AllocatorInstance,&param_8->ArrayMax);
  }
  param_8->ArrayNum = iVar4 + 1;
  pFVar7 = (param_8->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_2c8;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTStack_2c0;
  pTStack_2c0 = (TReferenceControllerBase<1> *)0x0;
  local_2c8 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a8.Object = local_248.Object;
  local_a8.SharedReferenceCount.ReferenceController =
       local_248.SharedReferenceCount.ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_98,&local_a8,6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  local_1a8.Object = param_7->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (param_7->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_238,&local_1a8,L'G');
  local_2b8 = local_238.Object;
  pTStack_2b0 = local_238.SharedReferenceCount.ReferenceController;
  if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_8->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_2b8) &&
     ((FScriptContainerElement *)&local_2b8 < pFVar7 + (longlong)param_8->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_8->ArrayNum;
  if (iVar4 == param_8->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_8->AllocatorInstance,&param_8->ArrayMax);
  }
  param_8->ArrayNum = iVar4 + 1;
  pFVar7 = (param_8->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_2b8;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTStack_2b0;
  pTStack_2b0 = (TReferenceControllerBase<1> *)0x0;
  local_2b8 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_88.Object = local_238.Object;
  local_88.SharedReferenceCount.ReferenceController =
       local_238.SharedReferenceCount.ReferenceController;
  if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget(&local_78,&local_88,7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = AddVerticalBox(&local_68,&local_198,L'H');
  local_268.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  local_268.Object = pTVar5->Object;
  if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = &param_9->SharedReferenceCount;
  if (param_9 != &local_268) {
    param_9->Object = local_268.Object;
    local_268.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(pFVar1,&local_268.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_308 = param_9->Object;
  local_300 = pFVar1->ReferenceController;
  if (local_300 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_300->SharedReferenceCount = (atomic<int>)((int)local_300->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_308) &&
     ((FScriptContainerElement *)&local_308 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar8);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_308;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_300;
  local_300 = (TReferenceControllerBase<1> *)0x0;
  local_308 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_188.Object = param_9->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = AddEmptyWidget(&local_58,&local_188,8);
  local_2f8 = pTVar6->Object;
  local_2f0 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_2f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2f0->SharedReferenceCount = (atomic<int>)((int)local_2f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_10->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_2f8) &&
     ((FScriptContainerElement *)&local_2f8 < pFVar7 + (longlong)param_10->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_10->ArrayNum;
  if (iVar4 == param_10->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_10->AllocatorInstance,&param_10->ArrayMax);
  }
  param_10->ArrayNum = iVar4 + 1;
  pFVar7 = (param_10->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SWidget **)pFVar7 = local_2f8;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_2f0;
  local_2f0 = (TReferenceControllerBase<1> *)0x0;
  local_2f8 = (SWidget *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = AddVerticalBox(&local_48,&local_178,L'I');
  local_2e8 = pTVar5->Object;
  local_2e0 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_2e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2e0->SharedReferenceCount = (atomic<int>)((int)local_2e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_2e8) &&
     ((FScriptContainerElement *)&local_2e8 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar8);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(SVerticalBox **)pFVar7 = local_2e8;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_2e0;
  local_2e0 = (TReferenceControllerBase<1> *)0x0;
  local_2e8 = (SVerticalBox *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  TSharedPtr<SVerticalBox,1>::ToSharedRef(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// BuildTestUI_ChildOrder @ 1425d0870

TSharedRef<SVerticalBox,1> * __cdecl
UE::Slate::Private::BuildTestUI_ChildOrder
          (TSharedRef<SVerticalBox,1> *__return_storage_ptr__,TSharedPtr<SVerticalBox,1> *param_1,
          TSharedPtr<SVerticalBox,1> *param_2,TSharedPtr<SVerticalBox,1> *param_3)

{
  FSharedReferencer<1> *pFVar1;
  SVerticalBox *pSVar2;
  TSharedRef<SVerticalBox,1> *pTVar3;
  FSlot *pFVar4;
  FSlot *pFVar5;
  FSlot *local_res8;
  TSharedPtr<SVerticalBox,1> local_188;
  TSharedPtr<SVerticalBox,1> local_178;
  TSharedRef<SVerticalBox,1> local_168;
  TSharedPtr<SVerticalBox,1> local_158;
  TSharedPtr<SVerticalBox,1> local_148;
  TSharedPtr<SVerticalBox,1> local_138;
  undefined **local_128;
  undefined8 *local_120;
  SWidget *local_118;
  FSharedReferencer<1> local_110 [4];
  undefined1 local_f0 [40];
  FSlotArgumentsMixin local_c8;
  TPanelChildren<SBoxPanel::FSlot> *local_38;
  int local_30;
  
  local_188.Object = (SVerticalBox *)0x0;
  local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AddVerticalBox(__return_storage_ptr__,&local_188,L'A');
  local_188.Object = __return_storage_ptr__->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_168,&local_188,L'B');
  local_188.Object = local_168.Object;
  local_188.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_178.Object = local_168.Object;
  local_178.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_188,&local_178,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  local_178.Object = local_168.Object;
  local_178.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_188,&local_178,3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  local_188.Object = __return_storage_ptr__->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = AddVerticalBox((TSharedRef<SVerticalBox,1> *)&local_178,&local_188,L'C');
  local_158.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  local_158.Object = pTVar3->Object;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = (FSlot *)0x0;
  pFVar1 = &param_1->SharedReferenceCount;
  if (param_1 != &local_158) {
    param_1->Object = local_158.Object;
    local_158.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(pFVar1,&local_158.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  pSVar2 = __return_storage_ptr__->Object;
  pFVar4 = ::operator_new(0x58);
  local_res8 = pFVar5;
  if (pFVar4 != (FSlot *)0x0) {
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)&pFVar4->field_0x8 = 0;
    *(undefined8 *)&pFVar4->field_0x10 = 0;
    *(undefined8 *)&pFVar4->field_0x18 = 0;
    *(undefined8 *)&pFVar4->field_0x20 = 0;
    *(undefined8 *)&pFVar4->field_0x28 = 0;
    *(undefined8 *)&pFVar4->field_0x30 = 0;
    *(undefined8 *)&pFVar4->field_0x38 = 0;
    *(undefined8 *)&pFVar4->field_0x40 = 0;
    *(undefined8 *)&pFVar4->field_0x48 = 0;
    *(undefined8 *)&pFVar4->field_0x50 = 0;
    local_res8 = SVerticalBox::FSlot::FSlot(pFVar4);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_120,(FSlot *)&local_res8);
  local_118 = SNullWidget::NullWidget.Object;
  local_38 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar2->field_0x218;
  local_128 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_30 = -1;
  local_168.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168.Object = (SVerticalBox *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_110,&local_168.SharedReferenceCount)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  local_128 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_120 != (undefined8 *)0x0) {
    if (local_30 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_38,(FSlotArguments *)&local_120);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_38,(FSlotArguments *)&local_120,local_30);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
  if ((void *)local_f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110[0].ReferenceController);
  if (local_120 != (undefined8 *)0x0) {
    (**(code **)*local_120)(local_120,1);
  }
  local_188.Object = __return_storage_ptr__->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox((TSharedRef<SVerticalBox,1> *)&local_178,&local_188,L'D');
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = __return_storage_ptr__->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = AddVerticalBox((TSharedRef<SVerticalBox,1> *)&local_178,&local_188,L'E');
  local_148.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  local_148.Object = pTVar3->Object;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = &param_2->SharedReferenceCount;
  if (param_2 != &local_148) {
    param_2->Object = local_148.Object;
    local_148.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(pFVar1,&local_148.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_2->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_2->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_2->Object;
  local_188.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_178,&local_188,10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = __return_storage_ptr__->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = AddVerticalBox((TSharedRef<SVerticalBox,1> *)&local_178,&local_188,L'F');
  local_138.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  local_138.Object = pTVar3->Object;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_3 != &local_138) {
    param_3->Object = local_138.Object;
    local_138.Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_3->SharedReferenceCount,&local_138.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = param_3->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_168,&local_188,L'G');
  local_178.Object = local_168.Object;
  local_178.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_188,&local_178,0xb);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  pSVar2 = local_168.Object;
  pFVar4 = ::operator_new(0x58);
  if (pFVar4 != (FSlot *)0x0) {
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)&pFVar4->field_0x8 = 0;
    *(undefined8 *)&pFVar4->field_0x10 = 0;
    *(undefined8 *)&pFVar4->field_0x18 = 0;
    *(undefined8 *)&pFVar4->field_0x20 = 0;
    *(undefined8 *)&pFVar4->field_0x28 = 0;
    *(undefined8 *)&pFVar4->field_0x30 = 0;
    *(undefined8 *)&pFVar4->field_0x38 = 0;
    *(undefined8 *)&pFVar4->field_0x40 = 0;
    *(undefined8 *)&pFVar4->field_0x48 = 0;
    *(undefined8 *)&pFVar4->field_0x50 = 0;
    pFVar5 = SVerticalBox::FSlot::FSlot(pFVar4);
  }
  local_res8 = pFVar5;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_120,(FSlot *)&local_res8);
  local_118 = SNullWidget::NullWidget.Object;
  local_38 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar2->field_0x218;
  local_128 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_30 = -1;
  local_188.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188.Object = (SVerticalBox *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_110,&local_188.SharedReferenceCount)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  local_128 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_120 != (undefined8 *)0x0) {
    if (local_30 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_38,(FSlotArguments *)&local_120);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_38,(FSlotArguments *)&local_120,local_30);
    }
  }
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)&local_120);
  local_178.Object = local_168.Object;
  local_178.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_188,&local_178,0xc);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  local_188.Object = param_3->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_168,&local_188,L'H');
  local_178.Object = local_168.Object;
  local_178.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_188,&local_178,0xd);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  local_188.Object = param_3->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox((TSharedRef<SVerticalBox,1> *)&local_178,&local_188,L'I');
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_188.Object = __return_storage_ptr__->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddVerticalBox(&local_168,&local_188,L'J');
  local_178.Object = local_168.Object;
  local_178.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEmptyWidget((TSharedRef<SWidget,1> *)&local_188,&local_178,0xe);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindAttributeContainerOffset @ 1425dbda0

int __cdecl
UE::Private::FindAttributeContainerOffset
          (ISlateAttributeContainer *param_1,FSlateAttributeBase *param_2)

{
  return (int)param_2 - (int)param_1;
}

// FindContainOffset @ 1425dc550

uint __cdecl
UE::Private::FindContainOffset(ISlateAttributeContainer *param_1,FSlateAttributeBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0xffffffff < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5758944101848317984>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                       ,0x20,
                       "Offset <= std::numeric_limits<FSlateAttributeDescriptor::OffsetType>::max()"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)((longlong)param_2 - (longlong)param_1);
}

// FindMemberOffset @ 1425dc660

uint __cdecl UE::Private::FindMemberOffset(SWidget *param_1,FSlateAttributeBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0xffffffff < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5758944101848317977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                       ,0x19,
                       "Offset <= std::numeric_limits<FSlateAttributeDescriptor::OffsetType>::max()"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)((longlong)param_2 - (longlong)param_1);
}

// InvalidateForContained @ 1425e8890

EInvalidateWidgetReason __cdecl
UE::Private::InvalidateForContained
          (ISlateAttributeContainer *param_1,SWidget *param_2,FSlateAttributeBase *param_3,
          EInvalidateWidgetReason param_4)

{
  code *pcVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  longlong *plVar4;
  FName *pFVar5;
  FAttribute *pFVar6;
  FAttribute *this;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((0xffffffff < (ulonglong)((longlong)param_3 - (longlong)param_1)) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5758944101848317984>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                         ,0x20,
                         "Offset <= std::numeric_limits<FSlateAttributeDescriptor::OffsetType>::max()"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  plVar4 = (longlong *)(**(code **)(param_2->_padding_ + 8))(param_2);
  pFVar5 = (FName *)(**(code **)((longlong)*param_1 + 8))(param_1,local_res10);
  this = (FAttribute *)*plVar4;
  pFVar6 = this + (int)plVar4[1];
  while( true ) {
    if (this == pFVar6) {
      return param_4;
    }
    if (((this->Offset == (uint)((longlong)param_3 - (longlong)param_1)) &&
        (this->AttributeType == Contained)) && (this->ContainerName == *pFVar5)) break;
    this = this + 1;
  }
  if (param_4 != None) {
    `UE::Private::InvalidateForContained'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((*(int *)&(this->OnValueChanged).field_0x8 != 0) &&
     (plVar4 = *(longlong **)&this->OnValueChanged, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
  }
  EVar3 = FSlateAttributeDescriptor::FAttribute::GetInvalidationReason(this,param_2);
  return EVar3;
}

// InvalidateForMember @ 1425e8990

EInvalidateWidgetReason __cdecl
UE::Private::InvalidateForMember
          (SWidget *param_1,FSlateAttributeBase *param_2,EInvalidateWidgetReason param_3)

{
  code *pcVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  longlong *plVar4;
  FAttribute *pFVar5;
  FAttribute *this;
  undefined1 local_res8 [8];
  
  if ((0xffffffff < (ulonglong)((longlong)param_2 - (longlong)param_1)) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5758944101848317977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                         ,0x19,
                         "Offset <= std::numeric_limits<FSlateAttributeDescriptor::OffsetType>::max()"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 8))(param_1);
  this = (FAttribute *)*plVar4;
  pFVar5 = this + (int)plVar4[1];
  while( true ) {
    if (this == pFVar5) {
      return param_3;
    }
    if ((this->Offset == (uint)((longlong)param_2 - (longlong)param_1)) &&
       (this->AttributeType == Member)) break;
    this = this + 1;
  }
  if (param_3 != None) {
    `UE::Private::InvalidateForMember'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((*(int *)&(this->OnValueChanged).field_0x8 != 0) &&
     (plVar4 = *(longlong **)&this->OnValueChanged, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
  }
  EVar3 = FSlateAttributeDescriptor::FAttribute::GetInvalidationReason(this,param_1);
  return EVar3;
}

// operator() @ 15048f840

bool __thiscall
`UE::StructUtils::GetStructPtr<FNavigationMethod,FNavigationMethod>'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1997345562860453820>);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar6 = Z_Construct_UPackage__Script_SlateCore();
      Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethod,(UObject *)pUVar6,
                           L"NavigationMethod");
    }
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)
               Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton,&local_18,
               (UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1997345562860453820>,
                       &`public:___cdecl_`struct_FNavigationMethod*___ptr64___cdecl_UE::StructUtils::GetStructPtr<FNavigationMethod,FNavigationMethod>(UScriptStruct_const*___ptr64,void*___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15048f913;
    }
  }
  bVar4 = false;
LAB_15048f913:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150490850

bool __thiscall `UE::Private::InvalidateForContained'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5758944101848318005>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848318005>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150490890

bool __thiscall `UE::Private::InvalidateForMember'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5758944101848317993>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5758944101848317993>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

