// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbfd3e0

UClass * __cdecl URevolveToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URevolveToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RevolveToolProperties",
               &Z_Registration_Info_UClass_URevolveToolProperties.InnerSingleton,
               StaticRegisterNativesURevolveToolProperties,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URevolveToolProperties>,
               InternalVTableHelperCtorCaller<URevolveToolProperties>,local_res8,
               URevolveProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URevolveToolProperties.InnerSingleton;
}

// URevolveToolProperties @ 14cc201a0

URevolveToolProperties * __thiscall
URevolveToolProperties::URevolveToolProperties(URevolveToolProperties *this,FVTableHelper *param_1)

{
  URevolveProperties::URevolveProperties((URevolveProperties *)this,param_1);
  this->CapFillMode = Delaunay;
  this->bClosePathToAxis = true;
  this->bEnableSnapping = true;
  this->bAllowedToEditDrawPlane = true;
  this->_padding_ = (longlong)&___7URevolveToolProperties__6B_;
  (this->DrawPlaneOrientation).Pitch = 90.0;
  (this->DrawPlaneOrigin).field0_0x0._s_0.X = 0.0;
  (this->DrawPlaneOrigin).field0_0x0._s_0.Y = 0.0;
  (this->DrawPlaneOrigin).field0_0x0._s_0.Z = 0.0;
  (this->DrawPlaneOrientation).Yaw = 0.0;
  (this->DrawPlaneOrientation).Roll = 0.0;
  return this;
}

// URevolveToolProperties @ 14cc20210

URevolveToolProperties * __thiscall
URevolveToolProperties::URevolveToolProperties(URevolveToolProperties *this)

{
  int iVar1;
  FObjectInitializer *pFVar2;
  code *local_38 [2];
  undefined **local_28;
  URevolveToolProperties *local_20;
  undefined8 local_10;
  
  pFVar2 = FObjectInitializer::Get();
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,pFVar2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x18;
  this->_padding_ = 0;
  this->_padding_ = 0x3fb999999999999a;
  this->_padding_ = (longlong)&___7URevolveProperties__6B_;
  this->_padding_ = 0x3fb999999999999a;
  this->_padding_ = 0x4076800000000000;
  this->_padding_ = 0x4076800000000000;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0x402e000000000000;
  this->_padding_ = 0x3f847ae147ae147b;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___0URevolveProperties__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`URevolveProperties::URevolveProperties'::__l2::<lambda_1>,void,double_const_&>
                ::Call;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)&this->_padding_ = 0x100;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined2 *)&this->_padding_ = 0x100;
  local_10 = 0;
  local_20 = this;
  iVar1 = FWatchablePropertySet::WatchProperty<double>
                    ((FWatchablePropertySet *)&this->_padding_,(double *)&this->_padding_,
                     (TFunction<void___cdecl(double_const_&)> *)local_38);
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_2>__1___0URevolveProperties__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`URevolveProperties::URevolveProperties'::__l2::<lambda_2>,void,double_const_&>
                ::Call;
  local_20 = this;
  iVar1 = FWatchablePropertySet::WatchProperty<double>
                    ((FWatchablePropertySet *)&this->_padding_,(double *)&this->_padding_,
                     (TFunction<void___cdecl(double_const_&)> *)local_38);
  *(int *)&this->_padding_ = iVar1;
  this->_padding_ = (longlong)&___7URevolveToolProperties__6B_;
  (this->DrawPlaneOrientation).Pitch = 90.0;
  (this->DrawPlaneOrigin).field0_0x0._s_0.X = 0.0;
  (this->DrawPlaneOrigin).field0_0x0._s_0.Y = 0.0;
  (this->DrawPlaneOrigin).field0_0x0._s_0.Z = 0.0;
  (this->DrawPlaneOrientation).Yaw = 0.0;
  (this->DrawPlaneOrientation).Roll = 0.0;
  this->CapFillMode = Delaunay;
  this->bClosePathToAxis = true;
  this->bEnableSnapping = true;
  this->bAllowedToEditDrawPlane = true;
  return this;
}

// ~URevolveToolProperties @ 14cc23410

void __thiscall URevolveToolProperties::~URevolveToolProperties(URevolveToolProperties *this)

{
  this->_padding_ = (longlong)&___7URevolveToolProperties__6B_;
  URevolveProperties::~URevolveProperties((URevolveProperties *)this);
  return;
}

// GetCapFillMode @ 14cc5b290

ERevolvePropertiesCapFillMode __thiscall
URevolveToolProperties::GetCapFillMode(URevolveToolProperties *this)

{
  return this->CapFillMode;
}

// GetPrivateStaticClass @ 14cc5d8a0

UClass * __cdecl URevolveToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URevolveToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RevolveToolProperties",
               &Z_Registration_Info_UClass_URevolveToolProperties.InnerSingleton,
               StaticRegisterNativesURevolveToolProperties,0x160,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URevolveToolProperties>,
               InternalVTableHelperCtorCaller<URevolveToolProperties>,local_res8,
               URevolveProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URevolveToolProperties.InnerSingleton;
}

// StaticRegisterNativesURevolveToolProperties @ 14cc826b0

void __cdecl URevolveToolProperties::StaticRegisterNativesURevolveToolProperties(void)

{
  return;
}

