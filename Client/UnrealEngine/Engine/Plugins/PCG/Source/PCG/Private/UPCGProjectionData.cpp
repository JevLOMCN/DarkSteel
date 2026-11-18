// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 29

// StaticClass @ 14985afd0

UClass * __cdecl UPCGProjectionData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProjectionData",
               &Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton,
               StaticRegisterNativesUPCGProjectionData,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGProjectionData>,
               InternalVTableHelperCtorCaller<UPCGProjectionData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton;
}

// UPCGProjectionData @ 14988eaa0

UPCGProjectionData * __thiscall
UPCGProjectionData::UPCGProjectionData(UPCGProjectionData *this,FVTableHelper *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGProjectionData__6B_;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Source).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->Target).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
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
  *(undefined4 *)((this->CachedStrictBounds).Pad + 4) = 0x1000000;
  (this->ProjectionParams).bProjectRotations = true;
  (this->ProjectionParams).bProjectScales = false;
  (this->ProjectionParams).ColorBlendMode = SourceValue;
  ::FString::FString(&(this->ProjectionParams).AttributeList,L"");
  (this->ProjectionParams).AttributeMode = ExcludeAttributes;
  (this->ProjectionParams).AttributeMergeOperation = TargetValue;
  (this->ProjectionParams).TagMergeOperation = Source;
  return this;
}

// UPCGProjectionData @ 14988eb90

UPCGProjectionData * __thiscall
UPCGProjectionData::UPCGProjectionData(UPCGProjectionData *this,FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGProjectionData__6B_;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Source).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->Target).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
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
  *(undefined4 *)((this->CachedStrictBounds).Pad + 4) = 0x1000000;
  (this->ProjectionParams).bProjectRotations = true;
  (this->ProjectionParams).bProjectScales = false;
  (this->ProjectionParams).ColorBlendMode = SourceValue;
  ::FString::FString(&(this->ProjectionParams).AttributeList,L"");
  (this->ProjectionParams).AttributeMode = ExcludeAttributes;
  (this->ProjectionParams).AttributeMergeOperation = TargetValue;
  (this->ProjectionParams).TagMergeOperation = Source;
  return this;
}

// ~UPCGProjectionData @ 1498918b0

void __thiscall UPCGProjectionData::~UPCGProjectionData(UPCGProjectionData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGProjectionData__6B_;
  pFVar1 = (this->ProjectionParams).AttributeList.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// operator() @ 1498959a0

void __thiscall `UPCGProjectionData::CreateBasePointData'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x490);
  uVar3 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x488))();
  (*pcVar2)(plVar1,uVar3,0);
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x498);
  uVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x640))
                    (*(longlong **)((longlong)this + 8),1);
  (*pcVar2)(plVar1,uVar4 | 0x93);
                    /* WARNING: Could not recover jumptable at 0x000149895a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)this + 0x4b0))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  return;
}

// operator() @ 149898be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`UPCGProjectionData::CreateBasePointData'::__l2::<lambda_4>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  TVector<double>_u_0 *pTVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  EPCGProjectionColorBlendMode EVar5;
  EPCGMetadataOp EVar6;
  longlong *plVar7;
  long64 lVar8;
  UPCGMetadata *this_00;
  UPCGMetadata *pUVar9;
  UPCGMetadata *pUVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  TTransform<double> *pTVar31;
  float *pfVar32;
  TVector<double> *pTVar33;
  TVector4<double> *pTVar34;
  int *piVar35;
  long64 *plVar36;
  longlong lVar37;
  TVector4<double>_u_0 *pTVar38;
  uint uVar39;
  TVector<double>_u_0 *pTVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auStackY_588 [32];
  int local_530;
  TVector4<double> local_518;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  float local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  uint uStack_470;
  uint uStack_46c;
  double local_468;
  TVector4<double>_u_0 local_458;
  undefined8 local_438;
  longlong local_430;
  double local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  double local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined1 local_3f8;
  FPCGPointValueRanges local_3e8;
  FConstPCGPointValueRanges local_258;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_530 = 0;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges
            (&local_258,*(UPCGBasePointData **)((longlong)this + 0x10));
  FPCGPointValueRanges::FPCGPointValueRanges
            (&local_3e8,*(UPCGBasePointData **)((longlong)this + 8),false);
  dVar24 = _UNK_150689688;
  dVar23 = ___xmm_3ff00000000000003ff0000000000000;
  iVar28 = param_1 + param_3;
  iVar30 = 0;
  if (param_1 < iVar28) {
    uVar42 = (uint)__xmm_80000000000000008000000000000000;
    uVar43 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar41 = (uint)~param_1 >> 0x1f;
      local_498 = 1.0;
      local_438 = 0x3f000000;
      uVar29 = 0;
      if (param_1 < local_258.BoundsMaxRange.NumElements) {
        uVar29 = uVar41;
      }
      local_430 = -1;
      local_4f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_4f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4f8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_458._s_0.X = dVar23;
      local_458._s_0.Y = dVar24;
      local_458._s_0.Z = dVar23;
      local_458._s_0.W = dVar24;
      local_4e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_4e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_4e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_4d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_4d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4d8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_4b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_4b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_4b8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_4c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_4c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      uStack_470 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
      uStack_46c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
      local_488 = CONCAT44(uStack_46c ^ uVar43,uStack_470 ^ uVar42);
      local_478 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
      uStack_474 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
      local_4a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_4a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_468 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_490 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar43,
                           UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar42);
      local_480 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                 >> 0x20) ^ uVar43,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar42)
      ;
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        iVar30 = (*pcVar11)();
        return iVar30;
      }
      pTVar40 = (TVector<double>_u_0 *)
                ((longlong)&(local_258.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                (longlong)(param_1 % local_258.BoundsMaxRange.ElementView.NumElements) *
                (longlong)local_258.BoundsMaxRange.ElementView.BytesBetweenElements);
      uVar29 = 0;
      if (param_1 < local_258.BoundsMinRange.NumElements) {
        uVar29 = uVar41;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        iVar30 = (*pcVar11)();
        return iVar30;
      }
      lVar37 = (longlong)(param_1 % local_258.BoundsMinRange.ElementView.NumElements) *
               (longlong)local_258.BoundsMinRange.ElementView.BytesBetweenElements;
      pTVar1 = (TVector<double>_u_0 *)
               ((longlong)&(local_258.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
               lVar37);
      local_428 = (pTVar1->_s_0).X;
      uStack_420 = *(undefined8 *)((longlong)pTVar1 + 8);
      local_418 = *(undefined8 *)
                   ((longlong)&(local_258.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                   lVar37 + 0x10);
      local_410 = (pTVar40->_s_0).X;
      uStack_408 = *(undefined8 *)((longlong)pTVar40 + 8);
      local_400 = *(undefined8 *)((longlong)pTVar40 + 0x10);
      lVar37 = *(longlong *)this;
      local_3f8 = 1;
      plVar7 = *(longlong **)(lVar37 + 0x118);
      pcVar11 = *(code **)(*plVar7 + 0x3d0);
      uVar29 = 0;
      if (param_1 < local_258.TransformRange.NumElements) {
        uVar29 = uVar41;
      }
      if ((uVar29 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        iVar30 = (*pcVar11)();
        return iVar30;
      }
      cVar26 = (*pcVar11)(plVar7,(double *)
                                 ((longlong)
                                  ((local_258.TransformRange.ElementView.FirstElementPtr)->Rotation)
                                  .XY.m128d_f64 +
                                 (longlong)
                                 (param_1 % local_258.TransformRange.ElementView.NumElements) *
                                 (longlong)local_258.TransformRange.ElementView.BytesBetweenElements
                                 ),&local_428,lVar37 + 400);
      if (cVar26 == '\0') {
        if (*(char *)(*(longlong *)this + 0x50) != '\0') {
          bVar25 = false;
          uVar29 = 0;
          if (param_1 < local_258.TransformRange.NumElements) {
            uVar29 = uVar41;
          }
          if ((uVar29 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar27)) {
            pcVar11 = (code *)swi(3);
            iVar30 = (*pcVar11)();
            return iVar30;
          }
          lVar37 = (longlong)(param_1 % local_258.TransformRange.ElementView.NumElements) *
                   (longlong)local_258.TransformRange.ElementView.BytesBetweenElements;
          local_4f8 = *(undefined1 (*) [16])
                       ((longlong)
                        ((local_258.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.
                        m128d_f64 + lVar37);
          local_4e8 = *(undefined1 (*) [16])
                       ((longlong)
                        ((local_258.TransformRange.ElementView.FirstElementPtr)->Rotation).ZW.
                        m128d_f64 + lVar37);
          local_4d8 = *(undefined1 (*) [16])
                       ((longlong)
                        ((local_258.TransformRange.ElementView.FirstElementPtr)->Translation).XY.
                        m128d_f64 + lVar37);
          local_4c8 = *(undefined1 (*) [16])
                       ((longlong)
                        ((local_258.TransformRange.ElementView.FirstElementPtr)->Translation).ZW.
                        m128d_f64 + lVar37);
          local_4b8 = *(undefined1 (*) [16])
                       ((longlong)
                        ((local_258.TransformRange.ElementView.FirstElementPtr)->Scale3D).XY.
                        m128d_f64 + lVar37);
          local_4a8 = *(undefined1 (*) [16])
                       ((longlong)
                        ((local_258.TransformRange.ElementView.FirstElementPtr)->Scale3D).ZW.
                        m128d_f64 + lVar37);
          uVar29 = 0;
          if (param_1 < local_258.ColorRange.NumElements) {
            uVar29 = uVar41;
          }
          if ((uVar29 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar27)) {
            pcVar11 = (code *)swi(3);
            iVar30 = (*pcVar11)();
            return iVar30;
          }
          lVar37 = (longlong)(param_1 % local_258.ColorRange.ElementView.NumElements) *
                   (longlong)local_258.ColorRange.ElementView.BytesBetweenElements;
          pTVar38 = (TVector4<double>_u_0 *)
                    ((longlong)&(local_258.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                    lVar37);
          local_458._s_0.X = (pTVar38->_s_0).X;
          local_458._s_0.Y = (double)*(undefined8 *)((longlong)pTVar38 + 8);
          pdVar2 = (double *)
                   ((longlong)&(local_258.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                   lVar37 + 0x10);
          local_458._s_0.Z = *pdVar2;
          local_458._s_0.W = pdVar2[1];
          local_498 = 0.0;
          local_430 = -1;
          goto LAB_149899060;
        }
      }
      else {
        bVar25 = true;
LAB_149899060:
        if (local_3e8.TransformRange.NumElements != 0) {
          pTVar31 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                    ::GetElement(&local_258.TransformRange,param_1);
          dVar4 = (pTVar31->Rotation).XY.m128d_f64[0];
          dVar12 = (pTVar31->Rotation).XY.m128d_f64[1];
          dVar13 = (pTVar31->Rotation).ZW.m128d_f64[0];
          dVar14 = (pTVar31->Rotation).ZW.m128d_f64[1];
          dVar15 = (pTVar31->Translation).XY.m128d_f64[0];
          dVar16 = (pTVar31->Translation).XY.m128d_f64[1];
          dVar17 = (pTVar31->Translation).ZW.m128d_f64[0];
          dVar18 = (pTVar31->Translation).ZW.m128d_f64[1];
          dVar19 = (pTVar31->Scale3D).XY.m128d_f64[0];
          dVar20 = (pTVar31->Scale3D).XY.m128d_f64[1];
          dVar21 = (pTVar31->Scale3D).ZW.m128d_f64[0];
          dVar22 = (pTVar31->Scale3D).ZW.m128d_f64[1];
          pTVar31 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                    ::operator[](&local_3e8.TransformRange,param_2);
          (pTVar31->Rotation).XY.m128d_f64[0] = dVar4;
          (pTVar31->Rotation).XY.m128d_f64[1] = dVar12;
          (pTVar31->Rotation).ZW.m128d_f64[0] = dVar13;
          (pTVar31->Rotation).ZW.m128d_f64[1] = dVar14;
          (pTVar31->Translation).XY.m128d_f64[0] = dVar15;
          (pTVar31->Translation).XY.m128d_f64[1] = dVar16;
          (pTVar31->Translation).ZW.m128d_f64[0] = dVar17;
          (pTVar31->Translation).ZW.m128d_f64[1] = dVar18;
          (pTVar31->Scale3D).XY.m128d_f64[0] = dVar19;
          (pTVar31->Scale3D).XY.m128d_f64[1] = dVar20;
          (pTVar31->Scale3D).ZW.m128d_f64[0] = dVar21;
          (pTVar31->Scale3D).ZW.m128d_f64[1] = dVar22;
        }
        if (local_3e8.DensityRange.NumElements != 0) {
          pfVar32 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_258.DensityRange,param_1);
          fVar3 = *pfVar32;
          pfVar32 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3e8.DensityRange,param_2);
          *pfVar32 = fVar3;
        }
        if (local_3e8.SteepnessRange.NumElements != 0) {
          pfVar32 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                              (&local_258.SteepnessRange,param_1);
          fVar3 = *pfVar32;
          pfVar32 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                              (&local_3e8.SteepnessRange,param_2);
          *pfVar32 = fVar3;
        }
        if (local_3e8.BoundsMinRange.NumElements != 0) {
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_258.BoundsMinRange,param_1);
          dVar12 = (pTVar33->field0_0x0)._s_0.X;
          dVar13 = (pTVar33->field0_0x0)._s_0.Y;
          dVar4 = (pTVar33->field0_0x0)._s_0.Z;
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3e8.BoundsMinRange,param_2);
          (pTVar33->field0_0x0)._s_0.X = dVar12;
          (pTVar33->field0_0x0)._s_0.Y = dVar13;
          (pTVar33->field0_0x0)._s_0.Z = dVar4;
        }
        if (local_3e8.BoundsMaxRange.NumElements != 0) {
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                    ::GetElement(&local_258.BoundsMaxRange,param_1);
          dVar12 = (pTVar33->field0_0x0)._s_0.X;
          dVar13 = (pTVar33->field0_0x0)._s_0.Y;
          dVar4 = (pTVar33->field0_0x0)._s_0.Z;
          pTVar33 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                    ::operator[](&local_3e8.BoundsMaxRange,param_2);
          (pTVar33->field0_0x0)._s_0.X = dVar12;
          (pTVar33->field0_0x0)._s_0.Y = dVar13;
          (pTVar33->field0_0x0)._s_0.Z = dVar4;
        }
        if (local_3e8.ColorRange.NumElements != 0) {
          pTVar34 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                    ::GetElement(&local_258.ColorRange,param_1);
          dVar4 = (pTVar34->field0_0x0)._s_0.X;
          dVar12 = (pTVar34->field0_0x0)._s_0.Y;
          dVar13 = (pTVar34->field0_0x0)._s_0.Z;
          dVar14 = (pTVar34->field0_0x0)._s_0.W;
          pTVar34 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                    ::operator[](&local_3e8.ColorRange,param_2);
          (pTVar34->field0_0x0)._s_0.X = dVar4;
          (pTVar34->field0_0x0)._s_0.Y = dVar12;
          (pTVar34->field0_0x0)._s_0.Z = dVar13;
          (pTVar34->field0_0x0)._s_0.W = dVar14;
        }
        if (local_3e8.SeedRange.NumElements != 0) {
          piVar35 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                              (&local_258.SeedRange,param_1);
          iVar30 = *piVar35;
          piVar35 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                              (&local_3e8.SeedRange,param_2);
          *piVar35 = iVar30;
        }
        if (local_3e8.MetadataEntryRange.NumElements != 0) {
          plVar36 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                              (&local_258.MetadataEntryRange,param_1);
          lVar8 = *plVar36;
          plVar36 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                              (&local_3e8.MetadataEntryRange,param_2);
          *plVar36 = lVar8;
        }
        uVar39 = (uint)~param_2 >> 0x1f;
        uVar29 = 0;
        if (param_2 < local_3e8.TransformRange.NumElements) {
          uVar29 = uVar39;
        }
        if ((uVar29 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar27)) {
          pcVar11 = (code *)swi(3);
          iVar30 = (*pcVar11)();
          return iVar30;
        }
        if (param_2 == param_2 % local_3e8.TransformRange.ElementView.NumElements) {
          pTVar31 = (TTransform<double> *)
                    ((longlong)
                     ((local_3e8.TransformRange.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64
                    + (longlong)local_3e8.TransformRange.ElementView.BytesBetweenElements *
                      (longlong)(param_2 % local_3e8.TransformRange.ElementView.NumElements));
        }
        else {
          pTVar31 = &local_3e8.TransformRange.StubValue;
        }
        (pTVar31->Rotation).XY.m128d_f64[0] = (double)local_4f8._0_8_;
        (pTVar31->Rotation).XY.m128d_f64[1] = (double)local_4f8._8_8_;
        (pTVar31->Rotation).ZW.m128d_f64[0] = (double)local_4e8._0_8_;
        (pTVar31->Rotation).ZW.m128d_f64[1] = (double)local_4e8._8_8_;
        (pTVar31->Translation).XY.m128d_f64[0] = (double)local_4d8._0_8_;
        (pTVar31->Translation).XY.m128d_f64[1] = (double)local_4d8._8_8_;
        (pTVar31->Translation).ZW.m128d_f64[0] = (double)local_4c8._0_8_;
        (pTVar31->Translation).ZW.m128d_f64[1] = (double)local_4c8._8_8_;
        (pTVar31->Scale3D).XY.m128d_f64[0] = (double)local_4b8._0_8_;
        (pTVar31->Scale3D).XY.m128d_f64[1] = (double)local_4b8._8_8_;
        (pTVar31->Scale3D).ZW.m128d_f64[0] = (double)local_4a8._0_8_;
        (pTVar31->Scale3D).ZW.m128d_f64[1] = (double)local_4a8._8_8_;
        if (bVar25) {
          EVar5 = *(EPCGProjectionColorBlendMode *)(*(longlong *)this + 0x193);
          uVar29 = 0;
          if (param_1 < local_258.ColorRange.NumElements) {
            uVar29 = uVar41;
          }
          if ((uVar29 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar11 = (code *)swi(3);
            iVar30 = (*pcVar11)();
            return iVar30;
          }
          pTVar34 = PCGProjectionPrivate::ApplyProjectionColorBlend
                              (&local_518,
                               (TVector4<double> *)
                               &((TVector4<double>_u_0 *)
                                ((longlong)
                                 &(local_258.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                                (longlong)(param_1 % local_258.ColorRange.ElementView.NumElements) *
                                (longlong)local_258.ColorRange.ElementView.BytesBetweenElements))->
                                _s_0,(TVector4<double> *)&local_458._s_0,EVar5);
          dVar4 = (pTVar34->field0_0x0)._s_0.X;
          dVar12 = (pTVar34->field0_0x0)._s_0.Y;
          dVar13 = (pTVar34->field0_0x0)._s_0.Z;
          dVar14 = (pTVar34->field0_0x0)._s_0.W;
          uVar29 = 0;
          if (param_2 < local_3e8.ColorRange.NumElements) {
            uVar29 = uVar39;
          }
          if ((uVar29 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar11 = (code *)swi(3);
            iVar30 = (*pcVar11)();
            return iVar30;
          }
          if (param_2 == param_2 % local_3e8.ColorRange.ElementView.NumElements) {
            pTVar38 = (TVector4<double>_u_0 *)
                      ((longlong)&(local_3e8.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                      (longlong)local_3e8.ColorRange.ElementView.BytesBetweenElements *
                      (longlong)(param_2 % local_3e8.ColorRange.ElementView.NumElements));
          }
          else {
            pTVar38 = &local_3e8.ColorRange.StubValue.field0_0x0;
          }
          (((TVector4<double>_u_0 *)&(pTVar38->_s_0).X)->_s_0).X = dVar4;
          *(double *)((longlong)pTVar38 + 8) = dVar12;
          *(double *)((longlong)pTVar38 + 0x10) = dVar13;
          *(double *)((longlong)pTVar38 + 0x18) = dVar14;
        }
        uVar29 = 0;
        if (param_2 < local_3e8.DensityRange.NumElements) {
          uVar29 = uVar39;
        }
        if ((uVar29 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar25)) {
          pcVar11 = (code *)swi(3);
          iVar30 = (*pcVar11)();
          return iVar30;
        }
        if (param_2 == param_2 % local_3e8.DensityRange.ElementView.NumElements) {
          pfVar32 = (float *)((longlong)local_3e8.DensityRange.ElementView.BytesBetweenElements *
                              (longlong)(param_2 % local_3e8.DensityRange.ElementView.NumElements) +
                             (longlong)local_3e8.DensityRange.ElementView.FirstElementPtr);
        }
        else {
          pfVar32 = &local_3e8.DensityRange.StubValue;
        }
        *pfVar32 = local_498 * *pfVar32;
        this_00 = *(UPCGMetadata **)((longlong)this + 0x20);
        if (((this_00 != (UPCGMetadata *)0x0) && (*(longlong *)((longlong)this + 0x28) != 0)) &&
           (local_430 != -1)) {
          EVar6 = *(EPCGMetadataOp *)(*(longlong *)this + 0x1a9);
          uVar29 = 0;
          if (param_2 < local_3e8.MetadataEntryRange.NumElements) {
            uVar29 = uVar39;
          }
          if ((uVar29 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar11 = (code *)swi(3);
            iVar30 = (*pcVar11)();
            return iVar30;
          }
          if (param_2 == param_2 % local_3e8.MetadataEntryRange.ElementView.NumElements) {
            plVar36 = (long64 *)
                      ((longlong)local_3e8.MetadataEntryRange.ElementView.BytesBetweenElements *
                       (longlong)(param_2 % local_3e8.MetadataEntryRange.ElementView.NumElements) +
                      (longlong)local_3e8.MetadataEntryRange.ElementView.FirstElementPtr);
          }
          else {
            plVar36 = &local_3e8.MetadataEntryRange.StubValue;
          }
          pUVar9 = *(UPCGMetadata **)((longlong)this + 0x28);
          pUVar10 = *(UPCGMetadata **)((longlong)this + 0x18);
          uVar29 = 0;
          if (param_1 < local_258.MetadataEntryRange.NumElements) {
            uVar29 = uVar41;
          }
          if ((uVar29 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < NumElements)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                  ,0x8b,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar11 = (code *)swi(3);
            iVar30 = (*pcVar11)();
            return iVar30;
          }
          UPCGMetadata::MergeAttributesSubset
                    (this_00,*(long64 *)
                              ((longlong)
                               (param_1 % local_258.MetadataEntryRange.ElementView.NumElements) *
                               (longlong)
                               local_258.MetadataEntryRange.ElementView.BytesBetweenElements +
                              (longlong)local_258.MetadataEntryRange.ElementView.FirstElementPtr),
                     pUVar10,pUVar10,local_430,pUVar9,pUVar9,plVar36,EVar6);
        }
        local_530 = local_530 + 1;
        param_2 = param_2 + 1;
      }
      param_1 = param_1 + 1;
      iVar30 = local_530;
    } while (param_1 < iVar28);
  }
  return iVar30;
}

// AddToCrc @ 14989e0d0

void __thiscall
UPCGProjectionData::AddToCrc(UPCGProjectionData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UClass *this_00;
  UScriptStruct *this_01;
  undefined1 local_res8 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  this_01 = FPCGProjectionParams::StaticStruct();
  UScriptStruct::SerializeItem(this_01,(FArchive *)param_1,&this->ProjectionParams,(void *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ApplyProjectionResult @ 14989efe0

void __thiscall
UPCGProjectionData::ApplyProjectionResult
          (UPCGProjectionData *this,FPCGPoint *param_1,FPCGPoint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector4<double> *pTVar4;
  TVector4<double> local_28;
  
  if ((this->ProjectionParams).bProjectPositions != false) {
    dVar2 = (param_1->Transform).Translation.XY.m128d_f64[1];
    dVar1 = (param_1->Transform).Translation.ZW.m128d_f64[0];
    (param_2->Transform).Translation.XY.m128d_f64[0] =
         (param_1->Transform).Translation.XY.m128d_f64[0];
    (param_2->Transform).Translation.XY.m128d_f64[1] = dVar2;
    (param_2->Transform).Translation.ZW.m128d_f64[0] = dVar1;
    (param_2->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  }
  if ((this->ProjectionParams).bProjectRotations != false) {
    dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[1];
    dVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
    dVar3 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
    (param_2->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
    (param_2->Transform).Rotation.XY.m128d_f64[1] = dVar1;
    (param_2->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
    (param_2->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  }
  if ((this->ProjectionParams).bProjectScales != false) {
    dVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
    dVar1 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
    (param_2->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
    (param_2->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
    (param_2->Transform).Scale3D.ZW.m128d_f64[0] = dVar1;
    (param_2->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  pTVar4 = PCGProjectionPrivate::ApplyProjectionColorBlend
                     (&local_28,&param_2->Color,&param_1->Color,
                      (this->ProjectionParams).ColorBlendMode);
  dVar1 = (pTVar4->field0_0x0)._s_0.Y;
  (param_2->Color).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (param_2->Color).field0_0x0._s_0.Y = dVar1;
  dVar1 = (pTVar4->field0_0x0)._s_0.W;
  (param_2->Color).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  (param_2->Color).field0_0x0._s_0.W = dVar1;
  param_2->Density = param_1->Density * param_2->Density;
  return;
}

// ComputeCrc @ 1498a21f0

FPCGCrc __thiscall UPCGProjectionData::ComputeCrc(UPCGProjectionData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGCrc FVar3;
  FPCGCrc FVar4;
  undefined7 in_register_00000011;
  undefined1 in_R8B;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_d8 [16];
  FArchiveCrc32 local_c8;
  
  FVar3._1_7_ = in_register_00000011;
  FVar3.Value._0_1_ = param_1;
  FArchiveCrc32::FArchiveCrc32(&local_c8,0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x370))(this,&local_c8,in_R8B);
  if ((((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((this->Target).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source && Target",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                         ,0x51,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FPCGCrc)(*pcVar1)();
    return FVar3;
  }
  FVar4 = UPCGData::GetOrComputeCrc
                    ((UPCGData *)(this->Source).field0_0x0.DebugPtr,SUB81(local_res20,0));
  local_res8[0] = *(uint *)FVar4;
  FVar4 = UPCGData::GetOrComputeCrc
                    ((UPCGData *)(this->Target).field0_0x0.DebugPtr,SUB81(local_d8,0));
  local_res10[0] = *(uint *)FVar4;
  if (*(uint **)(local_c8._padding_ + 8) < *(uint **)local_c8._padding_ + 1) {
    if ((local_c8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_c8._padding_ + 0x188))(&local_c8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 4;
  }
  if (*(uint **)(local_c8._padding_ + 8) < *(uint **)local_c8._padding_ + 1) {
    if ((local_c8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_c8._padding_ + 0x188))(&local_c8,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,local_res10);
    }
  }
  else {
    local_res10[0] = **(uint **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 4;
  }
  *(uint *)FVar3 = local_c8.CRC;
  *(undefined1 *)((longlong)FVar3 + 4) = 1;
  FArchive::~FArchive((FArchive *)&local_c8);
  return FVar3;
}

// CopyBaseProjectionClass @ 1498a32a0

void __thiscall
UPCGProjectionData::CopyBaseProjectionClass(UPCGProjectionData *this,UPCGProjectionData *param_1)

{
  UPCGSpatialData *pUVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (this->Source).field0_0x0.DebugPtr, pUVar1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (param_1->Source).field0_0x0 = (this->Source).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->Target).field0_0x0.DebugPtr, pUVar1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (param_1->Target).field0_0x0 = (this->Target).field0_0x0;
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  (param_1->CachedBounds).Min.field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (param_1->CachedBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (param_1->CachedBounds).Min.field0_0x0._s_0.Z = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  (param_1->CachedBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (param_1->CachedBounds).Max.field0_0x0._s_0.Y = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  (param_1->CachedBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->CachedBounds).Pad[0];
  uVar4 = (this->CachedBounds).Pad[1];
  uVar5 = (this->CachedBounds).Pad[2];
  uVar6 = (this->CachedBounds).Pad[3];
  uVar7 = (this->CachedBounds).Pad[4];
  uVar8 = (this->CachedBounds).Pad[5];
  uVar9 = (this->CachedBounds).Pad[6];
  (param_1->CachedBounds).IsValid = (this->CachedBounds).IsValid;
  (param_1->CachedBounds).Pad[0] = uVar3;
  (param_1->CachedBounds).Pad[1] = uVar4;
  (param_1->CachedBounds).Pad[2] = uVar5;
  (param_1->CachedBounds).Pad[3] = uVar6;
  (param_1->CachedBounds).Pad[4] = uVar7;
  (param_1->CachedBounds).Pad[5] = uVar8;
  (param_1->CachedBounds).Pad[6] = uVar9;
  dVar2 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  (param_1->CachedStrictBounds).Min.field0_0x0._s_0.X =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.X;
  (param_1->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (param_1->CachedStrictBounds).Min.field0_0x0._s_0.Z =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  (param_1->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (param_1->CachedStrictBounds).Max.field0_0x0._s_0.Y =
       (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  (param_1->CachedStrictBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->CachedStrictBounds).Pad[0];
  uVar4 = (this->CachedStrictBounds).Pad[1];
  uVar5 = (this->CachedStrictBounds).Pad[2];
  uVar6 = (this->CachedStrictBounds).Pad[3];
  uVar7 = (this->CachedStrictBounds).Pad[4];
  uVar8 = (this->CachedStrictBounds).Pad[5];
  uVar9 = (this->CachedStrictBounds).Pad[6];
  (param_1->CachedStrictBounds).IsValid = (this->CachedStrictBounds).IsValid;
  (param_1->CachedStrictBounds).Pad[0] = uVar3;
  (param_1->CachedStrictBounds).Pad[1] = uVar4;
  (param_1->CachedStrictBounds).Pad[2] = uVar5;
  (param_1->CachedStrictBounds).Pad[3] = uVar6;
  (param_1->CachedStrictBounds).Pad[4] = uVar7;
  (param_1->CachedStrictBounds).Pad[5] = uVar8;
  (param_1->CachedStrictBounds).Pad[6] = uVar9;
  (param_1->ProjectionParams).bProjectPositions = (this->ProjectionParams).bProjectPositions;
  (param_1->ProjectionParams).bProjectRotations = (this->ProjectionParams).bProjectRotations;
  (param_1->ProjectionParams).bProjectScales = (this->ProjectionParams).bProjectScales;
  (param_1->ProjectionParams).ColorBlendMode = (this->ProjectionParams).ColorBlendMode;
  ::FString::operator=
            (&(param_1->ProjectionParams).AttributeList,&(this->ProjectionParams).AttributeList);
  (param_1->ProjectionParams).AttributeMode = (this->ProjectionParams).AttributeMode;
  (param_1->ProjectionParams).AttributeMergeOperation =
       (this->ProjectionParams).AttributeMergeOperation;
  (param_1->ProjectionParams).TagMergeOperation = (this->ProjectionParams).TagMergeOperation;
  return;
}

// CopyInternal @ 1498a4f30

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
UPCGProjectionData::CopyInternal(UPCGProjectionData *this,FPCGContext *param_1)

{
  UPCGProjectionData *pUVar1;
  
  pUVar1 = FPCGContext::NewObject_AnyThread<UPCGProjectionData>(param_1);
  CopyBaseProjectionClass(this,pUVar1);
  return (UPCGSpatialData *)pUVar1;
}

// CreateBasePointData @ 1498aacd0

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
UPCGProjectionData::CreateBasePointData
          (UPCGProjectionData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  UPCGMetadata *pUVar1;
  longlong lVar2;
  UPCGMetadata *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPCGBasePointData *pUVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  UPCGBasePointData *pUVar10;
  UPCGMetadata *this_00;
  FPCGAsyncState *pFVar11;
  undefined1 auStackY_178 [32];
  UPackage *local_120;
  UPCGProjectionData *local_118;
  UPCGBasePointData *local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_e8;
  undefined8 local_e0;
  TObjectPtr<UClass>_u_0 local_d8;
  <lambda_3> local_d0;
  <lambda_2> local_c8;
  <lambda_1> local_c0;
  <lambda_4> local_b0;
  TVector<double>_u_0 local_80;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_50 = 0;
  local_4f = 0;
  local_4b = 0;
  local_49 = 0;
  local_80._s_0.X = 0.0;
  local_80._s_0.Y = 0.0;
  local_80._s_0.Z = 0.0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  pUVar7 = UPCGSpatialData::ToBasePointData
                     ((this->Source).field0_0x0.DebugPtr,param_1,(TBox<double> *)&local_80._s_0);
  pUVar1 = (UPCGMetadata *)pUVar7->_padding_;
  pUVar8 = GetTransientPackage();
  local_120 = pUVar8;
  if (param_1 != (FPCGContext *)0x0) {
    pUVar10 = FPCGContext::
              NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                        (param_1,&local_120,
                         (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
    goto LAB_1498aae0d;
  }
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UPCGBasePointData *)(*pcVar4)();
      return pUVar7;
    }
  }
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar2 == 0) {
LAB_1498aadd1:
    pUVar9 = (UClass *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    if (pUVar9 == (UClass *)0x0) goto LAB_1498aadd1;
    iVar6 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1498aadd1;
    pUVar9 = *(UClass **)param_2.Class.field0_0x0;
  }
  pUVar10 = NewObject<UPCGBasePointData>
                      ((UObject *)pUVar8,pUVar9,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_1498aae0d:
  this_00 = (UPCGMetadata *)0x0;
  local_118 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_108 = 0x101;
  local_105 = 0;
  local_100 = (**(code **)(this->_padding_ + 800))(this);
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_e0 = 0;
  local_106 = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_110 = pUVar7;
  (**(code **)(pUVar10->_padding_ + 0x468))(pUVar10,&local_118);
  if ((local_118 != (UPCGProjectionData *)0x0) && ((char)local_108 != '\0')) {
    (**(code **)(pUVar10->_padding_ + 0x470))(pUVar10,&local_118);
  }
  pUVar3 = (UPCGMetadata *)pUVar10->_padding_;
  if (pUVar3 == (UPCGMetadata *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                       ,0x11d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UPCGBasePointData *)(*pcVar4)();
      return pUVar7;
    }
  }
  if (((this->Target).field0_0x0.DebugPtr)->_padding_ != 0) {
    this_00 = FPCGContext::NewObject_AnyThread<UPCGMetadata>(param_1);
    local_d8.DebugPtr = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_d8.DebugPtr);
    }
    UPCGMetadata::SetupDomainsFromPCGDataType(this_00,(TSubclassOf<UPCGData> *)&local_d8.ObjectPtr);
    SetupTargetMetadata(this,this_00);
  }
  local_d0.PointData = pUVar10;
  local_c8.PointData = pUVar10;
  local_c0.PointData = pUVar10;
  local_c0.SourcePointData = pUVar7;
  local_b0.__this = this;
  local_b0.PointData = pUVar10;
  local_b0.SourcePointData = pUVar7;
  local_b0.SourceMetadata = pUVar1;
  local_b0.OutMetadata = pUVar3;
  local_b0.TempTargetMetadata = this_00;
  iVar6 = (**(code **)(pUVar7->_padding_ + 0x488))(pUVar7);
  pFVar11 = &param_1->AsyncState;
  if (param_1 == (FPCGContext *)0x0) {
    pFVar11 = (FPCGAsyncState *)0x0;
  }
  FPCGAsync::
  AsyncProcessingRangeEx<_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_1>_&,_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_4>_&,_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_2>_&,_UPCGProjectionData::CreateBasePointData_::__l2::<lambda_3>_&>
            (pFVar11,iVar6,&local_c0,&local_b0,&local_c8,&local_d0,false,0x40,true);
  if (5 < (byte)LogPCG._0_1_) {
    (**(code **)(pUVar7->_padding_ + 0x488))(pUVar7);
    (**(code **)(pUVar10->_padding_ + 0x488))(pUVar10);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_e8,(int)local_e0);
  if (local_e8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  return pUVar10;
}

// CreatePointArrayData @ 1498adf20

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
UPCGProjectionData::CreatePointArrayData
          (UPCGProjectionData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId264,"UPCGProjectionData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
               ,0x108);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId264);
  }
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointArrayData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)&local_res20);
  if (pUVar2 == (UPCGPointArrayData *)0x0) {
    pUVar2 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar3 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointArrayData>(&local_28);
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

// CreatePointData @ 1498af120

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
UPCGProjectionData::CreatePointData(UPCGProjectionData *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res18 [2];
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId257,"UPCGProjectionData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
               ,0x101);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId257);
  }
  local_res18[0] = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar2 = (UPCGPointData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)local_res18);
  if (pUVar2 == (UPCGPointData *)0x0) {
    pUVar2 = (UPCGPointData *)0x0;
  }
  else {
    pUVar3 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointData>(&local_28);
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

// GetBounds @ 1498b5d20

TBox<double> * __thiscall
UPCGProjectionData::GetBounds(UPCGProjectionData *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  bool bVar14;
  TBox<double> *pTVar15;
  
  if (((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
     ((this->Target).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Source && Target",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                        ,0x70,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      pTVar15 = (TBox<double> *)(*pcVar1)();
      return pTVar15;
    }
  }
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  dVar3 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  dVar5 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar4;
  uVar6 = (this->CachedBounds).IsValid;
  uVar7 = (this->CachedBounds).Pad[0];
  uVar8 = (this->CachedBounds).Pad[1];
  uVar9 = (this->CachedBounds).Pad[2];
  uVar10 = (this->CachedBounds).Pad[3];
  uVar11 = (this->CachedBounds).Pad[4];
  uVar12 = (this->CachedBounds).Pad[5];
  uVar13 = (this->CachedBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->IsValid = uVar6;
  __return_storage_ptr__->Pad[0] = uVar7;
  __return_storage_ptr__->Pad[1] = uVar8;
  __return_storage_ptr__->Pad[2] = uVar9;
  __return_storage_ptr__->Pad[3] = uVar10;
  __return_storage_ptr__->Pad[4] = uVar11;
  __return_storage_ptr__->Pad[5] = uVar12;
  __return_storage_ptr__->Pad[6] = uVar13;
  return __return_storage_ptr__;
}

// GetDimension @ 1498b9a70

int __thiscall UPCGProjectionData::GetDimension(UPCGProjectionData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if ((((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((this->Target).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source && Target",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                         ,0x6a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  iVar3 = (**(code **)(((this->Target).field0_0x0.DebugPtr)->_padding_ + 0x380))();
  iVar4 = (**(code **)(((this->Source).field0_0x0.DebugPtr)->_padding_ + 0x380))();
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// GetIncludeExcludeAttributeNames @ 1498ba3e0

void __thiscall
UPCGProjectionData::GetIncludeExcludeAttributeNames
          (UPCGProjectionData *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FName *pFVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  if (1 < (this->ProjectionParams).AttributeList.Data.ArrayNum) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    ::FString::ParseIntoArray(&(this->ProjectionParams).AttributeList,&local_28,L",",true);
    iVar1 = local_28.ArrayNum;
    pFVar5 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
    FVar4.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar4.Data == pFVar5) break;
      if (*(int *)(FVar4.Data + 8) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = *(wchar_t **)FVar4.Data;
      }
      pFVar2 = ::FName::FName(&local_res20,pwVar3);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                (param_1,&local_res18,(bool *)pFVar2);
      FVar4.Data = FVar4.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// GetNormal @ 1498bb7f0

TVector<double> * __thiscall
UPCGProjectionData::GetNormal(UPCGProjectionData *this,TVector<double> *__return_storage_ptr__)

{
  TObjectPtr<UPCGSpatialData_const_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TVector<double> *pTVar6;
  UPCGSpatialData *pUVar7;
  
  pTVar1 = &this->Target;
  if (((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
     ((pTVar1->field0_0x0).DebugPtr == (UPCGSpatialData *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source && Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pUVar7 = (this->Source).field0_0x0.DebugPtr;
  iVar4 = (**(code **)(((pTVar1->field0_0x0).DebugPtr)->_padding_ + 0x380))();
  iVar5 = (**(code **)(pUVar7->_padding_ + 0x380))(pUVar7);
  if (iVar4 < iVar5) {
    pUVar7 = (this->Source).field0_0x0.DebugPtr;
  }
  else {
    pUVar7 = (pTVar1->field0_0x0).DebugPtr;
  }
  (**(code **)(pUVar7->_padding_ + 0x3a0))(pUVar7,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1498bcad0

UClass * __cdecl UPCGProjectionData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProjectionData",
               &Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton,
               StaticRegisterNativesUPCGProjectionData,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGProjectionData>,
               InternalVTableHelperCtorCaller<UPCGProjectionData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProjectionData.InnerSingleton;
}

// GetStrictBounds @ 1498c7740

TBox<double> * __thiscall
UPCGProjectionData::GetStrictBounds(UPCGProjectionData *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  bool bVar14;
  TBox<double> *pTVar15;
  
  if (((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
     ((this->Target).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Source && Target",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                        ,0x76,L"");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      pTVar15 = (TBox<double> *)(*pcVar1)();
      return pTVar15;
    }
  }
  dVar2 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  dVar3 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  dVar4 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedStrictBounds).Min.field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  dVar5 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar4;
  uVar6 = (this->CachedStrictBounds).IsValid;
  uVar7 = (this->CachedStrictBounds).Pad[0];
  uVar8 = (this->CachedStrictBounds).Pad[1];
  uVar9 = (this->CachedStrictBounds).Pad[2];
  uVar10 = (this->CachedStrictBounds).Pad[3];
  uVar11 = (this->CachedStrictBounds).Pad[4];
  uVar12 = (this->CachedStrictBounds).Pad[5];
  uVar13 = (this->CachedStrictBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->IsValid = uVar6;
  __return_storage_ptr__->Pad[0] = uVar7;
  __return_storage_ptr__->Pad[1] = uVar8;
  __return_storage_ptr__->Pad[2] = uVar9;
  __return_storage_ptr__->Pad[3] = uVar10;
  __return_storage_ptr__->Pad[4] = uVar11;
  __return_storage_ptr__->Pad[5] = uVar12;
  __return_storage_ptr__->Pad[6] = uVar13;
  return __return_storage_ptr__;
}

// HasNonTrivialTransform @ 1498ca690

bool __thiscall UPCGProjectionData::HasNonTrivialTransform(UPCGProjectionData *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498ca69a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Target).field0_0x0.DebugPtr)->_padding_ + 0x3e0))();
  return (bool)uVar1;
}

// Initialize @ 1498cc380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGProjectionData::Initialize
          (UPCGProjectionData *this,UPCGSpatialData *param_1,UPCGSpatialData *param_2,
          FPCGProjectionParams *param_3)

{
  UPCGSpatialData *pUVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  TBox<double> *pTVar17;
  undefined1 auStack_148 [32];
  TBox<double> local_128;
  TBox<double> local_f0;
  undefined1 local_b8 [56];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((param_1 == (UPCGSpatialData *)0x0) || (param_2 == (UPCGSpatialData *)0x0)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSource && InTarget",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                        ,0x35,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcVar2 = *(code **)(param_1->_padding_ + 0x380);
  iVar15 = (**(code **)(param_2->_padding_ + 0x380))(param_2);
  iVar16 = (*pcVar2)(param_1);
  if (iVar15 < iVar16) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSource->GetDimension() <= InTarget->GetDimension()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                        ,0x38,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Source).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Target).field0_0x0.DebugPtr = param_2;
  this->_padding_ = (longlong)(param_1->TargetActor).WeakPtr;
  (this->ProjectionParams).bProjectPositions = param_3->bProjectPositions;
  (this->ProjectionParams).bProjectRotations = param_3->bProjectRotations;
  (this->ProjectionParams).bProjectScales = param_3->bProjectScales;
  (this->ProjectionParams).ColorBlendMode = param_3->ColorBlendMode;
  ::FString::operator=(&(this->ProjectionParams).AttributeList,&param_3->AttributeList);
  (this->ProjectionParams).AttributeMode = param_3->AttributeMode;
  (this->ProjectionParams).AttributeMergeOperation = param_3->AttributeMergeOperation;
  (this->ProjectionParams).TagMergeOperation = param_3->TagMergeOperation;
  pUVar1 = (this->Source).field0_0x0.DebugPtr;
  pTVar17 = (TBox<double> *)(**(code **)(pUVar1->_padding_ + 0x388))(pUVar1,local_b8);
  pTVar17 = ProjectBounds(this,&local_128,pTVar17);
  pUVar1 = (this->Source).field0_0x0.DebugPtr;
  dVar6 = (pTVar17->Min).field0_0x0._s_0.Y;
  (this->CachedBounds).Min.field0_0x0._s_0.X = (pTVar17->Min).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (pTVar17->Max).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = (pTVar17->Min).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dVar6;
  uVar3 = *(undefined4 *)((longlong)&(pTVar17->Max).field0_0x0 + 0xc);
  uVar4 = *(undefined4 *)((longlong)&(pTVar17->Max).field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(pTVar17->Max).field0_0x0 + 0x14);
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) =
       *(undefined4 *)((longlong)&(pTVar17->Max).field0_0x0 + 8);
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0x14) = uVar5;
  uVar7 = pTVar17->Pad[0];
  uVar8 = pTVar17->Pad[1];
  uVar9 = pTVar17->Pad[2];
  uVar10 = pTVar17->Pad[3];
  uVar11 = pTVar17->Pad[4];
  uVar12 = pTVar17->Pad[5];
  uVar13 = pTVar17->Pad[6];
  (this->CachedBounds).IsValid = pTVar17->IsValid;
  (this->CachedBounds).Pad[0] = uVar7;
  (this->CachedBounds).Pad[1] = uVar8;
  (this->CachedBounds).Pad[2] = uVar9;
  (this->CachedBounds).Pad[3] = uVar10;
  (this->CachedBounds).Pad[4] = uVar11;
  (this->CachedBounds).Pad[5] = uVar12;
  (this->CachedBounds).Pad[6] = uVar13;
  pTVar17 = (TBox<double> *)(**(code **)(pUVar1->_padding_ + 0x398))(pUVar1,local_80);
  pTVar17 = ProjectBounds(this,&local_f0,pTVar17);
  dVar6 = (pTVar17->Min).field0_0x0._s_0.Y;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = (pTVar17->Min).field0_0x0._s_0.X;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (pTVar17->Max).field0_0x0._s_0.X;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = (pTVar17->Min).field0_0x0._s_0.Z;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar6;
  dVar6 = (pTVar17->Max).field0_0x0._s_0.Z;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = (pTVar17->Max).field0_0x0._s_0.Y;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = dVar6;
  uVar7 = pTVar17->Pad[0];
  uVar8 = pTVar17->Pad[1];
  uVar9 = pTVar17->Pad[2];
  uVar10 = pTVar17->Pad[3];
  uVar11 = pTVar17->Pad[4];
  uVar12 = pTVar17->Pad[5];
  uVar13 = pTVar17->Pad[6];
  (this->CachedStrictBounds).IsValid = pTVar17->IsValid;
  (this->CachedStrictBounds).Pad[0] = uVar7;
  (this->CachedStrictBounds).Pad[1] = uVar8;
  (this->CachedStrictBounds).Pad[2] = uVar9;
  (this->CachedStrictBounds).Pad[3] = uVar10;
  (this->CachedStrictBounds).Pad[4] = uVar11;
  (this->CachedStrictBounds).Pad[5] = uVar12;
  (this->CachedStrictBounds).Pad[6] = uVar13;
  return;
}

// InitializeTargetMetadata @ 1498d0100

void __thiscall
UPCGProjectionData::InitializeTargetMetadata
          (UPCGProjectionData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UPCGSpatialData_const_>_u_0 *pTVar3;
  TObjectPtr<UPCGSpatialData_const_>_u_0 local_48 [4];
  void *local_28;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  int local_10;
  
  if (param_1->bInheritMetadata == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.bInheritMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                       ,0x1d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (UPCGMetadata *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetadataToInitialize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGProjectionData.cpp"
                       ,0x1da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bIsDuplicatingData != false) {
    UPCGSpatialData::InitializeTargetMetadata((UPCGSpatialData *)this,param_1,param_2);
    return;
  }
  if ((this->Source).field0_0x0.DebugPtr != (UPCGSpatialData *)0x0) {
    FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
              ((FPCGInitializeFromDataParams *)&local_48[0].ObjectPtr,param_1);
    pTVar3 = &(param_1->SourceOverride).field0_0x0;
    if ((param_1->SourceOverride).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
      pTVar3 = &(this->Source).field0_0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pTVar3->DebugPtr != (UPCGSpatialData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pTVar3->DebugPtr);
    }
    local_48[0].DebugPtr = pTVar3->DebugPtr;
    (**(code **)((local_48[0].DebugPtr)->_padding_ + 0x450))(local_48[0].DebugPtr,local_48,param_2);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_18,local_10);
    if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  SetupTargetMetadata(this,param_2);
  UPCGMetadata::AddAttributes(param_2,(UPCGMetadata *)this->_padding_);
  return;
}

// PostLoad @ 1498d2970

void __thiscall UPCGProjectionData::PostLoad(UPCGProjectionData *this)

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
    if (*(UPCGProjectionData **)FVar5 == this) {
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

// ProjectBounds @ 1498d34e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
UPCGProjectionData::ProjectBounds
          (UPCGProjectionData *this,TBox<double> *__return_storage_ptr__,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  UPCGSpatialData *pUVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  longlong lVar14;
  TBox<double> *pTVar15;
  double *pdVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  undefined8 local_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  double local_218;
  undefined1 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_17c;
  double local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  
  dVar28 = _UNK_150689698;
  dVar1 = ___xmm_40000000000000004000000000000000;
  uVar12 = _UNK_150689688;
  uVar11 = ___xmm_3ff00000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_288;
  uVar17 = 0;
  uVar32 = (uint)__xmm_80000000000000008000000000000000;
  uVar33 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  local_240 = 0;
  uStack_238 = 0;
  local_210 = 1;
  local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar1;
  local_230 = 0;
  local_228._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar28,0);
  local_228._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar1;
  local_228._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar28) >> 0x20);
  do {
    lVar14 = 0x28;
    uVar20 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar23 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    if ((uVar17 & 1) == 0) {
      lVar14 = 0x10;
    }
    pUVar5 = (this->Target).field0_0x0.DebugPtr;
    local_260 = 0;
    dVar1 = *(double *)(param_1->Pad + lVar14 + -0x31);
    uVar19 = SUB84(dVar1,0);
    uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
    lVar14 = 0x20;
    uVar25 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar27 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    if ((uVar17 & 2) == 0) {
      lVar14 = 8;
    }
    local_268 = local_208;
    dVar28 = *(double *)(param_1->Pad + lVar14 + -0x31);
    uVar18 = SUB84(dVar28,0);
    uVar21 = (undefined4)((ulonglong)dVar28 >> 0x20);
    pTVar15 = (TBox<double> *)&param_1->Max;
    if (uVar17 < 4) {
      pTVar15 = param_1;
    }
    dVar2 = (pTVar15->Min).field0_0x0._s_0.X;
    uVar30 = SUB84(dVar2,0);
    uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
    local_1e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_1e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1e8._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_1a8 = 0x3f800000;
    local_148 = 0x3f000000;
    local_140 = 0xffffffffffffffff;
    uVar24 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_1d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_1d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1d8._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_1b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_1b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    uStack_180 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    uStack_17c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
    local_1a0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar33,
                         UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar32);
    local_208._8_4_ = uVar20;
    local_208._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_208._12_4_ = uVar23;
    local_198 = CONCAT44(uStack_17c ^ uVar33,uStack_180 ^ uVar32);
    local_190 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                               0x20) ^ uVar33,
                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar32);
    local_188 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    uStack_184 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    local_1f8._8_4_ = uVar25;
    local_1f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1f8._12_4_ = uVar27;
    local_1c8._8_4_ = uVar24;
    local_1c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1c8._12_4_ = uVar26;
    local_178 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_168 = uVar11;
    uStack_160 = uVar12;
    local_158 = uVar11;
    uStack_150 = uVar12;
    uStack_100 = 0;
    local_138._8_4_ = uVar20;
    local_138._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_138._12_4_ = uVar23;
    local_128._8_4_ = uVar25;
    local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128._12_4_ = uVar27;
    local_118._8_4_ = uVar18;
    local_118._0_8_ = dVar2;
    local_118._12_4_ = uVar21;
    local_f8._8_4_ = uVar24;
    local_f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_f8._12_4_ = uVar26;
    local_108 = dVar1;
    local_e8 = local_1b8;
    dStack_e0 = dStack_1b0;
    cVar13 = (**(code **)(pUVar5->_padding_ + 0x3d0))
                       (pUVar5,local_138,&local_240,&this->ProjectionParams);
    if (cVar13 == '\0') {
      if (__return_storage_ptr__->IsValid == '\0') {
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar28;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        uVar3 = *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
        uVar20 = (undefined4)uVar3;
        uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
        (__return_storage_ptr__->Min).field0_0x0._s_0.X =
             (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
        goto LAB_1498d3825;
      }
      dVar6 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      uVar20 = uVar30;
      uVar23 = uVar31;
      if (dVar6 <= dVar2) {
        uVar20 = SUB84(dVar6,0);
        uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
      }
      dVar6 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      uVar25 = uVar18;
      uVar27 = uVar21;
      if (dVar6 <= dVar28) {
        uVar25 = SUB84(dVar6,0);
        uVar27 = (undefined4)((ulonglong)dVar6 >> 0x20);
      }
      dVar6 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      if (dVar2 <= dVar6) {
        uVar30 = SUB84(dVar6,0);
        uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
      }
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
      if (dVar28 <= dVar2) {
        uVar18 = SUB84(dVar2,0);
        uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar23,uVar20);
      dVar28 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      uVar20 = uVar19;
      uVar23 = uVar22;
      if (dVar28 <= dVar1) {
        uVar20 = SUB84(dVar28,0);
        uVar23 = (undefined4)((ulonglong)dVar28 >> 0x20);
      }
      dVar28 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
      if (dVar1 <= dVar28) {
        uVar19 = SUB84(dVar28,0);
        uVar22 = (undefined4)((ulonglong)dVar28 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar27,uVar25);
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar31,uVar30);
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar21,uVar18);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar23,uVar20);
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar22,uVar19);
    }
    else {
      uVar20 = local_1d8._0_4_;
      uVar23 = local_1d8._4_4_;
      uVar25 = local_1e8._0_4_;
      uVar27 = local_1e8._4_4_;
      uVar19 = local_1e8._8_4_;
      uVar22 = local_1e8._12_4_;
      local_248 = (double)local_1d8._0_8_;
      if (__return_storage_ptr__->IsValid == '\0') {
        *(undefined1 (*) [16])&(__return_storage_ptr__->Max).field0_0x0 = local_1e8;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)local_1d8._0_8_;
        *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = local_1e8;
LAB_1498d3825:
        __return_storage_ptr__->IsValid = '\x01';
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar23,uVar20);
      }
      else {
        dVar1 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        uVar18 = uVar25;
        uVar21 = uVar27;
        if (dVar1 <= local_1e8._0_8_) {
          uVar18 = SUB84(dVar1,0);
          uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        dVar28 = local_1e8._8_8_;
        dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        uVar24 = uVar20;
        uVar26 = uVar23;
        if (dVar1 <= (double)local_1d8._0_8_) {
          uVar24 = SUB84(dVar1,0);
          uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
        if ((double)local_1d8._0_8_ <= dVar1) {
          uVar20 = SUB84(dVar1,0);
          uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        dVar1 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
        if (local_1e8._0_8_ <= dVar1) {
          uVar25 = SUB84(dVar1,0);
          uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar21,uVar18);
        dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        if (dVar1 <= dVar28) {
          uVar19 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar28 <= dVar1) {
          dVar28 = dVar1;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar26,uVar24);
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar27,uVar25);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar23,uVar20);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar22,uVar19);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar28;
      }
    }
    uVar17 = uVar17 + 1;
    if (7 < (int)uVar17) {
      dVar1 = (param_1->Max).field0_0x0._s_0.Z;
      pUVar5 = (this->Target).field0_0x0.DebugPtr;
      dVar8 = (dVar1 - (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
      dVar6 = ((param_1->Max).field0_0x0._s_0.X + (param_1->Min).field0_0x0._s_0.X) *
              __real_3fe0000000000000;
      dVar7 = ((param_1->Max).field0_0x0._s_0.Y + (param_1->Min).field0_0x0._s_0.Y) *
              __real_3fe0000000000000;
      dVar2 = (dVar1 + (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
      pdVar16 = (double *)(**(code **)(pUVar5->_padding_ + 0x3a0))(pUVar5,local_258);
      dVar1 = dVar8 * *pdVar16 + dVar6;
      dVar29 = dVar8 * pdVar16[1] + dVar7;
      dVar28 = dVar8 * pdVar16[2] + dVar2;
      if (__return_storage_ptr__->IsValid == '\0') {
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar29;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar28;
        uVar20 = *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0;
        uVar23 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4);
        uVar25 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        uVar27 = *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc);
        __return_storage_ptr__->IsValid = '\x01';
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar20;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar23;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar25;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar27;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
      }
      else {
        dVar4 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        dVar10 = dVar1;
        if (dVar4 <= dVar1) {
          dVar10 = dVar4;
        }
        dVar4 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        dVar9 = dVar29;
        if (dVar4 <= dVar29) {
          dVar9 = dVar4;
        }
        dVar4 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar1 <= dVar4) {
          dVar1 = dVar4;
        }
        dVar4 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar29 <= dVar4) {
          dVar29 = dVar4;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar10;
        dVar4 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        dVar10 = dVar28;
        if (dVar4 <= dVar28) {
          dVar10 = dVar4;
        }
        dVar4 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar28 <= dVar4) {
          dVar28 = dVar4;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar9;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar29;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar10;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar28;
      }
      pUVar5 = (this->Target).field0_0x0.DebugPtr;
      pdVar16 = (double *)(**(code **)(pUVar5->_padding_ + 0x3a0))(pUVar5,local_258);
      dVar6 = dVar6 - dVar8 * *pdVar16;
      dVar7 = dVar7 - dVar8 * pdVar16[1];
      dVar2 = dVar2 - dVar8 * pdVar16[2];
      if (__return_storage_ptr__->IsValid == '\0') {
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar6;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar7;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
        dVar28 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        __return_storage_ptr__->IsValid = '\x01';
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar28;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
      }
      else {
        dVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        dVar28 = dVar6;
        if (dVar1 <= dVar6) {
          dVar28 = dVar1;
        }
        dVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        dVar8 = dVar7;
        if (dVar1 <= dVar7) {
          dVar8 = dVar1;
        }
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar6 <= dVar1) {
          dVar6 = dVar1;
        }
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar7 <= dVar1) {
          dVar7 = dVar1;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar28;
        dVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        dVar28 = dVar2;
        if (dVar1 <= dVar2) {
          dVar28 = dVar1;
        }
        dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar2 <= dVar1) {
          dVar2 = dVar1;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar6;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar7;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar28;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// RequiresCollapseToSample @ 1498d6ee0

bool __thiscall UPCGProjectionData::RequiresCollapseToSample(UPCGProjectionData *this)

{
  TObjectPtr<UPCGSpatialData_const_> *this_00;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  UClass *pUVar4;
  
  uVar2 = (this->ProjectionParams).bProjectPositions;
  this_00 = &this->Source;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSpatialData *)0x0) {
    pUVar4 = UPCGSplineData::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar1) {
      if ((this_00->field0_0x0).DebugPtr == (UPCGSpatialData *)0x0) {
        return (bool)uVar2;
      }
      iVar3 = (**(code **)(((this->Target).field0_0x0.DebugPtr)->_padding_ + 0x380))();
      if (iVar3 == 2) {
        uVar2 = 0;
      }
    }
    if ((this_00->field0_0x0).DebugPtr != (UPCGSpatialData *)0x0) {
      pUVar4 = UPCGLandscapeSplineData::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if (((bVar1) && ((this_00->field0_0x0).DebugPtr != (UPCGSpatialData *)0x0)) &&
         (iVar3 = (**(code **)(((this->Target).field0_0x0.DebugPtr)->_padding_ + 0x380))(),
         iVar3 == 2)) {
        uVar2 = 0;
      }
    }
  }
  return (bool)uVar2;
}

// SamplePoint @ 1498daaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
UPCGProjectionData::SamplePoint
          (UPCGProjectionData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  UPCGSpatialData *pUVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  UPCGBasePointData *pUVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_298 [32];
  TVector<double>_u_0 local_248;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined1 local_218;
  undefined4 local_217;
  undefined2 local_213;
  undefined1 local_211;
  FPCGPoint local_208;
  FPCGPoint local_138;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_298;
  cVar4 = (**(code **)(this->_padding_ + 0x428))();
  dVar3 = _UNK_150689688;
  dVar2 = ___xmm_3ff00000000000003ff0000000000000;
  if (cVar4 == '\0') {
    pUVar1 = (this->Source).field0_0x0.DebugPtr;
    local_208.Density = 1.0;
    local_208.Steepness = 0.5;
    local_208.Seed = 0;
    local_208.MetadataEntry = -1;
    local_208.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_208.Transform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_208.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_208.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_208.Transform.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_208.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_208.Transform.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_208.Transform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_208.Transform.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_208.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_208.Transform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_208.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_208.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_208.Transform.Translation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_208.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_208.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_208.Transform.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_208.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_208.BoundsMax.field0_0x0._8_4_ =
         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    local_208.BoundsMax.field0_0x0._12_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
    uVar7 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_208.BoundsMin.field0_0x0._s_0.Y =
         (double)CONCAT44(local_208.BoundsMax.field0_0x0._12_4_ ^ uVar8,
                          local_208.BoundsMax.field0_0x0._8_4_ ^ uVar7);
    local_208.BoundsMin.field0_0x0._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                          UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar7);
    local_208.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    local_208.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    local_208.BoundsMin.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar8,
                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar7);
    local_208.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_208.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_208.Color.field0_0x0._s_0.Y = _UNK_150689688;
    local_208.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
    local_208.Color.field0_0x0._s_0.W = _UNK_150689688;
    cVar4 = (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,param_1,param_2,&local_208);
    if (cVar4 != '\0') {
      pUVar1 = (this->Target).field0_0x0.DebugPtr;
      local_138.Density = 1.0;
      local_138.Steepness = 0.5;
      local_138.Seed = 0;
      local_138.MetadataEntry = -1;
      local_138.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_138.Transform.Rotation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_138.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_138.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_138.Transform.Rotation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_138.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_138.Transform.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_138.Transform.Translation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_138.Transform.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_138.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_138.Transform.Scale3D.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_138.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_138.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_138.Transform.Translation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_138.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_138.BoundsMax.field0_0x0._8_4_ =
           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
      local_138.BoundsMax.field0_0x0._12_4_ =
           (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
      local_138.BoundsMin.field0_0x0._s_0.Y =
           (double)CONCAT44(local_138.BoundsMax.field0_0x0._12_4_ ^ uVar8,
                            local_138.BoundsMax.field0_0x0._8_4_ ^ uVar7);
      local_138.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_138.Transform.Scale3D.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_138.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_138.BoundsMin.field0_0x0._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                            UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar7);
      local_138.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
      local_138.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
      local_138.BoundsMin.field0_0x0._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                  >> 0x20) ^ uVar8,
                            SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar7)
      ;
      local_138.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
      ;
      local_138.Color.field0_0x0._s_0.X = dVar2;
      local_138.Color.field0_0x0._s_0.Y = dVar3;
      local_138.Color.field0_0x0._s_0.Z = dVar2;
      local_138.Color.field0_0x0._s_0.W = dVar3;
      local_248._s_0.X = local_208.BoundsMin.field0_0x0._s_0.X;
      local_248._s_0.Y = local_208.BoundsMin.field0_0x0._s_0.Y;
      local_218 = 1;
      local_248._s_0.Z = local_208.BoundsMin.field0_0x0._s_0.Z;
      auStack_230._4_4_ = local_208.BoundsMax.field0_0x0._4_4_;
      auStack_230._0_4_ = local_208.BoundsMax.field0_0x0._0_4_;
      auStack_230._12_4_ = local_208.BoundsMax.field0_0x0._12_4_;
      auStack_230._8_4_ = local_208.BoundsMax.field0_0x0._8_4_;
      uStack_220 = local_208.BoundsMax.field0_0x0._s_0.Z;
      cVar4 = (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,&local_208,&local_248,&local_138);
      if (cVar4 != '\0') {
        (param_3->Transform).Rotation.XY.m128d_f64[0] = local_208.Transform.Rotation.XY.m128d_f64[0]
        ;
        (param_3->Transform).Rotation.XY.m128d_f64[1] = local_208.Transform.Rotation.XY.m128d_f64[1]
        ;
        (param_3->Transform).Rotation.ZW.m128d_f64[0] = local_208.Transform.Rotation.ZW.m128d_f64[0]
        ;
        (param_3->Transform).Rotation.ZW.m128d_f64[1] = local_208.Transform.Rotation.ZW.m128d_f64[1]
        ;
        (param_3->Transform).Translation.XY.m128d_f64[0] =
             local_208.Transform.Translation.XY.m128d_f64[0];
        (param_3->Transform).Translation.XY.m128d_f64[1] =
             local_208.Transform.Translation.XY.m128d_f64[1];
        (param_3->Transform).Translation.ZW.m128d_f64[0] =
             local_208.Transform.Translation.ZW.m128d_f64[0];
        (param_3->Transform).Translation.ZW.m128d_f64[1] =
             local_208.Transform.Translation.ZW.m128d_f64[1];
        (param_3->Transform).Scale3D.XY.m128d_f64[0] = local_208.Transform.Scale3D.XY.m128d_f64[0];
        (param_3->Transform).Scale3D.XY.m128d_f64[1] = local_208.Transform.Scale3D.XY.m128d_f64[1];
        (param_3->Transform).Scale3D.ZW.m128d_f64[0] = local_208.Transform.Scale3D.ZW.m128d_f64[0];
        (param_3->Transform).Scale3D.ZW.m128d_f64[1] = local_208.Transform.Scale3D.ZW.m128d_f64[1];
        *(ulonglong *)&param_3->Density = CONCAT44(local_208._100_4_,local_208.Density);
        (param_3->BoundsMin).field0_0x0._s_0.X = local_208.BoundsMin.field0_0x0._s_0.X;
        (param_3->BoundsMin).field0_0x0._s_0.Y = local_208.BoundsMin.field0_0x0._s_0.Y;
        (param_3->BoundsMin).field0_0x0._s_0.Z = local_208.BoundsMin.field0_0x0._s_0.Z;
        (param_3->BoundsMax).field0_0x0._s_0.X =
             (double)CONCAT44(local_208.BoundsMax.field0_0x0._4_4_,
                              local_208.BoundsMax.field0_0x0._0_4_);
        (param_3->BoundsMax).field0_0x0._s_0.Y =
             (double)CONCAT44(local_208.BoundsMax.field0_0x0._12_4_,
                              local_208.BoundsMax.field0_0x0._8_4_);
        (param_3->BoundsMax).field0_0x0._s_0.Z = local_208.BoundsMax.field0_0x0._s_0.Z;
        param_3->_padding_ = local_208._padding_;
        (param_3->Color).field0_0x0._s_0.X = local_208.Color.field0_0x0._s_0.X;
        (param_3->Color).field0_0x0._s_0.Y = local_208.Color.field0_0x0._s_0.Y;
        (param_3->Color).field0_0x0._s_0.Z = local_208.Color.field0_0x0._s_0.Z;
        (param_3->Color).field0_0x0._s_0.W = local_208.Color.field0_0x0._s_0.W;
        param_3->Steepness = local_208.Steepness;
        param_3->Seed = local_208.Seed;
        param_3->MetadataEntry = local_208.MetadataEntry;
        ApplyProjectionResult(this,&local_138,param_3);
        if ((param_4 != (UPCGMetadata *)0x0) && (local_138.MetadataEntry != -1)) {
          UPCGMetadata::MergePointAttributesSubset
                    (param_4,&local_208,param_4,
                     (UPCGMetadata *)((this->Source).field0_0x0.DebugPtr)->_padding_,&local_138,
                     param_4,(UPCGMetadata *)((this->Target).field0_0x0.DebugPtr)->_padding_,param_3
                     ,(this->ProjectionParams).AttributeMergeOperation);
        }
        return true;
      }
    }
    uVar5 = 0;
  }
  else {
    local_218 = 0;
    local_217 = 0;
    local_213 = 0;
    local_211 = 0;
    local_248._s_0.X = 0.0;
    local_248._s_0.Y = 0.0;
    local_248._s_0.Z = 0.0;
    auStack_230._0_8_ = 0;
    auStack_230._8_8_ = 0;
    uStack_220 = 0.0;
    pUVar6 = UPCGSpatialData::ToBasePointData
                       ((UPCGSpatialData *)this,(FPCGContext *)0x0,(TBox<double> *)&local_248._s_0);
    uVar5 = (**(code **)(pUVar6->_padding_ + 0x3c0))(pUVar6,param_1,param_2,param_3);
  }
  return (bool)uVar5;
}

// SetupTargetMetadata @ 1498f59b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGProjectionData::SetupTargetMetadata(UPCGProjectionData *this,UPCGMetadata *param_1)

{
  uint *puVar1;
  UPCGSpatialData *pUVar2;
  FName FVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  FName *pFVar11;
  ulonglong uVar12;
  byte bVar13;
  wchar_t *pwVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FPCGMetadataDomainID *pFVar18;
  FName *pFVar19;
  FName *pFVar20;
  undefined8 *puVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_248 [32];
  undefined1 local_218 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_210;
  uint local_200;
  uint local_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  UPCGSpatialData *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  FScriptContainerElement *local_198;
  UPCGProjectionData *local_190;
  UPCGMetadata *local_188;
  FScriptContainerElement *local_178;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  FSparseArrayAllocationInfo local_148;
  FName local_138 [2];
  undefined1 local_128 [8];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_120;
  EPCGMetadataFilterMode local_d0;
  EPCGStringMatchingOperator local_cf;
  undefined4 local_c8;
  int iStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  FName FStack_b0;
  bool local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pUVar2 = (this->Target).field0_0x0.DebugPtr;
  if ((pUVar2 != (UPCGSpatialData *)0x0) &&
     (local_190 = this, local_188 = param_1, lVar9 = (**(code **)(pUVar2->_padding_ + 800))(),
     lVar9 != 0)) {
    pUVar2 = (this->Target).field0_0x0.DebugPtr;
    local_1d8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UPCGSpatialData *)0x0))
    {
      local_1c0 = 0;
      local_1c8 = 0x10101;
      local_1d0 = 0;
      if (pUVar2 != (UPCGSpatialData *)0x0) {
        local_1c0 = (**(code **)(pUVar2->_padding_ + 800))(pUVar2);
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      local_1c8 = 0x10101;
      local_1d0 = 0;
      local_1c0 = (**(code **)(pUVar2->_padding_ + 800))(pUVar2);
    }
    pFVar19 = (FName *)0x0;
    local_1b8 = (void *)0x0;
    local_1b0 = 0;
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = -1;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    if (1 < (this->ProjectionParams).AttributeList.Data.ArrayNum) {
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      ::FString::ParseIntoArray(&(this->ProjectionParams).AttributeList,&local_210,L",",true);
      uVar10 = (ulonglong)local_210.ArrayNum;
      local_178 = local_210.AllocatorInstance.Data + uVar10 * 0x10;
      local_200 = local_210.ArrayNum;
      FVar17.Data = local_210.AllocatorInstance.Data;
      while( true ) {
        pFVar5 = local_178;
        local_198 = FVar17.Data;
        if (local_210.ArrayNum != (int)uVar10) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_218);
        }
        if (FVar17.Data == pFVar5) break;
        if (*(int *)(FVar17.Data + 8) == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = *(wchar_t **)FVar17.Data;
        }
        pFVar11 = ::FName::FName(local_138,pwVar14);
        if (local_64 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                             (int *)(local_98 + 0xc));
          iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
          FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_78;
          }
          bVar13 = (byte)iVar7 & 0x1f;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x1f;
            bVar13 = bVar13 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar15 + (longlong)(iVar7 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar13 & 0x1f));
          iVar7 = local_68;
        }
        else {
          local_64 = local_64 + -1;
          iVar7 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
          iVar6 = local_68;
          if (local_64 != 0) {
            *(undefined4 *)(local_98._0_8_ + (longlong)iVar7 * 0x10) = 0xffffffff;
          }
        }
        local_68 = iVar7;
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,&local_148,iVar6);
        iVar6 = local_148.Index;
        pFVar20 = pFVar19;
        if (local_148.Pointer != (FName *)0x0) {
          *(FName *)local_148.Pointer = *pFVar11;
          (((FName *)((longlong)local_148.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
          pFVar20 = local_148.Pointer;
        }
        FVar3 = *pFVar20;
        uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        uVar8 = uVar8 + FVar3.Number;
        if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
          FVar17.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_58.Data;
          }
          for (iVar7 = *(int *)(FVar17.Data + (ulonglong)(local_50 - 1 & uVar8) * 4); iVar7 != -1;
              iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
            if (*(FName *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == *pFVar20) {
              if (iVar7 != -1) {
                *(FName *)(local_98._0_8_ + (longlong)iVar7 * 0x10) = *pFVar20;
                TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_98,iVar6,1);
                goto LAB_1498f5fea;
              }
              break;
            }
          }
        }
        uVar22 = local_98._8_4_ - local_64;
        uVar16 = 1;
        if (3 < uVar22) {
          uVar10 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar16 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar22 < 1) || ((int)uVar16 <= (int)local_50)) {
          uVar8 = local_50 - 1 & uVar8;
          pFVar20[1].Number = uVar8;
          FVar17.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_58.Data;
          }
          uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar8;
          pFVar20[1].ComparisonIndex.Value = *(uint *)(FVar17.Data + uVar10 * 4);
          *(int *)(FVar17.Data + uVar10 * 4) = iVar6;
        }
        else {
          local_50 = uVar16;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar16 != 0) {
            uVar8 = uVar16;
            if (uVar16 < 2) {
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                uVar8 = 0;
                goto LAB_1498f5ddc;
              }
            }
            else {
LAB_1498f5ddc:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar8,4);
            }
            if (0 < (int)uVar16) {
              uVar10 = (ulonglong)uVar16;
              pFVar11 = pFVar19;
              do {
                FVar17.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar17.Data = local_58.Data;
                }
                uVar12 = (ulonglong)pFVar11 & (longlong)(int)uVar16 - 1U;
                pFVar11 = (FName *)((longlong)&(pFVar11->ComparisonIndex).Value + 1);
                *(undefined4 *)(FVar17.Data + uVar12 * 4) = 0xffffffff;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          if (local_50 != 0) {
            pTStack_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            local_1f8 = 0;
            uStack_1f4 = 1;
            uStack_1e4 = 0;
            uStack_1e0 = 0;
            pFVar11 = pFVar19;
            if (local_70 != 0) {
              FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar15 = local_78;
              }
              uVar8 = *(uint *)FVar15;
              pFVar20 = pFVar19;
              while (uVar8 == 0) {
                uStack_1e0 = (int)pFVar20 + 0x20;
                pFVar20 = (FName *)(ulonglong)uStack_1e0;
                iVar6 = (int)pFVar11;
                local_1f8 = iVar6 + 1;
                pFVar11 = (FName *)(ulonglong)local_1f8;
                if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_1f8) goto LAB_1498f5efe;
                uVar8 = ((uint *)((longlong)FVar15 + 4))[iVar6];
              }
              uStack_1f4 = -uVar8 & uVar8;
              uVar10 = (ulonglong)uStack_1f4 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              uStack_1e4 = (int)lVar9 + -1 + uStack_1e0;
              pFVar11 = (FName *)(ulonglong)uStack_1e4;
              if ((int)local_70 < (int)uStack_1e4) {
LAB_1498f5efe:
                pFVar11 = (FName *)(ulonglong)local_70;
                uStack_1e4 = local_70;
              }
            }
            local_1e8 = 0xffffffff;
            local_170 = (longlong *)local_98;
            local_168._padding_ = CONCAT44(uStack_1f4,local_1f8);
            local_168.CurrentBitIndex = uStack_1e4;
            local_168.UnvisitedBitMask = 0xffffffff;
            local_168._28_4_ = uStack_1dc;
            local_168.BaseBitIndex = uStack_1e0;
            local_168.Array = pTStack_1f0;
            if ((int)pFVar11 < (int)local_70) {
              do {
                puVar21 = (undefined8 *)((longlong)(int)pFVar11 * 0x10 + *local_170);
                uVar4 = *puVar21;
                uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
                uVar8 = local_50 - 1 & uVar8 + (int)((ulonglong)uVar4 >> 0x20);
                *(uint *)((longlong)puVar21 + 0xc) = uVar8;
                FVar17.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar17.Data = local_58.Data;
                }
                uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar8;
                *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(FVar17.Data + uVar10 * 4);
                *(int *)(FVar17.Data + uVar10 * 4) = (int)pFVar11;
                local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
                pFVar11 = (FName *)(ulonglong)(uint)local_168.CurrentBitIndex;
              } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
            }
          }
        }
LAB_1498f5fea:
        FVar17.Data = local_198 + 0x10;
        uVar10 = (ulonglong)local_200;
      }
      DestructItems<FString,int>((FString *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
      this = local_190;
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
        this = local_190;
      }
    }
    FPCGMetadataDomainInitializeParams::FPCGMetadataDomainInitializeParams
              ((FPCGMetadataDomainInitializeParams *)local_128,(FPCGMetadataDomain *)0x0,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98);
    local_d0 = (this->ProjectionParams).AttributeMode;
    iVar6 = (int)local_1a0;
    if ((int)local_1a0 == local_1a0._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x898,&local_1a8,(int *)((longlong)&local_1a0 + 4));
    }
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar6 + 1);
    pFVar18 = (FPCGMetadataDomainID *)(local_1a8.Data + (longlong)iVar6 * 0x98);
    *pFVar18 = PCGMetadataDomainID::Elements;
    pFVar19 = &pFVar18[1].DebugName;
    pFVar18[1].Flag = local_128[0];
    *(undefined3 *)&pFVar18[1].field_0x1 = local_128._1_3_;
    pFVar18[1].CustomFlag = local_128._4_4_;
    pFVar19->ComparisonIndex = 0;
    pFVar19->Number = 0;
    *(undefined4 *)(pFVar18 + 2) = 0;
    pFVar18[2].CustomFlag = -1;
    pFVar18[3].DebugName.ComparisonIndex = 0;
    pFVar18[3].DebugName.Number = 0;
    *(undefined4 *)(pFVar18 + 4) = 0;
    pFVar18[4].CustomFlag = 0x80;
    pFVar18[4].DebugName.ComparisonIndex.Value = 0xffffffff;
    pFVar18[4].DebugName.Number = 0;
    pFVar18[5].DebugName.ComparisonIndex = 0;
    pFVar18[5].DebugName.Number = 0;
    *(undefined4 *)(pFVar18 + 6) = 0;
    if (local_120.Elements._12_4_ != -1) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)pFVar19,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(local_128 + 8));
    }
    *(EPCGMetadataFilterMode *)&pFVar18[6].DebugName.ComparisonIndex.Value = local_d0;
    pFVar18[9].Flag = Default;
    *(EPCGStringMatchingOperator *)((longlong)&pFVar18[6].DebugName.ComparisonIndex.Value + 1) =
         local_cf;
    pFVar18[9].Flag = local_a8;
    if (local_a8 != false) {
      *(undefined4 *)(pFVar18 + 7) = local_c8;
      pFVar18[7].CustomFlag = iStack_c4;
      pFVar18[7].DebugName.ComparisonIndex.Value = uStack_c0;
      pFVar18[7].DebugName.Number = uStack_bc;
      *(undefined8 *)(pFVar18 + 8) = local_b8;
      pFVar18[8].DebugName = FStack_b0;
    }
    (**(code **)(((this->Target).field0_0x0.DebugPtr)->_padding_ + 0x450))();
    if (local_120.Elements._12_4_ != -1) {
      local_120.HashSize = 0;
      if (local_120.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_120.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_128 + 8));
    }
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    bVar23 = local_98._12_4_ != 0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (bVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = -1;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)local_1a8.Data,
               (int)local_1a0);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)local_1a8.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  return;
}

// StaticRegisterNativesUPCGProjectionData @ 1498f69f0

void __cdecl UPCGProjectionData::StaticRegisterNativesUPCGProjectionData(void)

{
  return;
}

