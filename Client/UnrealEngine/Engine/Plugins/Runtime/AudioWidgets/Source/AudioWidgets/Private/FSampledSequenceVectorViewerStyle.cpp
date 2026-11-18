// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// StaticStruct @ 14d8918d0

UScriptStruct * __cdecl FSampledSequenceVectorViewerStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceVectorViewerStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FSampledSequenceVectorViewerStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle,
                         (UObject *)pUVar1,L"SampledSequenceVectorViewerStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSampledSequenceVectorViewerStyle.OuterSingleton;
}

// FSampledSequenceVectorViewerStyle @ 14d8b65c0

FSampledSequenceVectorViewerStyle * __thiscall
FSampledSequenceVectorViewerStyle::FSampledSequenceVectorViewerStyle
          (FSampledSequenceVectorViewerStyle *this)

{
  FLinearColor FVar1;
  TVector2<float>_u_0 local_res10 [3];
  FMargin local_c8;
  FSlateBrush local_b8;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FSampledSequenceVectorViewerStyle__6B_;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->BackgroundColor).ColorUseRule = UseColor_Specified;
  local_res10[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_c8.Left = 0.0;
  local_c8.Top = 0.0;
  local_c8.Right = 0.0;
  local_c8.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&local_b8,Image,(FName)0x0,&local_c8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10[0]._s_0,&FLinearColor::White,(UObject *)0x0
             ,false);
  local_b8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,&local_b8);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FVar1 = FLinearColor::White;
  this->LineThickness = 1.0;
  (this->LineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// GetResources @ 14d934570

void __thiscall
FSampledSequenceVectorViewerStyle::GetResources
          (FSampledSequenceVectorViewerStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

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

// GetTypeName @ 14d937590

FName __thiscall
FSampledSequenceVectorViewerStyle::GetTypeName(FSampledSequenceVectorViewerStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

