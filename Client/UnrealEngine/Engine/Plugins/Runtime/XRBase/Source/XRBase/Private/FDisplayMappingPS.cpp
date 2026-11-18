// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 10

// ConstructCompiledInstance @ 14cf85280

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
FDisplayMappingPS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    *(undefined4 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x4 = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayMax + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x6 = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"OutputDevice",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x6,
               param_1->ParameterMap,L"OutputGamut",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters.ArrayNum,
               param_1->ParameterMap,L"SceneTexture",SPF_Optional);
    FShaderResourceParameter::Bind
              ((FShaderResourceParameter *)&this[1].Bindings.ResourceParameters.ArrayMax,
               param_1->ParameterMap,L"SceneSampler",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.Parameters.ArrayMax,param_1->ParameterMap,
               L"TextureToOutputGamutMatrix",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2,
               param_1->ParameterMap,L"ArraySlice",SPF_Optional);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14cf853c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl FDisplayMappingPS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x100);
  if (this != (FShader *)0x0) {
    memset(this,0,0x100);
    FShader::FShader(this);
    this[1].Bindings.Parameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.Parameters.ArrayNum = 0;
    this[1].Bindings.Parameters.ArrayMax = 0;
    this[1].Bindings.ResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    *(undefined2 *)&this[1].Bindings.ResourceParameters.ArrayNum = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GamutToXYZMatrix @ 14cf8caa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<float> * __cdecl
FDisplayMappingPS::GamutToXYZMatrix
          (TMatrix<float> *__return_storage_ptr__,EDisplayColorGamut param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  TMatrix<float> *pTVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[0][0] = ___xmm_000000003e38c49c3eb714373ed32d7c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[0][1] = _UNK_152a702c4;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[0][2] = _UNK_152a702c8;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[0][3] = _UNK_152a702cc;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[1][0] = ___xmm_000000003d93d07d3f3714373e59c6ed;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[1][1] = _UNK_152a70294;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[1][2] = _UNK_152a70298;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[1][3] = _UNK_152a7029c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[2][0] = ___xmm_000000003f7347213df41aef3c9e6221;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[2][1] = _UNK_152a702f4;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[2][2] = _UNK_152a702f8;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[2][3] = _UNK_152a702fc;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[3][0] = ___xmm_3f800000000000000000000000000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[3][1] = _UNK_150689644;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[3][2] = _UNK_150689648;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::sRGB_2_XYZ_MAT.M[3][3] = _UNK_15068964c;
      _Init_thread_footer(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[0][0] = ___xmm_000000003e2ce93e3e1416883f2310b4;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[0][1] = _UNK_152a702b4;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[0][2] = _UNK_152a702b8;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[0][3] = _UNK_152a702bc;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[1][0] = ___xmm_000000003d72de0e3f2d91623e86817b;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[1][1] = _UNK_152a70284;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[1][2] = _UNK_152a70288;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[1][3] = _UNK_152a7028c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[2][0] = ___xmm_000000003f87c9ba3ce5f8ee00000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[2][1] = _UNK_152a70334;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[2][2] = _UNK_152a70338;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[2][3] = _UNK_152a7033c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[3][0] = ___xmm_3f800000000000000000000000000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[3][1] = _UNK_150689644;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[3][2] = _UNK_150689648;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::Rec2020_2_XYZ_MAT.M[3][3] = _UNK_15068964c;
      _Init_thread_footer(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[0][0] = ___xmm_000000003e4af2733e8805ad3ef92267;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[0][1] = _UNK_152a702d4;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[0][2] = _UNK_152a702d8;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[0][3] = _UNK_152a702dc;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[1][0] = ___xmm_000000003da25b8f3f3115e33e6a7abb;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[1][1] = _UNK_152a702a4;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[1][2] = _UNK_152a702a8;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[1][3] = _UNK_152a702ac;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[2][0] = ___xmm_000000003f859b573d38c8ef00000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[2][1] = _UNK_152a70314;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[2][2] = _UNK_152a70318;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[2][3] = _UNK_152a7031c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[3][0] = ___xmm_3f800000000000000000000000000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[3][1] = _UNK_150689644;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[3][2] = _UNK_150689648;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
      ::__l2::P3D65_2_XYZ_MAT.M[3][3] = _UNK_15068964c;
      _Init_thread_footer(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  uVar7 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
          ::__l2::P3D65_2_XYZ_MAT.M[1]._8_8_;
  uVar6 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
          ::__l2::P3D65_2_XYZ_MAT.M[1]._0_8_;
  uVar5 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
          ::__l2::P3D65_2_XYZ_MAT.M[0]._8_8_;
  uVar4 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
          ::__l2::Rec2020_2_XYZ_MAT.M[1]._8_8_;
  uVar3 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
          ::__l2::Rec2020_2_XYZ_MAT.M[1]._0_8_;
  uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
           ::__l2::Rec2020_2_XYZ_MAT.M[0]._8_8_;
  uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
           ::__l2::sRGB_2_XYZ_MAT.M[1]._8_8_;
  uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
           ::__l2::sRGB_2_XYZ_MAT.M[1]._0_8_;
  uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
           ::__l2::sRGB_2_XYZ_MAT.M[0]._8_8_;
  if (param_1 == sRGB_D65) {
    *(undefined8 *)__return_storage_ptr__->M[0] =
         `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
         ::__l2::sRGB_2_XYZ_MAT.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar10;
    uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::sRGB_2_XYZ_MAT.M[2]._8_8_;
    uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::sRGB_2_XYZ_MAT.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar12;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar13;
    uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::sRGB_2_XYZ_MAT.M[3]._0_8_;
    uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::sRGB_2_XYZ_MAT.M[3]._8_8_;
  }
  else if (param_1 == DCIP3_D65) {
    *(undefined8 *)__return_storage_ptr__->M[0] =
         `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
         ::__l2::P3D65_2_XYZ_MAT.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar5;
    uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::P3D65_2_XYZ_MAT.M[2]._8_8_;
    uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::P3D65_2_XYZ_MAT.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar6;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar7;
    uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::P3D65_2_XYZ_MAT.M[3]._0_8_;
    uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::P3D65_2_XYZ_MAT.M[3]._8_8_;
  }
  else if (param_1 == Rec2020_D65) {
    *(undefined8 *)__return_storage_ptr__->M[0] =
         `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
         ::__l2::Rec2020_2_XYZ_MAT.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar11;
    uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::Rec2020_2_XYZ_MAT.M[2]._8_8_;
    uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::Rec2020_2_XYZ_MAT.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar3;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar4;
    uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::Rec2020_2_XYZ_MAT.M[3]._0_8_;
    uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::GamutToXYZMatrix(EDisplayColorGamut)'
             ::__l2::Rec2020_2_XYZ_MAT.M[3]._8_8_;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRCopyTexture.cpp"
                       ,0x48,L"");
    uVar13 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    uVar12 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    uVar10 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TMatrix<float> *)(*pcVar2)();
      return pTVar9;
    }
    *(undefined8 *)__return_storage_ptr__->M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar10;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    uVar10 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar12;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar13;
    uVar12 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    uVar13 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  }
  *(undefined8 *)__return_storage_ptr__->M[2] = uVar10;
  *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar11;
  *(undefined8 *)__return_storage_ptr__->M[3] = uVar12;
  *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = uVar13;
  return __return_storage_ptr__;
}

// GetStaticType @ 14cf90ee0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl FDisplayMappingPS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FDisplayMappingPS",
                 L"/Engine/Private/DisplayMappingPixelShader.usf",L"DisplayMappingPS",3,4,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x100,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/DisplayMappingPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`FDisplayMappingPS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 14cf919c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FDisplayMappingPS::GetTypeLayout(FDisplayMappingPS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FDisplayMapping;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDisplayMappingPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneSampler";
    DAT_1553536c2 = Freeze::FindFieldNameLength(L"SceneSampler");
    _DAT_1553536a0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1553536a8 = ::TypeBuffer[0x10];
    DAT_1553536a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1553536a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1553536a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1553536a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1553536a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1553536a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1553536a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1553536b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1553536b8 = 0xfc;
    _DAT_1553536bc = 1;
    _DAT_1553536c0 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneTexture";
    DAT_155353692 = Freeze::FindFieldNameLength(L"SceneTexture");
    _DAT_155353670 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155353678 = ::TypeBuffer[0x10];
    DAT_155353678_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155353678_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155353678_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155353678_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155353678_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155353678_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155353678_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155353680 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155353688 = 0xf8;
    _DAT_15535368c = 1;
    _DAT_155353690 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ArraySlice";
    DAT_155353662 = Freeze::FindFieldNameLength(L"ArraySlice");
    _DAT_155353640 = FShaderParameter::StaticGetTypeLayout();
    DAT_155353648 = ::TypeBuffer[0x10];
    DAT_155353648_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155353648_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155353648_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155353648_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155353648_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155353648_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155353648_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155353650 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155353658 = 0xf2;
    _DAT_15535365c = 1;
    _DAT_155353660 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureToOutputGamutMatrix";
    DAT_155353632 = Freeze::FindFieldNameLength(L"TextureToOutputGamutMatrix");
    _DAT_155353610 = FShaderParameter::StaticGetTypeLayout();
    DAT_155353618 = ::TypeBuffer[0x10];
    DAT_155353618_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155353618_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155353618_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155353618_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155353618_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155353618_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155353618_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155353620 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155353628 = 0xec;
    _DAT_15535362c = 1;
    _DAT_155353630 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutputGamut";
    DAT_155353602 = Freeze::FindFieldNameLength(L"OutputGamut");
    _DAT_1553535e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1553535e8 = ::TypeBuffer[0x10];
    DAT_1553535e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1553535e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1553535e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1553535e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1553535e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1553535e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1553535e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1553535f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1553535f8 = 0xe6;
    _DAT_1553535fc = 1;
    _DAT_155353600 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutputDevice";
    DAT_1553535d2 = Freeze::FindFieldNameLength(L"OutputDevice");
    _DAT_1553535b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1553535b8 = ::TypeBuffer[0x10];
    DAT_1553535b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1553535b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1553535b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1553535b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1553535b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1553535b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1553535b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1553535c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1553535c8 = 0xe0;
    _DAT_1553535cc = 1;
    _DAT_1553535d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 14cf92900

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FDisplayMappingPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x100);
  return;
}

// ShouldCompilePermutationImpl @ 14cf9bc10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FDisplayMappingPS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  return true;
}

// ShouldPrecachePermutationImpl @ 14cf9bc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FDisplayMappingPS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 14cf9c580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FDisplayMappingPS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\0';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FDisplayMapping;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FDisplayMappingPS,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneSampler";
    DAT_1553536c2 = Freeze::FindFieldNameLength(L"SceneSampler");
    _DAT_1553536a0 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_1553536a8 = ::TypeBuffer[0x10];
    DAT_1553536a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1553536a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1553536a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1553536a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1553536a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1553536a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1553536a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1553536b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1553536b8 = 0xfc;
    _DAT_1553536bc = 1;
    _DAT_1553536c0 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SceneTexture";
    DAT_155353692 = Freeze::FindFieldNameLength(L"SceneTexture");
    _DAT_155353670 = FShaderResourceParameter::StaticGetTypeLayout();
    DAT_155353678 = ::TypeBuffer[0x10];
    DAT_155353678_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155353678_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155353678_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155353678_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155353678_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155353678_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155353678_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155353680 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155353688 = 0xf8;
    _DAT_15535368c = 1;
    _DAT_155353690 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ArraySlice";
    DAT_155353662 = Freeze::FindFieldNameLength(L"ArraySlice");
    _DAT_155353640 = FShaderParameter::StaticGetTypeLayout();
    DAT_155353648 = ::TypeBuffer[0x10];
    DAT_155353648_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155353648_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155353648_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155353648_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155353648_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155353648_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155353648_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155353650 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155353658 = 0xf2;
    _DAT_15535365c = 1;
    _DAT_155353660 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TextureToOutputGamutMatrix";
    DAT_155353632 = Freeze::FindFieldNameLength(L"TextureToOutputGamutMatrix");
    _DAT_155353610 = FShaderParameter::StaticGetTypeLayout();
    DAT_155353618 = ::TypeBuffer[0x10];
    DAT_155353618_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155353618_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155353618_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155353618_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155353618_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155353618_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155353618_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155353620 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155353628 = 0xec;
    _DAT_15535362c = 1;
    _DAT_155353630 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutputGamut";
    DAT_155353602 = Freeze::FindFieldNameLength(L"OutputGamut");
    _DAT_1553535e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1553535e8 = ::TypeBuffer[0x10];
    DAT_1553535e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1553535e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1553535e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1553535e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1553535e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1553535e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1553535e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1553535f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1553535f8 = 0xe6;
    _DAT_1553535fc = 1;
    _DAT_155353600 = 0;
    `public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OutputDevice";
    DAT_1553535d2 = Freeze::FindFieldNameLength(L"OutputDevice");
    _DAT_1553535b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1553535b8 = ::TypeBuffer[0x10];
    DAT_1553535b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1553535b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1553535b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1553535b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1553535b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1553535b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1553535b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FDisplayMappingPS::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1553535c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1553535c8 = 0xe0;
    _DAT_1553535cc = 1;
    _DAT_1553535d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// XYZToGamutMatrix @ 14cf9f450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<float> * __cdecl
FDisplayMappingPS::XYZToGamutMatrix
          (TMatrix<float> *__return_storage_ptr__,EDisplayColorGamut param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  TMatrix<float> *pTVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[0][0] = ___xmm_00000000beff49e9bfc4c8f9404f6c0d;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[0][1] = _UNK_152a70364;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[0][2] = _UNK_152a70368;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[0][3] = _UNK_152a7036c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[1][0] = ___xmm_000000003d2a35a33ff01fb4bf78205a;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[1][1] = _UNK_152a70274;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[1][2] = _UNK_152a70278;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[1][3] = _UNK_152a7027c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[2][0] = ___xmm_000000003f874ad8be50df563d63dc5e;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[2][1] = _UNK_152a70324;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[2][2] = _UNK_152a70328;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[2][3] = _UNK_152a7032c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[3][0] = ___xmm_3f800000000000000000000000000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[3][1] = _UNK_150689644;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[3][2] = _UNK_150689648;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_sRGB_MAT.M[3][3] = _UNK_15068964c;
      _Init_thread_footer(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[0][0] = ___xmm_00000000be81b86abeb619583fdbb9d3;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[0][1] = _UNK_152a70344;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[0][2] = _UNK_152a70348;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[0][3] = _UNK_152a7034c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[1][0] = ___xmm_000000003c812cf13fcee8bdbf2aabbb;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[1][1] = _UNK_152a70254;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[1][2] = _UNK_152a70258;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[1][3] = _UNK_152a7025c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[2][0] = ___xmm_000000003f7135e6bd2f36343c908660;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[2][1] = _UNK_152a702e4;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[2][2] = _UNK_152a702e8;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[2][3] = _UNK_152a702ec;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[3][0] = ___xmm_3f800000000000000000000000000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[3][1] = _UNK_150689644;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[3][2] = _UNK_150689648;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_Rec2020_MAT.M[3][3] = _UNK_15068964c;
      _Init_thread_footer(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[0][0] = ___xmm_00000000bece2df9bf6e6caf401f93ce;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[0][1] = _UNK_152a70354;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[0][2] = _UNK_152a70358;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[0][3] = _UNK_152a7035c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[1][0] = ___xmm_000000003cc188613fe19ed5bf54593f;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[1][1] = _UNK_152a70264;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[1][2] = _UNK_152a70268;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[1][3] = _UNK_152a7026c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[2][0] = ___xmm_000000003f74fedfbd9c05ad3d12d82f;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[2][1] = _UNK_152a70304;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[2][2] = _UNK_152a70308;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[2][3] = _UNK_152a7030c;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[3][0] = ___xmm_3f800000000000000000000000000000;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[3][1] = _UNK_150689644;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[3][2] = _UNK_150689648;
      `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
      ::__l2::XYZ_2_P3D65_MAT.M[3][3] = _UNK_15068964c;
      _Init_thread_footer(&`public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  uVar7 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
          ::__l2::XYZ_2_P3D65_MAT.M[1]._8_8_;
  uVar6 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
          ::__l2::XYZ_2_P3D65_MAT.M[1]._0_8_;
  uVar5 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
          ::__l2::XYZ_2_P3D65_MAT.M[0]._8_8_;
  uVar4 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
          ::__l2::XYZ_2_Rec2020_MAT.M[1]._8_8_;
  uVar3 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
          ::__l2::XYZ_2_Rec2020_MAT.M[1]._0_8_;
  uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
           ::__l2::XYZ_2_Rec2020_MAT.M[0]._8_8_;
  uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
           ::__l2::XYZ_2_sRGB_MAT.M[1]._8_8_;
  uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
           ::__l2::XYZ_2_sRGB_MAT.M[1]._0_8_;
  uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
           ::__l2::XYZ_2_sRGB_MAT.M[0]._8_8_;
  if (param_1 == sRGB_D65) {
    *(undefined8 *)__return_storage_ptr__->M[0] =
         `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
         ::__l2::XYZ_2_sRGB_MAT.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar10;
    uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_sRGB_MAT.M[2]._8_8_;
    uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_sRGB_MAT.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar12;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar13;
    uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_sRGB_MAT.M[3]._0_8_;
    uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_sRGB_MAT.M[3]._8_8_;
  }
  else if (param_1 == DCIP3_D65) {
    *(undefined8 *)__return_storage_ptr__->M[0] =
         `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
         ::__l2::XYZ_2_P3D65_MAT.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar5;
    uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_P3D65_MAT.M[2]._8_8_;
    uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_P3D65_MAT.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar6;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar7;
    uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_P3D65_MAT.M[3]._0_8_;
    uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_P3D65_MAT.M[3]._8_8_;
  }
  else if (param_1 == Rec2020_D65) {
    *(undefined8 *)__return_storage_ptr__->M[0] =
         `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
         ::__l2::XYZ_2_Rec2020_MAT.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar11;
    uVar11 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_Rec2020_MAT.M[2]._8_8_;
    uVar10 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_Rec2020_MAT.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar3;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar4;
    uVar12 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_Rec2020_MAT.M[3]._0_8_;
    uVar13 = `public:_static_struct_UE::Math::TMatrix<float>___cdecl_FDisplayMappingPS::XYZToGamutMatrix(EDisplayColorGamut)'
             ::__l2::XYZ_2_Rec2020_MAT.M[3]._8_8_;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRCopyTexture.cpp"
                       ,0x6b,L"");
    uVar13 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    uVar12 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    uVar10 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TMatrix<float> *)(*pcVar2)();
      return pTVar9;
    }
    *(undefined8 *)__return_storage_ptr__->M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = uVar10;
    uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    uVar10 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)__return_storage_ptr__->M[1] = uVar12;
    *(undefined8 *)(__return_storage_ptr__->M[1] + 2) = uVar13;
    uVar12 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    uVar13 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  }
  *(undefined8 *)__return_storage_ptr__->M[2] = uVar10;
  *(undefined8 *)(__return_storage_ptr__->M[2] + 2) = uVar11;
  *(undefined8 *)__return_storage_ptr__->M[3] = uVar12;
  *(undefined8 *)(__return_storage_ptr__->M[3] + 2) = uVar13;
  return __return_storage_ptr__;
}

