// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// Bind @ 144baae40

void __thiscall
FStencilingGeometryShaderParameters::Bind
          (FStencilingGeometryShaderParameters *this,FShaderParameterMap *param_1)

{
  FShaderParameter::Bind
            (&this->StencilGeometryPosAndScale,param_1,L"StencilingGeometryPosAndScale",SPF_Optional
            );
  FShaderParameter::Bind
            (&this->StencilConeParameters,param_1,L"StencilingConeParameters",SPF_Optional);
  FShaderParameter::Bind
            (&this->StencilConeTransform,param_1,L"StencilingConeTransform",SPF_Optional);
  return;
}

// GetParameters @ 144bc7500

FParameters * __cdecl
FStencilingGeometryShaderParameters::GetParameters
          (FParameters *__return_storage_ptr__,TVector4<float> *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 = 0;
  (__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->StencilingConeParameters).field0_0x0 + 4) = 0;
  (__return_storage_ptr__->StencilingConeParameters).field0_0x0._s_0.W = 1.0;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 =
       *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 + 8)
       = uVar1;
  *(undefined8 *)&(__return_storage_ptr__->StencilingConeParameters).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->StencilingConeParameters).field0_0x0 + 8) = 0;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[3] + 2) = uVar1;
  return __return_storage_ptr__;
}

// GetParameters @ 144bc7560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FParameters * __cdecl
FStencilingGeometryShaderParameters::GetParameters
          (FParameters *__return_storage_ptr__,FSceneView *param_1,FLightSceneInfo *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uchar uVar7;
  FLightSceneProxy *pFVar8;
  undefined8 uVar9;
  double *pdVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 = 0;
  (__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->StencilingConeParameters).field0_0x0 + 4) = 0;
  (__return_storage_ptr__->StencilingConeParameters).field0_0x0._s_0.W = 1.0;
  local_128.M[0][1] = _UNK_150689518;
  local_128.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  pFVar8 = param_2->Proxy;
  uVar7 = pFVar8->LightType;
  if ((uVar7 == '\x01') || (uVar7 == '\x03')) {
    pdVar10 = (double *)(**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,local_148);
    dVar1 = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
    dVar2 = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
    dVar3 = *pdVar10;
    dVar4 = pdVar10[1];
    dVar5 = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
    dVar6 = pdVar10[2];
    fVar11 = (float)pdVar10[3] * __real_3f8483ee;
    *(undefined8 *)&(__return_storage_ptr__->StencilingConeParameters).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->StencilingConeParameters).field0_0x0 + 8) =
         0;
    (__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0._s_0.X =
         (float)(dVar1 + dVar3);
    (__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0._s_0.Y =
         (float)(dVar2 + dVar4);
    (__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0._s_0.Z =
         (float)(dVar5 + dVar6);
    (__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0._s_0.W = fVar11;
    uVar9 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[0] + 2) = uVar9;
    uVar9 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[1] + 2) = uVar9;
    uVar9 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[2] + 2) = uVar9;
    uVar9 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(__return_storage_ptr__->StencilingConeTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((__return_storage_ptr__->StencilingConeTransform).M[3] + 2) = uVar9;
  }
  else if (uVar7 == '\x02') {
    local_128.M[0][2] = 0.0;
    local_128.M[0][3] = 0.0;
    local_128.M[1][2] = 0.0;
    local_128.M[1][3] = 0.0;
    local_128.M[3][0] = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
    local_128.M[3][1] = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
    local_128.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_128.M[1][1] = _UNK_15061cbc8;
    local_128.M[3][2] = (param_1->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
    *(undefined8 *)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 = 0;
    *(undefined8 *)
     ((longlong)&(__return_storage_ptr__->StencilingGeometryPosAndScale).field0_0x0 + 8) = 0;
    local_128.M[2][0] = 0.0;
    local_128.M[2][1] = 0.0;
    local_128.M[3][3] = __real_3ff0000000000000;
    local_128.M[2][2] = local_128.M[0][0];
    local_128.M[2][3] = local_128.M[0][1];
    VectorMatrixMultiply(&local_a8,&param_2->Proxy->LightToWorld,&local_128);
    *(ulonglong *)(__return_storage_ptr__->StencilingConeTransform).M[0] =
         CONCAT44((float)local_a8.M[0][1],(float)local_a8.M[0][0]);
    *(ulonglong *)((__return_storage_ptr__->StencilingConeTransform).M[0] + 2) =
         CONCAT44((float)local_a8.M[0][3],(float)local_a8.M[0][2]);
    (__return_storage_ptr__->StencilingConeTransform).M[1][0] = (float)local_a8.M[1][0];
    (__return_storage_ptr__->StencilingConeTransform).M[1][1] = (float)local_a8.M[1][1];
    (__return_storage_ptr__->StencilingConeTransform).M[1][2] = (float)local_a8.M[1][2];
    (__return_storage_ptr__->StencilingConeTransform).M[1][3] = (float)local_a8.M[1][3];
    (__return_storage_ptr__->StencilingConeTransform).M[2][0] = (float)local_a8.M[2][0];
    (__return_storage_ptr__->StencilingConeTransform).M[2][1] = (float)local_a8.M[2][1];
    (__return_storage_ptr__->StencilingConeTransform).M[2][2] = (float)local_a8.M[2][2];
    (__return_storage_ptr__->StencilingConeTransform).M[2][3] = (float)local_a8.M[2][3];
    *(ulonglong *)(__return_storage_ptr__->StencilingConeTransform).M[3] =
         CONCAT44((float)local_a8.M[3][1],(float)local_a8.M[3][0]);
    *(ulonglong *)((__return_storage_ptr__->StencilingConeTransform).M[3] + 2) =
         CONCAT44((float)local_a8.M[3][3],(float)local_a8.M[3][2]);
    fVar11 = (float)(**(code **)(param_2->Proxy->_padding_ + 0x18))(param_2->Proxy);
    fVar12 = (float)(**(code **)(param_2->Proxy->_padding_ + 0x20))(param_2->Proxy);
    (__return_storage_ptr__->StencilingConeParameters).field0_0x0._s_0.X = 18.0;
    (__return_storage_ptr__->StencilingConeParameters).field0_0x0._s_0.Y = 12.0;
    (__return_storage_ptr__->StencilingConeParameters).field0_0x0._s_0.Z = fVar12;
    (__return_storage_ptr__->StencilingConeParameters).field0_0x0._s_0.W = fVar11;
  }
  return __return_storage_ptr__;
}

// GetTypeLayout @ 144bcfa00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FStencilingGeometryShaderParameters::GetTypeLayout(FStencilingGeometryShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x12';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FStencilingGeom;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStencilingGeometryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilConeTransform";
    DAT_1550c2962 = Freeze::FindFieldNameLength(L"StencilConeTransform");
    _DAT_1550c2940 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2948 = ::TypeBuffer[0x10];
    DAT_1550c2948_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2948_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2948_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2948_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2948_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2948_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2948_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2950 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2958 = 0xc;
    _DAT_1550c295c = 1;
    _DAT_1550c2960 = 0;
    `public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilConeParameters";
    DAT_1550c2932 = Freeze::FindFieldNameLength(L"StencilConeParameters");
    _DAT_1550c2910 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2918 = ::TypeBuffer[0x10];
    DAT_1550c2918_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2918_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2918_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2918_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2918_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2918_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2918_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2920 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2928 = 6;
    _DAT_1550c292c = 1;
    _DAT_1550c2930 = 0;
    `public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilGeometryPosAndScale";
    DAT_1550c2902 = Freeze::FindFieldNameLength(L"StencilGeometryPosAndScale");
    _DAT_1550c28e0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550c28f0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c28e8 = ::TypeBuffer[0x10];
    DAT_1550c28e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c28e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c28e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c28e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c28e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c28e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c28e8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c28f8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c28fc = 1;
    _DAT_1550c2900 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144bd0d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStencilingGeometryShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_1506d61e8;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0xfefe;
  return;
}

// Set @ 144be0e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStencilingGeometryShaderParameters::Set
          (FStencilingGeometryShaderParameters *this,FRHIBatchedShaderParameters *param_1,
          TVector4<float> *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStackY_a8 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [2];
  float afStack_50 [2];
  float local_48 [2];
  float afStack_40 [2];
  float local_38 [2];
  float afStack_30 [2];
  float local_28 [2];
  float afStack_20 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78 = *(undefined8 *)&param_2->field0_0x0;
  uStack_70 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar1 = (this->StencilGeometryPosAndScale).NumBytes;
  uVar2 = (uint)uVar1;
  local_68 = 0;
  uStack_60 = 0;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  local_58 = (float  [2])UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  afStack_50 = (float  [2])UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  local_48 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  afStack_40 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  local_38 = (float  [2])UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  afStack_30 = (float  [2])UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  local_28 = (float  [2])UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  afStack_20 = (float  [2])UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->StencilGeometryPosAndScale).BufferIndex,
               (uint)(this->StencilGeometryPosAndScale).BaseIndex,uVar2,&local_78);
  }
  uVar1 = (this->StencilConeParameters).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->StencilConeParameters).BufferIndex,
               (uint)(this->StencilConeParameters).BaseIndex,uVar2,&local_68);
  }
  return;
}

// Set @ 144be0f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStencilingGeometryShaderParameters::Set
          (FStencilingGeometryShaderParameters *this,FRHIBatchedShaderParameters *param_1,
          FSceneView *param_2,FLightSceneInfo *param_3)

{
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 auStackY_b8 [32];
  FParameters local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  GetParameters(&local_88,param_2,param_3);
  uVar1 = param_3->Proxy->LightType;
  if ((uVar1 == '\x01') || (uVar1 == '\x03')) {
    uVar2 = (this->StencilGeometryPosAndScale).NumBytes;
    uVar3 = (uint)uVar2;
    if (0x10 < uVar2) {
      uVar3 = 0x10;
    }
    if (uVar3 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->StencilGeometryPosAndScale).BufferIndex,
                 (uint)(this->StencilGeometryPosAndScale).BaseIndex,uVar3,&local_88);
    }
  }
  else {
    if (uVar1 != '\x02') {
      return;
    }
    uVar2 = (this->StencilConeTransform).NumBytes;
    uVar3 = (uint)uVar2;
    if (0x40 < uVar2) {
      uVar3 = 0x40;
    }
    if (uVar3 != 0) {
      FRHIBatchedShaderParameters::SetShaderParameter
                (param_1,(uint)(this->StencilConeTransform).BufferIndex,
                 (uint)(this->StencilConeTransform).BaseIndex,uVar3,
                 &local_88.StencilingConeTransform);
    }
  }
  uVar2 = (this->StencilConeParameters).NumBytes;
  uVar3 = (uint)uVar2;
  if (0x10 < uVar2) {
    uVar3 = 0x10;
  }
  if (uVar3 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->StencilConeParameters).BufferIndex,
               (uint)(this->StencilConeParameters).BaseIndex,uVar3,
               &local_88.StencilingConeParameters);
  }
  return;
}

// StaticGetTypeLayout @ 144be8860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FStencilingGeometryShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x12';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x02';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FStencilingGeom;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FStencilingGeometryShaderParameters,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilConeTransform";
    DAT_1550c2962 = Freeze::FindFieldNameLength(L"StencilConeTransform");
    _DAT_1550c2940 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2948 = ::TypeBuffer[0x10];
    DAT_1550c2948_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2948_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2948_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2948_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2948_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2948_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2948_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2950 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2958 = 0xc;
    _DAT_1550c295c = 1;
    _DAT_1550c2960 = 0;
    `public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilConeParameters";
    DAT_1550c2932 = Freeze::FindFieldNameLength(L"StencilConeParameters");
    _DAT_1550c2910 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c2918 = ::TypeBuffer[0x10];
    DAT_1550c2918_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c2918_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c2918_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c2918_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c2918_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c2918_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c2918_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c2920 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c2928 = 6;
    _DAT_1550c292c = 1;
    _DAT_1550c2930 = 0;
    `public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "StencilGeometryPosAndScale";
    DAT_1550c2902 = Freeze::FindFieldNameLength(L"StencilGeometryPosAndScale");
    _DAT_1550c28e0 = FShaderParameter::StaticGetTypeLayout();
    _DAT_1550c28f0 = Freeze::DefaultWriteMemoryImageField;
    DAT_1550c28e8 = ::TypeBuffer[0x10];
    DAT_1550c28e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c28e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c28e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c28e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c28e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c28e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c28e8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_1550c28f8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FStencilingGeometryShaderParameters::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c28fc = 1;
    _DAT_1550c2900 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

