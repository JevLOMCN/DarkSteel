// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 71

// Construct<FHeaderWidgetSizeColumn> @ 142d51650

void __cdecl UE::CoreUObject::Private::Construct<FHeaderWidgetSizeColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FHeaderWidgetSizeColumn> @ 142d51660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHeaderWidgetSizeColumn>(void *param_1)

{
  return;
}

// Construct<FToolWidget_DragBoxPosition> @ 142d51670

void __cdecl UE::CoreUObject::Private::Construct<FToolWidget_DragBoxPosition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(TVector2<float>_u_0 *)param_1 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined2 *)((longlong)param_1 + 8) = 0x301;
  return;
}

// ConstructForTests<FToolWidget_DragBoxPosition> @ 142d51690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FToolWidget_DragBoxPosition>(void *param_1)

{
  *(TVector2<float>_u_0 *)param_1 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined2 *)((longlong)param_1 + 8) = 0x301;
  return;
}

// Destruct<FToolWidget_DragBoxPosition> @ 142d516b0

void __cdecl UE::CoreUObject::Private::Destruct<FToolWidget_DragBoxPosition>(void *param_1)

{
  return;
}

// Copy<FToolWidget_DragBoxPosition> @ 142d516c0

bool __cdecl
UE::CoreUObject::Private::Copy<FToolWidget_DragBoxPosition>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomTextFilterData> @ 142d51700

void __cdecl UE::CoreUObject::Private::Construct<FCustomTextFilterData>(void *param_1)

{
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// ConstructForTests<FCustomTextFilterData> @ 142d51730

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomTextFilterData>(void *param_1)

{
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return;
}

// Destruct<FCustomTextFilterData> @ 142d51760

void __cdecl UE::CoreUObject::Private::Destruct<FCustomTextFilterData>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d51788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FCustomTextFilterData> @ 142d517a0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomTextFilterData>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      plVar1 = *(longlong **)(lVar4 + (longlong)param_1);
      plVar2 = *(longlong **)param_1;
      if (plVar2 != plVar1) {
        *(longlong **)param_1 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar4 + 8);
      plVar1 = *(longlong **)((longlong)param_1 + lVar4 + 0x10);
      plVar2 = *(longlong **)((longlong)param_1 + 0x10);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 0x10) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res8);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x18);
      lVar3 = *(longlong *)((longlong)param_1 + lVar4 + 0x28);
      *(longlong *)((longlong)param_1 + 0x20) = *(longlong *)((longlong)param_1 + lVar4 + 0x20);
      *(longlong *)((longlong)param_1 + 0x28) = lVar3;
      param_3 = param_3 + -1;
      param_1 = (longlong *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetEnterEditModeColumn> @ 142d51880

void __cdecl UE::CoreUObject::Private::Construct<FWidgetEnterEditModeColumn>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWidgetEnterEditModeColumn> @ 142d518a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetEnterEditModeColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWidgetEnterEditModeColumn> @ 142d518c0

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetEnterEditModeColumn>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Copy<FWidgetEnterEditModeColumn> @ 142d518f0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetEnterEditModeColumn>(void *param_1,void *param_2,int param_3)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (this,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetDoubleClickedColumn> @ 142d51940

void __cdecl UE::CoreUObject::Private::Construct<FWidgetDoubleClickedColumn>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWidgetDoubleClickedColumn> @ 142d51960

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetDoubleClickedColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWidgetDoubleClickedColumn> @ 142d51980

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetDoubleClickedColumn>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Copy<FWidgetDoubleClickedColumn> @ 142d519b0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetDoubleClickedColumn>(void *param_1,void *param_2,int param_3)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong *plVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  if (param_3 != 0) {
    this_00 = param_1;
    do {
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)
             (((longlong)param_2 - (longlong)param_1) + (longlong)this_00);
      if (this != this_00) {
        local_48 = (undefined1  [8])0x0;
        local_40.Data = (FScriptContainerElement *)0x0;
        local_38 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FReadAccessScope *)&local_30);
        if ((*(int *)&this->field_0x10 != 0) &&
           (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_30);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  (this_00,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_30);
        if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_40.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
          local_38 = 0;
        }
        if (local_30.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
        }
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_48);
      }
      param_3 = param_3 + -1;
      this_00 = this_00 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetRowScrolledIntoView> @ 142d51d70

void __cdecl UE::CoreUObject::Private::Construct<FWidgetRowScrolledIntoView>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWidgetRowScrolledIntoView> @ 142d51d90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetRowScrolledIntoView>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWidgetRowScrolledIntoView> @ 142d51db0

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetRowScrolledIntoView>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Copy<FWidgetRowScrolledIntoView> @ 142d51de0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetRowScrolledIntoView>(void *param_1,void *param_2,int param_3)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong *plVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  if (param_3 != 0) {
    this_00 = param_1;
    do {
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)
             (((longlong)param_2 - (longlong)param_1) + (longlong)this_00);
      if (this != this_00) {
        local_48 = (undefined1  [8])0x0;
        local_40.Data = (FScriptContainerElement *)0x0;
        local_38 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FReadAccessScope *)&local_30);
        if ((*(int *)&this->field_0x10 != 0) &&
           (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_30);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  (this_00,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_30);
        if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_40.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
          local_38 = 0;
        }
        if (local_30.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
        }
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_48);
      }
      param_3 = param_3 + -1;
      this_00 = this_00 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSidebarState> @ 142d51fb0

void __cdecl UE::CoreUObject::Private::Construct<FSidebarState>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FSidebarState> @ 142d51fe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSidebarState>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FSidebarState> @ 142d52000

void __cdecl UE::CoreUObject::Private::Destruct<FSidebarState>(void *param_1)

{
  DestructItems<FSidebarDrawerState,int>
            (*(FSidebarDrawerState **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18))
  ;
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FSidebarState> @ 142d52040

bool __cdecl UE::CoreUObject::Private::Copy<FSidebarState>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FSidebarDrawerState *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar5 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar5 + 8);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x10)) {
        DestructItems<FSidebarDrawerState,int>
                  ((FSidebarDrawerState *)pFVar4->Data,*(int *)((longlong)param_1 + 0x18));
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x18);
        piVar1 = (int *)((longlong)param_1 + 0x1c);
        pFVar3 = (FSidebarDrawerState *)
                 ((ForAnyElementType *)((longlong)param_1 + lVar5 + 0x10))->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<FSidebarDrawerState,FSidebarDrawerState,int>(pFVar4->Data,pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetContextMenuColumn> @ 142d52140

void __cdecl UE::CoreUObject::Private::Construct<FWidgetContextMenuColumn>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWidgetContextMenuColumn> @ 142d52160

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetContextMenuColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWidgetContextMenuColumn> @ 142d52180

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetContextMenuColumn>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Copy<FWidgetContextMenuColumn> @ 142d521b0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetContextMenuColumn>(void *param_1,void *param_2,int param_3)

{
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
                (this,(TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSidebarDrawerState> @ 142d52300

void __cdecl UE::CoreUObject::Private::Construct<FSidebarDrawerState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FSidebarDrawerState> @ 142d52340

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSidebarDrawerState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined2 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FSidebarDrawerState> @ 142d52380

void __cdecl UE::CoreUObject::Private::Destruct<FSidebarDrawerState>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FSidebarDrawerState> @ 142d523c0

bool __cdecl
UE::CoreUObject::Private::Copy<FSidebarDrawerState>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 ((longlong)param_1 + 8),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 ((longlong)param_1 + lVar1 + 8));
      *(undefined1 *)((longlong)param_1 + 0x58) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x58);
      *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x59);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FExternalWidgetSelectionColumn> @ 142d52450

void __cdecl UE::CoreUObject::Private::Construct<FExternalWidgetSelectionColumn>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FExternalWidgetSelectionColumn> @ 142d52470

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FExternalWidgetSelectionColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FExternalWidgetSelectionColumn> @ 142d52490

void __cdecl UE::CoreUObject::Private::Destruct<FExternalWidgetSelectionColumn>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Copy<FExternalWidgetSelectionColumn> @ 142d524c0

bool __cdecl
UE::CoreUObject::Private::Copy<FExternalWidgetSelectionColumn>
          (void *param_1,void *param_2,int param_3)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (this,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FActionButtonStyle> @ 142d52a60

void __cdecl UE::CoreUObject::Private::Construct<FActionButtonStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FActionButtonStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x3b0) = 0;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x3c0));
  *(undefined1 *)((longlong)param_1 + 0x920) = 0;
  *(undefined1 *)((longlong)param_1 + 0x934) = 0;
  *(undefined1 *)((longlong)param_1 + 0x938) = 2;
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x940));
  *(undefined1 *)((longlong)param_1 + 0xcd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd08) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1c) = 0;
  return;
}

// ConstructForTests<FActionButtonStyle> @ 142d52a70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FActionButtonStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FActionButtonStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x3b0) = 0;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x3c0));
  *(undefined1 *)((longlong)param_1 + 0x920) = 0;
  *(undefined1 *)((longlong)param_1 + 0x934) = 0;
  *(undefined1 *)((longlong)param_1 + 0x938) = 2;
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x940));
  *(undefined1 *)((longlong)param_1 + 0xcd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd08) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1c) = 0;
  return;
}

// Destruct<FActionButtonStyle> @ 142d52a80

void __cdecl UE::CoreUObject::Private::Destruct<FActionButtonStyle>(void *param_1)

{
  if (*(char *)((longlong)param_1 + 0x10c0) != '\0') {
    FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0xd30));
  }
  if (*(char *)((longlong)param_1 + 0xcd0) != '\0') {
    *(undefined ***)((longlong)param_1 + 0xc20) = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xcc0));
  }
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x940));
  FComboButtonStyle::~FComboButtonStyle((FComboButtonStyle *)((longlong)param_1 + 0x3c0));
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)param_1 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FActionButtonStyle> @ 142d52a90

bool __cdecl
UE::CoreUObject::Private::Copy<FActionButtonStyle>(void *param_1,void *param_2,int param_3)

{
  FSlateBrush *this;
  FButtonStyle *this_00;
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FButtonStyle::operator=
              ((FButtonStyle *)((longlong)param_1 + 0x10),(FButtonStyle *)((longlong)param_2 + 0x10)
              );
    if ((undefined8 *)((longlong)param_2 + 0x3a0) != (undefined8 *)((longlong)param_1 + 0x3a0)) {
      if (*(char *)((longlong)param_2 + 0x3b0) == '\0') {
        if (*(char *)((longlong)param_1 + 0x3b0) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x3b0) = 0;
        }
      }
      else {
        uVar2 = *(undefined8 *)((longlong)param_2 + 0x3a8);
        *(undefined8 *)((longlong)param_1 + 0x3a0) = *(undefined8 *)((longlong)param_2 + 0x3a0);
        *(undefined8 *)((longlong)param_1 + 0x3a8) = uVar2;
        *(undefined1 *)((longlong)param_1 + 0x3b0) = 1;
      }
    }
    FComboButtonStyle::operator=
              ((FComboButtonStyle *)((longlong)param_1 + 0x3c0),
               (FComboButtonStyle *)((longlong)param_2 + 0x3c0));
    *(undefined1 *)((longlong)param_1 + 0x920) = *(undefined1 *)((longlong)param_2 + 0x920);
    if ((undefined8 *)((longlong)param_2 + 0x924) != (undefined8 *)((longlong)param_1 + 0x924)) {
      if (*(char *)((longlong)param_2 + 0x934) == '\0') {
        if (*(char *)((longlong)param_1 + 0x934) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x934) = 0;
        }
      }
      else {
        uVar2 = *(undefined8 *)((longlong)param_2 + 0x92c);
        *(undefined8 *)((longlong)param_1 + 0x924) = *(undefined8 *)((longlong)param_2 + 0x924);
        *(undefined8 *)((longlong)param_1 + 0x92c) = uVar2;
        *(undefined1 *)((longlong)param_1 + 0x934) = 1;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x938) = *(undefined1 *)((longlong)param_2 + 0x938);
    FTextBlockStyle::operator=
              ((FTextBlockStyle *)((longlong)param_1 + 0x940),
               (FTextBlockStyle *)((longlong)param_2 + 0x940));
    this = (FSlateBrush *)((longlong)param_1 + 0xc20);
    if ((FSlateBrush *)((longlong)param_2 + 0xc20) != this) {
      if (*(char *)((longlong)param_2 + 0xcd0) == '\0') {
        if (*(char *)((longlong)param_1 + 0xcd0) != '\0') {
          pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0xcc0);
          this->_padding_ = (longlong)&___7FSlateBrush__6B_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          *(undefined1 *)((longlong)param_1 + 0xcd0) = 0;
        }
      }
      else {
        if (*(char *)((longlong)param_1 + 0xcd0) != '\0') {
          pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0xcc0);
          this->_padding_ = (longlong)&___7FSlateBrush__6B_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
        }
        FSlateBrush::FSlateBrush(this,(FSlateBrush *)((longlong)param_2 + 0xc20));
        *(undefined1 *)((longlong)param_1 + 0xcd0) = 1;
      }
    }
    if ((undefined8 *)((longlong)param_2 + 0xce0) != (undefined8 *)((longlong)param_1 + 0xce0)) {
      if (*(char *)((longlong)param_2 + 0xcf4) == '\0') {
        if (*(char *)((longlong)param_1 + 0xcf4) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0xcf4) = 0;
        }
      }
      else {
        uVar2 = *(undefined8 *)((longlong)param_2 + 0xce8);
        *(undefined8 *)((longlong)param_1 + 0xce0) = *(undefined8 *)((longlong)param_2 + 0xce0);
        *(undefined8 *)((longlong)param_1 + 0xce8) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0xcf0) = *(undefined4 *)((longlong)param_2 + 0xcf0);
        *(undefined1 *)((longlong)param_1 + 0xcf4) = 1;
      }
    }
    if ((undefined8 *)((longlong)param_2 + 0xcf8) != (undefined8 *)((longlong)param_1 + 0xcf8)) {
      if (*(char *)((longlong)param_2 + 0xd08) == '\0') {
        if (*(char *)((longlong)param_1 + 0xd08) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0xd08) = 0;
        }
      }
      else {
        uVar2 = *(undefined8 *)((longlong)param_2 + 0xd00);
        *(undefined8 *)((longlong)param_1 + 0xcf8) = *(undefined8 *)((longlong)param_2 + 0xcf8);
        *(undefined8 *)((longlong)param_1 + 0xd00) = uVar2;
        *(undefined1 *)((longlong)param_1 + 0xd08) = 1;
      }
    }
    if ((undefined8 *)((longlong)param_2 + 0xd0c) != (undefined8 *)((longlong)param_1 + 0xd0c)) {
      if (*(char *)((longlong)param_2 + 0xd1c) == '\0') {
        if (*(char *)((longlong)param_1 + 0xd1c) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0xd1c) = 0;
        }
      }
      else {
        uVar2 = *(undefined8 *)((longlong)param_2 + 0xd14);
        *(undefined8 *)((longlong)param_1 + 0xd0c) = *(undefined8 *)((longlong)param_2 + 0xd0c);
        *(undefined8 *)((longlong)param_1 + 0xd14) = uVar2;
        *(undefined1 *)((longlong)param_1 + 0xd1c) = 1;
      }
    }
    this_00 = (FButtonStyle *)((longlong)param_1 + 0xd30);
    *(undefined8 *)((longlong)param_1 + 0xd20) = *(undefined8 *)((longlong)param_2 + 0xd20);
    if ((FButtonStyle *)((longlong)param_2 + 0xd30) != this_00) {
      if (*(char *)((longlong)param_2 + 0x10c0) == '\0') {
        if (*(char *)((longlong)param_1 + 0x10c0) != '\0') {
          FButtonStyle::~FButtonStyle(this_00);
          *(undefined1 *)((longlong)param_1 + 0x10c0) = 0;
        }
      }
      else {
        if (*(char *)((longlong)param_1 + 0x10c0) != '\0') {
          FButtonStyle::~FButtonStyle(this_00);
        }
        FButtonStyle::FButtonStyle(this_00,(FButtonStyle *)((longlong)param_2 + 0xd30));
        *(undefined1 *)((longlong)param_1 + 0x10c0) = 1;
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x10d0);
    param_2 = (void *)((longlong)param_2 + 0x10d0);
  }
  return true;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FText,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FText,1>_>_*_&> @ 142d56450

FObservableArrayPointer<TSharedPtr<FText,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FText,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FText,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<FText,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&> @ 142d56470

FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&>
          (FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FText,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FText,1>_>_*_&> @ 142d56490

FSharedObservableArray<TSharedPtr<FText,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FText,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FText,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<FText,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&> @ 142d564b0

FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&>
          (FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&> @ 142d564d0

SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&>
          (SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FText,1>_>,STableRow<TSharedPtr<FText,1>_>_*_&> @ 142d564f0

STableRow<TSharedPtr<FText,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FText,1>_>,STableRow<TSharedPtr<FText,1>_>_*_&>
          (STableRow<TSharedPtr<FText,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&> @ 142d56510

STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>_*_&>
          (STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SActionButton,SActionButton_*_&> @ 142d56530

SActionButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<SActionButton,SActionButton_*_&>(SActionButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SCheckBoxList,SCheckBoxList_*_&> @ 142d56550

SCheckBoxList * __cdecl
UE::Core::Private::DereferenceIfNecessary<SCheckBoxList,SCheckBoxList_*_&>(SCheckBoxList **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SCustomDialog,SCustomDialog_*_&> @ 142d56570

SCustomDialog * __cdecl
UE::Core::Private::DereferenceIfNecessary<SCustomDialog,SCustomDialog_*_&>(SCustomDialog **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SCustomTextFilterDialog,SCustomTextFilterDialog_*_&> @ 142d56590

/* WARNING: Enum "Type": Some values do not have unique names */

SCustomTextFilterDialog * __cdecl
UE::Core::Private::DereferenceIfNecessary<SCustomTextFilterDialog,SCustomTextFilterDialog_*_&>
          (SCustomTextFilterDialog **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SDrawerOverlay,SDrawerOverlay_*_&> @ 142d565b0

SDrawerOverlay * __cdecl
UE::Core::Private::DereferenceIfNecessary<SDrawerOverlay,SDrawerOverlay_*_&>
          (SDrawerOverlay **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SFilterSearchBox,SFilterSearchBox_*_&> @ 142d565d0

/* WARNING: Enum "Type": Some values do not have unique names */

SFilterSearchBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SFilterSearchBox,SFilterSearchBox_*_&>
          (SFilterSearchBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<CheckBoxList::SItemPair,CheckBoxList::SItemPair_*_&> @ 142d565f0

SItemPair * __cdecl
UE::Core::Private::DereferenceIfNecessary<CheckBoxList::SItemPair,CheckBoxList::SItemPair_*_&>
          (SItemPair **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMessageDialog,SMessageDialog_*_&> @ 142d56610

SMessageDialog * __cdecl
UE::Core::Private::DereferenceIfNecessary<SMessageDialog,SMessageDialog_*_&>
          (SMessageDialog **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSearchToggleButton,SSearchToggleButton_*_&> @ 142d56630

SSearchToggleButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSearchToggleButton,SSearchToggleButton_*_&>
          (SSearchToggleButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSearchableComboBox,SSearchableComboBox_*_&> @ 142d56650

/* WARNING: Enum "Type": Some values do not have unique names */

SSearchableComboBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSearchableComboBox,SSearchableComboBox_*_&>
          (SSearchableComboBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSidebar,SSidebar_*_&> @ 142d56670

SSidebar * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSidebar,SSidebar_*_&>(SSidebar **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSidebarButton,SSidebarButton_*_&> @ 142d56690

SSidebarButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSidebarButton,SSidebarButton_*_&>
          (SSidebarButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSidebarContainer,SSidebarContainer_*_&> @ 142d566b0

SSidebarContainer * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSidebarContainer,SSidebarContainer_*_&>
          (SSidebarContainer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSidebarDrawer,SSidebarDrawer_*_&> @ 142d566d0

SSidebarDrawer * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSidebarDrawer,SSidebarDrawer_*_&>
          (SSidebarDrawer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSidebarDrawerContent,SSidebarDrawerContent_*_&> @ 142d566f0

SSidebarDrawerContent * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSidebarDrawerContent,SSidebarDrawerContent_*_&>
          (SSidebarDrawerContent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SVerticalResizeBox,SVerticalResizeBox_*_&> @ 142d56710

SVerticalResizeBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SVerticalResizeBox,SVerticalResizeBox_*_&>
          (SVerticalResizeBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWidgetDrawer,SWidgetDrawer_*_&> @ 142d56730

/* WARNING: Enum "Type": Some values do not have unique names */

SWidgetDrawer * __cdecl
UE::Core::Private::DereferenceIfNecessary<SWidgetDrawer,SWidgetDrawer_*_&>(SWidgetDrawer **param_1)

{
  return *param_1;
}

// ActionButtonStyleToActionButtonType @ 142d70630

EActionButtonType __cdecl
UE::ToolWidgets::Private::ActionButtonStyleToActionButtonType(EActionButtonStyle param_1)

{
  EActionButtonStyle EVar1;
  EActionButtonStyle *pEVar2;
  EActionButtonStyle *pEVar3;
  longlong lVar4;
  EActionButtonType local_res8 [8];
  undefined1 local_res10 [8];
  EActionButtonStyle local_res18 [2];
  undefined4 local_res20 [2];
  initializer_list<TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&>_> local_48
  ;
  TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&> local_38;
  undefined4 *local_28;
  undefined1 *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_38.Key = local_res18;
    local_res18[0] = Warning;
    local_38.Value = local_res8;
    local_res8[0] = Warning;
    local_28 = local_res20;
    local_res20[0] = 1;
    local_20 = local_res10;
    local_48._First = &local_38;
    local_48._Last =
         (TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&> *)
         &stack0xffffffffffffffe8;
    local_res10[0] = 5;
    TMap<enum_EActionButtonStyle,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>_>
    ::
    TMap<enum_EActionButtonStyle,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>_>
              (&Lookup,&local_48);
    atexit(`UE::ToolWidgets::Private::ActionButtonStyleToActionButtonType'::__l2::
           _dynamic_atexit_destructor_for__Lookup__);
    _Init_thread_footer(&::_TSS0);
  }
  if (Lookup._8_4_ != Lookup._52_4_) {
    lVar4 = 0x155061b58;
    if (Lookup._64_8_ != 0) {
      lVar4 = Lookup._64_8_;
    }
    EVar1 = *(EActionButtonStyle *)(lVar4 + (ulonglong)(Lookup._72_4_ - Error & param_1) * 4);
    while (EVar1 != ~Warning) {
      pEVar3 = (EActionButtonStyle *)((longlong)(int)EVar1 * 0x10 + Lookup._0_8_);
      if (*pEVar3 == param_1) {
        pEVar2 = pEVar3 + 1;
        if (pEVar3 == (EActionButtonStyle *)0x0) {
          pEVar2 = (EActionButtonStyle *)0x0;
        }
        if (pEVar2 == (EActionButtonStyle *)0x0) {
          return Default;
        }
        return (EActionButtonType)*pEVar2;
      }
      EVar1 = pEVar3[2];
    }
  }
  return Default;
}

// MakeButtonContent @ 142db72e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __cdecl
UE::ToolWidgets::Private::ActionButton::MakeButtonContent
          (TSharedRef<SWidget,1> *__return_storage_ptr__,TAttribute<FSlateBrush_const_*> *param_1,
          TAttribute<FSlateColor> *param_2,TAttribute<FText> *param_3,FTextBlockStyle *param_4)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  double dVar4;
  SWidgetSwitcher *pSVar5;
  FSharedReferencer<1> FVar6;
  SSpacer *pSVar7;
  FSharedReferencer<1> FVar8;
  TAttribute<FText> *pTVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FSlateBrush **ppFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FSlot *this;
  FSlot *pFVar17;
  FSlotArguments *pFVar18;
  FArguments *pFVar19;
  FSlotArguments *pFVar20;
  FArguments *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SImage,1> *pTVar23;
  FSlotArguments *pFVar24;
  FArguments *pFVar25;
  longlong *plVar26;
  TSharedRef<STextBlock,1> *pTVar27;
  FArguments *pFVar28;
  longlong *plVar29;
  byte bVar30;
  undefined1 auStackY_15c8 [32];
  T0RequiredArgs local_1597;
  T0RequiredArgs local_1596;
  T0RequiredArgs local_1595;
  T0RequiredArgs local_1594;
  T0RequiredArgs local_1593 [3];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1590;
  FDelegateAllocation local_1588;
  FLLMScope local_1578;
  FLLMScope local_1574;
  FLLMScope local_1570;
  FLLMScope local_156c;
  FLLMScope local_1568 [2];
  FArguments *local_1560;
  SSpacer *local_1558;
  FSharedReferencer<1> local_1550;
  SImage *local_1548;
  FSharedReferencer<1> local_1540;
  STextBlock *local_1538;
  FSharedReferencer<1> local_1530;
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> local_1528;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_1510;
  ITextData *local_14f8;
  uint local_14f0;
  undefined1 local_14e8;
  undefined1 local_14e0 [8];
  ForAnyElementType FStack_14d8;
  int local_14d0;
  TAttribute<FText> *local_14c8;
  undefined8 local_14c0;
  FSharedReferencer<1> local_14b8;
  uint local_14b0;
  undefined1 local_14ac;
  undefined1 local_14a8 [8];
  void *pvStack_14a0;
  undefined8 local_1498;
  uchar local_1490;
  undefined1 local_148f;
  undefined1 local_1488 [8];
  void *pvStack_1480;
  undefined8 local_1478;
  FName local_1470;
  FSlotArguments *local_1468;
  FName local_1460;
  FMemScope local_1458;
  FName local_1450;
  FMemScope local_1448;
  TReferenceControllerBase<1> *local_1440;
  TSharedRef<SWidget,1> *local_1438;
  undefined1 local_1430 [4];
  undefined1 local_142c [4];
  undefined1 local_1428 [8];
  FSlot *local_1420;
  FName local_1418;
  FMemScope local_1410;
  FMemScope local_1408;
  FName local_1400;
  FMemScope local_13f8;
  FSlotArguments *local_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined1 local_13d8;
  undefined1 local_13d0 [8];
  void *pvStack_13c8;
  int local_13c0;
  double local_13b8;
  double dStack_13b0;
  undefined1 local_13a8;
  undefined1 local_13a0 [8];
  void *pvStack_1398;
  undefined8 local_1390;
  FSlateBrush *local_1388;
  undefined1 local_1380;
  undefined1 local_1378 [24];
  undefined4 local_1360;
  FSlateBrush *local_1358;
  bool local_1350;
  undefined1 local_1348 [24];
  TAttribute<float> local_1330;
  TSharedRef<SHorizontalBox,1> local_1310;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined1 local_12f0;
  undefined1 local_12e8 [24];
  FDestructionSentinel local_12d0;
  FDestructionSentinel local_12b8;
  FDestructionSentinel local_12a0;
  FDestructionSentinel local_1288;
  FDelegateAllocation *local_1270;
  FDestructionSentinel local_1268;
  longlong *local_1250;
  TAttribute<FText> local_1248;
  TSharedRef<SImage,1> local_1218;
  TSharedRef<STextBlock,1> local_1208;
  FReadAccessScope local_11f8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_11e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_11c8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_11b0;
  FLinearColor_u_0 local_1198;
  undefined4 local_1188;
  undefined1 local_1184;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1180;
  undefined8 *local_1168 [2];
  TReferenceControllerBase<1> *local_1158;
  undefined1 local_1138 [40];
  undefined8 *local_1110 [2];
  TReferenceControllerBase<1> *local_1100;
  undefined1 local_10e0 [40];
  undefined8 *local_10b8 [2];
  TReferenceControllerBase<1> *local_10a8;
  undefined1 local_1088 [24];
  undefined4 local_1070;
  undefined1 local_106c;
  undefined4 local_1068;
  undefined1 local_1064;
  FSlotArgumentsMixin local_1060;
  undefined8 *local_fd0 [2];
  TReferenceControllerBase<1> *local_fc0;
  undefined1 local_fa0 [32];
  undefined4 local_f80;
  undefined1 local_f7c;
  FSlotArgumentsMixin local_f78;
  undefined1 local_ee8 [528];
  undefined1 local_cd8 [24];
  FArguments local_cc0;
  undefined1 local_ab8 [528];
  undefined1 local_8a8 [24];
  FArguments local_890;
  FArguments local_5e8;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x142db72ff;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_15c8;
  local_14c8 = param_3;
  local_1438 = __return_storage_ptr__;
  if (((param_2->bIsSet == false) && (bVar10 = TAttribute<FSlateColor>::IsBound(param_2), !bVar10))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIconColorAndOpacity.IsSet() || InIconColorAndOpacity.IsBound()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
                             ,0x1a,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  if ((param_4 == (FTextBlockStyle *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTextBlockStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
                          ,0x1b,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_11f8)
  ;
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar29 = *(longlong **)&(param_1->Getter).field_0x8, plVar29 == (longlong *)0x0)) ||
     (cVar11 = (**(code **)(*plVar29 + 0x38))(), cVar11 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_11f8);
    if ((param_1->bIsSet == false) ||
       (ppFVar14 = TAttribute<FSlateBrush_const_*>::Get(param_1), *ppFVar14 == (FSlateBrush *)0x0))
    {
      bVar30 = 0;
    }
    else {
      bVar30 = 1;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_11f8);
    bVar30 = 1;
  }
  local_1388 = param_1->Value;
  local_1380 = param_1->bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1378,
             &param_1->Getter);
  pFVar17 = (FSlot *)0x0;
  local_1360 = 0x40400000;
  local_1590.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1588.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1588.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1590,(FWriteAccessScope *)&local_1288);
  local_1270 = &local_1588;
  puVar15 = Core::Private::DelegateAllocate(0x48,&local_1588);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar15[3] = local_1388;
    *(undefined1 *)(puVar15 + 4) = local_1380;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               (puVar15 + 5),
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1378
              );
    *(undefined4 *)(puVar15 + 8) = local_1360;
  }
  if (local_1288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1288.Accessor,&local_1288);
  }
  local_13d8 = 1;
  local_13e8 = 0;
  uStack_13e0 = 0;
  local_13d0 = (undefined1  [8])0x0;
  pvStack_13c8 = (void *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1590,(FWriteAccessScope *)&local_12d0);
  if (pvStack_13c8 != (void *)0x0) {
    FMemory::Free(pvStack_13c8);
  }
  pvStack_13c8 = (void *)local_1588.DelegateAllocator;
  local_13c0 = local_1588.DelegateSize;
  local_1588.DelegateSize = 0;
  local_1588.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_12d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d0.Accessor,&local_12d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1590,(FWriteAccessScope *)&local_12b8);
  if ((local_1588.DelegateSize != 0) &&
     (local_1588.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1588.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1588,0,0,0x10);
    local_1588.DelegateSize = 0;
  }
  if (local_12b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b8.Accessor,&local_12b8);
  }
  if (local_1588.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1588.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1590.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1378);
  if ((void *)local_1378._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1378._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1378);
  local_1560 = SHorizontalBox::FArguments::FArguments(&local_cc0);
  this = ::operator_new(0x58);
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
    pFVar17 = SHorizontalBox::FSlot::FSlot(this);
  }
  local_1420 = pFVar17;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_10b8,(FSlot *)&local_1420);
  local_1070 = 2;
  local_106c = 1;
  local_1068 = 2;
  local_1064 = 1;
  pFVar18 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_10b8);
  local_13f0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar18->field_0x18,0.0);
  pFVar19 = SWidgetSwitcher::FArguments::FArguments((FArguments *)local_ee8);
  local_14b0 = (uint)bVar30;
  local_14ac = 1;
  local_1498 = 0;
  local_14a8 = (undefined1  [8])0x0;
  pvStack_14a0 = (void *)0x0;
  (pFVar19->_WidgetIndex).Value = local_14b0;
  (pFVar19->_WidgetIndex).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_WidgetIndex).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14a8);
  if (pvStack_14a0 != (void *)0x0) {
    FMemory::Free(pvStack_14a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14a8);
  pFVar20 = SWidgetSwitcher::Slot((FSlotArguments *)local_1110);
  pFVar21 = SSpacer::FArguments::FArguments((FArguments *)local_ab8);
  dVar4 = _UNK_1509ecec8;
  local_13a8 = 1;
  local_1390 = 0;
  local_13b8 = ___xmm_40300000000000000000000000000000;
  dStack_13b0 = _UNK_1509ecec8;
  local_13a0 = (undefined1  [8])0x0;
  pvStack_1398 = (void *)0x0;
  (pFVar21->_Size).Value.field0_0x0._s_0.X = ___xmm_40300000000000000000000000000000;
  (pFVar21->_Size).Value.field0_0x0._s_0.Y = dVar4;
  (pFVar21->_Size).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_13a0);
  if (pvStack_1398 != (void *)0x0) {
    FMemory::Free(pvStack_1398);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13a0);
  FLLMScope::FLLMScope(&local_1578,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1418 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1410,&local_1418,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_1510,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
             ,0x39,&local_1597);
  FMemScope::~FMemScope(&local_1410);
  FLLMScope::~FLLMScope(&local_1578);
  pSVar7 = local_1510._Widget.Object;
  if ((local_1510._Widget.Object == (SSpacer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1510._Widget.Object,(FSlateBaseNamedArgs *)pFVar21);
  SSpacer::Construct(local_1510._Widget.Object,pFVar21);
  if ((local_1510._Widget.Object == (SSpacer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  if (((local_1510._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_1510._Widget.Object)->_padding_ + 0x228))
                       (local_1510._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_142db78b4;
  }
  else {
LAB_142db78b4:
    bVar12 = 0x20;
  }
  *(byte *)&(local_1510._Widget.Object)->_padding_ =
       (byte)(local_1510._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1510._Widget.Object)->_padding_ =
       (byte)(local_1510._Widget.Object)->_padding_ | bVar12;
  if ((local_1510._Widget.Object == (SSpacer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  pbVar1 = (byte *)((longlong)&(local_1510._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1510._Widget.Object == (SSpacer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  FVar8.ReferenceController = local_1510._Widget.SharedReferenceCount.ReferenceController;
  local_1510._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1510._Widget.Object = (SSpacer *)0x0;
  if ((pSVar7 == (SSpacer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  local_1558 = pSVar7;
  local_1550.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SSpacer **)&pFVar20->field_0x8 != &local_1558) {
    *(SSpacer **)&pFVar20->field_0x8 = pSVar7;
    local_1558 = (SSpacer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_1550);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1550.ReferenceController);
  pFVar19 = SWidgetSwitcher::FArguments::operator+(pFVar19,pFVar20);
  pFVar20 = SWidgetSwitcher::Slot((FSlotArguments *)local_1168);
  pFVar22 = SImage::FArguments::FArguments(&local_890);
  local_1358 = param_1->Value;
  local_1350 = param_1->bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1348,
             &param_1->Getter);
  (pFVar22->_Image).Value = local_1358;
  (pFVar22->_Image).bIsSet = local_1350;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1348);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1348);
  if ((void *)local_1348._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1348._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1348);
  local_1188._0_1_ = (param_2->Value).ColorUseRule;
  local_1188._1_1_ = (param_2->Value).ColorTableId;
  local_1188._2_2_ = *(undefined2 *)&(param_2->Value).field_0x12;
  local_1198._0_8_ = *(undefined8 *)&(param_2->Value).SpecifiedColor.field0_0x0;
  local_1198._8_8_ = *(undefined8 *)((longlong)&(param_2->Value).SpecifiedColor.field0_0x0 + 8);
  local_1184 = param_2->bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>(&local_1180,&param_2->Getter);
  pFVar22 = SImage::FArguments::ColorAndOpacity(pFVar22,(TAttribute<FSlateColor> *)&local_1198._s_0)
  ;
  local_148f = 1;
  local_1490 = (uchar)EVisibility::Collapsed;
  if (bVar30 != 0) {
    local_1490 = (uchar)EVisibility::HitTestInvisible;
  }
  local_1478 = 0;
  local_1488 = (undefined1  [8])0x0;
  pvStack_1480 = (void *)0x0;
  *(uchar *)&pFVar22->_padding_ = local_1490;
  *(undefined1 *)((longlong)&pFVar22->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar22->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1488);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1488);
  if (pvStack_1480 != (void *)0x0) {
    FMemory::Free(pvStack_1480);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1488);
  FLLMScope::FLLMScope(&local_1574,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1470 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1408,&local_1470,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_11b0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
             ,0x3f,&local_1596);
  FMemScope::~FMemScope(&local_1408);
  FLLMScope::~FLLMScope(&local_1574);
  pTVar23 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11b0,&local_1218,pFVar22);
  local_1548 = pTVar23->Object;
  local_1540.ReferenceController = (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_1540.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1540.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1540.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_1540.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1540.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1440 = local_1540.ReferenceController;
  if ((SImage **)&pFVar20->field_0x8 != &local_1548) {
    *(SImage **)&pFVar20->field_0x8 = local_1548;
    local_1548 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_1540);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1540.ReferenceController);
  pFVar19 = SWidgetSwitcher::FArguments::operator+(pFVar19,pFVar20);
  FLLMScope::FLLMScope(&local_1570,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1400 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13f8,&local_1400,true);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_1528,"SWidgetSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
             ,0x34,&local_1595);
  FMemScope::~FMemScope(&local_13f8);
  FLLMScope::~FLLMScope(&local_1570);
  pSVar5 = local_1528._Widget.Object;
  if ((local_1528._Widget.Object == (SWidgetSwitcher *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1528._Widget.Object,(FSlateBaseNamedArgs *)pFVar19);
  SWidgetSwitcher::Construct(local_1528._Widget.Object,pFVar19);
  if ((local_1528._Widget.Object == (SWidgetSwitcher *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  if (((local_1528._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_1528._Widget.Object)->_padding_ + 0x228))
                       (local_1528._Widget.Object);
    bVar30 = 0;
    if (cVar11 == '\0') goto LAB_142db7d10;
  }
  bVar30 = 0x20;
LAB_142db7d10:
  *(byte *)&(local_1528._Widget.Object)->_padding_ =
       (byte)(local_1528._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1528._Widget.Object)->_padding_ =
       (byte)(local_1528._Widget.Object)->_padding_ | bVar30;
  if ((local_1528._Widget.Object == (SWidgetSwitcher *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  pbVar1 = (byte *)((longlong)&(local_1528._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1528._Widget.Object == (SWidgetSwitcher *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  FVar6.ReferenceController = local_1528._Widget.SharedReferenceCount.ReferenceController;
  local_1528._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1528._Widget.Object = (SWidgetSwitcher *)0x0;
  if ((pSVar5 == (SWidgetSwitcher *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  pFVar18 = local_13f0;
  local_14b8.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&local_13f0->field_0x8 != &local_14c0) {
    *(SWidgetSwitcher **)&local_13f0->field_0x8 = pSVar5;
    local_14c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_13f0->field_0x10,&local_14b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14b8.ReferenceController);
  local_1560 = SHorizontalBox::FArguments::operator+(local_1560,pFVar18);
  pFVar17 = ::operator_new(0x58);
  local_1468 = (FSlotArguments *)0x0;
  if (pFVar17 != (FSlot *)0x0) {
    *(undefined8 *)pFVar17 = 0;
    *(undefined8 *)&pFVar17->field_0x8 = 0;
    *(undefined8 *)&pFVar17->field_0x10 = 0;
    *(undefined8 *)&pFVar17->field_0x18 = 0;
    *(undefined8 *)&pFVar17->field_0x20 = 0;
    *(undefined8 *)&pFVar17->field_0x28 = 0;
    *(undefined8 *)&pFVar17->field_0x30 = 0;
    *(undefined8 *)&pFVar17->field_0x38 = 0;
    *(undefined8 *)&pFVar17->field_0x40 = 0;
    *(undefined8 *)&pFVar17->field_0x48 = 0;
    *(undefined8 *)&pFVar17->field_0x50 = 0;
    local_1468 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar17);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_fd0,(FSlot *)&local_1468);
  local_f80 = 2;
  local_1330.Getter._16_8_ = 0;
  local_f7c = 1;
  local_1330.Value = 1.0;
  local_1330.bIsSet = true;
  local_1330.Getter._0_8_ = 0;
  local_1330.Getter._8_8_ = 0;
  pFVar24 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_fd0,&local_1330);
  local_12f0 = local_13d8;
  local_1300 = local_13e8;
  uStack_12f8 = uStack_13e0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_12e8,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_13d0);
  *(undefined8 *)&pFVar24->field_0x18 = local_1300;
  *(undefined8 *)&pFVar24->field_0x20 = uStack_12f8;
  pFVar24->field_0x28 = local_12f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar24->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_12e8);
  pFVar18 = (FSlotArguments *)0x0;
  if (&pFVar24->field_0x18 != (undefined1 *)0x0) {
    pFVar18 = pFVar24;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_12e8);
  if ((void *)local_12e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_12e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12e8);
  pFVar25 = STextBlock::FArguments::FArguments(&local_5e8);
  pTVar9 = local_14c8;
  pFVar25->_TextStyle = param_4;
  local_1248.Value.TextData.Reference = (local_14c8->Value).TextData.Reference;
  if (local_1248.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1248.Value.TextData.Reference + 8))
              (local_1248.Value.TextData.Reference,local_1430);
  }
  local_1248.Value.Flags = (pTVar9->Value).Flags;
  local_1248.bIsSet = pTVar9->bIsSet;
  local_1248.Getter._0_8_ = 0;
  local_1248.Getter._8_8_ = 0;
  local_1248.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1248.Getter,&pTVar9->Getter);
  pFVar25 = STextBlock::FArguments::Text(pFVar25,&local_1248);
  local_14f8 = (pTVar9->Value).TextData.Reference;
  if (local_14f8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14f8 + 8))(local_14f8,local_142c);
  }
  local_14f0 = (pTVar9->Value).Flags;
  local_14e8 = pTVar9->bIsSet;
  local_14e0 = (undefined1  [8])0x0;
  FStack_14d8.Data = (FScriptContainerElement *)0x0;
  local_14d0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_14e0,&pTVar9->Getter
            );
  local_88 = (code *)0x0;
  plVar26 = FMemory::Malloc(0x38,8);
  plVar29 = plVar26 + 1;
  *plVar26 = (longlong)
             &Core::Private::Function::
              TFunction_OwnedObject<`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::`2'::<lambda_2>,0,1>
              ::_vftable_;
  *plVar29 = 0;
  *plVar29 = (longlong)local_14f8;
  local_60 = plVar26;
  if (local_14f8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14f8 + 8))(local_14f8,local_1428);
  }
  *(uint *)(plVar26 + 2) = local_14f0;
  *(undefined1 *)(plVar26 + 3) = local_14e8;
  *(undefined8 *)(plVar26 + 4) = 0;
  plVar26[5] = 0;
  *(undefined4 *)(plVar26 + 6) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(plVar26 + 4),
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_14e0);
  if (plVar29 != (longlong *)0x0) {
    local_88 = Core::Private::Function::
               TFunctionRefCaller<`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l2::<lambda_2>,EVisibility>
               ::Call;
  }
  *(undefined1 *)((longlong)&pFVar25->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar25->_padding_,
             (FWriteAccessScope *)&local_1268);
  local_1250 = &pFVar25->_padding_;
  puVar15 = Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1250);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar15[4] = local_88;
    puVar15[9] = 0;
    if (local_88 != (code *)0x0) {
      plVar29 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar29 = local_60;
      }
      (**(code **)*plVar29)();
    }
  }
  if (local_1268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1268.Accessor,&local_1268);
  }
  FLLMScope::FLLMScope(&local_156c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1460 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1458,&local_1460,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_11c8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
             ,0x4b,&local_1594);
  FMemScope::~FMemScope(&local_1458);
  FLLMScope::~FLLMScope(&local_156c);
  pTVar27 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11c8,&local_1208,pFVar25);
  pTVar2 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_1538 = pTVar27->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1530.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar18->field_0x8 != &local_1538) {
    *(STextBlock **)&pFVar18->field_0x8 = local_1538;
    local_1538 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->field_0x10,&local_1530);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1530.ReferenceController);
  pFVar28 = SHorizontalBox::FArguments::operator+(local_1560,pFVar18);
  FLLMScope::FLLMScope(local_1568,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1450 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1448,&local_1450,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_11e0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
             ,0x2d,local_1593);
  FMemScope::~FMemScope(&local_1448);
  FLLMScope::~FLLMScope(local_1568);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_11e0,&local_1310,pFVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1208.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11c8._Widget.SharedReferenceCount.ReferenceController);
  if (local_88 != (code *)0x0) {
    plVar29 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar29 = local_60;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14e0,
             (FWriteAccessScope *)&local_12a0);
  if ((local_14d0 != 0) && (FStack_14d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14d8,0,0,0x10);
    local_14d0 = 0;
  }
  if (local_12a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12a0.Accessor,&local_12a0);
  }
  if (FStack_14d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14e0);
  if (local_14f8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14f8 + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5e8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_f78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fa0);
  if ((void *)local_fa0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_fa0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fa0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_fc0);
  if (local_fd0[0] != (undefined8 *)0x0) {
    (**(code **)*local_fd0[0])(local_fd0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1440);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1218.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11b0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_890);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1138);
  if ((void *)local_1138._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1138._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1158);
  if (local_1168[0] != (undefined8 *)0x0) {
    (**(code **)*local_1168[0])(local_1168[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1510._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a8);
  if ((void *)local_8a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_8a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8a8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_ab8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10e0);
  if ((void *)local_10e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_10e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1100);
  if (local_1110[0] != (undefined8 *)0x0) {
    (**(code **)*local_1110[0])(local_1110[0],1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_cd8);
  if ((void *)local_cd8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_cd8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_cd8);
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)local_ee8._504_8_,local_ee8._512_4_);
  if ((FSlotArguments *)local_ee8._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_ee8._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_ee8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1060);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1088);
  if ((void *)local_1088._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1088._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1088);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10a8);
  if (local_10b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_10b8[0])(local_10b8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_cc0._Slots.AllocatorInstance.Data,local_cc0._Slots.ArrayNum);
  if ((FSlotArguments *)local_cc0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_cc0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_cc0);
  pTVar13 = local_1438;
  local_1438->Object = (SWidget *)local_1310.Object;
  (local_1438->SharedReferenceCount).ReferenceController =
       local_1310.SharedReferenceCount.ReferenceController;
  if (local_1310.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1310.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1310.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1310.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_13d0);
  if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_13c8 !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(pvStack_13c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13d0);
  return pTVar13;
}

// MakeButtonContent @ 142db8690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __cdecl
UE::ToolWidgets::Private::ActionButton::MakeButtonContent
          (TSharedRef<SWidget,1> *__return_storage_ptr__,FActionButtonStyle *param_1,
          TAttribute<FSlateBrush_const_*> *param_2,TAttribute<FSlateColor> *param_3,
          TAttribute<FText> *param_4,FTextBlockStyle *param_5)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FSlateColor *pFVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_158;
  undefined4 local_148;
  undefined1 local_144;
  undefined1 local_140 [8];
  ForAnyElementType FStack_138;
  ulonglong local_130;
  FSlateBrush *local_128;
  undefined1 local_120;
  undefined1 local_118 [8];
  ForAnyElementType FStack_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_e8 [8];
  ForAnyElementType FStack_e0;
  ulonglong local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  FSlateBrush *local_a8;
  char local_a0;
  undefined1 local_98 [24];
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  undefined4 local_28;
  
  if (param_1 == (FActionButtonStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InActionButtonStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\ToolWidgetsUtilitiesPrivate.cpp"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2->bIsSet == false) {
    local_120 = 1;
    local_128 = &(param_1->IconBrush).TypedValue;
    if ((param_1->IconBrush).bIsSet == false) {
      local_128 = (FSlateBrush *)0x0;
    }
    local_d0[8] = true;
    local_108 = 0;
    local_118 = (undefined1  [8])0x0;
    FStack_110.Data = (FScriptContainerElement *)0x0;
    local_d0._0_8_ = local_128;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_c0,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_118)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_80);
    if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
      local_108 = local_108 & 0xffffffff00000000;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (FStack_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_110.Data);
    }
    this = (FMRSWRecursiveAccessDetector *)local_118;
  }
  else {
    local_a8 = param_2->Value;
    local_a0 = param_2->bIsSet;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_98,
               &param_2->Getter);
    local_d0._0_8_ = local_a8;
    local_d0[8] = (bool)local_a0;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_c0,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_98);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    if ((void *)local_98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._8_8_);
    }
    this = (FMRSWRecursiveAccessDetector *)local_98;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  local_28 = CONCAT22(local_28._2_2_,2);
  local_148 = local_28;
  local_130 = 0;
  local_158._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_158._8_8_ = _UNK_15090c6d8;
  local_144 = 1;
  local_140 = (undefined1  [8])0x0;
  FStack_138.Data = (FScriptContainerElement *)0x0;
  if ((param_3->bIsSet == false) && ((param_1->IconColorAndOpacity).bIsSet == false)) {
    bVar2 = `UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l10::<lambda_1>::
            operator()(local_res8);
    if (!bVar2) goto LAB_142db891e;
  }
  pFVar4 = TAttribute<FSlateColor>::Get((TAttribute<FSlateColor> *)&local_158._s_0);
  if ((param_1->IconColorAndOpacity).bIsSet != false) {
    pFVar4 = &(param_1->IconColorAndOpacity).TypedValue;
  }
  if (param_3->bIsSet != false) {
    pFVar4 = TAttribute<FSlateColor>::Get(param_3);
  }
  local_158._0_8_ = *(undefined8 *)&(pFVar4->SpecifiedColor).field0_0x0;
  local_158._8_8_ = *(undefined8 *)((longlong)&(pFVar4->SpecifiedColor).field0_0x0 + 8);
  local_148._0_1_ = pFVar4->ColorUseRule;
  local_148._1_1_ = pFVar4->ColorTableId;
  local_148._2_2_ = *(undefined2 *)&pFVar4->field_0x12;
  local_ec = 1;
  local_e8 = (undefined1  [8])0x0;
  FStack_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_144 = 1;
  local_100 = local_158._0_8_;
  uStack_f8 = local_158._8_8_;
  local_f0 = local_148;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_140,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_68);
  if (((int)local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
LAB_142db891e:
  if (param_5 == (FTextBlockStyle *)0x0) {
    param_5 = &param_1->TextBlockStyle;
  }
  MakeButtonContent(__return_storage_ptr__,(TAttribute<FSlateBrush_const_*> *)local_d0,
                    (TAttribute<FSlateColor> *)&local_158._s_0,param_4,param_5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
             (FWriteAccessScope *)&local_50);
  if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_138.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
    local_130 = local_130 & 0xffffffff00000000;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (FStack_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_138.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_140);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
  if ((void *)local_c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  return __return_storage_ptr__;
}

// MakeIconPaddingOverride @ 142db8a10

TAttribute<FMargin> * __cdecl
UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride
          (TAttribute<FMargin> *__return_storage_ptr__,TAttribute<FSlateBrush_const_*> *param_1,
          FMargin *param_2,TOptional<FMargin> *param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  TAttribute<FMargin> *pTVar7;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  FSlateBrush **ppFVar9;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  int local_78;
  FDestructionSentinel local_70;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  FMargin local_30;
  FMargin local_20;
  
  if (param_3->bIsSet != false) {
    bVar6 = TAttribute<FSlateBrush_const_*>::IsBound(param_1);
    if (bVar6) {
      if ((param_3->bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TAttribute<FMargin> *)(*pcVar1)();
        return pTVar7;
      }
      local_58._0_8_ = param_1->Value;
      local_58[8] = param_1->bIsSet;
      TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_48
                 ,&param_1->Getter);
      local_30.Left = param_2->Left;
      local_30.Top = param_2->Top;
      local_30.Right = param_2->Right;
      local_30.Bottom = param_2->Bottom;
      local_20.Left = (param_3->TypedValue).Left;
      local_20.Top = (param_3->TypedValue).Top;
      local_20.Right = (param_3->TypedValue).Right;
      local_20.Bottom = (param_3->TypedValue).Bottom;
      pTVar8 = TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateLambda<_UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride_::__l8::<lambda_1>_>
                         ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_88,
                          (<lambda_1> *)local_58);
      (__return_storage_ptr__->Value).Left = 0.0;
      (__return_storage_ptr__->Value).Top = 0.0;
      (__return_storage_ptr__->Value).Right = 0.0;
      (__return_storage_ptr__->Value).Bottom = 0.0;
      __return_storage_ptr__->bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
                 (FWriteAccessScope *)&local_70);
      if ((local_78 != 0) && (local_80.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_80.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
        local_78 = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_88);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      if ((void *)local_48._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_48._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
      return __return_storage_ptr__;
    }
    if ((param_1->bIsSet != false) &&
       (ppFVar9 = TAttribute<FSlateBrush_const_*>::Get(param_1), *ppFVar9 != (FSlateBrush *)0x0)) {
      if ((param_3->bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TAttribute<FMargin> *)(*pcVar1)();
        return pTVar7;
      }
      fVar2 = (param_3->TypedValue).Left;
      fVar3 = (param_3->TypedValue).Top;
      fVar4 = (param_3->TypedValue).Right;
      fVar5 = (param_3->TypedValue).Bottom;
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->Value).Left = fVar2;
      (__return_storage_ptr__->Value).Top = fVar3;
      (__return_storage_ptr__->Value).Right = fVar4;
      (__return_storage_ptr__->Value).Bottom = fVar5;
      goto LAB_142db8bc7;
    }
  }
  (__return_storage_ptr__->Value).Left = 0.0;
  (__return_storage_ptr__->Value).Top = 0.0;
  (__return_storage_ptr__->Value).Right = 0.0;
  (__return_storage_ptr__->Value).Bottom = 0.0;
  __return_storage_ptr__->bIsSet = false;
LAB_142db8bc7:
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  return __return_storage_ptr__;
}

// operator() @ 15049a270

bool __thiscall
`UE::ToolWidgets::Private::ActionButton::MakeButtonContent'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1744606816462962795>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1744606816462962795>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

