// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 14252ef90

UScriptStruct * __cdecl FTableViewStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTableViewStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FTableViewStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTableViewStyle,(UObject *)pUVar1,
                         L"TableViewStyle");
  }
  return Z_Registration_Info_UScriptStruct_FTableViewStyle.OuterSingleton;
}

// FTableViewStyle @ 142548480

FTableViewStyle * __thiscall FTableViewStyle::FTableViewStyle(FTableViewStyle *this)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8 [4];
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FTableViewStyle__6B_;
  local_res8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,
                      (FDeprecateVector2DParameter *)&local_res8[0]._s_0);
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return this;
}

// ~FTableViewStyle @ 14254c490

void __thiscall FTableViewStyle::~FTableViewStyle(FTableViewStyle *this)

{
  this->_padding_ = (longlong)&___7FTableViewStyle__6B_;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 1425803d0

FTableViewStyle * __cdecl FTableViewStyle::GetDefault(void)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8 [4];
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FTableViewStyle__6B_;
      local_res8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pFVar1 = (FSlateBrush *)
               FSlateNoResource::FSlateNoResource
                         ((FSlateNoResource *)local_b8,
                          (FDeprecateVector2DParameter *)&local_res8[0]._s_0);
      FSlateBrush::FSlateBrush(&::Default.BackgroundBrush,pFVar1);
      local_b8[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
      atexit(`FTableViewStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 1425877d0

void __thiscall
FTableViewStyle::GetResources
          (FTableViewStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18 [2];
  
  local_18[0] = &this->BackgroundBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetTypeName @ 142589db0

FName __thiscall FTableViewStyle::GetTypeName(FTableViewStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// UnlinkColors @ 1425ab100

void __thiscall FTableViewStyle::UnlinkColors(FTableViewStyle *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *this_00;
  
  if ((this->BackgroundBrush).TintColor.ColorUseRule == UseColor_ColorTable) {
    this_00 = USlateThemeManager::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    puVar1 = (undefined8 *)
             (&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)(this->BackgroundBrush).TintColor.ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    (this->BackgroundBrush).TintColor.ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->BackgroundBrush).TintColor.SpecifiedColor.field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->BackgroundBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
         uVar3;
  }
  return;
}

