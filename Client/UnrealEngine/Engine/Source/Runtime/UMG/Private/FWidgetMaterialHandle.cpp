// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// GetMaterial @ 14691f670

UMaterialInterface * __thiscall FWidgetMaterialHandle::GetMaterial(FWidgetMaterialHandle *this)

{
  int iVar1;
  void *pvVar2;
  UMaterialInterface *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  int *piVar6;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                    ::__l2::TypeName,"SlateFontInfo");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (this->TypeName !=
      `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'::
      __l2::TypeName) {
    if ((*piVar6 < `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                      ::__l2::TypeName,"SlateBrush");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (this->TypeName ==
        `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'::
        __l2::TypeName) {
      pUVar3 = *(UMaterialInterface **)((longlong)this->Data + 0x38);
      if (pUVar3 == (UMaterialInterface *)0x0) {
        return (UMaterialInterface *)0x0;
      }
      pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (*(int *)(pUVar3->_padding_ + 0x38) < iVar1) {
        return (UMaterialInterface *)0x0;
      }
      if ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_) {
        return (UMaterialInterface *)0x0;
      }
      return pUVar3;
    }
    if ((*piVar6 < `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                      ::__l2::TypeName,"FontOutlineSettings");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (this->TypeName !=
        `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
        ::__l2::TypeName) {
      return (UMaterialInterface *)0x0;
    }
  }
  pvVar2 = this->Data;
  if (*(longlong *)((longlong)pvVar2 + 8) != 0) {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar2 + 8),pUVar5);
    if (bVar4) {
      return *(UMaterialInterface **)((longlong)pvVar2 + 8);
    }
  }
  return (UMaterialInterface *)0x0;
}

// SetMaterial @ 146943340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetMaterialHandle::SetMaterial
          (FWidgetMaterialHandle *this,UMaterialInterface *param_1,UWidget *param_2)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  TSharedPtr<SWidget,1> local_18;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                    ::__l2::TypeName,"SlateFontInfo");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (this->TypeName !=
      `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'::
      __l2::TypeName) {
    if ((*piVar4 < `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                      ::__l2::TypeName,"SlateBrush");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (this->TypeName ==
        `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'::
        __l2::TypeName) {
      FSlateBrush::SetResourceObject(this->Data,(UObject *)param_1);
      goto LAB_1469433f4;
    }
    if ((*piVar4 < `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                      ::__l2::TypeName,"FontOutlineSettings");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (this->TypeName !=
        `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
        ::__l2::TypeName) goto LAB_1469433f4;
  }
  pvVar1 = this->Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(UMaterialInterface **)((longlong)pvVar1 + 8) = param_1;
LAB_1469433f4:
  UWidget::GetCachedWidget(param_2,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if ((local_18.Object == (SWidget *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SWidget::Invalidate(local_18.Object,LayoutAndVolatility);
    (**(code **)(param_2->_padding_ + 0x2e8))(param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

