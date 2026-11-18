// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 16

// StaticClass @ 14d576e80

UClass * __cdecl UCameraRigParameterInteropLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigParameterInteropLibrary",
               &Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton,
               StaticRegisterNativesUCameraRigParameterInteropLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigParameterInteropLibrary>,
               InternalVTableHelperCtorCaller<UCameraRigParameterInteropLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton;
}

// UCameraRigParameterInteropLibrary @ 14d58f660

UCameraRigParameterInteropLibrary * __thiscall
UCameraRigParameterInteropLibrary::UCameraRigParameterInteropLibrary
          (UCameraRigParameterInteropLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCameraRigParameterInteropLibrary__6B_;
  return this;
}

// UCameraRigParameterInteropLibrary @ 14d58f690

UCameraRigParameterInteropLibrary * __thiscall
UCameraRigParameterInteropLibrary::UCameraRigParameterInteropLibrary
          (UCameraRigParameterInteropLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCameraRigParameterInteropLibrary__6B_;
  return this;
}

// ~UCameraRigParameterInteropLibrary @ 14d591c30

void __thiscall
UCameraRigParameterInteropLibrary::~UCameraRigParameterInteropLibrary
          (UCameraRigParameterInteropLibrary *this)

{
  *(undefined ***)this = &___7UCameraRigParameterInteropLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a9780

UClass * __cdecl UCameraRigParameterInteropLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigParameterInteropLibrary",
               &Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton,
               StaticRegisterNativesUCameraRigParameterInteropLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigParameterInteropLibrary>,
               InternalVTableHelperCtorCaller<UCameraRigParameterInteropLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton;
}

// MakeLiteralLinearColor @ 14d5b5ff0

FLinearColor * __cdecl
UCameraRigParameterInteropLibrary::MakeLiteralLinearColor
          (FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// MakeLiteralRotator @ 14d5b6000

TRotator<double> * __cdecl
UCameraRigParameterInteropLibrary::MakeLiteralRotator
          (TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_1->Yaw;
  dVar1 = param_1->Roll;
  __return_storage_ptr__->Pitch = param_1->Pitch;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// MakeLiteralVector2D @ 14d5b6020

TVector2<double> * __cdecl
UCameraRigParameterInteropLibrary::MakeLiteralVector2D
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// MakeLiteralVector3f @ 14d5b6030

TVector<float> * __cdecl
UCameraRigParameterInteropLibrary::MakeLiteralVector3f
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// MakeLiteralVector @ 14d5b6050

TVector<double> * __cdecl
UCameraRigParameterInteropLibrary::MakeLiteralVector
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUCameraRigParameterInteropLibrary @ 14d5d0d80

void __cdecl
UCameraRigParameterInteropLibrary::StaticRegisterNativesUCameraRigParameterInteropLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UCameraRigParameterInteropLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMakeLiteralLinearColor @ 14d5dc160

void __cdecl
UCameraRigParameterInteropLibrary::execMakeLiteralLinearColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = local_18;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_10;
  return;
}

// execMakeLiteralRotator @ 14d5dc1e0

void __cdecl
UCameraRigParameterInteropLibrary::execMakeLiteralRotator
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = local_28;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_20;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execMakeLiteralVector2D @ 14d5dc270

void __cdecl
UCameraRigParameterInteropLibrary::execMakeLiteralVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = local_18;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_10;
  return;
}

// execMakeLiteralVector3f @ 14d5dc2f0

void __cdecl
UCameraRigParameterInteropLibrary::execMakeLiteralVector3f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = local_18;
  *(undefined4 *)((longlong)param_3 + 8) = local_10;
  return;
}

// execMakeLiteralVector @ 14d5dc370

void __cdecl
UCameraRigParameterInteropLibrary::execMakeLiteralVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = local_28;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_20;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_18;
  return;
}

