// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// Call @ 14df29290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l20::<lambda_2>,void,UObject_const_*>
::Call(void *param_1,UObject **param_2)

{
  double *pdVar1;
  float fVar2;
  
  pdVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)param_1 + 8),*param_2,0);
  fVar2 = (float)*pdVar1;
  if (__real_3f800000 <= (float)*pdVar1) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(*(longlong *)param_1 + 0x58) = fVar2;
  return;
}

// Call @ 14df292e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l24::<lambda_3>,void,UObject_const_*>
::Call(void *param_1,UObject **param_2)

{
  double *pdVar1;
  float fVar2;
  
  pdVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)param_1 + 8),*param_2,0);
  fVar2 = (float)*pdVar1;
  if (__real_3f800000 <= (float)*pdVar1) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(*(longlong *)param_1 + 0x5c) = fVar2;
  return;
}

// Call @ 14df29330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l28::<lambda_4>,void,UObject_const_*>
::Call(void *param_1,UObject **param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)param_1 + 8),*param_2,0);
  uVar3 = puVar4[1];
  uVar1 = puVar4[2];
  lVar2 = *(longlong *)param_1;
  *(undefined8 *)(lVar2 + 0x28) = *puVar4;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  return;
}

// Call @ 14df29370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimNode_IKRig::InitializeProperties'::__l32::<lambda_5>,void,UObject_const_*>
::Call(void *param_1,UObject **param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)param_1 + 8),*param_2,0);
  uVar3 = puVar4[1];
  uVar1 = puVar4[2];
  lVar2 = *(longlong *)param_1;
  *(undefined8 *)(lVar2 + 0x40) = *puVar4;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(undefined8 *)(lVar2 + 0x50) = uVar1;
  return;
}

