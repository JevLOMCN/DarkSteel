// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 6

// TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FColor>_> @ 14ddbba60

TUniqueFunction<void___cdecl(FImagePixelData_*)> * __thiscall
TUniqueFunction<void___cdecl(FImagePixelData_*)>::
TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FColor>_>
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *this,TAsyncCropImage<FColor> *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  puVar1 = FMemory::Malloc(0x28,8);
  *(undefined8 **)&this->field_0x28 = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_U__TAsyncCropImage_UFColor_____00_00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = param_1->ParentWriteTask;
  puVar1[2] = (param_1->OutCroppedImage).Ptr;
  (param_1->OutCroppedImage).Ptr = (FImagePixelData *)0x0;
  *(TIntPoint<int>_u_0 *)(puVar1 + 3) = (param_1->CropRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar1 + 4) = (param_1->CropRect).field0_0x0._s_0.Max.field0_0x0;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<TAsyncCropImage<FColor>,void,FImagePixelData_*>::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FLinearColor>_> @ 14ddbbaf0

TUniqueFunction<void___cdecl(FImagePixelData_*)> * __thiscall
TUniqueFunction<void___cdecl(FImagePixelData_*)>::
TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FLinearColor>_>
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *this,
          TAsyncCropImage<FLinearColor> *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  puVar1 = FMemory::Malloc(0x28,8);
  *(undefined8 **)&this->field_0x28 = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_U__TAsyncCropImage_UFLinearColor_____00_00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = param_1->ParentWriteTask;
  puVar1[2] = (param_1->OutCroppedImage).Ptr;
  (param_1->OutCroppedImage).Ptr = (FImagePixelData *)0x0;
  *(TIntPoint<int>_u_0 *)(puVar1 + 3) = (param_1->CropRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar1 + 4) = (param_1->CropRect).field0_0x0._s_0.Max.field0_0x0;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<TAsyncCropImage<FLinearColor>,void,FImagePixelData_*>::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FFloat16Color>_> @ 14ddbbb80

TUniqueFunction<void___cdecl(FImagePixelData_*)> * __thiscall
TUniqueFunction<void___cdecl(FImagePixelData_*)>::
TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FFloat16Color>_>
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *this,
          TAsyncCropImage<FFloat16Color> *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  puVar1 = FMemory::Malloc(0x28,8);
  *(undefined8 **)&this->field_0x28 = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_U__TAsyncCropImage_VFFloat16Color_____00_00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = param_1->ParentWriteTask;
  puVar1[2] = (param_1->OutCroppedImage).Ptr;
  (param_1->OutCroppedImage).Ptr = (FImagePixelData *)0x0;
  *(TIntPoint<int>_u_0 *)(puVar1 + 3) = (param_1->CropRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar1 + 4) = (param_1->CropRect).field0_0x0._s_0.Max.field0_0x0;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<TAsyncCropImage<FFloat16Color>,void,FImagePixelData_*>::Call;
  }
  return this;
}

// ~TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)> @ 14ddca750

void __thiscall
TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>::
~TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          (TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
           *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ~TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> @ 14ddca780

void __thiscall
TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>::
~TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ~TUniqueFunction<void___cdecl(FImagePixelData_*)> @ 14ddca7b0

void __thiscall
TUniqueFunction<void___cdecl(FImagePixelData_*)>::~TUniqueFunction<void___cdecl(FImagePixelData_*)>
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

