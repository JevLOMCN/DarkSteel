// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 14

// StaticStruct @ 14d893e70

UScriptStruct * __cdecl FAudioMeterStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMeterStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMeterStyle,(UObject *)pUVar1,
                         L"AudioMeterStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMeterStyle.OuterSingleton;
}

// FAudioMeterStyle @ 14d8b0660

FAudioMeterStyle * __thiscall FAudioMeterStyle::FAudioMeterStyle(FAudioMeterStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FAudioMeterWidgetStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)&this->field_0x10);
  FSlateBrush::FSlateBrush((FSlateBrush *)&this->field_0xc0);
  FSlateBrush::FSlateBrush((FSlateBrush *)&this->field_0x170);
  FSlateBrush::FSlateBrush((FSlateBrush *)&this->field_0x220);
  FSlateBrush::FSlateBrush((FSlateBrush *)&this->field_0x2d0);
  *(undefined4 *)&this->field_0x3a0 = 0x40400000;
  *(undefined8 *)&this->field_0x390 = 0x4024000000000000;
  *(undefined8 *)&this->field_0x380 = 0x406f400000000000;
  *(undefined8 *)&this->field_0x3b0 = 0x4024000000000000;
  *(undefined8 *)&this->field_0x388 = 0x4039000000000000;
  *(undefined4 *)&this->field_0x3a4 = 0x40000000;
  *(undefined8 *)&this->field_0x398 = 0x4014000000000000;
  *(undefined8 *)&this->field_0x3a8 = 0xc064000000000000;
  *(undefined2 *)&this->field_0x3b8 = 0x101;
  *(undefined4 *)&this->field_0x3bc = 0x40a00000;
  *(undefined4 *)&this->field_0x3c0 = 0x3f800000;
  *(undefined4 *)&this->field_0x3c4 = 0x41200000;
  *(undefined4 *)&this->field_0x3c8 = 10;
  FStyleDefaults::GetFontInfo((FSlateFontInfo *)&this->field_0x3d0,5);
  *(undefined ***)this = &___7FAudioMeterStyle__6B_;
  return this;
}

// operator= @ 14d8c33f0

FAudioMeterStyle * __thiscall
FAudioMeterStyle::operator=(FAudioMeterStyle *this,FAudioMeterStyle *param_1)

{
  undefined8 uVar1;
  
  FSlateBrush::operator=((FSlateBrush *)&this->field_0x10,(FSlateBrush *)&param_1->field_0x10);
  FSlateBrush::operator=((FSlateBrush *)&this->field_0xc0,(FSlateBrush *)&param_1->field_0xc0);
  FSlateBrush::operator=((FSlateBrush *)&this->field_0x170,(FSlateBrush *)&param_1->field_0x170);
  FSlateBrush::operator=((FSlateBrush *)&this->field_0x220,(FSlateBrush *)&param_1->field_0x220);
  FSlateBrush::operator=((FSlateBrush *)&this->field_0x2d0,(FSlateBrush *)&param_1->field_0x2d0);
  uVar1 = *(undefined8 *)&param_1->field_0x388;
  *(undefined8 *)&this->field_0x380 = *(undefined8 *)&param_1->field_0x380;
  *(undefined8 *)&this->field_0x388 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x398;
  *(undefined8 *)&this->field_0x390 = *(undefined8 *)&param_1->field_0x390;
  *(undefined8 *)&this->field_0x398 = uVar1;
  *(undefined4 *)&this->field_0x3a0 = *(undefined4 *)&param_1->field_0x3a0;
  *(undefined4 *)&this->field_0x3a4 = *(undefined4 *)&param_1->field_0x3a4;
  uVar1 = *(undefined8 *)&param_1->field_0x3b0;
  *(undefined8 *)&this->field_0x3a8 = *(undefined8 *)&param_1->field_0x3a8;
  *(undefined8 *)&this->field_0x3b0 = uVar1;
  this->field_0x3b8 = param_1->field_0x3b8;
  this->field_0x3b9 = param_1->field_0x3b9;
  *(undefined4 *)&this->field_0x3bc = *(undefined4 *)&param_1->field_0x3bc;
  *(undefined4 *)&this->field_0x3c0 = *(undefined4 *)&param_1->field_0x3c0;
  *(undefined4 *)&this->field_0x3c4 = *(undefined4 *)&param_1->field_0x3c4;
  *(undefined4 *)&this->field_0x3c8 = *(undefined4 *)&param_1->field_0x3c8;
  FSlateFontInfo::operator=
            ((FSlateFontInfo *)&this->field_0x3d0,(FSlateFontInfo *)&param_1->field_0x3d0);
  return this;
}

// GetDefault @ 14d92cc20

FAudioMeterStyle * __cdecl FAudioMeterStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMeterStyle(&::Default);
      atexit(`FAudioMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934270

void __thiscall
FAudioMeterStyle::GetResources
          (FAudioMeterStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined1 *apuStack_18 [2];
  
  puStack_28 = &this->field_0x10;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&puStack_28) &&
     ((FScriptContainerElement *)&puStack_28 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined1 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = puStack_28;
  puStack_20 = &this->field_0x170;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&puStack_20) &&
     ((FScriptContainerElement *)&puStack_20 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined1 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = puStack_20;
  apuStack_18[0] = &this->field_0x2d0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)apuStack_18) &&
     ((FScriptContainerElement *)apuStack_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined1 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = apuStack_18[0];
  return;
}

// GetTypeName @ 14d937450

FName __thiscall FAudioMeterStyle::GetTypeName(FAudioMeterStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetFont @ 14d968fa0

FAudioMeterStyle * __thiscall
FAudioMeterStyle::SetFont(FAudioMeterStyle *this,FName *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d968ff0

FAudioMeterStyle * __thiscall
FAudioMeterStyle::SetFont(FAudioMeterStyle *this,FString *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  wchar_t *pwVar2;
  FSlateFontInfo local_68;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,pwVar2,(float)param_2,Default);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d969060

FAudioMeterStyle * __thiscall
FAudioMeterStyle::SetFont(FAudioMeterStyle *this,char *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d9690b0

FAudioMeterStyle * __thiscall
FAudioMeterStyle::SetFont(FAudioMeterStyle *this,wchar_t *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d9692b0

FAudioMeterStyle * __thiscall FAudioMeterStyle::SetFontName(FAudioMeterStyle *this,FName *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,*(float *)&this->field_0x418,Default);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d969310

FAudioMeterStyle * __thiscall FAudioMeterStyle::SetFontName(FAudioMeterStyle *this,FString *param_1)

{
  FSlateFontInfo *pFVar1;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  local_88.OutlineSize = 0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar1 = FSlateFontInfo::FSlateFontInfo
                     (&local_68,param_1,*(float *)&this->field_0x418,Default,&local_88);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d9693a0

FAudioMeterStyle * __thiscall FAudioMeterStyle::SetFontName(FAudioMeterStyle *this,char *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,*(float *)&this->field_0x418,Default);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d969400

FAudioMeterStyle * __thiscall FAudioMeterStyle::SetFontName(FAudioMeterStyle *this,wchar_t *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,*(float *)&this->field_0x418,Default);
  FSlateFontInfo::operator=((FSlateFontInfo *)&this->field_0x3d0,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

