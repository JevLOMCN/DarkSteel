// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 37

// FTextStoreACP @ 1423c2760

FTextStoreACP * __thiscall
FTextStoreACP::FTextStoreACP(FTextStoreACP *this,TSharedRef<ITextInputMethodContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->ReferenceCount = 1;
  this->_padding_ = (longlong)&_vftable__for__ITextStoreACP__;
  this->_padding_ = (longlong)&_vftable__for__ITfContextOwnerCompositionSink__;
  (this->TextContext).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->TextContext).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->SupportedAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedAttributes).ArrayNum = 0;
  (this->SupportedAttributes).ArrayMax = 0;
  (this->LockManager).LockType = 0;
  (this->LockManager).IsPendingLockUpgrade = false;
  (this->AdviseSinkObject).TextStoreACPSink.RawPointer = (ITextStoreACPSink *)0x0;
  (this->AdviseSinkObject).TextStoreACPServices.RawPointer = (ITextStoreACPServices *)0x0;
  (this->AdviseSinkObject).SinkFlags = 0;
  (this->Composition).TSFCompositionView.RawPointer = (ITfCompositionView *)0x0;
  (this->TSFDocumentManager).RawPointer = (ITfDocumentMgr *)0x0;
  (this->TSFContext).RawPointer = (ITfContext *)0x0;
  (this->TSFContextOwnerCompositionServices).RawPointer = (ITfContextOwnerCompositionServices *)0x0;
  this->TSFEditCookie = 0;
  return this;
}

// ~FTextStoreACP @ 1423c6d30

void __thiscall FTextStoreACP::~FTextStoreACP(FTextStoreACP *this)

{
  ITfContextOwnerCompositionServices *pIVar1;
  ITfContext *pIVar2;
  ITfDocumentMgr *pIVar3;
  ITfCompositionView *pIVar4;
  ITextStoreACPServices *pIVar5;
  ITextStoreACPSink *pIVar6;
  FScriptContainerElement *pFVar7;
  
  this->_padding_ = (longlong)&_vftable__for__ITextStoreACP__;
  this->_padding_ = (longlong)&_vftable__for__ITfContextOwnerCompositionSink__;
  pIVar1 = (this->TSFContextOwnerCompositionServices).RawPointer;
  if (pIVar1 != (ITfContextOwnerCompositionServices *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar2 = (this->TSFContext).RawPointer;
  if (pIVar2 != (ITfContext *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->TSFDocumentManager).RawPointer;
  if (pIVar3 != (ITfDocumentMgr *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->Composition).TSFCompositionView.RawPointer;
  if (pIVar4 != (ITfCompositionView *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->AdviseSinkObject).TextStoreACPServices.RawPointer;
  if (pIVar5 != (ITextStoreACPServices *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar6 = (this->AdviseSinkObject).TextStoreACPSink.RawPointer;
  if (pIVar6 != (ITextStoreACPSink *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pFVar7 = (this->SupportedAttributes).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextContext).SharedReferenceCount.ReferenceController);
  return;
}

// AddRef @ 1423d0160

ulong __thiscall FTextStoreACP::AddRef(FTextStoreACP *this)

{
  this->ReferenceCount = this->ReferenceCount + 1;
  return this->ReferenceCount;
}

// AddRef`adjustor{8}' @ 1423d0170

/* [thunk]:public: virtual unsigned long __cdecl FTextStoreACP::AddRef`adjustor{8}' (void) __ptr64
    */

ulong __thiscall FTextStoreACP::AddRef_adjustor_8__(FTextStoreACP *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FTextStoreACP *)&this[-1].TSFEditCookie);
  return uVar1;
}

// AdviseSink @ 1423d0400

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::AdviseSink(FTextStoreACP *this,_GUID *param_1,IUnknown *param_2,ulong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *local_res18;
  longlong *local_18 [2];
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (param_2 != (IUnknown *)0x0) {
    lVar1._0_4_ = param_1->Data1;
    lVar1._4_2_ = param_1->Data2;
    lVar1._6_2_ = param_1->Data3;
    if ((lVar1 != IID_ITextStoreACPSink._0_8_) || (*&param_1->Data4 != IID_ITextStoreACPSink.Data4))
    {
      return 0x80070057;
    }
    if ((this->AdviseSinkObject).TextStoreACPSink.RawPointer != (ITextStoreACPSink *)0x0) {
      local_res18 = (longlong *)0x0;
      iVar2 = (**(code **)*param_2)(param_2,&IID_IUnknown,&local_res18);
      if (iVar2 < 0) {
        uVar3 = 0x8000ffff;
      }
      else {
        local_18[0] = (longlong *)0x0;
        iVar2 = (**(code **)*param_2)(param_2,&IID_IUnknown,local_18);
        if (iVar2 < 0) {
          uVar3 = 0x8000ffff;
        }
        else {
          if (local_res18 == local_18[0]) {
            if (local_18[0] != (longlong *)0x0) {
              (**(code **)(*local_18[0] + 0x10))(local_18[0]);
            }
            if (local_res18 != (longlong *)0x0) {
              (**(code **)(*local_res18 + 0x10))();
            }
            goto LAB_1423d0545;
          }
          uVar3 = 0x80040201;
        }
        if (local_18[0] != (longlong *)0x0) {
          (**(code **)(*local_18[0] + 0x10))(local_18[0]);
        }
      }
      if (local_res18 == (longlong *)0x0) {
        return uVar3;
      }
      (**(code **)(*local_res18 + 0x10))();
      return uVar3;
    }
    iVar2 = (**(code **)*param_2)(param_2,&IID_ITextStoreACPSink,&this->AdviseSinkObject);
    if ((-1 < iVar2) &&
       ((this->AdviseSinkObject).TextStoreACPSink.RawPointer != (ITextStoreACPSink *)0x0)) {
LAB_1423d0545:
      (this->AdviseSinkObject).SinkFlags = param_3;
      return 0;
    }
  }
  return 0x8000ffff;
}

// FindNextAttrTransition @ 1423dc540

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::FindNextAttrTransition
          (FTextStoreACP *this,long param_1,long param_2,ulong param_3,_GUID *param_4,ulong param_5,
          long *param_6,int *param_7,long *param_8)

{
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  return 0x80004001;
}

// GetACPFromPoint @ 1423dca00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::GetACPFromPoint
          (FTextStoreACP *this,ulong param_1,tagPOINT *param_2,ulong param_3,long *param_4)

{
  ITextInputMethodContext *pIVar1;
  long lVar2;
  double local_18;
  double dStack_10;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((this->LockManager).LockType & 2) == 0) {
    return 0x80040201;
  }
  local_18 = (double)(*param_2).x;
  dStack_10 = (double)(*param_2).y;
  pIVar1 = (this->TextContext).Object;
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&local_18);
  *param_4 = lVar2;
  return 0;
}

// GetActiveView @ 1423dcb00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FTextStoreACP::GetActiveView(FTextStoreACP *this,ulong *param_1)

{
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
    *param_1 = 0;
    return 0;
  }
  *param_1 = 0;
  return 0;
}

// GetEmbedded @ 1423de430

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::GetEmbedded
          (FTextStoreACP *this,long param_1,_GUID *param_2,_GUID *param_3,IUnknown **param_4)

{
  undefined4 uVar1;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  uVar1 = 0x80004001;
  if (((this->LockManager).LockType & 2) == 0) {
    uVar1 = 0x80040201;
  }
  return uVar1;
}

// GetEndACP @ 1423de5a0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FTextStoreACP::GetEndACP(FTextStoreACP *this,long *param_1)

{
  long lVar1;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((this->LockManager).LockType & 2) == 0) {
    return 0x80040201;
  }
  lVar1 = (**(code **)((longlong)*(this->TextContext).Object + 0x18))();
  *param_1 = lVar1;
  return 0;
}

// GetFormattedText @ 1423ded30

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::GetFormattedText(FTextStoreACP *this,long param_1,long param_2,IDataObject **param_3)

{
  undefined4 uVar1;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  uVar1 = 0x80004001;
  if (((this->LockManager).LockType & 2) == 0) {
    uVar1 = 0x80040201;
  }
  return uVar1;
}

// GetScreenExt @ 1423e2570

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::GetScreenExt(FTextStoreACP *this,ulong param_1,tagRECT *param_2)

{
  ITextInputMethodContext *pIVar1;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (param_1 != 0) {
    return 0x80070057;
  }
  pIVar1 = (this->TextContext).Object;
  (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,&local_28,&local_18);
  param_2->left = (int)local_28;
  param_2->top = (int)local_20;
  param_2->right = (int)(local_18 + local_28);
  param_2->bottom = (int)(local_10 + local_20);
  return 0;
}

// GetSelection @ 1423e2870

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::GetSelection
          (FTextStoreACP *this,ulong param_1,ulong param_2,TS_SELECTION_ACP *param_3,ulong *param_4)

{
  ITextInputMethodContext *pIVar1;
  TS_SELECTIONSTYLE *pTVar2;
  ulonglong uVar3;
  int local_res8 [2];
  int local_38;
  int local_34 [3];
  
  uVar3 = (ulonglong)param_2;
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((this->LockManager).LockType & 2) == 0) {
    return 0x80040201;
  }
  if (param_1 != 0xffffffff) {
    return 0x80040205;
  }
  *param_4 = 0;
  if (1 < param_2) {
    uVar3 = 1;
  }
  if ((int)uVar3 != 0) {
    pTVar2 = &param_3->style;
    do {
      pIVar1 = (this->TextContext).Object;
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res8,&local_38,local_34);
      ((TS_SELECTION_ACP *)(pTVar2 + -1))->acpStart = local_res8[0];
      ((TS_SELECTION_ACP *)(pTVar2 + -1))->acpEnd = local_res8[0] + local_38;
      if (local_34[0] == 0) {
        pTVar2->ase = TS_AE_START;
      }
      else if (local_34[0] == 1) {
        pTVar2->ase = TS_AE_END;
      }
      pTVar2->fInterimChar = 0;
      pTVar2 = pTVar2 + 2;
      *param_4 = *param_4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}

// GetStatus @ 1423e30e0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FTextStoreACP::GetStatus(FTextStoreACP *this,TS_STATUS *param_1)

{
  char cVar1;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (param_1 == (TS_STATUS *)0x0) {
    return 0x80070057;
  }
  cVar1 = (**(code **)((longlong)*(this->TextContext).Object + 0x10))();
  param_1->dwStaticFlags = 8;
  param_1->dwDynamicFlags = (uint)(cVar1 != '\0');
  return 0;
}

// GetText @ 1423e4420

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::GetText
          (FTextStoreACP *this,long param_1,long param_2,wchar_t *param_3,ulong param_4,
          ulong *param_5,TS_RUNINFO *param_6,ulong param_7,ulong *param_8,long *param_9)

{
  ITextInputMethodContext *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  void *local_38;
  undefined8 local_30;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((this->LockManager).LockType & 2) == 0) {
    return 0x80040201;
  }
  iVar4 = (**(code **)((longlong)*(this->TextContext).Object + 0x18))();
  if (((param_1 < 0) || (iVar4 < param_1)) ||
     ((param_2 != -1 && ((param_2 < 0 || (iVar4 < param_2)))))) {
    return 0x80040200;
  }
  if (param_2 == -1) {
    param_2 = iVar4;
  }
  uVar8 = 0;
  uVar9 = param_2 - param_1;
  *param_5 = 0;
  if ((param_3 != (wchar_t *)0x0) && (param_4 != 0)) {
    pIVar1 = (this->TextContext).Object;
    local_38 = (void *)0x0;
    local_30 = 0;
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,uVar9,&local_38);
    if (uVar9 != 0) {
      iVar4 = (int)local_30;
      do {
        if (param_4 <= *param_5) break;
        if ((int)uVar8 < 0) {
code_r0x0001423e453c:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
          }
          iVar4 = (int)local_30;
        }
        else {
          iVar5 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar5 = 0;
          }
          if (iVar5 <= (int)uVar8) goto code_r0x0001423e453c;
        }
        lVar7 = (longlong)(int)uVar8;
        uVar8 = uVar8 + 1;
        *param_3 = *(wchar_t *)((longlong)local_38 + lVar7 * 2);
        param_3 = param_3 + 1;
        *param_5 = *param_5 + 1;
      } while (uVar8 < uVar9);
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  *param_8 = 0;
  if ((param_6 != (TS_RUNINFO *)0x0) && (param_7 != 0)) {
    param_6->type = TS_RT_PLAIN;
    if (param_7 < uVar9) {
      uVar9 = param_7;
    }
    param_6->uCount = uVar9;
    *param_8 = *param_8 + 1;
  }
  *param_9 = param_2;
  return 0;
}

// GetTextExt @ 1423e4720

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::GetTextExt
          (FTextStoreACP *this,ulong param_1,long param_2,long param_3,tagRECT *param_4,int *param_5
          )

{
  ITextInputMethodContext *pIVar1;
  byte bVar2;
  int iVar3;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((this->LockManager).LockType & 2) == 0) {
    return 0x80040201;
  }
  iVar3 = (**(code **)((longlong)*(this->TextContext).Object + 0x18))();
  if (param_2 == param_3) {
    return 0x80070057;
  }
  if (((-1 < param_2) && (param_2 <= iVar3)) &&
     ((param_3 == -1 || ((-1 < param_3 && (param_3 <= iVar3)))))) {
    pIVar1 = (this->TextContext).Object;
    bVar2 = (**(code **)((longlong)*pIVar1 + 0x48))
                      (pIVar1,param_2,param_3 - param_2,&local_28,&local_18);
    *param_5 = (uint)bVar2;
    param_4->left = (int)local_28;
    param_4->top = (int)local_20;
    param_4->right = (int)(local_18 + local_28);
    param_4->bottom = (int)(local_10 + local_20);
    return 0;
  }
  return 0x80040200;
}

// GetWnd @ 1423e5850

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FTextStoreACP::GetWnd(FTextStoreACP *this,ulong param_1,HWND__ **param_2)

{
  ITextInputMethodContext *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  HWND__ *pHVar5;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  pIVar1 = (this->TextContext).Object;
  (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,&local_18);
  if (local_18 == (longlong *)0x0) {
    pHVar5 = (HWND__ *)0x0;
  }
  else {
    if ((local_18 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    pHVar5 = (HWND__ *)(**(code **)(*local_18 + 0xc0))();
  }
  *param_2 = pHVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return 0;
}

// InsertEmbedded @ 1423e9b00

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::InsertEmbedded
          (FTextStoreACP *this,ulong param_1,long param_2,long param_3,IDataObject *param_4,
          TS_TEXTCHANGE *param_5)

{
  undefined4 uVar1;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  uVar1 = 0x80004001;
  if (((byte)(this->LockManager).LockType & 6) != 6) {
    uVar1 = 0x80040201;
  }
  return uVar1;
}

// InsertEmbeddedAtSelection @ 1423e9b50

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::InsertEmbeddedAtSelection
          (FTextStoreACP *this,ulong param_1,IDataObject *param_2,long *param_3,long *param_4,
          TS_TEXTCHANGE *param_5)

{
  undefined4 uVar1;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  uVar1 = 0x80004001;
  if (((this->LockManager).LockType & 2) == 0) {
    uVar1 = 0x80040201;
  }
  return uVar1;
}

// InsertTextAtSelection @ 1423e9ba0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::InsertTextAtSelection
          (FTextStoreACP *this,ulong param_1,wchar_t *param_2,ulong param_3,long *param_4,
          long *param_5,TS_TEXTCHANGE *param_6)

{
  ITextInputMethodContext *pIVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_res10 [2];
  int local_48;
  undefined1 local_44 [4];
  FString local_40;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((param_1 == 2) && (((this->LockManager).LockType & 2) == 0)) ||
     (((byte)(this->LockManager).LockType & 6) != 6)) {
    return 0x80040201;
  }
  if ((param_3 != 0) && (param_2 == (wchar_t *)0x0)) {
    return 0x80070057;
  }
  ::FString::ConstructFromPtrSize(&local_40,param_2,param_3);
  pIVar1 = (this->TextContext).Object;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res10,&local_48,local_44);
  uVar4 = 0;
  uVar5 = uVar4;
  if (param_1 == 2) {
    if ((param_4 != (long *)0x0) && (param_5 != (long *)0x0)) {
      *param_4 = local_res10[0];
      *param_5 = local_48 + local_res10[0];
      uVar5 = 0;
      if (param_6 != (TS_TEXTCHANGE *)0x0) {
        param_6->acpStart = local_res10[0];
        param_6->acpOldEnd = local_48 + local_res10[0];
        iVar3 = local_40.Data.ArrayNum + -1;
        if (local_40.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        param_6->acpNewEnd = iVar3 + local_res10[0];
        uVar5 = uVar4;
      }
      goto LAB_1423e9d6f;
    }
  }
  else if (((param_1 == 1) || ((param_4 != (long *)0x0 && (param_5 != (long *)0x0)))) &&
          (param_6 != (TS_TEXTCHANGE *)0x0)) {
    cVar2 = (**(code **)((longlong)*(this->TextContext).Object + 8))();
    if (cVar2 == '\0') {
      (**(code **)((longlong)*(this->TextContext).Object + 0x60))();
    }
    pIVar1 = (this->TextContext).Object;
    (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,local_res10[0],local_48,&local_40);
    pIVar1 = (this->TextContext).Object;
    iVar3 = local_40.Data.ArrayNum + -1;
    if (local_40.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,iVar3 + local_res10[0],0,1);
    param_6->acpStart = local_res10[0];
    param_6->acpOldEnd = local_48 + local_res10[0];
    iVar3 = local_res10[0] + -1 + local_40.Data.ArrayNum;
    if (local_40.Data.ArrayNum == 0) {
      iVar3 = local_res10[0];
    }
    param_6->acpNewEnd = iVar3;
    if (param_1 != 1) {
      *param_4 = local_res10[0];
      *param_5 = param_6->acpNewEnd;
    }
    goto LAB_1423e9d6f;
  }
  uVar5 = 0x80070057;
LAB_1423e9d6f:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return uVar5;
}

// OnEndComposition @ 1423f0270

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::OnEndComposition(FTextStoreACP *this,ITfCompositionView *param_1)

{
  ITfCompositionView *pIVar1;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  pIVar1 = *(ITfCompositionView **)&(this->AdviseSinkObject).SinkFlags;
  if ((pIVar1 != (ITfCompositionView *)0x0) && (param_1 == pIVar1)) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
    *(undefined8 *)&(this->AdviseSinkObject).SinkFlags = 0;
    (**(code **)(**(longlong **)&this->ReferenceCount + 0x70))();
    return 0;
  }
  return 0x8000ffff;
}

// OnStartComposition @ 1423f1450

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::OnStartComposition(FTextStoreACP *this,ITfCompositionView *param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (*(longlong *)&(this->AdviseSinkObject).SinkFlags == 0) {
    if (param_1 != (ITfCompositionView *)0x0) {
      (**(code **)((longlong)*param_1 + 8))(param_1);
      plVar1 = *(longlong **)&(this->AdviseSinkObject).SinkFlags;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      *(ITfCompositionView **)&(this->AdviseSinkObject).SinkFlags = param_1;
    }
    cVar2 = (**(code **)(**(longlong **)&this->ReferenceCount + 8))();
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)&this->ReferenceCount + 0x60))();
    }
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
  return 0;
}

// OnUpdateComposition @ 1423f1b40

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::OnUpdateComposition
          (FTextStoreACP *this,ITfCompositionView *param_1,ITfRange *param_2)

{
  ITfCompositionView *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  longlong *local_18 [2];
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  pIVar1 = *(ITfCompositionView **)&(this->AdviseSinkObject).SinkFlags;
  if ((pIVar1 != (ITfCompositionView *)0x0) && (param_1 == pIVar1)) {
    if (param_2 != (ITfRange *)0x0) {
      local_18[0] = (longlong *)0x0;
      (**(code **)*param_2)(param_2,&IID_ITfRangeACP,local_18);
      if ((local_18[0] == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      iVar5 = (**(code **)(*local_18[0] + 200))(local_18[0],local_res20,local_res8);
      if (iVar5 < 0) {
        if (local_18[0] != (longlong *)0x0) {
          (**(code **)(*local_18[0] + 0x10))();
        }
        return 0x80004005;
      }
      if (5 < (byte)LogTextStoreACP._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
      }
      (**(code **)(**(longlong **)&this->ReferenceCount + 0x68))
                (*(longlong **)&this->ReferenceCount,local_res20[0],local_res8[0]);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
    }
    return 0;
  }
  return 0x8000ffff;
}

// QueryInsert @ 1423fcf90

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::QueryInsert
          (FTextStoreACP *this,long param_1,long param_2,ulong param_3,long *param_4,long *param_5)

{
  ITextInputMethodContext *pIVar1;
  int local_18;
  int local_14;
  undefined1 local_10 [8];
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if ((param_4 != (long *)0x0) && (param_5 != (long *)0x0)) {
    pIVar1 = (this->TextContext).Object;
    (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,&local_18,&local_14,local_10);
    *param_4 = local_18;
    *param_5 = local_18 + local_14;
    return 0;
  }
  return 0x80070057;
}

// QueryInsertEmbedded @ 1423fd030

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::QueryInsertEmbedded
          (FTextStoreACP *this,_GUID *param_1,tagFORMATETC *param_2,int *param_3)

{
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  return 0x80004001;
}

// QueryInterface @ 1423fd110

undefined4 __thiscall
FTextStoreACP::QueryInterface(FTextStoreACP *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  FTextStoreACP *pFVar5;
  
  *param_2 = (void *)0x0;
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  pFVar5 = this;
  if (((lVar1 != IID_IUnknown._0_8_) || (*&param_1->Data4 != IID_IUnknown.Data4)) &&
     ((lVar2._0_4_ = param_1->Data1, lVar2._4_2_ = param_1->Data2, lVar2._6_2_ = param_1->Data3,
      lVar2 != IID_ITextStoreACP._0_8_ || (*&param_1->Data4 != IID_ITextStoreACP.Data4)))) {
    lVar3._0_4_ = param_1->Data1;
    lVar3._4_2_ = param_1->Data2;
    lVar3._6_2_ = param_1->Data3;
    if ((lVar3 != IID_ITfContextOwnerCompositionSink._0_8_) ||
       (*&param_1->Data4 != IID_ITfContextOwnerCompositionSink.Data4)) goto LAB_1423fd18e;
    pFVar5 = (FTextStoreACP *)&this->_padding_;
    if (this == (FTextStoreACP *)0x0) {
      pFVar5 = (FTextStoreACP *)0x0;
    }
  }
  *param_2 = pFVar5;
  if (pFVar5 != (FTextStoreACP *)0x0) {
    (**(code **)(this->_padding_ + 8))(this,param_2);
  }
LAB_1423fd18e:
  uVar4 = 0x80004002;
  if (*param_2 != (void *)0x0) {
    uVar4 = 0;
  }
  return uVar4;
}

// QueryInterface`adjustor{8}' @ 1423fd1ac

/* [thunk]:public: virtual long __cdecl FTextStoreACP::QueryInterface`adjustor{8}' (struct _GUID
   const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FTextStoreACP::QueryInterface_adjustor_8__(FTextStoreACP *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FTextStoreACP *)&this[-1].TSFEditCookie,(_GUID *)param_1,param_2);
  return lVar1;
}

// Release @ 142400060

ulong __thiscall FTextStoreACP::Release(FTextStoreACP *this)

{
  ulong uVar1;
  
  uVar1 = this->ReferenceCount - 1;
  this->ReferenceCount = uVar1;
  if (uVar1 == 0) {
    (**(code **)(this->_padding_ + 0xe8))(this,1);
  }
  return uVar1;
}

// Release`adjustor{8}' @ 142400094

/* [thunk]:public: virtual unsigned long __cdecl FTextStoreACP::Release`adjustor{8}' (void) __ptr64
    */

ulong __thiscall FTextStoreACP::Release_adjustor_8__(FTextStoreACP *this)

{
  ulong uVar1;
  
  uVar1 = Release((FTextStoreACP *)&this[-1].TSFEditCookie);
  return uVar1;
}

// RequestAttrsAtPosition @ 142401140

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::RequestAttrsAtPosition
          (FTextStoreACP *this,long param_1,ulong param_2,_GUID *param_3,ulong param_4)

{
  _GUID *p_Var1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  uVar11 = 0;
  if (param_2 != 0) {
    do {
      pFVar3 = (this->SupportedAttributes).AllocatorInstance.Data;
      iVar2 = (this->SupportedAttributes).ArrayNum;
      if (pFVar3 != pFVar3 + (longlong)iVar2 * 0x28) {
        pFVar10 = pFVar3;
        do {
          p_Var1 = param_3 + uVar11;
          lVar4._0_4_ = p_Var1->Data1;
          lVar4._4_2_ = p_Var1->Data2;
          lVar4._6_2_ = p_Var1->Data3;
          if ((**(longlong **)(pFVar10 + 8) == lVar4) &&
             ((*(longlong **)(pFVar10 + 8))[1] == *(longlong *)param_3[uVar11].Data4)) {
            uVar6 = (uint)(((longlong)pFVar10 - (longlong)pFVar3) / 0x28);
            if (uVar6 != 0xffffffff) {
              uVar8 = 0;
              if ((int)uVar6 < iVar2) {
                uVar8 = ~uVar6 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return uVar9;
              }
              (this->SupportedAttributes).AllocatorInstance.Data[(longlong)(int)uVar6 * 0x28] =
                   (FScriptContainerElement)0x1;
            }
            break;
          }
          pFVar10 = pFVar10 + 0x28;
        } while (pFVar10 != pFVar3 + (longlong)iVar2 * 0x28);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return 0;
}

// RequestAttrsTransitioningAtPosition @ 142401290

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::RequestAttrsTransitioningAtPosition
          (FTextStoreACP *this,long param_1,ulong param_2,_GUID *param_3,ulong param_4)

{
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  return 0x80004001;
}

// RequestLock @ 1424012c0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::RequestLock(FTextStoreACP *this,ulong param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  ITextStoreACPSink *pIVar6;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if ((this->AdviseSinkObject).TextStoreACPSink.RawPointer != (ITextStoreACPSink *)0x0) {
    if (param_2 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    uVar2 = (this->LockManager).LockType;
    if (uVar2 == 0) {
      if (5 < (byte)LogTextStoreACP._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
      }
      (this->LockManager).LockType = param_1 & 0xfffffffe;
      if (5 < (byte)LogTextStoreACP._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
      }
      pIVar6 = TComPtr<ITextStoreACPSink>::operator->(&(this->AdviseSinkObject).TextStoreACPSink);
      uVar5 = (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,(this->LockManager).LockType);
      *param_2 = uVar5;
      if (5 < (byte)LogTextStoreACP._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
      }
      cVar1 = (this->LockManager).IsPendingLockUpgrade;
      while( true ) {
        if (cVar1 == '\0') {
          (this->LockManager).LockType = 0;
          if (5 < (byte)LogTextStoreACP._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
          }
          return 0;
        }
        if (5 < (byte)LogTextStoreACP._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
        }
        (this->LockManager).LockType = 6;
        (this->LockManager).IsPendingLockUpgrade = false;
        if (5 < (byte)LogTextStoreACP._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
        }
        if (((this->AdviseSinkObject).TextStoreACPSink.RawPointer == (ITextStoreACPSink *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RawPointer != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                               ,0x9f,L""), bVar4)) break;
        pIVar6 = (this->AdviseSinkObject).TextStoreACPSink.RawPointer;
        (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,(this->LockManager).LockType);
        if (5 < (byte)LogTextStoreACP._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
        }
        cVar1 = (this->LockManager).IsPendingLockUpgrade;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    if ((((uVar2 & 2) == 0) && (((byte)uVar2 & 6) == 6)) &&
       ((param_1 & 1) == 0 && ((byte)param_1 & 6) != 6)) {
      *param_2 = 0x40300;
      (this->LockManager).IsPendingLockUpgrade = true;
      return 0;
    }
    *param_2 = 0x80040208;
  }
  return 0x80004005;
}

// RequestSupportedAttrs @ 142401510

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::RequestSupportedAttrs(FTextStoreACP *this,ulong param_1,ulong param_2,_GUID *param_3)

{
  _GUID *p_Var1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  uVar11 = 0;
  if (param_2 != 0) {
    do {
      pFVar3 = (this->SupportedAttributes).AllocatorInstance.Data;
      iVar2 = (this->SupportedAttributes).ArrayNum;
      if (pFVar3 != pFVar3 + (longlong)iVar2 * 0x28) {
        pFVar10 = pFVar3;
        do {
          p_Var1 = param_3 + uVar11;
          lVar4._0_4_ = p_Var1->Data1;
          lVar4._4_2_ = p_Var1->Data2;
          lVar4._6_2_ = p_Var1->Data3;
          if ((**(longlong **)(pFVar10 + 8) == lVar4) &&
             ((*(longlong **)(pFVar10 + 8))[1] == *(longlong *)param_3[uVar11].Data4)) {
            uVar6 = (uint)(((longlong)pFVar10 - (longlong)pFVar3) / 0x28);
            if (uVar6 != 0xffffffff) {
              uVar8 = 0;
              if ((int)uVar6 < iVar2) {
                uVar8 = ~uVar6 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return uVar9;
              }
              (this->SupportedAttributes).AllocatorInstance.Data[(longlong)(int)uVar6 * 0x28] =
                   (FScriptContainerElement)0x1;
            }
            break;
          }
          pFVar10 = pFVar10 + 0x28;
        } while (pFVar10 != pFVar3 + (longlong)iVar2 * 0x28);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  return 0;
}

// RetrieveRequestedAttrs @ 142402100

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::RetrieveRequestedAttrs
          (FTextStoreACP *this,ulong param_1,TS_ATTRVAL *param_2,ulong *param_3)

{
  TArray<FTextStoreACP::FSupportedAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  TS_ATTRVAL *pTVar12;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  uVar9 = 0;
  *param_3 = 0;
  uVar7 = 0;
  if (0 < (this->SupportedAttributes).ArrayNum) {
    lVar11 = 0;
    pTVar12 = param_2;
    do {
      if (param_1 <= uVar7) {
        return 0;
      }
      pTVar1 = &this->SupportedAttributes;
      uVar10 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (this->SupportedAttributes).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
      if ((pTVar1->AllocatorInstance).Data[lVar11] != (FScriptContainerElement)0x0) {
        uVar7 = 0;
        if ((int)uVar9 < (this->SupportedAttributes).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        puVar2 = *(undefined8 **)((pTVar1->AllocatorInstance).Data + lVar11 + 8);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        (pTVar12->idAttr).Data1 = (int)uVar4;
        (pTVar12->idAttr).Data2 = (short)((ulonglong)uVar4 >> 0x20);
        (pTVar12->idAttr).Data3 = (short)((ulonglong)uVar4 >> 0x30);
        *(undefined8 *)(pTVar12->idAttr).Data4 = uVar5;
        uVar7 = 0;
        if ((int)uVar9 < (this->SupportedAttributes).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        VariantCopy((VARIANTARG *)&param_2[*param_3].varValue,
                    (VARIANTARG *)
                    ((pTVar1->AllocatorInstance).Data + ((longlong)(int)uVar9 * 5 + 2) * 8));
        pTVar12->dwOverlapId = 0;
      }
      *param_3 = *param_3 + 1;
      uVar9 = uVar9 + 1;
      uVar7 = *param_3;
      lVar11 = lVar11 + 0x28;
      pTVar12 = pTVar12 + 1;
    } while ((int)uVar9 < (this->SupportedAttributes).ArrayNum);
  }
  return 0;
}

// SetSelection @ 1424056a0

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::SetSelection(FTextStoreACP *this,ulong param_1,TS_SELECTION_ACP *param_2)

{
  ITextInputMethodContext *pIVar1;
  int iVar2;
  TS_SELECTION_ACP *pTVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((byte)(this->LockManager).LockType & 6) == 6) {
    iVar2 = (**(code **)((longlong)*(this->TextContext).Object + 0x18))();
    if (1 < param_1) {
      param_1 = 1;
    }
    uVar5 = (ulonglong)param_1;
    uVar4 = 0;
    pTVar3 = param_2;
    if (param_1 != 0) {
      do {
        if ((((pTVar3->acpStart < 0) || (iVar2 < pTVar3->acpStart)) || (pTVar3->acpEnd < 0)) ||
           (iVar2 < pTVar3->acpEnd)) {
          return 0x80040200;
        }
        uVar4 = uVar4 + 1;
        pTVar3 = pTVar3 + 1;
      } while (uVar4 < param_1);
      do {
        pIVar1 = (this->TextContext).Object;
        (**(code **)((longlong)*pIVar1 + 0x28))
                  (pIVar1,param_2->acpStart,param_2->acpEnd - param_2->acpStart,1);
        param_2 = param_2 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return 0;
  }
  return 0x80040201;
}

// SetText @ 1424059a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall
FTextStoreACP::SetText
          (FTextStoreACP *this,ulong param_1,long param_2,long param_3,wchar_t *param_4,
          ulong param_5,TS_TEXTCHANGE *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_60;
  TS_TEXTCHANGE *local_58;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  long local_40;
  long local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (5 < (byte)LogTextStoreACP._0_1_) {
    local_68 = param_4;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (((byte)(this->LockManager).LockType & 6) == 6) {
    iVar2 = (**(code **)((longlong)*(this->TextContext).Object + 0x18))();
    if ((((param_2 < 0) || (iVar2 < param_2)) || (param_3 < 0)) || (iVar2 < param_3)) {
      uVar1 = 0x80040200;
    }
    else {
      local_38 = 2;
      local_40 = param_2;
      local_3c = param_3;
      (**(code **)(this->_padding_ + 0x48))(this,1,&local_40);
      local_60 = local_48;
      local_58 = param_6;
      local_68 = (wchar_t *)local_44;
      (**(code **)(this->_padding_ + 0x80))(this,0,param_4,param_5);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x80040201;
  }
  return uVar1;
}

// UnadviseSink @ 14240ac50

/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FTextStoreACP::UnadviseSink(FTextStoreACP *this,IUnknown *param_1)

{
  ITextStoreACPSink *pIVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *local_res10;
  longlong *local_res18;
  
  if (5 < (byte)LogTextStoreACP._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTextStoreACP);
  }
  if (param_1 != (IUnknown *)0x0) {
    if ((this->AdviseSinkObject).TextStoreACPSink.RawPointer != (ITextStoreACPSink *)0x0) {
      uVar3 = 0;
      local_res10 = (longlong *)0x0;
      iVar2 = (**(code **)*param_1)(param_1,&IID_IUnknown,&local_res10);
      if (iVar2 < 0) {
        uVar3 = 0x8000ffff;
      }
      else {
        local_res18 = (longlong *)0x0;
        iVar2 = (**(code **)*param_1)(param_1,&IID_IUnknown,&local_res18);
        if (iVar2 < 0) {
          uVar3 = 0x8000ffff;
        }
        else if (local_res10 == local_res18) {
          pIVar1 = (this->AdviseSinkObject).TextStoreACPSink.RawPointer;
          if (pIVar1 != (ITextStoreACPSink *)0x0) {
            (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
            (this->AdviseSinkObject).TextStoreACPSink.RawPointer = (ITextStoreACPSink *)0x0;
          }
        }
        else {
          uVar3 = 0x80040200;
        }
        if (local_res18 != (longlong *)0x0) {
          (**(code **)(*local_res18 + 0x10))(local_res18);
        }
      }
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x10))();
      }
      return uVar3;
    }
    return 0x80040200;
  }
  return 0x80070057;
}

