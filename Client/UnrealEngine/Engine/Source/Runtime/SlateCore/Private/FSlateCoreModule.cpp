// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FSlateCoreModule @ 1425458e0

FSlateCoreModule * __thiscall FSlateCoreModule::FSlateCoreModule(FSlateCoreModule *this)

{
  TUniquePtr<FConsoleSlateDebugger,TDefaultDelete<FConsoleSlateDebugger>_> *pTVar1;
  TUniquePtr<FConsoleSlateDebuggerInvalidationRoot,TDefaultDelete<FConsoleSlateDebuggerInvalidationRoot>_>
  *pTVar2;
  TUniquePtr<FConsoleSlateDebuggerPaint,TDefaultDelete<FConsoleSlateDebuggerPaint>_> *pTVar3;
  TUniquePtr<FConsoleSlateDebuggerInvalidate,TDefaultDelete<FConsoleSlateDebuggerInvalidate>_>
  *pTVar4;
  TUniquePtr<FConsoleSlateDebuggerPrepass,TDefaultDelete<FConsoleSlateDebuggerPrepass>_> *pTVar5;
  TUniquePtr<FConsoleSlateDebuggerUpdate,TDefaultDelete<FConsoleSlateDebuggerUpdate>_> *pTVar6;
  TUniquePtr<FConsoleSlateDebuggerBreak,TDefaultDelete<FConsoleSlateDebuggerBreak>_> *pTVar7;
  FConsoleSlateDebugger *this_00;
  FConsoleSlateDebuggerInvalidate *pFVar8;
  longlong lVar9;
  FConsoleSlateDebuggerInvalidate *pFVar10;
  FConsoleSlateDebuggerInvalidationRoot *this_01;
  FConsoleSlateDebuggerPaint *this_02;
  FConsoleSlateDebuggerPrepass *this_03;
  FConsoleSlateDebuggerUpdate *this_04;
  undefined8 *puVar11;
  FConsoleSlateDebuggerBreak *this_05;
  FConsoleSlateDebuggerInvalidate *this_06;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  this_06 = (FConsoleSlateDebuggerInvalidate *)0x0;
  pTVar1 = &this->SlateDebuggerEvent;
  pTVar2 = &this->SlateDebuggerInvalidationRoot;
  pTVar3 = &this->SlateDebuggerPaint;
  pTVar4 = &this->SlateDebuggerInvalidate;
  (this->SlateDebuggerUpdate).Ptr = (FConsoleSlateDebuggerUpdate *)0x0;
  pTVar5 = &this->SlateDebuggerPrepass;
  (this->SlateDebuggerBreak).Ptr = (FConsoleSlateDebuggerBreak *)0x0;
  pTVar1->Ptr = (FConsoleSlateDebugger *)0x0;
  this->_padding_ = (longlong)&___7FSlateCoreModule__6B_;
  pTVar4->Ptr = (FConsoleSlateDebuggerInvalidate *)0x0;
  pTVar2->Ptr = (FConsoleSlateDebuggerInvalidationRoot *)0x0;
  pTVar3->Ptr = (FConsoleSlateDebuggerPaint *)0x0;
  pTVar5->Ptr = (FConsoleSlateDebuggerPrepass *)0x0;
  this_00 = ::operator_new(400);
  pFVar8 = this_06;
  if (this_00 != (FConsoleSlateDebugger *)0x0) {
    pFVar8 = (FConsoleSlateDebuggerInvalidate *)
             FConsoleSlateDebugger::FConsoleSlateDebugger(this_00);
  }
  if (pTVar1 == (TUniquePtr<FConsoleSlateDebugger,TDefaultDelete<FConsoleSlateDebugger>_> *)
                &local_68) {
    if (pFVar8 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      lVar9._0_1_ = pFVar8->bEnabled;
      lVar9._1_1_ = pFVar8->bEnabledCVarValue;
      lVar9._2_1_ = pFVar8->bShowWidgetList;
      lVar9._3_1_ = pFVar8->bUseWidgetPathAsName;
      lVar9._4_1_ = pFVar8->bShowLegend;
      lVar9._5_1_ = pFVar8->bLogInvalidatedWidget;
      lVar9._6_1_ = pFVar8->bUsePerformanceThreshold;
      lVar9._7_1_ = pFVar8->InvalidateWidgetReasonFilter;
      goto LAB_14254597c;
    }
  }
  else {
    pFVar10 = (FConsoleSlateDebuggerInvalidate *)pTVar1->Ptr;
    pTVar1->Ptr = (FConsoleSlateDebugger *)pFVar8;
    if (pFVar10 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      lVar9._0_1_ = pFVar10->bEnabled;
      lVar9._1_1_ = pFVar10->bEnabledCVarValue;
      lVar9._2_1_ = pFVar10->bShowWidgetList;
      lVar9._3_1_ = pFVar10->bUseWidgetPathAsName;
      lVar9._4_1_ = pFVar10->bShowLegend;
      lVar9._5_1_ = pFVar10->bLogInvalidatedWidget;
      lVar9._6_1_ = pFVar10->bUsePerformanceThreshold;
      lVar9._7_1_ = pFVar10->InvalidateWidgetReasonFilter;
      pFVar8 = pFVar10;
LAB_14254597c:
      (**(code **)(lVar9 + 0x30))(pFVar8,1);
    }
  }
  pFVar10 = ::operator_new(0x198);
  pFVar8 = this_06;
  if (pFVar10 != (FConsoleSlateDebuggerInvalidate *)0x0) {
    pFVar8 = FConsoleSlateDebuggerInvalidate::FConsoleSlateDebuggerInvalidate(pFVar10);
  }
  if (pTVar4 == (TUniquePtr<FConsoleSlateDebuggerInvalidate,TDefaultDelete<FConsoleSlateDebuggerInvalidate>_>
                 *)&local_60) {
    if (pFVar8 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerInvalidate::~FConsoleSlateDebuggerInvalidate(pFVar8);
      goto LAB_1425459dd;
    }
  }
  else {
    pFVar10 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar8;
    if (pFVar10 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerInvalidate::~FConsoleSlateDebuggerInvalidate(pFVar10);
      pFVar8 = pFVar10;
LAB_1425459dd:
      ::operator_delete(pFVar8,0x198);
    }
  }
  this_01 = ::operator_new(0xe0);
  pFVar8 = this_06;
  if (this_01 != (FConsoleSlateDebuggerInvalidationRoot *)0x0) {
    pFVar8 = (FConsoleSlateDebuggerInvalidate *)
             FConsoleSlateDebuggerInvalidationRoot::FConsoleSlateDebuggerInvalidationRoot(this_01);
  }
  if (pTVar2 == (TUniquePtr<FConsoleSlateDebuggerInvalidationRoot,TDefaultDelete<FConsoleSlateDebuggerInvalidationRoot>_>
                 *)&local_58) {
    if (pFVar8 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerInvalidationRoot::~FConsoleSlateDebuggerInvalidationRoot
                ((FConsoleSlateDebuggerInvalidationRoot *)pFVar8);
      goto LAB_142545a3f;
    }
  }
  else {
    pFVar10 = (FConsoleSlateDebuggerInvalidate *)pTVar2->Ptr;
    pTVar2->Ptr = (FConsoleSlateDebuggerInvalidationRoot *)pFVar8;
    if (pFVar10 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerInvalidationRoot::~FConsoleSlateDebuggerInvalidationRoot
                ((FConsoleSlateDebuggerInvalidationRoot *)pFVar10);
      pFVar8 = pFVar10;
LAB_142545a3f:
      ::operator_delete(pFVar8,0xe0);
    }
  }
  this_02 = ::operator_new(0x160);
  pFVar8 = this_06;
  if (this_02 != (FConsoleSlateDebuggerPaint *)0x0) {
    pFVar8 = (FConsoleSlateDebuggerInvalidate *)
             FConsoleSlateDebuggerPaint::FConsoleSlateDebuggerPaint(this_02);
  }
  if (pTVar3 == (TUniquePtr<FConsoleSlateDebuggerPaint,TDefaultDelete<FConsoleSlateDebuggerPaint>_>
                 *)&local_50) {
    if (pFVar8 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerPaint::~FConsoleSlateDebuggerPaint((FConsoleSlateDebuggerPaint *)pFVar8);
      goto LAB_142545aa4;
    }
  }
  else {
    pFVar10 = (FConsoleSlateDebuggerInvalidate *)pTVar3->Ptr;
    pTVar3->Ptr = (FConsoleSlateDebuggerPaint *)pFVar8;
    if (pFVar10 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerPaint::~FConsoleSlateDebuggerPaint((FConsoleSlateDebuggerPaint *)pFVar10)
      ;
      pFVar8 = pFVar10;
LAB_142545aa4:
      ::operator_delete(pFVar8,0x160);
    }
  }
  FConsoleSlateDebuggerPaint::LoadConfig(pTVar3->Ptr);
  this_03 = ::operator_new(0x148);
  pFVar8 = this_06;
  if (this_03 != (FConsoleSlateDebuggerPrepass *)0x0) {
    pFVar8 = (FConsoleSlateDebuggerInvalidate *)
             FConsoleSlateDebuggerPrepass::FConsoleSlateDebuggerPrepass(this_03);
  }
  if (pTVar5 == (TUniquePtr<FConsoleSlateDebuggerPrepass,TDefaultDelete<FConsoleSlateDebuggerPrepass>_>
                 *)&local_48) {
    if (pFVar8 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerPrepass::~FConsoleSlateDebuggerPrepass
                ((FConsoleSlateDebuggerPrepass *)pFVar8);
      goto LAB_142545b12;
    }
  }
  else {
    pFVar10 = (FConsoleSlateDebuggerInvalidate *)pTVar5->Ptr;
    pTVar5->Ptr = (FConsoleSlateDebuggerPrepass *)pFVar8;
    if (pFVar10 != (FConsoleSlateDebuggerInvalidate *)0x0) {
      FConsoleSlateDebuggerPrepass::~FConsoleSlateDebuggerPrepass
                ((FConsoleSlateDebuggerPrepass *)pFVar10);
      pFVar8 = pFVar10;
LAB_142545b12:
      ::operator_delete(pFVar8,0x148);
    }
  }
  FConsoleSlateDebuggerPrepass::LoadConfig(pTVar5->Ptr);
  this_04 = ::operator_new(0x158);
  pFVar8 = this_06;
  if (this_04 != (FConsoleSlateDebuggerUpdate *)0x0) {
    pFVar8 = (FConsoleSlateDebuggerInvalidate *)
             FConsoleSlateDebuggerUpdate::FConsoleSlateDebuggerUpdate(this_04);
  }
  pTVar6 = &this->SlateDebuggerUpdate;
  if (pTVar6 == (TUniquePtr<FConsoleSlateDebuggerUpdate,TDefaultDelete<FConsoleSlateDebuggerUpdate>_>
                 *)&local_40) {
    if (pFVar8 == (FConsoleSlateDebuggerInvalidate *)0x0) goto LAB_142545b81;
    puVar11 = *(undefined8 **)&pFVar8->bEnabled;
  }
  else {
    pFVar10 = (FConsoleSlateDebuggerInvalidate *)pTVar6->Ptr;
    pTVar6->Ptr = (FConsoleSlateDebuggerUpdate *)pFVar8;
    if (pFVar10 == (FConsoleSlateDebuggerInvalidate *)0x0) goto LAB_142545b81;
    puVar11 = *(undefined8 **)&pFVar10->bEnabled;
    pFVar8 = pFVar10;
  }
  (*(code *)*puVar11)(pFVar8,1);
LAB_142545b81:
  this_05 = ::operator_new(0x70);
  if (this_05 != (FConsoleSlateDebuggerBreak *)0x0) {
    this_06 = (FConsoleSlateDebuggerInvalidate *)
              FConsoleSlateDebuggerBreak::FConsoleSlateDebuggerBreak(this_05);
  }
  pTVar7 = &this->SlateDebuggerBreak;
  if (pTVar7 == (TUniquePtr<FConsoleSlateDebuggerBreak,TDefaultDelete<FConsoleSlateDebuggerBreak>_>
                 *)local_38) {
    if (this_06 == (FConsoleSlateDebuggerInvalidate *)0x0) {
      return this;
    }
    FConsoleSlateDebuggerBreak::~FConsoleSlateDebuggerBreak((FConsoleSlateDebuggerBreak *)this_06);
  }
  else {
    pFVar8 = (FConsoleSlateDebuggerInvalidate *)pTVar7->Ptr;
    pTVar7->Ptr = (FConsoleSlateDebuggerBreak *)this_06;
    if (pFVar8 == (FConsoleSlateDebuggerInvalidate *)0x0) {
      return this;
    }
    FConsoleSlateDebuggerBreak::~FConsoleSlateDebuggerBreak((FConsoleSlateDebuggerBreak *)pFVar8);
    this_06 = pFVar8;
  }
  ::operator_delete(this_06,0x70);
  return this;
}

