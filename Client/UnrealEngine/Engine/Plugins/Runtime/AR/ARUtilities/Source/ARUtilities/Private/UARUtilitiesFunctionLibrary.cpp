// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 14

// StaticClass @ 14cfc6320

UClass * __cdecl UARUtilitiesFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARUtilitiesFunctionLibrary",
               &Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUARUtilitiesFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARUtilitiesFunctionLibrary>,
               InternalVTableHelperCtorCaller<UARUtilitiesFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton;
}

// UARUtilitiesFunctionLibrary @ 14cfc7e30

UARUtilitiesFunctionLibrary * __thiscall
UARUtilitiesFunctionLibrary::UARUtilitiesFunctionLibrary
          (UARUtilitiesFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UARUtilitiesFunctionLibrary__6B_;
  return this;
}

// UARUtilitiesFunctionLibrary @ 14cfc7e60

UARUtilitiesFunctionLibrary * __thiscall
UARUtilitiesFunctionLibrary::UARUtilitiesFunctionLibrary
          (UARUtilitiesFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UARUtilitiesFunctionLibrary__6B_;
  return this;
}

// ~UARUtilitiesFunctionLibrary @ 14cfc8150

void __thiscall
UARUtilitiesFunctionLibrary::~UARUtilitiesFunctionLibrary(UARUtilitiesFunctionLibrary *this)

{
  *(undefined ***)this = &___7UARUtilitiesFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPassthroughCameraUVs @ 14cfc8e50

void __cdecl
UARUtilitiesFunctionLibrary::GetPassthroughCameraUVs
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  
  piVar1 = &param_1->ArrayNum;
  iVar9 = param_1->ArrayNum;
  if (iVar9 < 4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4 - iVar9,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  }
  else if (4 < iVar9) {
    iVar9 = iVar9 + -4;
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar9 == 0) goto LAB_14cfc8f56;
    pFVar8 = (param_1->AllocatorInstance).Data + 0x40;
    iVar7 = (*piVar1 - iVar9) + -4;
    if (iVar7 != 0) {
      memmove(pFVar8,pFVar8 + (longlong)iVar9 * 0x10,(longlong)iVar7 << 4);
    }
    *piVar1 = *piVar1 - iVar9;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
  }
LAB_14cfc8f56:
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  if ((*piVar1 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)pFVar8 = dVar2;
  *(double *)(pFVar8 + 8) = dVar3;
  dVar5 = __real_3ff0000000000000;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = __real_3ff0000000000000 - (param_2->field0_0x0)._s_0.Y;
  if ((*piVar1 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x10) = dVar2;
  *(double *)(pFVar8 + 0x18) = dVar3;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if ((*piVar1 < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x20) = dVar5 - dVar3;
  *(double *)(pFVar8 + 0x28) = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  if ((*piVar1 < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x30) = dVar5 - dVar2;
  *(double *)(pFVar8 + 0x38) = dVar5 - dVar3;
  return;
}

// GetPrivateStaticClass @ 14cfc9280

UClass * __cdecl UARUtilitiesFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"ARUtilitiesFunctionLibrary",
               &Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUARUtilitiesFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARUtilitiesFunctionLibrary>,
               InternalVTableHelperCtorCaller<UARUtilitiesFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.InnerSingleton;
}

// GetUVOffset @ 14cfc9470

TVector2<double> * __cdecl
UARUtilitiesFunctionLibrary::GetUVOffset
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.X / (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  dVar2 = dVar2 / (param_2->field0_0x0)._s_0.Y;
  if (dVar2 < dVar1) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (__real_3ff0000000000000 - dVar2 / dVar1) * __real_3fe0000000000000;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__real_3ff0000000000000 - dVar1 / dVar2) * __real_3fe0000000000000;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUARUtilitiesFunctionLibrary @ 14cfc9a40

void __cdecl UARUtilitiesFunctionLibrary::StaticRegisterNativesUARUtilitiesFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateCameraTextureParam @ 14cfc9e60

void __cdecl
UARUtilitiesFunctionLibrary::UpdateCameraTextureParam
          (UMaterialInstanceDynamic *param_1,UTexture *param_2,float param_3)

{
  longlong lVar1;
  FName FVar2;
  
  if ((param_1 != (UMaterialInstanceDynamic *)0x0) && (param_2 != (UTexture *)0x0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&ParamName,L"CameraTexture");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&ExternalParamName,L"ExternalCameraTexture");
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&ColorScaleParamName,L"ColorScale");
      _Init_thread_footer(&::_TSS2);
    }
    lVar1 = (**(code **)(param_2->_padding_ + 0x340))(param_2);
    FVar2 = ParamName;
    if (lVar1 == 0x1000) {
      FVar2 = ExternalParamName;
    }
    UMaterialInstanceDynamic::SetTextureParameterValue(param_1,FVar2,param_2);
    UMaterialInstanceDynamic::SetScalarParameterValue(param_1,ColorScaleParamName,param_3);
  }
  return;
}

// UpdateSceneDepthTexture @ 14cfc9ff0

void __cdecl
UARUtilitiesFunctionLibrary::UpdateSceneDepthTexture
          (UMaterialInstanceDynamic *param_1,UTexture *param_2,float param_3)

{
  longlong lVar1;
  
  if ((param_1 != (UMaterialInstanceDynamic *)0x0) && (param_2 != (UTexture *)0x0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&SceneDepthTextureParamName,L"SceneDepthTexture");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&DepthToMeterScaleParamName,L"DepthToMeterScale");
      _Init_thread_footer(&::_TSS1);
    }
    UMaterialInstanceDynamic::SetTextureParameterValue(param_1,SceneDepthTextureParamName,param_2);
    UMaterialInstanceDynamic::SetScalarParameterValue(param_1,DepthToMeterScaleParamName,param_3);
  }
  return;
}

// UpdateWorldToMeterScale @ 14cfca110

void __cdecl
UARUtilitiesFunctionLibrary::UpdateWorldToMeterScale
          (UMaterialInstanceDynamic *param_1,float param_2)

{
  if (param_1 != (UMaterialInstanceDynamic *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&WorldToMeterScaleParamName,L"WorldToMeterScale");
        _Init_thread_footer(&::_TSS0);
      }
    }
    UMaterialInstanceDynamic::SetScalarParameterValue(param_1,WorldToMeterScaleParamName,param_2);
  }
  return;
}

// execUpdateCameraTextureParam @ 14cfca6e0

void __cdecl
UARUtilitiesFunctionLibrary::execUpdateCameraTextureParam
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UTexture *pUVar3;
  UMaterialInstanceDynamic *this;
  longlong lVar4;
  FName FVar5;
  float local_res10 [4];
  UTexture *local_res20;
  UMaterialInstanceDynamic *local_38 [4];
  
  local_38[0] = (UMaterialInstanceDynamic *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_38[0];
  pUVar3 = local_res20;
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_38[0] != (UMaterialInstanceDynamic *)0x0) && (local_res20 != (UTexture *)0x0)) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar4 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&ParamName,L"CameraTexture");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (*(int *)(lVar4 + 0x9d4c) < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FName::FName(&ExternalParamName,L"ExternalCameraTexture");
        _Init_thread_footer(&::_TSS1);
      }
    }
    if (*(int *)(lVar4 + 0x9d4c) < ::_TSS2) {
      _Init_thread_header(&::_TSS2);
      if (::_TSS2 == -1) {
        ::FName::FName(&ColorScaleParamName,L"ColorScale");
        _Init_thread_footer(&::_TSS2);
      }
    }
    lVar4 = (**(code **)(pUVar3->_padding_ + 0x340))(pUVar3);
    FVar5 = ParamName;
    if (lVar4 == 0x1000) {
      FVar5 = ExternalParamName;
    }
    UMaterialInstanceDynamic::SetTextureParameterValue(this,FVar5,pUVar3);
    UMaterialInstanceDynamic::SetScalarParameterValue(this,ColorScaleParamName,fVar2);
  }
  return;
}

// execUpdateSceneDepthTexture @ 14cfca940

void __cdecl
UARUtilitiesFunctionLibrary::execUpdateSceneDepthTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  float fVar3;
  UTexture *pUVar4;
  UMaterialInstanceDynamic *this;
  float local_res10 [4];
  UTexture *local_res20;
  UMaterialInstanceDynamic *local_38 [4];
  
  local_38[0] = (UMaterialInstanceDynamic *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_38[0];
  pUVar4 = local_res20;
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_38[0] != (UMaterialInstanceDynamic *)0x0) && (local_res20 != (UTexture *)0x0)) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&SceneDepthTextureParamName,L"SceneDepthTexture");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (*(int *)(lVar2 + 0x9d4c) < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FName::FName(&DepthToMeterScaleParamName,L"DepthToMeterScale");
        _Init_thread_footer(&::_TSS1);
      }
    }
    UMaterialInstanceDynamic::SetTextureParameterValue(this,SceneDepthTextureParamName,pUVar4);
    UMaterialInstanceDynamic::SetScalarParameterValue(this,DepthToMeterScaleParamName,fVar3);
  }
  return;
}

// execUpdateWorldToMeterScale @ 14cfcab20

void __cdecl
UARUtilitiesFunctionLibrary::execUpdateWorldToMeterScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UMaterialInstanceDynamic *this;
  float local_res10 [4];
  UMaterialInstanceDynamic *local_res20;
  
  local_res20 = (UMaterialInstanceDynamic *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UMaterialInstanceDynamic *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&WorldToMeterScaleParamName,L"WorldToMeterScale");
        _Init_thread_footer(&::_TSS0);
      }
    }
    UMaterialInstanceDynamic::SetScalarParameterValue(this,WorldToMeterScaleParamName,fVar2);
  }
  return;
}

