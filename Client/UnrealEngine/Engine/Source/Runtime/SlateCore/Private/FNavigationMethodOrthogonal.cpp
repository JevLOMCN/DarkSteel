// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// StaticStruct @ 1424c4790

UScriptStruct * __cdecl FNavigationMethodOrthogonal::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationMethodOrthogonal.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FNavigationMethodOrthogonal.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethodOrthogonal,(UObject *)pUVar1,
                         L"NavigationMethodOrthogonal");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationMethodOrthogonal.OuterSingleton;
}

// FindNextFocusableWidget @ 1424c47d0

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethodOrthogonal::FindNextFocusableWidget
          (FNavigationMethodOrthogonal *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FArrangedWidget *param_1,EUINavigation param_2,FNavigationReply *param_3,
          FArrangedWidget *param_4,int param_5)

{
  FHittestGrid *pFVar1;
  <lambda_10> local_res20;
  FSlateRect local_38;
  FSlateRect local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = (param_1->Widget).Object;
  pFVar1 = *(FHittestGrid **)&this->field_0x8;
  local_10 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  FHittestGrid::GetWidgetRenderBoundingRect(pFVar1,&local_38,(TSharedPtr<SWidget,1> *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  pFVar1 = *(FHittestGrid **)&this->field_0x8;
  local_18 = (param_4->Widget).Object;
  local_10 = (param_4->Widget).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  FHittestGrid::GetWidgetRenderBoundingRect(pFVar1,&local_28,(TSharedPtr<SWidget,1> *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (param_2 == Left) {
    local_18 = (SWidget *)CONCAT44(local_38.Top + __real_3f000000,local_28.Left);
    local_10._4_4_ = local_38.Bottom - __real_3f000000;
    local_10._0_4_ = local_28.Right;
    local_28.Right = local_38.Right;
    local_28.Left = local_38.Left;
    local_28.Top = local_38.Top;
    local_28.Bottom = local_38.Bottom;
    FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_1>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_2>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_3>_>
              (this,__return_storage_ptr__,&local_28,(FSlateRect *)&local_18,0,-1,Left,param_3,
               (<lambda_1>)local_res20,(<lambda_2>)local_res20,(<lambda_3>)local_res20,param_5);
  }
  else if (param_2 == Right) {
    local_18 = (SWidget *)CONCAT44(local_38.Top + __real_3f000000,local_28.Left);
    local_10._4_4_ = local_38.Bottom - __real_3f000000;
    local_10._0_4_ = local_28.Right;
    local_28.Right = local_38.Right;
    local_28.Left = local_38.Left;
    local_28.Top = local_38.Top;
    local_28.Bottom = local_38.Bottom;
    FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_4>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_5>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_6>_>
              (this,__return_storage_ptr__,&local_28,(FSlateRect *)&local_18,0,1,Right,param_3,
               (<lambda_4>)local_res20,(<lambda_5>)local_res20,(<lambda_6>)local_res20,param_5);
  }
  else if (param_2 == Up) {
    local_18 = (SWidget *)CONCAT44(local_28.Top,local_38.Left + __real_3f000000);
    local_10._4_4_ = local_28.Bottom;
    local_10._0_4_ = local_38.Right - __real_3f000000;
    local_28.Bottom = local_38.Bottom;
    local_28.Left = local_38.Left;
    local_28.Top = local_38.Top;
    local_28.Right = local_38.Right;
    FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_7>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_8>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_9>_>
              (this,__return_storage_ptr__,&local_28,(FSlateRect *)&local_18,1,-1,Up,param_3,
               (<lambda_7>)local_res20,(<lambda_8>)local_res20,(<lambda_9>)local_res20,param_5);
  }
  else if (param_2 == Down) {
    local_18 = (SWidget *)CONCAT44(local_28.Top,local_38.Left + __real_3f000000);
    local_10._4_4_ = local_28.Bottom;
    local_10._0_4_ = local_38.Right - __real_3f000000;
    local_28.Bottom = local_38.Bottom;
    local_28.Left = local_38.Left;
    local_28.Top = local_38.Top;
    local_28.Right = local_38.Right;
    FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_10>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_11>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_12>_>
              (this,__return_storage_ptr__,&local_28,(FSlateRect *)&local_18,1,1,Down,param_3,
               local_res20,(<lambda_11>)local_res20,(<lambda_12>)local_res20,param_5);
  }
  else {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

