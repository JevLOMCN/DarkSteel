// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 56

// FWindowsWindow @ 1423c5320

FWindowsWindow * __thiscall FWindowsWindow::FWindowsWindow(FWindowsWindow *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->WindowMode = Windowed;
  this->OLEReferenceCount = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FGenericWindow__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDropTarget__;
  this->HWnd = (HWND__ *)0x0;
  this->AspectRatio = 1.0;
  puVar2 = &this->field_0xa4;
  this->bIsVisible = false;
  this->bInitiallyMaximized = false;
  this->bInitiallyMinimized = false;
  this->bIsFirstTimeVisible = true;
  this->DPIScaleFactor = 1.0;
  this->bHandleManualDPIChanges = false;
  (this->PreFullscreenWindowPlacement).length = 0;
  (this->PreFullscreenWindowPlacement).flags = 0;
  (this->PreFullscreenWindowPlacement).showCmd = 0;
  (this->PreFullscreenWindowPlacement).ptMinPosition.x = 0;
  *(undefined8 *)&(this->PreFullscreenWindowPlacement).ptMinPosition.y = 0;
  *(undefined8 *)&(this->PreFullscreenWindowPlacement).ptMaxPosition.y = 0;
  (this->PreFullscreenWindowPlacement).rcNormalPosition.top = 0;
  (this->PreFullscreenWindowPlacement).rcNormalPosition.right = 0;
  (this->PreFullscreenWindowPlacement).rcNormalPosition.bottom = 0;
  (this->PreParentMinimizedWindowPlacement).flags = 0;
  (this->PreParentMinimizedWindowPlacement).showCmd = 0;
  (this->PreParentMinimizedWindowPlacement).ptMinPosition.x = 0;
  (this->PreParentMinimizedWindowPlacement).ptMinPosition.y = 0;
  (this->PreParentMinimizedWindowPlacement).ptMaxPosition.x = 0;
  (this->PreParentMinimizedWindowPlacement).ptMaxPosition.y = 0;
  (this->PreParentMinimizedWindowPlacement).rcNormalPosition.left = 0;
  (this->PreParentMinimizedWindowPlacement).rcNormalPosition.top = 0;
  (this->PreParentMinimizedWindowPlacement).rcNormalPosition.right = 0;
  (this->PreParentMinimizedWindowPlacement).rcNormalPosition.bottom = 0;
  (this->PreParentMinimizedWindowPlacement).length = 0x2c;
  return this;
}

// ~FWindowsWindow @ 1423c7a30

void __thiscall FWindowsWindow::~FWindowsWindow(FWindowsWindow *this)

{
  this->_padding_ = (longlong)&_vftable__for__IDropTarget__;
  this->_padding_ = (longlong)&___7FGenericWindow__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// AddRef @ 1423d0270

ulong __thiscall FWindowsWindow::AddRef(FWindowsWindow *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)((longlong)&this->OwningApplication + 4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return *(ulong *)((longlong)&this->OwningApplication + 4);
}

// AdjustCachedSize @ 1423d02e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWindowsWindow::AdjustCachedSize(FWindowsWindow *this,TVector2<double> *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((this->_padding_ != 0) && (*(char *)(this->_padding_ + 0x27) != '\0')) {
    iVar1 = this->VirtualHeight;
    (param_1->field0_0x0)._s_0.X = (double)this->VirtualWidth;
    (param_1->field0_0x0)._s_0.Y = (double)iVar1;
    return;
  }
  if ((HWND)this->HWnd != (HWND)0x0) {
    GetClientRect((HWND)this->HWnd,&local_28);
    (param_1->field0_0x0)._s_0.X = (double)(local_28.right - local_28.left);
    (param_1->field0_0x0)._s_0.Y = (double)(local_28.bottom - local_28.top);
  }
  return;
}

// AdjustWindowRegion @ 1423d03a0

void __thiscall FWindowsWindow::AdjustWindowRegion(FWindowsWindow *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  HRGN__ *hRgn;
  
  this->RegionWidth = param_1;
  this->RegionHeight = param_2;
  hRgn = MakeWindowRegionObject(this,true);
  iVar3 = SetWindowRgn((HWND)this->HWnd,(HRGN)hRgn,0);
  if (iVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SetWindowRgn( HWnd, Region, false )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsWindow.cpp"
                       ,0x1e1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// BringToFront @ 1423d13b0

void __thiscall FWindowsWindow::BringToFront(FWindowsWindow *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(this->_padding_ + 0x25) != '\0') {
    BVar3 = IsIconic((HWND)this->HWnd);
    if (BVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d1418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ShowWindow((HWND)this->HWnd,9);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001423d1429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetActiveWindow((HWND)this->HWnd);
    return;
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetWindowPos((HWND)this->HWnd,(HWND)-(ulonglong)(*(char *)(this->_padding_ + 0x1a) != '\0'),0,0,0,
               0,(param_1 ^ 1) * 0x10 + 0x203);
  return;
}

// Destroy @ 1423d8db0

void __thiscall FWindowsWindow::Destroy(FWindowsWindow *this)

{
  BOOL BVar1;
  HRESULT HVar2;
  FWindowsWindow *local_res8 [4];
  
  if (0 < this->OLEReferenceCount) {
    BVar1 = IsWindow((HWND)this->HWnd);
    if (BVar1 != 0) {
      HVar2 = RevokeDragDrop((HWND)this->HWnd);
      if ((HVar2 == 0) && (this->OLEReferenceCount != 0)) {
        local_res8[0] = this;
        `FWindowsWindow::Destroy'::__l8::<lambda_1>::operator()(local_res8);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001423d8df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroyWindow((HWND)this->HWnd);
  return;
}

// DisableTouchFeedback @ 1423d9d80

void __thiscall FWindowsWindow::DisableTouchFeedback(FWindowsWindow *this)

{
  HMODULE pHVar1;
  code *pcVar2;
  undefined4 local_res10 [6];
  
  pHVar1 = GetModuleHandleW(L"user32.dll");
  if ((pHVar1 != (HMODULE)0x0) &&
     (pcVar2 = FWindowsPlatformProcess::GetDllExport(pHVar1,L"SetWindowFeedbackSetting"),
     pcVar2 != (code *)0x0)) {
    local_res10[0] = 0;
    (*pcVar2)(this->HWnd,1,0,4,local_res10);
    (*pcVar2)(this->HWnd,7,0,4,local_res10);
    (*pcVar2)(this->HWnd,9,0,4,local_res10);
  }
  return;
}

// DragEnter @ 1423d9e30

undefined4 __thiscall
FWindowsWindow::DragEnter
          (FWindowsWindow *this,IDataObject *param_1,ulong param_2,_POINTL param_3,ulong *param_4)

{
  FWindowsApplication *this_00;
  bool bVar1;
  T_HRESULT TVar2;
  FDragDropOLEData local_78;
  FDeferredWindowsDragDropOperation local_50;
  
  DecipherOLEData(&local_78,param_1);
  bVar1 = IsInGameThread();
  this_00 = (FWindowsApplication *)this->_padding_;
  if (bVar1) {
    TVar2 = FWindowsApplication::OnOLEDragEnter
                      (this_00,(HWND__ *)this->_padding_,&local_78,param_2,param_3,param_4);
  }
  else {
    TVar2 = 0;
    local_50.OLEData.OperationText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.OLEData.OperationText.Data.ArrayNum = 0;
    local_50.OLEData.OperationText.Data.ArrayMax = 0;
    local_50.OLEData.OperationFilenames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.OLEData.OperationFilenames.ArrayNum = 0;
    local_50.OLEData.OperationFilenames.ArrayMax = 0;
    local_50.OLEData.Type = '\0';
    local_50.KeyState = 0;
    local_50.CursorPosition.x = 0;
    local_50.CursorPosition.y = 0;
    local_50.OperationType = DragEnter;
    local_50.HWnd = (HWND__ *)this->_padding_;
    FDragDropOLEData::operator=(&local_50.OLEData,&local_78);
    local_50.CursorPosition.x = param_3.x;
    local_50.CursorPosition.y = param_3.y;
    local_50.KeyState = param_2;
    FWindowsApplication::DeferDragDropOperation(this_00,&local_50);
    DestructItems<FString,int>
              ((FString *)local_50.OLEData.OperationFilenames.AllocatorInstance.Data,
               local_50.OLEData.OperationFilenames.ArrayNum);
    if (local_50.OLEData.OperationFilenames.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_50.OLEData.OperationFilenames.AllocatorInstance.Data);
    }
    if (local_50.OLEData.OperationText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_50.OLEData.OperationText.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>
            ((FString *)local_78.OperationFilenames.AllocatorInstance.Data,
             local_78.OperationFilenames.ArrayNum);
  if (local_78.OperationFilenames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.OperationFilenames.AllocatorInstance.Data);
  }
  if (local_78.OperationText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.OperationText.Data.AllocatorInstance.Data);
  }
  return TVar2;
}

// DragLeave @ 1423d9f60

undefined4 __thiscall FWindowsWindow::DragLeave(FWindowsWindow *this)

{
  bool bVar1;
  T_HRESULT TVar2;
  FDeferredWindowsDragDropOperation local_58;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    TVar2 = FWindowsApplication::OnOLEDragOut
                      ((FWindowsApplication *)this->_padding_,(HWND__ *)this->_padding_);
    return TVar2;
  }
  local_58.OperationType = DragLeave;
  local_58.OLEData.OperationText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.OLEData.OperationText.Data.ArrayNum = 0;
  local_58.OLEData.OperationText.Data.ArrayMax = 0;
  local_58.OLEData.OperationFilenames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.OLEData.OperationFilenames.ArrayNum = 0;
  local_58.OLEData.OperationFilenames.ArrayMax = 0;
  local_58.OLEData.Type = '\0';
  local_58.KeyState = 0;
  local_58.CursorPosition.x = 0;
  local_58.CursorPosition.y = 0;
  local_58.HWnd = (HWND__ *)this->_padding_;
  FWindowsApplication::DeferDragDropOperation((FWindowsApplication *)this->_padding_,&local_58);
  DestructItems<FString,int>
            ((FString *)local_58.OLEData.OperationFilenames.AllocatorInstance.Data,
             local_58.OLEData.OperationFilenames.ArrayNum);
  if (local_58.OLEData.OperationFilenames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_58.OLEData.OperationFilenames.AllocatorInstance.Data);
  }
  if (local_58.OLEData.OperationText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_58.OLEData.OperationText.Data.AllocatorInstance.Data);
  }
  return 0;
}

// DragOver @ 1423da000

undefined4 __thiscall
FWindowsWindow::DragOver(FWindowsWindow *this,ulong param_1,_POINTL param_2,ulong *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  FDeferredWindowsDragDropOperation local_58;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    uVar2 = FWindowsApplication::OnOLEDragOver
                      ((FWindowsApplication *)this->_padding_,(HWND__ *)this->_padding_,param_1,
                       param_2,param_3);
  }
  else {
    local_58.OperationType = DragOver;
    local_58.OLEData.OperationText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.OLEData.OperationText.Data.ArrayNum = 0;
    local_58.OLEData.OperationText.Data.ArrayMax = 0;
    local_58.OLEData.OperationFilenames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.OLEData.OperationFilenames.ArrayNum = 0;
    local_58.OLEData.OperationFilenames.ArrayMax = 0;
    local_58.OLEData.Type = '\0';
    local_58.HWnd = (HWND__ *)this->_padding_;
    local_58.KeyState = param_1;
    local_58.CursorPosition = param_2;
    FWindowsApplication::DeferDragDropOperation((FWindowsApplication *)this->_padding_,&local_58);
    DestructItems<FString,int>
              ((FString *)local_58.OLEData.OperationFilenames.AllocatorInstance.Data,
               local_58.OLEData.OperationFilenames.ArrayNum);
    if (local_58.OLEData.OperationFilenames.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_58.OLEData.OperationFilenames.AllocatorInstance.Data);
    }
    if (local_58.OLEData.OperationText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_58.OLEData.OperationText.Data.AllocatorInstance.Data);
    }
    uVar2 = 0;
  }
  return uVar2;
}

// DrawAttention @ 1423da0f0

void __thiscall
FWindowsWindow::DrawAttention(FWindowsWindow *this,FWindowDrawAttentionParameters *param_1)

{
  FWindowDrawAttentionParameters *local_res8 [4];
  FLASHWINFO local_28;
  
  local_28.hwnd = (HWND)this->HWnd;
  local_28.cbSize = 0x20;
  local_28._4_4_ = 0;
  local_28.dwFlags = 0;
  local_28.uCount = 0;
  local_28.dwTimeout = 0;
  local_28._28_4_ = 0;
  if (param_1->RequestType == UntilActivated) {
    local_28.dwFlags = 0xe;
    local_28.uCount = 0;
  }
  else if (param_1->RequestType != Stop) {
    local_res8[0] = param_1;
    `FWindowsWindow::DrawAttention'::__l4::<lambda_1>::operator()(local_res8);
    FlashWindowEx(&local_28);
    return;
  }
  FlashWindowEx(&local_28);
  return;
}

// Drop @ 1423da9d0

undefined4 __thiscall
FWindowsWindow::Drop
          (FWindowsWindow *this,IDataObject *param_1,ulong param_2,_POINTL param_3,ulong *param_4)

{
  FWindowsApplication *this_00;
  bool bVar1;
  T_HRESULT TVar2;
  FDragDropOLEData local_78;
  FDeferredWindowsDragDropOperation local_50;
  
  DecipherOLEData(&local_78,param_1);
  bVar1 = IsInGameThread();
  this_00 = (FWindowsApplication *)this->_padding_;
  if (bVar1) {
    TVar2 = FWindowsApplication::OnOLEDrop
                      (this_00,(HWND__ *)this->_padding_,&local_78,param_2,param_3,param_4);
  }
  else {
    TVar2 = 0;
    local_50.OLEData.OperationText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.OLEData.OperationText.Data.ArrayNum = 0;
    local_50.OLEData.OperationText.Data.ArrayMax = 0;
    local_50.OLEData.OperationFilenames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.OLEData.OperationFilenames.ArrayNum = 0;
    local_50.OLEData.OperationFilenames.ArrayMax = 0;
    local_50.OLEData.Type = '\0';
    local_50.KeyState = 0;
    local_50.CursorPosition.x = 0;
    local_50.CursorPosition.y = 0;
    local_50.OperationType = Drop;
    local_50.HWnd = (HWND__ *)this->_padding_;
    FDragDropOLEData::operator=(&local_50.OLEData,&local_78);
    local_50.CursorPosition.x = param_3.x;
    local_50.CursorPosition.y = param_3.y;
    local_50.KeyState = param_2;
    FWindowsApplication::DeferDragDropOperation(this_00,&local_50);
    DestructItems<FString,int>
              ((FString *)local_50.OLEData.OperationFilenames.AllocatorInstance.Data,
               local_50.OLEData.OperationFilenames.ArrayNum);
    if (local_50.OLEData.OperationFilenames.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_50.OLEData.OperationFilenames.AllocatorInstance.Data);
    }
    if (local_50.OLEData.OperationText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_50.OLEData.OperationText.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>
            ((FString *)local_78.OperationFilenames.AllocatorInstance.Data,
             local_78.OperationFilenames.ArrayNum);
  if (local_78.OperationFilenames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.OperationFilenames.AllocatorInstance.Data);
  }
  if (local_78.OperationText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.OperationText.Data.AllocatorInstance.Data);
  }
  return TVar2;
}

// Enable @ 1423dafe0

void __thiscall FWindowsWindow::Enable(FWindowsWindow *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001423dafe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow((HWND)this->HWnd,(uint)param_1);
  return;
}

// GetDPIScaleFactor @ 1423de130

float __thiscall FWindowsWindow::GetDPIScaleFactor(FWindowsWindow *this)

{
  return this->DPIScaleFactor;
}

// GetFullScreenInfo @ 1423deff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsWindow::GetFullScreenInfo
          (FWindowsWindow *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  HMONITOR hMonitor;
  undefined1 auStack_78 [32];
  tagMONITORINFO local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  hMonitor = MonitorFromWindow((HWND)this->HWnd,(this->WindowMode != Fullscreen) + 1);
  local_58.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_58);
  *param_1 = local_58.rcMonitor.left;
  *param_2 = local_58.rcMonitor.top;
  *param_3 = local_58.rcMonitor.right - *param_1;
  *param_4 = local_58.rcMonitor.bottom - *param_2;
  return true;
}

// GetHWnd @ 1423df330

HWND__ * __thiscall FWindowsWindow::GetHWnd(FWindowsWindow *this)

{
  return this->HWnd;
}

// GetOSWindowHandle @ 1423e0e40

void * __thiscall FWindowsWindow::GetOSWindowHandle(FWindowsWindow *this)

{
  return this->HWnd;
}

// GetRestoredDimensions @ 1423e2330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWindowsWindow::GetRestoredDimensions
          (FWindowsWindow *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  BOOL BVar2;
  LONG LVar3;
  HMONITOR hMonitor;
  undefined1 auStack_a8 [32];
  tagMONITORINFO local_88;
  WINDOWPLACEMENT local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60.length = 0x2c;
  BVar2 = GetWindowPlacement((HWND)this->HWnd,&local_60);
  if (BVar2 == 0) {
    bVar1 = false;
  }
  else {
    *param_1 = local_60.rcNormalPosition.left;
    *param_2 = local_60.rcNormalPosition.top;
    *param_3 = local_60.rcNormalPosition.right - local_60.rcNormalPosition.left;
    *param_4 = local_60.rcNormalPosition.bottom - local_60.rcNormalPosition.top;
    LVar3 = GetWindowLongW((HWND)this->HWnd,-0x14);
    if (-1 < (char)LVar3) {
      hMonitor = MonitorFromWindow((HWND)this->HWnd,(this->WindowMode != Fullscreen) + 1);
      local_88.cbSize = 0x28;
      GetMonitorInfoW(hMonitor,&local_88);
      *param_1 = *param_1 + (local_88.rcWork.left - local_88.rcMonitor.left);
      *param_2 = *param_2 + (local_88.rcWork.top - local_88.rcMonitor.top);
    }
    bVar1 = true;
  }
  return bVar1;
}

// GetWindowBorderSize @ 1423e5020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FWindowsWindow::GetWindowBorderSize(FWindowsWindow *this)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  tagWINDOWINFO local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  piVar1 = (int *)(**(code **)(this->_padding_ + 0xe0))();
  if (*piVar1 == 5) {
    lVar2 = (**(code **)(this->_padding_ + 0xe0))(this);
    if (*(char *)(lVar2 + 0x18) == '\0') {
      return 0;
    }
  }
  local_58.cyWindowBorders = 0;
  local_58.atomWindowType = 0;
  local_58.wCreatorVersion = 0;
  local_58.cbSize = 0x3c;
  local_58.rcWindow.left = 0;
  local_58.rcWindow.top = 0;
  local_58.rcWindow.right = 0;
  local_58.rcWindow.bottom = 0;
  local_58.rcClient.left = 0;
  local_58.rcClient.top = 0;
  local_58.rcClient.right = 0;
  local_58.rcClient.bottom = 0;
  local_58.dwStyle = 0;
  local_58.dwExStyle = 0;
  local_58.dwWindowStatus = 0;
  local_58.cxWindowBorders = 0;
  GetWindowInfo((HWND)this->HWnd,&local_58);
  return local_58.cxWindowBorders;
}

// GetWindowMode @ 1423e50f0

Type __thiscall FWindowsWindow::GetWindowMode(FWindowsWindow *this)

{
  return this->WindowMode;
}

// GetWindowPixels @ 1423e5100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FColor,TSizedDefaultAllocator<32>_> * __thiscall
FWindowsWindow::GetWindowPixels
          (FWindowsWindow *this,TArray<FColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          uint *param_1,uint *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ pvVar9;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  UINT cLines;
  ForAnyElementType FVar12;
  uint cx;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  uint local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  HBITMAP local_b8;
  uint *local_b0;
  uint *local_a8;
  HDC local_a0;
  FWindowsWindow *local_98;
  tagRECT local_90;
  tagBITMAPINFO local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_128;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  local_98 = this;
  BVar6 = GetClientRect((HWND)this->HWnd,&local_90);
  if (BVar6 != 0) {
    cx = local_90.right - local_90.left;
    cLines = local_90.bottom - local_90.top;
    hdc = GetDC((HWND)this->HWnd);
    if (hdc != (HDC)0x0) {
      local_a0 = hdc;
      hdc_00 = CreateCompatibleDC(hdc);
      if (hdc_00 == (HDC)0x0) {
        ReleaseDC((HWND)this->HWnd,hdc);
      }
      else {
        local_b8 = CreateCompatibleBitmap(hdc,cx,cLines);
        if (local_b8 == (HBITMAP)0x0) {
          ReleaseDC((HWND)this->HWnd,hdc);
          DeleteDC(hdc_00);
        }
        else {
          pvVar9 = SelectObject(hdc_00,local_b8);
          if ((pvVar9 != (HGDIOBJ)0x0) &&
             (BVar6 = PrintWindow((HWND)this->HWnd,hdc_00,3), BVar6 != 0)) {
            local_80.bmiHeader.biSize = 0x28;
            local_80.bmiHeader.biClrImportant = 0;
            local_80.bmiColors[0].rgbBlue = '\0';
            local_80.bmiColors[0].rgbGreen = '\0';
            local_80.bmiColors[0].rgbRed = '\0';
            local_80.bmiColors[0].rgbReserved = '\0';
            local_80.bmiHeader.biHeight = -cLines;
            local_80.bmiHeader.biPlanes = 1;
            local_80.bmiHeader.biBitCount = 0x20;
            local_80.bmiHeader.biCompression = 0;
            uVar7 = cLines * cx;
            local_80.bmiHeader.biSizeImage = 0;
            local_80.bmiHeader.biXPelsPerMeter = 0;
            local_80.bmiHeader.biYPelsPerMeter = 0;
            local_80.bmiHeader.biClrUsed = 0;
            local_c8.Data = (FScriptContainerElement *)0x0;
            local_c0 = 0;
            local_80.bmiHeader.biWidth = cx;
            if ((int)uVar7 < 1) {
              if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
              }
            }
            else {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,1,uVar7,&local_c8,(int *)&local_c0,(int *)((longlong)&local_c0 + 4));
            }
            local_d0 = GetDIBits(hdc_00,local_b8,0,cLines,local_c8.Data,&local_80,0);
            if (local_d0 != 0) {
              iVar4 = (int)local_c0;
              uVar11 = (ulonglong)(int)local_c0;
              pFVar1 = local_c8.Data + uVar11 * 4;
              FVar12.Data = local_c8.Data;
              while( true ) {
                if ((int)uVar11 != iVar4) {
                  local_d8[0] = 0;
                  `TCheckedPointerIterator<tagRGBQUAD_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_d8);
                }
                if (FVar12.Data == pFVar1) break;
                pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
                local_d4 = CONCAT13(0xff,*(undefined3 *)FVar12.Data);
                if (((pFVar2 <= (FScriptContainerElement *)&local_d4) &&
                    ((FScriptContainerElement *)&local_d4 <
                     pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar10 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                  return pTVar10;
                }
                iVar8 = __return_storage_ptr__->ArrayNum;
                if (iVar8 == __return_storage_ptr__->ArrayMax) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                FVar12.Data = FVar12.Data + 4;
                __return_storage_ptr__->ArrayNum = iVar8 + 1;
                *(undefined4 *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_d4
                ;
                uVar11 = local_c0 & 0xffffffff;
              }
              *local_b0 = cx;
              *local_a8 = local_d0;
              this = local_98;
              hdc = local_a0;
            }
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data);
            }
          }
          ReleaseDC((HWND)this->HWnd,hdc);
          DeleteDC(hdc_00);
          DeleteObject(local_b8);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetWindowTitleBarSize @ 1423e56e0

int __thiscall FWindowsWindow::GetWindowTitleBarSize(FWindowsWindow *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001423e56e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(4);
  return iVar1;
}

// HACK_ForceToFront @ 1423e5aa0

void __thiscall FWindowsWindow::HACK_ForceToFront(FWindowsWindow *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423e5aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetForegroundWindow((HWND)this->HWnd);
  return;
}

// Hide @ 1423e7830

void __thiscall FWindowsWindow::Hide(FWindowsWindow *this)

{
  if (this->bIsVisible) {
    this->field_0xa4 = this->field_0xa4 & 0xfe;
                    /* WARNING: Could not recover jumptable at 0x0001423e7849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ShowWindow((HWND)this->HWnd,0);
    return;
  }
  return;
}

// Initialize @ 1423e8640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsWindow::Initialize
          (FWindowsWindow *this,FWindowsApplication *param_1,
          TSharedRef<FGenericWindowDefinition,1> *param_2,HINSTANCE__ *param_3,
          TSharedPtr<FWindowsWindow,1> *param_4,bool param_5)

{
  longlong *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  void *hWnd;
  bool bVar8;
  BOOL BVar9;
  HRESULT HVar10;
  LONG LVar11;
  HWND pHVar12;
  FThreadHeartBeat *pFVar13;
  HANDLE pvVar14;
  FGenericWindowDefinition *pFVar15;
  HMENU pHVar16;
  uint uVar17;
  UINT uFlags;
  int iVar18;
  uint uVar19;
  int iVar20;
  wchar_t *lpWindowName;
  uint uVar21;
  float fVar22;
  undefined1 auStackY_148 [32];
  bool local_e8 [4];
  int local_e4;
  int local_e0;
  DWORD local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  TSharedPtr<FWindowsWindow,1> *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  TSharedPtr<FGenericWindowDefinition,1> local_b8;
  HINSTANCE__ *local_a8;
  tagRECT local_a0;
  tagRECT local_90;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_b8.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_b8.Object = param_2->Object;
  local_c8 = param_4;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->_padding_;
  local_a8 = param_3;
  if ((TSharedPtr<FGenericWindowDefinition,1> *)this_00 != &local_b8) {
    *this_00 = (longlong)local_b8.Object;
    local_b8.Object = (FGenericWindowDefinition *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  this->OwningApplication = param_1;
  this->RegionWidth = -1;
  this->RegionHeight = -1;
  if ((*this_00 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar1 = *(float *)(*this_00 + 4);
  if ((*this_00 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar2 = *(float *)(*this_00 + 8);
  if ((*this_00 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar3 = *(float *)(*this_00 + 0xc);
  if ((*this_00 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar4 = *(float *)(*this_00 + 0x10);
  fVar22 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(fVar1,fVar2);
  this->DPIScaleFactor = fVar22;
  local_e4 = (int)fVar2;
  iVar18 = (int)fVar3;
  local_e0 = (int)fVar1;
  iVar20 = (int)fVar4;
  local_d8 = iVar18;
  local_d4 = iVar20;
  local_d0 = local_e4;
  local_cc = local_e0;
  if ((*this_00 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar6 = *this_00;
  if (*(char *)(lVar6 + 0x18) == '\0') {
    if ((lVar6 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar21 = 0x86000000;
    iVar5 = *(int *)(*this_00 + 0x14);
    if ((*this_00 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(char *)(*this_00 + 0x19) == '\0') {
      uVar19 = 0x80180;
      uVar17 = 0x180;
    }
    else {
      uVar19 = 0xc0100;
      uVar17 = 0x40100;
    }
    if (iVar5 != 1) {
      uVar19 = uVar17;
    }
    if ((*this_00 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(char *)(*this_00 + 0x1a) != '\0') {
      uVar19 = uVar19 | 8;
    }
    if ((*this_00 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_4 = local_c8;
    if (*(char *)(*this_00 + 0x1b) == '\0') {
      uVar19 = uVar19 | 0x20;
    }
  }
  else {
    uVar19 = 0x40000;
    if ((lVar6 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(char *)(*this_00 + 0x25) == '\0') {
      uVar21 = 0x80c80000;
    }
    else {
      if ((*this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = 0xc90000;
      if (*(char *)(*this_00 + 0x23) == '\0') {
        uVar21 = 0xc80000;
      }
      if ((*this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(char *)(*this_00 + 0x22) != '\0') {
        uVar21 = uVar21 | 0x20000;
      }
      if ((*this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(char *)(*this_00 + 0x26) != '\0') {
        uVar21 = uVar21 | 0x40000;
      }
    }
    local_a0.left = 0;
    local_a0.top = 0;
    local_a0.right = 0;
    local_a0.bottom = 0;
    AdjustWindowRectEx(&local_a0,uVar21,0,0x40000);
    local_e0 = local_cc + local_a0.left;
    local_e4 = local_d0 + local_a0.top;
    iVar18 = (local_a0.right - local_a0.left) + local_d8;
    iVar20 = (local_a0.bottom - local_a0.top) + local_d4;
  }
  hWnd = GUELibraryOverrideSettings.WindowHandle;
  local_c8 = (TSharedPtr<FWindowsWindow,1> *)CONCAT44(local_c8._4_4_,uVar21);
  if (((GUELibraryOverrideSettings.bIsEmbedded == false) ||
      (GUELibraryOverrideSettings.WindowHandle == (void *)0x0)) || (GOverrideNextWnd == false)) {
    if (param_4->Object == (FWindowsWindow *)0x0) {
      pHVar12 = (HWND)0x0;
    }
    else {
      pHVar12 = (HWND)param_4->Object->HWnd;
    }
    if ((*this_00 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)(*this_00 + 0x40) == 0) {
      lpWindowName = L"";
    }
    else {
      lpWindowName = *(wchar_t **)(*this_00 + 0x38);
    }
    pHVar12 = CreateWindowExW(uVar19,L"UnrealWindow",lpWindowName,uVar21,local_e0,local_e4,iVar18,
                              iVar20,pHVar12,(HMENU)0x0,(HINSTANCE)local_a8,(LPVOID)0x0);
    this->HWnd = (HWND__ *)pHVar12;
    if (pHVar12 == (HWND)0x0) {
      GetLastError();
      pFVar13 = FThreadHeartBeat::GetNoInit();
      if (pFVar13 != (FThreadHeartBeat *)0x0) {
        FThreadHeartBeat::SuspendHeartBeat(pFVar13,false);
      }
      local_dc = 0;
      pvVar14 = GetCurrentProcess();
      GetProcessHandleCount(pvVar14,&local_dc);
      GetGuiResources((HANDLE)0xfffffffffffffffe,1);
      GetGuiResources((HANDLE)0xfffffffffffffffe,0);
      pvVar14 = GetCurrentProcess();
      GetGuiResources(pvVar14,1);
      pvVar14 = GetCurrentProcess();
      GetGuiResources(pvVar14,0);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsWindow.cpp"
                         ,0xdc,
                         L"Window Creation Failed (Error Code %d). \n  Current Process (Handles: %d, GDI Objects: %d, User Objects: %d)\n  Global (GDI Objects: %d, User Objects: %d)"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar13 != (FThreadHeartBeat *)0x0) &&
         (pFVar13 = FThreadHeartBeat::GetNoInit(), pFVar13 != (FThreadHeartBeat *)0x0)) {
        FThreadHeartBeat::ResumeHeartBeat(pFVar13,false);
      }
    }
    else {
      BVar9 = RegisterTouchWindow(pHVar12,0);
      if ((BVar9 == 0) && (GetLastError(), 2 < (byte)LogWindows._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      FConfigCacheIni::GetBool
                (GConfig,L"WindowsApplication.Accessibility",L"DisableTouchFeedback",local_e8,
                 &GEngineIni);
      if (local_e8[0] != false) {
        DisableTouchFeedback(this);
      }
      iVar20 = local_d4;
      iVar18 = local_d8;
      this->VirtualWidth = local_d8;
      this->VirtualHeight = local_d4;
      (**(code **)(this->_padding_ + 8))(this,local_cc,local_d0,local_d8);
      if ((*this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)(*this_00 + 0x14) == 1) {
        pcVar7 = *(code **)(this->_padding_ + 0x98);
        pFVar15 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                            ((TSharedPtr<FGenericWindowDefinition,1> *)this_00);
        (*pcVar7)(this,pFVar15->Opacity);
      }
      if ((*this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(char *)(*this_00 + 0x18) == '\0') {
        local_c0 = 1;
        HVar10 = DwmSetWindowAttribute((HWND)this->HWnd,2,&local_c0,4);
        if ((HVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(((HRESULT)(DwmSetWindowAttribute(HWnd, DWMWA_NCRENDERING_POLICY, &RenderingPolicy, sizeof(RenderingPolicy)))) >= 0)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsWindow.cpp"
                               ,0x102,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_bc = 0;
        HVar10 = DwmSetWindowAttribute((HWND)this->HWnd,4,&local_bc,4);
        if ((HVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(((HRESULT)(DwmSetWindowAttribute(HWnd, DWMWA_ALLOW_NCPAINT, &bEnableNCPaint, sizeof(bEnableNCPaint)))) >= 0)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsWindow.cpp"
                               ,0x105,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if ((*this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(char *)(*this_00 + 0x25) == '\0') ||
         (pFVar15 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                              ((TSharedPtr<FGenericWindowDefinition,1> *)this_00),
         pFVar15->HasOSWindowBorder != false)) {
        if ((*this_00 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(char *)(*this_00 + 0x18) != '\0') &&
           (pFVar15 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                                ((TSharedPtr<FGenericWindowDefinition,1> *)&this->_padding_),
           pFVar15->HasCloseButton == false)) {
          pHVar16 = GetSystemMenu((HWND)this->HWnd,0);
          EnableMenuItem(pHVar16,0xf060,1);
        }
      }
      else {
        uVar21 = uVar21 | 0xc80000;
        pFVar15 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                            ((TSharedPtr<FGenericWindowDefinition,1> *)this_00);
        if (pFVar15->SupportsMaximize != false) {
          uVar21 = (uint)local_c8 | 0xc90000;
        }
        pFVar15 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                            ((TSharedPtr<FGenericWindowDefinition,1> *)this_00);
        uVar19 = uVar21 | 0x20000;
        if (pFVar15->SupportsMinimize == false) {
          uVar19 = uVar21;
        }
        pFVar15 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                            ((TSharedPtr<FGenericWindowDefinition,1> *)this_00);
        uVar21 = uVar19 | 0x40000;
        if (pFVar15->HasSizingFrame == false) {
          uVar21 = uVar19;
        }
        LVar11 = SetWindowLongW((HWND)this->HWnd,-0x10,uVar21);
        if ((LVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("SetWindowLongW(HWnd, (-16), WindowStyle)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsWindow.cpp"
                               ,0x121,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar15 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                            ((TSharedPtr<FGenericWindowDefinition,1> *)this_00);
        uFlags = 0x37;
        if (pFVar15->ActivationPolicy != Never) {
          uFlags = 0x27;
        }
        SetWindowPos((HWND)this->HWnd,(HWND)0x0,0,0,0,0,uFlags);
        pHVar16 = GetSystemMenu((HWND)this->HWnd,0);
        DeleteMenu(pHVar16,0xf060,0);
        AdjustWindowRegion(this,iVar18,iVar20);
      }
      if ((this->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(char *)(this->_padding_ + 0x25) != '\0') {
        RegisterDragDrop((HWND)this->HWnd,(LPDROPTARGET)&this->_padding_);
        AddClipboardFormatListener((HWND)this->HWnd);
      }
    }
  }
  else {
    this->HWnd = GUELibraryOverrideSettings.WindowHandle;
    GOverrideNextWnd = false;
    GetClientRect(hWnd,&local_90);
    GUELibraryOverrideSettings.WindowWidth = local_90.right - local_90.left;
    this->VirtualHeight = local_90.bottom - local_90.top;
    this->RegionHeight = local_90.bottom - local_90.top;
    this->VirtualWidth = GUELibraryOverrideSettings.WindowWidth;
    this->RegionWidth = GUELibraryOverrideSettings.WindowWidth;
    GUELibraryOverrideSettings.WindowHeight = this->RegionHeight;
  }
  return;
}

// IsEnabled @ 1423ea7f0

bool __thiscall FWindowsWindow::IsEnabled(FWindowsWindow *this)

{
  BOOL BVar1;
  
  BVar1 = IsWindowEnabled((HWND)this->HWnd);
  return BVar1 != 0;
}

// IsForegroundWindow @ 1423ea870

bool __thiscall FWindowsWindow::IsForegroundWindow(FWindowsWindow *this)

{
  HWND pHVar1;
  
  pHVar1 = GetForegroundWindow();
  return pHVar1 == (HWND)this->HWnd;
}

// IsFullscreenSupported @ 1423ea8c0

bool __thiscall FWindowsWindow::IsFullscreenSupported(FWindowsWindow *this)

{
  int iVar1;
  
  iVar1 = GetSystemMetrics(0x1000);
  return iVar1 == 0;
}

// IsManualManageDPIChanges @ 1423eab80

bool __thiscall FWindowsWindow::IsManualManageDPIChanges(FWindowsWindow *this)

{
  return this->bHandleManualDPIChanges;
}

// IsMaximized @ 1423eac00

bool __thiscall FWindowsWindow::IsMaximized(FWindowsWindow *this)

{
  BOOL BVar1;
  
  BVar1 = IsZoomed((HWND)this->HWnd);
  return BVar1 != 0;
}

// IsMinimized @ 1423eac50

bool __thiscall FWindowsWindow::IsMinimized(FWindowsWindow *this)

{
  BOOL BVar1;
  
  BVar1 = IsIconic((HWND)this->HWnd);
  return BVar1 != 0;
}

// IsPointInWindow @ 1423eae20

bool __thiscall FWindowsWindow::IsPointInWindow(FWindowsWindow *this,int param_1,int param_2)

{
  BOOL BVar1;
  HRGN__ *hrgn;
  
  hrgn = MakeWindowRegionObject(this,false);
  BVar1 = PtInRegion((HRGN)hrgn,param_1,param_2);
  DeleteObject(hrgn);
  return BVar1 != 0;
}

// IsRegularWindow @ 1423eb260

bool __thiscall FWindowsWindow::IsRegularWindow(FWindowsWindow *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->_padding_ != 0) {
    return (bool)*(undefined1 *)(this->_padding_ + 0x25);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return (bool)*(undefined1 *)(this->_padding_ + 0x25);
}

// IsVisible @ 1423eb5b0

bool __thiscall FWindowsWindow::IsVisible(FWindowsWindow *this)

{
  return this->bIsVisible;
}

// Make @ 1423eea60

TSharedRef<FWindowsWindow,1> * __cdecl
FWindowsWindow::Make(TSharedRef<FWindowsWindow,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FWindowsWindow *pFVar3;
  TRawPtrProxy<FWindowsWindow> local_res8 [4];
  
  pFVar3 = ::operator_new(0xb0);
  local_res8[0].Object = (FWindowsWindow *)0x0;
  if (pFVar3 != (FWindowsWindow *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&_vftable__for__FGenericWindow__;
    pFVar3->_padding_ = (longlong)&_vftable__for__IDropTarget__;
    pFVar3->HWnd = (HWND__ *)0x0;
    pFVar3->WindowMode = Windowed;
    pFVar3->OLEReferenceCount = 0;
    puVar2 = &pFVar3->field_0xa4;
    pFVar3->bIsVisible = false;
    pFVar3->bInitiallyMaximized = false;
    pFVar3->bInitiallyMinimized = false;
    pFVar3->bIsFirstTimeVisible = true;
    pFVar3->AspectRatio = 1.0;
    pFVar3->DPIScaleFactor = 1.0;
    pFVar3->bHandleManualDPIChanges = false;
    (pFVar3->PreFullscreenWindowPlacement).length = 0;
    (pFVar3->PreFullscreenWindowPlacement).flags = 0;
    (pFVar3->PreFullscreenWindowPlacement).showCmd = 0;
    (pFVar3->PreFullscreenWindowPlacement).ptMinPosition.x = 0;
    *(undefined8 *)&(pFVar3->PreFullscreenWindowPlacement).ptMinPosition.y = 0;
    *(undefined8 *)&(pFVar3->PreFullscreenWindowPlacement).ptMaxPosition.y = 0;
    (pFVar3->PreFullscreenWindowPlacement).rcNormalPosition.top = 0;
    (pFVar3->PreFullscreenWindowPlacement).rcNormalPosition.right = 0;
    (pFVar3->PreFullscreenWindowPlacement).rcNormalPosition.bottom = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).flags = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).showCmd = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMinPosition.x = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMinPosition.y = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMaxPosition.x = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMaxPosition.y = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.left = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.top = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.right = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.bottom = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).length = 0x2c;
    local_res8[0].Object = pFVar3;
  }
  TSharedRef<FWindowsWindow,1>::TSharedRef<FWindowsWindow,1><FWindowsWindow>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// MakeWindowRegionObject @ 1423eed50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HRGN__ * __thiscall FWindowsWindow::MakeWindowRegionObject(FWindowsWindow *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  UINT x1;
  int *piVar3;
  longlong lVar4;
  HRGN__ *pHVar5;
  FGenericWindowDefinition *pFVar6;
  HRGN pHVar7;
  int x2;
  int iVar8;
  undefined1 auStackY_98 [32];
  tagRECT local_68;
  tagWINDOWINFO local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if ((this->RegionWidth == -1) || (this->RegionHeight == -1)) {
    GetWindowRect((HWND)this->HWnd,&local_68);
    pHVar5 = (HRGN__ *)
             CreateRectRgn(0,0,local_68.right - local_68.left,local_68.bottom - local_68.top);
  }
  else {
    piVar3 = (int *)(**(code **)(this->_padding_ + 0xe0))();
    if ((*piVar3 == 5) &&
       (lVar4 = (**(code **)(this->_padding_ + 0xe0))(this), *(char *)(lVar4 + 0x18) == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    cVar2 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar2 == '\0') {
      if (((this->WindowMode == Windowed) && (!bVar1)) &&
         (pFVar6 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                             ((TSharedPtr<FGenericWindowDefinition,1> *)&this->_padding_),
         0 < pFVar6->CornerRadius)) {
        pFVar6 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                           ((TSharedPtr<FGenericWindowDefinition,1> *)&this->_padding_);
        iVar8 = pFVar6->CornerRadius;
        pFVar6 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                           ((TSharedPtr<FGenericWindowDefinition,1> *)&this->_padding_);
        pHVar7 = CreateRoundRectRgn(0,0,this->RegionWidth + 1,this->RegionHeight + 1,
                                    pFVar6->CornerRadius,iVar8);
        return (HRGN__ *)pHVar7;
      }
      iVar8 = this->RegionHeight;
      x1 = 0;
      x2 = this->RegionWidth;
    }
    else if (bVar1) {
      local_58.cbSize = 0x3c;
      local_58.rcWindow.left = 0;
      local_58.rcWindow.top = 0;
      local_58.rcWindow.right = 0;
      local_58.rcWindow.bottom = 0;
      local_58.cyWindowBorders = 0;
      local_58.atomWindowType = 0;
      local_58.wCreatorVersion = 0;
      local_58.rcClient.left = 0;
      local_58.rcClient.top = 0;
      local_58.rcClient.right = 0;
      local_58.rcClient.bottom = 0;
      local_58.dwStyle = 0;
      local_58.dwExStyle = 0;
      local_58.dwWindowStatus = 0;
      local_58.cxWindowBorders = 0;
      GetWindowInfo((HWND)this->HWnd,&local_58);
      x1 = 0;
      if (param_1) {
        x1 = local_58.cxWindowBorders;
      }
      iVar8 = this->RegionHeight + x1;
      x2 = this->RegionWidth + x1;
    }
    else if (param_1) {
      x1 = (**(code **)(this->_padding_ + 0xb0))(this);
      iVar8 = this->RegionHeight - x1;
      x2 = this->RegionWidth - x1;
    }
    else {
      iVar8 = this->RegionHeight;
      x1 = 0;
      x2 = this->RegionWidth;
    }
    pHVar5 = (HRGN__ *)CreateRectRgn(x1,x1,x2,iVar8);
  }
  return pHVar5;
}

// Maximize @ 1423eef90

void __thiscall FWindowsWindow::Maximize(FWindowsWindow *this)

{
  if (!this->bIsFirstTimeVisible) {
                    /* WARNING: Could not recover jumptable at 0x0001423eefa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ShowWindow((HWND)this->HWnd,3);
    return;
  }
  this->field_0xa4 = this->field_0xa4 & 0xfb | 8;
  return;
}

// Minimize @ 1423eefe0

void __thiscall FWindowsWindow::Minimize(FWindowsWindow *this)

{
  if (!this->bIsFirstTimeVisible) {
                    /* WARNING: Could not recover jumptable at 0x0001423eeff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ShowWindow((HWND)this->HWnd,6);
    return;
  }
  this->field_0xa4 = this->field_0xa4 & 0xf7 | 4;
  return;
}

// MoveWindowTo @ 1423ef610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWindowsWindow::MoveWindowTo(FWindowsWindow *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  DWORD dwStyle;
  DWORD dwExStyle;
  undefined1 auStackY_78 [32];
  tagRECT local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(this->_padding_ + 0x18) != '\0') {
    dwStyle = GetWindowLongW((HWND)this->HWnd,-0x10);
    dwExStyle = GetWindowLongW((HWND)this->HWnd,-0x14);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    AdjustWindowRectEx(&local_38,dwStyle,0,dwExStyle);
    param_1 = param_1 + local_38.left;
    param_2 = param_2 + local_38.top;
  }
  SetWindowPos((HWND)this->HWnd,(HWND)0x0,param_1,param_2,0,0,0x15);
  return;
}

// OnParentWindowMinimized @ 1423f1240

void __thiscall FWindowsWindow::OnParentWindowMinimized(FWindowsWindow *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423f1248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetWindowPlacement((HWND)this->HWnd,(WINDOWPLACEMENT *)&this->PreParentMinimizedWindowPlacement);
  return;
}

// OnParentWindowRestored @ 1423f1260

void __thiscall FWindowsWindow::OnParentWindowRestored(FWindowsWindow *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423f1268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowPlacement((HWND)this->HWnd,(WINDOWPLACEMENT *)&this->PreParentMinimizedWindowPlacement);
  return;
}

// OnTransparencySupportChanged @ 1423f1b10

void __thiscall
FWindowsWindow::OnTransparencySupportChanged(FWindowsWindow *this,EWindowTransparency param_1)

{
  return;
}

// QueryInterface @ 1423fd5d0

undefined4 __thiscall
FWindowsWindow::QueryInterface(FWindowsWindow *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  if (((IID_IDropTarget._0_8_ != lVar1) || (IID_IDropTarget.Data4 != *&param_1->Data4)) &&
     ((lVar2._0_4_ = param_1->Data1, lVar2._4_2_ = param_1->Data2, lVar2._6_2_ = param_1->Data3,
      IID_IUnknown._0_8_ != lVar2 || (IID_IUnknown.Data4 != *&param_1->Data4)))) {
    *param_2 = (void *)0x0;
    return 0x80004002;
  }
  (**(code **)(this->_padding_ + 8))();
  if (this == (FWindowsWindow *)&DAT_00000018) {
    this = (FWindowsWindow *)0x0;
  }
  *param_2 = this;
  return 0;
}

// Release @ 142400320

ulong __thiscall FWindowsWindow::Release(FWindowsWindow *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)((longlong)&this->OwningApplication + 4);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return *(ulong *)((longlong)&this->OwningApplication + 4);
}

// ReshapeWindow @ 142401850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWindowsWindow::ReshapeWindow(FWindowsWindow *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  UINT uFlags;
  int iVar7;
  longlong lVar8;
  FGenericWindowDefinition *pFVar9;
  HRGN__ *hRgn;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStackY_e8 [32];
  tagRECT local_a0;
  tagWINDOWINFO local_90;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_90.rcWindow.left = 0;
  local_90.rcWindow.top = 0;
  local_90.rcWindow.right = 0;
  local_90.rcWindow.bottom = 0;
  local_90.cyWindowBorders = 0;
  local_90.atomWindowType = 0;
  local_90.wCreatorVersion = 0;
  local_90.cbSize = 0x3c;
  local_90.rcClient.left = 0;
  local_90.rcClient.top = 0;
  local_90.rcClient.right = 0;
  local_90.rcClient.bottom = 0;
  local_90.dwStyle = 0;
  local_90.dwExStyle = 0;
  local_90.dwWindowStatus = 0;
  local_90.cxWindowBorders = 0;
  GetWindowInfo((HWND)this->HWnd,&local_90);
  this->AspectRatio = (float)param_3 / (float)param_4;
  if (((GUELibraryOverrideSettings.bIsEmbedded == false) ||
      (this->HWnd != GUELibraryOverrideSettings.WindowHandle)) || (this->WindowMode != Windowed)) {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar8 = this->_padding_;
    if (*(char *)(lVar8 + 0x18) != '\0') {
      local_a0.left = 0;
      local_a0.top = 0;
      local_a0.right = 0;
      local_a0.bottom = 0;
      AdjustWindowRectEx(&local_a0,local_90.dwStyle,0,local_90.dwExStyle);
      param_2 = param_2 + local_a0.top;
      param_3 = param_3 + (local_a0.right - local_a0.left);
      param_1 = param_1 + local_a0.left;
      param_4 = param_4 + (local_a0.bottom - local_a0.top);
      lVar8 = this->_padding_;
    }
    if ((param_3 == this->VirtualWidth) && (param_4 == this->VirtualHeight)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this->VirtualWidth = param_3;
    this->VirtualHeight = param_4;
    if ((lVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = param_4;
    if (*(char *)(this->_padding_ + 0x27) != '\0') {
      iVar10 = local_90.rcWindow.bottom - local_90.rcWindow.top;
      iVar12 = local_90.rcWindow.right - local_90.rcWindow.left;
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = iVar12;
      if (*(int *)(this->_padding_ + 0x2c) != -1) {
        pFVar9 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                           ((TSharedPtr<FGenericWindowDefinition,1> *)&this->_padding_);
        iVar11 = pFVar9->ExpectedMaxWidth;
      }
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = iVar10;
      if (*(int *)(this->_padding_ + 0x30) != -1) {
        pFVar9 = TSharedPtr<FGenericWindowDefinition,1>::operator->
                           ((TSharedPtr<FGenericWindowDefinition,1> *)&this->_padding_);
        iVar7 = pFVar9->ExpectedMaxHeight;
      }
      if (iVar12 < iVar11) {
        iVar11 = iVar12;
      }
      if (iVar11 < param_3) {
        iVar11 = param_3;
      }
      param_3 = iVar11;
      if (iVar10 < iVar7) {
        iVar7 = iVar10;
      }
      if (iVar7 < param_4) {
        iVar7 = param_4;
      }
    }
    cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar5 != '\0') {
      (**(code **)(this->_padding_ + 0x48))(this);
    }
    uFlags = 0x14;
    if (this->WindowMode == Fullscreen) {
      uFlags = 0x414;
    }
    SetWindowPos((HWND)this->HWnd,(HWND)0x0,param_1,param_2,param_3,iVar7,uFlags);
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(char *)(this->_padding_ + 0x27) != '\0') || (bVar3)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    piVar1 = (int *)this->_padding_;
    if ((*piVar1 == 1) || (piVar1[0x13] < 1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((piVar1 == (int *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(char *)(this->_padding_ + 0x18) == '\0') && ((bVar3 || (bVar4)))) {
      this->RegionWidth = this->VirtualWidth;
      this->RegionHeight = this->VirtualHeight;
      hRgn = MakeWindowRegionObject(this,true);
      iVar7 = SetWindowRgn((HWND)this->HWnd,(HRGN)hRgn,0);
      if ((iVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SetWindowRgn( HWnd, Region, false )",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsWindow.cpp"
                             ,0x1e1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    this->VirtualWidth = param_3;
    this->RegionWidth = param_3;
    this->VirtualHeight = param_4;
    this->RegionHeight = param_4;
  }
  return;
}

// Restore @ 1424020d0

void __thiscall FWindowsWindow::Restore(FWindowsWindow *this)

{
  if (!this->bIsFirstTimeVisible) {
                    /* WARNING: Could not recover jumptable at 0x0001424020e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ShowWindow((HWND)this->HWnd,9);
    return;
  }
  this->field_0xa4 = this->field_0xa4 & 0xf3;
  return;
}

// SetDPIScaleFactor @ 1424041d0

void __thiscall FWindowsWindow::SetDPIScaleFactor(FWindowsWindow *this,float param_1)

{
  this->DPIScaleFactor = param_1;
  return;
}

// SetManualManageDPIChanges @ 1424050e0

void __thiscall FWindowsWindow::SetManualManageDPIChanges(FWindowsWindow *this,bool param_1)

{
  this->bHandleManualDPIChanges = param_1;
  return;
}

// SetOpacity @ 1424053c0

void __thiscall FWindowsWindow::SetOpacity(FWindowsWindow *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001424053d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLayeredWindowAttributes((HWND)this->HWnd,0,(BYTE)(int)(param_1 * __real_437f0000),2);
  return;
}

// SetText @ 142405aa0

void __thiscall FWindowsWindow::SetText(FWindowsWindow *this,wchar_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142405aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextW((HWND)this->HWnd,param_1);
  return;
}

// SetWindowFocus @ 142405fc0

void __thiscall FWindowsWindow::SetWindowFocus(FWindowsWindow *this)

{
  HWND hWnd;
  HWND pHVar1;
  
  hWnd = (HWND)this->HWnd;
  pHVar1 = GetFocus();
  if (pHVar1 != hWnd) {
                    /* WARNING: Could not recover jumptable at 0x000142405fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetFocus(hWnd);
    return;
  }
  return;
}

// SetWindowMode @ 142406010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWindowsWindow::SetWindowMode(FWindowsWindow *this,Type param_1)

{
  Type TVar1;
  HWND hWnd;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ULONG_PTR lParam;
  HMONITOR hMonitor;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_a8 [32];
  tagRECT local_68;
  tagMONITORINFO local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  TVar1 = this->WindowMode;
  if (param_1 != TVar1) {
    this->WindowMode = param_1;
    uVar5 = GetWindowLongW((HWND)this->HWnd,-0x10);
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(this->_padding_ + 0x25) == '\0') {
      uVar8 = 0x80c80000;
    }
    else {
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = 0xc90000;
      if (*(char *)(this->_padding_ + 0x23) == '\0') {
        uVar7 = 0xc80000;
      }
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar7 | 0x20000;
      if (*(char *)(this->_padding_ + 0x22) == '\0') {
        uVar8 = uVar7;
      }
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(char *)(this->_padding_ + 0x26) != '\0') {
        uVar8 = uVar8 | 0x40000;
      }
    }
    if (param_1 < Windowed) {
      if (TVar1 == Windowed) {
        hWnd = (HWND)this->HWnd;
        (this->PreFullscreenWindowPlacement).length = 0x2c;
        GetWindowPlacement(hWnd,(WINDOWPLACEMENT *)&this->PreFullscreenWindowPlacement);
      }
      SetWindowLongW((HWND)this->HWnd,-0x10,~uVar8 & uVar5 | 0x80000000);
      SetWindowPos((HWND)this->HWnd,(HWND)0x0,0,0,0,0,0x27);
      if (param_1 != Fullscreen) {
        ShowWindow((HWND)this->HWnd,9);
      }
      GetClientRect((HWND)this->HWnd,&local_68);
      hMonitor = MonitorFromWindow((HWND)this->HWnd,(param_1 != Fullscreen) + 1);
      local_58.cbSize = 0x28;
      GetMonitorInfoW(hMonitor,&local_58);
      iVar6 = local_58.rcMonitor.right - local_58.rcMonitor.left;
      iVar3 = iVar6;
      if ((param_1 == Fullscreen) &&
         (iVar3 = local_68.right - local_68.left, iVar6 < local_68.right - local_68.left)) {
        iVar3 = iVar6;
      }
      (**(code **)(this->_padding_ + 8))(this,local_58.rcMonitor.left,local_58.rcMonitor.top,iVar3);
    }
    else {
      SetWindowLongW((HWND)this->HWnd,-0x10,uVar5 & 0x7fffffff | uVar8);
      SetWindowPos((HWND)this->HWnd,(HWND)0x0,0,0,0,0,0x27);
      if ((this->PreFullscreenWindowPlacement).length != 0) {
        SetWindowPlacement((HWND)this->HWnd,(WINDOWPLACEMENT *)&this->PreFullscreenWindowPlacement);
      }
      lParam = GetClassLongPtrW((HWND)this->HWnd,-0xe);
      if (lParam != 0) {
        SendMessageW((HWND)this->HWnd,0x80,0,lParam);
      }
    }
  }
  return;
}

// Show @ 142407470

void __thiscall FWindowsWindow::Show(FWindowsWindow *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  int nCmdShow;
  
  if (this->bIsVisible) {
    return;
  }
  bVar6 = false;
  this->field_0xa4 = this->field_0xa4 | 1;
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(this->_padding_ + 0x1b) != '\0') {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar6 = *(int *)(this->_padding_ + 0x1c) == 1;
    if (this->bIsFirstTimeVisible) {
      if (this->_padding_ == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(int *)(this->_padding_ + 0x1c) == 2) {
        bVar6 = true;
      }
    }
  }
  puVar1 = &this->field_0xa4;
  nCmdShow = bVar6 + 4;
  if (this->bIsFirstTimeVisible) {
    this->field_0xa4 = *puVar1 & 0xfd;
    if (this->bInitiallyMinimized) {
                    /* WARNING: Could not recover jumptable at 0x000142407582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ShowWindow((HWND)this->HWnd,(bVar6 ^ 1) + 6);
      return;
    }
    if (this->bInitiallyMaximized) {
      nCmdShow = 3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014240759c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowWindow((HWND)this->HWnd,nCmdShow);
  return;
}

// operator() @ 15048bef0

bool __thiscall `FWindowsWindow::DrawAttention'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9106147381321139327>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9106147381321139327>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048bf90

bool __thiscall `FWindowsWindow::Destroy'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9106147381321138830>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9106147381321138830>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

