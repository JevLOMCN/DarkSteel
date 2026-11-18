// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// Call @ 142481c30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShapedGlyphSequence::GetGlyphAtOffset'::__l2::<lambda_1>,bool,FShapedGlyphEntry_const_&,int>
::Call(void *param_1,FShapedGlyphEntry *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = FShapedGlyphSequence::HasFoundGlyphAtOffset
                    (*(FShapedGlyphSequence **)param_1,*(FSlateFontCache **)((longlong)param_1 + 8),
                     **(int **)((longlong)param_1 + 0x10),param_2,*param_3,
                     *(int **)((longlong)param_1 + 0x18),
                     *(FShapedGlyphEntry ***)((longlong)param_1 + 0x20));
  if (bVar1) {
    return false;
  }
  **(undefined8 **)((longlong)param_1 + 0x28) = param_2;
  return true;
}

// Call @ 142481ca0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShapedGlyphSequence::GetMeasuredWidth'::__l2::<lambda_1>,bool,FShapedGlyphEntry_const_&,int>
::Call(void *param_1,FShapedGlyphEntry *param_2,int *param_3)

{
  **(int **)param_1 = **(int **)param_1 + (int)param_2->XAdvance;
  return true;
}

// Call @ 142481cc0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShapedGlyphSequence::GetSubSequence'::__l2::<lambda_1>,bool,FShapedGlyphEntry_const_&,int>
::Call(void *param_1,FShapedGlyphEntry *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `FShapedGlyphSequence::GetSubSequence'::__l2::<lambda_1>::operator()
                    (param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 142481cd0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateFontCache::UpdateCache'::__l5::<lambda_1>,void,FSlateSdfGenerator::FRequestDescriptor,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
::Call(void *param_1,FRequestDescriptor *param_2,
      TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_48;
  FRequestDescriptor local_38;
  
  local_48.AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = param_3->ArrayNum;
  local_48.ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  local_38.FontFace.Object = (param_2->FontFace).Object;
  (param_2->FontFace).Object = (FFreeTypeFace *)0x0;
  local_38.FontFace.WeakReferenceCount.ReferenceController =
       (param_2->FontFace).WeakReferenceCount.ReferenceController;
  (param_2->FontFace).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.EmOuterSpread = param_2->EmOuterSpread;
  local_38.EmInnerSpread = param_2->EmInnerSpread;
  local_38.GlyphIndex = param_2->GlyphIndex;
  local_38.SdfType = param_2->SdfType;
  local_38.Ppem = param_2->Ppem;
  `FSlateFontCache::UpdateCache'::__l5::<lambda_1>::operator()(param_1,&local_38,&local_48);
  return;
}

// Call @ 142503870

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<float_(__cdecl*)(FSlateRect_const_&),float,FSlateRect_const_&>::Call
          (void *param_1,FSlateRect *param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142503876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)param_1)(param_2);
  return fVar1;
}

// Call @ 142503880

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,bool,TSharedPtr<SWidget,1>_>
::Call(void *param_1,TSharedPtr<SWidget,1> *param_2)

{
  bool bVar1;
  TSharedPtr<SWidget,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (SWidget *)0x0;
  bVar1 = `FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>::operator()
                    (param_1,&local_18);
  return bVar1;
}

// Call @ 1425038c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateVectorGraphicsCache::UpdateCache'::__l5::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FSlateVectorGraphicsCache::UpdateCache'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142568670

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateIconFinder::FindIcon'::__l2::<lambda_1>,bool,ISlateStyle_const_&>::Call
          (void *param_1,ISlateStyle *param_2)

{
  FName FVar1;
  longlong lVar2;
  FName *pFVar3;
  FSlateIcon *pFVar4;
  FSlateIcon FStack_28;
  
  lVar2 = (**(code **)((longlong)*param_2 + 0x58))(param_2,**(undefined8 **)param_1,0,0);
  if (lVar2 != 0) {
    FVar1 = **(FName **)param_1;
    pFVar3 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    pFVar4 = FSlateIcon::FSlateIcon(&FStack_28,*pFVar3,FVar1,(FName)0x0,(FName)0x0);
    pFVar3 = *(FName **)((longlong)param_1 + 8);
    FVar1 = pFVar4->StyleName;
    *pFVar3 = pFVar4->StyleSetName;
    pFVar3[1] = FVar1;
    FVar1 = pFVar4->StatusOverlayStyleName;
    pFVar3[2] = pFVar4->SmallStyleName;
    pFVar3[3] = FVar1;
    return false;
  }
  return true;
}

