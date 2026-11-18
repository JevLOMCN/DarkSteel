// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 93

// FWindowsUIAControlProvider @ 1423c4650

FWindowsUIAControlProvider * __thiscall
FWindowsUIAControlProvider::FWindowsUIAControlProvider
          (FWindowsUIAControlProvider *this,FWindowsUIAManager *param_1,
          TSharedRef<IAccessibleWidget,1> *param_2)

{
  TSharedRef<IAccessibleWidget,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWindowsUIABaseProvider::FWindowsUIABaseProvider
            ((FWindowsUIABaseProvider *)this,param_1,&local_18);
  *(undefined ***)this = &_vftable__for__FWindowsUIABaseProvider__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInvokeProvider__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRangeValueProvider__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__ITextProvider__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IToggleProvider__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__ITransformProvider__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IValueProvider__;
  *(undefined ***)&this->field_0x58 = &_vftable__for__IWindowProvider__;
  *(undefined ***)&this->field_0x60 = &_vftable__for__ISelectionProvider__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__ISelectionItemProvider__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FWindowsUIAControlProvider @ 1423c7470

void __thiscall
FWindowsUIAControlProvider::~FWindowsUIAControlProvider(FWindowsUIAControlProvider *this)

{
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInvokeProvider__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRangeValueProvider__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__ITextProvider__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IToggleProvider__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__ITransformProvider__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IValueProvider__;
  *(undefined ***)&this->field_0x58 = &_vftable__for__IWindowProvider__;
  *(undefined ***)&this->field_0x60 = &_vftable__for__ISelectionProvider__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__ISelectionItemProvider__;
  *(undefined ***)this = &___7FWindowsUIABaseProvider__6B_;
  if (*(longlong *)&this->field_0x8 != 0) {
    TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
    ::Remove((TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)&this->field_0x8 + 0x50),(FWindowsUIABaseProvider *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  return;
}

// operator() @ 1423c9a40

void __thiscall `FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsUIAManager *this_00;
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
  uint local_res8 [2];
  TSharedPtr<IAccessibleWidget,1> *local_38;
  ULONG local_30;
  TSharedRef<IAccessibleWidget,1> local_28;
  
  if (((*(longlong *)(*(longlong *)this + 8) != 0) &&
      (cVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar4 != '\0')) &&
     (lVar8 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xe0))(), lVar8 != 0)) {
    puVar9 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xe0))();
    (**(code **)*puVar9)(puVar9,&local_38);
    pSVar10 = SafeArrayCreateVector(0xd,0,local_30);
    uVar11 = 0;
    *(SAFEARRAY **)**(undefined8 **)((longlong)this + 0x10) = pSVar10;
    if (0 < (int)local_30) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar11 < (int)local_30) {
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
        pTVar3 = local_38;
        this_00 = *(FWindowsUIAManager **)(*(longlong *)this + 8);
        if ((*(longlong *)((longlong)&local_38->Object + lVar8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_28.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)
              ((longlong)&(pTVar3->SharedReferenceCount).ReferenceController + lVar8);
        local_28.Object = *(IAccessibleWidget **)((longlong)&pTVar3->Object + lVar8);
        if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_28.Object == (IAccessibleWidget *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pv = FWindowsUIAManager::GetWidgetProvider(this_00,&local_28);
        pHVar1 = *(HRESULT **)((longlong)this + 8);
        local_res8[0] = uVar11;
        HVar7 = SafeArrayPutElement(*(SAFEARRAY **)**(undefined8 **)((longlong)this + 0x10),
                                    (LONG *)local_res8,pv);
        *pHVar1 = HVar7;
        if (**(int **)((longlong)this + 8) != 0) {
          (**(code **)(*(longlong *)&pv->field_0x28 + 0x10))();
          break;
        }
        (**(code **)(*(longlong *)&pv->field_0x28 + 0x10))();
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar11 < (int)local_30);
    }
    DestructItems<TSharedPtr<IAccessibleWidget,1>,int>(local_38,local_30);
    if (local_38 != (TSharedPtr<IAccessibleWidget,1> *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}

// operator() @ 1423ca0e0

void __thiscall `FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  FString *pFVar4;
  FString local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd0))();
      pcVar1 = *(code **)(*plVar3 + 0x38);
      pFVar4 = ::FString::SanitizeFloat(&local_18,**(double **)((longlong)this + 0x10),1);
      (*pcVar1)(plVar3,pFVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423ca180

void __thiscall `FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  FString *pFVar4;
  FString local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd0))();
      pcVar1 = *(code **)(*plVar3 + 0x38);
      pFVar4 = ::FString::FString(&local_18,(wchar_t *)**(undefined8 **)((longlong)this + 0x10));
      (*pcVar1)(plVar3,pFVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423ca210

void __thiscall
`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)this + 8) == 0) {
    return;
  }
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = **(int **)((longlong)this + 0x10);
  if (iVar1 == 0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xc0))();
    uVar4 = 0;
  }
  else if (iVar1 == 1) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xc0))();
    uVar4 = 2;
  }
  else {
    if (iVar1 != 2) goto LAB_1423ca292;
    plVar3 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xc0))();
    uVar4 = 1;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar4);
LAB_1423ca292:
  **(undefined4 **)((longlong)this + 8) = 0;
  return;
}

// operator() @ 1423ca6b0

void __thiscall
`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar4 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))();
      bVar3 = (bool)(**(code **)(*plVar4 + 0x20))(plVar4,2);
      FVariant::FVariant<bool>(&local_28,bVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&local_28);
      *(uint *)**(undefined8 **)((longlong)this + 0x10) = (uint)bVar3;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423ca760

void __thiscall
`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar4 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))();
      bVar3 = (bool)(**(code **)(*plVar4 + 0x20))(plVar4,1);
      FVariant::FVariant<bool>(&local_28,bVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&local_28);
      *(uint *)**(undefined8 **)((longlong)this + 0x10) = (uint)bVar3;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423ca810

void __thiscall `FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVariant::FVariant<bool>(&local_28,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&local_28);
      *(uint *)**(undefined8 **)((longlong)this + 0x10) = (uint)bVar3;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423ca8a0

void __thiscall
`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVariant::FVariant<bool>(&local_28,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&local_28);
      *(uint *)**(undefined8 **)((longlong)this + 0x10) = (uint)bVar3;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423ca930

void __thiscall
`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVariant::FVariant<bool>(&local_28,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&local_28);
      *(uint *)**(undefined8 **)((longlong)this + 0x10) = (uint)bVar3;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423ca9c0

void __thiscall
`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  FWindowsUIATextRangeProvider *pFVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      pFVar2 = ::operator_new(0x38);
      if (pFVar2 == (FWindowsUIATextRangeProvider *)0x0) {
        pFVar2 = (FWindowsUIATextRangeProvider *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd8))();
        lVar4 = (**(code **)*puVar3)(puVar3);
        uVar6 = (ulonglong)(*(int *)(lVar4 + 8) - 1);
        if (*(int *)(lVar4 + 8) == 0) {
          uVar6 = 0;
        }
        local_18.Object = *(IAccessibleWidget **)(*(longlong *)this + 0x10);
        local_18.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar2 = FWindowsUIATextRangeProvider::FWindowsUIATextRangeProvider
                           (pFVar2,*(FWindowsUIAManager **)(*(longlong *)this + 8),&local_18,
                            (FTextRange)(uVar6 << 0x20));
      }
      plVar5 = &pFVar2->_padding_;
      if (pFVar2 == (FWindowsUIATextRangeProvider *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      *(longlong **)**(undefined8 **)((longlong)this + 0x10) = plVar5;
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423caca0

void __thiscall `FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar4 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))();
      bVar3 = (bool)(**(code **)(*plVar4 + 0x38))(plVar4);
      FVariant::FVariant<bool>(&local_28,bVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar3 = FVariant::GetValue<bool>(&local_28);
      *(uint *)**(undefined8 **)((longlong)this + 0x10) = (uint)bVar3;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423cad50

void __thiscall
`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar3 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar2 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0xd0))();
      bVar4 = (bool)(**(code **)*puVar5)(puVar5);
      FVariant::FVariant<bool>(&local_28,bVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      bVar4 = FVariant::GetValue<bool>(&local_28);
      *(uint *)**(undefined8 **)((longlong)this + 0x10) = (uint)bVar4;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423cae00

void __thiscall
`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar3 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
      FVariant::FVariant<double>(&local_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&local_28);
      *(double *)**(undefined8 **)((longlong)this + 0x10) = dVar5;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423caeb0

void __thiscall `FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar3 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
      FVariant::FVariant<double>(&local_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&local_28);
      *(double *)**(undefined8 **)((longlong)this + 0x10) = dVar5;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423caf60

void __thiscall `FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar3 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x20))(plVar3);
      FVariant::FVariant<double>(&local_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&local_28);
      *(double *)**(undefined8 **)((longlong)this + 0x10) = dVar5;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423cb010

void __thiscall
`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsUIAManager *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  FWindowsUIAWidgetProvider *pFVar6;
  undefined1 *puVar7;
  IAccessibleWidget *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      lVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xe8))();
      if (lVar4 != 0) {
        plVar5 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xe8))();
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_28);
        if (local_28 != (IAccessibleWidget *)0x0) {
          this_00 = *(FWindowsUIAManager **)(*(longlong *)this + 8);
          if (local_28 == (IAccessibleWidget *)0x0) {
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
          local_18.Object = local_28;
          local_18.SharedReferenceCount.ReferenceController = pTStack_20;
          if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_20->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (local_28 == (IAccessibleWidget *)0x0) {
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
          pFVar6 = FWindowsUIAManager::GetWidgetProvider(this_00,&local_18);
          puVar7 = &pFVar6->field_0x28;
          if (pFVar6 == (FWindowsUIAWidgetProvider *)0x0) {
            puVar7 = (undefined1 *)0x0;
          }
          *(undefined1 **)**(undefined8 **)((longlong)this + 0x10) = puVar7;
          **(undefined4 **)((longlong)this + 8) = 0;
          (**(code **)(*(longlong *)&pFVar6->field_0x28 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_20);
      }
    }
  }
  return;
}

// operator() @ 1423cb160

void __thiscall
`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  double dVar5;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar3 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      fVar4 = (float)(**(code **)(*plVar3 + 0x10))(plVar3);
      FVariant::FVariant<double>(&local_28,(double)fVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&local_28);
      *(double *)**(undefined8 **)((longlong)this + 0x10) = dVar5;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423cb210

void __thiscall
`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar4 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 200))();
      cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      FVariant::FVariant<int>(&local_28,(uint)(cVar2 != '\0'));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      iVar3 = FVariant::GetValue<int>(&local_28);
      *(int *)**(undefined8 **)((longlong)this + 0x10) = iVar3;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423cb2c0

void __thiscall `FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  wchar_t *_Str;
  double dVar5;
  void *local_38 [2];
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar3 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xd0))();
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x28))(plVar3,local_38);
      if (*(int *)(puVar4 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)*puVar4;
      }
      dVar5 = _wtof(_Str);
      FVariant::FVariant<double>(&local_28,(double)(float)dVar5);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      dVar5 = FVariant::GetValue<double>(&local_28);
      *(double *)**(undefined8 **)((longlong)this + 0x10) = dVar5;
      if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423cb3a0

void __thiscall `FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>::operator()(void *this)

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
  FVariant local_108;
  FString local_f0;
  FArchiveState local_d8;
  undefined8 local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  undefined1 local_28 [16];
  
  puVar7 = local_28;
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar3 != '\0') {
      pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      plVar4 = *(longlong **)(*(longlong *)this + 0x10);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0xd0))();
      pFVar5 = (FString *)(**(code **)(*plVar4 + 0x28))(plVar4,puVar7);
      local_d8._padding_ = 0;
      local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_108.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_108.Value.ArrayNum = 0;
      local_108.Value.ArrayMax = 0;
      local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_d8._40_8_ = 0;
      local_d8.ArSerializingDefaults = 0;
      local_d8.ArPortFlags = 0;
      local_d8.ArMaxSerializeSize = 0;
      local_d8.ArUEVer.FileVersionUE4 = 0;
      local_d8.ArUEVer.FileVersionUE5 = 0;
      local_d8.ArLicenseeUEVer = 0;
      local_d8.ArEngineVer.Major = 0;
      local_d8.ArEngineVer.Minor = 0;
      local_d8.ArEngineVer.Patch = 0;
      local_d8.ArEngineVer._6_2_ = 0;
      local_d8.ArEngineVer.Changelist = 0;
      local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_d8.SerializedProperty = (FProperty *)0x0;
      local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_d8.bCustomVersionsAreReset = false;
      local_d8._129_7_ = 0;
      local_d8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_d8);
      local_48 = 0;
      local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      local_40 = &local_108.Value;
      uVar8 = (undefined7)((ulonglong)puVar7 >> 8);
      local_38 = 0;
      FArchiveState::SetIsSaving(&local_d8,true);
      (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar8,1));
      local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
      ::operator<<((FArchive *)&local_d8,pFVar5);
      local_108.Type = String;
      FArchive::~FArchive((FArchive *)&local_d8);
      pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pFVar5 = FVariant::GetValue<FString>(&local_108,&local_f0);
      if ((pFVar5->Data).ArrayNum == 0) {
        psz = L"";
      }
      else {
        psz = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pOVar6 = SysAllocString(psz);
      *(BSTR *)**(undefined8 **)((longlong)this + 0x10) = pOVar6;
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_108.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Value.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423cb560

void __thiscall
`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  int iVar3;
  FVariant local_28;
  
  if ((*(longlong *)(*(longlong *)this + 8) == 0) ||
     (cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar2 == '\0')) {
    *(undefined4 *)**(undefined8 **)((longlong)this + 8) = 1;
    return;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVariant::FVariant<int>(&local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = FVariant::GetValue<int>(&local_28);
  *(int *)**(undefined8 **)((longlong)this + 8) = iVar3;
  if (local_28.Value.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_28.Value.AllocatorInstance.Data);
  return;
}

// operator() @ 1423cb5f0

void __thiscall
`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  FVariant local_28;
  
  if (*(longlong *)(*(longlong *)this + 8) == 0) {
    return;
  }
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
  plVar4 = *(longlong **)(*(longlong *)this + 0x10);
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
      local_28.Type = Empty;
      local_28.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Value.ArrayNum = 0;
      local_28.Value.ArrayMax = 0;
      goto LAB_1423cb686;
    }
    iVar3 = 1;
  }
  FVariant::FVariant<int>(&local_28,iVar3);
LAB_1423cb686:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = FVariant::GetValue<int>(&local_28);
  *(int *)**(undefined8 **)((longlong)this + 0x10) = iVar3;
  if (local_28.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Value.AllocatorInstance.Data);
  }
  **(undefined4 **)((longlong)this + 8) = 0;
  return;
}

// AddRef @ 1423d0180

ulong __thiscall FWindowsUIAControlProvider::AddRef(FWindowsUIAControlProvider *this)

{
  *(int *)&this[-1].field_0x68 = *(int *)&this[-1].field_0x68 + 1;
  return *(ulong *)&this[-1].field_0x68;
}

// AddRef`adjustor{8}' @ 1423d0190

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{8}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_8__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x68);
  return uVar1;
}

// AddRef`adjustor{16}' @ 1423d01a0

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{16}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_16__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x60);
  return uVar1;
}

// AddRef`adjustor{24}' @ 1423d01b0

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{24}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_24__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x58);
  return uVar1;
}

// AddRef`adjustor{32}' @ 1423d01c0

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{32}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_32__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x50);
  return uVar1;
}

// AddRef`adjustor{40}' @ 1423d01d0

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{40}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_40__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x48);
  return uVar1;
}

// AddRef`adjustor{48}' @ 1423d01e0

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{48}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_48__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x40);
  return uVar1;
}

// AddRef`adjustor{56}' @ 1423d01f0

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{56}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_56__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x38);
  return uVar1;
}

// AddRef`adjustor{64}' @ 1423d0200

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::AddRef`adjustor{64}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::AddRef_adjustor_64__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAControlProvider *)&this[-1].field_0x30);
  return uVar1;
}

// AddToSelection @ 1423d0280

undefined4 __thiscall FWindowsUIAControlProvider::AddToSelection(FWindowsUIAControlProvider *this)

{
  return 0x80004001;
}

// Close @ 1423d4590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FWindowsUIAControlProvider::Close(FWindowsUIAControlProvider *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = &this[-1].field_0x18;
  local_58[0] = 0x80040201;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_28 = local_58;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,void>::Call
  ;
  local_20 = (undefined ***)0x0;
  lVar1 = *(longlong *)(*(longlong *)&this[-1].field_0x20 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return local_58[0];
}

// GetSelection @ 1423e2970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::GetSelection(FWindowsUIAControlProvider *this,tagSAFEARRAY **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  tagSAFEARRAY **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x40;
  local_58[0] = 0x80004001;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x38;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// GetSelection`adjustor{40}' @ 1423e2a74

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::GetSelection`adjustor{40}'
   (struct tagSAFEARRAY * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::GetSelection_adjustor_40__
          (FWindowsUIAControlProvider *this,tagSAFEARRAY **param_1)

{
  long lVar1;
  
  lVar1 = GetSelection((FWindowsUIAControlProvider *)&this[-1].field_0x48,(tagSAFEARRAY **)param_1);
  return lVar1;
}

// GetVisibleRanges @ 1423e4d90

undefined4 __thiscall
FWindowsUIAControlProvider::GetVisibleRanges
          (FWindowsUIAControlProvider *this,tagSAFEARRAY **param_1)

{
  return 0x80004001;
}

// Invoke @ 1423ea290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FWindowsUIAControlProvider::Invoke(FWindowsUIAControlProvider *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = &this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_28 = local_58;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,void>::
                Call;
  local_20 = (undefined ***)0x0;
  lVar1 = *(longlong *)(*(longlong *)&this[-1].field_0x50 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return local_58[0];
}

// Move @ 1423ef0d0

undefined4 __thiscall
FWindowsUIAControlProvider::Move(FWindowsUIAControlProvider *this,double param_1,double param_2)

{
  return 0x80004001;
}

// QueryInterface @ 1423fd1c0

undefined4 __thiscall
FWindowsUIAControlProvider::QueryInterface
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  FWindowsUIAControlProvider *pFVar9;
  
  *param_2 = (void *)0x0;
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  if ((lVar1 != _GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2._0_8_) ||
     (pFVar9 = this, *(longlong *)param_1->Data4 != _GUID_54fcb24b_e18e_47a2_b4d3_eccbe77599a2._8_8_
     )) {
    lVar2._0_4_ = param_1->Data1;
    lVar2._4_2_ = param_1->Data2;
    lVar2._6_2_ = param_1->Data3;
    if ((lVar2 == _GUID_36dc7aef_33e6_4691_afe1_2be7274b3d33._0_8_) &&
       (*(longlong *)param_1->Data4 == _GUID_36dc7aef_33e6_4691_afe1_2be7274b3d33._8_8_)) {
      pFVar9 = (FWindowsUIAControlProvider *)&this->field_0x8;
    }
    else {
      lVar3._0_4_ = param_1->Data1;
      lVar3._4_2_ = param_1->Data2;
      lVar3._6_2_ = param_1->Data3;
      if ((lVar3 == _GUID_3589c92c_63f3_4367_99bb_ada653b77cf2._0_8_) &&
         (*(longlong *)param_1->Data4 == _GUID_3589c92c_63f3_4367_99bb_ada653b77cf2._8_8_)) {
        pFVar9 = (FWindowsUIAControlProvider *)&this->field_0x10;
      }
      else {
        lVar4._0_4_ = param_1->Data1;
        lVar4._4_2_ = param_1->Data2;
        lVar4._6_2_ = param_1->Data3;
        if ((lVar4 == _GUID_56d00bd0_c4f4_433c_a836_1a52a57e0892._0_8_) &&
           (*(longlong *)param_1->Data4 == _GUID_56d00bd0_c4f4_433c_a836_1a52a57e0892._8_8_)) {
          pFVar9 = (FWindowsUIAControlProvider *)&this->field_0x18;
        }
        else {
          lVar5._0_4_ = param_1->Data1;
          lVar5._4_2_ = param_1->Data2;
          lVar5._6_2_ = param_1->Data3;
          if ((lVar5 == _GUID_c7935180_6fb3_4201_b174_7df73adbf64a._0_8_) &&
             (*(longlong *)param_1->Data4 == _GUID_c7935180_6fb3_4201_b174_7df73adbf64a._8_8_)) {
            pFVar9 = (FWindowsUIAControlProvider *)&this->field_0x28;
          }
          else {
            lVar6._0_4_ = param_1->Data1;
            lVar6._4_2_ = param_1->Data2;
            lVar6._6_2_ = param_1->Data3;
            if ((lVar6 == _GUID_987df77b_db06_4d77_8f8a_86a9c3bb90b9._0_8_) &&
               (*(longlong *)param_1->Data4 == _GUID_987df77b_db06_4d77_8f8a_86a9c3bb90b9._8_8_)) {
              pFVar9 = (FWindowsUIAControlProvider *)&this->field_0x30;
            }
            else {
              lVar7._0_4_ = param_1->Data1;
              lVar7._4_2_ = param_1->Data2;
              lVar7._6_2_ = param_1->Data3;
              if ((lVar7 == _GUID_fb8b03af_3bdf_48d4_bd36_1a65793be168._0_8_) &&
                 (*(longlong *)param_1->Data4 == _GUID_fb8b03af_3bdf_48d4_bd36_1a65793be168._8_8_))
              {
                pFVar9 = (FWindowsUIAControlProvider *)&this->field_0x38;
              }
              else {
                lVar8._0_4_ = param_1->Data1;
                lVar8._4_2_ = param_1->Data2;
                lVar8._6_2_ = param_1->Data3;
                if (lVar8 != _GUID_2acad808_b2d4_452d_a407_91ff1ad167b2._0_8_) {
                  return 0x80004002;
                }
                if (*(longlong *)param_1->Data4 != _GUID_2acad808_b2d4_452d_a407_91ff1ad167b2._8_8_)
                {
                  return 0x80004002;
                }
                pFVar9 = (FWindowsUIAControlProvider *)&this->field_0x40;
              }
            }
          }
        }
      }
    }
  }
  if (this == (FWindowsUIAControlProvider *)&DAT_00000028) {
    pFVar9 = (FWindowsUIAControlProvider *)0x0;
  }
  *param_2 = pFVar9;
  if (pFVar9 == (FWindowsUIAControlProvider *)0x0) {
    return 0x80004002;
  }
  (**(code **)(*(longlong *)this + 8))(this);
  return 0;
}

// QueryInterface`adjustor{8}' @ 1423fd31c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{8}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_8__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x68,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// QueryInterface`adjustor{16}' @ 1423fd32c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{16}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_16__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x60,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// QueryInterface`adjustor{24}' @ 1423fd33c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{24}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_24__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x58,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// QueryInterface`adjustor{32}' @ 1423fd34c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{32}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_32__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x50,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// QueryInterface`adjustor{40}' @ 1423fd35c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{40}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_40__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x48,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// QueryInterface`adjustor{48}' @ 1423fd36c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{48}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_48__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x40,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// QueryInterface`adjustor{56}' @ 1423fd37c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{56}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_56__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x38,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// QueryInterface`adjustor{64}' @ 1423fd38c

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::QueryInterface`adjustor{64}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::QueryInterface_adjustor_64__
          (FWindowsUIAControlProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAControlProvider *)&this[-1].field_0x30,(_GUID *)param_1,param_2
                        );
  return lVar1;
}

// RangeFromChild @ 1423fd650

undefined4 __thiscall
FWindowsUIAControlProvider::RangeFromChild
          (FWindowsUIAControlProvider *this,IRawElementProviderSimple *param_1,
          ITextRangeProvider **param_2)

{
  return 0x80004001;
}

// RangeFromPoint @ 1423fd660

undefined4 __thiscall
FWindowsUIAControlProvider::RangeFromPoint
          (FWindowsUIAControlProvider *this,UiaPoint *param_1,ITextRangeProvider **param_2)

{
  return 0x80004001;
}

// Release @ 1424000b0

ulong __thiscall FWindowsUIAControlProvider::Release(FWindowsUIAControlProvider *this)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  
  if (*(int *)&this[-1].field_0x68 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6951043228682420265>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIABaseProvider.cpp"
                       ,0x29,"RefCount > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = *(int *)&this[-1].field_0x68 - 1;
  *(ulong *)&this[-1].field_0x68 = uVar3;
  if (uVar3 == 0) {
    (*(code *)**(undefined8 **)&this[-1].field_0x48)(&this[-1].field_0x48,1);
    uVar3 = 0;
  }
  return uVar3;
}

// Release`adjustor{8}' @ 142400114

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{8}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_8__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x68);
  return uVar1;
}

// Release`adjustor{16}' @ 142400124

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{16}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_16__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x60);
  return uVar1;
}

// Release`adjustor{24}' @ 142400134

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{24}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_24__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x58);
  return uVar1;
}

// Release`adjustor{32}' @ 142400144

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{32}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_32__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x50);
  return uVar1;
}

// Release`adjustor{40}' @ 142400154

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{40}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_40__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x48);
  return uVar1;
}

// Release`adjustor{48}' @ 142400164

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{48}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_48__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x40);
  return uVar1;
}

// Release`adjustor{56}' @ 142400174

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{56}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_56__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x38);
  return uVar1;
}

// Release`adjustor{64}' @ 142400184

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAControlProvider::Release`adjustor{64}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAControlProvider::Release_adjustor_64__(FWindowsUIAControlProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAControlProvider *)&this[-1].field_0x30);
  return uVar1;
}

// RemoveFromSelection @ 142400ea0

undefined4 __thiscall
FWindowsUIAControlProvider::RemoveFromSelection(FWindowsUIAControlProvider *this)

{
  return 0x80004001;
}

// Resize @ 142401c70

undefined4 __thiscall
FWindowsUIAControlProvider::Resize(FWindowsUIAControlProvider *this,double param_1,double param_2)

{
  return 0x80004001;
}

// Rotate @ 142402320

undefined4 __thiscall
FWindowsUIAControlProvider::Rotate(FWindowsUIAControlProvider *this,double param_1)

{
  return 0x80004001;
}

// Select @ 142403170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FWindowsUIAControlProvider::Select(FWindowsUIAControlProvider *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = &this[-1].field_0x8;
  local_58[0] = 0x80004001;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_28 = local_58;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,void>::
                Call;
  local_20 = (undefined ***)0x0;
  lVar1 = *(longlong *)(*(longlong *)&this[-1].field_0x10 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return local_58[0];
}

// SetValue @ 142405c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::SetValue(FWindowsUIAControlProvider *this,double param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  double local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1].field_0x40;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// SetValue @ 142405d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::SetValue(FWindowsUIAControlProvider *this,wchar_t *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  wchar_t *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x28;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1].field_0x20;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// SetVisualState @ 142405e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::SetVisualState
          (FWindowsUIAControlProvider *this,WindowVisualState param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  WindowVisualState local_res10 [6];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// Toggle @ 142409f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FWindowsUIAControlProvider::Toggle(FWindowsUIAControlProvider *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = &this[-1].field_0x30;
  local_58[0] = 0x80040201;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_28 = local_58;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,void>::
                Call;
  local_20 = (undefined ***)0x0;
  lVar1 = *(longlong *)(*(longlong *)&this[-1].field_0x38 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return local_58[0];
}

// WaitForInputIdle @ 14240c6d0

undefined4 __thiscall
FWindowsUIAControlProvider::WaitForInputIdle
          (FWindowsUIAControlProvider *this,int param_1,int *param_2)

{
  return 0x80004001;
}

// get_CanMaximize @ 14240cef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_CanMaximize(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_CanMinimize @ 14240d000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_CanMinimize(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_CanMove @ 14240d110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_CanMove(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x30;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x28;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_CanResize @ 14240d220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_CanResize(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x30;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x28;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_CanRotate @ 14240d330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_CanRotate(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x30;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x28;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_CanSelectMultiple @ 14240d440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_CanSelectMultiple(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x18;
  local_58[0] = 0x80004001;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x10;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_DocumentRange @ 14240d550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_DocumentRange
          (FWindowsUIAControlProvider *this,ITextRangeProvider **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  ITextRangeProvider **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x40;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x38;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_IsModal @ 14240d890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_IsModal(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_IsReadOnly @ 14240d9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_IsReadOnly(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x40;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_IsReadOnly`adjustor{32}' @ 14240daa4

/* [thunk]:public: virtual long __cdecl FWindowsUIAControlProvider::get_IsReadOnly`adjustor{32}'
   (int * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAControlProvider::get_IsReadOnly_adjustor_32__
          (FWindowsUIAControlProvider *this,int *param_1)

{
  long lVar1;
  
  lVar1 = get_IsReadOnly((FWindowsUIAControlProvider *)&this[-1].field_0x50,param_1);
  return lVar1;
}

// get_IsSelected @ 14240dac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_IsSelected(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x10;
  local_58[0] = 0x80004001;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x8;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_IsSelectionRequired @ 14240dbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_IsSelectionRequired(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x18;
  local_58[0] = 0x80004001;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x10;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_IsTopmost @ 14240dce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_IsTopmost(FWindowsUIAControlProvider *this,int *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80004001;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_LargeChange @ 14240ddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_LargeChange(FWindowsUIAControlProvider *this,double *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  double *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x40;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_Maximum @ 14240df00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_Maximum(FWindowsUIAControlProvider *this,double *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  double *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x40;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_Minimum @ 14240e010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_Minimum(FWindowsUIAControlProvider *this,double *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  double *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x40;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_SelectionContainer @ 14240e130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_SelectionContainer
          (FWindowsUIAControlProvider *this,IRawElementProviderSimple **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  IRawElementProviderSimple **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x10;
  local_58[0] = 0x80004001;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x8;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_SmallChange @ 14240e240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_SmallChange(FWindowsUIAControlProvider *this,double *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  double *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x40;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_SupportedTextSelection @ 14240e350

undefined4 __thiscall
FWindowsUIAControlProvider::get_SupportedTextSelection
          (FWindowsUIAControlProvider *this,SupportedTextSelection *param_1)

{
  *param_1 = SupportedTextSelection_None;
  return 0;
}

// get_ToggleState @ 14240e360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_ToggleState(FWindowsUIAControlProvider *this,ToggleState *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  ToggleState *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x38;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x30;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_Value @ 14240e470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_Value(FWindowsUIAControlProvider *this,double *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  double *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1].field_0x40;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_Value @ 14240e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_Value(FWindowsUIAControlProvider *this,wchar_t **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  wchar_t **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x28;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1].field_0x20;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// get_WindowInteractionState @ 14240e690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_WindowInteractionState
          (FWindowsUIAControlProvider *this,WindowInteractionState *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  WindowInteractionState *local_res10 [3];
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  undefined1 *local_30;
  WindowInteractionState **local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_30 = &this[-1].field_0x18;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_28 = local_res10;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,void>
                ::Call;
  lVar1 = *(longlong *)(*(longlong *)&this[-1].field_0x20 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10[0] = param_1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return 0;
}

// get_WindowVisualState @ 14240e750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAControlProvider::get_WindowVisualState
          (FWindowsUIAControlProvider *this,WindowVisualState *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  WindowVisualState *local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

