// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// <lambda_invoker_cdecl> @ 141a9a6b0

long64 __cdecl
`FWindowsDialog::Show'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  FWindowsDialog *this;
  long64 lVar1;
  
  if (param_2 == 0x110) {
    *(HWND__ **)(param_4 + 0x28) = param_1;
    SetWindowLongPtrW((HWND)param_1,0x10,param_4);
    this = (FWindowsDialog *)param_4;
  }
  else {
    this = (FWindowsDialog *)GetWindowLongPtrW((HWND)param_1,0x10);
  }
  lVar1 = FWindowsDialog::MessageBoxDlgProc(this,param_1,param_2,param_3,param_4);
  return lVar1;
}

// MeasureText @ 141ab5fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

tagSIZE __cdecl FWindowsDialog::MeasureText(HWND__ *param_1,wchar_t *param_2,int param_3)

{
  HDC hdc;
  HGDIOBJ h;
  tagSIZE tVar1;
  undefined1 auStackY_68 [32];
  tagRECT local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_68;
  hdc = CreateCompatibleDC((HDC)0x0);
  h = (HGDIOBJ)SendMessageW((HWND)param_1,0x31,0,0);
  SelectObject(hdc,h);
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  DrawTextW(hdc,param_2,param_3,&local_38,0x2440);
  DeleteDC(hdc);
  tVar1.cy = local_38.bottom - local_38.top;
  tVar1.cx = local_38.right - local_38.left;
  return tVar1;
}

// MessageBoxDlgGetDPI @ 141ab60a0

float __cdecl FWindowsDialog::MessageBoxDlgGetDPI(HWND__ *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  ulonglong uVar2;
  
  hModule = GetModuleHandleW(L"user32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"GetDpiForWindow");
    if (pFVar1 != (FARPROC)0x0) {
      uVar2 = (*pFVar1)(param_1);
      return (float)(uVar2 & 0xffffffff) *
             `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
             ::__l2::bIsSameType._4_4_;
    }
  }
  return __real_3f800000;
}

// MessageBoxDlgProc @ 141ab6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
FWindowsDialog::MessageBoxDlgProc
          (FWindowsDialog *this,HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  undefined4 uVar1;
  SIZE_T dwBytes;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  BOOL BVar6;
  HDC hDC;
  HBRUSH pHVar7;
  HWND pHVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  ulonglong uVar10;
  HGLOBAL hMem;
  LPVOID _Dst;
  wchar_t *_Src;
  ulonglong *puVar11;
  float fVar12;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [12];
  int iStack_cc;
  tagPAINTSTRUCT local_c8;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_2 < 0x25) {
    if (param_2 == 0x24) {
      *(long *)(param_4 + 0x18) = (this->DefaultWindowRect).right - (this->DefaultWindowRect).left;
      *(long *)(param_4 + 0x1c) = (this->DefaultWindowRect).bottom - (this->DefaultWindowRect).top;
      return (long64)&DAT_00000001;
    }
    if (param_2 != 2) {
      if (param_2 == 5) {
        iVar2 = (this->ClientRect).right;
        iVar3 = (this->ClientRect).bottom;
        GetClientRect((HWND)param_1,(LPRECT)&this->ClientRect);
        pHVar8 = GetDlgItem((HWND)param_1,0x3ed);
        if (pHVar8 != (HWND)0x0) {
          GetWindowRect(pHVar8,(LPRECT)local_d8);
          ScreenToClient((HWND)param_1,(LPPOINT)local_d8);
          ScreenToClient((HWND)param_1,(LPPOINT)(local_d8 + 8));
          SetWindowPos(pHVar8,(HWND)0x0,local_d8._0_4_,local_d8._4_4_,
                       (((this->ClientRect).right - iVar2) - local_d8._0_4_) + local_d8._8_4_,
                       (((this->ClientRect).bottom - iVar3) - local_d8._4_4_) + iStack_cc,4);
        }
        puVar11 = &local_78;
        local_78 = ___xmm_000003ec000003e9000003eb000003e8;
        uStack_70 = _UNK_1506f6868;
        local_68 = ___xmm_000003f0000003ef000003ee000003ea;
        uStack_60 = _UNK_1506f6878;
        do {
          pHVar8 = GetDlgItem((HWND)param_1,(int)*puVar11);
          if (pHVar8 != (HWND)0x0) {
            GetWindowRect(pHVar8,(LPRECT)local_d8);
            ScreenToClient((HWND)param_1,(LPPOINT)local_d8);
            ScreenToClient((HWND)param_1,(LPPOINT)(local_d8 + 8));
            SetWindowPos(pHVar8,(HWND)0x0,((this->ClientRect).right - iVar2) + local_d8._0_4_,
                         ((this->ClientRect).bottom - iVar3) + local_d8._4_4_,
                         local_d8._8_4_ - local_d8._0_4_,iStack_cc - local_d8._4_4_,4);
          }
          puVar11 = (ulonglong *)((longlong)puVar11 + 4);
        } while (puVar11 != local_58);
        hModule = GetModuleHandleW(L"user32.dll");
        fVar12 = __real_3f800000;
        if ((hModule != (HMODULE)0x0) &&
           (pFVar9 = GetProcAddress(hModule,"GetDpiForWindow"), fVar12 = __real_3f800000,
           pFVar9 != (FARPROC)0x0)) {
          uVar10 = (*pFVar9)(param_1);
          fVar12 = (float)(uVar10 & 0xffffffff) *
                   `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType._4_4_;
        }
        pHVar8 = GetDlgItem((HWND)param_1,0x3ed);
        UpdateEditTextScrollbar(this,(HWND__ *)pHVar8,fVar12);
        InvalidateRect((HWND)param_1,(RECT *)0x0,1);
        return (long64)&DAT_00000001;
      }
      if (param_2 != 0xf) {
        if (param_2 != 0x10) {
          return 0;
        }
        this->WasClosed = true;
        DestroyWindow((HWND)this->DialogHwnd);
        return (long64)&DAT_00000001;
      }
      hDC = BeginPaint((HWND)param_1,&local_c8);
      fVar12 = MessageBoxDlgGetDPI(param_1);
      uVar1 = (this->ClientRect).bottom;
      local_d8._0_4_ = (this->ClientRect).left;
      local_d8._4_4_ = (this->ClientRect).top;
      uVar4 = (this->ClientRect).right;
      iStack_cc = uVar1 - (int)(fVar12 * __real_42340000);
      local_d8._8_4_ = uVar4;
      pHVar7 = GetSysColorBrush(5);
      FillRect(hDC,(RECT *)local_d8,pHVar7);
      EndPaint((HWND)param_1,&local_c8);
      return 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      bVar5 = OnInitDialog(this);
      return (ulonglong)bVar5;
    }
    if (param_2 == 0x111) {
      switch((uint)param_3 & 0xffff) {
      case 1000:
        this->WasClosed = true;
        this->Result = Ok;
        DestroyWindow((HWND)this->DialogHwnd);
        break;
      case 0x3e9:
        this->WasClosed = true;
        this->Result = YesAll;
        DestroyWindow((HWND)this->DialogHwnd);
        break;
      case 0x3ea:
        this->WasClosed = true;
        this->Result = NoAll;
        DestroyWindow((HWND)this->DialogHwnd);
        break;
      case 0x3eb:
        this->WasClosed = true;
        this->Result = Yes;
        DestroyWindow((HWND)this->DialogHwnd);
        break;
      case 0x3ec:
        this->WasClosed = true;
        this->Result = No;
        DestroyWindow((HWND)this->DialogHwnd);
        break;
      default:
        return 0;
      case 0x3ee:
        if (this->CancelButtonEnabled != false) {
          this->WasClosed = true;
          this->Result = Cancel;
          DestroyWindow((HWND)this->DialogHwnd);
          return (long64)&DAT_00000001;
        }
        break;
      case 0x3ef:
        this->WasClosed = true;
        this->Result = Retry;
        DestroyWindow((HWND)this->DialogHwnd);
        break;
      case 0x3f0:
        this->WasClosed = true;
        this->Result = Continue;
        DestroyWindow((HWND)this->DialogHwnd);
        break;
      case 0x3f1:
        dwBytes = (longlong)(this->Text).Data.ArrayMax * 2;
        hMem = GlobalAlloc(2,dwBytes);
        if ((hMem != (HGLOBAL)0x0) && (_Dst = GlobalLock(hMem), _Dst != (LPVOID)0x0)) {
          if ((this->Text).Data.ArrayNum == 0) {
            _Src = L"";
          }
          else {
            _Src = (wchar_t *)(this->Text).Data.AllocatorInstance.Data;
          }
          memcpy(_Dst,_Src,dwBytes);
          *(undefined1 *)((longlong)_Dst + dwBytes) = 0;
          GlobalUnlock(hMem);
          BVar6 = OpenClipboard((HWND)param_1);
          if ((BVar6 != 0) && (BVar6 = EmptyClipboard(), BVar6 != 0)) {
            SetClipboardData(0xd,hMem);
            CloseClipboard();
          }
        }
      }
    }
    else {
      if (param_2 == 0x138) {
        pHVar8 = GetDlgItem((HWND)param_1,0x3ed);
        if ((HWND)param_4 != pHVar8) {
          return 0;
        }
        SetBkMode((HDC)param_3,1);
        pHVar7 = GetSysColorBrush(5);
        return (long64)pHVar7;
      }
      if (param_2 != 0x2e0) {
        return 0;
      }
    }
  }
  return (long64)&DAT_00000001;
}

// OnInitDialog @ 141ab7820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FWindowsDialog::OnInitDialog(FWindowsDialog *this)

{
  HWND__ *pHVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  ulonglong uVar6;
  FText *pFVar7;
  FString *pFVar8;
  HWND pHVar9;
  HWND hWnd;
  tagSIZE tVar10;
  HMONITOR hMonitor;
  int iVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined1 auStackY_148 [32];
  int local_108;
  int local_104;
  FText local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  tagMONITORINFO local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  GetWindowRect((HWND)this->DialogHwnd,(LPRECT)&this->DefaultWindowRect);
  GetClientRect((HWND)this->DialogHwnd,(LPRECT)&this->ClientRect);
  iVar11 = (this->ClientRect).right;
  iVar3 = (this->ClientRect).bottom;
  pHVar1 = this->DialogHwnd;
  this->WasClosed = false;
  hModule = GetModuleHandleW(L"user32.dll");
  fVar17 = __real_3f800000;
  if ((hModule != (HMODULE)0x0) &&
     (pFVar5 = GetProcAddress(hModule,"GetDpiForWindow"), fVar17 = __real_3f800000,
     pFVar5 != (FARPROC)0x0)) {
    uVar6 = (*pFVar5)(pHVar1);
    fVar17 = (float)(uVar6 & 0xffffffff) *
             `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
             ::__l2::bIsSameType._4_4_;
  }
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  local_104 = iVar11 - (int)(fVar17 * __real_40a00000);
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  local_108 = iVar3 - (int)(fVar17 * __real_41200000);
  if (GConfig == (FConfigCacheIni *)0x0) {
    ::FString::operator=(&local_80,L"Cancel");
    ::FString::operator=(&local_90,L"Retry");
    ::FString::operator=(&local_a0,L"Continue");
    ::FString::operator=(&local_b0,L"No to All");
    ::FString::operator=(&local_c0,L"No");
    ::FString::operator=(&local_d0,L"Yes to All");
    ::FString::operator=(&local_e0,L"Yes");
    ::FString::operator=(&local_f0,L"OK");
  }
  else {
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"Cancel",L"Cancel");
    pFVar8 = FText::ToString(pFVar7);
    if (&local_80 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_80.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_80.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_80.Data.ArrayMax,(ForAnyElementType *)&local_80,iVar11,
                     &local_80.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_80.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"Retry",L"Retry");
    pFVar8 = FText::ToString(pFVar7);
    if (&local_90 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_90.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_90.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_90.Data.ArrayMax,(ForAnyElementType *)&local_90,iVar11,
                     &local_90.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_90.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"Continue",L"Continue");
    pFVar8 = FText::ToString(pFVar7);
    if (&local_a0 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_a0.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_a0.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_a0.Data.ArrayMax,(ForAnyElementType *)&local_a0,iVar11,
                     &local_a0.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_a0.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"NoToAll",L"No to All");
    pFVar8 = FText::ToString(pFVar7);
    if (&local_b0 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_b0.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_b0.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_b0.Data.ArrayMax,(ForAnyElementType *)&local_b0,iVar11,
                     &local_b0.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_b0.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"No",L"No");
    pFVar8 = FText::ToString(pFVar7);
    if (&local_c0 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_c0.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_c0.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_c0.Data.ArrayMax,(ForAnyElementType *)&local_c0,iVar11,
                     &local_c0.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_c0.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"YesToAll",L"Yes to All")
    ;
    pFVar8 = FText::ToString(pFVar7);
    if (&local_d0 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_d0.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_d0.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_d0.Data.ArrayMax,(ForAnyElementType *)&local_d0,iVar11,
                     &local_d0.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_d0.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"Yes",L"Yes");
    pFVar8 = FText::ToString(pFVar7);
    if (&local_e0 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_e0.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_e0.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_e0.Data.ArrayMax,(ForAnyElementType *)&local_e0,iVar11,
                     &local_e0.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_e0.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_100,L"UnrealEd",L"OK",L"OK");
    pFVar8 = FText::ToString(pFVar7);
    if (&local_f0 != pFVar8) {
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      local_f0.Data.ArrayNum = iVar11;
      if (((iVar11 != 0) || (local_f0.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,local_f0.Data.ArrayMax,(ForAnyElementType *)&local_f0,iVar11,
                     &local_f0.Data.ArrayMax), iVar11 != 0)) {
        memcpy(local_f0.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar11 * 2);
      }
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
  }
  pwVar14 = L"";
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar12.Data = local_a0.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,0x3f0,fVar17,&local_104,&local_108);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar12.Data = local_90.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,0x3ef,fVar17,&local_104,&local_108);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar12.Data = local_80.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,0x3ee,fVar17,&local_104,&local_108);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar12.Data = local_b0.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,0x3ea,fVar17,&local_104,&local_108);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c0.Data.ArrayNum != 0) {
    FVar12.Data = local_c0.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,0x3ec,fVar17,&local_104,&local_108);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar12.Data = local_d0.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,0x3e9,fVar17,&local_104,&local_108);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar12.Data = local_e0.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,0x3eb,fVar17,&local_104,&local_108);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar12.Data = local_f0.Data.AllocatorInstance.Data;
  }
  SetDlgItem(this->DialogHwnd,(wchar_t *)FVar12.Data,1000,fVar17,&local_104,&local_108);
  if ((this->Text).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->Text).Data.AllocatorInstance.Data;
  }
  SetDlgItemTextW((HWND)this->DialogHwnd,0x3ed,pwVar13);
  if ((this->Caption).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->Caption).Data.AllocatorInstance.Data;
  }
  SetWindowTextW((HWND)this->DialogHwnd,pwVar13);
  pHVar9 = GetDlgItem((HWND)this->DialogHwnd,0x3ed);
  UpdateEditTextScrollbar(this,(HWND__ *)pHVar9,fVar17);
  hWnd = GetTopWindow((HWND)this->DialogHwnd);
  if (hWnd != (HWND)0x0) {
    SetWindowPos(hWnd,(HWND)0xffffffffffffffff,0,0,0,0,3);
  }
  SetForegroundWindow((HWND)this->DialogHwnd);
  SetWindowPos((HWND)this->DialogHwnd,(HWND)0xffffffffffffffff,0,0,0,0,3);
  SetWindowPos((HWND)this->DialogHwnd,(HWND)0xfffffffffffffffe,0,0,0,0,3);
  if (hWnd != (HWND)0x0) {
    SetWindowPos(hWnd,(HWND)0xfffffffffffffffe,0,0,0,0,3);
  }
  iVar3 = (this->Text).Data.ArrayNum;
  iVar15 = (this->DefaultWindowRect).right - (this->DefaultWindowRect).left;
  iVar16 = (this->DefaultWindowRect).bottom - (this->DefaultWindowRect).top;
  iVar11 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar11 = 0;
  }
  else {
    pwVar14 = (wchar_t *)(this->Text).Data.AllocatorInstance.Data;
  }
  tVar10 = MeasureText((HWND__ *)pHVar9,pwVar14,iVar11);
  hMonitor = MonitorFromWindow((HWND)this->DialogHwnd,2);
  local_70.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_70);
  iVar11 = (int)((float)(local_70.rcMonitor.right - local_70.rcMonitor.left) * __real_3f4ccccd);
  iVar3 = (int)(fVar17 * __real_42c80000 + (float)tVar10.cx);
  if (iVar3 < iVar11) {
    iVar11 = iVar3;
  }
  iVar3 = iVar15;
  if (iVar15 < iVar11) {
    iVar3 = iVar11;
  }
  iVar11 = (int)((float)(local_70.rcMonitor.bottom - local_70.rcMonitor.top) * __real_3f4ccccd);
  iVar4 = (int)((float)tVar10.cy + fVar17 * ___real_43250000);
  if (iVar4 < iVar11) {
    iVar11 = iVar4;
  }
  iVar4 = iVar16;
  if (iVar16 < iVar11) {
    iVar4 = iVar11;
  }
  SetWindowPos((HWND)this->DialogHwnd,(HWND)0xfffffffffffffffe,
               (this->DefaultWindowRect).left - (iVar3 - iVar15) / 2,
               (this->DefaultWindowRect).top - (iVar4 - iVar16) / 2,iVar3,iVar4,4);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return true;
}

// SetDlgItem @ 141ac0550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FWindowsDialog::SetDlgItem
          (HWND__ *param_1,wchar_t *param_2,int param_3,float param_4,int *param_5,int *param_6)

{
  HDC hdc;
  size_t sVar1;
  HWND hWnd;
  tagSIZE local_28 [4];
  
  hdc = CreateCompatibleDC((HDC)0x0);
  sVar1 = wcslen(param_2);
  GetTextExtentPoint32W(hdc,param_2,(int)sVar1,local_28);
  DeleteDC(hdc);
  local_28[0].cx = local_28[0].cx - (int)(param_4 * ___real_c1600000);
  local_28[0].cy = local_28[0].cy - (int)(param_4 * __real_c1000000);
  if (local_28[0].cx < (int)(param_4 * ___real_42920000)) {
    local_28[0].cx = (int)(param_4 * ___real_42920000);
  }
  if (local_28[0].cy < (int)(param_4 * __real_41a80000)) {
    local_28[0].cy = (int)(param_4 * __real_41a80000);
  }
  hWnd = GetDlgItem((HWND)param_1,param_3);
  if (hWnd != (HWND)0x0) {
    *param_5 = *param_5 + (-(int)(param_4 * __real_40e00000) - local_28[0].cx);
    SetWindowPos(hWnd,(HWND)0x0,*param_5,*param_6 - local_28[0].cy,local_28[0].cx,local_28[0].cy,0);
    SetDlgItemTextW((HWND)param_1,param_3,param_2);
  }
  return hWnd != (HWND)0x0;
}

// Show @ 141ac1a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FWindowsDialog::Show(FWindowsDialog *this,HWND__ *param_1,int param_2)

{
  char cVar1;
  DWORD dwMessageId;
  BOOL BVar2;
  int iVar3;
  HACCEL hAccTable;
  HMODULE hInstance;
  HWND pHVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 auStackY_898 [32];
  tagMSG local_858;
  WCHAR local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_898;
  hAccTable = LoadAcceleratorsW((HINSTANCE)::hInstance,(LPCWSTR)0x65);
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  pHVar4 = CreateDialogParamW(hInstance,(LPCWSTR)((ulonglong)(uint)param_2 & 0xffff),(HWND)param_1,
                              `FWindowsDialog::Show'::__l2::<lambda_1>::<lambda_invoker_cdecl>,
                              (LPARAM)this);
  this->DialogHwnd = (HWND__ *)pHVar4;
  if (pHVar4 == (HWND)0x0) {
    dwMessageId = GetLastError();
    local_828[0] = L'\0';
    if (dwMessageId == 0) {
      dwMessageId = GetLastError();
    }
    FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0x400,local_828,0x400,(va_list *)0x0);
    pwVar5 = wcschr(local_828,L'\r');
    if (pwVar5 != (wchar_t *)0x0) {
      *pwVar5 = L'\0';
    }
    pwVar5 = wcschr(local_828,L'\n');
    if (pwVar5 != (wchar_t *)0x0) {
      *pwVar5 = L'\0';
    }
    if (1 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_enum_EAppReturnType::Type___cdecl_FWindowsDialog::Show(HWND__*___ptr64,int)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  else {
    ShowWindow(pHVar4,5);
    cVar1 = this->WasClosed;
    while ((cVar1 == '\0' && (BVar2 = GetMessageW(&local_858,(HWND)0x0,0,0), BVar2 != 0))) {
      pHVar4 = GetDlgItem((HWND)this->DialogHwnd,0x3ed);
      bVar6 = local_858.hwnd == pHVar4;
      if (((((HWND)this->DialogHwnd != local_858.hwnd) &&
           ((BVar2 = IsChild((HWND)this->DialogHwnd,local_858.hwnd), BVar2 == 0 || (bVar6)))) ||
          (iVar3 = TranslateAcceleratorW((HWND)this->DialogHwnd,hAccTable,&local_858), iVar3 == 0))
         && (BVar2 = IsDialogMessageW((HWND)this->DialogHwnd,&local_858), BVar2 == 0)) {
        TranslateMessage(&local_858);
        DispatchMessageW(&local_858);
      }
      cVar1 = this->WasClosed;
    }
    DestroyAcceleratorTable(hAccTable);
  }
  return this->Result;
}

// Show @ 141ac1c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Type __cdecl FWindowsDialog::Show(HWND__ *param_1,Type param_2,FString *param_3,FString *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  Type TVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_108 [32];
  FString local_c8;
  FString local_b8;
  FWindowsDialog local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar1 = (param_3->Data).ArrayNum;
  TVar4 = Cancel;
  local_a8.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = uVar1 - 1;
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  local_a8.Text.Data.ArrayNum = 0;
  local_a8.Text.Data.ArrayMax = 0;
  local_a8.Caption.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Caption.Data.ArrayNum = 0;
  local_a8.Caption.Data.ArrayMax = 0;
  local_a8.CancelButtonEnabled = false;
  local_a8.DialogHwnd = (HWND__ *)0x0;
  local_a8.WasClosed = false;
  local_a8.Result = Cancel;
  local_a8.ClientRect.left = 0;
  local_a8.ClientRect.top = 0;
  local_a8.ClientRect.right = 0;
  local_a8.ClientRect.bottom = 0;
  local_a8.DefaultWindowRect.left = 0;
  local_a8.DefaultWindowRect.top = 0;
  local_a8.DefaultWindowRect.right = 0;
  local_a8.DefaultWindowRect.bottom = 0;
  if (iVar3 < 0x100001) {
    if (&local_a8 != (FWindowsDialog *)param_3) {
      pFVar2 = (param_3->Data).AllocatorInstance.Data;
      local_a8.Text.Data.ArrayMax = 0;
      local_a8.Text.Data.ArrayNum = uVar1;
      if (uVar1 == 0) {
        local_a8.Text.Data.ArrayNum = 0;
        local_a8.Text.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_a8,uVar1,&local_a8.Text.Data.ArrayMax);
        if (uVar1 != 0) {
          memcpy(local_a8.Text.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1 * 2);
        }
      }
    }
  }
  else {
    if (uVar1 == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_b8,pwVar5,0x100000);
    ::FString::ConcatFC(&local_c8,&local_b8,L"\r\n[Message truncated]");
    if (local_a8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Text.Data.AllocatorInstance.Data);
    }
    local_a8.Text.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    local_a8.Text.Data.ArrayNum = local_c8.Data.ArrayNum;
    local_a8.Text.Data.ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (&local_a8.Caption != param_4) {
    iVar3 = (param_4->Data).ArrayNum;
    pFVar2 = (param_4->Data).AllocatorInstance.Data;
    local_a8.Caption.Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (local_a8.Caption.Data.ArrayMax == 0)) {
      local_a8.Caption.Data.ArrayNum = 0;
      local_a8.Caption.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,local_a8.Caption.Data.ArrayMax,(ForAnyElementType *)&local_a8.Caption,
                 iVar3,&local_a8.Caption.Data.ArrayMax);
      if (iVar3 != 0) {
        memcpy(local_a8.Caption.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar3 * 2);
      }
    }
  }
  switch(param_2) {
  case Ok:
    local_a8.Result = Ok;
    iVar3 = 0x65;
    goto LAB_141ac1ebd;
  case YesNo:
    iVar3 = 0x66;
    goto LAB_141ac1eb9;
  case OkCancel:
    local_a8.CancelButtonEnabled = true;
    iVar3 = 0x67;
    local_a8.Result = Cancel;
    break;
  case YesNoCancel:
    local_a8.CancelButtonEnabled = true;
    iVar3 = 0x68;
    local_a8.Result = Cancel;
    break;
  case CancelRetryContinue:
    local_a8.CancelButtonEnabled = true;
    iVar3 = 0x69;
    local_a8.Result = Cancel;
    break;
  case YesNoYesAllNoAll:
    iVar3 = 0x6a;
    goto LAB_141ac1eb9;
  case YesNoYesAllNoAllCancel:
    local_a8.CancelButtonEnabled = true;
    iVar3 = 0x6b;
    local_a8.Result = Cancel;
    break;
  case YesNoYesAll:
    iVar3 = 0x6c;
LAB_141ac1eb9:
    local_a8.Result = No;
LAB_141ac1ebd:
    local_a8.CancelButtonEnabled = false;
    break;
  default:
    goto switchD_141ac1e56_default;
  }
  TVar4 = Show(&local_a8,param_1,iVar3);
switchD_141ac1e56_default:
  if (local_a8.Caption.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Caption.Data.AllocatorInstance.Data);
  }
  if (local_a8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Text.Data.AllocatorInstance.Data);
  }
  return TVar4;
}

// UpdateEditTextScrollbar @ 141ac3c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWindowsDialog::UpdateEditTextScrollbar(FWindowsDialog *this,HWND__ *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  tagSIZE tVar4;
  wchar_t *pwVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  tagRECT local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  GetWindowRect((HWND)param_1,&local_48);
  fVar7 = param_2 * __real_41a00000;
  fVar8 = param_2 * __real_41800000;
  iVar1 = (this->Text).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->Text).Data.AllocatorInstance.Data;
  }
  tVar4 = MeasureText(param_1,pwVar5,iVar6);
  uVar2 = GetWindowLongW((HWND)param_1,-0x10);
  if ((local_48.right - (int)fVar7) - local_48.left < tVar4.cx) {
    uVar2 = uVar2 | 0x100000;
  }
  else {
    uVar2 = uVar2 & 0xffefffff;
  }
  SetWindowLongW((HWND)param_1,-0x10,uVar2);
  uVar3 = GetWindowLongW((HWND)param_1,-0x10);
  uVar2 = uVar3 | 0x200000;
  if (tVar4.cy <= (local_48.bottom - (int)fVar8) - local_48.top) {
    uVar2 = uVar3 & 0xffdfffff;
  }
  SetWindowLongW((HWND)param_1,-0x10,uVar2);
  return;
}

