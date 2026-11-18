// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// StaticStruct @ 146a48bd0

UScriptStruct * __cdecl FPaintContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPaintContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FPaintContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPaintContext,(UObject *)pUVar1,L"PaintContext");
  }
  return Z_Registration_Info_UScriptStruct_FPaintContext.OuterSingleton;
}

// FPaintContext @ 146a55840

/* WARNING: Enum "Type": Some values do not have unique names */

FPaintContext * __thiscall FPaintContext::FPaintContext(FPaintContext *this)

{
  ulonglong uVar1;
  TSharedPtr<SWindow,1> local_18;
  
  uVar1 = (ulonglong)_tls_index;
  this->AllottedGeometry = &NullGeometry;
  this->MyCullingRect = &NullRect;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18.Object = (SWindow *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FSlateWindowElementList::FSlateWindowElementList(&NullElementList,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      atexit(`GetNullElementList'::__l2::_dynamic_atexit_destructor_for__NullElementList__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->OutDrawElements = &NullElementList;
  this->WidgetStyle = &NullStyle;
  this->LayerId = 0;
  this->bParentEnabled = true;
  this->MaxLayer = 0;
  return this;
}

