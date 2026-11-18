// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149855170

UClass * __cdecl UPCGSurfaceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSurfaceData",
               &Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton,
               StaticRegisterNativesUPCGSurfaceData,0x1b0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGSurfaceData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton;
}

// UPCGSurfaceData @ 14988f3f0

UPCGSurfaceData * __thiscall
UPCGSurfaceData::UPCGSurfaceData(UPCGSurfaceData *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->LocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).IsValid = '\0';
  (this->LocalBounds).Pad[0] = '\0';
  (this->LocalBounds).Pad[1] = '\0';
  (this->LocalBounds).Pad[2] = '\0';
  (this->LocalBounds).Pad[3] = '\0';
  (this->LocalBounds).Pad[4] = '\0';
  (this->LocalBounds).Pad[5] = '\0';
  (this->LocalBounds).Pad[6] = '\0';
  return this;
}

// UPCGSurfaceData @ 14988f4c0

UPCGSurfaceData * __thiscall
UPCGSurfaceData::UPCGSurfaceData(UPCGSurfaceData *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->LocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).IsValid = '\0';
  (this->LocalBounds).Pad[0] = '\0';
  (this->LocalBounds).Pad[1] = '\0';
  (this->LocalBounds).Pad[2] = '\0';
  (this->LocalBounds).Pad[3] = '\0';
  (this->LocalBounds).Pad[4] = '\0';
  (this->LocalBounds).Pad[5] = '\0';
  (this->LocalBounds).Pad[6] = '\0';
  return this;
}

// ~UPCGSurfaceData @ 149891ba0

void __thiscall UPCGSurfaceData::~UPCGSurfaceData(UPCGSurfaceData *this)

{
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// CopyBaseSurfaceData @ 1498a3400

void __thiscall UPCGSurfaceData::CopyBaseSurfaceData(UPCGSurfaceData *this,UPCGSurfaceData *param_1)

{
  double dVar1;
  
  dVar1 = (this->Transform).Rotation.XY.m128d_f64[1];
  (param_1->Transform).Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  (param_1->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Rotation.ZW.m128d_f64[1];
  (param_1->Transform).Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
  (param_1->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Translation.XY.m128d_f64[1];
  (param_1->Transform).Translation.XY.m128d_f64[0] = (this->Transform).Translation.XY.m128d_f64[0];
  (param_1->Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Translation.ZW.m128d_f64[1];
  (param_1->Transform).Translation.ZW.m128d_f64[0] = (this->Transform).Translation.ZW.m128d_f64[0];
  (param_1->Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Scale3D.XY.m128d_f64[1];
  (param_1->Transform).Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
  (param_1->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  (param_1->Transform).Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
  (param_1->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  param_1->field_0x50 = this->field_0x50;
  return;
}

// GetDataType @ 1498b8490

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGSurfaceData::GetDataType(UPCGSurfaceData *this)

{
  return Surface;
}

// GetDataTypeId @ 1498b9080

FPCGDataTypeBaseId * __thiscall UPCGSurfaceData::GetDataTypeId(UPCGSurfaceData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface,(UObject *)pUVar3,
                         L"PCGDataTypeInfoSurface");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b9103;
  }
  else {
LAB_1498b9103:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b915a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b915c;
  }
LAB_1498b915a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b915c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoSurface::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b9b30

int __thiscall UPCGSurfaceData::GetDimension(UPCGSurfaceData *this)

{
  return 2;
}

// GetPrivateStaticClass @ 1498bd190

UClass * __cdecl UPCGSurfaceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSurfaceData",
               &Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton,
               StaticRegisterNativesUPCGSurfaceData,0x1b0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGSurfaceData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceData.InnerSingleton;
}

// HasNonTrivialTransform @ 1498ca6c0

bool __thiscall UPCGSurfaceData::HasNonTrivialTransform(UPCGSurfaceData *this)

{
  return true;
}

// StaticRegisterNativesUPCGSurfaceData @ 1498f6b10

void __cdecl UPCGSurfaceData::StaticRegisterNativesUPCGSurfaceData(void)

{
  return;
}

