// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 47

// StaticClass @ 14de3a800

UClass * __cdecl UKawaiiPhysicsLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsLibrary",
               &Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton,
               StaticRegisterNativesUKawaiiPhysicsLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKawaiiPhysicsLibrary>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton;
}

// UKawaiiPhysicsLibrary @ 14de3d9a0

UKawaiiPhysicsLibrary * __thiscall
UKawaiiPhysicsLibrary::UKawaiiPhysicsLibrary(UKawaiiPhysicsLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKawaiiPhysicsLibrary__6B_;
  return this;
}

// UKawaiiPhysicsLibrary @ 14de3d9d0

UKawaiiPhysicsLibrary * __thiscall
UKawaiiPhysicsLibrary::UKawaiiPhysicsLibrary
          (UKawaiiPhysicsLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKawaiiPhysicsLibrary__6B_;
  return this;
}

// ~UKawaiiPhysicsLibrary @ 14de3de10

void __thiscall UKawaiiPhysicsLibrary::~UKawaiiPhysicsLibrary(UKawaiiPhysicsLibrary *this)

{
  *(undefined ***)this = &___7UKawaiiPhysicsLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToKawaiiPhysics @ 14de42ce0

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::ConvertToKawaiiPhysics
          (FKawaiiPhysicsReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_KawaiiPhysics();
      Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics,(UObject *)pUVar3,
                           L"AnimNode_KawaiiPhysics");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14de42d6b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14de42d73;
    }
  }
LAB_14de42d6b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_14de42d73:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetAllowWorldCollision @ 14de43470

bool __cdecl UKawaiiPhysicsLibrary::GetAllowWorldCollision(FKawaiiPhysicsReference *param_1)

{
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetAllowWorldCollision'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetAllowWorldCollision",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return (bool)local_res10[0];
}

// GetDummyBoneLength @ 14de43660

float __cdecl UKawaiiPhysicsLibrary::GetDummyBoneLength(FKawaiiPhysicsReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetDummyBoneLength'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetDummyBoneLength",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return local_res10[0];
}

// GetEnableWind @ 14de436b0

bool __cdecl UKawaiiPhysicsLibrary::GetEnableWind(FKawaiiPhysicsReference *param_1)

{
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetEnableWind'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetEnableWind",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return (bool)local_res10[0];
}

// GetGravity @ 14de43700

TVector<double> * __cdecl
UKawaiiPhysicsLibrary::GetGravity
          (TVector<double> *__return_storage_ptr__,FKawaiiPhysicsReference *param_1)

{
  TVector<double> *local_res8 [4];
  code *local_18;
  TVector<double> **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetGravity'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res8[0] = __return_storage_ptr__;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetGravity",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetNeedWarmUp @ 14de43750

bool __cdecl UKawaiiPhysicsLibrary::GetNeedWarmUp(FKawaiiPhysicsReference *param_1)

{
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetNeedWarmUp'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetNeedWarmup",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return (bool)local_res10[0];
}

// GetPhysicsSettings @ 14de437a0

FKawaiiPhysicsSettings * __cdecl
UKawaiiPhysicsLibrary::GetPhysicsSettings
          (FKawaiiPhysicsSettings *__return_storage_ptr__,FKawaiiPhysicsReference *param_1)

{
  FKawaiiPhysicsSettings *local_res8 [4];
  code *local_18;
  FKawaiiPhysicsSettings **local_10;
  
  __return_storage_ptr__->Damping = 0.1;
  __return_storage_ptr__->WorldDampingLocation = 0.8;
  __return_storage_ptr__->WorldDampingRotation = 0.8;
  __return_storage_ptr__->Stiffness = 0.05;
  __return_storage_ptr__->Radius = 3.0;
  __return_storage_ptr__->LimitAngle = 0.0;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetPhysicsSettings'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res8[0] = __return_storage_ptr__;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetPhysicsSettings",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14de438d0

UClass * __cdecl UKawaiiPhysicsLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsLibrary",
               &Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton,
               StaticRegisterNativesUKawaiiPhysicsLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKawaiiPhysicsLibrary>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton;
}

// GetTeleportDistanceThreshold @ 14de43a50

float __cdecl UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold(FKawaiiPhysicsReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetTeleportDistanceThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return local_res10[0];
}

// GetTeleportRotationThreshold @ 14de43aa0

float __cdecl UKawaiiPhysicsLibrary::GetTeleportRotationThreshold(FKawaiiPhysicsReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetTeleportRotationThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetTeleportRotationThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return local_res10[0];
}

// GetWindScale @ 14de43af0

float __cdecl UKawaiiPhysicsLibrary::GetWindScale(FKawaiiPhysicsReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetWindScale'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"GetWindScale",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  return local_res10[0];
}

// ResetDynamics @ 14de45090

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::ResetDynamics
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::ResetDynamics'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"ResetDynamics",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetAllowWorldCollision @ 14de450f0

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetAllowWorldCollision
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          bool param_2)

{
  undefined8 uVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetAllowWorldCollision'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetAllowWorldCollision",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetDummyBoneLength @ 14de45150

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetDummyBoneLength
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetDummyBoneLength'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetDummyBoneLength",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetEnableWind @ 14de451b0

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetEnableWind
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          bool param_2)

{
  undefined8 uVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetEnableWind'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetEnableWind",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetGravity @ 14de45210

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetGravity
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          TVector<double> *param_2)

{
  undefined8 uVar1;
  code *local_38;
  undefined8 *local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = (param_2->field0_0x0)._s_0.X;
  dStack_20 = (param_2->field0_0x0)._s_0.Y;
  local_30 = &local_28;
  local_18 = (param_2->field0_0x0)._s_0.Z;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetGravity'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetGravity",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_38);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetNeedWarmUp @ 14de45280

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetNeedWarmUp
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          bool param_2)

{
  undefined8 uVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetNeedWarmUp'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetNeedWarmup",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetPhysicsSettings @ 14de452e0

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetPhysicsSettings
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          FKawaiiPhysicsSettings *param_2)

{
  undefined8 uVar1;
  code *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28._0_4_ = param_2->Damping;
  local_28._4_4_ = param_2->WorldDampingLocation;
  uStack_20._0_4_ = param_2->WorldDampingRotation;
  uStack_20._4_4_ = param_2->Stiffness;
  local_30 = &local_28;
  local_18._0_4_ = param_2->Radius;
  local_18._4_4_ = param_2->LimitAngle;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetPhysicsSettings'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetPhysicsSettings",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_38);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetTeleportDistanceThreshold @ 14de45350

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetTeleportDistanceThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetTeleportRotationThreshold @ 14de453b0

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetTeleportRotationThreshold
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetTeleportRotationThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetTeleportRotationThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetWindScale @ 14de45410

FKawaiiPhysicsReference * __cdecl
UKawaiiPhysicsLibrary::SetWindScale
          (FKawaiiPhysicsReference *__return_storage_ptr__,FKawaiiPhysicsReference *param_1,
          float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetWindScale'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            ((FAnimNodeReference *)param_1,L"SetWindScale",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUKawaiiPhysicsLibrary @ 14de467b0

void __cdecl UKawaiiPhysicsLibrary::StaticRegisterNativesUKawaiiPhysicsLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToKawaiiPhysics @ 14de48e40

void __cdecl
UKawaiiPhysicsLibrary::execConvertToKawaiiPhysics(UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FKawaiiPhysicsReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FKawaiiPhysicsReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Failed;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_28;
  if (pFVar1 != (FAnimNodeReference *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EAnimNodeReferenceConversionResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = ConvertToKawaiiPhysics(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToKawaiiPhysicsPure @ 14de48f50

void __cdecl
UKawaiiPhysicsLibrary::execConvertToKawaiiPhysicsPure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  uchar uVar6;
  UPackage *pUVar7;
  undefined8 uVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 uVar11;
  uchar *puVar12;
  uchar local_res10 [8];
  uchar local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar8 = 0;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar9 = local_38;
  if (puVar10 != (uchar *)0x0) {
    puVar9 = puVar10;
  }
  local_28 = 0;
  uStack_20 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = (uchar *)&local_28;
  if (puVar10 != (uchar *)0x0) {
    puVar12 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(puVar9 + 8);
  if (lVar4 != 0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_KawaiiPhysics();
      Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics,(UObject *)pUVar7,
                           L"AnimNode_KawaiiPhysics");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14de490da;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14de490df;
    }
  }
LAB_14de490da:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14de490df:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetAllowWorldCollision @ 14de49110

void __cdecl
UKawaiiPhysicsLibrary::execGetAllowWorldCollision(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined1 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetAllowWorldCollision'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetAllowWorldCollision",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  *(undefined1 *)param_3 = local_res10[0];
  return;
}

// execGetDummyBoneLength @ 14de491e0

void __cdecl
UKawaiiPhysicsLibrary::execGetDummyBoneLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetDummyBoneLength'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetDummyBoneLength",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetEnableWind @ 14de492b0

void __cdecl
UKawaiiPhysicsLibrary::execGetEnableWind(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined1 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetEnableWind'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetEnableWind",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  *(undefined1 *)param_3 = local_res10[0];
  return;
}

// execGetGravity @ 14de49380

void __cdecl UKawaiiPhysicsLibrary::execGetGravity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined8 *local_res10;
  FAnimNodeReference local_48;
  code *local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.AnimNode = (FAnimNode_Base *)0x0;
  local_48.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res10 = &local_28;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetGravity'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetGravity",(TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_38);
  *(undefined8 *)param_3 = local_28;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_20;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execGetNeedWarmUp @ 14de49460

void __cdecl
UKawaiiPhysicsLibrary::execGetNeedWarmUp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined1 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetNeedWarmUp'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetNeedWarmup",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  *(undefined1 *)param_3 = local_res10[0];
  return;
}

// execGetPhysicsSettings @ 14de49530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UKawaiiPhysicsLibrary::execGetPhysicsSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined8 *local_res10;
  FAnimNodeReference local_48;
  code *local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.AnimNode = (FAnimNode_Base *)0x0;
  local_48.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_18 = 0x40400000;
  this = &local_48;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_28 = ___xmm_3d4ccccd3f4ccccd3f4ccccd3dcccccd;
  uStack_20 = _UNK_152d4c9d8;
  local_res10 = &local_28;
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetPhysicsSettings'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetPhysicsSettings",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_38);
  *(undefined8 *)param_3 = local_28;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_20;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execGetTeleportDistanceThreshold @ 14de49630

void __cdecl
UKawaiiPhysicsLibrary::execGetTeleportDistanceThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetTeleportDistanceThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetTeleportRotationThreshold @ 14de49700

void __cdecl
UKawaiiPhysicsLibrary::execGetTeleportRotationThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetTeleportRotationThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetTeleportRotationThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetWindScale @ 14de497d0

void __cdecl UKawaiiPhysicsLibrary::execGetWindScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetWindScale'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"GetWindScale",(TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18
            );
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execResetDynamics @ 14de498a0

void __cdecl
UKawaiiPhysicsLibrary::execResetDynamics(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  FAnimNodeReference local_28;
  code *local_18;
  undefined1 *local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::ResetDynamics'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"ResetDynamics",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_18);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetAllowWorldCollision @ 14de49970

void __cdecl
UKawaiiPhysicsLibrary::execSetAllowWorldCollision(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  int local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_20 = local_res10;
  local_res10[0] = local_res18[0] != 0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetAllowWorldCollision'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetAllowWorldCollision",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetDummyBoneLength @ 14de49a80

void __cdecl
UKawaiiPhysicsLibrary::execSetDummyBoneLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetDummyBoneLength'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetDummyBoneLength",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetEnableWind @ 14de49b90

void __cdecl
UKawaiiPhysicsLibrary::execSetEnableWind(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  int local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_20 = local_res10;
  local_res10[0] = local_res18[0] != 0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetEnableWind'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetEnableWind",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetGravity @ 14de49ca0

void __cdecl UKawaiiPhysicsLibrary::execSetGravity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  FAnimNodeReference local_58;
  code *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.AnimNode = (FAnimNode_Base *)0x0;
  local_58.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = &local_58;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_10 = local_28;
  local_40 = &local_20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetGravity'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_38;
  uStack_18 = uStack_30;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetGravity",(TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_48);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetNeedWarmUp @ 14de49dd0

void __cdecl
UKawaiiPhysicsLibrary::execSetNeedWarmUp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  int local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_20 = local_res10;
  local_res10[0] = local_res18[0] != 0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetNeedWarmUp'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetNeedWarmup",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetPhysicsSettings @ 14de49ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UKawaiiPhysicsLibrary::execSetPhysicsSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  FAnimNodeReference *this;
  FAnimNodeReference local_58;
  code *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.AnimNode = (FAnimNode_Base *)0x0;
  local_58.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_38 = ___xmm_3d4ccccd3f4ccccd3f4ccccd3dcccccd;
  uStack_30 = _UNK_152d4c9d8;
  this = &local_58;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_28 = 0x40400000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  puVar3 = (uchar *)&local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = *(undefined8 *)puVar3;
  uStack_18 = *(undefined8 *)(puVar3 + 8);
  local_40 = &local_20;
  local_10 = *(undefined8 *)(puVar3 + 0x10);
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetPhysicsSettings'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetPhysicsSettings",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_48);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetTeleportDistanceThreshold @ 14de4a030

void __cdecl
UKawaiiPhysicsLibrary::execSetTeleportDistanceThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetTeleportDistanceThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetTeleportRotationThreshold @ 14de4a140

void __cdecl
UKawaiiPhysicsLibrary::execSetTeleportRotationThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetTeleportRotationThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetTeleportRotationThreshold",
             (TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetWindScale @ 14de4a250

void __cdecl UKawaiiPhysicsLibrary::execSetWindScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetWindScale'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_KawaiiPhysics>
            (this,L"SetWindScale",(TFunctionRef<void___cdecl(FAnimNode_KawaiiPhysics_&)> *)&local_28
            );
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

