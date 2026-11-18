// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// GetFontInfo @ 142581a80

FSlateFontInfo * __cdecl
FStyleDefaults::GetFontInfo(FSlateFontInfo *__return_storage_ptr__,ushort param_1)

{
  FLegacySlateFontInfoCache *this;
  TSharedRef<FCompositeFont_const_,1> *pTVar1;
  FName local_res8;
  TSharedPtr<FCompositeFont_const_,1> local_48;
  TSharedRef<FCompositeFont_const_,1> local_38;
  FFontOutlineSettings local_28;
  
  local_28.OutlineSize = 0;
  local_28.bMiteredCorners = false;
  local_28.bSeparateFillAlpha = false;
  local_28.bApplyOutlineToDropShadows = false;
  local_28.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_28.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  ::FName::FName(&local_res8,L"Regular");
  this = FLegacySlateFontInfoCache::Get();
  pTVar1 = FLegacySlateFontInfoCache::GetDefaultFont(this,&local_38);
  local_48.Object = pTVar1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            (__return_storage_ptr__,&local_48,(float)param_1,&local_res8,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetNoBrush @ 142581f90

FSlateBrush * __cdecl FStyleDefaults::GetNoBrush(void)

{
  TVector2<float>_u_0 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FSlateNoResource::FSlateNoResource
                (&NoBrush,(FDeprecateVector2DParameter *)&local_res8[0]._s_0);
      atexit(`FStyleDefaults::GetNoBrush'::__l2::_dynamic_atexit_destructor_for__NoBrush__);
      _Init_thread_footer(&::_TSS0);
      return (FSlateBrush *)&NoBrush;
    }
  }
  return (FSlateBrush *)&NoBrush;
}

