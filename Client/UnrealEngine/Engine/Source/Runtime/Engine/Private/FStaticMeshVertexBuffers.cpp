// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// operator() @ 148719570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FRenderResource *pFVar1;
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar1 = (FRenderResource *)(*(longlong *)this + 0xb8);
  if (*(int *)(*(longlong *)this + 0xd0) == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  pFVar1 = *(FRenderResource **)this;
  if (pFVar1->ListIndex == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  pFVar1 = (FRenderResource *)(*(longlong *)this + 0x108);
  if (*(int *)(*(longlong *)this + 0x120) == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0xb8),
             *(FVertexFactory **)((longlong)this + 8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8,*(int *)((longlong)this + 0x10));
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x108),
             *(FVertexFactory **)((longlong)this + 8),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData(*(FLocalVertexFactory **)((longlong)this + 8),param_1,&local_e8);
  pFVar1 = *(FRenderResource **)((longlong)this + 8);
  if (pFVar1->ListIndex == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  return;
}

// operator() @ 148719720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FStaticMeshVertexBuffers::InitModelVF'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FRenderResource *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)this + 0xd0) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PositionVertexBuffer.IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x523,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)this + 0x18) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StaticMeshVertexBuffer.IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x524,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0xb8),
             *(FVertexFactory **)((longlong)this + 8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8,1);
  FColorVertexBuffer::BindDefaultColorVertexBuffer
            (*(FVertexFactory **)((longlong)this + 8),(FStaticMeshDataType *)&local_e8,
             ZeroForDefaultBufferBind);
  FLocalVertexFactory::SetData(*(FLocalVertexFactory **)((longlong)this + 8),param_1,&local_e8);
  this_00 = *(FRenderResource **)((longlong)this + 8);
  if (this_00->ListIndex == -1) {
    (**(code **)(this_00->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(this_00,param_1);
  }
  return;
}

// operator() @ 148719e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FStaticMeshVertexBuffers::InitWithDummyData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FRenderResource *pFVar1;
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar1 = (FRenderResource *)(*(longlong *)this + 0xb8);
  if (*(int *)(*(longlong *)this + 0xd0) == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  pFVar1 = *(FRenderResource **)this;
  if (pFVar1->ListIndex == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  pFVar1 = (FRenderResource *)(*(longlong *)this + 0x108);
  if (*(int *)(*(longlong *)this + 0x120) == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0xb8),
             *(FVertexFactory **)((longlong)this + 8),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8,-1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (*(FStaticMeshVertexBuffer **)this,*(FVertexFactory **)((longlong)this + 8),
             (FStaticMeshDataType *)&local_e8,*(int *)((longlong)this + 0x10));
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x108),
             *(FVertexFactory **)((longlong)this + 8),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData(*(FLocalVertexFactory **)((longlong)this + 8),param_1,&local_e8);
  pFVar1 = *(FRenderResource **)((longlong)this + 8);
  if (pFVar1->ListIndex == -1) {
    (**(code **)(pFVar1->_padding_ + 0x18))();
  }
  else {
    FRenderResource::UpdateRHI(pFVar1,param_1);
  }
  return;
}

// InitComponentVF @ 148744960

void __thiscall
FStaticMeshVertexBuffers::InitComponentVF
          (FStaticMeshVertexBuffers *this,FLocalVertexFactory *param_1,int param_2,bool param_3,
          FDataType *param_4)

{
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&this->PositionVertexBuffer,(FVertexFactory *)param_1,(FStaticMeshDataType *)param_4);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&this->StaticMeshVertexBuffer,(FVertexFactory *)param_1,(FStaticMeshDataType *)param_4)
  ;
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            (&this->StaticMeshVertexBuffer,(FVertexFactory *)param_1,(FStaticMeshDataType *)param_4,
             -1);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            (&this->StaticMeshVertexBuffer,(FVertexFactory *)param_1,(FStaticMeshDataType *)param_4,
             param_2);
  if (param_3) {
    FColorVertexBuffer::BindDefaultColorVertexBuffer
              ((FVertexFactory *)param_1,(FStaticMeshDataType *)param_4,
               FColorSizeForComponentOverride);
  }
  else {
    FColorVertexBuffer::BindColorVertexBuffer
              (&this->ColorVertexBuffer,(FVertexFactory *)param_1,(FStaticMeshDataType *)param_4);
  }
  return;
}

// InitFromDynamicVertex @ 148745010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffers::InitFromDynamicVertex
          (FStaticMeshVertexBuffers *this,FRHICommandListBase *param_1,FRenderCommandPipe *param_2,
          FLocalVertexFactory *param_3,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_4,uint param_5,uint param_6)

{
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this_00;
  TStaticMeshVertexTangentDatum<FPackedNormal> *this_01;
  ushort *puVar1;
  undefined4 uVar2;
  uchar *puVar3;
  FStaticMeshVertexDataInterface FVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  code **ppcVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar31;
  double dVar30;
  float fVar32;
  float fVar33;
  undefined1 auStackY_278 [32];
  ushort local_248;
  ushort local_246 [3];
  uint local_240;
  ulonglong local_238;
  FScriptContainerElement *local_230;
  longlong local_228;
  TVector2<float>_u_0 local_220;
  undefined8 local_218;
  float local_210;
  TVector<float>_u_0 local_208;
  TVector<float>_u_0 local_1f8;
  TVector<float>_u_0 local_1e8;
  TVector<float>_u_0 local_1d8;
  TVector<float>_u_0 local_1c8;
  ulonglong local_1b8;
  longlong local_1b0;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *local_1a8;
  FRHICommandListBase *local_1a0;
  FRenderCommandPipe *local_198;
  FLocalVertexFactory *local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  TVector<float>_u_0 local_168;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  FStaticMeshVertexBuffers *local_128;
  FLocalVertexFactory *pFStack_120;
  uint local_118;
  undefined4 uStack_114;
  code *local_108 [2];
  code *local_f8 [3];
  code **local_e0;
  ulonglong local_d8;
  undefined8 uVar29;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1a8 = param_4;
  local_1a0 = param_1;
  local_198 = param_2;
  local_190 = param_3;
  if ((6 < param_5 - 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumTexCoords < MAX_STATIC_TEXCOORDS && NumTexCoords > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0x562,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_5 <= param_6) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("LightMapIndex < NumTexCoords",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0x563,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_4->ArrayNum == 0) {
    FPositionVertexBuffer::Init(&this->PositionVertexBuffer,1,true);
    FStaticMeshVertexBuffer::Init(&this->StaticMeshVertexBuffer,1,1,true);
    FColorVertexBuffer::Init(&this->ColorVertexBuffer,1,true);
    puVar3 = (this->PositionVertexBuffer).Data;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    param_6 = 0;
    puVar3[8] = '\0';
    puVar3[9] = '\0';
    puVar3[10] = '\0';
    puVar3[0xb] = '\0';
    local_1e8._0_8_ = 0;
    local_1e8._s_0.Z = 1.0;
    local_1d8._s_0.X = 0.0;
    local_1d8._4_8_ = 0x3f800000;
    local_1c8._0_8_ = 0x3f800000;
    local_1c8._s_0.Z = 0.0;
    FStaticMeshVertexBuffer::SetVertexTangents
              (&this->StaticMeshVertexBuffer,0,(TVector<float> *)&local_1c8._s_0,
               (TVector<float> *)&local_1d8._s_0,(TVector<float> *)&local_1e8._s_0);
    local_220 = (TVector2<float>_u_0)0x0;
    FStaticMeshVertexBuffer::SetVertexUV
              (&this->StaticMeshVertexBuffer,0,0,(TVector2<float> *)&local_220._s_0,false);
    local_246[1] = 0x101;
    local_246[2] = 0x101;
    builtin_memcpy((this->ColorVertexBuffer).Data,"\x01\x01\x01\x01",4);
  }
  else {
    FPositionVertexBuffer::Init(&this->PositionVertexBuffer,param_4->ArrayNum,true);
    FStaticMeshVertexBuffer::Init(&this->StaticMeshVertexBuffer,param_4->ArrayNum,param_5,true);
    FColorVertexBuffer::Init(&this->ColorVertexBuffer,param_4->ArrayNum,true);
    fVar12 = _UNK_15104007c;
    fVar11 = _UNK_151040078;
    fVar10 = _UNK_151040074;
    fVar9 = ___xmm_3c0102043c0102043c0102043c010204;
    iVar17 = param_4->ArrayNum;
    uVar22 = 0;
    local_240 = 0;
    if (0 < iVar17) {
      local_228 = 0;
      uVar21 = uVar22;
      do {
        lVar14 = local_228;
        uVar19 = (uint)uVar21;
        uVar18 = 0;
        if ((int)uVar19 < iVar17) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar24 = (ulonglong)(uVar19 * (this->PositionVertexBuffer).Stride);
        local_230 = (param_4->AllocatorInstance).Data + lVar14;
        puVar3 = (this->PositionVertexBuffer).Data;
        uVar2 = *(undefined4 *)(local_230 + 8);
        *(undefined8 *)(puVar3 + uVar24) = *(undefined8 *)local_230;
        *(undefined4 *)(puVar3 + uVar24 + 8) = uVar2;
        auVar25 = pmovsxbd(in_XMM1,*(undefined4 *)(local_230 + 0x50));
        puVar3 = (this->StaticMeshVertexBuffer).TangentsDataPtr;
        FVar4 = *(this->StaticMeshVertexBuffer).TangentsData;
        auVar26 = pmovsxbd(auVar25,*(undefined4 *)(local_230 + 0x4c));
        fVar28 = (float)auVar25._0_4_ * fVar9;
        fVar31 = (float)auVar25._4_4_ * fVar10;
        uVar29 = CONCAT44(fVar31,fVar28);
        fVar32 = (float)auVar25._8_4_ * fVar11;
        dVar8 = (double)fVar28;
        dVar7 = (double)fVar31;
        fVar28 = (float)auVar26._0_4_ * fVar9;
        fVar31 = (float)auVar26._4_4_ * fVar10;
        fVar27 = (float)auVar26._8_4_ * fVar11;
        local_218 = CONCAT44(fVar31,fVar28);
        dVar30 = (double)((float)auVar25._12_4_ * fVar12);
        uVar6 = CONCAT44(fVar31,fVar28);
        in_XMM1._0_8_ = ((double)fVar27 * dVar7 - (double)fVar32 * (double)fVar31) * dVar30;
        in_XMM1._8_8_ = 0;
        fVar33 = (float)((dVar8 * (double)fVar31 - dVar7 * (double)fVar28) * dVar30);
        fVar31 = (float)in_XMM1._0_8_;
        fVar28 = (float)(((double)fVar32 * (double)fVar28 - (double)fVar27 * dVar8) * dVar30);
        local_210 = fVar27;
        local_1b8 = uVar21;
        local_188 = uVar29;
        local_180 = fVar32;
        local_17c = uVar6;
        local_174 = fVar27;
        if ((this->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis == false) {
          this_01 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar3 + uVar21 * 8);
          lVar14 = (**(code **)((longlong)FVar4 + 0x50))();
          if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar3 + lVar14) < this_01 + 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x145,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((this_01 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                         (this->StaticMeshVertexBuffer).TangentsDataPtr) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x146,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_1f8._s_0.X = fVar31;
          local_1f8._s_0.Y = fVar28;
          local_1f8._s_0.Z = fVar33;
          local_148._0_8_ = uVar29;
          local_148._s_0.Z = fVar32;
          local_138._0_8_ = uVar6;
          local_138._s_0.Z = fVar27;
          TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                    (this_01,(TVector<float> *)&local_138._s_0,(TVector<float> *)&local_1f8._s_0,
                     (TVector<float> *)&local_148._s_0);
        }
        else {
          this_00 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar3 + uVar21 * 0x10);
          lVar14 = (**(code **)((longlong)FVar4 + 0x50))();
          if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar3 + lVar14) < this_00 + 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x13d,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((this_00 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                         (this->StaticMeshVertexBuffer).TangentsDataPtr) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x13e,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_208._s_0.X = fVar31;
          local_208._s_0.Y = fVar28;
          local_208._s_0.Z = fVar33;
          local_168._0_8_ = uVar29;
          local_168._s_0.Z = fVar32;
          local_158._0_8_ = uVar6;
          local_158._s_0.Z = fVar27;
          TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                    (this_00,(TVector<float> *)&local_158._s_0,(TVector<float> *)&local_208._s_0,
                     (TVector<float> *)&local_168._s_0);
        }
        if (param_5 != 0) {
          local_1b0 = -0xc - (longlong)local_230;
          pFVar20 = local_230 + 0xc;
          uVar21 = uVar22;
          uVar24 = uVar22;
          local_238 = (ulonglong)param_5;
          do {
            lVar14 = (this->StaticMeshVertexBuffer).NumTexCoords * local_1b8;
            FVar4 = *(this->StaticMeshVertexBuffer).TexcoordData;
            puVar3 = (this->StaticMeshVertexBuffer).TexcoordDataPtr;
            if ((this->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
              lVar15 = (**(code **)((longlong)FVar4 + 0x50))();
              if ((puVar3 + lVar15 < puVar3 + uVar21 + lVar14 * 4 + 4) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                      ,0x166,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar1 = (ushort *)(puVar3 + uVar24 + lVar14 * 4);
              if ((puVar1 < (this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                      ,0x167,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_248 = 0;
              FGenericPlatformMath::StoreHalf(&local_248,*(float *)pFVar20);
              *puVar1 = local_248;
              in_XMM1 = ZEXT416((uint)*(float *)(pFVar20 + 4));
              local_246[0] = 0;
              FGenericPlatformMath::StoreHalf(local_246,*(float *)(pFVar20 + 4));
              puVar1[1] = local_246[0];
            }
            else {
              pFVar23 = pFVar20 + lVar14 * 8 + (longlong)puVar3 + local_1b0;
              lVar14 = (**(code **)((longlong)FVar4 + 0x50))();
              if (((FScriptContainerElement *)(puVar3 + lVar14) < pFVar23 + 8) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                      ,0x15d,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((pFVar23 < (FScriptContainerElement *)
                             (this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                      ,0x15e,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(undefined8 *)pFVar23 = *(undefined8 *)pFVar20;
            }
            uVar21 = uVar21 + 4;
            pFVar20 = pFVar20 + 8;
            uVar24 = uVar24 + 4;
            local_238 = local_238 - 1;
          } while (local_238 != 0);
        }
        uVar18 = local_240 * (this->ColorVertexBuffer).Stride;
        local_240 = local_240 + 1;
        uVar21 = (ulonglong)local_240;
        local_228 = local_228 + 0x58;
        *(undefined4 *)((this->ColorVertexBuffer).Data + uVar18) = *(undefined4 *)(local_230 + 0x54)
        ;
        iVar17 = local_1a8->ArrayNum;
        param_2 = local_198;
        param_4 = local_1a8;
        param_1 = local_1a0;
      } while ((int)local_240 < iVar17);
    }
  }
  pFStack_120 = local_190;
  local_128 = this;
  local_118 = param_6;
  if (param_1 == (FRHICommandListBase *)0x0) {
    local_108[0] = (code *)0x0;
    local_e0 = FMemory::Malloc(0x20,8);
    *local_e0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_e0[1] = (code *)local_128;
    local_e0[2] = (code *)pFStack_120;
    local_e0[3] = (code *)CONCAT44(uStack_114,local_118);
    if (local_e0 + 1 != (code **)0x0) {
      local_108[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l2::<lambda_1>,void,FRHICommandList_&>
                     ::Call;
    }
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitFromDynamicVertex_::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>
              (param_2,(TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_108);
    if (local_108[0] != (code *)0x0) {
      ppcVar16 = local_108 + 2;
      if (local_e0 != (code **)0x0) {
        ppcVar16 = local_e0;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
  }
  else {
    `FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l2::<lambda_1>::operator()
              (&local_128,param_1);
  }
  return;
}

// InitModelBuffers @ 148745850

void __thiscall
FStaticMeshVertexBuffers::InitModelBuffers
          (FStaticMeshVertexBuffers *this,TArray<FModelVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this_00;
  TStaticMeshVertexTangentDatum<FPackedNormal> *this_01;
  uchar *puVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  FScriptContainerElement *pFVar8;
  uchar *puVar9;
  FStaticMeshVertexDataInterface FVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ushort local_res18 [4];
  ushort local_res20 [4];
  ushort local_168;
  ushort local_166 [3];
  float local_160;
  TVector2<float>_u_0 local_158;
  TVector2<float>_u_0 local_150;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  undefined8 local_b8;
  
  if (param_1->ArrayNum == 0) {
    FPositionVertexBuffer::Init(&this->PositionVertexBuffer,1,true);
    FStaticMeshVertexBuffer::Init(&this->StaticMeshVertexBuffer,1,2,true);
    puVar9 = (this->PositionVertexBuffer).Data;
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    puVar9[4] = '\0';
    puVar9[5] = '\0';
    puVar9[6] = '\0';
    puVar9[7] = '\0';
    puVar9[8] = '\0';
    puVar9[9] = '\0';
    puVar9[10] = '\0';
    puVar9[0xb] = '\0';
    local_108._0_8_ = 0;
    local_f8._s_0.X = 0.0;
    local_e8._s_0.Z = 0.0;
    local_108._s_0.Z = 1.0;
    local_f8._4_8_ = 0x3f800000;
    local_e8._0_8_ = 0x3f800000;
    FStaticMeshVertexBuffer::SetVertexTangents
              (&this->StaticMeshVertexBuffer,0,(TVector<float> *)&local_e8._s_0,
               (TVector<float> *)&local_f8._s_0,(TVector<float> *)&local_108._s_0);
    local_158 = (TVector2<float>_u_0)0x0;
    FStaticMeshVertexBuffer::SetVertexUV
              (&this->StaticMeshVertexBuffer,0,0,(TVector2<float> *)&local_158._s_0,false);
    local_150 = (TVector2<float>_u_0)0x0;
    FStaticMeshVertexBuffer::SetVertexUV
              (&this->StaticMeshVertexBuffer,0,1,(TVector2<float> *)&local_150._s_0,false);
    return;
  }
  FPositionVertexBuffer::Init(&this->PositionVertexBuffer,param_1->ArrayNum,true);
  (this->StaticMeshVertexBuffer).bUseFullPrecisionUVs = true;
  FStaticMeshVertexBuffer::Init(&this->StaticMeshVertexBuffer,param_1->ArrayNum,2,true);
  iVar17 = param_1->ArrayNum;
  uVar19 = 0;
  if (0 < iVar17) {
    lVar18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar19 < iVar17) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      uVar16 = (ulonglong)(uVar19 * (this->PositionVertexBuffer).Stride);
      puVar9 = (this->PositionVertexBuffer).Data;
      uVar7 = *(undefined4 *)(pFVar8 + lVar18 + 8);
      *(undefined8 *)(puVar9 + uVar16) = *(undefined8 *)(pFVar8 + lVar18);
      *(undefined4 *)(puVar9 + uVar16 + 8) = uVar7;
      local_b8 = *(undefined8 *)(pFVar8 + lVar18 + 0xc);
      fVar22 = *(float *)(pFVar8 + lVar18 + 0x2c);
      fVar20 = (float)((ulonglong)local_b8 >> 0x20);
      fVar3 = *(float *)(pFVar8 + lVar18 + 0x24);
      fVar4 = *(float *)(pFVar8 + lVar18 + 0x28);
      fVar5 = *(float *)(pFVar8 + lVar18 + 0x20);
      local_160 = *(float *)(pFVar8 + lVar18 + 0x14);
      uVar6 = *(undefined8 *)(pFVar8 + lVar18 + 0xc);
      puVar9 = (this->StaticMeshVertexBuffer).TangentsDataPtr;
      FVar10 = *(this->StaticMeshVertexBuffer).TangentsData;
      fVar21 = (*(float *)(pFVar8 + lVar18 + 0x14) * fVar3 - fVar20 * fVar4) * fVar22;
      fVar20 = (fVar20 * fVar5 - (float)local_b8 * fVar3) * fVar22;
      fVar22 = ((float)local_b8 * fVar4 - *(float *)(pFVar8 + lVar18 + 0x14) * fVar5) * fVar22;
      if ((this->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis == false) {
        this_01 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar9 + (ulonglong)uVar19 * 8);
        lVar14 = (**(code **)((longlong)FVar10 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar9 + lVar14) < this_01 + 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x145,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((this_01 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                       (this->StaticMeshVertexBuffer).TangentsDataPtr) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x146,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_c8._s_0.Z = local_160;
        local_128._s_0.X = fVar5;
        local_128._s_0.Y = fVar3;
        local_128._s_0.Z = fVar4;
        local_118._s_0.X = fVar21;
        local_118._s_0.Y = fVar22;
        local_118._s_0.Z = fVar20;
        local_c8._0_8_ = uVar6;
        TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                  (this_01,(TVector<float> *)&local_c8._s_0,(TVector<float> *)&local_118._s_0,
                   (TVector<float> *)&local_128._s_0);
      }
      else {
        this_00 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                  (puVar9 + (ulonglong)uVar19 * 0x10);
        lVar14 = (**(code **)((longlong)FVar10 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar9 + lVar14) < this_00 + 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13d,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((this_00 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                       (this->StaticMeshVertexBuffer).TangentsDataPtr) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13e,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_d8._s_0.Z = local_160;
        local_148._s_0.X = fVar5;
        local_148._s_0.Y = fVar3;
        local_148._s_0.Z = fVar4;
        local_138._s_0.X = fVar21;
        local_138._s_0.Y = fVar22;
        local_138._s_0.Z = fVar20;
        local_d8._0_8_ = uVar6;
        TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                  (this_00,(TVector<float> *)&local_d8._s_0,(TVector<float> *)&local_138._s_0,
                   (TVector<float> *)&local_148._s_0);
      }
      puVar9 = (this->StaticMeshVertexBuffer).TexcoordDataPtr;
      lVar14 = (ulonglong)(this->StaticMeshVertexBuffer).NumTexCoords * (ulonglong)uVar19;
      FVar10 = *(this->StaticMeshVertexBuffer).TexcoordData;
      if ((this->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar9 + lVar14 * 4);
        lVar14 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar14 < puVar2 + 2) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_res18[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res18,*(float *)(pFVar8 + lVar18 + 0x30));
        *puVar2 = local_res18[0];
        local_res20[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res20,*(float *)(pFVar8 + lVar18 + 0x34));
        puVar2[1] = local_res20[0];
      }
      else {
        puVar1 = puVar9 + lVar14 * 8;
        lVar14 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar14 < puVar1 + 8) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar1 < (this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(undefined8 *)puVar1 = *(undefined8 *)(pFVar8 + lVar18 + 0x30);
      }
      puVar9 = (this->StaticMeshVertexBuffer).TexcoordDataPtr;
      lVar14 = (ulonglong)(this->StaticMeshVertexBuffer).NumTexCoords * (ulonglong)uVar19;
      FVar10 = *(this->StaticMeshVertexBuffer).TexcoordData;
      if ((this->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar9 + lVar14 * 4 + 4);
        lVar15 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar15 < puVar2 + 2) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_168 = 0;
        FGenericPlatformMath::StoreHalf(&local_168,*(float *)(pFVar8 + lVar18 + 0x38));
        *puVar2 = local_168;
        local_166[0] = 0;
        FGenericPlatformMath::StoreHalf(local_166,*(float *)(pFVar8 + lVar18 + 0x3c));
        *(ushort *)(puVar9 + lVar14 * 4 + 6) = local_166[0];
      }
      else {
        puVar1 = puVar9 + (lVar14 + 1) * 8;
        lVar14 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar14 < puVar1 + 8) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar1 < (this->StaticMeshVertexBuffer).TexcoordDataPtr) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(undefined8 *)puVar1 = *(undefined8 *)(pFVar8 + lVar18 + 0x38);
      }
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x40;
      iVar17 = param_1->ArrayNum;
    } while ((int)uVar19 < iVar17);
  }
  return;
}

// InitModelVF @ 148745f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffers::InitModelVF
          (FStaticMeshVertexBuffers *this,FRHICommandListBase *param_1,FRenderCommandPipe *param_2,
          FLocalVertexFactory *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  FStaticMeshVertexBuffers *local_58;
  FLocalVertexFactory *local_50;
  code *local_48 [2];
  undefined **local_38;
  FStaticMeshVertexBuffers *local_30;
  FLocalVertexFactory *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = this;
  local_50 = param_3;
  if (param_1 != (FRHICommandListBase *)0x0) {
    `FStaticMeshVertexBuffers::InitModelVF'::__l2::<lambda_1>::operator()(&local_58,param_1);
    return;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitModelVF'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshVertexBuffers::InitModelVF'::__l2::<lambda_1>,void,FRHICommandList_&>
                ::Call;
  local_30 = this;
  local_28 = param_3;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitModelVF_::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>
            (param_2,(TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// InitWithDummyData @ 148748f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshVertexBuffers::InitWithDummyData
          (FStaticMeshVertexBuffers *this,FRHICommandListBase *param_1,FRenderCommandPipe *param_2,
          FLocalVertexFactory *param_3,uint param_4,uint param_5,uint param_6)

{
  code *pcVar1;
  bool bVar2;
  code **ppcVar3;
  undefined1 auStack_b8 [32];
  FStaticMeshVertexBuffers *local_98;
  FLocalVertexFactory *pFStack_90;
  uint local_88;
  undefined4 uStack_84;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumVerticies",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x53d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (6 < param_5 - 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumTexCoords < MAX_STATIC_TEXCOORDS && NumTexCoords > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x53e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_5 <= param_6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LightMapIndex < NumTexCoords",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x53f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPositionVertexBuffer::Init(&this->PositionVertexBuffer,param_4,true);
  FStaticMeshVertexBuffer::Init(&this->StaticMeshVertexBuffer,param_4,param_5,true);
  FColorVertexBuffer::Init(&this->ColorVertexBuffer,param_4,true);
  local_88 = param_6;
  local_98 = this;
  pFStack_90 = param_3;
  if (param_1 == (FRHICommandListBase *)0x0) {
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x20,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FStaticMeshVertexBuffers::InitWithDummyData'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_50[1] = (code *)local_98;
    local_50[2] = (code *)pFStack_90;
    local_50[3] = (code *)CONCAT44(uStack_84,local_88);
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FStaticMeshVertexBuffers::InitWithDummyData'::__l2::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
    }
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FStaticMeshVertexBuffers::InitWithDummyData_::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>
              (param_2,(TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar3 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar3 = local_50;
      }
      (**(code **)(*ppcVar3 + 0x10))();
    }
  }
  else {
    `FStaticMeshVertexBuffers::InitWithDummyData'::__l2::<lambda_1>::operator()(&local_98,param_1);
  }
  return;
}

