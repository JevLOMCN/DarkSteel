// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 31

// StaticClass @ 1498550b0

UClass * __cdecl UPCGBaseTextureData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseTextureData",
               &Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton,
               StaticRegisterNativesUPCGBaseTextureData,0x260,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBaseTextureData>,
               InternalVTableHelperCtorCaller<UPCGBaseTextureData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton;
}

// UPCGBaseTextureData @ 14988d6d0

UPCGBaseTextureData * __thiscall
UPCGBaseTextureData::UPCGBaseTextureData(UPCGBaseTextureData *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->bUseDensitySourceChannel = false;
  this->ColorChannel = Alpha;
  this->_padding_ = (longlong)&___7UPCGBaseTextureData__6B_;
  this->Filter = Bilinear;
  (this->Tiling).field0_0x0._s_0.X = 1.0;
  (this->Tiling).field0_0x0._s_0.Y = 1.0;
  this->TexelSize = 50.0;
  this->bUseAdvancedTiling = false;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->Rotation = 0.0;
  this->bUseTileBounds = false;
  (this->CenterOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->TileBounds).Min.field0_0x0._s_0.X = -0.5;
  (this->TileBounds).Min.field0_0x0._s_0.Y = -0.5;
  (this->TileBounds).Max.field0_0x0._s_0.X = 0.5;
  (this->TileBounds).Max.field0_0x0._s_0.Y = 0.5;
  (this->TileBounds).bIsValid = true;
  (this->ColorData).ArrayNum = 0;
  (this->ColorData).ArrayMax = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->ColorData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  this->bSkipReadbackToCPU = false;
  this->bEmittedNoReadbackDataError = false;
  this->Height = 0;
  this->Width = 0;
  return this;
}

// UPCGBaseTextureData @ 14988d7f0

UPCGBaseTextureData * __thiscall
UPCGBaseTextureData::UPCGBaseTextureData(UPCGBaseTextureData *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->bUseDensitySourceChannel = false;
  this->ColorChannel = Alpha;
  this->_padding_ = (longlong)&___7UPCGBaseTextureData__6B_;
  this->Filter = Bilinear;
  (this->Tiling).field0_0x0._s_0.X = 1.0;
  (this->Tiling).field0_0x0._s_0.Y = 1.0;
  this->TexelSize = 50.0;
  this->bUseAdvancedTiling = false;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->Rotation = 0.0;
  this->bUseTileBounds = false;
  (this->CenterOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->TileBounds).Min.field0_0x0._s_0.X = -0.5;
  (this->TileBounds).Min.field0_0x0._s_0.Y = -0.5;
  (this->TileBounds).Max.field0_0x0._s_0.X = 0.5;
  (this->TileBounds).Max.field0_0x0._s_0.Y = 0.5;
  (this->TileBounds).bIsValid = true;
  (this->ColorData).ArrayNum = 0;
  (this->ColorData).ArrayMax = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->ColorData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  this->bSkipReadbackToCPU = false;
  this->bEmittedNoReadbackDataError = false;
  this->Height = 0;
  this->Width = 0;
  return this;
}

// ~UPCGBaseTextureData @ 1498913d0

void __thiscall UPCGBaseTextureData::~UPCGBaseTextureData(UPCGBaseTextureData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGBaseTextureData__6B_;
  pFVar1 = (this->ColorData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// operator() @ 149894690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long64 lVar19;
  bool bVar20;
  int iVar21;
  TTransform<double> *pTVar22;
  float *pfVar23;
  TVector<double> *pTVar24;
  TVector4<double> *pTVar25;
  int *piVar26;
  long64 *plVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined1 auStackY_438 [32];
  FLinearColor_u_0 local_3f8;
  double local_3e8;
  UPCGBaseTextureData *local_3d8;
  code *local_3d0;
  UPCGBaseTextureData **local_3c8;
  TVector2<double>_u_0 local_3c0;
  FPCGPoint local_3a8;
  TTransform<double> local_2d8;
  FPCGPointValueRanges local_278;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  iVar29 = 0;
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_278,*(UPCGBasePointData **)((longlong)this + 0x18),false);
  dVar6 = __real_3fe0000000000000;
  iVar28 = param_3 + param_1;
  if (param_1 < iVar28) {
    uVar33 = (undefined4)__real_3ff0000000000000;
    uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_3c8 = &local_3d8;
    local_3d0 = UE::Core::Private::Function::
                TFunctionRefCaller<``UPCGBaseTextureData::CreateBasePointData'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,FLinearColor,int>
                ::Call;
    do {
      iVar21 = *(int *)((longlong)this + 8);
      local_3d8 = *(UPCGBaseTextureData **)this;
      dVar49 = (double)(param_1 / iVar21);
      dVar48 = (double)(param_1 % iVar21);
      dVar48 = (dVar48 + dVar48 + dVar6) / (double)iVar21 - (double)CONCAT44(uVar34,uVar33);
      dVar49 = (dVar49 + dVar49 + dVar6) / (double)*(int *)((longlong)this + 0xc) -
               (double)CONCAT44(uVar34,uVar33);
      local_3f8 = (FLinearColor_u_0)ZEXT816(0);
      local_3c0._s_0.X = dVar48;
      local_3c0._s_0.Y = dVar49;
      bVar20 = PCGTextureSamplingHelpers::Sample<FLinearColor>
                         ((TVector2<double> *)&local_3c0._s_0,
                          *(TBox2<double> **)((longlong)this + 0x10),local_3d8,local_3d8->Width,
                          local_3d8->Height,(FLinearColor *)&local_3f8._s_0,
                          (TFunctionRef<FLinearColor___cdecl(int)> *)&local_3d0);
      if (bVar20) {
        lVar2 = *(longlong *)this;
        uVar8 = local_3f8._s_0.A;
        uVar7 = local_3f8._s_0.B;
        uVar34 = local_3f8._s_0.G;
        uVar33 = local_3f8._s_0.R;
        uVar53 = __real_3f800000;
        if (*(char *)(lVar2 + 0x1a8) != '\0') {
          cVar1 = *(char *)(lVar2 + 0x1a9);
          uVar53 = local_3f8._s_0.R;
          if (((cVar1 != '\0') && (uVar53 = local_3f8._s_0.G, cVar1 != '\x01')) &&
             (uVar53 = local_3f8._s_0.B, cVar1 != '\x02')) {
            uVar53 = local_3f8._s_0.A;
          }
          if (((float)uVar53 <= 0.0) && (*(char *)(lVar2 + 0x50) == '\0')) goto LAB_149894c0f;
        }
        iVar21 = PCGHelpers::ComputeSeed(param_1 % iVar21,param_1 / iVar21);
        lVar2 = *(longlong *)this;
        auVar43 = *(undefined1 (*) [16])(lVar2 + 0x120);
        auVar32 = *(undefined1 (*) [16])(lVar2 + 0x110);
        dVar5 = *(double *)(lVar2 + 0x128);
        dVar48 = *(double *)(lVar2 + 0x150) * dVar48;
        dVar49 = *(double *)(lVar2 + 0x158) * dVar49;
        uVar47 = (undefined4)((ulonglong)dVar49 >> 0x20);
        dVar4 = *(double *)(lVar2 + 0x160) * 0.0;
        dVar44 = *(double *)(lVar2 + 0x168) * 0.0;
                    /* WARNING: Load size is inaccurate */
        local_3f8 = *(FLinearColor_u_0 *)((FLinearColor_u_0 *)(lVar2 + 0x110))->RGBA;
        auVar50._8_4_ = SUB84(dVar49,0);
        auVar50._0_8_ = dVar48;
        auVar50._12_4_ = uVar47;
        auVar36 = blendpd((undefined1  [16])local_3f8,auVar43,2);
        dVar3 = auVar43._0_8_;
        auVar51._0_8_ = auVar50._8_8_ * local_3f8._0_8_ - local_3f8._8_8_ * dVar48;
        auVar51._8_8_ = dVar4 * local_3f8._8_8_ - dVar3 * dVar49;
        auVar39._8_4_ = SUB84(dVar49,0);
        auVar39._0_8_ = dVar48;
        auVar39._12_4_ = uVar47;
        auVar30._8_4_ = SUB84(dVar44,0);
        auVar30._0_8_ = dVar4;
        auVar30._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        auVar30 = blendpd(auVar39,auVar30,2);
        auVar31._0_8_ = auVar30._0_8_ * dVar3 - auVar36._0_8_ * dVar4;
        auVar31._8_8_ = auVar30._8_8_ * auVar43._8_8_ - auVar36._8_8_ * dVar44;
        auVar30 = blendpd(auVar51,auVar31,2);
        dVar44 = auVar51._8_8_ + auVar51._8_8_;
        dVar46 = auVar31._0_8_ + auVar31._0_8_;
        auVar52._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar52._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        auVar41._8_4_ = SUB84(dVar46,0);
        auVar41._0_8_ = dVar44;
        uVar47 = (undefined4)((ulonglong)dVar46 >> 0x20);
        auVar41._12_4_ = uVar47;
        auVar36._8_4_ = SUB84(dVar46,0);
        auVar36._0_8_ = dVar44;
        auVar36._12_4_ = uVar47;
        auVar39 = blendpd(auVar32,auVar43,2);
        auVar42._0_8_ = auVar41._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar44;
        auVar42._8_8_ = auVar52._0_8_ * auVar32._8_8_ - dVar3 * dVar46;
        auVar30 = blendpd(auVar36,auVar52,2);
        auVar32._8_4_ = SUB84(auVar42._8_8_,0);
        auVar32._0_8_ = auVar42._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
        auVar37._0_8_ = auVar30._0_8_ * dVar3 - auVar39._0_8_ * auVar52._0_8_;
        auVar37._8_8_ = auVar30._8_8_ * auVar43._8_8_ - auVar39._8_8_ * auVar52._8_8_;
        local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2d8.Translation.XY.m128d_f64[0] =
             dVar44 * dVar5 + dVar48 + auVar32._8_8_ + *(double *)(lVar2 + 0x130);
        local_2d8.Translation.XY.m128d_f64[1] =
             dVar46 * dVar5 + dVar49 + auVar37._0_8_ + *(double *)(lVar2 + 0x138);
        auVar43 = blendpd(auVar42,auVar37,2);
        local_3e8 = auVar52._0_8_ * dVar5 + dVar4 + auVar43._0_8_ + *(double *)(lVar2 + 0x140);
        local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_2d8.Translation.ZW.m128d_f64[1] = 0.0;
        local_2d8.Translation.ZW.m128d_f64[0] = local_3e8;
        FPCGPoint::FPCGPoint(&local_3a8,&local_2d8,(float)uVar53,iVar21);
        dVar13 = local_3a8.Transform.Scale3D.ZW.m128d_f64[1];
        dVar12 = local_3a8.Transform.Scale3D.ZW.m128d_f64[0];
        dVar11 = local_3a8.Transform.Scale3D.XY.m128d_f64[1];
        dVar10 = local_3a8.Transform.Scale3D.XY.m128d_f64[0];
        dVar9 = local_3a8.Transform.Translation.ZW.m128d_f64[1];
        dVar46 = local_3a8.Transform.Translation.ZW.m128d_f64[0];
        dVar5 = local_3a8.Transform.Translation.XY.m128d_f64[1];
        dVar44 = local_3a8.Transform.Translation.XY.m128d_f64[0];
        dVar4 = local_3a8.Transform.Rotation.ZW.m128d_f64[1];
        dVar3 = local_3a8.Transform.Rotation.ZW.m128d_f64[0];
        dVar49 = local_3a8.Transform.Rotation.XY.m128d_f64[1];
        dVar48 = local_3a8.Transform.Rotation.XY.m128d_f64[0];
        dVar40 = (local_3a8.BoundsMin.field0_0x0._s_0.X + local_3a8.BoundsMax.field0_0x0._s_0.X) *
                 dVar6;
        dVar38 = (local_3a8.BoundsMin.field0_0x0._s_0.Y + local_3a8.BoundsMax.field0_0x0._s_0.Y) *
                 dVar6;
        dVar35 = (local_3a8.BoundsMin.field0_0x0._s_0.Z + local_3a8.BoundsMax.field0_0x0._s_0.Z) *
                 dVar6;
        dVar45 = (double)*(float *)(*(longlong *)this + 0x1ac) * dVar6;
        local_3a8.BoundsMin.field0_0x0._s_0.X = dVar40 - dVar45;
        local_3a8.BoundsMax.field0_0x0._s_0.X = dVar45 + dVar40;
        local_3a8.BoundsMin.field0_0x0._s_0.Y = dVar38 - dVar45;
        local_3a8.Color.field0_0x0._s_0.Y = (double)(float)uVar34;
        local_3a8.BoundsMin.field0_0x0._s_0.Z = dVar35 - dVar45;
        local_3a8.Color.field0_0x0._s_0.W = (double)(float)uVar8;
        local_3a8.BoundsMax.field0_0x0._s_0.Y = dVar45 + dVar38;
        local_3a8.BoundsMax.field0_0x0._s_0.Z = dVar45 + dVar35;
        local_3a8.Color.field0_0x0._s_0.X = (double)(float)uVar33;
        local_3a8.Color.field0_0x0._s_0.Z = (double)(float)uVar7;
        if (local_278.TransformRange.NumElements != 0) {
          pTVar22 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_278.TransformRange,param_2);
          (pTVar22->Rotation).XY.m128d_f64[0] = dVar48;
          (pTVar22->Rotation).XY.m128d_f64[1] = dVar49;
          (pTVar22->Rotation).ZW.m128d_f64[0] = dVar3;
          (pTVar22->Rotation).ZW.m128d_f64[1] = dVar4;
          (pTVar22->Translation).XY.m128d_f64[0] = dVar44;
          (pTVar22->Translation).XY.m128d_f64[1] = dVar5;
          (pTVar22->Translation).ZW.m128d_f64[0] = dVar46;
          (pTVar22->Translation).ZW.m128d_f64[1] = dVar9;
          (pTVar22->Scale3D).XY.m128d_f64[0] = dVar10;
          (pTVar22->Scale3D).XY.m128d_f64[1] = dVar11;
          (pTVar22->Scale3D).ZW.m128d_f64[0] = dVar12;
          (pTVar22->Scale3D).ZW.m128d_f64[1] = dVar13;
        }
        fVar14 = local_3a8.Density;
        if (local_278.DensityRange.NumElements != 0) {
          pfVar23 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_278.DensityRange,param_2);
          *pfVar23 = fVar14;
        }
        fVar14 = local_3a8.Steepness;
        if (local_278.SteepnessRange.NumElements != 0) {
          pfVar23 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_278.SteepnessRange,param_2);
          *pfVar23 = fVar14;
        }
        uVar17 = local_3a8.BoundsMin.field0_0x0._s_0.Z;
        uVar16 = local_3a8.BoundsMin.field0_0x0._s_0.Y;
        uVar15 = local_3a8.BoundsMin.field0_0x0._s_0.X;
        if (local_278.BoundsMinRange.NumElements != 0) {
          pTVar24 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_278.BoundsMinRange,param_2);
          (pTVar24->field0_0x0)._s_0.X = (double)uVar15;
          (pTVar24->field0_0x0)._s_0.Y = (double)uVar16;
          (pTVar24->field0_0x0)._s_0.Z = (double)uVar17;
        }
        uVar17 = local_3a8.BoundsMax.field0_0x0._s_0.Z;
        uVar16 = local_3a8.BoundsMax.field0_0x0._s_0.Y;
        uVar15 = local_3a8.BoundsMax.field0_0x0._s_0.X;
        if (local_278.BoundsMaxRange.NumElements != 0) {
          pTVar24 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_278.BoundsMaxRange,param_2);
          (pTVar24->field0_0x0)._s_0.X = (double)uVar15;
          (pTVar24->field0_0x0)._s_0.Y = (double)uVar16;
          (pTVar24->field0_0x0)._s_0.Z = (double)uVar17;
        }
        uVar18 = local_3a8.Color.field0_0x0._s_0.W;
        uVar17 = local_3a8.Color.field0_0x0._s_0.Z;
        uVar16 = local_3a8.Color.field0_0x0._s_0.Y;
        uVar15 = local_3a8.Color.field0_0x0._s_0.X;
        if (local_278.ColorRange.NumElements != 0) {
          pTVar25 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_278.ColorRange,param_2);
          (pTVar25->field0_0x0)._s_0.X = (double)uVar15;
          (pTVar25->field0_0x0)._s_0.Y = (double)uVar16;
          (pTVar25->field0_0x0)._s_0.Z = (double)uVar17;
          (pTVar25->field0_0x0)._s_0.W = (double)uVar18;
        }
        iVar21 = local_3a8.Seed;
        if (local_278.SeedRange.NumElements != 0) {
          piVar26 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_278.SeedRange,param_2);
          *piVar26 = iVar21;
        }
        lVar19 = local_3a8.MetadataEntry;
        if (local_278.MetadataEntryRange.NumElements != 0) {
          plVar27 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_278.MetadataEntryRange,param_2);
          *plVar27 = lVar19;
        }
        iVar29 = iVar29 + 1;
        param_2 = param_2 + 1;
      }
LAB_149894c0f:
      uVar33 = (undefined4)__real_3ff0000000000000;
      uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      param_1 = param_1 + 1;
    } while (param_1 < iVar28);
  }
  return iVar29;
}

// operator() @ 149896630

FLinearColor * __thiscall
`UPCGBaseTextureData::SamplePointLocal'::__l2::<lambda_1>::operator()
          (void *this,FLinearColor *__return_storage_ptr__,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x210)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLinearColor *)(*pcVar3)();
      return pFVar7;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x208) + (longlong)param_1 * 0x10);
  uVar4 = puVar1[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
  return __return_storage_ptr__;
}

// operator() @ 149896ce0

FLinearColor * __thiscall
`UPCGBaseTextureData::SamplePoint'::__l30::<lambda_1>::operator()
          (void *this,FLinearColor *__return_storage_ptr__,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x210)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FLinearColor *)(*pcVar3)();
      return pFVar7;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x208) + (longlong)param_1 * 0x10);
  uVar4 = puVar1[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
  return __return_storage_ptr__;
}

// CopyBaseTextureData @ 1498a3470

void __thiscall
UPCGBaseTextureData::CopyBaseTextureData(UPCGBaseTextureData *this,UPCGBaseTextureData *param_1)

{
  int *piVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  double dVar6;
  undefined7 uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  
  lVar5 = this->_padding_;
  pTVar2 = &param_1->ColorData;
  param_1->_padding_ = this->_padding_;
  param_1->_padding_ = lVar5;
  lVar5 = this->_padding_;
  param_1->_padding_ = this->_padding_;
  param_1->_padding_ = lVar5;
  lVar5 = this->_padding_;
  param_1->_padding_ = this->_padding_;
  param_1->_padding_ = lVar5;
  lVar5 = this->_padding_;
  param_1->_padding_ = this->_padding_;
  param_1->_padding_ = lVar5;
  lVar5 = this->_padding_;
  param_1->_padding_ = this->_padding_;
  param_1->_padding_ = lVar5;
  lVar5 = this->_padding_;
  param_1->_padding_ = this->_padding_;
  param_1->_padding_ = lVar5;
  *(char *)&param_1->_padding_ = (char)this->_padding_;
  param_1->bUseDensitySourceChannel = this->bUseDensitySourceChannel;
  param_1->ColorChannel = this->ColorChannel;
  param_1->TexelSize = this->TexelSize;
  param_1->bUseAdvancedTiling = this->bUseAdvancedTiling;
  dVar6 = (this->Tiling).field0_0x0._s_0.Y;
  (param_1->Tiling).field0_0x0._s_0.X = (this->Tiling).field0_0x0._s_0.X;
  (param_1->Tiling).field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->CenterOffset).field0_0x0._s_0.Y;
  (param_1->CenterOffset).field0_0x0._s_0.X = (this->CenterOffset).field0_0x0._s_0.X;
  (param_1->CenterOffset).field0_0x0._s_0.Y = dVar6;
  param_1->Rotation = this->Rotation;
  param_1->bUseTileBounds = this->bUseTileBounds;
  dVar6 = (this->TileBounds).Min.field0_0x0._s_0.Y;
  (param_1->TileBounds).Min.field0_0x0._s_0.X = (this->TileBounds).Min.field0_0x0._s_0.X;
  (param_1->TileBounds).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->TileBounds).Max.field0_0x0._s_0.Y;
  (param_1->TileBounds).Max.field0_0x0._s_0.X = (this->TileBounds).Max.field0_0x0._s_0.X;
  (param_1->TileBounds).Max.field0_0x0._s_0.Y = dVar6;
  uVar7 = *(undefined7 *)&(this->TileBounds).field_0x21;
  (param_1->TileBounds).bIsValid = (this->TileBounds).bIsValid;
  *(undefined7 *)&(param_1->TileBounds).field_0x21 = uVar7;
  if (pTVar2 != &this->ColorData) {
    iVar3 = (param_1->ColorData).ArrayMax;
    piVar1 = &(param_1->ColorData).ArrayMax;
    _Src = (this->ColorData).AllocatorInstance.Data;
    iVar4 = (this->ColorData).ArrayNum;
    (param_1->ColorData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  dVar6 = (this->Bounds).Min.field0_0x0._s_0.Y;
  (param_1->Bounds).Min.field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (param_1->Bounds).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->Bounds).Max.field0_0x0._s_0.X;
  (param_1->Bounds).Min.field0_0x0._s_0.Z = (this->Bounds).Min.field0_0x0._s_0.Z;
  (param_1->Bounds).Max.field0_0x0._s_0.X = dVar6;
  dVar6 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (param_1->Bounds).Max.field0_0x0._s_0.Y = (this->Bounds).Max.field0_0x0._s_0.Y;
  (param_1->Bounds).Max.field0_0x0._s_0.Z = dVar6;
  uVar8 = (this->Bounds).Pad[0];
  uVar9 = (this->Bounds).Pad[1];
  uVar10 = (this->Bounds).Pad[2];
  uVar11 = (this->Bounds).Pad[3];
  uVar12 = (this->Bounds).Pad[4];
  uVar13 = (this->Bounds).Pad[5];
  uVar14 = (this->Bounds).Pad[6];
  (param_1->Bounds).IsValid = (this->Bounds).IsValid;
  (param_1->Bounds).Pad[0] = uVar8;
  (param_1->Bounds).Pad[1] = uVar9;
  (param_1->Bounds).Pad[2] = uVar10;
  (param_1->Bounds).Pad[3] = uVar11;
  (param_1->Bounds).Pad[4] = uVar12;
  (param_1->Bounds).Pad[5] = uVar13;
  (param_1->Bounds).Pad[6] = uVar14;
  param_1->Height = this->Height;
  param_1->Width = this->Width;
  param_1->bSkipReadbackToCPU = this->bSkipReadbackToCPU;
  return;
}

// CreateBasePointData @ 1498a82d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGBaseTextureData::CreateBasePointData
          (UPCGBaseTextureData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  UPackage *pUVar6;
  UPCGBasePointData *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FPCGAsyncState *pFVar10;
  UClass *pUVar11;
  int iVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  <lambda_4> local_res8 [8];
  FName local_res10;
  UPackage *local_res18;
  <lambda_3> local_res20;
  UPCGBaseTextureData *local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined1 local_116;
  undefined1 local_115;
  UClass *local_110;
  void *local_108;
  undefined8 local_100;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_f8;
  undefined8 local_f0;
  <lambda_2> local_e8;
  <lambda_1> local_e0;
  double local_c0;
  double dStack_b8;
  double local_b0;
  TVector2<double>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId294,"UPCGBaseTextureData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGTextureData.cpp"
               ,0x126);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId294);
  }
  pUVar6 = GetTransientPackage();
  pUVar9 = (UClass *)0x0;
  local_res18 = pUVar6;
  if (param_1 == (FPCGContext *)0x0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UPCGBasePointData *)(*pcVar2)();
      return pUVar7;
    }
    lVar1 = *(longlong *)param_2.Class.field0_0x0;
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pUVar11 = pUVar9;
    if ((lVar1 != 0) &&
       (pUVar8 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar12 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar12) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar11 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar7 = NewObject<UPCGBasePointData>
                       ((UObject *)pUVar6,pUVar11,local_res10,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar7 = FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,&local_res18,
                        (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
  }
  local_128 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this == (UPCGBaseTextureData *)0x0))
  {
    local_120 = 0;
    local_115 = 0;
    if (this != (UPCGBaseTextureData *)0x0) {
      pUVar9 = (UClass *)(**(code **)(this->_padding_ + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_120 = 0;
    local_115 = 0;
    pUVar9 = (UClass *)(**(code **)(this->_padding_ + 800))(this);
  }
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_f0 = 0;
  local_118 = 0x101;
  local_116 = 1;
  local_110 = pUVar9;
  (**(code **)(pUVar7->_padding_ + 0x468))(pUVar7,&local_128);
  if ((this != (UPCGBaseTextureData *)0x0) && ((char)local_118 != '\0')) {
    (**(code **)(pUVar7->_padding_ + 0x470))(pUVar7,&local_128);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_f8,(int)local_f0);
  if (local_f8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  cVar4 = (**(code **)(this->_padding_ + 0x498))(this);
  if (cVar4 == '\0') {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else if (this->bSkipReadbackToCPU == false) {
    dVar16 = __real_3ff0000000000000 / (double)this->TexelSize;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (double)this->_padding_ * __real_4000000000000000 * dVar16;
    auVar14 = roundpd(auVar14,auVar14,1);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (double)this->_padding_ * __real_4000000000000000 * dVar16;
    auVar15 = roundpd(auVar15,auVar15,1);
    iVar12 = (int)auVar15._0_8_ * (int)auVar14._0_8_;
    if (iVar12 < 1) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else {
      local_a8._s_0.X = ___xmm_bff0000000000000bff0000000000000;
      local_a8._s_0.Y = _UNK_15076c718;
      local_88 = 1;
      local_98 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_90 = _UNK_150689688;
      (**(code **)(pUVar7->_padding_ + 0x490))(pUVar7,iVar12,0);
      (**(code **)(pUVar7->_padding_ + 0x498))(pUVar7,0x53);
      iVar5 = (**(code **)(pUVar7->_padding_ + 0x640))(pUVar7,1);
      if (iVar5 != 0xff) {
        local_c0 = (double)this->TexelSize * __real_3fe0000000000000;
        dStack_b8 = local_c0;
        local_b0 = local_c0;
        (**(code **)(pUVar7->_padding_ + 0x580))(pUVar7,&local_c0);
      }
      local_e0.Surface = (TBox2<double> *)&local_a8;
      pFVar10 = &param_1->AsyncState;
      if (param_1 == (FPCGContext *)0x0) {
        pFVar10 = (FPCGAsyncState *)0x0;
      }
      local_res20.Data = pUVar7;
      local_e8.Data = pUVar7;
      local_e0.__this = this;
      local_e0.XCount = (int)auVar14._0_8_;
      local_e0.YCount = (int)auVar15._0_8_;
      local_e0.Data = pUVar7;
      FPCGAsync::
      AsyncProcessingRangeEx<_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_4>,_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_1>_&,_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_2>_&,_UPCGBaseTextureData::CreateBasePointData_::__l2::<lambda_3>_&>
                (pFVar10,iVar12,local_res8,&local_e0,&local_e8,&local_res20,false,0x40,true);
    }
  }
  else if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar7;
}

// CreatePointArrayData @ 1498ad640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGBaseTextureData::CreatePointArrayData
          (UPCGBaseTextureData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGBasePointData *pUVar1;
  UPCGPointArrayData *pUVar2;
  UClass *local_res20;
  
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar1 = CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)&local_res20);
  pUVar2 = CastChecked<UPCGPointArrayData,UPCGBasePointData_const_>(pUVar1);
  return pUVar2;
}

// CreatePointData @ 1498ae7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGBaseTextureData::CreatePointData(UPCGBaseTextureData *this,FPCGContext *param_1)

{
  UPCGBasePointData *pUVar1;
  UPCGPointData *pUVar2;
  UClass *local_res18 [2];
  
  local_res18[0] = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar1 = CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)local_res18);
  pUVar2 = CastChecked<UPCGPointData,UPCGBasePointData_const_>(pUVar1);
  return pUVar2;
}

// GetBounds @ 1498b5520

TBox<double> * __thiscall
UPCGBaseTextureData::GetBounds(UPCGBaseTextureData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetDataType @ 1498b8380

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGBaseTextureData::GetDataType(UPCGBaseTextureData *this)

{
  return BaseTexture;
}

// GetDataTypeId @ 1498b84e0

FPCGDataTypeBaseId * __thiscall UPCGBaseTextureData::GetDataTypeId(UPCGBaseTextureData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D,(UObject *)pUVar3,
                         L"PCGDataTypeInfoBaseTexture2D");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8563;
  }
  else {
LAB_1498b8563:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b85ba;
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
    if (bVar2) goto LAB_1498b85bc;
  }
LAB_1498b85ba:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b85bc:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoBaseTexture2D::AsId(void)'
          ::__l2::Id;
}

// GetDensityFunctionEquivalent @ 1498b9700

EPCGTextureDensityFunction __thiscall
UPCGBaseTextureData::GetDensityFunctionEquivalent(UPCGBaseTextureData *this)

{
  return this->bUseDensitySourceChannel != false;
}

// GetPrivateStaticClass @ 1498bbf90

UClass * __cdecl UPCGBaseTextureData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseTextureData",
               &Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton,
               StaticRegisterNativesUPCGBaseTextureData,0x260,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBaseTextureData>,
               InternalVTableHelperCtorCaller<UPCGBaseTextureData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseTextureData.InnerSingleton;
}

// GetRefCountedTexture @ 1498c5290

TRefCountPtr<IPooledRenderTarget> __thiscall
UPCGBaseTextureData::GetRefCountedTexture(UPCGBaseTextureData *this)

{
  IPooledRenderTarget *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// GetStrictBounds @ 1498c74d0

TBox<double> * __thiscall
UPCGBaseTextureData::GetStrictBounds(UPCGBaseTextureData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetTexture @ 1498c7fb0

UTexture * __thiscall UPCGBaseTextureData::GetTexture(UPCGBaseTextureData *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGTextureData.h"
             ,0x72,L"Pure virtual not implemented (%s)");
  return (UTexture *)0x0;
}

// GetTextureRHI @ 1498c8030

TRefCountPtr<FRHITexture> __thiscall UPCGBaseTextureData::GetTextureRHI(UPCGBaseTextureData *this)

{
  FRHITexture *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGTextureData.h"
             ,0x73,L"Pure virtual not implemented (%s)");
  in_RDX->_padding_ = 0;
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetTextureResourceType @ 1498c81c0

EPCGTextureResourceType __thiscall
UPCGBaseTextureData::GetTextureResourceType(UPCGBaseTextureData *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGTextureData.h"
             ,0x74,L"Pure virtual not implemented (%s)");
  return Invalid;
}

// GetTextureSize @ 1498c8210

TIntPoint<int> __thiscall UPCGBaseTextureData::GetTextureSize(UPCGBaseTextureData *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX = this->Width;
  *(int *)((longlong)in_RDX + 4) = this->Height;
  return (TIntPoint<int>)in_RDX;
}

// GetTextureSlice @ 1498c8230

int __thiscall UPCGBaseTextureData::GetTextureSlice(UPCGBaseTextureData *this)

{
  return 0;
}

// IsValid @ 1498d1100

bool __thiscall UPCGBaseTextureData::IsValid(UPCGBaseTextureData *this)

{
  if (((0 < this->Height) && (0 < this->Width)) &&
     (((this->ColorData).ArrayNum != 0 || (this->bSkipReadbackToCPU != false)))) {
    return true;
  }
  return false;
}

// PostLoad @ 1498d25d0

void __thiscall UPCGBaseTextureData::PostLoad(UPCGBaseTextureData *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UPCGBaseTextureData **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// SamplePoint @ 1498d7ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGBaseTextureData::SamplePoint
          (UPCGBaseTextureData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  undefined8 uVar1;
  EPCGTextureColorChannel EVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  char cVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar39;
  undefined4 uVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  FLinearColor_u_0 local_148;
  UPCGBaseTextureData *local_138;
  code *local_130;
  UPCGBaseTextureData **local_128;
  double local_118;
  double dStack_110;
  double local_f8;
  double dStack_f0;
  TVector2<double>_u_0 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  
  cVar11 = (**(code **)(this->_padding_ + 0x498))();
  if (cVar11 != '\0') {
    if (this->bSkipReadbackToCPU == false) {
      dVar4 = (param_1->Rotation).XY.m128d_f64[1];
      (param_3->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar4;
      dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (param_1->Translation).XY.m128d_f64[1];
      (param_3->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
      (param_3->Transform).Translation.XY.m128d_f64[1] = dVar4;
      dVar4 = (param_1->Translation).ZW.m128d_f64[1];
      (param_3->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
      (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar4;
      dVar4 = (param_1->Scale3D).XY.m128d_f64[1];
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
      dVar4 = (param_1->Scale3D).ZW.m128d_f64[1];
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar4;
      dVar36 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar39 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar4 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
      ;
      auVar28._8_4_ = SUB84(dVar39,0);
      auVar28._0_8_ = dVar36;
      uVar40 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar28._12_4_ = uVar40;
      dVar16 = (param_1->Translation).ZW.m128d_f64[0] - (double)this->_padding_;
      auVar30._8_4_ = SUB84(dVar39,0);
      auVar30._0_8_ = dVar36;
      auVar30._12_4_ = uVar40;
      auVar10._4_8_ = unaff_XMM7_Qb;
      auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar41._0_8_ = auVar10._0_8_ << 0x20;
      auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar54._8_4_ = SUB84(dVar5,0);
      auVar54._0_8_ = dVar4;
      auVar54._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar31 = blendpd(auVar30,auVar54,2);
      dVar8 = (param_1->Translation).XY.m128d_f64[0] - (double)this->_padding_;
      dVar46 = (param_1->Translation).XY.m128d_f64[1] - (double)this->_padding_;
      uVar40 = (undefined4)((ulonglong)dVar46 >> 0x20);
      dVar29 = auVar28._8_8_;
      auVar55._8_4_ = SUB84(dVar46,0);
      auVar55._0_8_ = dVar8;
      auVar55._12_4_ = uVar40;
      auVar25._8_4_ = SUB84(dVar46,0);
      auVar25._0_8_ = dVar8;
      auVar25._12_4_ = uVar40;
      auVar17._8_4_ = SUB84(dVar4,0);
      auVar17._0_8_ = dVar29;
      auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar16;
      auVar26 = blendpd(auVar25,auVar9,2);
      auVar56._0_8_ = auVar55._8_8_ * dVar36 - dVar29 * dVar8;
      auVar56._8_8_ = dVar16 * dVar39 - auVar17._8_8_ * dVar46;
      auVar27._0_8_ = auVar26._0_8_ * dVar4 - auVar31._0_8_ * dVar16;
      auVar27._8_8_ = auVar26._8_8_ * dVar5 - auVar31._8_8_ * 0.0;
      dVar50 = auVar56._8_8_ + auVar56._8_8_;
      dVar7 = auVar27._0_8_ + auVar27._0_8_;
      uVar40 = SUB84(dVar7,0);
      uVar51 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar26 = blendpd(auVar56,auVar27,2);
      auVar57._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar57._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar52._8_4_ = uVar40;
      auVar52._0_8_ = dVar50;
      auVar52._12_4_ = uVar51;
      auVar18._8_4_ = uVar40;
      auVar18._0_8_ = dVar50;
      auVar18._12_4_ = uVar51;
      auVar47._8_4_ = uVar40;
      auVar47._0_8_ = dVar50;
      auVar47._12_4_ = uVar51;
      auVar26._0_8_ = this->_padding_;
      auVar26._8_8_ = this->_padding_;
      auVar53._0_8_ = auVar52._8_8_ * dVar36 - dVar50 * dVar29;
      auVar53._8_8_ = auVar57._0_8_ * dVar39 - auVar18._8_8_ * dVar4;
      auVar48 = blendpd(auVar47,auVar57,2);
      auVar19._8_4_ = SUB84(auVar57._8_8_,0);
      auVar19._0_8_ = auVar57._0_8_;
      auVar19._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar49._0_8_ = auVar48._0_8_ * dVar4 - auVar57._0_8_ * auVar31._0_8_;
      auVar49._8_8_ = auVar48._8_8_ * dVar5 - auVar19._8_8_ * auVar31._8_8_;
      uVar1 = this->_padding_;
      auVar42._8_8_ = auVar41._8_8_;
      auVar42._0_8_ = uVar1;
      auVar32._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar26._0_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)auVar26._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ = (uint)auVar26._8_8_ & _UNK_15061cc88;
      auVar32._12_4_ = (uint)((ulonglong)auVar26._8_8_ >> 0x20) & _UNK_15061cc8c;
      lVar13 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  (uint)((ulonglong)uVar1 >> 0x20),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      lVar14 = -(ulonglong)(auVar32._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar15 = -(ulonglong)(auVar32._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
      auVar33._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar31._4_4_,
                            ~(uint)lVar14 & auVar31._0_4_);
      auVar33._8_4_ = ~(uint)lVar15 & auVar31._8_4_;
      auVar33._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar31._12_4_;
      auVar20._8_4_ = SUB84(auVar53._8_8_,0);
      auVar20._0_8_ = auVar53._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
      auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
      local_f8 = auVar33._0_8_ * (dVar50 * dVar5 + dVar8 + auVar20._8_8_);
      dStack_f0 = auVar33._8_8_ * (dVar7 * dVar5 + dVar46 + auVar49._0_8_);
      auVar31._0_8_ = this->_padding_;
      auVar31._8_8_ = this->_padding_;
      dVar8 = (double)this->_padding_;
      auVar54 = blendpd(auVar53,auVar49,2);
      dVar46 = (double)auVar26._0_8_ * local_f8;
      dVar50 = (double)auVar26._8_8_ * dStack_f0;
      auVar43._8_4_ = SUB84(dVar50,0);
      auVar43._0_8_ = dVar46;
      uVar40 = (undefined4)((ulonglong)dVar50 >> 0x20);
      auVar43._12_4_ = uVar40;
      auVar48._0_8_ = this->_padding_;
      auVar48._8_8_ = this->_padding_;
      dVar7 = (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar21._4_4_,
                               ~(uint)lVar13 & auVar21._0_4_) *
              (auVar57._0_8_ * dVar5 + dVar16 + auVar54._0_8_) * (double)this->_padding_;
      dVar4 = (double)this->_padding_ * 0.0;
      auVar21 = blendpd(auVar31,auVar48,2);
      auVar44._0_8_ = auVar43._8_8_ * (double)auVar31._0_8_ - (double)auVar31._8_8_ * dVar46;
      auVar44._8_8_ = dVar7 * (double)auVar31._8_8_ - (double)auVar48._0_8_ * dVar50;
      auVar22._8_4_ = SUB84(dVar50,0);
      auVar22._0_8_ = dVar46;
      auVar22._12_4_ = uVar40;
      auVar6._8_4_ = SUB84(dVar4,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar26 = blendpd(auVar22,auVar6,2);
      auVar23._0_8_ = auVar26._0_8_ * (double)auVar48._0_8_ - auVar21._0_8_ * dVar7;
      auVar23._8_8_ = auVar26._8_8_ * (double)auVar48._8_8_ - auVar21._8_8_ * dVar4;
      auVar21._0_8_ = this->_padding_;
      auVar21._8_8_ = this->_padding_;
      auVar26 = blendpd(auVar44,auVar23,2);
      dVar5 = auVar44._8_8_ + auVar44._8_8_;
      dVar4 = auVar23._0_8_ + auVar23._0_8_;
      uVar40 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar45._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar45._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar37._8_4_ = SUB84(dVar4,0);
      auVar37._0_8_ = dVar5;
      auVar37._12_4_ = uVar40;
      auVar34._8_4_ = SUB84(dVar4,0);
      auVar34._0_8_ = dVar5;
      auVar34._12_4_ = uVar40;
      auVar31 = blendpd(auVar34,auVar45,2);
      auVar26 = blendpd(auVar21,auVar48,2);
      auVar38._0_8_ = auVar37._8_8_ * (double)auVar21._0_8_ - (double)auVar21._8_8_ * dVar5;
      auVar38._8_8_ = auVar45._0_8_ * (double)auVar21._8_8_ - (double)auVar48._0_8_ * dVar4;
      auVar24._8_4_ = SUB84(auVar38._8_8_,0);
      auVar24._0_8_ = auVar38._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
      auVar35._0_8_ = auVar31._0_8_ * (double)auVar48._0_8_ - auVar26._0_8_ * auVar45._0_8_;
      auVar35._8_8_ = auVar31._8_8_ * (double)auVar48._8_8_ - auVar26._8_8_ * auVar45._8_8_;
      auVar26 = blendpd(auVar38,auVar35,2);
      dVar50 = dVar4 * dVar8 + dVar50 + auVar35._0_8_ + (double)this->_padding_;
      dVar4 = (double)this->_padding_;
      auVar3._8_4_ = SUB84(dVar50,0);
      auVar3._0_8_ = dVar5 * dVar8 + dVar46 + auVar24._8_8_ + (double)this->_padding_;
      auVar3._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      *(undefined1 (*) [16])(param_3->Transform).Translation.XY.m128d_f64 = auVar3;
      (param_3->Transform).Translation.ZW.m128d_f64[0] =
           auVar45._0_8_ * dVar8 + dVar7 + auVar26._0_8_ + dVar4;
      (param_3->Transform).Translation.ZW.m128d_f64[1] = 0.0;
      dVar4 = (param_2->Min).field0_0x0._s_0.Y;
      (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
      (param_3->BoundsMin).field0_0x0._s_0.Y = dVar4;
      local_128 = &local_138;
      (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
      dVar4 = (param_2->Max).field0_0x0._s_0.Y;
      local_130 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPCGBaseTextureData::SamplePoint'::__l30::<lambda_1>,FLinearColor,int>
                  ::Call;
      (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
      (param_3->BoundsMax).field0_0x0._s_0.Y = dVar4;
      (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
      dStack_110 = dStack_f0;
      local_118 = local_f8;
      local_c0 = 1;
      local_e0._s_0.X = ___xmm_bff0000000000000bff0000000000000;
      local_e0._s_0.Y = _UNK_15076c718;
      local_148._0_8_ = 0;
      local_148._8_8_ = 0;
      local_d0 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_c8 = _UNK_150689688;
      local_138 = this;
      bVar12 = PCGTextureSamplingHelpers::Sample<FLinearColor>
                         ((TVector2<double> *)&local_118,(TBox2<double> *)&local_e0._s_0,this,
                          this->Width,this->Height,(FLinearColor *)&local_148._s_0,
                          (TFunctionRef<FLinearColor___cdecl(int)> *)&local_130);
      if (bVar12) {
        (param_3->Color).field0_0x0._s_0.X = (double)local_148._s_0.R;
        (param_3->Color).field0_0x0._s_0.Y = (double)local_148._s_0.G;
        (param_3->Color).field0_0x0._s_0.Z = (double)local_148._s_0.B;
        (param_3->Color).field0_0x0._s_0.W = (double)local_148._s_0.A;
        if (this->bUseDensitySourceChannel == false) {
          param_3->Density = __real_3f800000;
        }
        else {
          EVar2 = this->ColorChannel;
          if (((EVar2 != Red) && (local_148._s_0.R = local_148._s_0.G, EVar2 != Green)) &&
             (local_148._s_0.R = local_148._s_0.B, EVar2 != Blue)) {
            local_148._s_0.R = local_148._s_0.A;
          }
          param_3->Density = local_148._s_0.R;
          if ((local_148._s_0.R <= 0.0) && ((char)this->_padding_ == '\0')) {
            return false;
          }
        }
        return true;
      }
    }
    else if (this->bEmittedNoReadbackDataError == false) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bEmittedNoReadbackDataError = true;
    }
  }
  return false;
}

// SamplePointLocal @ 1498dccb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGBaseTextureData::SamplePointLocal
          (UPCGBaseTextureData *this,TVector2<double> *param_1,TVector4<double> *param_2,
          float *param_3)

{
  double dVar1;
  double dVar2;
  EPCGTextureColorChannel EVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  UPCGBaseTextureData *local_res8;
  FLinearColor_u_0 local_38;
  code *local_28;
  UPCGBaseTextureData **local_20;
  TVector2<double>_u_0 local_18;
  
  cVar7 = (**(code **)(this->_padding_ + 0x498))();
  if (cVar7 != '\0') {
    if (this->bSkipReadbackToCPU == false) {
      dVar1 = (param_1->field0_0x0)._s_0.X;
      local_20 = &local_res8;
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      lVar9 = (longlong)dVar1;
      uVar8 = 0x498a1380;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPCGBaseTextureData::SamplePointLocal'::__l2::<lambda_1>,FLinearColor,int>
                 ::Call;
      dVar6 = dVar1;
      if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != dVar1)) {
        auVar4._8_4_ = SUB84(dVar1,0);
        auVar4._0_8_ = dVar1;
        auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        uVar8 = movmskpd(0x498a1380,auVar4);
        uVar8 = uVar8 & 1;
        dVar6 = (double)(longlong)(lVar9 - (ulonglong)uVar8);
      }
      local_18._s_0.X = dVar1 - dVar6;
      lVar9 = (longlong)dVar2;
      dVar1 = dVar2;
      if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != dVar2)) {
        auVar5._8_4_ = SUB84(dVar2,0);
        auVar5._0_8_ = dVar2;
        auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uVar8 = movmskpd(uVar8,auVar5);
        dVar1 = (double)(longlong)(lVar9 - (ulonglong)(uVar8 & 1));
      }
      local_18._s_0.Y = dVar2 - dVar1;
      local_res8 = this;
      PCGTextureSamplingHelpers::SampleInternal<FLinearColor>
                ((FLinearColor *)&local_38._s_0,(TVector2<double> *)&local_18._s_0,this->Width,
                 this->Height,this->Filter,(TFunctionRef<FLinearColor___cdecl(int)> *)&local_28);
      (param_2->field0_0x0)._s_0.X = (double)local_38._s_0.R;
      (param_2->field0_0x0)._s_0.Y = (double)local_38._s_0.G;
      (param_2->field0_0x0)._s_0.Z = (double)local_38._s_0.B;
      (param_2->field0_0x0)._s_0.W = (double)local_38._s_0.A;
      if (this->bUseDensitySourceChannel == false) {
        *param_3 = __real_3f800000;
      }
      else {
        EVar3 = this->ColorChannel;
        if (((EVar3 != Red) && (local_38._s_0.R = local_38._s_0.G, EVar3 != Green)) &&
           (local_38._s_0.R = local_38._s_0.B, EVar3 != Blue)) {
          local_38._s_0.R = local_38._s_0.A;
        }
        *param_3 = local_38._s_0.R;
        if ((local_38._s_0.R <= 0.0) && ((char)this->_padding_ == '\0')) {
          return false;
        }
      }
      return true;
    }
    if (this->bEmittedNoReadbackDataError == false) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bEmittedNoReadbackDataError = true;
    }
  }
  return false;
}

// SetDensityFunctionEquivalent @ 1498defe0

void __thiscall
UPCGBaseTextureData::SetDensityFunctionEquivalent
          (UPCGBaseTextureData *this,EPCGTextureDensityFunction param_1)

{
  this->bUseDensitySourceChannel = param_1 != Ignore;
  return;
}

// StaticRegisterNativesUPCGBaseTextureData @ 1498f67b0

void __cdecl UPCGBaseTextureData::StaticRegisterNativesUPCGBaseTextureData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGBaseTextureData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDensityFunctionEquivalent @ 1498fc7c0

void __cdecl
UPCGBaseTextureData::execGetDensityFunctionEquivalent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[10].field_0x18 != '\0';
  return;
}

// execSetDensityFunctionEquivalent @ 1498ffa50

void __cdecl
UPCGBaseTextureData::execSetDensityFunctionEquivalent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[10].field_0x18 = local_res8[0] != '\0';
  return;
}

