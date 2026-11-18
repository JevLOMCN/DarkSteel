// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FDynamicPrimitiveUniformBuffer @ 1484ba360

FDynamicPrimitiveUniformBuffer * __thiscall
FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(FDynamicPrimitiveUniformBuffer *this)

{
  this->_padding_ = (longlong)&___7FDynamicPrimitiveUniformBuffer__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->UniformBuffer);
  (this->UniformBuffer)._padding_ =
       (longlong)&___7__TUniformBuffer_VFPrimitiveUniformShaderParameters____6B_;
  (this->UniformBuffer).UniformBufferRHI = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0
  ;
  (this->UniformBuffer).Contents = (uchar *)0x0;
  (this->UniformBuffer).BufferUsage = UniformBuffer_MultiFrame;
  return this;
}

// ~FDynamicPrimitiveUniformBuffer @ 1484bd710

void __thiscall
FDynamicPrimitiveUniformBuffer::~FDynamicPrimitiveUniformBuffer
          (FDynamicPrimitiveUniformBuffer *this)

{
  uchar *puVar1;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> this_00;
  
  this->_padding_ = (longlong)&___7FDynamicPrimitiveUniformBuffer__6B_;
  (**(code **)((this->UniformBuffer)._padding_ + 0x20))(&this->UniformBuffer);
  puVar1 = (this->UniformBuffer).Contents;
  (this->UniformBuffer)._padding_ =
       (longlong)&___7__TUniformBuffer_VFPrimitiveUniformShaderParameters____6B_;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  this_00 = (this->UniformBuffer).UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&this->UniformBuffer);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

// Set @ 1484fa9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,FRHICommandListBase *param_1,
          FPrimitiveUniformShaderParametersBuilder *param_2)

{
  TUniformBuffer<FPrimitiveUniformShaderParameters> *this_00;
  undefined8 uVar1;
  FPrimitiveUniformShaderParameters *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  longlong lVar5;
  FPrimitiveUniformShaderParameters *pFVar6;
  
  this_00 = &this->UniformBuffer;
  (this->UniformBuffer).BufferUsage = UniformBuffer_SingleFrame;
  pFVar2 = FPrimitiveUniformShaderParametersBuilder::Build(param_2);
  puVar3 = (this->UniformBuffer).Contents;
  if (puVar3 == (uchar *)0x0) {
    puVar3 = FMemory::Malloc(800,0x10);
    (this->UniformBuffer).Contents = puVar3;
  }
  lVar5 = 6;
  do {
    pFVar6 = pFVar2;
    puVar4 = puVar3;
    uVar1 = *(undefined8 *)&pFVar6->NumInstanceSceneDataEntries;
    pFVar2 = (FPrimitiveUniformShaderParameters *)((pFVar6->RelativeWorldToLocal).M + 2);
    *(undefined8 *)puVar4 = *(undefined8 *)pFVar6;
    *(undefined8 *)(puVar4 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&(pFVar6->PositionHigh).field0_0x0 + 8);
    *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)&(pFVar6->PositionHigh).field0_0x0;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((pFVar6->LocalToRelativeWorld).M[0] + 2);
    *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(pFVar6->LocalToRelativeWorld).M[0];
    *(undefined8 *)(puVar4 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((pFVar6->LocalToRelativeWorld).M[1] + 2);
    *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(pFVar6->LocalToRelativeWorld).M[1];
    *(undefined8 *)(puVar4 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((pFVar6->LocalToRelativeWorld).M[2] + 2);
    *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(pFVar6->LocalToRelativeWorld).M[2];
    *(undefined8 *)(puVar4 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((pFVar6->LocalToRelativeWorld).M[3] + 2);
    *(undefined8 *)(puVar4 + 0x50) = *(undefined8 *)(pFVar6->LocalToRelativeWorld).M[3];
    *(undefined8 *)(puVar4 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((pFVar6->RelativeWorldToLocal).M[0] + 2);
    *(undefined8 *)(puVar4 + 0x60) = *(undefined8 *)(pFVar6->RelativeWorldToLocal).M[0];
    *(undefined8 *)(puVar4 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((pFVar6->RelativeWorldToLocal).M[1] + 2);
    *(undefined8 *)(puVar4 + 0x70) = *(undefined8 *)(pFVar6->RelativeWorldToLocal).M[1];
    *(undefined8 *)(puVar4 + 0x78) = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x80;
  } while (lVar5 != 0);
  uVar1 = *(undefined8 *)((pFVar6->RelativeWorldToLocal).M[2] + 2);
  *(undefined8 *)(puVar4 + 0x80) = *(undefined8 *)pFVar2;
  *(undefined8 *)(puVar4 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)((pFVar6->RelativeWorldToLocal).M[3] + 2);
  *(undefined8 *)(puVar4 + 0x90) = *(undefined8 *)(pFVar6->RelativeWorldToLocal).M[3];
  *(undefined8 *)(puVar4 + 0x98) = uVar1;
  FRenderResource::UpdateRHI((FRenderResource *)this_00,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001484faab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this_00->_padding_ + 0x18))(this_00,param_1);
  return;
}

// Set @ 1484faac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,FRHICommandListBase *param_1,
          TMatrix<double> *param_2,TMatrix<double> *param_3,TBoxSphereBounds<double,double> *param_4
          ,TBoxSphereBounds<double,double> *param_5,TBoxSphereBounds<double,double> *param_6,
          bool param_7,bool param_8,bool param_9)

{
  Set(this,param_1,param_2,param_3,&param_4->Origin,param_4,param_5,param_6,param_7,param_8,param_9,
      (FCustomPrimitiveData *)0x0);
  return;
}

// Set @ 1484fab30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,FRHICommandListBase *param_1,
          TMatrix<double> *param_2,TMatrix<double> *param_3,TBoxSphereBounds<double,double> *param_4
          ,TBoxSphereBounds<double,double> *param_5,TBoxSphereBounds<double,double> *param_6,
          bool param_7,bool param_8,bool param_9,FCustomPrimitiveData *param_10)

{
  Set(this,param_1,param_2,param_3,&param_4->Origin,param_4,param_5,param_6,param_7,param_8,param_9,
      param_10);
  return;
}

// Set @ 1484fabb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,FRHICommandListBase *param_1,
          TMatrix<double> *param_2,TMatrix<double> *param_3,TBoxSphereBounds<double,double> *param_4
          ,TBoxSphereBounds<double,double> *param_5,bool param_6,bool param_7,bool param_8)

{
  Set(this,param_1,param_2,param_3,&param_4->Origin,param_4,param_5,param_5,param_6,param_7,param_8,
      (FCustomPrimitiveData *)0x0);
  return;
}

// Set @ 1484fac20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,FRHICommandListBase *param_1,
          TMatrix<double> *param_2,TMatrix<double> *param_3,TVector<double> *param_4,
          TBoxSphereBounds<double,double> *param_5,TBoxSphereBounds<double,double> *param_6,
          TBoxSphereBounds<double,double> *param_7,bool param_8,bool param_9,bool param_10,
          FCustomPrimitiveData *param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  float *pfVar5;
  FPrimitiveUniformShaderParametersBuilder *this_00;
  FPrimitiveUniformShaderParameters *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  longlong lVar9;
  FPrimitiveUniformShaderParameters *pFVar10;
  undefined1 auStack_4e8 [32];
  undefined8 local_4c8;
  undefined1 local_4b8 [664];
  float afStack_220 [2];
  TVector4<float>_u_0 local_218;
  TVector4<float>_u_0 local_208;
  TVector4<float>_u_0 local_1f8;
  TVector4<float>_u_0 local_1e8;
  TVector4<float>_u_0 local_1d8;
  TVector4<float>_u_0 local_1c8;
  TVector4<float>_u_0 local_1b8;
  TVector4<float>_u_0 local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  float local_68;
  uint local_64;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  memset((FPrimitiveUniformShaderParametersBuilder *)local_4b8,0,0x460);
  pfVar5 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4b8)->Parameters).
            CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  local_4b8._368_8_ = ___xmm_3f800000000000000000000000000000;
  local_4b8._376_8_ = _UNK_150689648;
  lVar9 = 9;
  local_4b8._448_8_ = ___xmm_3f800000000000000000000000000000;
  local_4b8._456_8_ = _UNK_150689648;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar5 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar5 + -2))->Y = 0.0;
    *pfVar5 = 0.0;
    pfVar5[1] = 1.0;
    pfVar5 = pfVar5 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  local_188 = param_2->M[0][2];
  dStack_180 = param_2->M[0][3];
  local_60 = local_60 & 0xfffffc00;
  local_4b8._656_8_ = 0;
  afStack_220[0] = 0.0;
  afStack_220[1] = 0.0;
  local_218._0_8_ = 0;
  local_218._8_8_ = 0;
  local_208._0_8_ = 0;
  local_208._8_8_ = 0;
  local_4b8._584_8_ = (TVector2<float>_u_0)0xffffff00ffffff00;
  local_1f8._0_8_ = 0;
  local_1f8._8_8_ = 0;
  local_4b8._640_4_ = 0.0;
  local_1e8._0_8_ = 0;
  local_1e8._8_8_ = 0;
  local_4b8._396_4_ = 0.0;
  local_1d8._0_8_ = 0;
  local_1d8._8_8_ = 0;
  local_4b8._412_4_ = 0.0;
  local_1c8._0_8_ = 0;
  local_1c8._8_8_ = 0;
  local_4b8._444_4_ = 0;
  local_1b8._0_8_ = 0;
  local_1b8._8_8_ = 0;
  local_4b8._8_4_ = 0;
  local_1a8._0_8_ = 0;
  local_1a8._8_8_ = 0;
  local_4b8._572_4_ = 0;
  local_4b8._576_4_ = 0;
  local_198 = param_2->M[0][0];
  dStack_190 = param_2->M[0][1];
  local_178 = param_2->M[1][0];
  dStack_170 = param_2->M[1][1];
  local_168 = param_2->M[1][2];
  dStack_160 = param_2->M[1][3];
  local_158 = param_2->M[2][0];
  dStack_150 = param_2->M[2][1];
  local_148 = param_2->M[2][2];
  dStack_140 = param_2->M[2][3];
  local_138 = param_2->M[3][0];
  dStack_130 = param_2->M[3][1];
  local_128 = param_2->M[3][2];
  dStack_120 = param_2->M[3][3];
  local_118 = param_3->M[0][0];
  dStack_110 = param_3->M[0][1];
  local_108 = param_3->M[0][2];
  dStack_100 = param_3->M[0][3];
  local_f8 = param_3->M[1][0];
  dStack_f0 = param_3->M[1][1];
  local_e8 = param_3->M[1][2];
  dStack_e0 = param_3->M[1][3];
  local_d8 = param_3->M[2][0];
  dStack_d0 = param_3->M[2][1];
  local_c8 = param_3->M[2][2];
  dStack_c0 = param_3->M[2][3];
  local_b8 = param_3->M[3][0];
  dStack_b0 = param_3->M[3][1];
  local_a8 = param_3->M[3][2];
  dStack_a0 = param_3->M[3][3];
  local_4c8 = 0;
  local_4b8._624_8_ = (TIntVector2<unsigned_int>_u_0)0x0;
  local_4b8._632_4_ = 0;
  local_80._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_80._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_4b8._428_4_ = 0xffffffff;
  local_80._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_4b8._12_4_ = -1;
  local_98._s_0.X = (param_5->Origin).field0_0x0._s_0.X;
  local_98._s_0.Y = (param_5->Origin).field0_0x0._s_0.Y;
  local_4b8._596_4_ = -1;
  local_98._s_0.Z = (param_5->Origin).field0_0x0._s_0.Z;
  local_4b8._28_4_ = 0xffffffff;
  local_4b8._476_4_ = 0xffffffff;
  local_4b8._492_4_ = 0xffffffff;
  local_4b8._496_4_ = 0xffffffff;
  local_4b8._592_4_ = 0xffffff;
  local_4b8._636_4_ = 0xffffffff;
  local_4b8._4_4_ = 0xffffffff;
  local_4b8._556_4_ = 0xffffffff;
  local_68 = (float)param_5->SphereRadius;
  local_4b8._364_4_ = (undefined4)(param_5->BoxExtent).field0_0x0._s_0.X;
  local_4b8._524_4_ = (undefined4)(param_5->BoxExtent).field0_0x0._s_0.Y;
  local_4b8._540_4_ = (undefined4)(param_5->BoxExtent).field0_0x0._s_0.Z;
  dVar1 = (param_6->Origin).field0_0x0._s_0.X;
  dVar2 = (param_6->BoxExtent).field0_0x0._s_0.Y;
  dVar3 = (param_6->BoxExtent).field0_0x0._s_0.Z;
  local_4b8._512_4_ = (undefined4)(dVar1 - (param_6->BoxExtent).field0_0x0._s_0.X);
  local_4b8._516_4_ = (undefined4)((param_6->Origin).field0_0x0._s_0.Y - dVar2);
  local_4b8._520_4_ = (undefined4)((param_6->Origin).field0_0x0._s_0.Z - dVar3);
  local_4b8._528_4_ = (undefined4)(dVar1 + (param_6->BoxExtent).field0_0x0._s_0.X);
  dVar1 = (param_7->Origin).field0_0x0._s_0.X;
  local_4b8._532_4_ = (undefined4)(dVar2 + (param_6->Origin).field0_0x0._s_0.Y);
  dVar2 = (param_7->BoxExtent).field0_0x0._s_0.Y;
  local_4b8._536_4_ = (undefined4)(dVar3 + (param_6->Origin).field0_0x0._s_0.Z);
  dVar3 = (param_7->BoxExtent).field0_0x0._s_0.Z;
  local_4b8._464_4_ = (undefined4)(dVar1 - (param_7->BoxExtent).field0_0x0._s_0.X);
  local_64 = ((uint)param_8 | (uint)param_10 << 3) << 3 | 0xfe0381 | (param_9 | 0x900) << 5;
  local_4b8._468_4_ = (undefined4)((param_7->Origin).field0_0x0._s_0.Y - dVar2);
  local_4b8._472_4_ = (undefined4)((param_7->Origin).field0_0x0._s_0.Z - dVar3);
  local_4b8._480_4_ = (undefined4)(dVar1 + (param_7->BoxExtent).field0_0x0._s_0.X);
  local_4b8._484_4_ = (undefined4)(dVar2 + (param_7->Origin).field0_0x0._s_0.Y);
  local_4b8._488_4_ = (undefined4)(dVar3 + (param_7->Origin).field0_0x0._s_0.Z);
  this_00 = FPrimitiveUniformShaderParametersBuilder::CustomPrimitiveData
                      ((FPrimitiveUniformShaderParametersBuilder *)local_4b8,param_11);
  (this->UniformBuffer).BufferUsage = UniformBuffer_SingleFrame;
  pFVar6 = FPrimitiveUniformShaderParametersBuilder::Build(this_00);
  puVar7 = (this->UniformBuffer).Contents;
  if (puVar7 == (uchar *)0x0) {
    puVar7 = FMemory::Malloc(800,0x10);
    (this->UniformBuffer).Contents = puVar7;
  }
  lVar9 = 6;
  do {
    pFVar10 = pFVar6;
    puVar8 = puVar7;
    uVar4 = *(undefined8 *)&pFVar10->NumInstanceSceneDataEntries;
    pFVar6 = (FPrimitiveUniformShaderParameters *)((pFVar10->RelativeWorldToLocal).M + 2);
    *(undefined8 *)puVar8 = *(undefined8 *)pFVar10;
    *(undefined8 *)(puVar8 + 8) = uVar4;
    uVar4 = *(undefined8 *)((longlong)&(pFVar10->PositionHigh).field0_0x0 + 8);
    *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)&(pFVar10->PositionHigh).field0_0x0;
    *(undefined8 *)(puVar8 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)((pFVar10->LocalToRelativeWorld).M[0] + 2);
    *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(pFVar10->LocalToRelativeWorld).M[0];
    *(undefined8 *)(puVar8 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)((pFVar10->LocalToRelativeWorld).M[1] + 2);
    *(undefined8 *)(puVar8 + 0x30) = *(undefined8 *)(pFVar10->LocalToRelativeWorld).M[1];
    *(undefined8 *)(puVar8 + 0x38) = uVar4;
    uVar4 = *(undefined8 *)((pFVar10->LocalToRelativeWorld).M[2] + 2);
    *(undefined8 *)(puVar8 + 0x40) = *(undefined8 *)(pFVar10->LocalToRelativeWorld).M[2];
    *(undefined8 *)(puVar8 + 0x48) = uVar4;
    uVar4 = *(undefined8 *)((pFVar10->LocalToRelativeWorld).M[3] + 2);
    *(undefined8 *)(puVar8 + 0x50) = *(undefined8 *)(pFVar10->LocalToRelativeWorld).M[3];
    *(undefined8 *)(puVar8 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)((pFVar10->RelativeWorldToLocal).M[0] + 2);
    *(undefined8 *)(puVar8 + 0x60) = *(undefined8 *)(pFVar10->RelativeWorldToLocal).M[0];
    *(undefined8 *)(puVar8 + 0x68) = uVar4;
    uVar4 = *(undefined8 *)((pFVar10->RelativeWorldToLocal).M[1] + 2);
    *(undefined8 *)(puVar8 + 0x70) = *(undefined8 *)(pFVar10->RelativeWorldToLocal).M[1];
    *(undefined8 *)(puVar8 + 0x78) = uVar4;
    lVar9 = lVar9 + -1;
    puVar7 = puVar8 + 0x80;
  } while (lVar9 != 0);
  uVar4 = *(undefined8 *)((pFVar10->RelativeWorldToLocal).M[2] + 2);
  *(undefined8 *)(puVar8 + 0x80) = *(undefined8 *)pFVar6;
  *(undefined8 *)(puVar8 + 0x88) = uVar4;
  uVar4 = *(undefined8 *)((pFVar10->RelativeWorldToLocal).M[3] + 2);
  *(undefined8 *)(puVar8 + 0x90) = *(undefined8 *)(pFVar10->RelativeWorldToLocal).M[3];
  *(undefined8 *)(puVar8 + 0x98) = uVar4;
  FRenderResource::UpdateRHI((FRenderResource *)&this->UniformBuffer,param_1);
  (**(code **)((this->UniformBuffer)._padding_ + 0x18))(&this->UniformBuffer,param_1);
  return;
}

// Set @ 1484fb140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,TMatrix<double> *param_1,TMatrix<double> *param_2,
          TBoxSphereBounds<double,double> *param_3,TBoxSphereBounds<double,double> *param_4,
          TBoxSphereBounds<double,double> *param_5,bool param_6,bool param_7,bool param_8)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Set(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,param_1,param_2,
      &param_3->Origin,param_3,param_4,param_5,param_6,param_7,param_8,(FCustomPrimitiveData *)0x0);
  return;
}

// Set @ 1484fb220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,TMatrix<double> *param_1,TMatrix<double> *param_2,
          TBoxSphereBounds<double,double> *param_3,TBoxSphereBounds<double,double> *param_4,
          TBoxSphereBounds<double,double> *param_5,bool param_6,bool param_7,bool param_8,
          FCustomPrimitiveData *param_9)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Set(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,param_1,param_2,
      &param_3->Origin,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

// Set @ 1484fb300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,TMatrix<double> *param_1,TMatrix<double> *param_2,
          TBoxSphereBounds<double,double> *param_3,TBoxSphereBounds<double,double> *param_4,
          bool param_5,bool param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Set(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,param_1,param_2,
      &param_3->Origin,param_3,param_4,param_4,param_5,param_6,param_7,(FCustomPrimitiveData *)0x0);
  return;
}

// Set @ 1484fb3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicPrimitiveUniformBuffer::Set
          (FDynamicPrimitiveUniformBuffer *this,TMatrix<double> *param_1,TMatrix<double> *param_2,
          TVector<double> *param_3,TBoxSphereBounds<double,double> *param_4,
          TBoxSphereBounds<double,double> *param_5,TBoxSphereBounds<double,double> *param_6,
          bool param_7,bool param_8,bool param_9,FCustomPrimitiveData *param_10)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Set(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,param_1,param_2,param_3,
      param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

