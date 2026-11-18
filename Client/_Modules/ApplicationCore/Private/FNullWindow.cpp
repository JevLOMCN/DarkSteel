// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 40

// FNullWindow @ 1423c2480

FNullWindow * __thiscall FNullWindow::FNullWindow(FNullWindow *this)

{
  this->DPIScaleFactor = 1.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNullWindow__6B_;
  (this->ScreenPosition).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SizeInScreen).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->bIsVisible = false;
  this->bIsInitialized = false;
  return this;
}

// ~FNullWindow @ 1423c6c60

void __thiscall FNullWindow::~FNullWindow(FNullWindow *this)

{
  this->_padding_ = (longlong)&___7FGenericWindow__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// AdjustCachedSize @ 1423d02b0

void __thiscall FNullWindow::AdjustCachedSize(FNullWindow *this,TVector2<double> *param_1)

{
  if (this->bIsInitialized != false) {
    (param_1->field0_0x0)._s_0.X = (double)(this->SizeInScreen).field0_0x0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = (double)(this->SizeInScreen).field0_0x0._s_0.Y;
  }
  return;
}

// BringToFront @ 1423d13a0

void __thiscall FNullWindow::BringToFront(FNullWindow *this,bool param_1)

{
  return;
}

// Destroy @ 1423d8da0

void __thiscall FNullWindow::Destroy(FNullWindow *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNullApplication *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FNullWindow *pFStack_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FNullWindow,1> TStack_38;
  
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar4 = ::operator_new(0x120);
    if (pFVar4 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication::FNullApplication(pFVar4);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  pFVar4 = NullApplication;
  FNullApplication::FindWindowByPtr(NullApplication,&TStack_38,(FGenericWindow *)this);
  if (TStack_38.Object == (FNullWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_38.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((TStack_38.Object == (FNullWindow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFStack_48 = TStack_38.Object;
  pTStack_40 = TStack_38.SharedReferenceCount.ReferenceController;
  if (TStack_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((TStack_38.Object == (FNullWindow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (pFVar4->Windows).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&pFStack_48) &&
      ((FScriptContainerElement *)&pFStack_48 < pFVar1 + (longlong)(pFVar4->Windows).ArrayMax * 0x10
      )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = (pFVar4->Windows).ArrayNum;
  lVar5 = (longlong)iVar9;
  if (iVar9 != 0) {
    pFVar1 = (pFVar4->Windows).AllocatorInstance.Data;
    iVar11 = 0;
    bVar3 = *(FNullWindow **)pFVar1 != pFStack_48;
    lVar7 = 0;
    iVar9 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar10 = iVar9 + 1;
      if (lVar7 < lVar5) {
        pFVar6 = pFVar1 + lVar7 * 0x10;
        do {
          if (bVar3 != (*(FNullWindow **)pFVar6 != pFStack_48)) break;
          iVar10 = iVar10 + 1;
          lVar7 = lVar7 + 1;
          pFVar6 = pFVar6 + 0x10;
        } while (lVar7 < lVar5);
      }
      iVar8 = iVar10 - iVar9;
      if (bVar3 == false) {
        DestructItems<TSharedRef<FNullWindow,1>,int>
                  ((TSharedRef<FNullWindow,1> *)(pFVar1 + (longlong)iVar9 * 0x10),iVar8);
      }
      else {
        if (iVar11 != iVar9) {
          memmove(pFVar1 + (longlong)iVar11 * 0x10,pFVar1 + (longlong)iVar9 * 0x10,
                  (longlong)iVar8 << 4);
        }
        iVar11 = iVar11 + iVar8;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar9 = iVar10;
    } while (lVar7 < lVar5);
    (pFVar4->Windows).ArrayNum = iVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_38.SharedReferenceCount.ReferenceController);
  return;
}

// DrawAttention @ 1423da0e0

void __thiscall
FNullWindow::DrawAttention(FNullWindow *this,FWindowDrawAttentionParameters *param_1)

{
  return;
}

// Enable @ 1423dafd0

void __thiscall FNullWindow::Enable(FNullWindow *this,bool param_1)

{
  return;
}

// GetDPIScaleFactor @ 1423de120

float __thiscall FNullWindow::GetDPIScaleFactor(FNullWindow *this)

{
  return this->DPIScaleFactor;
}

// GetDefinition @ 1423de2d0

FGenericWindowDefinition * __thiscall FNullWindow::GetDefinition(FNullWindow *this)

{
  return (FGenericWindowDefinition *)this->_padding_;
}

// GetFullScreenInfo @ 1423defc0

bool __thiscall
FNullWindow::GetFullScreenInfo
          (FNullWindow *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  FNullApplication::GetFullscreenInfo(param_1,param_2,param_3,param_4);
  return true;
}

// GetOSWindowHandle @ 1423e0e30

void * __thiscall FNullWindow::GetOSWindowHandle(FNullWindow *this)

{
  return (void *)0x0;
}

// GetRestoredDimensions @ 1423e2320

bool __thiscall
FNullWindow::GetRestoredDimensions
          (FNullWindow *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  return false;
}

// GetWindowBorderSize @ 1423e5010

int __thiscall FNullWindow::GetWindowBorderSize(FNullWindow *this)

{
  return 0;
}

// GetWindowMode @ 1423e50e0

Type __thiscall FNullWindow::GetWindowMode(FNullWindow *this)

{
  return Fullscreen;
}

// GetWindowTitleBarSize @ 1423e56d0

int __thiscall FNullWindow::GetWindowTitleBarSize(FNullWindow *this)

{
  return 0;
}

// HACK_ForceToFront @ 1423e5a90

void __thiscall FNullWindow::HACK_ForceToFront(FNullWindow *this)

{
  return;
}

// Hide @ 1423e76b0

void __thiscall FNullWindow::Hide(FNullWindow *this)

{
  FNullApplication *this_00;
  FNullApplication *pFVar1;
  TSharedPtr<FNullWindow,1> local_18;
  
  if (this->bIsVisible == false) {
    return;
  }
  if (NullApplication == (FNullApplication *)0x0) {
    this_00 = ::operator_new(0x120);
    pFVar1 = (FNullApplication *)0x0;
    if (this_00 != (FNullApplication *)0x0) {
      pFVar1 = FNullApplication::FNullApplication(this_00);
    }
    NullApplication = pFVar1;
    if (pFVar1 == (FNullApplication *)0x0) goto LAB_1423e7708;
  }
  FNullApplication::FindWindowByPtr(NullApplication,&local_18,(FGenericWindow *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_1423e7708:
  this->bIsVisible = false;
  return;
}

// Initialize @ 1423e7c10

void __thiscall
FNullWindow::Initialize
          (FNullWindow *this,FNullApplication *param_1,
          TSharedRef<FGenericWindowDefinition,1> *param_2,TSharedPtr<FNullWindow,1> *param_3,
          bool param_4)

{
  float fVar1;
  FGenericWindowDefinition *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_2->Object;
  local_10.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FGenericWindowDefinition **)&this->_padding_ != &local_18) {
    this->_padding_ = (longlong)local_18;
    local_18 = (FGenericWindowDefinition *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  (this->ScreenPosition).field0_0x0._s_0.X = (int)param_2->Object->XDesiredPositionOnScreen;
  (this->ScreenPosition).field0_0x0._s_0.Y = (int)param_2->Object->YDesiredPositionOnScreen;
  (this->SizeInScreen).field0_0x0._s_0.X = (int)param_2->Object->WidthDesiredOnScreen;
  fVar1 = param_2->Object->HeightDesiredOnScreen;
  this->bIsInitialized = true;
  (this->SizeInScreen).field0_0x0._s_0.Y = (int)fVar1;
  return;
}

// IsDefinitionValid @ 1423ea7c0

bool __thiscall FNullWindow::IsDefinitionValid(FNullWindow *this)

{
  return this->_padding_ != 0;
}

// IsForegroundWindow @ 1423ea860

bool __thiscall FNullWindow::IsForegroundWindow(FNullWindow *this)

{
  return true;
}

// IsFullscreenSupported @ 1423ea8b0

bool __thiscall FNullWindow::IsFullscreenSupported(FNullWindow *this)

{
  return true;
}

// IsManualManageDPIChanges @ 1423eab70

bool __thiscall FNullWindow::IsManualManageDPIChanges(FNullWindow *this)

{
  return false;
}

// IsMaximized @ 1423eaba0

bool __thiscall FNullWindow::IsMaximized(FNullWindow *this)

{
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  (**(code **)(this->_padding_ + 0x10))(this,local_res20,local_res18,local_res8,local_res10);
  if (((this->SizeInScreen).field0_0x0._s_0.X == local_res8[0]) &&
     ((this->SizeInScreen).field0_0x0._s_0.Y == local_res10[0])) {
    return true;
  }
  return false;
}

// IsMinimized @ 1423eac30

bool __thiscall FNullWindow::IsMinimized(FNullWindow *this)

{
  return false;
}

// IsPointInWindow @ 1423eae10

bool __thiscall FNullWindow::IsPointInWindow(FNullWindow *this,int param_1,int param_2)

{
  return true;
}

// IsVisible @ 1423eb5a0

bool __thiscall FNullWindow::IsVisible(FNullWindow *this)

{
  return this->bIsVisible;
}

// Make @ 1423ee9e0

TSharedRef<FNullWindow,1> * __cdecl
FNullWindow::Make(TSharedRef<FNullWindow,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FNullWindow> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(0x38);
  if (local_res8[0].Object != (FNullWindow *)0x0) {
    (local_res8[0].Object)->_padding_ = 0;
    (local_res8[0].Object)->_padding_ = 0;
    (local_res8[0].Object)->_padding_ = (longlong)&___7FNullWindow__6B_;
    (local_res8[0].Object)->DPIScaleFactor = 1.0;
    ((local_res8[0].Object)->ScreenPosition).field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    ((local_res8[0].Object)->SizeInScreen).field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    (local_res8[0].Object)->bIsVisible = false;
    (local_res8[0].Object)->bIsInitialized = false;
  }
  TSharedRef<FNullWindow,1>::TSharedRef<FNullWindow,1><FNullWindow>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// Maximize @ 1423eef30

void __thiscall FNullWindow::Maximize(FNullWindow *this)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))(this,local_res20,local_res18,local_res10,local_res8)
  ;
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 8))
              (this,local_res20[0],local_res18[0],local_res10[0],local_res8[0]);
  }
  return;
}

// Minimize @ 1423eefd0

void __thiscall FNullWindow::Minimize(FNullWindow *this)

{
  return;
}

// MoveWindowTo @ 1423ef490

void __thiscall FNullWindow::MoveWindowTo(FNullWindow *this,int param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FNullApplication *pFVar5;
  TSharedPtr<FNullWindow,1> local_48;
  FNullWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  
  (this->ScreenPosition).field0_0x0._s_0.X = param_1;
  (this->ScreenPosition).field0_0x0._s_0.Y = param_2;
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar5 = ::operator_new(0x120);
    if (pFVar5 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication::FNullApplication(pFVar5);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  pFVar5 = NullApplication;
  FNullApplication::FindWindowByPtr(NullApplication,&local_48,(FGenericWindow *)this);
  pTVar1 = (TReferenceControllerBase<1> *)pFVar5->_padding_;
  plVar2 = (longlong *)pFVar5->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar3 = *(code **)(*plVar2 + 0x168);
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38 = local_48.Object;
  local_30 = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(plVar2,&local_38,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// ReshapeWindow @ 1424016b0

void __thiscall
FNullWindow::ReshapeWindow(FNullWindow *this,int param_1,int param_2,int param_3,int param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FNullApplication *pFVar5;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  TSharedPtr<FNullWindow,1> local_48;
  FNullWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  
  (**(code **)(this->_padding_ + 0x18))
            (this,CONCAT44(in_register_00000014,param_1),CONCAT44(in_register_00000084,param_2));
  (this->SizeInScreen).field0_0x0._s_0.Y = param_4;
  (this->SizeInScreen).field0_0x0._s_0.X = param_3;
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar5 = ::operator_new(0x120);
    if (pFVar5 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication::FNullApplication(pFVar5);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      return;
    }
  }
  pFVar5 = NullApplication;
  FNullApplication::FindWindowByPtr(NullApplication,&local_48,(FGenericWindow *)this);
  pTVar1 = (TReferenceControllerBase<1> *)pFVar5->_padding_;
  plVar2 = (longlong *)pFVar5->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar3 = *(code **)(*plVar2 + 0x128);
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_48.Object == (FNullWindow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38 = local_48.Object;
  local_30 = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(plVar2,&local_38,param_3,param_4,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// Restore @ 142402050

void __thiscall FNullWindow::Restore(FNullWindow *this)

{
  char cVar1;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))(this,local_res20,local_res18,local_res8,local_res10)
  ;
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 8))
              (this,(local_res8[0] / 2) / 2,(local_res10[0] / 2) / 2,local_res8[0] / 2,
               local_res10[0] / 2);
  }
  return;
}

// SetDPIScaleFactor @ 1424041c0

void __thiscall FNullWindow::SetDPIScaleFactor(FNullWindow *this,float param_1)

{
  this->DPIScaleFactor = param_1;
  return;
}

// SetManualManageDPIChanges @ 1424050d0

void __thiscall FNullWindow::SetManualManageDPIChanges(FNullWindow *this,bool param_1)

{
  return;
}

// SetNativeWindowButtonsVisibility @ 142405390

void __thiscall FNullWindow::SetNativeWindowButtonsVisibility(FNullWindow *this,bool param_1)

{
  return;
}

// SetOpacity @ 1424053b0

void __thiscall FNullWindow::SetOpacity(FNullWindow *this,float param_1)

{
  return;
}

// SetText @ 142405990

void __thiscall FNullWindow::SetText(FNullWindow *this,wchar_t *param_1)

{
  return;
}

// SetWindowFocus @ 142405fb0

void __thiscall FNullWindow::SetWindowFocus(FNullWindow *this)

{
  return;
}

// SetWindowMode @ 142406000

void __thiscall FNullWindow::SetWindowMode(FNullWindow *this,Type param_1)

{
  return;
}

// Show @ 1424063e0

void __thiscall FNullWindow::Show(FNullWindow *this)

{
  FNullApplication *pFVar1;
  TSharedPtr<FNullWindow,1> local_18;
  
  if (this->bIsVisible != false) {
    return;
  }
  if (NullApplication == (FNullApplication *)0x0) {
    pFVar1 = ::operator_new(0x120);
    if (pFVar1 == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication::FNullApplication(pFVar1);
    }
    if (NullApplication == (FNullApplication *)0x0) goto LAB_142406451;
  }
  pFVar1 = NullApplication;
  FNullApplication::FindWindowByPtr(NullApplication,&local_18,(FGenericWindow *)this);
  FNullApplication::ActivateWindow(pFVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_142406451:
  this->bIsVisible = true;
  return;
}

