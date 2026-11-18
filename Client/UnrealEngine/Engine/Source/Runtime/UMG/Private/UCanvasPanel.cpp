// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 16

// StaticClass @ 1468d6060

UClass * __cdecl UCanvasPanel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CanvasPanel",&Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton
               ,StaticRegisterNativesUCanvasPanel,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCanvasPanel>,InternalVTableHelperCtorCaller<UCanvasPanel>,
               local_res8,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton;
}

// UCanvasPanel @ 146900e60

UCanvasPanel * __thiscall UCanvasPanel::UCanvasPanel(UCanvasPanel *this,FVTableHelper *param_1)

{
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyCanvas).Object = (SConstraintCanvas *)0x0;
  (this->MyCanvas).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCanvasPanel @ 146900eb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCanvasPanel * __thiscall UCanvasPanel::UCanvasPanel(UCanvasPanel *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyCanvas).Object = (SConstraintCanvas *)0x0;
  (this->MyCanvas).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UCanvasPanel @ 146904800

void __thiscall UCanvasPanel::~UCanvasPanel(UCanvasPanel *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyCanvas).SharedReferenceCount.ReferenceController);
  UPanelWidget::~UPanelWidget((UPanelWidget *)this);
  return;
}

// AddChildToCanvas @ 14690a380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCanvasPanelSlot * __thiscall UCanvasPanel::AddChildToCanvas(UCanvasPanel *this,UWidget *param_1)

{
  int iVar1;
  UCanvasPanelSlot *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UCanvasPanelSlot *)UPanelWidget::AddChild((UPanelWidget *)this,param_1);
  if (pUVar2 != (UCanvasPanelSlot *)0x0) {
    pUVar3 = UCanvasPanelSlot::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UCanvasPanelSlot *)0x0;
}

// GetCanvasWidget @ 14691ddc0

TSharedPtr<SConstraintCanvas,1> * __thiscall
UCanvasPanel::GetCanvasWidget
          (UCanvasPanel *this,TSharedPtr<SConstraintCanvas,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->MyCanvas).Object;
  pTVar1 = (this->MyCanvas).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetGeometryForSlot @ 14691e370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCanvasPanel::GetGeometryForSlot(UCanvasPanel *this,int param_1,FGeometry *param_2)

{
  FObjectPtr_u_0 *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)param_1 * 8);
  if (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) != 0) {
    pUVar5 = UCanvasPanelSlot::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if ((bVar2) && (this_00->Handle != (UObject *)0x0)) {
      bVar2 = GetGeometryForSlot(this,(UCanvasPanelSlot *)this_00->Handle,param_2);
      return bVar2;
    }
    pFVar6 = GetTypeName<UCanvasPanelSlot>(&local_38);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UPanelSlot>(&local_28,(UPanelSlot *)this_00->Handle);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar6 = GetTypeName<UCanvasPanelSlot>(&local_18);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// GetGeometryForSlot @ 14691e4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCanvasPanel::GetGeometryForSlot(UCanvasPanel *this,UCanvasPanelSlot *param_1,FGeometry *param_2)

{
  SConstraintCanvas *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FGeometry *pFVar5;
  TSharedPtr<SWidget,1> *pTVar6;
  uint uVar7;
  ForElementType<FArrangedWidget> FVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  FGeometry *local_198;
  TSharedPtr<SWidget,1> local_190;
  FArrangedChildren local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_1->_padding_ == 0) {
    bVar3 = false;
  }
  else {
    this_00 = (this->MyCanvas).Object;
    pTVar1 = (this->MyCanvas).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198 = param_2;
    if (this_00 != (SConstraintCanvas *)0x0) {
      local_180.VisibilityFilter = (EVisibility)EVisibility::All.Value.Value;
      uVar10 = 0;
      local_180.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
      local_180.Array.ArrayNum = 0;
      local_180.bAllow3DWidgets = false;
      local_180.Array.ArrayMax = 4;
      pFVar5 = SWidget::GetCachedGeometry((SWidget *)this_00);
      SWidget::ArrangeChildren((SWidget *)this_00,pFVar5,&local_180,false);
      uVar11 = uVar10;
      if (0 < local_180.Array.ArrayNum) {
        do {
          pTVar6 = UWidget::GetCachedWrappedWidget((UWidget *)param_1->_padding_,&local_190);
          uVar9 = (uint)uVar10;
          uVar7 = 0;
          if ((int)uVar9 < local_180.Array.ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_1a8 = (longlong)(int)uVar9;
            local_1a0 = (longlong)local_180.Array.ArrayNum;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
          if (local_180.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
          }
          if ((pTVar6->Object != (SWidget *)0x0) &&
             (pTVar6->Object == *(SWidget **)(uVar11 + 0x38 + (longlong)FVar8))) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_190.SharedReferenceCount.ReferenceController);
            uVar7 = 0;
            if ((int)uVar9 < local_180.Array.ArrayNum) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if (uVar7 == 0) {
              local_1a8 = (longlong)(int)uVar9;
              local_1a0 = (longlong)local_180.Array.ArrayNum;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
            }
            FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
            if (local_180.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
            }
            FGeometry::operator=
                      (local_198,(FGeometry *)((longlong)FVar8 + (longlong)(int)uVar9 * 0x48));
            FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
            if (local_180.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_180.Array.ArrayNum);
            if (local_180.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
            }
            bVar3 = true;
            goto LAB_14691e63e;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190.SharedReferenceCount.ReferenceController);
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar11 = uVar11 + 0x48;
        } while ((int)(uVar9 + 1) < local_180.Array.ArrayNum);
      }
      FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
      if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_180.Array.ArrayNum);
      if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = false;
LAB_14691e63e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return bVar3;
}

// GetPrivateStaticClass @ 146921cf0

UClass * __cdecl UCanvasPanel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CanvasPanel",&Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton
               ,StaticRegisterNativesUCanvasPanel,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCanvasPanel>,InternalVTableHelperCtorCaller<UCanvasPanel>,
               local_res8,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasPanel.InnerSingleton;
}

// GetSlotClass @ 1469242e0

UClass * __thiscall UCanvasPanel::GetSlotClass(UCanvasPanel *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CanvasPanelSlot",
               &Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton,
               UCanvasPanelSlot::StaticRegisterNativesUCanvasPanelSlot,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCanvasPanelSlot>,
               InternalVTableHelperCtorCaller<UCanvasPanelSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton;
}

// OnSlotAdded @ 1469302e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCanvasPanel::OnSlotAdded(UCanvasPanel *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SConstraintCanvas,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SConstraintCanvas,1> local_28;
  FString local_18;
  
  if ((this->MyCanvas).Object != (SConstraintCanvas *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UCanvasPanelSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UCanvasPanelSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UCanvasPanelSlot>(&local_38);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    pTVar3 = TSharedPtr<SConstraintCanvas,1>::ToSharedRef(&this->MyCanvas,&local_28);
    UCanvasPanelSlot::BuildSlot((UCanvasPanelSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 146930490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCanvasPanel::OnSlotRemoved(UCanvasPanel *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  bool bVar2;
  SConstraintCanvas *this_01;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyCanvas).Object != (SConstraintCanvas *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWrappedWidget(this_00,&local_28);
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = TSharedPtr<SConstraintCanvas,1>::operator->(&this->MyCanvas);
      if (local_28.Object == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_28.Object == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SConstraintCanvas::RemoveSlot(this_01,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RebuildWidget @ 146936e40

TSharedRef<SWidget,1> * __thiscall
UCanvasPanel::RebuildWidget(UCanvasPanel *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SConstraintCanvas,1> *pTVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  UCanvasPanelSlot *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SConstraintCanvas *pSVar6;
  code *pcVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SConstraintCanvas,1> *pTVar10;
  UClass *pUVar11;
  TSharedRef<SWidget,1> *pTVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  SConstraintCanvas *local_2a8;
  FSharedReferencer<1> local_2a0;
  FMemScope local_298;
  TSharedRef<SConstraintCanvas,1> local_290;
  TSharedRef<SConstraintCanvas,1> local_280;
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs> local_270;
  FArguments local_258;
  
  pFVar9 = SConstraintCanvas::FArguments::FArguments(&local_258);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_298,&local_res20,true);
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>
            (&local_270,"SConstraintCanvas",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\CanvasPanel.cpp"
             ,0x39,local_res10);
  FMemScope::~FMemScope(&local_298);
  FLLMScope::~FLLMScope(local_res18);
  pTVar10 = TSlateDecl<SConstraintCanvas,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_270,&local_280,pFVar9);
  local_2a0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_2a8 = pTVar10->Object;
  if (local_2a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyCanvas;
  if (pTVar1 != (TSharedPtr<SConstraintCanvas,1> *)&local_2a8) {
    pTVar1->Object = local_2a8;
    local_2a8 = (SConstraintCanvas *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCanvas).SharedReferenceCount,&local_2a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SConstraintCanvas::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  puVar13 = (undefined8 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  puVar2 = puVar13 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar13 == puVar2) break;
    this_00 = (UCanvasPanelSlot *)*puVar13;
    if (this_00 != (UCanvasPanelSlot *)0x0) {
      pUVar11 = UCanvasPanelSlot::StaticClass();
      iVar4 = (int)pUVar11->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar11->_padding_)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCanvasPanel *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if (pTVar1->Object == (SConstraintCanvas *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        local_290.SharedReferenceCount.ReferenceController =
             (this->MyCanvas).SharedReferenceCount.ReferenceController;
        local_290.Object = pTVar1->Object;
        if (local_290.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_290.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_290.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_290.Object == (SConstraintCanvas *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        UCanvasPanelSlot::BuildSlot(this_00,&local_290);
      }
    }
    puVar13 = puVar13 + 1;
  }
  if ((this->MyCanvas).Object == (SConstraintCanvas *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  pTVar5 = (this->MyCanvas).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->MyCanvas).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SConstraintCanvas *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14693ac90

void __thiscall UCanvasPanel::ReleaseSlateResources(UCanvasPanel *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyCanvas != (TSharedPtr<SConstraintCanvas,1> *)&local_18) {
    (this->MyCanvas).Object = (SConstraintCanvas *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCanvas).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// StaticRegisterNativesUCanvasPanel @ 146945770

void __cdecl UCanvasPanel::StaticRegisterNativesUCanvasPanel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCanvasPanel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddChildToCanvas @ 1469506a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UCanvasPanel::execAddChildToCanvas(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UPanelSlot *pUVar3;
  UClass *pUVar4;
  UWidget *local_res10;
  
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UPanelWidget::AddChild((UPanelWidget *)param_1,local_res10);
  if (pUVar3 != (UPanelSlot *)0x0) {
    pUVar4 = UCanvasPanelSlot::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      *(UPanelSlot **)param_3 = pUVar3;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

