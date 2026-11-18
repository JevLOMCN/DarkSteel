// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// StaticClass @ 149857db0

UClass * __cdecl UPCGSplineInteriorSurfaceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineInteriorSurfaceData",
               &Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton,
               StaticRegisterNativesUPCGSplineInteriorSurfaceData,0x3e0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSplineInteriorSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGSplineInteriorSurfaceData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton;
}

// UPCGSplineInteriorSurfaceData @ 14988f130

UPCGSplineInteriorSurfaceData * __thiscall
UPCGSplineInteriorSurfaceData::UPCGSplineInteriorSurfaceData
          (UPCGSplineInteriorSurfaceData *this,FVTableHelper *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  *(undefined ***)this = &___7UPCGSplineInteriorSurfaceData__6B_;
  FPCGSplineStruct::FPCGSplineStruct(&this->SplineStruct);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedSplinePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSplinePoints).ArrayNum = 0;
  (this->CachedSplinePoints).ArrayMax = 0;
  (this->CachedSplinePoints2D).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSplinePoints2D).ArrayNum = 0;
  (this->CachedSplinePoints2D).ArrayMax = 0;
  return this;
}

// UPCGSplineInteriorSurfaceData @ 14988f1d0

UPCGSplineInteriorSurfaceData * __thiscall
UPCGSplineInteriorSurfaceData::UPCGSplineInteriorSurfaceData
          (UPCGSplineInteriorSurfaceData *this,FObjectInitializer *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  *(undefined ***)this = &___7UPCGSplineInteriorSurfaceData__6B_;
  FPCGSplineStruct::FPCGSplineStruct(&this->SplineStruct);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedSplinePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSplinePoints).ArrayNum = 0;
  (this->CachedSplinePoints).ArrayMax = 0;
  (this->CachedSplinePoints2D).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSplinePoints2D).ArrayNum = 0;
  (this->CachedSplinePoints2D).ArrayMax = 0;
  return this;
}

// ~UPCGSplineInteriorSurfaceData @ 149891aa0

void __thiscall
UPCGSplineInteriorSurfaceData::~UPCGSplineInteriorSurfaceData(UPCGSplineInteriorSurfaceData *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UPCGSplineInteriorSurfaceData__6B_;
  pFVar1 = (this->CachedSplinePoints2D).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSplinePoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGSplineStruct::~FPCGSplineStruct(&this->SplineStruct);
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989e310

void __thiscall
UPCGSplineInteriorSurfaceData::AddToCrc
          (UPCGSplineInteriorSurfaceData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UClass *this_00;
  UPackage *pUVar1;
  undefined1 local_res8 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone(*(UPCGMetadata **)&this->field_0x38);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
    UPCGMetadata::AddToCrc(*(UPCGMetadata **)&this->field_0x38,param_1,param_2);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  if (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineStruct,(UObject *)pUVar1,
                         L"PCGSplineStruct");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton,(FArchive *)param_1,
             &this->SplineStruct,(void *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CacheData @ 1498a0360

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

void __thiscall
UPCGSplineInteriorSurfaceData::CacheData(UPCGSplineInteriorSurfaceData *this,FPCGContext *param_1)

{
  int *piVar1;
  TBox<double> *this_00;
  FSpline *this_01;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uint uVar21;
  uint uVar22;
  FPCGContext *pFVar23;
  bool bVar24;
  int iVar25;
  TBox<double> *pTVar26;
  FInterpCurveVector *pFVar27;
  TMatrix<double> *pTVar28;
  UPCGBasePointData *pUVar29;
  UPCGSplineData *this_02;
  undefined8 *puVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8 [8];
  undefined8 local_3a0;
  undefined8 uStack_398;
  FPCGProjectionParams local_390;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  FPCGContext *local_340;
  TBox<double> local_338;
  TVector<double>_u_0 local_300;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  undefined1 local_2d0;
  undefined7 uStack_2cf;
  longlong local_2c8;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  undefined1 local_248 [128];
  void *local_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  ForAnyElementType local_1a0;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_340 = param_1;
  pTVar26 = FPCGSplineStruct::GetBounds(&this->SplineStruct,&local_338);
  this_00 = &this->CachedBounds;
  this_01 = &(this->SplineStruct).Spline;
  dVar4 = (pTVar26->Min).field0_0x0._s_0.Y;
  (this_00->Min).field0_0x0._s_0.X = (pTVar26->Min).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (pTVar26->Max).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = (pTVar26->Min).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dVar4;
  dVar4 = (pTVar26->Max).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = (pTVar26->Max).field0_0x0._s_0.Y;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dVar4;
  uVar14 = pTVar26->Pad[0];
  uVar15 = pTVar26->Pad[1];
  uVar16 = pTVar26->Pad[2];
  uVar17 = pTVar26->Pad[3];
  uVar18 = pTVar26->Pad[4];
  uVar19 = pTVar26->Pad[5];
  uVar20 = pTVar26->Pad[6];
  (this->CachedBounds).IsValid = pTVar26->IsValid;
  (this->CachedBounds).Pad[0] = uVar14;
  (this->CachedBounds).Pad[1] = uVar15;
  (this->CachedBounds).Pad[2] = uVar16;
  (this->CachedBounds).Pad[3] = uVar17;
  (this->CachedBounds).Pad[4] = uVar18;
  (this->CachedBounds).Pad[5] = uVar19;
  (this->CachedBounds).Pad[6] = uVar20;
  local_358 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uStack_350 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_348 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  if ((PCGSplineStruct::GUseSplineCurves == false) && (this_01->CurrentImplementation != '\0')) {
    pFVar27 = FSpline::GetSplinePointsScale(this_01);
  }
  else {
    pFVar27 = &(this->SplineStruct).SplineCurves.Scale;
  }
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar32 = *(longlong *)pFVar27;
  iVar31 = *(int *)&pFVar27->field_0x8;
  puVar30 = (undefined8 *)(lVar32 + 0x18);
  lVar33 = (longlong)iVar31 * 0x58 + lVar32;
  uVar40 = (uint)local_358;
  uVar41 = (uint)((ulonglong)local_358 >> 0x20);
  uVar42 = (uint)uStack_350;
  uVar43 = (uint)((ulonglong)uStack_350 >> 0x20);
  uVar44 = (uint)local_348;
  uVar45 = (uint)((ulonglong)local_348 >> 0x20);
  while( true ) {
    if (*(int *)&pFVar27->field_0x8 != iVar31) {
      local_3a8[0] = 0;
      `TCheckedPointerIterator<FInterpCurvePoint<UE::Math::TVector<double>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_3a8);
    }
    if (lVar32 == lVar33) break;
    lVar32 = lVar32 + 0x58;
    uVar34 = (uint)puVar30[-2] & uVar21;
    uVar36 = (uint)((ulonglong)puVar30[-2] >> 0x20) & uVar22;
    if ((double)CONCAT44(uVar36,uVar34) <= (double)CONCAT44(uVar41,uVar40)) {
      uVar34 = uVar40;
      uVar36 = uVar41;
    }
    uVar38 = (uint)puVar30[-1] & uVar21;
    uVar39 = (uint)((ulonglong)puVar30[-1] >> 0x20) & uVar22;
    if ((double)CONCAT44(uVar39,uVar38) <= (double)CONCAT44(uVar43,uVar42)) {
      uVar38 = uVar42;
      uVar39 = uVar43;
    }
    uVar35 = (uint)*puVar30 & uVar21;
    uVar37 = (uint)((ulonglong)*puVar30 >> 0x20) & uVar22;
    if ((double)CONCAT44(uVar37,uVar35) <= (double)CONCAT44(uVar45,uVar44)) {
      uVar35 = uVar44;
      uVar37 = uVar45;
    }
    puVar30 = puVar30 + 0xb;
    uVar40 = uVar34;
    uVar41 = uVar36;
    uVar42 = uVar38;
    uVar43 = uVar39;
    uVar44 = uVar35;
    uVar45 = uVar37;
  }
  dVar4 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar5 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  dVar13 = (double)CONCAT44(uVar45,uVar44) + (this->CachedBounds).Max.field0_0x0._s_0.Z;
  dVar11 = (this->CachedBounds).Min.field0_0x0._s_0.Y - (double)CONCAT44(uVar43,uVar42);
  local_2d0 = 1;
  dVar6 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = (this_00->Min).field0_0x0._s_0.X - (double)CONCAT44(uVar41,uVar40);
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])&(this_00->Min).field0_0x0 = auVar10;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = dVar4 - (double)CONCAT44(uVar45,uVar44);
  (this->CachedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar41,uVar40) + dVar5;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ = (double)CONCAT44(uVar43,uVar42) + dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) = auVar12;
  (this->CachedBounds).IsValid = 1;
  (this->CachedBounds).Pad[0] = (char)uStack_2cf;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_2cf >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_2cf >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_2cf >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_2cf >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_2cf >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_2cf >> 0x30);
  pTVar28 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(this->SplineStruct).Transform,&local_108);
  UE::Math::TBox<double>::TransformBy(this_00,(TBox<double> *)&local_300._s_0,pTVar28);
  (this_00->Min).field0_0x0._s_0.X = local_300._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = local_300._s_0.Y;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = local_300._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dStack_2e8;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = local_2e0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = dStack_2d8;
  (this->CachedBounds).IsValid = local_2d0;
  (this->CachedBounds).Pad[0] = (char)uStack_2cf;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_2cf >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_2cf >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_2cf >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_2cf >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_2cf >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_2cf >> 0x30);
  FPCGSplineSamplerParams::FPCGSplineSamplerParams((FPCGSplineSamplerParams *)local_248);
  pFVar23 = local_340;
  local_248[1] = Subdivision;
  local_248._4_4_ = 5;
  pUVar29 = FPCGContext::NewPointData_AnyThread(local_340);
  this_02 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(pFVar23);
  UPCGSplineData::Initialize(this_02,&this->SplineStruct);
  local_390.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.bProjectPositions = true;
  local_390.bProjectRotations = true;
  local_390.bProjectScales = false;
  local_390.ColorBlendMode = SourceValue;
  local_390._4_4_ = 0;
  local_390.AttributeList.Data.ArrayNum = 0;
  local_390.AttributeList.Data.ArrayMax = 0;
  local_390.AttributeMode = ExcludeAttributes;
  local_390.AttributeMergeOperation = Min;
  local_390.TagMergeOperation = Source;
  local_390._27_5_ = 0;
  ::FString::FString(&local_390.AttributeList,L"");
  local_390.AttributeMode = ExcludeAttributes;
  local_390.AttributeMergeOperation = TargetValue;
  local_390.TagMergeOperation = Source;
  PCGSplineSamplerHelpers::SampleLineData
            (pFVar23,(UPCGPolyLineData *)this_02,(UPCGSpatialData *)0x0,(UPCGSpatialData *)0x0,
             &local_390,(FPCGSplineSamplerParams *)local_248,pUVar29);
  if (local_390.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.AttributeList.Data.AllocatorInstance.Data);
  }
  (**(code **)(pUVar29->_padding_ + 0x500))(pUVar29,&local_2c8);
  iVar31 = 0;
  do {
    lVar32 = local_2c8;
    if (iVar31 == local_2b8) {
      if (local_1a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
      local_248._56_8_ = &___7FIndexedCurve__6B_;
      if (local_1b8 != (void *)0x0) {
        FMemory::Free(local_1b8);
      }
      local_1c0 = 0;
      if (local_1c8 != (void *)0x0) {
        FMemory::Free(local_1c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_248 + 0x40));
      return;
    }
    pTVar2 = &this->CachedSplinePoints;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    lVar33 = (longlong)(iVar31 % local_2bc) * (longlong)local_2c0;
    puVar30 = (undefined8 *)(lVar33 + 0x20 + local_2c8);
    local_370 = *puVar30;
    uStack_368 = puVar30[1];
    local_360 = *(undefined8 *)(lVar33 + 0x30 + local_2c8);
    if ((pFVar7 <= (FScriptContainerElement *)&local_370) &&
       ((FScriptContainerElement *)&local_370 <
        pFVar7 + (longlong)(this->CachedSplinePoints).ArrayMax * 0x18)) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar24) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar25 = (this->CachedSplinePoints).ArrayNum;
    piVar1 = &(this->CachedSplinePoints).ArrayMax;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->CachedSplinePoints).ArrayNum = iVar25 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    pTVar3 = &this->CachedSplinePoints2D;
    pFVar7 = pFVar8 + (longlong)iVar25 * 0x18;
    *(undefined8 *)pFVar7 = local_370;
    *(undefined8 *)(pFVar7 + 8) = uStack_368;
    *(undefined8 *)(pFVar8 + (longlong)iVar25 * 0x18 + 0x10) = local_360;
    puVar30 = (undefined8 *)(lVar33 + 0x20 + lVar32);
    local_3a0 = *puVar30;
    uStack_398 = puVar30[1];
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    local_348 = *(undefined8 *)(lVar33 + 0x30 + lVar32);
    local_358 = local_3a0;
    uStack_350 = uStack_398;
    if ((pFVar7 <= (FScriptContainerElement *)&local_3a0) &&
       ((FScriptContainerElement *)&local_3a0 <
        pFVar7 + (longlong)(this->CachedSplinePoints2D).ArrayMax * 0x10)) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar24) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar25 = (this->CachedSplinePoints2D).ArrayNum;
    piVar1 = &(this->CachedSplinePoints2D).ArrayMax;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->CachedSplinePoints2D).ArrayNum = iVar25 + 1;
    iVar31 = iVar31 + 1;
    pFVar7 = (pTVar3->AllocatorInstance).Data + (longlong)iVar25 * 0x10;
    *(undefined8 *)pFVar7 = local_3a0;
    *(undefined8 *)(pFVar7 + 8) = uStack_398;
  } while( true );
}

// CopyInternal @ 1498a5160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGSplineInteriorSurfaceData::CopyInternal
          (UPCGSplineInteriorSurfaceData *this,FPCGContext *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  double dVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  bool bVar11;
  UPCGSpatialData *pUVar12;
  UObject *pUVar13;
  UPCGSplineInteriorSurfaceData *pUVar14;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGSplineInteriorSurfaceData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar11 = IsInGameThread();
    if (!bVar11) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4331830188552749225>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                          ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar11) {
        pcVar1 = (code *)swi(3);
        pUVar12 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar12;
      }
    }
  }
  else {
    bVar11 = IsInGameThread();
    if (!bVar11) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4331830188552749348>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar11) {
          pcVar1 = (code *)swi(3);
          pUVar12 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar12;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar13 = GetTransientPackageAsObject();
      pUVar14 = NewObject<UPCGSplineInteriorSurfaceData>(pUVar13);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar14 == (UPCGSplineInteriorSurfaceData *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x12a,L"");
        if (bVar11) {
          pcVar1 = (code *)swi(3);
          pUVar12 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar12;
        }
      }
      local_res18[0] = pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UPCGSplineInteriorSurfaceData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a51bd;
    }
  }
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UPCGSplineInteriorSurfaceData>(pUVar13);
LAB_1498a51bd:
  uVar2 = *(undefined8 *)&this->field_0x118;
  *(undefined8 *)&pUVar14->field_0x110 = *(undefined8 *)&this->field_0x110;
  *(undefined8 *)&pUVar14->field_0x118 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x128;
  *(undefined8 *)&pUVar14->field_0x120 = *(undefined8 *)&this->field_0x120;
  *(undefined8 *)&pUVar14->field_0x128 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x138;
  *(undefined8 *)&pUVar14->field_0x130 = *(undefined8 *)&this->field_0x130;
  *(undefined8 *)&pUVar14->field_0x138 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x148;
  *(undefined8 *)&pUVar14->field_0x140 = *(undefined8 *)&this->field_0x140;
  *(undefined8 *)&pUVar14->field_0x148 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x158;
  *(undefined8 *)&pUVar14->field_0x150 = *(undefined8 *)&this->field_0x150;
  *(undefined8 *)&pUVar14->field_0x158 = uVar2;
  uVar2 = *(undefined8 *)&this->field_0x168;
  *(undefined8 *)&pUVar14->field_0x160 = *(undefined8 *)&this->field_0x160;
  *(undefined8 *)&pUVar14->field_0x168 = uVar2;
  pUVar14->field_0x50 = this->field_0x50;
  FPCGSplineStruct::operator=(&pUVar14->SplineStruct,&this->SplineStruct);
  dVar3 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  (pUVar14->CachedBounds).Min.field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (pUVar14->CachedBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (pUVar14->CachedBounds).Min.field0_0x0._s_0.Z = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  (pUVar14->CachedBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (pUVar14->CachedBounds).Max.field0_0x0._s_0.Y = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  (pUVar14->CachedBounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar4 = (this->CachedBounds).Pad[0];
  uVar5 = (this->CachedBounds).Pad[1];
  uVar6 = (this->CachedBounds).Pad[2];
  uVar7 = (this->CachedBounds).Pad[3];
  uVar8 = (this->CachedBounds).Pad[4];
  uVar9 = (this->CachedBounds).Pad[5];
  uVar10 = (this->CachedBounds).Pad[6];
  (pUVar14->CachedBounds).IsValid = (this->CachedBounds).IsValid;
  (pUVar14->CachedBounds).Pad[0] = uVar4;
  (pUVar14->CachedBounds).Pad[1] = uVar5;
  (pUVar14->CachedBounds).Pad[2] = uVar6;
  (pUVar14->CachedBounds).Pad[3] = uVar7;
  (pUVar14->CachedBounds).Pad[4] = uVar8;
  (pUVar14->CachedBounds).Pad[5] = uVar9;
  (pUVar14->CachedBounds).Pad[6] = uVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&pUVar14->CachedSplinePoints,&this->CachedSplinePoints);
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
            (&pUVar14->CachedSplinePoints2D,&this->CachedSplinePoints2D);
  return (UPCGSpatialData *)pUVar14;
}

// CreateBasePointData @ 1498ab320

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

UPCGBasePointData * __thiscall
UPCGSplineInteriorSurfaceData::CreateBasePointData
          (UPCGSplineInteriorSurfaceData *this,FPCGContext *param_1,
          TSubclassOf<UPCGBasePointData> param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  UPCGBasePointData *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UPCGSplineData *this_00;
  UClass *pUVar9;
  bool bVar10;
  undefined1 auStackY_238 [32];
  UPackage *local_1f0;
  FPCGProjectionParams local_1e8;
  UPCGSplineInteriorSurfaceData *local_1c8;
  undefined8 local_1c0;
  undefined2 local_1b8;
  undefined1 local_1b6;
  undefined1 local_1b5;
  UClass *local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_198;
  undefined8 local_190;
  undefined1 local_188 [128];
  void *local_108;
  undefined4 local_100;
  void *local_f8;
  ForAnyElementType local_e0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId115,"UPCGSplineData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineInteriorSurfaceData.cpp"
               ,0x73);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId115);
  }
  pUVar5 = GetTransientPackage();
  pUVar8 = (UClass *)0x0;
  local_1f0 = pUVar5;
  if (param_1 == (FPCGContext *)0x0) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGBasePointData *)(*pcVar3)();
      return pUVar6;
    }
    lVar2 = *(longlong *)param_2.Class.field0_0x0;
    pUVar9 = pUVar8;
    if ((lVar2 != 0) &&
       (pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar9 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar6 = NewObject<UPCGBasePointData>
                       ((UObject *)pUVar5,pUVar9,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar6 = FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,&local_1f0,
                        (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
  }
  local_1c8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this == (UPCGSplineInteriorSurfaceData *)0x0)) {
    local_1c0 = 0;
    local_1b5 = 0;
    if (this != (UPCGSplineInteriorSurfaceData *)0x0) {
      pUVar8 = (UClass *)(**(code **)(*(longlong *)this + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_1c0 = 0;
    local_1b5 = 0;
    pUVar8 = (UClass *)(**(code **)(*(longlong *)this + 800))(this);
  }
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  local_198 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_190 = 0;
  local_1b8 = 0x101;
  local_1b6 = 1;
  local_1b0 = pUVar8;
  (**(code **)(pUVar6->_padding_ + 0x468))(pUVar6,&local_1c8);
  if ((this != (UPCGSplineInteriorSurfaceData *)0x0) && ((char)local_1b8 != '\0')) {
    (**(code **)(pUVar6->_padding_ + 0x470))(pUVar6,&local_1c8);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_198,(int)local_190);
  if (local_198 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  FPCGSplineSamplerParams::FPCGSplineSamplerParams((FPCGSplineSamplerParams *)local_188);
  local_188[0] = OnInterior;
  local_188[0x32] = true;
  this_00 = FPCGContext::NewObject_AnyThread<UPCGSplineData>(param_1);
  UPCGSplineData::Initialize(this_00,&this->SplineStruct);
  local_1e8.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.bProjectPositions = true;
  local_1e8.bProjectRotations = true;
  local_1e8.bProjectScales = false;
  local_1e8.ColorBlendMode = SourceValue;
  local_1e8._4_4_ = 0;
  local_1e8.AttributeList.Data.ArrayNum = 0;
  local_1e8.AttributeList.Data.ArrayMax = 0;
  local_1e8.AttributeMode = ExcludeAttributes;
  local_1e8.AttributeMergeOperation = Min;
  local_1e8.TagMergeOperation = Source;
  local_1e8._27_5_ = 0;
  ::FString::FString(&local_1e8.AttributeList,L"");
  local_1e8.AttributeMode = ExcludeAttributes;
  local_1e8.AttributeMergeOperation = TargetValue;
  local_1e8.TagMergeOperation = Source;
  PCGSplineSamplerHelpers::SampleInteriorData
            (param_1,(UPCGPolyLineData *)this_00,(UPCGSpatialData *)0x0,(UPCGSpatialData *)0x0,
             &local_1e8,(FPCGSplineSamplerParams *)local_188,pUVar6);
  if (local_1e8.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AttributeList.Data.AllocatorInstance.Data);
  }
  if (5 < (byte)LogPCG._0_1_) {
    (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  local_188._56_8_ = &___7FIndexedCurve__6B_;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  local_100 = 0;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_188 + 0x40));
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar6;
}

// CreatePointArrayData @ 1498ae1e0

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
UPCGSplineInteriorSurfaceData::CreatePointArrayData
          (UPCGSplineInteriorSurfaceData *this,FPCGContext *param_1,TBox<double> *param_2)

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

// CreatePointData @ 1498af3a0

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
UPCGSplineInteriorSurfaceData::CreatePointData
          (UPCGSplineInteriorSurfaceData *this,FPCGContext *param_1)

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

// GetBounds @ 1498b5e50

TBox<double> * __thiscall
UPCGSplineInteriorSurfaceData::GetBounds
          (UPCGSplineInteriorSurfaceData *this,TBox<double> *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1498bcf50

UClass * __cdecl UPCGSplineInteriorSurfaceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineInteriorSurfaceData",
               &Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton,
               StaticRegisterNativesUPCGSplineInteriorSurfaceData,0x3e0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSplineInteriorSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGSplineInteriorSurfaceData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineInteriorSurfaceData.InnerSingleton;
}

// GetStrictBounds @ 1498c77d0

TBox<double> * __thiscall
UPCGSplineInteriorSurfaceData::GetStrictBounds
          (UPCGSplineInteriorSurfaceData *this,TBox<double> *__return_storage_ptr__)

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

// HasNonTrivialTransform @ 1498ca6b0

bool __thiscall
UPCGSplineInteriorSurfaceData::HasNonTrivialTransform(UPCGSplineInteriorSurfaceData *this)

{
  return true;
}

// Initialize @ 1498cd420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGSplineInteriorSurfaceData::Initialize
          (UPCGSplineInteriorSurfaceData *this,FPCGContext *param_1,UPCGSplineData *param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGSplineData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  undefined8 local_10;
  
  if ((param_2 == (UPCGSplineData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSplineData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineInteriorSurfaceData.cpp"
                         ,0x11,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_48 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UPCGSplineData *)0x0)) {
    local_30 = 0;
    local_40 = 0;
    local_35 = 0;
    if (param_2 != (UPCGSplineData *)0x0) {
      local_30 = (**(code **)(*(longlong *)param_2 + 800))(param_2);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_2);
    local_40 = 0;
    local_35 = 0;
    local_30 = (**(code **)(*(longlong *)param_2 + 800))(param_2);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_10 = 0;
  local_38 = 0x101;
  local_36 = 1;
  (**(code **)(*(longlong *)this + 0x468))(this,&local_48);
  if ((param_2 != (UPCGSplineData *)0x0) && ((char)local_38 != '\0')) {
    (**(code **)(*(longlong *)this + 0x470))(this,&local_48);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,(int)local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  FPCGSplineStruct::operator=(&this->SplineStruct,&param_2->SplineStruct);
  CacheData(this,param_1);
  return;
}

// IsBounded @ 1498d0cc0

bool __thiscall UPCGSplineInteriorSurfaceData::IsBounded(UPCGSplineInteriorSurfaceData *this)

{
  return (this->CachedBounds).IsValid != '\0';
}

// PointInsidePolygon @ 1498d2260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGSplineInteriorSurfaceData::PointInsidePolygon
          (UPCGSplineInteriorSurfaceData *this,TTransform<double> *param_1,TBox<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  int iVar6;
  TMatrix<double> *pTVar7;
  TTransform<double> *this_00;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_208 [32];
  TVector2<double>_u_0 local_1e8;
  double local_1d8;
  TVector<double>_u_0 local_1d0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_208;
  dVar13 = (param_1->Rotation).XY.m128d_f64[0];
  dVar10 = (param_1->Rotation).XY.m128d_f64[1];
  dVar11 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar12 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar13 = dVar11 * dVar11 + dVar13 * dVar13;
  dVar10 = dVar12 * dVar12 + dVar10 * dVar10;
  dVar11 = dVar10 + dVar13;
  dVar13 = dVar13 + dVar10;
  dVar10 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar11;
  dVar12 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar13;
  lVar9 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar12,0) & _UNK_15061cc88));
  dVar11 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar11;
  dVar13 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar13;
  auVar3._8_4_ = (int)lVar9;
  auVar3._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  uVar8 = movmskpd((int)param_1,auVar3);
  lVar9 = -(ulonglong)
           ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
           (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar13,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar9;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  iVar6 = movmskpd((int)local_98,auVar2);
  if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
    pTVar7 = &local_198;
    this_00 = param_1;
  }
  else {
    local_198.M[1][0] = (param_1->Translation).XY.m128d_f64[0];
    local_198.M[1][1] = (param_1->Translation).XY.m128d_f64[1];
    pTVar7 = &local_118;
    local_198.M[1][2] = (param_1->Translation).ZW.m128d_f64[0];
    local_198.M[1][3] = (param_1->Translation).ZW.m128d_f64[1];
    this_00 = (TTransform<double> *)&local_198;
    local_198.M[2][0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_198.M[2][1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_198.M[2][2] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_198.M[2][3] = (param_1->Scale3D).ZW.m128d_f64[1];
    local_198.M[0][0] = UE::Math::TQuat<double>::Identity.X;
    local_198.M[0][1] = UE::Math::TQuat<double>::Identity.Y;
    local_198.M[0][2] = UE::Math::TQuat<double>::Identity.Z;
    local_198.M[0][3] = UE::Math::TQuat<double>::Identity.W;
  }
  pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,pTVar7);
  UE::Math::TBox<double>::TransformBy(param_2,(TBox<double> *)&local_1d0._s_0,pTVar7);
  dVar13 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar10 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  dVar11 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  dVar12 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  dVar1 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  dVar4 = (dVar13 + dVar10) * __real_3fe0000000000000 -
          (local_1d0._s_0.Z + dStack_1a8) * __real_3fe0000000000000;
  dVar13 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           ((dVar10 - dVar13) + (dStack_1a8 - local_1d0._s_0.Z)) * __real_3fe0000000000000;
  dVar10 = (dVar11 + dVar12) * __real_3fe0000000000000 -
           (local_1d0._s_0.Y + local_1b0) * __real_3fe0000000000000;
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  dVar11 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           ((dVar12 - dVar11) + (local_1b0 - local_1d0._s_0.Y)) * __real_3fe0000000000000;
  dVar10 = ((this->CachedBounds).Min.field0_0x0._s_0.X + dVar1) * __real_3fe0000000000000 -
           (local_1d0._s_0.X + dStack_1b8) * __real_3fe0000000000000;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           ((dVar1 - (this->CachedBounds).Min.field0_0x0._s_0.X) + (dStack_1b8 - local_1d0._s_0.X))
           * __real_3fe0000000000000;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  if (dVar10 * dVar10 + dVar11 * dVar11 + dVar13 * dVar13 <= 0.0) {
    local_1e8._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    local_1e8._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
    local_1d8 = (param_1->Translation).ZW.m128d_f64[0];
    bVar5 = PCGSplineSamplerHelpers::PointInsidePolygon2D
                      (&this->CachedSplinePoints2D,(TVector2<double> *)&local_1e8._s_0,
                       (dVar1 - local_1e8._s_0.X) + __real_3f1a36e2e0000000);
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// PostLoad @ 1498d2980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGSplineInteriorSurfaceData::PostLoad(UPCGSplineInteriorSurfaceData *this)

{
  UObject::PostLoad((UObject *)this);
  CacheData(this,(FPCGContext *)0x0);
  return;
}

// ProjectPoint @ 1498d5080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGSplineInteriorSurfaceData::ProjectPoint
          (UPCGSplineInteriorSurfaceData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5)

{
  FSpline *this_00;
  double dVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  FInterpCurve<UE::Math::TVector<double>_> *this_01;
  TQuat<double> *pTVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_e8;
  float local_d0;
  float local_cc;
  TVector<double>_u_0 local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar2 = PointInsidePolygon(this,param_1,param_2);
  bVar4 = false;
  if (bVar2) {
    local_a8.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_a8.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_a8.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_a8.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_a8.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_a8.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_a8.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_a8.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    local_e8._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    local_e8._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
    local_e8._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
    if ((param_3->bProjectPositions == false) && (param_3->bProjectRotations == false)) {
      uVar7 = 0;
      uVar8 = 0;
      cVar3 = '\0';
    }
    else {
      dVar1 = PCGSplineSamplerHelpers::ProjectOntoSplineInteriorSurface
                        (&this->CachedSplinePoints,(TVector<double> *)&local_e8._s_0);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
      cVar3 = param_3->bProjectRotations;
    }
    if (param_3->bProjectPositions != false) {
      local_c8._s_0.Z = (double)CONCAT44(uVar8,uVar7);
      local_a8.Translation.XY.m128d_f64[0] = local_e8._s_0.X;
      local_a8.Translation.XY.m128d_f64[1] = local_e8._s_0.Y;
      local_a8.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar8,uVar7);
      local_a8.Translation.ZW.m128d_f64[1] = 0.0;
    }
    if (cVar3 != '\0') {
      this_00 = &(this->SplineStruct).Spline;
      if ((PCGSplineStruct::GUseSplineCurves == false) && (this_00->CurrentImplementation != '\0'))
      {
        this_01 = (FInterpCurve<UE::Math::TVector<double>_> *)
                  FSpline::GetSplinePointsPosition(this_00);
      }
      else {
        this_01 = (FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineStruct).SplineCurves;
      }
      local_c8._s_0.X = local_e8._s_0.X;
      local_c8._s_0.Y = local_e8._s_0.Y;
      local_c8._s_0.Z = (double)CONCAT44(uVar8,uVar7);
      fVar6 = FInterpCurve<UE::Math::TVector<double>_>::FindNearest
                        (this_01,(TVector<double> *)&local_c8._s_0,&local_cc,&local_d0);
      pTVar5 = FPCGSplineStruct::GetQuaternionAtSplineInputKey
                         (&this->SplineStruct,(TQuat<double> *)&local_c8._s_0,fVar6,Local);
      local_a8.Rotation.ZW.m128d_f64[0] = pTVar5->Z;
      local_a8.Rotation.ZW.m128d_f64[1] = pTVar5->W;
      local_a8.Rotation.XY.m128d_f64[0] = pTVar5->X;
      local_a8.Rotation.XY.m128d_f64[1] = pTVar5->Y;
    }
    FPCGPoint::FPCGPoint(param_4,&local_a8,__real_3f800000,0);
    dVar1 = (param_2->Min).field0_0x0._s_0.Y;
    bVar4 = true;
    (param_4->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
    (param_4->BoundsMin).field0_0x0._s_0.Y = dVar1;
    (param_4->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
    dVar1 = (param_2->Max).field0_0x0._s_0.Y;
    (param_4->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
    (param_4->BoundsMax).field0_0x0._s_0.Y = dVar1;
    (param_4->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
  }
  return bVar4;
}

// SamplePoint @ 1498db220

bool __thiscall
UPCGSplineInteriorSurfaceData::SamplePoint
          (UPCGSplineInteriorSurfaceData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  double dVar1;
  bool bVar2;
  TVector<double>_u_0 local_28;
  
  bVar2 = PointInsidePolygon(this,param_1,param_2);
  if (bVar2) {
    local_28._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    local_28._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
    local_28._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
    dVar1 = PCGSplineSamplerHelpers::ProjectOntoSplineInteriorSurface
                      (&this->CachedSplinePoints,(TVector<double> *)&local_28._s_0);
    if ((local_28._s_0.Z + (param_2->Min).field0_0x0._s_0.Z <= dVar1) &&
       (dVar1 <= local_28._s_0.Z + (param_2->Max).field0_0x0._s_0.Z)) {
      FPCGPoint::FPCGPoint(param_3,param_1,__real_3f800000,0);
      dVar1 = (param_2->Min).field0_0x0._s_0.Y;
      (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
      (param_3->BoundsMin).field0_0x0._s_0.Y = dVar1;
      (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
      dVar1 = (param_2->Max).field0_0x0._s_0.Y;
      (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
      (param_3->BoundsMax).field0_0x0._s_0.Y = dVar1;
      (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUPCGSplineInteriorSurfaceData @ 1498f6ae0

void __cdecl UPCGSplineInteriorSurfaceData::StaticRegisterNativesUPCGSplineInteriorSurfaceData(void)

{
  return;
}

