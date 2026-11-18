// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149853f80

UClass * __cdecl UPCGSplineProjectionData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineProjectionData",
               &Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton,
               StaticRegisterNativesUPCGSplineProjectionData,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSplineProjectionData>,
               InternalVTableHelperCtorCaller<UPCGSplineProjectionData>,local_res8,
               UPCGProjectionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton;
}

// UPCGSplineProjectionData @ 14988f270

UPCGSplineProjectionData * __thiscall
UPCGSplineProjectionData::UPCGSplineProjectionData
          (UPCGSplineProjectionData *this,FVTableHelper *param_1)

{
  UPCGProjectionData::UPCGProjectionData((UPCGProjectionData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSplineProjectionData__6B_;
  *(undefined8 *)&this->ProjectedPosition = 0;
  *(undefined8 *)&(this->ProjectedPosition).field_0x8 = 0;
  (this->ProjectedPosition).field_0x10 = 0;
  *(undefined4 *)&(this->ProjectedPosition).field_0x14 = 0;
  return this;
}

// UPCGSplineProjectionData @ 14988f2c0

UPCGSplineProjectionData * __thiscall
UPCGSplineProjectionData::UPCGSplineProjectionData
          (UPCGSplineProjectionData *this,FObjectInitializer *param_1)

{
  UPCGProjectionData::UPCGProjectionData((UPCGProjectionData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSplineProjectionData__6B_;
  *(undefined8 *)&this->ProjectedPosition = 0;
  *(undefined8 *)&(this->ProjectedPosition).field_0x8 = 0;
  (this->ProjectedPosition).field_0x10 = 0;
  *(undefined4 *)&(this->ProjectedPosition).field_0x14 = 0;
  return this;
}

// ~UPCGSplineProjectionData @ 149891b00

void __thiscall UPCGSplineProjectionData::~UPCGSplineProjectionData(UPCGSplineProjectionData *this)

{
  this->_padding_ = (longlong)&___7UPCGSplineProjectionData__6B_;
  if (*(void **)&this->ProjectedPosition != (void *)0x0) {
    FMemory::Free(*(void **)&this->ProjectedPosition);
  }
  this->_padding_ = (longlong)&___7UPCGProjectionData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989e400

void __thiscall
UPCGSplineProjectionData::AddToCrc
          (UPCGSplineProjectionData *this,FArchiveCrc32 *param_1,bool param_2)

{
  longlong *plVar1;
  ulong64 auStackX_8 [4];
  
  auStackX_8[0] = this->_padding_;
  plVar1 = (longlong *)param_1->_padding_;
  if (*plVar1 + 8U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 8;
    return;
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,auStackX_8,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,auStackX_8);
  return;
}

// CopyInternal @ 1498a5370

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
UPCGSplineProjectionData::CopyInternal(UPCGSplineProjectionData *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  FInterpCurveVector2D *pFVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  UPCGSplineProjectionData *pUVar5;
  
  pUVar5 = FPCGContext::NewObject_AnyThread<UPCGSplineProjectionData>(param_1);
  UPCGProjectionData::CopyBaseProjectionClass
            ((UPCGProjectionData *)this,(UPCGProjectionData *)pUVar5);
  pFVar2 = &pUVar5->ProjectedPosition;
  if (pFVar2 != &this->ProjectedPosition) {
    iVar3 = *(int *)&(pUVar5->ProjectedPosition).field_0xc;
    puVar1 = &(pUVar5->ProjectedPosition).field_0xc;
    iVar4 = *(int *)&(this->ProjectedPosition).field_0x8;
    _Src = *(void **)&this->ProjectedPosition;
    *(int *)&(pUVar5->ProjectedPosition).field_0x8 = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar4,iVar3,(ForAnyElementType *)pFVar2,iVar4,(int *)puVar1);
      if (iVar4 != 0) {
        memcpy(*(void **)pFVar2,_Src,(longlong)iVar4 << 6);
      }
    }
  }
  (pUVar5->ProjectedPosition).field_0x10 = (this->ProjectedPosition).field_0x10;
  *(undefined4 *)&(pUVar5->ProjectedPosition).field_0x14 =
       *(undefined4 *)&(this->ProjectedPosition).field_0x14;
  return (UPCGSpatialData *)pUVar5;
}

// GetDataType @ 1498b8470

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGSplineProjectionData::GetDataType(UPCGSplineProjectionData *this)

{
  return Spline;
}

// GetPrivateStaticClass @ 1498bd010

UClass * __cdecl UPCGSplineProjectionData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineProjectionData",
               &Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton,
               StaticRegisterNativesUPCGSplineProjectionData,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSplineProjectionData>,
               InternalVTableHelperCtorCaller<UPCGSplineProjectionData>,local_res8,
               UPCGProjectionData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineProjectionData.InnerSingleton;
}

// GetSpline @ 1498c6670

UPCGSplineData * __thiscall UPCGSplineProjectionData::GetSpline(UPCGSplineProjectionData *this)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar2 = UPCGSplineData::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      return (UPCGSplineData *)*this_00;
    }
  }
  return (UPCGSplineData *)0x0;
}

// GetSurface @ 1498c78d0

UPCGSpatialData * __thiscall UPCGSplineProjectionData::GetSurface(UPCGSplineProjectionData *this)

{
  return (UPCGSpatialData *)this->_padding_;
}

// Initialize @ 1498cd580

void __thiscall
UPCGSplineProjectionData::Initialize
          (UPCGSplineProjectionData *this,UPCGSplineData *param_1,UPCGSpatialData *param_2,
          FPCGProjectionParams *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  FInterpCurveVector2D *pFVar3;
  undefined8 *puVar4;
  double *pdVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  UClass *pUVar14;
  FInterpCurveVector *pFVar15;
  TVector2<double> *pTVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined4 *puVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 local_res8 [8];
  TVector2<double> local_90;
  TVector2<double> local_80;
  TVector2<double> local_70;
  undefined1 local_60 [56];
  
  UPCGProjectionData::Initialize
            ((UPCGProjectionData *)this,(UPCGSpatialData *)param_1,param_2,param_3);
  if ((this->_padding_ == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetSurface()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                          ,0x2e6,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x3a0))((longlong *)this->_padding_,local_60);
  if (this->_padding_ != 0) {
    pUVar14 = UPCGSplineData::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar14);
    if ((bVar12) && (this->_padding_ != 0)) {
      pUVar14 = UPCGSplineData::StaticClass();
      bVar12 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar14);
      if (bVar12) {
        lVar21 = this->_padding_;
      }
      else {
        lVar21 = 0;
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         (((FSpline *)(lVar21 + 0x278))->CurrentImplementation != '\0')) {
        pFVar15 = FSpline::GetSplinePointsPosition((FSpline *)(lVar21 + 0x278));
      }
      else {
        pFVar15 = (FInterpCurveVector *)(lVar21 + 0x200);
      }
      pFVar3 = &this->ProjectedPosition;
      (this->ProjectedPosition).field_0x10 = pFVar15->field_0x10;
      *(undefined4 *)&(this->ProjectedPosition).field_0x14 = *(undefined4 *)&pFVar15->field_0x14;
      uVar6 = *(uint *)&pFVar15->field_0x8;
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      puVar1 = &(this->ProjectedPosition).field_0xc;
      if (*(int *)puVar1 < (int)uVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,uVar6,(ForAnyElementType *)pFVar3,
                   *(int *)&(this->ProjectedPosition).field_0x8,(int *)puVar1);
      }
      dVar11 = __real_3e45798ee0000000;
      dVar10 = __real_3ff0000000000000;
      uVar6 = *(uint *)&pFVar15->field_0x8;
      uVar17 = (ulonglong)(int)uVar6;
      puVar18 = *(undefined4 **)pFVar15;
      puVar20 = puVar18 + uVar17 * 0x16;
      while( true ) {
        if (*(int *)&pFVar15->field_0x8 != (int)uVar17) {
          `TCheckedPointerIterator<FInterpCurvePoint<UE::Math::TVector<double>_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (puVar18 == puVar20) break;
        iVar13 = *(int *)&(this->ProjectedPosition).field_0x8;
        if (iVar13 == *(int *)puVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,(ForAnyElementType *)pFVar3,(int *)puVar1);
        }
        lVar21 = *(longlong *)pFVar3;
        *(int *)&(this->ProjectedPosition).field_0x8 = iVar13 + 1;
        lVar19 = (longlong)iVar13 * 0x40;
        *(undefined8 *)(lVar21 + lVar19) = 0;
        ((undefined8 *)(lVar21 + lVar19))[1] = 0;
        puVar4 = (undefined8 *)(lVar21 + lVar19 + 0x10);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(lVar21 + lVar19 + 0x20);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)(lVar21 + lVar19 + 0x30);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(lVar21 + lVar19) = *puVar18;
        pTVar16 = Project(this,&local_90,(TVector<double> *)(puVar18 + 2));
        dVar23 = (pTVar16->field0_0x0)._s_0.Y;
        pdVar5 = (double *)(lVar21 + lVar19 + 8);
        *pdVar5 = (pTVar16->field0_0x0)._s_0.X;
        pdVar5[1] = dVar23;
        pTVar16 = Project(this,&local_80,(TVector<double> *)(puVar18 + 8));
        dVar23 = (pTVar16->field0_0x0)._s_0.X;
        dVar24 = (pTVar16->field0_0x0)._s_0.Y;
        dVar22 = dVar24 * dVar24 + dVar23 * dVar23;
        if (dVar22 <= dVar11) {
          dVar23 = 0.0;
          dVar24 = 0.0;
        }
        else {
          dVar22 = dVar10 / SQRT(dVar22);
          dVar23 = dVar23 * dVar22;
          dVar24 = dVar24 * dVar22;
        }
        auVar8._8_4_ = SUB84(dVar24,0);
        auVar8._0_8_ = dVar23;
        auVar8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        *(undefined1 (*) [16])(lVar21 + lVar19 + 0x18) = auVar8;
        pTVar16 = Project(this,&local_70,(TVector<double> *)(puVar18 + 0xe));
        dVar23 = (pTVar16->field0_0x0)._s_0.X;
        dVar24 = (pTVar16->field0_0x0)._s_0.Y;
        dVar22 = dVar24 * dVar24 + dVar23 * dVar23;
        if (dVar22 <= dVar11) {
          dVar23 = 0.0;
          dVar24 = 0.0;
        }
        else {
          dVar22 = dVar10 / SQRT(dVar22);
          dVar23 = dVar23 * dVar22;
          dVar24 = dVar24 * dVar22;
        }
        uVar17 = (ulonglong)uVar6;
        auVar9._8_4_ = SUB84(dVar24,0);
        auVar9._0_8_ = dVar23;
        auVar9._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        *(undefined1 (*) [16])(lVar21 + lVar19 + 0x28) = auVar9;
        puVar2 = puVar18 + 0x14;
        puVar18 = puVar18 + 0x16;
        *(undefined1 *)(lVar21 + lVar19 + 0x38) = *(undefined1 *)puVar2;
      }
    }
  }
  return;
}

// Project @ 1498d3360

TVector2<double> * __thiscall
UPCGSplineProjectionData::Project
          (UPCGSplineProjectionData *this,TVector2<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  TVector2<double> *pTVar6;
  char cVar7;
  longlong lVar8;
  double dVar9;
  uint uVar10;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  double local_58;
  double local_50;
  double local_48;
  double dVar11;
  double dVar14;
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSurface()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                         ,0x2c3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TVector2<double> *)(*pcVar4)();
    return pTVar6;
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x3a0))((longlong *)this->_padding_,&local_58);
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = dVar2 * local_50 + dVar1 * local_58 + dVar3 * local_48;
  uVar10 = SUB84(local_58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)local_58 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar11 = (double)CONCAT44(uVar12,uVar10);
  uVar13 = SUB84(local_50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)local_50 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar14 = (double)CONCAT44(uVar15,uVar13);
  if (dVar11 < dVar14) {
    dVar11 = (double)CONCAT44(uVar15,uVar13);
  }
  lVar8 = 0;
  cVar7 = (double)CONCAT44(uVar12,uVar10) < dVar14;
  if ((double)CONCAT44((uint)((ulonglong)local_48 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar11)
  {
    if ((bool)cVar7) goto LAB_1498d3464;
  }
  else {
    cVar7 = '\x02';
LAB_1498d3464:
    lVar8 = 1;
    uVar10 = 1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar9 * local_58;
    if (cVar7 == '\x01') goto LAB_1498d347f;
  }
  uVar10 = (int)lVar8 + 1;
  (__return_storage_ptr__->field0_0x0).XY[lVar8] = dVar2 - dVar9 * local_50;
  if (cVar7 == '\x02') {
    return __return_storage_ptr__;
  }
LAB_1498d347f:
  if ((1 < uVar10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                         ,0x4b0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TVector2<double> *)(*pcVar4)();
    return pTVar6;
  }
  (__return_storage_ptr__->field0_0x0).XY[uVar10] = dVar3 - dVar9 * local_48;
  return __return_storage_ptr__;
}

// SamplePoint @ 1498db2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGSplineProjectionData::SamplePoint
          (UPCGSplineProjectionData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  FInterpCurveVector2D *this_00;
  EPCGMetadataOp EVar1;
  UPCGMetadata *pUVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int iVar5;
  TBox<double> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  UClass *pUVar12;
  UPCGSplineData *pUVar13;
  uint uVar14;
  longlong *plVar15;
  FPCGSplineStruct *this_01;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  undefined1 auStackY_4a8 [32];
  float local_458;
  float local_454;
  FPCGSplineStruct *local_450;
  TBox<double> *local_448;
  TVector<double>_u_0 local_440;
  TVector2<double> local_428;
  double local_418;
  double local_410;
  double local_408;
  TVector<double>_u_0 local_400;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3d0;
  TVector<double> local_3b8;
  TTransform<double> local_398;
  FPCGPoint local_338;
  FPCGPoint local_268;
  TTransform<double> local_198;
  TTransform<double> local_138;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_448 = param_2;
  if ((char)this->_padding_ == '\0') {
    bVar7 = UPCGProjectionData::SamplePoint
                      ((UPCGProjectionData *)this,param_1,param_2,param_3,param_4);
    return bVar7;
  }
  local_440._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_440._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_440._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  plVar15 = &this->_padding_;
  if (*plVar15 == 0) {
LAB_1498db3a8:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSpline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                       ,0x28c,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (*plVar15 != 0) goto LAB_1498db3d4;
  }
  else {
    pUVar12 = UPCGSplineData::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)plVar15,pUVar12);
    if ((!bVar7) || (*plVar15 == 0)) goto LAB_1498db3a8;
LAB_1498db3d4:
    pUVar12 = UPCGSplineData::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)plVar15,pUVar12);
    if (bVar7) {
      lVar16 = *plVar15;
      goto LAB_1498db3ef;
    }
  }
  lVar16 = 0;
LAB_1498db3ef:
  this_01 = (FPCGSplineStruct *)(lVar16 + 0x110);
  local_450 = this_01;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSurface()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineData.cpp"
                         ,0x28e,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  plVar15 = (longlong *)this->_padding_;
  uVar10 = (**(code **)(*plVar15 + 0x3a0))(plVar15,&local_418);
  local_398.Rotation.XY.m128d_f64[0] = *(double *)this_01;
  local_398.Rotation.XY.m128d_f64[1] = *(double *)(lVar16 + 0x118);
  local_398.Rotation.ZW.m128d_f64[0] = *(double *)(lVar16 + 0x120);
  local_398.Rotation.ZW.m128d_f64[1] = *(double *)(lVar16 + 0x128);
  local_398.Scale3D.ZW.m128d_f64[0]._0_4_ = *(uint *)(lVar16 + 0x160);
  local_398.Scale3D.ZW.m128d_f64[0]._4_4_ = *(uint *)(lVar16 + 0x164);
  local_398.Scale3D.ZW.m128d_f64[1]._0_4_ = *(uint *)(lVar16 + 0x168);
  local_398.Scale3D.ZW.m128d_f64[1]._4_4_ = *(uint *)(lVar16 + 0x16c);
  local_398.Scale3D.XY.m128d_f64[0]._0_4_ = *(uint *)(lVar16 + 0x150);
  local_398.Scale3D.XY.m128d_f64[0]._4_4_ = *(uint *)(lVar16 + 0x154);
  local_398.Scale3D.XY.m128d_f64[1]._0_4_ = *(uint *)(lVar16 + 0x158);
  local_398.Scale3D.XY.m128d_f64[1]._4_4_ = *(uint *)(lVar16 + 0x15c);
  local_398.Translation.XY.m128d_f64[0] = *(double *)(lVar16 + 0x130);
  local_398.Translation.XY.m128d_f64[1] = *(double *)(lVar16 + 0x138);
  local_398.Translation.ZW.m128d_f64[0] = *(double *)(lVar16 + 0x140);
  local_398.Translation.ZW.m128d_f64[1] = *(double *)(lVar16 + 0x148);
  lVar16 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(local_398.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                             local_398.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88));
  auVar4._8_4_ = (int)lVar16;
  auVar4._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(local_398.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   local_398.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar4._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  uVar14 = movmskpd((int)plVar15,auVar4);
  auVar19._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
        (double)CONCAT44(local_398.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                         local_398.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88));
  auVar19._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
        (double)CONCAT44(local_398.Scale3D.XY.m128d_f64[0]._4_4_ &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_398.Scale3D.XY.m128d_f64[0]._0_4_ &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  iVar11 = movmskpd(uVar10,auVar19);
  if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
    local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_138.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_138.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&local_398,&local_138);
  }
  local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_198.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_198.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_198.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_198.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_198,param_1,&local_138);
  local_3d0._s_0.Z = local_198.Translation.ZW.m128d_f64[0];
  local_3d0._s_0.X = local_198.Translation.XY.m128d_f64[0];
  local_3d0._s_0.Y = local_198.Translation.XY.m128d_f64[1];
  Project(this,&local_428,(TVector<double> *)&local_3d0._s_0);
  this_00 = &this->ProjectedPosition;
  iVar11 = *(int *)&(this->ProjectedPosition).field_0x8;
  iVar5 = iVar11;
  if ((this->ProjectedPosition).field_0x10 == '\0') {
    iVar5 = iVar11 + -1;
  }
  if (iVar11 < 2) {
    if (iVar11 == 1) {
      if ((*(int *)&(this->ProjectedPosition).field_0x8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      fVar17 = **(float **)&this_00->field_0x0;
    }
    else {
      fVar17 = 0.0;
    }
  }
  else {
    fVar17 = FInterpCurve<UE::Math::TVector2<double>_>::FindNearestOnSegment
                       ((FInterpCurve<UE::Math::TVector2<double>_> *)this_00,&local_428,0,&local_458
                       );
    iVar11 = 1;
    this_01 = local_450;
    if (1 < iVar5) {
      do {
        fVar18 = FInterpCurve<UE::Math::TVector2<double>_>::FindNearestOnSegment
                           ((FInterpCurve<UE::Math::TVector2<double>_> *)this_00,&local_428,iVar11,
                            &local_454);
        if (local_454 < local_458) {
          local_458 = local_454;
          fVar17 = fVar18;
        }
        iVar11 = iVar11 + 1;
        this_01 = local_450;
      } while (iVar11 < iVar5);
    }
  }
  FPCGSplineStruct::GetLocationAtSplineInputKey(this_01,&local_3b8,fVar17,World);
  local_400._s_0.X = local_418 + local_440._s_0.X;
  local_400._s_0.Y = local_410 + local_440._s_0.Y;
  local_400._s_0.Z = local_408 + local_440._s_0.Z;
  FMath::ClosestPointOnInfiniteLine
            ((TVector<double> *)&local_3e8._s_0,(TVector<double> *)&local_440._s_0,
             (TVector<double> *)&local_400._s_0,&local_3b8);
  fVar17 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar20 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar21 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar22 = GlobalVectorConstants::Float0001.m128_f32[3];
  plVar15 = (longlong *)0x0;
  fVar18 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar23 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar24 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar25 = GlobalVectorConstants::Float1110.m128_f32[3];
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_268.Transform.Rotation.XY.m128d_f64[0] = (double)fVar17;
  local_268.Transform.Rotation.XY.m128d_f64[1] = (double)fVar20;
  local_268.Density = 1.0;
  local_268.Steepness = 0.5;
  local_268.Seed = 0;
  local_268.MetadataEntry = -1;
  local_268.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_268.Transform.Rotation.ZW.m128d_f64[0] = (double)fVar21;
  local_268.Transform.Rotation.ZW.m128d_f64[1] = (double)fVar22;
  local_268.Transform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_268.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_268.Transform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_268.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_268.Transform.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_268.Transform.Scale3D.ZW.m128d_f64[0] = (double)fVar24;
  local_268.Transform.Scale3D.ZW.m128d_f64[1] = (double)fVar25;
  local_268.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar26,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar14);
  local_268.Transform.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar23,0);
  local_268.Transform.Scale3D.XY.m128d_f64[0] = (double)fVar18;
  local_268.Transform.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
  local_268.BoundsMax.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  local_268.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar26,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar14);
  local_268.BoundsMax.field0_0x0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_268.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_268.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_268.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_268.Color.field0_0x0._s_0.W = _UNK_150689688;
  local_268.BoundsMin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar26,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
  if (this->_padding_ != 0) {
    pUVar12 = UPCGSplineData::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar12);
    fVar17 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar20 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar21 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar22 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar18 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar23 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar24 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar25 = GlobalVectorConstants::Float1110.m128_f32[3];
    if (bVar7) {
      plVar15 = (longlong *)this->_padding_;
    }
  }
  pTVar6 = local_448;
  local_d8 = (double)fVar17;
  dStack_d0 = (double)fVar20;
  local_c8 = (double)fVar21;
  dStack_c0 = (double)fVar22;
  local_b8 = local_3e8._0_4_;
  uStack_b4 = local_3e8._4_4_;
  uStack_b0 = local_3e8._8_4_;
  uStack_ac = local_3e8._12_4_;
  local_98 = (double)fVar18;
  dStack_90 = (double)fVar23;
  local_88 = (double)fVar24;
  dStack_80 = (double)fVar25;
  local_a8 = local_3e8._s_0.Z;
  uStack_a0 = 0;
  cVar9 = (**(code **)(*plVar15 + 0x3c0))(local_88,&local_d8,local_448,&local_268);
  if (cVar9 != '\0') {
    local_338.Transform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_338.Transform.Rotation.XY.m128d_f64[1] =
         (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_338.Density = 1.0;
    local_338.Steepness = 0.5;
    local_338.Seed = 0;
    local_338.MetadataEntry = -1;
    local_338.Transform.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_338.Transform.Rotation.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_338.Transform.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_338.Transform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_338.Transform.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_338.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_338.Transform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_338.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_338.Transform.Translation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_338.Transform.Translation.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_338.BoundsMax.field0_0x0._8_4_ =
         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    local_338.BoundsMax.field0_0x0._12_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
    local_338.Transform.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_338.Transform.Scale3D.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_338.BoundsMin.field0_0x0._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar26,
                          UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar14);
    local_338.BoundsMin.field0_0x0._s_0.Y =
         (double)CONCAT44(local_338.BoundsMax.field0_0x0._12_4_ ^ uVar26,
                          local_338.BoundsMax.field0_0x0._8_4_ ^ uVar14);
    local_338.BoundsMin.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar26,
                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
    local_338.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_338.Color.field0_0x0._s_0.Y = _UNK_150689688;
    local_338.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
    local_338.Color.field0_0x0._s_0.W = _UNK_150689688;
    local_338.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    local_338.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    local_338.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    cVar9 = (**(code **)(*(longlong *)this->_padding_ + 0x3c0))
                      ((longlong *)this->_padding_,param_1,pTVar6,&local_338);
    if (cVar9 != '\0') {
      (param_3->Transform).Rotation.XY.m128d_f64[0] = local_268.Transform.Rotation.XY.m128d_f64[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = local_268.Transform.Rotation.XY.m128d_f64[1];
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = local_268.Transform.Rotation.ZW.m128d_f64[0];
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = local_268.Transform.Rotation.ZW.m128d_f64[1];
      (param_3->Transform).Translation.XY.m128d_f64[0] =
           local_268.Transform.Translation.XY.m128d_f64[0];
      (param_3->Transform).Translation.XY.m128d_f64[1] =
           local_268.Transform.Translation.XY.m128d_f64[1];
      (param_3->Transform).Translation.ZW.m128d_f64[0] =
           local_268.Transform.Translation.ZW.m128d_f64[0];
      (param_3->Transform).Translation.ZW.m128d_f64[1] =
           local_268.Transform.Translation.ZW.m128d_f64[1];
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = local_268.Transform.Scale3D.XY.m128d_f64[0];
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = local_268.Transform.Scale3D.XY.m128d_f64[1];
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = local_268.Transform.Scale3D.ZW.m128d_f64[0];
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = local_268.Transform.Scale3D.ZW.m128d_f64[1];
      *(ulonglong *)&param_3->Density = CONCAT44(local_268._100_4_,local_268.Density);
      (param_3->BoundsMin).field0_0x0._s_0.X = local_268.BoundsMin.field0_0x0._s_0.X;
      (param_3->BoundsMin).field0_0x0._s_0.Y = local_268.BoundsMin.field0_0x0._s_0.Y;
      (param_3->BoundsMin).field0_0x0._s_0.Z = local_268.BoundsMin.field0_0x0._s_0.Z;
      (param_3->BoundsMax).field0_0x0._s_0.X = local_268.BoundsMax.field0_0x0._s_0.X;
      (param_3->BoundsMax).field0_0x0._s_0.Y = local_268.BoundsMax.field0_0x0._s_0.Y;
      (param_3->BoundsMax).field0_0x0._s_0.Z = local_268.BoundsMax.field0_0x0._s_0.Z;
      param_3->_padding_ = local_268._padding_;
      (param_3->Color).field0_0x0._s_0.X = local_268.Color.field0_0x0._s_0.X;
      (param_3->Color).field0_0x0._s_0.Y = local_268.Color.field0_0x0._s_0.Y;
      (param_3->Color).field0_0x0._s_0.Z = local_268.Color.field0_0x0._s_0.Z;
      (param_3->Color).field0_0x0._s_0.W = local_268.Color.field0_0x0._s_0.W;
      param_3->Steepness = local_268.Steepness;
      param_3->Seed = local_268.Seed;
      param_3->MetadataEntry = local_268.MetadataEntry;
      UPCGProjectionData::ApplyProjectionResult((UPCGProjectionData *)this,&local_338,param_3);
      if (param_4 != (UPCGMetadata *)0x0) {
        if (local_268.MetadataEntry == -1) {
          if (local_338.MetadataEntry != -1) {
            param_3->MetadataEntry = local_338.MetadataEntry;
          }
        }
        else if (local_338.MetadataEntry != -1) {
          EVar1 = *(EPCGMetadataOp *)((longlong)&this->_padding_ + 1);
          pUVar2 = *(UPCGMetadata **)(this->_padding_ + 0x38);
          pUVar13 = GetSpline(this);
          UPCGMetadata::MergePointAttributesSubset
                    (param_4,&local_268,param_4,*(UPCGMetadata **)&pUVar13->field_0x38,&local_338,
                     param_4,pUVar2,param_3,EVar1);
          return true;
        }
      }
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUPCGSplineProjectionData @ 1498f6af0

void __cdecl UPCGSplineProjectionData::StaticRegisterNativesUPCGSplineProjectionData(void)

{
  return;
}

