// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 28

// StaticClass @ 149856960

UClass * __cdecl UPCGUnionData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnionData",
               &Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton,
               StaticRegisterNativesUPCGUnionData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGUnionData>,InternalVTableHelperCtorCaller<UPCGUnionData>,
               local_res8,UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton;
}

// UPCGUnionData @ 14988f690

UPCGUnionData * __thiscall UPCGUnionData::UPCGUnionData(UPCGUnionData *this,FVTableHelper *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGUnionData__6B_;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  this->UnionType = LeftToRightPriority;
  this->DensityFunction = Maximum;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).IsValid = '\0';
  (this->CachedStrictBounds).Pad[0] = '\0';
  (this->CachedStrictBounds).Pad[1] = '\0';
  (this->CachedStrictBounds).Pad[2] = '\0';
  (this->CachedStrictBounds).Pad[3] = '\0';
  (this->CachedStrictBounds).Pad[4] = '\0';
  (this->CachedStrictBounds).Pad[5] = '\0';
  (this->CachedStrictBounds).Pad[6] = '\0';
  this->CachedDimension = 0;
  return this;
}

// UPCGUnionData @ 14988f770

UPCGUnionData * __thiscall
UPCGUnionData::UPCGUnionData(UPCGUnionData *this,FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGUnionData__6B_;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  this->UnionType = LeftToRightPriority;
  this->DensityFunction = Maximum;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).IsValid = '\0';
  (this->CachedStrictBounds).Pad[0] = '\0';
  (this->CachedStrictBounds).Pad[1] = '\0';
  (this->CachedStrictBounds).Pad[2] = '\0';
  (this->CachedStrictBounds).Pad[3] = '\0';
  (this->CachedStrictBounds).Pad[4] = '\0';
  (this->CachedStrictBounds).Pad[5] = '\0';
  (this->CachedStrictBounds).Pad[6] = '\0';
  this->CachedDimension = 0;
  return this;
}

// ~UPCGUnionData @ 149891c40

void __thiscall UPCGUnionData::~UPCGUnionData(UPCGUnionData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGUnionData__6B_;
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// operator() @ 1498979a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`UPCGUnionData::CreateSequentialPointData'::__l2::<lambda_3>::operator()
          (void *this,int param_1,int param_2,int param_3,FIndexParams *param_4)

{
  TVector<double>_u_0 *pTVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  UPCGMetadata *pUVar6;
  UPCGMetadata *pUVar7;
  UPCGMetadata *pUVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  TTransform<double> *pTVar26;
  float *pfVar27;
  TVector<double> *pTVar28;
  TVector4<double> *pTVar29;
  int *piVar30;
  long64 *plVar31;
  long64 lVar32;
  TVector4<double>_u_0 *pTVar33;
  long64 *plVar34;
  uint uVar35;
  TVector<double>_u_0 *pTVar36;
  TVector4<double>_u_0 *pTVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  uint uVar49;
  uint uVar50;
  undefined1 auStackY_738 [32];
  int local_6e8;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  FConstPCGPointValueRanges local_6a8;
  FPCGPointValueRanges local_518;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  float local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  double local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  long64 local_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined1 local_288;
  FConstPCGPointValueRanges local_278;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_738;
  plVar5 = *(longlong **)((longlong)this + 0x10);
  uVar49 = param_4->CurrentIndex;
  uVar50 = 0;
  if ((int)uVar49 < (int)plVar5[1]) {
    uVar50 = ~uVar49 >> 0x1f;
  }
  if ((uVar50 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar9 = (code *)swi(3);
    iVar23 = (*pcVar9)();
    return iVar23;
  }
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_278,*(UPCGBasePointData **)(*plVar5 + (longlong)(int)uVar49 * 8));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_518,*(UPCGBasePointData **)((longlong)this + 0x28),false);
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_6a8,*(UPCGBasePointData **)((longlong)this + 0x28));
  uVar20 = _UNK_150689688;
  uVar19 = ___xmm_3ff00000000000003ff0000000000000;
  fVar18 = __real_3f800000;
  iVar23 = param_3 + param_1;
  local_6e8 = 0;
  iVar25 = 0;
  if (param_1 < iVar23) {
    uVar49 = (uint)__xmm_80000000000000008000000000000000;
    uVar50 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar35 = param_4->FirstDataIndex;
      uVar38 = param_2 + local_6e8;
      if (uVar35 != param_4->CurrentIndex) {
        do {
          plVar5 = *(longlong **)((longlong)this + 0x18);
          uVar40 = 0;
          if ((int)uVar35 < (int)plVar5[1]) {
            uVar40 = ~uVar35 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            iVar23 = (*pcVar9)();
            return iVar23;
          }
          plVar5 = *(longlong **)(*plVar5 + (longlong)(int)uVar35 * 8);
          pcVar9 = *(code **)(*plVar5 + 0x3a8);
          uVar40 = 0;
          if (param_1 < local_278.TransformRange.NumElements) {
            uVar40 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            iVar23 = (*pcVar9)();
            return iVar23;
          }
          lVar39 = (longlong)(param_1 % local_278.TransformRange.ElementView.NumElements) *
                   (longlong)local_278.TransformRange.ElementView.BytesBetweenElements;
          pdVar2 = (double *)
                   ((longlong)
                    ((local_278.TransformRange.ElementView.FirstElementPtr)->Translation).XY.
                    m128d_f64 + lVar39);
          local_6c0 = *(undefined4 *)pdVar2;
          uStack_6bc = *(undefined4 *)((longlong)pdVar2 + 4);
          uStack_6b8 = *(undefined4 *)(pdVar2 + 1);
          uStack_6b4 = *(undefined4 *)((longlong)pdVar2 + 0xc);
          pdVar2 = (double *)
                   ((longlong)
                    ((local_278.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                    m128d_f64 + lVar39);
          local_6b0 = *(undefined4 *)pdVar2;
          uStack_6ac = *(undefined4 *)((longlong)pdVar2 + 4);
          fVar41 = (float)(*pcVar9)(plVar5,&local_6c0);
          if (fVar41 != 0.0) goto LAB_14989897e;
          uVar35 = uVar35 + param_4->DataIndexIncrement;
        } while (uVar35 != param_4->CurrentIndex);
      }
      if ((*(longlong *)((longlong)this + 0x30) == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutMetadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                              ,0x1df,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        iVar23 = (*pcVar9)();
        return iVar23;
      }
      if (local_518.TransformRange.NumElements != 0) {
        pTVar26 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_278.TransformRange,param_1);
        dVar3 = (pTVar26->Rotation).XY.m128d_f64[0];
        dVar48 = (pTVar26->Rotation).XY.m128d_f64[1];
        dVar47 = (pTVar26->Rotation).ZW.m128d_f64[0];
        dVar4 = (pTVar26->Rotation).ZW.m128d_f64[1];
        dVar10 = (pTVar26->Translation).XY.m128d_f64[0];
        dVar11 = (pTVar26->Translation).XY.m128d_f64[1];
        dVar12 = (pTVar26->Translation).ZW.m128d_f64[0];
        dVar13 = (pTVar26->Translation).ZW.m128d_f64[1];
        dVar14 = (pTVar26->Scale3D).XY.m128d_f64[0];
        dVar15 = (pTVar26->Scale3D).XY.m128d_f64[1];
        dVar16 = (pTVar26->Scale3D).ZW.m128d_f64[0];
        dVar17 = (pTVar26->Scale3D).ZW.m128d_f64[1];
        pTVar26 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_518.TransformRange,uVar38);
        (pTVar26->Rotation).XY.m128d_f64[0] = dVar3;
        (pTVar26->Rotation).XY.m128d_f64[1] = dVar48;
        (pTVar26->Rotation).ZW.m128d_f64[0] = dVar47;
        (pTVar26->Rotation).ZW.m128d_f64[1] = dVar4;
        (pTVar26->Translation).XY.m128d_f64[0] = dVar10;
        (pTVar26->Translation).XY.m128d_f64[1] = dVar11;
        (pTVar26->Translation).ZW.m128d_f64[0] = dVar12;
        (pTVar26->Translation).ZW.m128d_f64[1] = dVar13;
        (pTVar26->Scale3D).XY.m128d_f64[0] = dVar14;
        (pTVar26->Scale3D).XY.m128d_f64[1] = dVar15;
        (pTVar26->Scale3D).ZW.m128d_f64[0] = dVar16;
        (pTVar26->Scale3D).ZW.m128d_f64[1] = dVar17;
      }
      if (local_518.DensityRange.NumElements != 0) {
        pfVar27 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_278.DensityRange,param_1);
        fVar41 = *pfVar27;
        pfVar27 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_518.DensityRange,uVar38);
        *pfVar27 = fVar41;
      }
      if (local_518.SteepnessRange.NumElements != 0) {
        pfVar27 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_278.SteepnessRange,param_1);
        fVar41 = *pfVar27;
        pfVar27 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_518.SteepnessRange,uVar38);
        *pfVar27 = fVar41;
      }
      if (local_518.BoundsMinRange.NumElements != 0) {
        pTVar28 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_278.BoundsMinRange,param_1);
        dVar48 = (pTVar28->field0_0x0)._s_0.X;
        dVar47 = (pTVar28->field0_0x0)._s_0.Y;
        dVar3 = (pTVar28->field0_0x0)._s_0.Z;
        pTVar28 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_518.BoundsMinRange,uVar38);
        (pTVar28->field0_0x0)._s_0.X = dVar48;
        (pTVar28->field0_0x0)._s_0.Y = dVar47;
        (pTVar28->field0_0x0)._s_0.Z = dVar3;
      }
      if (local_518.BoundsMaxRange.NumElements != 0) {
        pTVar28 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_278.BoundsMaxRange,param_1);
        dVar48 = (pTVar28->field0_0x0)._s_0.X;
        dVar47 = (pTVar28->field0_0x0)._s_0.Y;
        dVar3 = (pTVar28->field0_0x0)._s_0.Z;
        pTVar28 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_518.BoundsMaxRange,uVar38);
        (pTVar28->field0_0x0)._s_0.X = dVar48;
        (pTVar28->field0_0x0)._s_0.Y = dVar47;
        (pTVar28->field0_0x0)._s_0.Z = dVar3;
      }
      if (local_518.ColorRange.NumElements != 0) {
        pTVar29 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_278.ColorRange,param_1);
        dVar3 = (pTVar29->field0_0x0)._s_0.X;
        dVar48 = (pTVar29->field0_0x0)._s_0.Y;
        dVar47 = (pTVar29->field0_0x0)._s_0.Z;
        dVar4 = (pTVar29->field0_0x0)._s_0.W;
        pTVar29 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_518.ColorRange,uVar38);
        (pTVar29->field0_0x0)._s_0.X = dVar3;
        (pTVar29->field0_0x0)._s_0.Y = dVar48;
        (pTVar29->field0_0x0)._s_0.Z = dVar47;
        (pTVar29->field0_0x0)._s_0.W = dVar4;
      }
      if (local_518.SeedRange.NumElements != 0) {
        piVar30 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_278.SeedRange,param_1);
        iVar25 = *piVar30;
        piVar30 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_518.SeedRange,uVar38);
        *piVar30 = iVar25;
      }
      if (local_518.MetadataEntryRange.NumElements != 0) {
        plVar31 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_278.MetadataEntryRange,param_1);
        lVar32 = *plVar31;
        plVar31 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_518.MetadataEntryRange,uVar38);
        *plVar31 = lVar32;
      }
      local_6e8 = local_6e8 + 1;
      plVar5 = *(longlong **)((longlong)this + 0x20);
      uVar35 = param_4->CurrentIndex;
      uVar40 = 0;
      if ((int)uVar35 < (int)plVar5[1]) {
        uVar40 = ~uVar35 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar9 = (code *)swi(3);
        iVar23 = (*pcVar9)();
        return iVar23;
      }
      if (((*(UPCGMetadata **)((longlong)this + 0x30))->Parent).field0_0x0.DebugPtr !=
          *(UPCGMetadata **)(*plVar5 + (longlong)(int)uVar35 * 8)) {
        lVar32 = UPCGMetadata::AddEntry(*(UPCGMetadata **)((longlong)this + 0x30),-1);
        uVar35 = 0;
        if ((int)uVar38 < local_518.MetadataEntryRange.NumElements) {
          uVar35 = ~uVar38 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar21)) {
          pcVar9 = (code *)swi(3);
          iVar23 = (*pcVar9)();
          return iVar23;
        }
        if (uVar38 == (int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements) {
          plVar31 = (long64 *)
                    ((longlong)local_518.MetadataEntryRange.ElementView.BytesBetweenElements *
                     (longlong)((int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements)
                    + (longlong)local_518.MetadataEntryRange.ElementView.FirstElementPtr);
        }
        else {
          plVar31 = &local_518.MetadataEntryRange.StubValue;
        }
        *plVar31 = lVar32;
        pUVar6 = *(UPCGMetadata **)((longlong)this + 0x30);
        uVar35 = 0;
        if ((int)uVar38 < local_518.MetadataEntryRange.NumElements) {
          uVar35 = ~uVar38 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar21)) {
          pcVar9 = (code *)swi(3);
          iVar23 = (*pcVar9)();
          return iVar23;
        }
        if (uVar38 == (int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements) {
          plVar31 = (long64 *)
                    ((longlong)local_518.MetadataEntryRange.ElementView.BytesBetweenElements *
                     (longlong)((int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements)
                    + (longlong)local_518.MetadataEntryRange.ElementView.FirstElementPtr);
        }
        else {
          plVar31 = &local_518.MetadataEntryRange.StubValue;
        }
        uVar35 = param_4->CurrentIndex;
        plVar5 = *(longlong **)((longlong)this + 0x20);
        uVar40 = 0;
        if ((int)uVar35 < (int)plVar5[1]) {
          uVar40 = ~uVar35 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar9 = (code *)swi(3);
          iVar23 = (*pcVar9)();
          return iVar23;
        }
        pUVar7 = *(UPCGMetadata **)(*plVar5 + (longlong)(int)uVar35 * 8);
        uVar35 = 0;
        if (param_1 < local_278.MetadataEntryRange.NumElements) {
          uVar35 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar21)) {
          pcVar9 = (code *)swi(3);
          iVar23 = (*pcVar9)();
          return iVar23;
        }
        UPCGMetadata::SetAttributes
                  (pUVar6,*(long64 *)
                           ((longlong)
                            (param_1 % local_278.MetadataEntryRange.ElementView.NumElements) *
                            (longlong)local_278.MetadataEntryRange.ElementView.BytesBetweenElements
                           + (longlong)local_278.MetadataEntryRange.ElementView.FirstElementPtr),
                   pUVar7,plVar31);
      }
      if (*(char *)(*(longlong *)this + 0x129) == '\x02') {
        uVar35 = 0;
        if ((int)uVar38 < local_518.DensityRange.NumElements) {
          uVar35 = ~uVar38 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar21)) {
          pcVar9 = (code *)swi(3);
          iVar23 = (*pcVar9)();
          return iVar23;
        }
        if (uVar38 == (int)uVar38 % local_518.DensityRange.ElementView.NumElements) {
          pfVar27 = (float *)((longlong)local_518.DensityRange.ElementView.BytesBetweenElements *
                              (longlong)
                              ((int)uVar38 % local_518.DensityRange.ElementView.NumElements) +
                             (longlong)local_518.DensityRange.ElementView.FirstElementPtr);
        }
        else {
          pfVar27 = &local_518.DensityRange.StubValue;
        }
        if (0.0 < *pfVar27) {
          uVar35 = 0;
          if ((int)uVar38 < local_518.DensityRange.NumElements) {
            uVar35 = ~uVar38 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            iVar23 = (*pcVar9)();
            return iVar23;
          }
          if (uVar38 == (int)uVar38 % local_518.DensityRange.ElementView.NumElements) {
            pfVar27 = (float *)((longlong)local_518.DensityRange.ElementView.BytesBetweenElements *
                                (longlong)
                                ((int)uVar38 % local_518.DensityRange.ElementView.NumElements) +
                               (longlong)local_518.DensityRange.ElementView.FirstElementPtr);
          }
          else {
            pfVar27 = &local_518.DensityRange.StubValue;
          }
          *pfVar27 = 1.0;
        }
      }
      uVar35 = param_4->DataIndexIncrement + param_4->CurrentIndex;
      if (uVar35 != param_4->LastDataIndex) {
        uVar40 = ~uVar38 >> 0x1f;
        do {
          plVar5 = *(longlong **)((longlong)this + 0x20);
          uVar24 = 0;
          if ((int)uVar35 < (int)plVar5[1]) {
            uVar24 = ~uVar35 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            iVar23 = (*pcVar9)();
            return iVar23;
          }
          pUVar6 = *(UPCGMetadata **)(*plVar5 + (longlong)(int)uVar35 * 8);
          uVar24 = 0;
          if ((int)uVar38 < local_518.DensityRange.NumElements) {
            uVar24 = uVar40;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            iVar23 = (*pcVar9)();
            return iVar23;
          }
          if (uVar38 == (int)uVar38 % local_518.DensityRange.ElementView.NumElements) {
            pfVar27 = (float *)((longlong)local_518.DensityRange.ElementView.BytesBetweenElements *
                                (longlong)
                                ((int)uVar38 % local_518.DensityRange.ElementView.NumElements) +
                               (longlong)local_518.DensityRange.ElementView.FirstElementPtr);
          }
          else {
            pfVar27 = &local_518.DensityRange.StubValue;
          }
          if ((*pfVar27 <= fVar18 && fVar18 != *pfVar27) ||
             ((pUVar6 != (UPCGMetadata *)0x0 &&
              (iVar25 = UPCGMetadata::GetAttributeCount(pUVar6), iVar25 != 0)))) {
            local_328 = 1.0;
            local_2c8 = 0x3f000000;
            uVar24 = 0;
            if ((int)uVar38 < local_6a8.BoundsMaxRange.NumElements) {
              uVar24 = uVar40;
            }
            local_2c0 = -1;
            local_388._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_388._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_388._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_2e8 = uVar19;
            uStack_2e0 = uVar20;
            local_2d8 = uVar19;
            uStack_2d0 = uVar20;
            local_378._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_378._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_378._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_368._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_368._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_368._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_348._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_348._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_348._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_358._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_358._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_358._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            uStack_300 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
            uStack_2fc = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                               0x20);
            local_318 = CONCAT44(uStack_2fc ^ uVar50,uStack_300 ^ uVar49);
            local_308 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
            uStack_304 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
            local_338._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_338._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_338._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            local_2f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            local_320 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar50,
                                 UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar49);
            local_310 = CONCAT44((uint)((ulonglong)
                                        UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                                       0x20) ^ uVar50,
                                 SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                                 uVar49);
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              iVar23 = (*pcVar9)();
              return iVar23;
            }
            pTVar36 = (TVector<double>_u_0 *)
                      ((longlong)&(local_6a8.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0
                      + (longlong)((int)uVar38 % local_6a8.BoundsMaxRange.ElementView.NumElements) *
                        (longlong)local_6a8.BoundsMaxRange.ElementView.BytesBetweenElements);
            uVar24 = 0;
            if ((int)uVar38 < local_6a8.BoundsMinRange.NumElements) {
              uVar24 = uVar40;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              iVar23 = (*pcVar9)();
              return iVar23;
            }
            lVar39 = (longlong)((int)uVar38 % local_6a8.BoundsMinRange.ElementView.NumElements) *
                     (longlong)local_6a8.BoundsMinRange.ElementView.BytesBetweenElements;
            pTVar1 = (TVector<double>_u_0 *)
                     ((longlong)&(local_6a8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0
                     + lVar39);
            local_2b8 = (pTVar1->_s_0).X;
            uStack_2b0 = *(undefined8 *)((longlong)pTVar1 + 8);
            local_2a8 = *(undefined8 *)
                         ((longlong)
                          &(local_6a8.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                         lVar39 + 0x10);
            local_2a0 = (pTVar36->_s_0).X;
            uStack_298 = *(undefined8 *)((longlong)pTVar36 + 8);
            local_290 = *(undefined8 *)((longlong)pTVar36 + 0x10);
            plVar5 = *(longlong **)((longlong)this + 0x18);
            local_288 = 1;
            uVar24 = 0;
            if ((int)uVar35 < (int)plVar5[1]) {
              uVar24 = ~uVar35 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              iVar23 = (*pcVar9)();
              return iVar23;
            }
            plVar5 = *(longlong **)(*plVar5 + (longlong)(int)uVar35 * 8);
            pcVar9 = *(code **)(*plVar5 + 0x3c0);
            uVar24 = 0;
            if ((int)uVar38 < local_6a8.TransformRange.NumElements) {
              uVar24 = uVar40;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              iVar23 = (*pcVar9)();
              return iVar23;
            }
            cVar22 = (*pcVar9)(plVar5,(double *)
                                      ((longlong)
                                       ((local_6a8.TransformRange.ElementView.FirstElementPtr)->
                                       Rotation).XY.m128d_f64 +
                                      (longlong)
                                      ((int)uVar38 %
                                      local_6a8.TransformRange.ElementView.NumElements) *
                                      (longlong)
                                      local_6a8.TransformRange.ElementView.BytesBetweenElements),
                               &local_2b8,local_388);
            if (cVar22 != '\0') {
              cVar22 = *(char *)(*(longlong *)this + 0x129);
              uVar24 = 0;
              if ((int)uVar38 < local_518.DensityRange.NumElements) {
                uVar24 = uVar40;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar9 = (code *)swi(3);
                iVar23 = (*pcVar9)();
                return iVar23;
              }
              if (uVar38 == (int)uVar38 % local_518.DensityRange.ElementView.NumElements) {
                pfVar27 = (float *)((longlong)
                                    local_518.DensityRange.ElementView.BytesBetweenElements *
                                    (longlong)
                                    ((int)uVar38 % local_518.DensityRange.ElementView.NumElements) +
                                   (longlong)local_518.DensityRange.ElementView.FirstElementPtr);
              }
              else {
                pfVar27 = &local_518.DensityRange.StubValue;
              }
              fVar41 = *pfVar27;
              if (cVar22 == '\x01') {
                fVar44 = fVar41 + local_328;
                if (fVar18 <= fVar41 + local_328) {
                  fVar44 = fVar18;
                }
              }
              else {
                fVar44 = fVar41;
                if (cVar22 == '\x02') {
                  if (0.0 < local_328) {
                    fVar44 = fVar18;
                  }
                }
                else if (fVar41 <= local_328) {
                  fVar44 = local_328;
                }
              }
              *pfVar27 = fVar44;
              if (*(char *)((longlong)this + 0x38) != '\0') {
                uVar24 = 0;
                if (param_1 < local_278.ColorRange.NumElements) {
                  uVar24 = (uint)~param_1 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  iVar23 = (*pcVar9)();
                  return iVar23;
                }
                pTVar37 = (TVector4<double>_u_0 *)
                          ((longlong)&(local_278.ColorRange.ElementView.FirstElementPtr)->field0_0x0
                          + (longlong)(param_1 % local_278.ColorRange.ElementView.NumElements) *
                            (longlong)local_278.ColorRange.ElementView.BytesBetweenElements);
                uVar24 = 0;
                if ((int)uVar38 < local_518.ColorRange.NumElements) {
                  uVar24 = uVar40;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  iVar23 = (*pcVar9)();
                  return iVar23;
                }
                if (uVar38 == (int)uVar38 % local_518.ColorRange.ElementView.NumElements) {
                  pTVar33 = (TVector4<double>_u_0 *)
                            ((longlong)
                             &(local_518.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                            (longlong)local_518.ColorRange.ElementView.BytesBetweenElements *
                            (longlong)((int)uVar38 % local_518.ColorRange.ElementView.NumElements));
                }
                else {
                  pTVar33 = &local_518.ColorRange.StubValue.field0_0x0;
                }
                dVar3 = *(double *)((longlong)pTVar37 + 8);
                uVar45 = SUB84(dVar3,0);
                uVar46 = (undefined4)((ulonglong)dVar3 >> 0x20);
                dVar48 = *(double *)pTVar33;
                uVar42 = SUB84(dVar48,0);
                uVar43 = (undefined4)((ulonglong)dVar48 >> 0x20);
                dVar47 = *(double *)pTVar37;
                if (dVar48 <= dVar47) {
                  uVar42 = SUB84(dVar47,0);
                  uVar43 = (undefined4)((ulonglong)dVar47 >> 0x20);
                }
                dVar48 = *(double *)((longlong)pTVar37 + 0x18);
                if (*(double *)((longlong)pTVar37 + 0x18) <= *(double *)((longlong)pTVar33 + 0x18))
                {
                  dVar48 = *(double *)((longlong)pTVar33 + 0x18);
                }
                dVar47 = *(double *)((longlong)pTVar37 + 0x10);
                if (*(double *)((longlong)pTVar37 + 0x10) <= *(double *)((longlong)pTVar33 + 0x10))
                {
                  dVar47 = *(double *)((longlong)pTVar33 + 0x10);
                }
                dVar4 = *(double *)((longlong)pTVar33 + 8);
                if (dVar3 <= dVar4) {
                  uVar45 = SUB84(dVar4,0);
                  uVar46 = (undefined4)((ulonglong)dVar4 >> 0x20);
                }
                (((TVector4<double>_u_0 *)&(pTVar33->_s_0).X)->_s_0).X =
                     (double)CONCAT44(uVar43,uVar42);
                *(double *)((longlong)pTVar33 + 0x18) = dVar48;
                *(double *)((longlong)pTVar33 + 0x10) = dVar47;
                *(ulonglong *)((longlong)pTVar33 + 8) = CONCAT44(uVar46,uVar45);
              }
              uVar24 = 0;
              if ((int)uVar38 < local_518.MetadataEntryRange.NumElements) {
                uVar24 = uVar40;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < NumElements)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                      ,0x8b,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar9 = (code *)swi(3);
                iVar23 = (*pcVar9)();
                return iVar23;
              }
              if (uVar38 == (int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements) {
                plVar31 = (long64 *)
                          ((longlong)local_518.MetadataEntryRange.ElementView.BytesBetweenElements *
                           (longlong)
                           ((int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements) +
                          (longlong)local_518.MetadataEntryRange.ElementView.FirstElementPtr);
              }
              else {
                plVar31 = &local_518.MetadataEntryRange.StubValue;
              }
              if (*plVar31 == -1) {
                if (local_2c0 != -1) {
                  uVar24 = 0;
                  if ((int)uVar38 < local_518.MetadataEntryRange.NumElements) {
                    uVar24 = uVar40;
                  }
                  if ((uVar24 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < NumElements)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                          ,0x8b,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar21)) {
                    pcVar9 = (code *)swi(3);
                    iVar23 = (*pcVar9)();
                    return iVar23;
                  }
                  if (uVar38 == (int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements)
                  {
                    plVar31 = (long64 *)
                              ((longlong)
                               local_518.MetadataEntryRange.ElementView.BytesBetweenElements *
                               (longlong)
                               ((int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements)
                              + (longlong)local_518.MetadataEntryRange.ElementView.FirstElementPtr);
                  }
                  else {
                    plVar31 = &local_518.MetadataEntryRange.StubValue;
                  }
                  *plVar31 = local_2c0;
                }
              }
              else if (local_2c0 != -1) {
                pUVar7 = *(UPCGMetadata **)((longlong)this + 0x30);
                uVar24 = 0;
                if ((int)uVar38 < local_518.MetadataEntryRange.NumElements) {
                  uVar24 = uVar40;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  iVar23 = (*pcVar9)();
                  return iVar23;
                }
                if (uVar38 == (int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements) {
                  plVar31 = (long64 *)
                            ((longlong)local_518.MetadataEntryRange.ElementView.BytesBetweenElements
                             * (longlong)
                               ((int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements)
                            + (longlong)local_518.MetadataEntryRange.ElementView.FirstElementPtr);
                }
                else {
                  plVar31 = &local_518.MetadataEntryRange.StubValue;
                }
                pUVar8 = *(UPCGMetadata **)((longlong)this + 0x30);
                uVar24 = 0;
                if ((int)uVar38 < local_518.MetadataEntryRange.NumElements) {
                  uVar24 = uVar40;
                }
                if ((uVar24 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < NumElements)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                        ,0x8b,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  iVar23 = (*pcVar9)();
                  return iVar23;
                }
                if (uVar38 == (int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements) {
                  plVar34 = (long64 *)
                            ((longlong)local_518.MetadataEntryRange.ElementView.BytesBetweenElements
                             * (longlong)
                               ((int)uVar38 % local_518.MetadataEntryRange.ElementView.NumElements)
                            + (longlong)local_518.MetadataEntryRange.ElementView.FirstElementPtr);
                }
                else {
                  plVar34 = &local_518.MetadataEntryRange.StubValue;
                }
                UPCGMetadata::MergeAttributesSubset
                          (pUVar7,*plVar34,pUVar8,pUVar8,local_2c0,pUVar8,pUVar6,plVar31,Max);
              }
            }
          }
          uVar35 = uVar35 + param_4->DataIndexIncrement;
        } while (uVar35 != param_4->LastDataIndex);
      }
LAB_14989897e:
      param_1 = param_1 + 1;
      iVar25 = local_6e8;
    } while (param_1 < iVar23);
  }
  return iVar25;
}

// AddData @ 14989c4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGUnionData::AddData(UPCGUnionData *this,UPCGSpatialData *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UPCGSpatialData_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  TBox<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  UPCGSpatialData *pUVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  double *pdVar21;
  TBox<double> *pTVar22;
  longlong lVar23;
  undefined1 auStack_198 [32];
  UPCGSpatialData **local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  UPCGSpatialData *local_148;
  undefined1 local_140 [56];
  undefined1 local_108 [56];
  undefined1 local_d0 [56];
  undefined1 local_98 [56];
  TBox<double> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_1 == (UPCGSpatialData *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                        ,0x33,L"");
    if (bVar18) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Metadata",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                        ,0x34,L"");
    if (bVar18) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar2 = &this->Data;
  local_148 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_148) &&
     (lVar23 = (longlong)(this->Data).ArrayMax,
     (FScriptContainerElement *)&local_148 < pFVar4 + lVar23 * 8)) {
    local_160 = (longlong)(this->Data).ArrayNum;
    local_158 = 8;
    local_178 = &local_148;
    local_170 = pFVar4;
    local_168 = lVar23;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar20 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Data).ArrayNum = iVar20 + 1;
  *(UPCGSpatialData **)((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_148;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UPCGSpatialData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_148);
  }
  pTVar3 = &this->CachedStrictBounds;
  if ((this->Data).ArrayNum == 1) {
    this->_padding_ = (longlong)(param_1->TargetActor).WeakPtr;
    pdVar21 = (double *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_140);
    dVar10 = pdVar21[1];
    (this->CachedBounds).Min.field0_0x0._s_0.X = *pdVar21;
    (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar10;
    dVar10 = pdVar21[3];
    (this->CachedBounds).Min.field0_0x0._s_0.Z = pdVar21[2];
    (this->CachedBounds).Max.field0_0x0._s_0.X = dVar10;
    uVar7 = *(undefined4 *)((longlong)pdVar21 + 0x24);
    uVar8 = *(undefined4 *)(pdVar21 + 5);
    uVar9 = *(undefined4 *)((longlong)pdVar21 + 0x2c);
    *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) =
         *(undefined4 *)(pdVar21 + 4);
    *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0xc) = uVar7;
    *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0x10) = uVar8;
    *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0x14) = uVar9;
    *(double *)&(this->CachedBounds).IsValid = pdVar21[6];
    pdVar21 = (double *)(**(code **)(param_1->_padding_ + 0x398))(param_1,local_108);
    dVar10 = pdVar21[1];
    (pTVar3->Min).field0_0x0._s_0.X = *pdVar21;
    (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar10;
    dVar10 = pdVar21[3];
    (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = pdVar21[2];
    (this->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar10;
    uVar7 = *(undefined4 *)((longlong)pdVar21 + 0x24);
    uVar8 = *(undefined4 *)(pdVar21 + 5);
    uVar9 = *(undefined4 *)((longlong)pdVar21 + 0x2c);
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 8) =
         *(undefined4 *)(pdVar21 + 4);
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 0xc) = uVar7;
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 0x10) = uVar8;
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 0x14) = uVar9;
    *(double *)&(this->CachedStrictBounds).IsValid = pdVar21[6];
    iVar20 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
  }
  else {
    pTVar22 = (TBox<double> *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_d0);
    UE::Math::TBox<double>::operator+=(&this->CachedBounds,pTVar22);
    pTVar22 = (TBox<double> *)(**(code **)(param_1->_padding_ + 0x398))(param_1,local_98);
    pTVar22 = PCGHelpers::OverlapBounds(&local_60,pTVar3,pTVar22);
    dVar10 = (pTVar22->Min).field0_0x0._s_0.Y;
    (pTVar3->Min).field0_0x0._s_0.X = (pTVar22->Min).field0_0x0._s_0.X;
    (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar10;
    dVar10 = (pTVar22->Max).field0_0x0._s_0.X;
    (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = (pTVar22->Min).field0_0x0._s_0.Z;
    (this->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar10;
    uVar7 = *(undefined4 *)((longlong)&(pTVar22->Max).field0_0x0 + 0xc);
    uVar8 = *(undefined4 *)((longlong)&(pTVar22->Max).field0_0x0 + 0x10);
    uVar9 = *(undefined4 *)((longlong)&(pTVar22->Max).field0_0x0 + 0x14);
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(pTVar22->Max).field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 0xc) = uVar7;
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 0x10) = uVar8;
    *(undefined4 *)((longlong)&(this->CachedStrictBounds).Max.field0_0x0 + 0x14) = uVar9;
    uVar11 = pTVar22->Pad[0];
    uVar12 = pTVar22->Pad[1];
    uVar13 = pTVar22->Pad[2];
    uVar14 = pTVar22->Pad[3];
    uVar15 = pTVar22->Pad[4];
    uVar16 = pTVar22->Pad[5];
    uVar17 = pTVar22->Pad[6];
    (this->CachedStrictBounds).IsValid = pTVar22->IsValid;
    (this->CachedStrictBounds).Pad[0] = uVar11;
    (this->CachedStrictBounds).Pad[1] = uVar12;
    (this->CachedStrictBounds).Pad[2] = uVar13;
    (this->CachedStrictBounds).Pad[3] = uVar14;
    (this->CachedStrictBounds).Pad[4] = uVar15;
    (this->CachedStrictBounds).Pad[5] = uVar16;
    (this->CachedStrictBounds).Pad[6] = uVar17;
    iVar20 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
    if (iVar20 < this->CachedDimension) {
      iVar20 = this->CachedDimension;
    }
  }
  pUVar5 = (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr;
  this->CachedDimension = iVar20;
  if (pUVar5 == (UPCGSpatialData *)0x0) {
    cVar19 = (**(code **)(param_1->_padding_ + 0x3e0))(param_1);
    if (cVar19 != '\0') {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr = param_1;
    }
  }
  return;
}

// AddToCrc @ 14989e470

void __thiscall UPCGUnionData::AddToCrc(UPCGUnionData *this,FArchiveCrc32 *param_1,bool param_2)

{
  longlong *plVar1;
  UClass *this_00;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_res20 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res20);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  plVar1 = (longlong *)param_1->_padding_;
  local_res8[0] = (uint)this->UnionType;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = (longlong *)param_1->_padding_;
  local_res10[0] = (uint)this->DensityFunction;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ComputeCrc @ 1498a2380

FPCGCrc __thiscall UPCGUnionData::ComputeCrc(UPCGUnionData *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPCGCrc FVar3;
  undefined7 in_register_00000011;
  FPCGCrc FVar4;
  FScriptContainerElement *pFVar5;
  undefined1 in_R8B;
  undefined1 local_res8 [8];
  uint local_res10 [4];
  uint local_res20 [2];
  undefined1 local_e8 [16];
  FArchiveCrc32 local_d8;
  
  FVar4._1_7_ = in_register_00000011;
  FVar4.Value._0_1_ = param_1;
  FArchiveCrc32::FArchiveCrc32(&local_d8,0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x370))(this,&local_d8,in_R8B);
  local_res10[0] = (this->Data).ArrayNum;
  if (*(uint **)(local_d8._padding_ + 8) < *(uint **)local_d8._padding_ + 1) {
    if ((local_d8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_d8._padding_ + 0x188))(&local_d8,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,local_res10);
    }
  }
  else {
    local_res10[0] = **(uint **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
  }
  pFVar5 = (this->Data).AllocatorInstance.Data;
  iVar2 = (this->Data).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
LAB_1498a2420:
  do {
    if ((this->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGSpatialData_const_>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) {
      *(uint *)FVar4 = local_d8.CRC;
      *(undefined1 *)((longlong)FVar4 + 4) = 1;
      FArchive::~FArchive((FArchive *)&local_d8);
      return FVar4;
    }
    if (*(UPCGData **)pFVar5 != (UPCGData *)0x0) {
      FVar3 = UPCGData::GetOrComputeCrc(*(UPCGData **)pFVar5,SUB81(local_e8,0));
      local_res20[0] = *(uint *)FVar3;
      if (*(uint **)local_d8._padding_ + 1 <= *(uint **)(local_d8._padding_ + 8)) {
        local_res20[0] = **(uint **)local_d8._padding_;
        *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
        pFVar5 = pFVar5 + 8;
        goto LAB_1498a2420;
      }
      if ((local_d8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_d8._padding_ + 0x188))(&local_d8,local_res20,4);
        pFVar5 = pFVar5 + 8;
        goto LAB_1498a2420;
      }
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,local_res20);
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// CopyInternal @ 1498a55d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall UPCGUnionData::CopyInternal(UPCGUnionData *this,FPCGContext *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UPCGSpatialData_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UPCGSpatialData *pUVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  UPCGUnionData *pUVar15;
  
  pUVar15 = FPCGContext::NewObject_AnyThread<UPCGUnionData>(param_1);
  pTVar2 = &pUVar15->Data;
  if (pTVar2 != &this->Data) {
    iVar3 = (pUVar15->Data).ArrayMax;
    piVar1 = &(pUVar15->Data).ArrayMax;
    iVar4 = (this->Data).ArrayNum;
    pFVar5 = (this->Data).AllocatorInstance.Data;
    (pUVar15->Data).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<TObjectPtr<UPCGSpatialData_const_>,TObjectPtr<UPCGSpatialData_const_>,int>
                ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UPCGSpatialData_const_> *)pFVar5,iVar4
                );
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr,
     pUVar6 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (pUVar15->FirstNonTrivialTransformData).field0_0x0 =
       (this->FirstNonTrivialTransformData).field0_0x0;
  pUVar15->UnionType = this->UnionType;
  pUVar15->DensityFunction = this->DensityFunction;
  dVar7 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  (pUVar15->CachedBounds).Min.field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (pUVar15->CachedBounds).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (pUVar15->CachedBounds).Min.field0_0x0._s_0.Z = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  (pUVar15->CachedBounds).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (pUVar15->CachedBounds).Max.field0_0x0._s_0.Y = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  (pUVar15->CachedBounds).Max.field0_0x0._s_0.Z = dVar7;
  uVar8 = (this->CachedBounds).Pad[0];
  uVar9 = (this->CachedBounds).Pad[1];
  uVar10 = (this->CachedBounds).Pad[2];
  uVar11 = (this->CachedBounds).Pad[3];
  uVar12 = (this->CachedBounds).Pad[4];
  uVar13 = (this->CachedBounds).Pad[5];
  uVar14 = (this->CachedBounds).Pad[6];
  (pUVar15->CachedBounds).IsValid = (this->CachedBounds).IsValid;
  (pUVar15->CachedBounds).Pad[0] = uVar8;
  (pUVar15->CachedBounds).Pad[1] = uVar9;
  (pUVar15->CachedBounds).Pad[2] = uVar10;
  (pUVar15->CachedBounds).Pad[3] = uVar11;
  (pUVar15->CachedBounds).Pad[4] = uVar12;
  (pUVar15->CachedBounds).Pad[5] = uVar13;
  (pUVar15->CachedBounds).Pad[6] = uVar14;
  dVar7 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  (pUVar15->CachedStrictBounds).Min.field0_0x0._s_0.X =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.X;
  (pUVar15->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (pUVar15->CachedStrictBounds).Min.field0_0x0._s_0.Z =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  (pUVar15->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (pUVar15->CachedStrictBounds).Max.field0_0x0._s_0.Y =
       (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  (pUVar15->CachedStrictBounds).Max.field0_0x0._s_0.Z = dVar7;
  uVar8 = (this->CachedStrictBounds).Pad[0];
  uVar9 = (this->CachedStrictBounds).Pad[1];
  uVar10 = (this->CachedStrictBounds).Pad[2];
  uVar11 = (this->CachedStrictBounds).Pad[3];
  uVar12 = (this->CachedStrictBounds).Pad[4];
  uVar13 = (this->CachedStrictBounds).Pad[5];
  uVar14 = (this->CachedStrictBounds).Pad[6];
  (pUVar15->CachedStrictBounds).IsValid = (this->CachedStrictBounds).IsValid;
  (pUVar15->CachedStrictBounds).Pad[0] = uVar8;
  (pUVar15->CachedStrictBounds).Pad[1] = uVar9;
  (pUVar15->CachedStrictBounds).Pad[2] = uVar10;
  (pUVar15->CachedStrictBounds).Pad[3] = uVar11;
  (pUVar15->CachedStrictBounds).Pad[4] = uVar12;
  (pUVar15->CachedStrictBounds).Pad[5] = uVar13;
  (pUVar15->CachedStrictBounds).Pad[6] = uVar14;
  pUVar15->CachedDimension = this->CachedDimension;
  return (UPCGSpatialData *)pUVar15;
}

// CreateBasePointData @ 1498ab670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UPCGBasePointData * __thiscall
UPCGUnionData::CreateBasePointData
          (UPCGUnionData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2,
          TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UPCGSpatialData_const_*)>
          *param_3)

{
  EPCGUnionDensityFunction EVar1;
  EPCGUnionType EVar2;
  FScriptContainerElement *_Src;
  longlong *plVar3;
  UPCGMetadata *this_00;
  code *pcVar4;
  TObjectPtr<UClass>_u_0 TVar5;
  UPCGUnionData *this_01;
  bool bVar6;
  uint uVar7;
  int iVar8;
  EPCGPointNativeProperties EVar9;
  int iVar10;
  UPCGBasePointData *pUVar11;
  UObject *pUVar12;
  longlong lVar13;
  UPackage *pUVar14;
  UClass *pUVar15;
  UPCGMetadata *pUVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ForElementType<__int64> FVar19;
  float *pfVar20;
  UClass *pUVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  UClass *pUVar27;
  FPCGContext *this_02;
  UClass *pUVar28;
  float fVar29;
  undefined1 auStackY_1258 [32];
  TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UPCGSpatialData_const_*)> *pTVar30;
  uint local_1218;
  TArray<UPCGSpatialData_const_*,TSizedDefaultAllocator<32>_> local_1208;
  uint local_11f8;
  TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_> local_11f0;
  TArray<UPCGMetadata_const_*,TSizedDefaultAllocator<32>_> local_11e0;
  int local_11d0;
  FPCGContext *local_11c8;
  TObjectPtr<UClass>_u_0 local_11c0;
  UPCGUnionData *local_11b8;
  FName local_11b0;
  UPackage *local_11a8;
  longlong local_11a0;
  int local_1198;
  int local_1194;
  int local_1190;
  undefined8 local_1188 [2];
  UPCGUnionData *local_1178;
  UObject *local_1170;
  undefined2 local_1168;
  undefined1 local_1166;
  undefined1 local_1165;
  undefined8 local_1160;
  void *local_1158;
  undefined8 local_1150;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_1148;
  undefined8 local_1140;
  FPCGContext *local_1138;
  undefined8 local_1130;
  FPCGContext *local_1128;
  UPCGMetadata *local_1120;
  UPCGMetadata *local_1118;
  undefined8 local_1110;
  FPCGContext *local_1108;
  undefined8 local_1100;
  longlong local_10f8;
  int local_10f0;
  int local_10ec;
  int local_10e8;
  float local_10e4;
  FPCGContext *local_10e0;
  undefined8 local_10d8;
  TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UPCGSpatialData_const_*)> local_10d0;
  TArrayView<__int64,int> local_10c0;
  TArrayView<__int64_const_,int> local_10b0;
  TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UPCGSpatialData_const_*)> local_10a0;
  longlong local_1090;
  int local_1088;
  int local_1084;
  int local_1080;
  ForElementType<__int64> local_1070;
  int local_868;
  int local_864;
  TArray<__int64,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_860;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1258;
  local_1208.ArrayNum = (this->Data).ArrayNum;
  lVar26 = (longlong)local_1208.ArrayNum;
  EVar1 = this->DensityFunction;
  local_11c8 = param_1;
  local_11c0 = (TObjectPtr<UClass>_u_0)param_2.Class.field0_0x0;
  local_11b8 = this;
  if (local_1208.ArrayNum == 0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    return (UPCGBasePointData *)0x0;
  }
  if ((local_1208.ArrayNum == 1) && (EVar1 != Binary)) {
    if (5 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if (((this->Data).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar11 = (UPCGBasePointData *)(*pcVar4)();
      return pUVar11;
    }
    local_1110 = *(undefined8 *)(this->Data).AllocatorInstance.Data;
    local_1108 = param_1;
    pUVar11 = (UPCGBasePointData *)
              (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_1108,&local_1110);
    return pUVar11;
  }
  _Src = (this->Data).AllocatorInstance.Data;
  pUVar27 = (UClass *)0x0;
  local_1208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,local_1208.ArrayNum,0,&local_1208.AllocatorInstance,local_1208.ArrayNum,
             &local_1208.ArrayMax);
  memcpy(local_1208.AllocatorInstance.Data,_Src,lVar26 << 3);
  uVar22 = (this->Data).ArrayNum;
  local_11e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_11e0.ArrayNum = 0;
  local_11e0.ArrayMax = 0;
  if ((int)uVar22 < 1) {
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar22,&local_11e0.AllocatorInstance,&local_11e0.ArrayNum,&local_11e0.ArrayMax);
  }
  if ((local_1208.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar11 = (UPCGBasePointData *)(*pcVar4)();
    return pUVar11;
  }
  local_1100 = *(undefined8 *)local_1208.AllocatorInstance.Data;
  local_10e0 = param_1;
  pUVar12 = (UObject *)
            (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_10e0,&local_1100);
  uVar17 = *(undefined8 *)&pUVar12[1].field_0x10;
  if ((local_11e0.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar11 = (UPCGBasePointData *)(*pcVar4)();
    return pUVar11;
  }
  *(undefined8 *)local_11e0.AllocatorInstance.Data = uVar17;
  uVar22 = 1;
  this_02 = param_1;
  if (1 < local_1208.ArrayNum) {
    lVar26 = 8;
    do {
      uVar7 = 0;
      if ((int)uVar22 < local_1208.ArrayNum) {
        uVar7 = ~uVar22 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pUVar11 = (UPCGBasePointData *)(*pcVar4)();
        return pUVar11;
      }
      local_10d8 = *(undefined8 *)(local_1208.AllocatorInstance.Data + lVar26);
      local_1138 = param_1;
      lVar13 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_1138,&local_10d8);
      uVar17 = *(undefined8 *)(lVar13 + 0x38);
      uVar7 = 0;
      if ((int)uVar22 < local_11e0.ArrayNum) {
        uVar7 = ~uVar22 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pUVar11 = (UPCGBasePointData *)(*pcVar4)();
        return pUVar11;
      }
      uVar22 = uVar22 + 1;
      *(undefined8 *)(local_11e0.AllocatorInstance.Data + lVar26) = uVar17;
      lVar26 = lVar26 + 8;
      this_02 = local_11c8;
      param_2.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_11c0;
    } while ((int)uVar22 < local_1208.ArrayNum);
  }
  pUVar14 = GetTransientPackage();
  local_11a8 = pUVar14;
  if (this_02 == (FPCGContext *)0x0) {
    bVar6 = IsInGameThread();
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar11 = (UPCGBasePointData *)(*pcVar4)();
      return pUVar11;
    }
    lVar26 = ((UClass *)param_2.Class.field0_0x0)->_padding_;
    local_11b0.ComparisonIndex.Value = 0;
    local_11b0.Number = 0;
    pUVar21 = pUVar27;
    if ((lVar26 != 0) &&
       (pUVar15 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar15 != (UClass *)0x0)) {
      iVar8 = (int)pUVar15->_padding_;
      if ((*(int *)(lVar26 + 0x38) < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar26 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar15->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pUVar21 = (UClass *)((UClass *)param_2.Class.field0_0x0)->_padding_;
      }
    }
    pUVar11 = NewObject<UPCGBasePointData>
                        ((UObject *)pUVar14,pUVar21,local_11b0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar11 = FPCGContext::
              NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                        (this_02,&local_11a8,
                         (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
  }
  pUVar16 = (UPCGMetadata *)(**(code **)(pUVar11->_padding_ + 0x328))(pUVar11);
  this_01 = local_11b8;
  local_1178 = local_11b8;
  local_1120 = pUVar16;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_11b8);
  }
  local_1168 = 0x101;
  local_1165 = 0;
  local_1160 = (**(code **)(this_01->_padding_ + 800))(this_01);
  local_1158 = (void *)0x0;
  local_1150 = 0;
  local_1148 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_1140 = 0;
  local_1166 = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  local_1170 = pUVar12;
  (**(code **)(pUVar11->_padding_ + 0x468))(pUVar11,&local_1178);
  if ((local_1178 != (UPCGUnionData *)0x0) && ((char)local_1168 != '\0')) {
    (**(code **)(pUVar11->_padding_ + 0x470))(pUVar11,&local_1178);
  }
  EVar2 = this_01->UnionType;
  if (EVar2 == LeftToRightPriority) {
LAB_1498ac4be:
    local_10d0._0_8_ = *(undefined8 *)param_3;
    local_10d0._8_8_ = *(undefined8 *)&param_3->field_0x8;
    pTVar30 = &local_10d0;
    bVar6 = true;
  }
  else {
    if (EVar2 != RightToLeftPriority) {
      if (EVar2 == KeepAll) {
        local_11f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar7 = 0;
        local_11f0.ArrayNum = 0;
        local_11f0.ArrayMax = 0;
        TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_11f0,local_1208.ArrayNum,Default);
        pUVar21 = pUVar27;
        pUVar15 = pUVar27;
        pUVar28 = pUVar27;
        uVar22 = uVar7;
        if (0 < local_11f0.ArrayNum) {
          do {
            uVar23 = (uint)pUVar21;
            uVar25 = ~uVar23 >> 0x1f;
            uVar22 = uVar7;
            if ((int)uVar23 < local_1208.ArrayNum) {
              uVar22 = uVar25;
            }
            if ((uVar22 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UPCGBasePointData *)(*pcVar4)();
              return pUVar11;
            }
            local_1130 = *(undefined8 *)
                          (local_1208.AllocatorInstance.Data + (longlong)&pUVar28->_padding_);
            local_1128 = local_11c8;
            uVar17 = (**(code **)param_3)
                               (*(undefined8 *)&param_3->field_0x8,&local_1128,&local_1130);
            uVar22 = uVar7;
            if ((int)uVar23 < local_11f0.ArrayNum) {
              uVar22 = uVar25;
            }
            if ((uVar22 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UPCGBasePointData *)(*pcVar4)();
              return pUVar11;
            }
            *(undefined8 *)(local_11f0.AllocatorInstance.Data + (longlong)&pUVar28->_padding_) =
                 uVar17;
            uVar22 = uVar7;
            if ((int)uVar23 < local_11f0.ArrayNum) {
              uVar22 = uVar25;
            }
            if ((uVar22 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UPCGBasePointData *)(*pcVar4)();
              return pUVar11;
            }
            iVar8 = (**(code **)(**(longlong **)
                                   (local_11f0.AllocatorInstance.Data +
                                   (longlong)&pUVar28->_padding_) + 0x488))();
            uVar22 = (int)pUVar15 + iVar8;
            pUVar21 = (UClass *)(ulonglong)(uVar23 + 1);
            pUVar15 = (UClass *)(ulonglong)uVar22;
            pUVar28 = (UClass *)&pUVar28->_padding_;
          } while ((int)(uVar23 + 1) < local_11f0.ArrayNum);
        }
        EVar9 = UPCGBasePointData::GetPropertiesToAllocateFromPointData(&local_11f0);
        if (0 < (int)uVar22) {
          (**(code **)(pUVar11->_padding_ + 0x490))(pUVar11,uVar22,1);
          (**(code **)(pUVar11->_padding_ + 0x498))(pUVar11,EVar9);
          local_1218 = 0;
          local_11f8 = 0;
          if (0 < local_1208.ArrayNum) {
            local_11c0.DebugPtr = (UClass *)0x0;
            pUVar21 = pUVar27;
            pUVar15 = pUVar27;
            do {
              TVar5 = local_11c0;
              uVar23 = (uint)pUVar21;
              local_11d0 = (int)pUVar15;
              uVar22 = uVar7;
              if ((int)uVar23 < local_1208.ArrayNum) {
                uVar22 = ~uVar23 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                return pUVar11;
              }
              uVar22 = uVar7;
              if ((int)uVar23 < local_11f0.ArrayNum) {
                uVar22 = ~uVar23 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                return pUVar11;
              }
              plVar3 = *(longlong **)(local_11f0.AllocatorInstance.Data + (longlong)TVar5);
              pUVar16 = (UPCGMetadata *)plVar3[7];
              local_1118 = pUVar16;
              iVar8 = (**(code **)(*plVar3 + 0x488))(plVar3);
              pUVar15 = (UClass *)(ulonglong)local_1218;
              uVar22 = local_1218;
              if (0 < iVar8) {
                (**(code **)(*plVar3 + 0x638))(plVar3,pUVar11,0,local_1218);
                uVar22 = local_1218 + iVar8;
                pUVar15 = (UClass *)(ulonglong)uVar22;
                if (0 < (int)local_11f8) {
                  (**(code **)(pUVar11->_padding_ + 0x4f8))
                            (pUVar11,&local_11a0,CONCAT71((uint7)(uint3)(uVar22 >> 8),1));
                  uVar25 = 0;
                  for (uVar23 = local_1218; (int)uVar23 < (int)uVar22; uVar23 = uVar23 + 1) {
                    uVar24 = uVar25;
                    if ((int)uVar23 < local_1190) {
                      uVar24 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < NumElements)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                           ,0x8b,
                                           L"Array index out of bounds: %lld from an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                      return pUVar11;
                    }
                    if (uVar23 == (int)uVar23 % local_1194) {
                      puVar18 = (undefined8 *)
                                ((longlong)((int)uVar23 % local_1194) * (longlong)local_1198 +
                                local_11a0);
                    }
                    else {
                      puVar18 = local_1188;
                    }
                    *puVar18 = 0xffffffffffffffff;
                  }
                  pUVar15 = (UClass *)(ulonglong)uVar22;
                  if ((local_1120 != (UPCGMetadata *)0x0) && (pUVar16 != (UPCGMetadata *)0x0)) {
                    iVar10 = UPCGMetadata::GetAttributeCount(pUVar16);
                    if (0 < iVar10) {
                      local_860.AllocatorInstance.SecondaryData = (ForElementType<__int64>)0x0;
                      local_860.ArrayNum = 0;
                      local_860.ArrayMax = 0x100;
                      TArray<__int64,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
                      SetNumUninitialized(&local_860,iVar8,Default);
                      (**(code **)(*plVar3 + 0x538))(plVar3,&local_1090);
                      pUVar21 = pUVar27;
                      pUVar15 = pUVar27;
                      if (0 < local_860.ArrayNum) {
                        do {
                          uVar24 = (uint)pUVar21;
                          uVar23 = uVar25;
                          if ((int)uVar24 < local_1080) {
                            uVar23 = ~uVar24 >> 0x1f;
                          }
                          if ((uVar23 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < NumElements)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                 ,0x8b,
                                                 L"Array index out of bounds: %lld from an array of size %lld"
                                                ), bVar6)) {
                            pcVar4 = (code *)swi(3);
                            pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                            return pUVar11;
                          }
                          uVar17 = *(undefined8 *)
                                    ((longlong)((int)uVar24 % local_1084) * (longlong)local_1088 +
                                    local_1090);
                          uVar23 = uVar25;
                          if ((int)uVar24 < local_860.ArrayNum) {
                            uVar23 = ~uVar24 >> 0x1f;
                          }
                          if ((uVar23 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar4 = (code *)swi(3);
                            pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                            return pUVar11;
                          }
                          FVar19 = (ForElementType<__int64>)&local_860;
                          if (local_860.AllocatorInstance.SecondaryData !=
                              (ForElementType<__int64>)0x0) {
                            FVar19 = local_860.AllocatorInstance.SecondaryData;
                          }
                          *(undefined8 *)((longlong)&pUVar15->_padding_ + (longlong)FVar19) = uVar17
                          ;
                          pUVar21 = (UClass *)(ulonglong)(uVar24 + 1);
                          pUVar16 = local_1118;
                          pUVar15 = (UClass *)&pUVar15->_padding_;
                        } while ((int)(uVar24 + 1) < local_860.ArrayNum);
                      }
                      local_1070.SecondaryData = (ForElementType<__int64>)0x0;
                      local_868 = 0;
                      local_864 = 0x100;
                      UE::Core::Private::
                      ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                (8,8,iVar8,&local_1070,&local_868,&local_864);
                      pUVar21 = pUVar27;
                      pUVar15 = pUVar27;
                      if (0 < local_868) {
                        do {
                          uVar24 = (uint)pUVar21;
                          uVar23 = uVar25;
                          if ((int)uVar24 < local_868) {
                            uVar23 = ~uVar24 >> 0x1f;
                          }
                          if ((uVar23 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar4 = (code *)swi(3);
                            pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                            return pUVar11;
                          }
                          FVar19 = (ForElementType<__int64>)&local_1070;
                          if (local_1070.SecondaryData != (ForElementType<__int64>)0x0) {
                            FVar19 = local_1070.SecondaryData;
                          }
                          *(undefined8 *)((longlong)&pUVar15->_padding_ + (longlong)FVar19) =
                               0xffffffffffffffff;
                          pUVar21 = (UClass *)(ulonglong)(uVar24 + 1);
                          pUVar15 = (UClass *)&pUVar15->_padding_;
                        } while ((int)(uVar24 + 1) < local_868);
                      }
                      iVar8 = local_868;
                      this_00 = (UPCGMetadata *)pUVar11->_padding_;
                      local_10c0.DataPtr = (long64 *)&local_1070;
                      if (local_1070.SecondaryData != (ForElementType<__int64>)0x0) {
                        local_10c0.DataPtr = (long64 *)local_1070.SecondaryData;
                      }
                      if ((local_868 < 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InCount >= 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0xeb,L""), bVar6)) {
                        pcVar4 = (code *)swi(3);
                        pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                        return pUVar11;
                      }
                      iVar10 = local_860.ArrayNum;
                      local_10c0.ArrayNum = iVar8;
                      local_10b0.DataPtr = (long64 *)&local_860;
                      if (local_860.AllocatorInstance.SecondaryData != (ForElementType<__int64>)0x0)
                      {
                        local_10b0.DataPtr = (long64 *)local_860.AllocatorInstance.SecondaryData;
                      }
                      if ((local_860.ArrayNum < 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InCount >= 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0xeb,L""), bVar6)) {
                        pcVar4 = (code *)swi(3);
                        pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                        return pUVar11;
                      }
                      local_10b0.ArrayNum = iVar10;
                      UPCGMetadata::SetAttributes
                                (this_00,&local_10b0,pUVar16,&local_10c0,local_11c8);
                      if (0 < local_868) {
                        iVar8 = -local_11d0;
                        pUVar21 = pUVar27;
                        do {
                          uVar23 = iVar8 + local_1218;
                          uVar25 = uVar7;
                          if ((int)uVar23 < local_868) {
                            uVar25 = ~uVar23 >> 0x1f;
                          }
                          if ((uVar25 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar4 = (code *)swi(3);
                            pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                            return pUVar11;
                          }
                          FVar19 = (ForElementType<__int64>)&local_1070;
                          if (local_1070.SecondaryData != (ForElementType<__int64>)0x0) {
                            FVar19 = local_1070.SecondaryData;
                          }
                          uVar17 = *(undefined8 *)((longlong)&pUVar21->_padding_ + (longlong)FVar19)
                          ;
                          uVar23 = uVar7;
                          if ((int)local_1218 < local_1190) {
                            uVar23 = ~local_1218 >> 0x1f;
                          }
                          if ((uVar23 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < NumElements)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                 ,0x8b,
                                                 L"Array index out of bounds: %lld from an array of size %lld"
                                                ), bVar6)) {
                            pcVar4 = (code *)swi(3);
                            pUVar11 = (UPCGBasePointData *)(*pcVar4)();
                            return pUVar11;
                          }
                          if (local_1218 == (int)local_1218 % local_1194) {
                            puVar18 = (undefined8 *)
                                      ((longlong)((int)local_1218 % local_1194) *
                                       (longlong)local_1198 + local_11a0);
                          }
                          else {
                            puVar18 = local_1188;
                          }
                          local_1218 = local_1218 + 1;
                          *puVar18 = uVar17;
                          pUVar21 = (UClass *)&pUVar21->_padding_;
                        } while ((int)(iVar8 + local_1218) < local_868);
                      }
                      if (local_1070.SecondaryData != (ForElementType<__int64>)0x0) {
                        FMemory::Free((void *)local_1070.SecondaryData);
                      }
                      if (local_860.AllocatorInstance.SecondaryData != (ForElementType<__int64>)0x0)
                      {
                        FMemory::Free((void *)local_860.AllocatorInstance.SecondaryData);
                      }
                    }
                    pUVar15 = (UClass *)(ulonglong)uVar22;
                  }
                }
              }
              local_1218 = uVar22;
              local_11f8 = local_11f8 + 1;
              pUVar21 = (UClass *)(ulonglong)local_11f8;
              local_11c0.DebugPtr = local_11c0.DebugPtr + 8;
            } while ((int)local_11f8 < local_1208.ArrayNum);
          }
          if (EVar1 == Binary) {
            uVar22 = (**(code **)(pUVar11->_padding_ + 0x640))(pUVar11,1);
            lVar26 = pUVar11->_padding_;
            if ((uVar22 >> 1 & 1) == 0) {
              pcVar4 = *(code **)(lVar26 + 0x548);
              pfVar20 = (float *)(**(code **)(lVar26 + 0x598))(pUVar11,0);
              fVar29 = 0.0;
              if (0.0 < *pfVar20) {
                fVar29 = __real_3f800000;
              }
              (*pcVar4)(pUVar11,fVar29);
            }
            else {
              (**(code **)(lVar26 + 0x4c8))(pUVar11,&local_10f8,0);
              while (iVar8 = (int)pUVar27, iVar8 != local_10e8) {
                if (iVar8 == iVar8 % local_10ec) {
                  pfVar20 = (float *)((longlong)(iVar8 % local_10ec) * (longlong)local_10f0 +
                                     local_10f8);
                }
                else {
                  pfVar20 = &local_10e4;
                }
                if (*pfVar20 <= 0.0) {
                  pUVar27 = (UClass *)(ulonglong)(iVar8 + 1);
                  *pfVar20 = 0.0;
                }
                else {
                  pUVar27 = (UClass *)(ulonglong)(iVar8 + 1);
                  *pfVar20 = __real_3f800000;
                }
              }
            }
          }
        }
        if (local_11f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11f0.AllocatorInstance.Data);
        }
        goto LAB_1498ac3c6;
      }
      goto LAB_1498ac4be;
    }
    local_10a0._0_8_ = *(undefined8 *)param_3;
    local_10a0._8_8_ = *(undefined8 *)&param_3->field_0x8;
    pTVar30 = &local_10a0;
    bVar6 = false;
  }
  CreateSequentialPointData(this_01,this_02,&local_1208,&local_11e0,pUVar11,pUVar16,bVar6,pTVar30);
LAB_1498ac3c6:
  if (5 < (byte)LogPCG._0_1_) {
    (**(code **)(pUVar11->_padding_ + 0x488))(pUVar11);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_1148,(int)local_1140);
  if (local_1148 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_1148);
  }
  if (local_1158 != (void *)0x0) {
    FMemory::Free(local_1158);
  }
  if (local_11e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11e0.AllocatorInstance.Data);
  }
  if (local_1208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1208.AllocatorInstance.Data);
  }
  return pUVar11;
}

// CreatePointArrayData @ 1498ae240

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
UPCGUnionData::CreatePointArrayData(UPCGUnionData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  undefined1 local_res20 [8];
  FString local_28;
  undefined1 local_18 [16];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId244,"UPCGUnionData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
               ,0xf4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
  }
  local_18._8_8_ = local_res20;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPCGUnionData::CreatePointArrayData'::__l2::<lambda_1>,UPCGBasePointData_const_*,FPCGContext_*,UPCGSpatialData_const_*>
       ::Call;
  local_28.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.Data.AllocatorInstance.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.Data.AllocatorInstance.Data);
  }
  pUVar2 = (UPCGPointArrayData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)&local_28,
                               (TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UPCGSpatialData_const_*)>
                                *)local_18);
  if (pUVar2 == (UPCGPointArrayData *)0x0) {
    pUVar2 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar3 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointArrayData>((FString *)local_18);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_28,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreatePointData @ 1498af400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall UPCGUnionData::CreatePointData(UPCGUnionData *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 local_28 [16];
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId237,"UPCGUnionData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
               ,0xed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId237);
  }
  local_28._8_8_ = local_res18;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPCGUnionData::CreatePointData'::__l2::<lambda_1>,UPCGBasePointData_const_*,FPCGContext_*,UPCGSpatialData_const_*>
       ::Call;
  local_res20 = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)&local_res20,
                               (TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UPCGSpatialData_const_*)>
                                *)local_28);
  if (pUVar2 == (UPCGPointData *)0x0) {
    pUVar2 = (UPCGPointData *)0x0;
  }
  else {
    pUVar3 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointData>((FString *)local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreateSequentialPointData @ 1498afda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPCGUnionData::CreateSequentialPointData
          (UPCGUnionData *this,FPCGContext *param_1,
          TArray<UPCGSpatialData_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UPCGMetadata_const_*,TSizedDefaultAllocator<32>_> *param_3,
          UPCGBasePointData *param_4,UPCGMetadata *param_5,bool param_6,
          TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UPCGSpatialData_const_*)>
          *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EPCGPointNativeProperties EVar5;
  undefined8 uVar6;
  uint uVar7;
  FPCGAsyncState *pFVar8;
  uint uVar9;
  FPCGAsyncState *pFVar10;
  uint uVar11;
  uint uVar12;
  FPCGAsyncState *pFVar13;
  FPCGAsyncState *pFVar14;
  <lambda_5> local_res18 [8];
  TArray<UPCGMetadata_const_*,TSizedDefaultAllocator<32>_> *local_res20;
  uint local_f8;
  uint local_f4;
  TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_> local_f0;
  FIndexParams local_e0;
  undefined8 local_d0;
  FPCGContext *local_c8;
  <lambda_2> local_c0;
  <lambda_1> local_b8;
  <lambda_4> local_a8;
  <lambda_3> local_88;
  
  local_res20 = param_3;
  if ((param_4 == (UPCGBasePointData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutPointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                         ,0x191,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar10 = (FPCGAsyncState *)0x0;
  uVar9 = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_f0,param_2->ArrayNum,Default);
  pFVar8 = pFVar10;
  pFVar13 = pFVar10;
  pFVar14 = pFVar10;
  if (0 < local_f0.ArrayNum) {
    do {
      uVar7 = (uint)pFVar8;
      uVar11 = ~uVar7 >> 0x1f;
      uVar12 = uVar9;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar12 = uVar11;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_d0 = *(undefined8 *)
                  ((longlong)&pFVar14->EndTime + (longlong)(param_2->AllocatorInstance).Data);
      local_c8 = param_1;
      uVar6 = (**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,&local_c8,&local_d0);
      uVar12 = uVar9;
      if ((int)uVar7 < local_f0.ArrayNum) {
        uVar12 = uVar11;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(local_f0.AllocatorInstance.Data + (longlong)&pFVar14->EndTime) = uVar6;
      uVar12 = uVar9;
      if ((int)uVar7 < local_f0.ArrayNum) {
        uVar12 = uVar11;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (**(code **)(**(longlong **)
                             (local_f0.AllocatorInstance.Data + (longlong)&pFVar14->EndTime) + 0x488
                          ))();
      local_f4 = (int)pFVar13 + iVar4;
      pFVar8 = (FPCGAsyncState *)(ulonglong)(uVar7 + 1);
      pFVar13 = (FPCGAsyncState *)(ulonglong)local_f4;
      pFVar14 = (FPCGAsyncState *)&pFVar14->NumAvailableTasks;
    } while ((int)(uVar7 + 1) < local_f0.ArrayNum);
    pFVar8 = (FPCGAsyncState *)(ulonglong)local_f4;
    param_3 = local_res20;
  }
  (**(code **)(param_4->_padding_ + 0x490))(param_4,pFVar8,0);
  EVar5 = UPCGBasePointData::GetPropertiesToAllocateFromPointData(&local_f0);
  (**(code **)(param_4->_padding_ + 0x498))(param_4,EVar5 | (MetadataEntry|Density));
  local_88.bSetColor = (bool)((byte)(EVar5 >> 4) & 1);
  local_e0.DataIndexIncrement = (uint)param_6 * 2 + -1;
  if (param_6) {
    local_e0.LastDataIndex = param_2->ArrayNum;
    pFVar8 = pFVar10;
  }
  else {
    local_e0.LastDataIndex = 0xffffffff;
    pFVar8 = (FPCGAsyncState *)(ulonglong)(param_2->ArrayNum - 1);
  }
  local_b8.PointOffset = (int *)&local_f8;
  local_c0.PointOffset = (int *)&local_f8;
  local_88.PointOffset = (int *)&local_f8;
  local_88.PointInputDatas = &local_f0;
  local_88.OutMetadata = param_5;
  local_e0.FirstDataIndex = (int)pFVar8;
  local_e0.CurrentIndex = 0;
  local_f8 = 0;
  local_b8.OutPointData = param_4;
  local_88.OutPointData = param_4;
  local_88.__this = this;
  local_88.InputDatas = param_2;
  local_88.InputMetadatas = param_3;
  if (local_e0.FirstDataIndex != local_e0.LastDataIndex) {
    pFVar13 = &param_1->AsyncState;
    if (param_1 == (FPCGContext *)0x0) {
      pFVar13 = pFVar10;
    }
    do {
      local_a8.IndexParams = &local_e0;
      uVar12 = (uint)pFVar8;
      local_a8.ProcessRange = &local_88;
      local_a8.PointOffset = (int *)&local_f8;
      uVar9 = 0;
      if ((int)uVar12 < local_f0.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      local_e0.CurrentIndex = uVar12;
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(local_f0.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
      (**(code **)(param_4->_padding_ + 0x4b0))(param_4,plVar1);
      iVar4 = (**(code **)(*plVar1 + 0x488))(plVar1);
      FPCGAsync::
      AsyncProcessingRangeEx<_UPCGUnionData::CreateSequentialPointData_::__l13::<lambda_5>,_UPCGUnionData::CreateSequentialPointData_::__l13::<lambda_4>_&,_UPCGUnionData::CreateSequentialPointData_::__l2::<lambda_1>_&,_UPCGUnionData::CreateSequentialPointData_::__l2::<lambda_2>_&>
                (pFVar13,iVar4,local_res18,&local_a8,&local_b8,&local_c0,false,0x40,true);
      pFVar8 = (FPCGAsyncState *)(ulonglong)(uVar12 + local_e0.DataIndexIncrement);
    } while (uVar12 + local_e0.DataIndexIncrement != local_e0.LastDataIndex);
    pFVar10 = (FPCGAsyncState *)(ulonglong)local_f8;
  }
  (**(code **)(param_4->_padding_ + 0x490))(param_4,pFVar10,1);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// FindFirstConcreteShapeFromNetwork @ 1498b3520

UPCGSpatialData * __thiscall UPCGUnionData::FindFirstConcreteShapeFromNetwork(UPCGUnionData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGSpatialData *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Data).AllocatorInstance.Data;
  iVar2 = (this->Data).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGSpatialData_const_>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(longlong **)pFVar4 != (longlong *)0x0) &&
       (pUVar3 = (UPCGSpatialData *)(**(code **)(**(longlong **)pFVar4 + 0x430))(),
       pUVar3 != (UPCGSpatialData *)0x0)) {
      return pUVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (UPCGSpatialData *)0x0;
}

// GetBounds @ 1498b5e90

TBox<double> * __thiscall
UPCGUnionData::GetBounds(UPCGUnionData *this,TBox<double> *__return_storage_ptr__)

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
  
  dVar1 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedBounds).IsValid;
  uVar6 = (this->CachedBounds).Pad[0];
  uVar7 = (this->CachedBounds).Pad[1];
  uVar8 = (this->CachedBounds).Pad[2];
  uVar9 = (this->CachedBounds).Pad[3];
  uVar10 = (this->CachedBounds).Pad[4];
  uVar11 = (this->CachedBounds).Pad[5];
  uVar12 = (this->CachedBounds).Pad[6];
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

// GetDataType @ 1498b84b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGUnionData::GetDataType(UPCGUnionData *this)

{
  return Composite;
}

// GetDataTypeId @ 1498b92c0

FPCGDataTypeBaseId * __thiscall UPCGUnionData::GetDataTypeId(UPCGUnionData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite,(UObject *)pUVar3,
                         L"PCGDataTypeInfoComposite");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14989f3d3;
  }
  else {
LAB_14989f3d3:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14989f42a;
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
    if (bVar2) goto LAB_14989f42c;
  }
LAB_14989f42a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_14989f42c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoComposite::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b9b40

int __thiscall UPCGUnionData::GetDimension(UPCGUnionData *this)

{
  return this->CachedDimension;
}

// GetPrivateStaticClass @ 1498bd310

UClass * __cdecl UPCGUnionData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnionData",
               &Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton,
               StaticRegisterNativesUPCGUnionData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGUnionData>,InternalVTableHelperCtorCaller<UPCGUnionData>,
               local_res8,UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUnionData.InnerSingleton;
}

// GetStrictBounds @ 1498c7810

TBox<double> * __thiscall
UPCGUnionData::GetStrictBounds(UPCGUnionData *this,TBox<double> *__return_storage_ptr__)

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
  
  dVar1 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedStrictBounds).Min.field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedStrictBounds).IsValid;
  uVar6 = (this->CachedStrictBounds).Pad[0];
  uVar7 = (this->CachedStrictBounds).Pad[1];
  uVar8 = (this->CachedStrictBounds).Pad[2];
  uVar9 = (this->CachedStrictBounds).Pad[3];
  uVar10 = (this->CachedStrictBounds).Pad[4];
  uVar11 = (this->CachedStrictBounds).Pad[5];
  uVar12 = (this->CachedStrictBounds).Pad[6];
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

// HasNonTrivialTransform @ 1498ca6d0

bool __thiscall UPCGUnionData::HasNonTrivialTransform(UPCGUnionData *this)

{
  return (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr != (UPCGSpatialData *)0x0;
}

// Initialize @ 1498cdcc0

void __thiscall
UPCGUnionData::Initialize(UPCGUnionData *this,UPCGSpatialData *param_1,UPCGSpatialData *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (UPCGSpatialData *)0x0) || (param_2 == (UPCGSpatialData *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InA && InB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AddData(this,param_1);
  AddData(this,param_2);
  return;
}

// InitializeTargetMetadata @ 1498d0450

void __thiscall
UPCGUnionData::InitializeTargetMetadata
          (UPCGUnionData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  TObjectPtr<UPCGSpatialData_const_>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TObjectPtr<UPCGSpatialData_const_>_u_0 TVar5;
  uint uVar6;
  longlong lVar7;
  TObjectPtr<UPCGSpatialData_const_>_u_0 local_58;
  undefined8 local_50;
  void *local_38;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_28;
  int local_20;
  
  if ((param_1->bInheritMetadata == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParams.bInheritMetadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                         ,0x24d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 == (UPCGMetadata *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetadataToInitialize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                         ,0x24e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->bIsDuplicatingData != false) {
    UPCGSpatialData::InitializeTargetMetadata((UPCGSpatialData *)this,param_1,param_2);
    return;
  }
  if ((this->Data).ArrayNum != 0) {
    FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
              ((FPCGInitializeFromDataParams *)&local_58.ObjectPtr,param_1);
    uVar6 = 0;
    local_50 = 0;
    if (0 < (this->Data).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->Data).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TVar1 = (TObjectPtr<UPCGSpatialData_const_>_u_0)
                ((TObjectPtr<UPCGSpatialData_const_>_u_0 *)
                ((this->Data).AllocatorInstance.Data + lVar7))->DebugPtr;
        if (TVar1.DebugPtr != (UPCGSpatialData *)0x0) {
          TVar5 = (TObjectPtr<UPCGSpatialData_const_>_u_0)
                  (param_1->SourceOverride).field0_0x0.DebugPtr;
          if ((TVar5.DebugPtr == (UPCGSpatialData *)0x0) || (uVar6 != 0)) {
            TVar5 = TVar1;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar5.DebugPtr != (UPCGSpatialData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          }
          local_58 = TVar5;
          (**(code **)((TVar5.DebugPtr)->_padding_ + 0x450))(TVar5.DebugPtr,&local_58,param_2);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->Data).ArrayNum);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_28,local_20);
    if (local_28 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  UPCGMetadata::AddAttributes(param_2,(UPCGMetadata *)this->_padding_);
  return;
}

// SamplePoint @ 1498dbaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGUnionData::SamplePoint
          (UPCGUnionData *this,TTransform<double> *param_1,TBox<double> *param_2,FPCGPoint *param_3,
          UPCGMetadata *param_4)

{
  float fVar1;
  UPCGSpatialData *pUVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  undefined1 auStackY_248 [32];
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  TBox<double> *local_1d8;
  FPCGPoint local_1c8;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_f8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_f0 = (param_1->Rotation).XY.m128d_f64[1];
  local_e8 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_e0 = (param_1->Rotation).ZW.m128d_f64[1];
  pUVar2 = (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr;
  local_d8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_d0 = (param_1->Translation).XY.m128d_f64[1];
  local_c8 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_c0 = (param_1->Translation).ZW.m128d_f64[1];
  local_b8 = *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64;
  local_a8 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_a0 = (param_1->Scale3D).ZW.m128d_f64[1];
  bVar12 = false;
  local_1d8 = param_2;
  if ((pUVar2 != (UPCGSpatialData *)0x0) &&
     (cVar8 = (**(code **)(pUVar2->_padding_ + 0x3c0))(), cVar8 != '\0')) {
    local_f8 = (param_3->Transform).Rotation.XY.m128d_f64[0];
    dStack_f0 = (param_3->Transform).Rotation.XY.m128d_f64[1];
    bVar12 = true;
    local_e8 = (param_3->Transform).Rotation.ZW.m128d_f64[0];
    dStack_e0 = (param_3->Transform).Rotation.ZW.m128d_f64[1];
    local_d8 = (param_3->Transform).Translation.XY.m128d_f64[0];
    dStack_d0 = (param_3->Transform).Translation.XY.m128d_f64[1];
    local_c8 = (param_3->Transform).Translation.ZW.m128d_f64[0];
    dStack_c0 = (param_3->Transform).Translation.ZW.m128d_f64[1];
    local_b8 = *(undefined1 (*) [16])(param_3->Transform).Scale3D.XY.m128d_f64;
    local_a8 = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
    dStack_a0 = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
    if ((this->DensityFunction == Binary) && (0.0 < param_3->Density)) {
      param_3->Density = 1.0;
    }
  }
  local_1e0 = (this->Data).ArrayNum;
  lVar15 = (longlong)local_1e0;
  _Src = (this->Data).AllocatorInstance.Data;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  if (local_1e0 == 0) {
    local_1dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_1e0,0,&local_1e8,local_1e0,&local_1dc);
    memcpy(local_1e8.Data,_Src,lVar15 << 3);
  }
  dVar7 = _UNK_150689688;
  dVar6 = ___xmm_3ff00000000000003ff0000000000000;
  fVar5 = __real_3f800000;
  if (((!bVar12) || (param_4 != (UPCGMetadata *)0x0)) ||
     (param_3->Density <= __real_3f800000 && __real_3f800000 != param_3->Density)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar15 = (longlong)local_1e0;
  uVar14 = 0;
  if (0 < lVar15) {
    lVar16 = 0;
    uVar20 = (uint)__xmm_80000000000000008000000000000000;
    uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      if (bVar4) break;
      uVar13 = ~uVar14 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar14 < local_1e0) {
        uVar11 = uVar13;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pUVar2 = (this->FirstNonTrivialTransformData).field0_0x0.DebugPtr;
      if (pUVar2 == (UPCGSpatialData *)0x0) {
        bVar9 = *(UPCGSpatialData **)(local_1e8.Data + lVar16 * 8) == (UPCGSpatialData *)0x0;
      }
      else {
        bVar9 = pUVar2 == *(UPCGSpatialData **)(local_1e8.Data + lVar16 * 8);
      }
      if (!bVar9) {
        local_1c8.Transform.Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1c8.Transform.Rotation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1c8.Density = 1.0;
        local_1c8.Steepness = 0.5;
        local_1c8.Seed = 0;
        uVar11 = 0;
        if ((int)uVar14 < local_1e0) {
          uVar11 = uVar13;
        }
        local_1c8.MetadataEntry = -1;
        local_1c8.Color.field0_0x0._s_0.X = dVar6;
        local_1c8.Color.field0_0x0._s_0.Y = dVar7;
        local_1c8.Color.field0_0x0._s_0.Z = dVar6;
        local_1c8.Color.field0_0x0._s_0.W = dVar7;
        local_1c8.Transform.Rotation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8.Transform.Rotation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1c8.Transform.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1c8.Transform.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1c8.Transform.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1c8.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1c8.Transform.Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_1c8.Transform.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1c8.Transform.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1c8.BoundsMax.field0_0x0._8_4_ =
             SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
        local_1c8.BoundsMax.field0_0x0._12_4_ =
             (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
        local_1c8.BoundsMin.field0_0x0._s_0.Y =
             (double)CONCAT44(local_1c8.BoundsMax.field0_0x0._12_4_ ^ uVar21,
                              local_1c8.BoundsMax.field0_0x0._8_4_ ^ uVar20);
        local_1c8.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_
        ;
        local_1c8.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_
        ;
        local_1c8.Transform.Scale3D.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1c8.Transform.Scale3D.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_1c8.BoundsMax.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_1c8.BoundsMin.field0_0x0._s_0.X =
             (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar21,
                              UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar20);
        local_1c8.BoundsMin.field0_0x0._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)
                                     UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20)
                              ^ uVar21,SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,
                                             0) ^ uVar20);
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        cVar8 = (**(code **)(**(longlong **)(local_1e8.Data + lVar16 * 8) + 0x3c0))
                          (*(longlong **)(local_1e8.Data + lVar16 * 8),&local_f8,local_1d8,
                           &local_1c8);
        if (cVar8 != '\0') {
          if (bVar12) {
            fVar1 = param_3->Density;
            if (this->DensityFunction == ClampedAddition) {
              fVar18 = fVar1 + local_1c8.Density;
              if (fVar5 <= fVar1 + local_1c8.Density) {
                fVar18 = fVar5;
              }
            }
            else {
              fVar18 = fVar1;
              if (this->DensityFunction == Binary) {
                if (0.0 < local_1c8.Density) {
                  fVar18 = fVar5;
                }
              }
              else if (fVar1 <= local_1c8.Density) {
                fVar18 = local_1c8.Density;
              }
            }
            param_3->Density = fVar18;
            auVar17._8_8_ = local_1c8.Color.field0_0x0._s_0.Y;
            auVar17._0_8_ = local_1c8.Color.field0_0x0._s_0.X;
            auVar17 = maxpd(*(undefined1 (*) [16])&(param_3->Color).field0_0x0,auVar17);
            auVar19._8_8_ = local_1c8.Color.field0_0x0._s_0.W;
            auVar19._0_8_ = local_1c8.Color.field0_0x0._s_0.Z;
            auVar19 = maxpd(*(undefined1 (*) [16])((longlong)&(param_3->Color).field0_0x0 + 0x10),
                            auVar19);
            *(undefined1 (*) [16])&(param_3->Color).field0_0x0 = auVar17;
            *(undefined1 (*) [16])((longlong)&(param_3->Color).field0_0x0 + 0x10) = auVar19;
            if (param_4 != (UPCGMetadata *)0x0) {
              if (param_3->MetadataEntry == -1) {
                if (local_1c8.MetadataEntry == -1) goto LAB_1498dc037;
                param_3->MetadataEntry = local_1c8.MetadataEntry;
              }
              else {
                if (local_1c8.MetadataEntry == -1) goto LAB_1498dc037;
                uVar11 = 0;
                if ((int)uVar14 < local_1e0) {
                  uVar11 = uVar13;
                }
                if ((uVar11 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  uVar10 = (*pcVar3)();
                  return (bool)uVar10;
                }
                UPCGMetadata::MergePointAttributesSubset
                          (param_4,param_3,param_4,param_4,&local_1c8,param_4,
                           *(UPCGMetadata **)(*(longlong *)(local_1e8.Data + lVar16 * 8) + 0x38),
                           param_3,Max);
              }
              goto LAB_1498dc046;
            }
          }
          else {
            (param_3->Transform).Rotation.XY.m128d_f64[0] =
                 local_1c8.Transform.Rotation.XY.m128d_f64[0];
            (param_3->Transform).Rotation.XY.m128d_f64[1] =
                 local_1c8.Transform.Rotation.XY.m128d_f64[1];
            (param_3->Transform).Rotation.ZW.m128d_f64[0] =
                 local_1c8.Transform.Rotation.ZW.m128d_f64[0];
            (param_3->Transform).Rotation.ZW.m128d_f64[1] =
                 local_1c8.Transform.Rotation.ZW.m128d_f64[1];
            (param_3->Transform).Translation.XY.m128d_f64[0] =
                 local_1c8.Transform.Translation.XY.m128d_f64[0];
            (param_3->Transform).Translation.XY.m128d_f64[1] =
                 local_1c8.Transform.Translation.XY.m128d_f64[1];
            (param_3->Transform).Translation.ZW.m128d_f64[0] =
                 local_1c8.Transform.Translation.ZW.m128d_f64[0];
            (param_3->Transform).Translation.ZW.m128d_f64[1] =
                 local_1c8.Transform.Translation.ZW.m128d_f64[1];
            (param_3->Transform).Scale3D.XY.m128d_f64[0] =
                 local_1c8.Transform.Scale3D.XY.m128d_f64[0];
            (param_3->Transform).Scale3D.XY.m128d_f64[1] =
                 local_1c8.Transform.Scale3D.XY.m128d_f64[1];
            (param_3->Transform).Scale3D.ZW.m128d_f64[0] =
                 local_1c8.Transform.Scale3D.ZW.m128d_f64[0];
            (param_3->Transform).Scale3D.ZW.m128d_f64[1] =
                 local_1c8.Transform.Scale3D.ZW.m128d_f64[1];
            *(ulonglong *)&param_3->Density = CONCAT44(local_1c8._100_4_,local_1c8.Density);
            (param_3->BoundsMin).field0_0x0._s_0.X = local_1c8.BoundsMin.field0_0x0._s_0.X;
            (param_3->BoundsMin).field0_0x0._s_0.Y = local_1c8.BoundsMin.field0_0x0._s_0.Y;
            (param_3->BoundsMin).field0_0x0._s_0.Z = local_1c8.BoundsMin.field0_0x0._s_0.Z;
            (param_3->BoundsMax).field0_0x0._s_0.X =
                 (double)CONCAT44(local_1c8.BoundsMax.field0_0x0._4_4_,
                                  local_1c8.BoundsMax.field0_0x0._0_4_);
            (param_3->BoundsMax).field0_0x0._s_0.Y =
                 (double)CONCAT44(local_1c8.BoundsMax.field0_0x0._12_4_,
                                  local_1c8.BoundsMax.field0_0x0._8_4_);
            (param_3->BoundsMax).field0_0x0._s_0.Z = local_1c8.BoundsMax.field0_0x0._s_0.Z;
            param_3->_padding_ = local_1c8._padding_;
            (param_3->Color).field0_0x0._s_0.X = local_1c8.Color.field0_0x0._s_0.X;
            (param_3->Color).field0_0x0._s_0.Y = local_1c8.Color.field0_0x0._s_0.Y;
            (param_3->Color).field0_0x0._s_0.Z = local_1c8.Color.field0_0x0._s_0.Z;
            (param_3->Color).field0_0x0._s_0.W = local_1c8.Color.field0_0x0._s_0.W;
            param_3->Steepness = local_1c8.Steepness;
            param_3->Seed = local_1c8.Seed;
            param_3->MetadataEntry = local_1c8.MetadataEntry;
            bVar12 = true;
          }
LAB_1498dc037:
          if ((param_4 == (UPCGMetadata *)0x0) &&
             (fVar5 < param_3->Density || fVar5 == param_3->Density)) break;
        }
      }
LAB_1498dc046:
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar15);
  }
  if ((!bVar12) || (param_3->Density <= 0.0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  return bVar12;
}

// StaticRegisterNativesUPCGUnionData @ 1498f6b30

void __cdecl UPCGUnionData::StaticRegisterNativesUPCGUnionData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGUnionData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VisitDataNetwork @ 1498f9e30

void __thiscall
UPCGUnionData::VisitDataNetwork
          (UPCGUnionData *this,TFunctionRef<void___cdecl(UPCGData_const_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  pFVar4 = (this->Data).AllocatorInstance.Data;
  iVar2 = (this->Data).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGSpatialData_const_>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      local_28 = *(undefined8 *)param_1;
      local_20 = *(undefined8 *)&param_1->field_0x8;
      (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_28);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// execAddData @ 1498fc3b0

void __cdecl UPCGUnionData::execAddData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGSpatialData *local_res10;
  
  local_res10 = (UPCGSpatialData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddData((UPCGUnionData *)param_1,local_res10);
  return;
}

// execInitialize @ 1498fdff0

void __cdecl UPCGUnionData::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UPCGSpatialData *pUVar3;
  UPCGSpatialData *pUVar4;
  bool bVar5;
  UPCGSpatialData *local_res10;
  UPCGSpatialData *local_res20;
  
  local_res20 = (UPCGSpatialData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (UPCGSpatialData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res20;
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 == (UPCGSpatialData *)0x0) || (local_res10 == (UPCGSpatialData *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InA && InB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGUnionData.cpp"
                       ,0x2c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AddData((UPCGUnionData *)param_1,pUVar4);
  AddData((UPCGUnionData *)param_1,pUVar3);
  return;
}

