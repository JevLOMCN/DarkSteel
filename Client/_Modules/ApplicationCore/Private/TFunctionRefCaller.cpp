// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 53

// Call @ 1423d1aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  FTextRange FVar2;
  char cVar3;
  FWindowsUIATextRangeProvider *pFVar4;
  FWindowsUIATextRangeProvider *pFVar5;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) != 0) &&
     (cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar3 != '\0'))
  {
    pFVar4 = ::operator_new(0x38);
    pFVar5 = (FWindowsUIATextRangeProvider *)0x0;
    if (pFVar4 != (FWindowsUIATextRangeProvider *)0x0) {
      lVar1 = *(longlong *)param_1;
      TStack_18.Object = *(IAccessibleWidget **)(lVar1 + 0x10);
      FVar2 = *(FTextRange *)(lVar1 + 0x30);
      TStack_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
      if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = FWindowsUIATextRangeProvider::FWindowsUIATextRangeProvider
                         (pFVar4,*(FWindowsUIAManager **)(*(longlong *)param_1 + 8),&TStack_18,FVar2
                         );
    }
    pFVar4 = (FWindowsUIATextRangeProvider *)&pFVar5->_padding_;
    if (pFVar5 == (FWindowsUIATextRangeProvider *)0x0) {
      pFVar4 = (FWindowsUIATextRangeProvider *)0x0;
    }
    *(FWindowsUIATextRangeProvider **)**(undefined8 **)((longlong)param_1 + 0x10) = pFVar4;
    **(undefined4 **)((longlong)param_1 + 8) = 0;
  }
  return;
}

// Call @ 1423d1ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xc0))();
      (**(code **)(*plVar2 + 0x18))(plVar2);
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(longlong **)((longlong)param_1 + 8) + 8);
  if (**(longlong **)((longlong)param_1 + 8) == 0) {
    piVar1 = (int *)&DAT_00000030;
  }
  if ((*(int *)(*(longlong *)param_1 + 0x30) == *piVar1) &&
     (*(int *)(*(longlong *)param_1 + 0x34) == piVar1[1])) {
    *(undefined4 *)**(undefined8 **)((longlong)param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)**(undefined8 **)((longlong)param_1 + 0x10) = 0;
  return;
}

// Call @ 1423d1b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FWindowsUIAManager *this;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FWindowsUIAWidgetProvider *pFVar5;
  undefined1 *puVar6;
  IAccessibleWidget *pIStack_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xc0))();
      (**(code **)(*plVar4 + 8))
                (plVar4,&pIStack_28,(int)**(double **)((longlong)param_1 + 0x18),
                 (int)**(double **)((longlong)param_1 + 0x20));
      if (pIStack_28 == (IAccessibleWidget *)0x0) {
        *(undefined8 *)**(undefined8 **)((longlong)param_1 + 0x10) = 0;
      }
      else {
        this = *(FWindowsUIAManager **)(*(longlong *)param_1 + 8);
        if (pIStack_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TStack_18.Object = pIStack_28;
        TStack_18.SharedReferenceCount.ReferenceController = pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pIStack_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar5 = FWindowsUIAManager::GetWidgetProvider(this,&TStack_18);
        puVar6 = &pFVar5->field_0x30;
        if (pFVar5 == (FWindowsUIAWidgetProvider *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        *(undefined1 **)**(undefined8 **)((longlong)param_1 + 0x10) = puVar6;
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
    }
  }
  return;
}

// Call @ 1423d1b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) != 0) &&
     (cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar1 != '\0'))
  {
    switch(**(undefined4 **)((longlong)param_1 + 0x10)) {
    case 0:
      puVar4 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd8))();
      lVar5 = (**(code **)*puVar4)(puVar4);
      iVar6 = *(int *)(lVar5 + 8) + -1;
      if (*(int *)(lVar5 + 8) == 0) {
        iVar6 = 0;
      }
      iVar2 = *(int *)(*(longlong *)param_1 + 0x30) + 1;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
      *(int *)(*(longlong *)param_1 + 0x34) = iVar6;
      **(undefined4 **)((longlong)param_1 + 8) = 0;
      return;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      **(undefined4 **)((longlong)param_1 + 8) = 0x80004001;
      **(undefined4 **)((longlong)param_1 + 8) = 0;
      return;
    case 6:
      puVar4 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd8))();
      lVar5 = (**(code **)*puVar4)(puVar4);
      uVar3 = *(int *)(lVar5 + 8) - 1;
      if (*(int *)(lVar5 + 8) == 0) {
        uVar3 = 0;
      }
      *(ulonglong *)(*(longlong *)param_1 + 0x30) = (ulonglong)uVar3 << 0x20;
    }
    **(undefined4 **)((longlong)param_1 + 8) = 0;
  }
  return;
}

// Call @ 1423d1b80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  int iVar2;
  ForAnyElementType FVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  FString *this;
  FWindowsUIATextRangeProvider *pFVar7;
  FWindowsUIATextRangeProvider *pFVar8;
  FTextRange FVar9;
  FString FStack_28;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar4 != '\0'))
  {
    ::FString::FString(&FStack_28,(wchar_t *)**(undefined8 **)((longlong)param_1 + 0x10));
    lVar1 = *(longlong *)param_1;
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 0xd8))();
    this = (FString *)(**(code **)*puVar6)(puVar6);
    ::FString::Mid(this,(FString *)&TStack_18,*(int *)(lVar1 + 0x30),*(int *)(lVar1 + 0x34));
    iVar5 = FStack_28.Data.ArrayNum + -1;
    FVar3.Data = FStack_28.Data.AllocatorInstance.Data;
    if (FStack_28.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    iVar5 = ::FString::Find((FString *)&TStack_18,(wchar_t *)FVar3.Data,iVar5,
                            (uint)(**(int **)((longlong)param_1 + 0x20) != 0),
                            (uint)(**(int **)((longlong)param_1 + 0x18) != 0),-1);
    if (TStack_18.Object != (IAccessibleWidget *)0x0) {
      FMemory::Free(TStack_18.Object);
    }
    if (iVar5 == -1) {
      *(undefined8 *)**(undefined8 **)((longlong)param_1 + 0x28) = 0;
    }
    else {
      iVar5 = iVar5 + *(int *)(*(longlong *)param_1 + 0x30);
      pFVar7 = ::operator_new(0x38);
      pFVar8 = (FWindowsUIATextRangeProvider *)0x0;
      if (pFVar7 != (FWindowsUIATextRangeProvider *)0x0) {
        iVar2 = FStack_28.Data.ArrayNum + -1 + iVar5;
        if (FStack_28.Data.ArrayNum == 0) {
          iVar2 = iVar5;
        }
        FVar9.EndIndex = iVar2;
        FVar9.BeginIndex = iVar5;
        TStack_18.Object = *(IAccessibleWidget **)(*(longlong *)param_1 + 0x10);
        TStack_18.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
        if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar8 = FWindowsUIATextRangeProvider::FWindowsUIATextRangeProvider
                           (pFVar7,*(FWindowsUIAManager **)(*(longlong *)param_1 + 8),&TStack_18,
                            FVar9);
      }
      pFVar7 = (FWindowsUIATextRangeProvider *)&pFVar8->_padding_;
      if (pFVar8 == (FWindowsUIATextRangeProvider *)0x0) {
        pFVar7 = (FWindowsUIATextRangeProvider *)0x0;
      }
      *(FWindowsUIATextRangeProvider **)**(undefined8 **)((longlong)param_1 + 0x28) = pFVar7;
    }
    **(undefined4 **)((longlong)param_1 + 8) = 0;
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 1423d1b90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  FWindowsUIAManager *this;
  char cVar2;
  FWindowsUIAWidgetProvider *pFVar3;
  undefined1 *puVar4;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)param_1;
      TStack_18.Object = *(IAccessibleWidget **)(lVar1 + 0x10);
      this = *(FWindowsUIAManager **)(lVar1 + 8);
      TStack_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
      if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = FWindowsUIAManager::GetWidgetProvider(this,&TStack_18);
      puVar4 = &pFVar3->field_0x28;
      if (pFVar3 == (FWindowsUIAWidgetProvider *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      *(undefined1 **)**(undefined8 **)((longlong)param_1 + 0x10) = puVar4;
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FWindowsUIAManager *this;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FWindowsUIAWidgetProvider *pFVar5;
  undefined1 *puVar6;
  IAccessibleWidget *pIStack_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  *(undefined8 *)**(undefined8 **)((longlong)param_1 + 0x10) = 0;
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xc0))();
      (**(code **)(*plVar4 + 0x10))(plVar4,&pIStack_28,0);
      if (pIStack_28 != (IAccessibleWidget *)0x0) {
        this = *(FWindowsUIAManager **)(*(longlong *)param_1 + 8);
        if (pIStack_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TStack_18.Object = pIStack_28;
        TStack_18.SharedReferenceCount.ReferenceController = pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pIStack_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar5 = FWindowsUIAManager::GetWidgetProvider(this,&TStack_18);
        puVar6 = &pFVar5->field_0x30;
        if (pFVar5 == (FWindowsUIAWidgetProvider *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        *(undefined1 **)**(undefined8 **)((longlong)param_1 + 0x10) = puVar6;
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
    }
  }
  return;
}

// Call @ 1423d1bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  bool bVar2;
  FWindowsUIAControlProvider *pFVar3;
  FWindowsUIAControlProvider *pFVar4;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) == 0) ||
     (cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar1 == '\0'))
  {
    **(undefined4 **)((longlong)param_1 + 8) = 0x80040201;
    return;
  }
  bVar2 = FWindowsUIAWidgetProvider::SupportsInterface
                    (*(FWindowsUIAWidgetProvider **)param_1,**(int **)((longlong)param_1 + 0x10));
  if (bVar2) {
    pFVar3 = ::operator_new(0x70);
    pFVar4 = (FWindowsUIAControlProvider *)0x0;
    if (pFVar3 != (FWindowsUIAControlProvider *)0x0) {
      TStack_18.Object = *(IAccessibleWidget **)(*(longlong *)param_1 + 0x10);
      TStack_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar4 = FWindowsUIAControlProvider::FWindowsUIAControlProvider
                         (pFVar3,*(FWindowsUIAManager **)(*(longlong *)param_1 + 8),&TStack_18);
    }
    switch(**(undefined4 **)((longlong)param_1 + 0x10)) {
    case 10000:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x28;
      break;
    case 0x2711:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x60;
      break;
    case 0x2712:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x50;
      break;
    case 0x2713:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x30;
      break;
    default:
      if (1 < (byte)LogAccessibility._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
      }
      *(undefined8 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0;
      (**(code **)(*(longlong *)&pFVar4->field_0x28 + 0x10))();
      goto LAB_1423c90fc;
    case 0x271a:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x68;
      break;
    case 0x271e:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x38;
      break;
    case 0x271f:
      pFVar3 = (FWindowsUIAControlProvider *)&pFVar4->field_0x40;
    }
    if (pFVar4 == (FWindowsUIAControlProvider *)0x0) {
      pFVar3 = (FWindowsUIAControlProvider *)0x0;
    }
    *(FWindowsUIAControlProvider **)**(undefined8 **)((longlong)param_1 + 0x18) = pFVar3;
  }
LAB_1423c90fc:
  **(undefined4 **)((longlong)param_1 + 8) = 0;
  return;
}

// Call @ 1423d1bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  T_HRESULT *pTVar1;
  char cVar2;
  T_HRESULT TVar3;
  FWindowsUIAControlProvider *pFVar4;
  FWindowsUIAControlProvider *pFVar5;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) != 0) &&
     (cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar2 != '\0'))
  {
    if (**(int **)((longlong)param_1 + 0x10) != 0x2719) {
      pTVar1 = *(T_HRESULT **)((longlong)param_1 + 8);
      TVar3 = FWindowsUIAWidgetProvider::GetPatternProvider
                        ((FWindowsUIAWidgetProvider *)(*(longlong *)param_1 + 0x28),
                         **(int **)((longlong)param_1 + 0x10),
                         (IUnknown **)**(undefined8 **)((longlong)param_1 + 0x18));
      *pTVar1 = TVar3;
      return;
    }
    pFVar4 = ::operator_new(0x70);
    pFVar5 = (FWindowsUIAControlProvider *)0x0;
    if (pFVar4 != (FWindowsUIAControlProvider *)0x0) {
      TStack_18.Object = *(IAccessibleWidget **)(*(longlong *)param_1 + 0x10);
      TStack_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = FWindowsUIAControlProvider::FWindowsUIAControlProvider
                         (pFVar4,*(FWindowsUIAManager **)(*(longlong *)param_1 + 8),&TStack_18);
    }
    pFVar4 = (FWindowsUIAControlProvider *)&pFVar5->field_0x58;
    if (pFVar5 == (FWindowsUIAControlProvider *)0x0) {
      pFVar4 = (FWindowsUIAControlProvider *)0x0;
    }
    *(FWindowsUIAControlProvider **)**(undefined8 **)((longlong)param_1 + 0x18) = pFVar4;
    **(undefined4 **)((longlong)param_1 + 8) = 0;
  }
  return;
}

// Call @ 1423d1bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *_Src;
  char cVar3;
  byte bVar4;
  HRESULT HVar5;
  HRESULT HVar6;
  HRESULT HVar7;
  HRESULT HVar8;
  DWORD DVar9;
  SAFEARRAY *pSVar10;
  byte *pbVar11;
  FText *pFVar12;
  FString *pFVar13;
  BSTR pOVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  wchar_t *psz;
  byte *pbVar18;
  TRefCountPtr<ITextData> psz_00;
  undefined4 uVar19;
  LONG aLStackX_8 [2];
  FText FStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) == 0) ||
     (cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar3 == '\0'))
  {
    **(undefined4 **)((longlong)param_1 + 8) = 0x80040201;
    return;
  }
  switch(**(undefined4 **)((longlong)param_1 + 0x10)) {
  case 0x7531:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0x2005;
    pSVar10 = SafeArrayCreateVector(5,0,4);
    *(SAFEARRAY **)(**(longlong **)((longlong)param_1 + 0x18) + 8) = pSVar10;
    if (*(longlong *)(**(longlong **)((longlong)param_1 + 0x18) + 8) != 0) {
      (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x20))
                (*(longlong **)(*(longlong *)param_1 + 0x10),auStack_48);
      aLStackX_8[0] = 0;
      HVar5 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)param_1 + 0x18) + 8),
                                  aLStackX_8,auStack_48);
      aLStackX_8[0] = 1;
      HVar6 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)param_1 + 0x18) + 8),
                                  aLStackX_8,auStack_38);
      aLStackX_8[0] = 2;
      HVar7 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)param_1 + 0x18) + 8),
                                  aLStackX_8,auStack_40);
      aLStackX_8[0] = 3;
      HVar8 = SafeArrayPutElement(*(SAFEARRAY **)(**(longlong **)((longlong)param_1 + 0x18) + 8),
                                  aLStackX_8,auStack_30);
      if (HVar5 != 0 && (HVar6 != 0 && (HVar8 != 0 && HVar7 != 0))) {
        return;
      }
    }
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0;
    **(undefined4 **)((longlong)param_1 + 8) = 0x80004005;
    break;
  case 0x7532:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 3;
    DVar9 = GetCurrentProcessId();
    *(DWORD *)(**(longlong **)((longlong)param_1 + 0x18) + 8) = DVar9;
    break;
  case 0x7533:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 3;
    pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
    plVar17 = *(longlong **)(*(longlong *)param_1 + 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = (**(code **)(*plVar17 + 0x60))();
    if (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._8_4_ !=
        FWindowsUIAManager::WidgetTypeToWindowsTypeMap._52_4_) {
      lVar16 = 0x154ba5918;
      if (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_ != 0) {
        lVar16 = FWindowsUIAManager::WidgetTypeToWindowsTypeMap._64_8_;
      }
      iVar1 = *(int *)(lVar16 + ((ulonglong)
                                 (FWindowsUIAManager::WidgetTypeToWindowsTypeMap._72_4_ - 1) &
                                (ulonglong)bVar4) * 4);
      while (iVar1 != -1) {
        pbVar18 = (byte *)((longlong)iVar1 * 0x10 +
                          FWindowsUIAManager::WidgetTypeToWindowsTypeMap._0_8_);
        if (*pbVar18 == bVar4) {
          pbVar11 = pbVar18 + 4;
          if (pbVar18 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          if (pbVar11 != (byte *)0x0) {
            uVar19 = *(undefined4 *)pbVar11;
            goto LAB_1423c94bc;
          }
          break;
        }
        iVar1 = *(int *)(pbVar18 + 8);
      }
    }
    uVar19 = 0xc369;
LAB_1423c94bc:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    *(undefined4 *)(**(longlong **)((longlong)param_1 + 0x18) + 8) = uVar19;
    break;
  case 0x7534:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 8;
    pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
    plVar17 = *(longlong **)(*(longlong *)param_1 + 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = (**(code **)(*plVar17 + 0x60))();
    if (FWindowsUIAManager::WidgetTypeToTextMap._8_4_ !=
        FWindowsUIAManager::WidgetTypeToTextMap._52_4_) {
      lVar16 = 0x154ba5968;
      if (FWindowsUIAManager::WidgetTypeToTextMap._64_8_ != 0) {
        lVar16 = FWindowsUIAManager::WidgetTypeToTextMap._64_8_;
      }
      iVar1 = *(int *)(lVar16 + ((ulonglong)(FWindowsUIAManager::WidgetTypeToTextMap._72_4_ - 1) &
                                (ulonglong)bVar4) * 4);
      while (iVar1 != -1) {
        pbVar18 = (byte *)((longlong)iVar1 * 0x20 + FWindowsUIAManager::WidgetTypeToTextMap._0_8_);
        if (*pbVar18 == bVar4) {
          pFVar12 = (FText *)(pbVar18 + 8);
          if (pbVar18 == (byte *)0x0) {
            pFVar12 = (FText *)0x0;
          }
          if (pFVar12 != (FText *)0x0) {
            pFVar13 = FText::ToString(pFVar12);
            FStack_58.Flags = (pFVar13->Data).ArrayNum;
            _Src = (pFVar13->Data).AllocatorInstance.Data;
            goto joined_r0x0001423c979a;
          }
          break;
        }
        iVar1 = *(int *)(pbVar18 + 0x18);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&CustomControlTypeName,L"SlateAccessibility",L"ControlTypeCustom",L"custom");
      atexit(`WidgetTypeToLocalizedString'::__l7::
             _dynamic_atexit_destructor_for__CustomControlTypeName__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar13 = FText::ToString(&CustomControlTypeName);
    FStack_58.Flags = (pFVar13->Data).ArrayNum;
    _Src = (pFVar13->Data).AllocatorInstance.Data;
joined_r0x0001423c979a:
    if (FStack_58.Flags == 0) {
      FStack_58.TextData.Reference = (ITextData *)0x0;
      FStack_58._12_4_ = 0;
    }
    else {
      FStack_58.TextData.Reference = (ITextData *)0x0;
      lVar16 = (longlong)(int)FStack_58.Flags;
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_58.Flags,0,(ForAnyElementType *)&FStack_58,FStack_58.Flags,
                 (int *)&FStack_58.field_0xc);
      memcpy(FStack_58.TextData.Reference,_Src,lVar16 * 2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    psz_00.Reference = (ITextData *)L"";
    if (FStack_58.Flags != 0) {
      psz_00.Reference = FStack_58.TextData.Reference;
    }
    goto LAB_1423c981f;
  case 0x7535:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 8;
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x70))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),&FStack_58);
    if (*(int *)(puVar15 + 1) == 0) {
LAB_1423c9818:
      psz_00.Reference = (ITextData *)L"";
    }
    else {
      psz_00.Reference = (ITextData *)*puVar15;
    }
    goto LAB_1423c981f;
  default:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0;
    break;
  case 0x7538:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xb0))();
    goto LAB_1423c968a;
  case 0x7539:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x98))();
    goto LAB_1423c968a;
  case 0x753a:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x88))();
    goto LAB_1423c968a;
  case 0x753c:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 8;
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x68))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),&FStack_58);
    if (*(int *)(puVar15 + 1) == 0) goto LAB_1423c9818;
    psz_00.Reference = (ITextData *)*puVar15;
    goto LAB_1423c981f;
  case 0x753d:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 8;
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x78))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),&FStack_58);
    if (*(int *)(puVar15 + 1) == 0) goto LAB_1423c9818;
    psz_00.Reference = (ITextData *)*puVar15;
LAB_1423c981f:
    pOVar14 = SysAllocString((OLECHAR *)psz_00.Reference);
    *(BSTR *)(**(longlong **)((longlong)param_1 + 0x18) + 8) = pOVar14;
    if (FStack_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(FStack_58.TextData.Reference);
    }
    break;
  case 0x753f:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 3;
    *(undefined4 *)(**(longlong **)((longlong)param_1 + 0x18) + 8) =
         *(undefined4 *)(*(longlong *)(*(longlong *)param_1 + 8) + 0xb0);
    break;
  case 0x7540:
  case 0x7541:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0xb;
    *(undefined2 *)(**(longlong **)((longlong)param_1 + 0x18) + 8) = 0xffff;
    break;
  case 0x7543:
    lVar16 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd0))();
    if (lVar16 == 0) {
      return;
    }
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0xb;
    plVar17 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd0))();
    cVar3 = (**(code **)(*plVar17 + 8))(plVar17);
    goto LAB_1423c968a;
  case 0x7546:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0xb;
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x90))();
LAB_1423c968a:
    *(ushort *)(**(longlong **)((longlong)param_1 + 0x18) + 8) = -(ushort)(cVar3 != '\0');
    break;
  case 0x7548:
    *(undefined2 *)**(undefined8 **)((longlong)param_1 + 0x18) = 8;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&FStack_58,L"SlateAccessibility",L"Slate",L"Slate");
    pFVar13 = FText::ToString(pFVar12);
    if ((pFVar13->Data).ArrayNum == 0) {
      psz = L"";
    }
    else {
      psz = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pOVar14 = SysAllocString(psz);
    *(BSTR *)(**(longlong **)((longlong)param_1 + 0x18) + 8) = pOVar14;
    if (FStack_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_58.TextData.Reference + 0x10))();
    }
  }
  return;
}

// Call @ 1423d1be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  HRESULT HVar2;
  SAFEARRAY *pSVar3;
  LONG aLStackX_8 [2];
  undefined4 auStackX_10 [6];
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      auStackX_10[0] = 3;
      auStackX_10[1] = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 8))();
      pSVar3 = SafeArrayCreateVector(3,0,2);
      *(SAFEARRAY **)**(undefined8 **)((longlong)param_1 + 0x10) = pSVar3;
      if (*(longlong *)**(undefined8 **)((longlong)param_1 + 0x10) != 0) {
        aLStackX_8[0] = 0;
        do {
          HVar2 = SafeArrayPutElement(*(SAFEARRAY **)**(undefined8 **)((longlong)param_1 + 0x10),
                                      aLStackX_8,auStackX_10 + aLStackX_8[0]);
          if (HVar2 != 0) {
            **(undefined4 **)((longlong)param_1 + 8) = 0x80004005;
            return;
          }
          aLStackX_8[0] = aLStackX_8[0] + 1;
        } while (aLStackX_8[0] < 2);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
      return;
    }
  }
  **(undefined4 **)((longlong)param_1 + 8) = 0x80040201;
  return;
}

// Call @ 1423d1bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FWindowsUIAManager *this;
  HRESULT *pHVar1;
  code *pcVar2;
  TSharedPtr<IAccessibleWidget,1> *pTVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  HRESULT HVar7;
  longlong lVar8;
  undefined8 *puVar9;
  SAFEARRAY *pSVar10;
  FWindowsUIAWidgetProvider *pv;
  uint uVar11;
  uint auStackX_8 [2];
  TSharedPtr<IAccessibleWidget,1> *pTStack_38;
  ULONG UStack_30;
  TSharedRef<IAccessibleWidget,1> TStack_28;
  
  if (((*(longlong *)(*(longlong *)param_1 + 8) != 0) &&
      (cVar4 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar4 != '\0'))
     && (lVar8 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe0))(), lVar8 != 0))
  {
    puVar9 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe0))();
    (**(code **)*puVar9)(puVar9,&pTStack_38);
    pSVar10 = SafeArrayCreateVector(0xd,0,UStack_30);
    uVar11 = 0;
    *(SAFEARRAY **)**(undefined8 **)((longlong)param_1 + 0x10) = pSVar10;
    if (0 < (int)UStack_30) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar11 < (int)UStack_30) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar3 = pTStack_38;
        this = *(FWindowsUIAManager **)(*(longlong *)param_1 + 8);
        if ((*(longlong *)((longlong)&pTStack_38->Object + lVar8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TStack_28.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)
              ((longlong)&(pTVar3->SharedReferenceCount).ReferenceController + lVar8);
        TStack_28.Object = *(IAccessibleWidget **)((longlong)&pTVar3->Object + lVar8);
        if (TStack_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((TStack_28.Object == (IAccessibleWidget *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pv = FWindowsUIAManager::GetWidgetProvider(this,&TStack_28);
        pHVar1 = *(HRESULT **)((longlong)param_1 + 8);
        auStackX_8[0] = uVar11;
        HVar7 = SafeArrayPutElement(*(SAFEARRAY **)**(undefined8 **)((longlong)param_1 + 0x10),
                                    (LONG *)auStackX_8,pv);
        *pHVar1 = HVar7;
        if (**(int **)((longlong)param_1 + 8) != 0) {
          (**(code **)(*(longlong *)&pv->field_0x28 + 0x10))();
          break;
        }
        (**(code **)(*(longlong *)&pv->field_0x28 + 0x10))();
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar11 < (int)UStack_30);
    }
    DestructItems<TSharedPtr<IAccessibleWidget,1>,int>(pTStack_38,UStack_30);
    if (pTStack_38 != (TSharedPtr<IAccessibleWidget,1> *)0x0) {
      FMemory::Free(pTStack_38);
    }
  }
  return;
}

// Call @ 1423d1c00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  FString *this;
  BSTR pOVar6;
  ForAnyElementType psz;
  int iVar7;
  int iVar8;
  FString FStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)param_1;
      puVar5 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 0xd8))();
      this = (FString *)(**(code **)*puVar5)(puVar5);
      ::FString::Mid(this,&FStack_18,*(int *)(lVar1 + 0x30),*(int *)(lVar1 + 0x34));
      iVar8 = FStack_18.Data.ArrayNum + -1;
      if (FStack_18.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      iVar4 = iVar8;
      if (**(int **)((longlong)param_1 + 0x10) < iVar8) {
        iVar4 = **(int **)((longlong)param_1 + 0x10);
      }
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      ::FString::RemoveAt(&FStack_18,iVar7,iVar8 - iVar7,No);
      FVar2.Data = FStack_18.Data.AllocatorInstance.Data;
      FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      psz.Data = (FScriptContainerElement *)L"";
      if (FStack_18.Data.ArrayNum != 0) {
        psz.Data = FVar2.Data;
      }
      FStack_18.Data.ArrayNum = 0;
      FStack_18.Data.ArrayMax = 0;
      pOVar6 = SysAllocString((OLECHAR *)psz.Data);
      *(BSTR *)**(undefined8 **)((longlong)param_1 + 0x18) = pOVar6;
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 200))();
      (**(code **)*puVar2)(puVar2);
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(longlong **)((longlong)param_1 + 0x10) + 8);
  if (**(longlong **)((longlong)param_1 + 0x10) == 0) {
    puVar2 = (undefined4 *)&DAT_00000030;
  }
  if (**(int **)((longlong)param_1 + 0x18) != 0) {
    puVar2 = puVar2 + 1;
  }
  if (**(int **)((longlong)param_1 + 8) == 0) {
    *(undefined4 *)(*(longlong *)param_1 + 0x30) = *puVar2;
    lVar1 = *(longlong *)param_1;
    if (*(int *)(lVar1 + 0x34) < *(int *)(lVar1 + 0x30)) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x30);
      return;
    }
  }
  else {
    *(undefined4 *)(*(longlong *)param_1 + 0x34) = *puVar2;
    lVar1 = *(longlong *)param_1;
    if (*(int *)(lVar1 + 0x34) < *(int *)(lVar1 + 0x30)) {
      *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x34);
    }
  }
  return;
}

// Call @ 1423d1cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FWindowsUIAManager *this;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  IAccessibleWidget **ppIVar5;
  FWindowsUIAWidgetProvider *pFVar6;
  undefined1 *puVar7;
  FSharedReferencer<1> FVar8;
  IAccessibleWidget *pIStack_78;
  FSharedReferencer<1> FStack_70;
  TSharedRef<IAccessibleWidget,1> TStack_68;
  undefined1 auStack_58 [8];
  TReferenceControllerBase<1> *pTStack_50;
  undefined1 auStack_48 [8];
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 auStack_38 [8];
  TReferenceControllerBase<1> *pTStack_30;
  undefined1 auStack_28 [8];
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 auStack_18 [8];
  TReferenceControllerBase<1> *pTStack_10;
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) == 0) ||
     (cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar2 == '\0'))
  {
    **(undefined4 **)((longlong)param_1 + 8) = 0x80040201;
    return;
  }
  pIStack_78 = (IAccessibleWidget *)0x0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar4 = **(int **)((longlong)param_1 + 0x10);
  if (iVar4 == 0) {
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x28))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),auStack_18);
    if (&pIStack_78 != ppIVar5) {
      pIStack_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
    }
  }
  else if (iVar4 == 1) {
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x30))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),auStack_28);
    pTStack_10 = pTStack_20;
    if (&pIStack_78 != ppIVar5) {
      pIStack_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      pTStack_10 = pTStack_20;
    }
  }
  else if (iVar4 == 2) {
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x38))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),auStack_38);
    pTStack_10 = pTStack_30;
    if (&pIStack_78 != ppIVar5) {
      pIStack_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      pTStack_10 = pTStack_30;
    }
  }
  else if (iVar4 == 3) {
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x58))();
    if (iVar4 < 1) goto LAB_1423c9f3b;
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x50))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),auStack_48,0);
    pTStack_10 = pTStack_40;
    if (&pIStack_78 != ppIVar5) {
      pIStack_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      pTStack_10 = pTStack_40;
    }
  }
  else {
    if ((iVar4 != 4) ||
       (iVar4 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x58))(), iVar4 < 1))
    goto LAB_1423c9f3b;
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x50))
                        (*(longlong **)(*(longlong *)param_1 + 0x10),auStack_58,iVar4 + -1);
    pTStack_10 = pTStack_50;
    if (&pIStack_78 != ppIVar5) {
      pIStack_78 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_70,(FSharedReferencer<1> *)(ppIVar5 + 1));
      pTStack_10 = pTStack_50;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
LAB_1423c9f3b:
  if (pIStack_78 == (IAccessibleWidget *)0x0) {
    *(undefined8 *)**(undefined8 **)((longlong)param_1 + 0x18) = 0;
    FVar8.ReferenceController = FStack_70.ReferenceController;
  }
  else {
    this = *(FWindowsUIAManager **)(*(longlong *)param_1 + 8);
    if ((pIStack_78 == (IAccessibleWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar8.ReferenceController = FStack_70.ReferenceController;
    TStack_68.Object = pIStack_78;
    TStack_68.SharedReferenceCount.ReferenceController = FStack_70.ReferenceController;
    if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIStack_78 == (IAccessibleWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = FWindowsUIAManager::GetWidgetProvider(this,&TStack_68);
    puVar7 = &pFVar6->field_0x30;
    if (pFVar6 == (FWindowsUIAWidgetProvider *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    *(undefined1 **)**(undefined8 **)((longlong)param_1 + 0x18) = puVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  return;
}

// Call @ 1423d1ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe8))();
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe8))();
        (**(code **)*puVar3)(puVar3);
        **(undefined4 **)((longlong)param_1 + 8) = 0;
      }
    }
  }
  return;
}

// Call @ 1423d1d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x98))();
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xb8))
                  (*(longlong **)(*(longlong *)param_1 + 0x10),0);
        **(undefined4 **)((longlong)param_1 + 8) = 0;
        return;
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0x80040204;
      return;
    }
  }
  **(undefined4 **)((longlong)param_1 + 8) = 0x80040201;
  return;
}

// Call @ 1423d1d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  FString *pFVar4;
  FString FStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd0))();
      pcVar1 = *(code **)(*plVar3 + 0x38);
      pFVar4 = ::FString::SanitizeFloat(&FStack_18,**(double **)((longlong)param_1 + 0x10),1);
      (*pcVar1)(plVar3,pFVar4);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  FString *pFVar4;
  FString FStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd0))();
      pcVar1 = *(code **)(*plVar3 + 0x38);
      pFVar4 = ::FString::FString(&FStack_18,(wchar_t *)**(undefined8 **)((longlong)param_1 + 0x10))
      ;
      (*pcVar1)(plVar3,pFVar4);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1d80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) == 0) {
    return;
  }
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = **(int **)((longlong)param_1 + 0x10);
  if (iVar1 == 0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xc0))();
    uVar4 = 0;
  }
  else if (iVar1 == 1) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xc0))();
    uVar4 = 2;
  }
  else {
    if (iVar1 != 2) goto LAB_1423ca292;
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xc0))();
    uVar4 = 1;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar4);
LAB_1423ca292:
  **(undefined4 **)((longlong)param_1 + 8) = 0;
  return;
}

// Call @ 1423d1d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  uint uVar5;
  
  switch(**(undefined4 **)((longlong)param_1 + 8)) {
  case 10000:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 200))();
    if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 8))(), cVar1 == '\0')) {
      **(undefined1 **)((longlong)param_1 + 0x10) = 1;
      return;
    }
    break;
  case 0x2711:
    lVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe0))();
    *(bool *)*(undefined8 *)((longlong)param_1 + 0x10) = lVar2 != 0;
    return;
  case 0x2712:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd0))();
    if ((plVar3 != (longlong *)0x0) &&
       (uVar5 = (**(code **)(*plVar3 + 0x10))(),
       (float)(uVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      **(undefined1 **)((longlong)param_1 + 0x10) = 1;
      return;
    }
    break;
  case 0x2713:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd0))();
    if ((plVar3 != (longlong *)0x0) && (fVar4 = (float)(**(code **)(*plVar3 + 0x10))(), 0.0 < fVar4)
       ) {
      **(undefined1 **)((longlong)param_1 + 0x10) = 1;
      return;
    }
    break;
  default:
    return;
  case 0x271a:
    lVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe8))();
    *(bool *)*(undefined8 *)((longlong)param_1 + 0x10) = lVar2 != 0;
    return;
  case 0x271e:
    lVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd8))();
    *(bool *)*(undefined8 *)((longlong)param_1 + 0x10) = lVar2 != 0;
    return;
  case 0x271f:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 200))();
    if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 8))(), cVar1 != '\0')) {
      **(undefined1 **)((longlong)param_1 + 0x10) = 1;
      return;
    }
  }
  **(undefined1 **)((longlong)param_1 + 0x10) = 0;
  return;
}

// Call @ 1423d1da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,void,enum_FTrackedActivity::EEvent,FTrackedActivity::FInfo_const_&>
::Call(void *param_1,EEvent *param_2,FInfo *param_3)

{
  `FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 1423d1db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 200))();
      (**(code **)*puVar2)(puVar2);
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x20))
                (*(longlong **)(*(longlong *)param_1 + 0x10),&dStack_38);
      *(double *)**(undefined8 **)((longlong)param_1 + 0x10) = dStack_38;
      *(double *)(**(longlong **)((longlong)param_1 + 0x10) + 8) = dStack_30;
      *(double *)(**(longlong **)((longlong)param_1 + 0x10) + 0x10) = dStack_28 - dStack_38;
      *(double *)(**(longlong **)((longlong)param_1 + 0x10) + 0x18) = dStack_20 - dStack_30;
      **(undefined4 **)((longlong)param_1 + 8) = 0;
      return;
    }
  }
  **(undefined4 **)((longlong)param_1 + 8) = 0x80040201;
  return;
}

// Call @ 1423d1e20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar4 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))();
      bVar3 = (bool)(**(code **)(*plVar4 + 0x20))(plVar4,2);
      FVariant::FVariant<bool>(&FStack_28,bVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&FStack_28);
      *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar3;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1e30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar4 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))();
      bVar3 = (bool)(**(code **)(*plVar4 + 0x20))(plVar4,1);
      FVariant::FVariant<bool>(&FStack_28,bVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&FStack_28);
      *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar3;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVariant::FVariant<bool>(&FStack_28,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&FStack_28);
      *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar3;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVariant::FVariant<bool>(&FStack_28,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&FStack_28);
      *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar3;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVariant::FVariant<bool>(&FStack_28,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&FStack_28);
      *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar3;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe0))();
      if (lVar3 != 0) {
        plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe0))();
        bVar2 = (**(code **)(*plVar4 + 8))(plVar4);
        *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar2;
        **(undefined4 **)((longlong)param_1 + 8) = 0;
      }
    }
  }
  return;
}

// Call @ 1423d1ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  FWindowsUIATextRangeProvider *pFVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      pFVar2 = ::operator_new(0x38);
      if (pFVar2 == (FWindowsUIATextRangeProvider *)0x0) {
        pFVar2 = (FWindowsUIATextRangeProvider *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xd8))();
        lVar4 = (**(code **)*puVar3)(puVar3);
        uVar6 = (ulonglong)(*(int *)(lVar4 + 8) - 1);
        if (*(int *)(lVar4 + 8) == 0) {
          uVar6 = 0;
        }
        TStack_18.Object = *(IAccessibleWidget **)(*(longlong *)param_1 + 0x10);
        TStack_18.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
        if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar2 = FWindowsUIATextRangeProvider::FWindowsUIATextRangeProvider
                           (pFVar2,*(FWindowsUIAManager **)(*(longlong *)param_1 + 8),&TStack_18,
                            (FTextRange)(uVar6 << 0x20));
      }
      plVar5 = &pFVar2->_padding_;
      if (pFVar2 == (FWindowsUIATextRangeProvider *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      *(longlong **)**(undefined8 **)((longlong)param_1 + 0x10) = plVar5;
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FWindowsUIAManager *this;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FWindowsUIAWidgetProvider *pFVar4;
  FWindowsUIAWidgetProvider *pFVar5;
  IAccessibleWidget *pIStack_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x18))
                (*(longlong **)(*(longlong *)param_1 + 0x10),&pIStack_28);
      if (pIStack_28 != (IAccessibleWidget *)0x0) {
        this = *(FWindowsUIAManager **)(*(longlong *)param_1 + 8);
        if (pIStack_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        TStack_18.Object = pIStack_28;
        TStack_18.SharedReferenceCount.ReferenceController = pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pIStack_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar4 = FWindowsUIAManager::GetWidgetProvider(this,&TStack_18);
        pFVar5 = pFVar4 + 1;
        if (pFVar4 == (FWindowsUIAWidgetProvider *)0x0) {
          pFVar5 = (FWindowsUIAWidgetProvider *)0x0;
        }
        *(FWindowsUIAWidgetProvider **)**(undefined8 **)((longlong)param_1 + 0x10) = pFVar5;
        **(undefined4 **)((longlong)param_1 + 8) = 0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
    }
  }
  return;
}

// Call @ 1423d1f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  HRESULT *pHVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  HRESULT HVar5;
  undefined8 *puVar6;
  HWND hwnd;
  longlong *plStack_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
  if (cVar3 != '\0') {
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xc0))();
    (**(code **)*puVar6)(puVar6,&plStack_18);
    if (plStack_18 != (longlong *)0x0) {
      if ((plStack_18 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      hwnd = (HWND)(**(code **)(*plStack_18 + 0xc0))();
      if (hwnd != (HWND)0x0) {
        pHVar1 = *(HRESULT **)((longlong)param_1 + 8);
        HVar5 = UiaHostProviderFromHwnd
                          (hwnd,(IRawElementProviderSimple **)
                                **(undefined8 **)((longlong)param_1 + 0x10));
        *pHVar1 = HVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_10);
        return;
      }
    }
    **(undefined4 **)((longlong)param_1 + 8) = 0x80131509;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  }
  return;
}

// Call @ 1423d1f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar4 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))();
      bVar3 = (bool)(**(code **)(*plVar4 + 0x38))(plVar4);
      FVariant::FVariant<bool>(&FStack_28,bVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&FStack_28);
      *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar3;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar3 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar2 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0xd0))();
      bVar4 = (bool)(**(code **)*puVar5)(puVar5);
      FVariant::FVariant<bool>(&FStack_28,bVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar4 = FVariant::GetValue<bool>(&FStack_28);
      *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar4;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d1f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe8))();
      if (lVar3 != 0) {
        plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe8))();
        bVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
        *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar2;
        **(undefined4 **)((longlong)param_1 + 8) = 0;
      }
    }
  }
  return;
}

// Call @ 1423d1fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe0))();
      if (lVar3 != 0) {
        plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe0))();
        bVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar2;
        **(undefined4 **)((longlong)param_1 + 8) = 0;
      }
    }
  }
  return;
}

// Call @ 1423d2040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  FVariant local_28;
  
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVariant::FVariant<bool>(&local_28,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar2 = FVariant::GetValue<bool>(&local_28);
  *(uint *)**(undefined8 **)((longlong)param_1 + 0x10) = (uint)bVar2;
  if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Value.AllocatorInstance.Data);
  }
  return;
}

// Call @ 1423d20b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar3 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
      FVariant::FVariant<double>(&FStack_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&FStack_28);
      *(double *)**(undefined8 **)((longlong)param_1 + 0x10) = dVar5;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d20c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar3 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
      FVariant::FVariant<double>(&FStack_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&FStack_28);
      *(double *)**(undefined8 **)((longlong)param_1 + 0x10) = dVar5;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d20d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar3 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x20))(plVar3);
      FVariant::FVariant<double>(&FStack_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&FStack_28);
      *(double *)**(undefined8 **)((longlong)param_1 + 0x10) = dVar5;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d20e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FWindowsUIAManager *this;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  FWindowsUIAWidgetProvider *pFVar6;
  undefined1 *puVar7;
  IAccessibleWidget *pIStack_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> TStack_18;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      lVar4 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe8))();
      if (lVar4 != 0) {
        plVar5 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0xe8))();
        (**(code **)(*plVar5 + 0x20))(plVar5,&pIStack_28);
        if (pIStack_28 != (IAccessibleWidget *)0x0) {
          this = *(FWindowsUIAManager **)(*(longlong *)param_1 + 8);
          if (pIStack_28 == (IAccessibleWidget *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          TStack_18.Object = pIStack_28;
          TStack_18.SharedReferenceCount.ReferenceController = pTStack_20;
          if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_20->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pIStack_28 == (IAccessibleWidget *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pFVar6 = FWindowsUIAManager::GetWidgetProvider(this,&TStack_18);
          puVar7 = &pFVar6->field_0x28;
          if (pFVar6 == (FWindowsUIAWidgetProvider *)0x0) {
            puVar7 = (undefined1 *)0x0;
          }
          *(undefined1 **)**(undefined8 **)((longlong)param_1 + 0x10) = puVar7;
          **(undefined4 **)((longlong)param_1 + 8) = 0;
          (**(code **)(*(longlong *)&pFVar6->field_0x28 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_20);
      }
    }
  }
  return;
}

// Call @ 1423d20f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar3 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
      FVariant::FVariant<double>(&FStack_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&FStack_28);
      *(double *)**(undefined8 **)((longlong)param_1 + 0x10) = dVar5;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d2100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar4 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 200))();
      cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      FVariant::FVariant<int>(&FStack_28,(uint)(cVar2 != '\0'));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      iVar3 = FVariant::GetValue<int>(&FStack_28);
      *(int *)**(undefined8 **)((longlong)param_1 + 0x10) = iVar3;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d2110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  wchar_t *_Str;
  double dVar5;
  void *apvStack_38 [2];
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar3 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x28))(plVar3,apvStack_38);
      if (*(int *)(puVar4 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)*puVar4;
      }
      dVar5 = _wtof(_Str);
      FVariant::FVariant<double>(&FStack_28,(double)(float)dVar5);
      if (apvStack_38[0] != (void *)0x0) {
        FMemory::Free(apvStack_38[0]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&FStack_28);
      *(double *)**(undefined8 **)((longlong)param_1 + 0x10) = dVar5;
      if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d2120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  longlong *plVar4;
  FString *pFVar5;
  BSTR pOVar6;
  wchar_t *psz;
  undefined1 *puVar7;
  undefined7 uVar8;
  FVariant FStack_108;
  FString FStack_f0;
  FArchiveState FStack_d8;
  undefined8 uStack_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTStack_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [16];
  
  puVar7 = auStack_28;
  if (*(longlong *)(*(longlong *)param_1 + 8) != 0) {
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
    if (cVar3 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
      plVar4 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xd0))();
      pFVar5 = (FString *)(**(code **)(*plVar4 + 0x28))(plVar4,puVar7);
      FStack_d8._padding_ = 0;
      FStack_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      FStack_108.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FStack_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      FStack_108.Value.ArrayNum = 0;
      FStack_108.Value.ArrayMax = 0;
      FStack_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      FStack_d8._40_8_ = 0;
      FStack_d8.ArSerializingDefaults = 0;
      FStack_d8.ArPortFlags = 0;
      FStack_d8.ArMaxSerializeSize = 0;
      FStack_d8.ArUEVer.FileVersionUE4 = 0;
      FStack_d8.ArUEVer.FileVersionUE5 = 0;
      FStack_d8.ArLicenseeUEVer = 0;
      FStack_d8.ArEngineVer.Major = 0;
      FStack_d8.ArEngineVer.Minor = 0;
      FStack_d8.ArEngineVer.Patch = 0;
      FStack_d8.ArEngineVer._6_2_ = 0;
      FStack_d8.ArEngineVer.Changelist = 0;
      FStack_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      FStack_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      FStack_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
      FStack_d8.SerializedProperty = (FProperty *)0x0;
      FStack_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      FStack_d8.bCustomVersionsAreReset = false;
      FStack_d8._129_7_ = 0;
      FStack_d8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&FStack_d8);
      uStack_48 = 0;
      FStack_d8._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      pTStack_40 = &FStack_108.Value;
      uVar8 = (undefined7)((ulonglong)puVar7 >> 8);
      uStack_38 = 0;
      FArchiveState::SetIsSaving(&FStack_d8,true);
      (**(code **)(FStack_d8._padding_ + 0x108))(&FStack_d8,CONCAT71(uVar8,1));
      FStack_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
      ::operator<<((FArchive *)&FStack_d8,pFVar5);
      FStack_108.Type = String;
      FArchive::~FArchive((FArchive *)&FStack_d8);
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pFVar5 = FVariant::GetValue<FString>(&FStack_108,&FStack_f0);
      if ((pFVar5->Data).ArrayNum == 0) {
        psz = L"";
      }
      else {
        psz = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pOVar6 = SysAllocString(psz);
      *(BSTR *)**(undefined8 **)((longlong)param_1 + 0x10) = pOVar6;
      if (FStack_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_f0.Data.AllocatorInstance.Data);
      }
      if (FStack_108.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_108.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
  }
  return;
}

// Call @ 1423d2130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  int iVar3;
  FVariant FStack_28;
  
  if ((*(longlong *)(*(longlong *)param_1 + 8) == 0) ||
     (cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))(), cVar2 == '\0'))
  {
    *(undefined4 *)**(undefined8 **)((longlong)param_1 + 8) = 1;
    return;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVariant::FVariant<int>(&FStack_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = FVariant::GetValue<int>(&FStack_28);
  *(int *)**(undefined8 **)((longlong)param_1 + 8) = iVar3;
  if (FStack_28.Value.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
  return;
}

// Call @ 1423d2140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  FVariant FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 8) == 0) {
    return;
  }
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x18);
  plVar4 = *(longlong **)(*(longlong *)param_1 + 0x10);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))();
  iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else if (iVar3 == 1) {
    iVar3 = 2;
  }
  else {
    if (iVar3 != 2) {
      FStack_28.Type = Empty;
      FStack_28.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_28.Value.ArrayNum = 0;
      FStack_28.Value.ArrayMax = 0;
      goto LAB_1423cb686;
    }
    iVar3 = 1;
  }
  FVariant::FVariant<int>(&FStack_28,iVar3);
LAB_1423cb686:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = FVariant::GetValue<int>(&FStack_28);
  *(int *)**(undefined8 **)((longlong)param_1 + 0x10) = iVar3;
  if (FStack_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Value.AllocatorInstance.Data);
  }
  **(undefined4 **)((longlong)param_1 + 8) = 0;
  return;
}

// Call @ 1423d2150

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1423d2170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,void,FTrackedActivity::FInfo_const_&>
::Call(void *param_1,FInfo *param_2)

{
  wchar_t *pwVar1;
  undefined1 auStackY_258 [32];
  wchar_t awStack_218 [256];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pwVar1 = param_2->Name;
  TCString<wchar_t>::SprintfImpl(awStack_218,L"%u%s");
  FWindowsConsoleOutputDevice2::FConsoleWindow::SetActivity
            (*(FConsoleWindow **)param_1,awStack_218,pwVar1,param_2->Status,(uint)param_2->Light,
             param_2->SortValue,param_2->Type == Activity);
  return;
}

// Call @ 1423d2180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,void>
::Call(void *param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  int *piVar6;
  
  pIVar2 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                    ::__l2::Name,L"ConsoleCommandExecutor");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar1) {
    pwVar5 = L"";
    if (4 < (byte)LogExec._0_1_) {
      Logging::Private::BasicLog<5>
                (&`public:___cdecl_`public:___int64___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc(HWND__*___ptr64,unsigned_int,unsigned___int64,__int64)___ptr64'::`104'::<lambda_3>::operator()(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogExec);
    }
    pIVar2 = IModularFeatures::Get();
    if ((*piVar6 < `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                      ::__l2::Name,L"ConsoleCommandExecutor");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (*(int *)((longlong)param_1 + 8) != 0) {
      pwVar5 = *(wchar_t **)param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001423cc8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x40))(plVar4,pwVar5);
    return;
  }
  if (4 < (byte)LogExec._0_1_) {
    Logging::Private::BasicLog<5>
              (&`public:___cdecl_`public:___int64___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc(HWND__*___ptr64,unsigned_int,unsigned___int64,__int64)___ptr64'::`104'::<lambda_3>::operator()(void)const___ptr64'
                ::__l17::LOG_Static,(FLogCategoryBase *)&LogExec);
  }
  return;
}

