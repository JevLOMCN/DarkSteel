// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 26

// StaticClass @ 149854040

UClass * __cdecl UPCGIntersectionData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGIntersectionData",
               &Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton,
               StaticRegisterNativesUPCGIntersectionData,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGIntersectionData>,
               InternalVTableHelperCtorCaller<UPCGIntersectionData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton;
}

// UPCGIntersectionData @ 14988e020

UPCGIntersectionData * __thiscall
UPCGIntersectionData::UPCGIntersectionData(UPCGIntersectionData *this,FVTableHelper *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->DensityFunction = Multiply;
  this->_padding_ = (longlong)&___7UPCGIntersectionData__6B_;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->A).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->B).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
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
  return this;
}

// UPCGIntersectionData @ 14988e0f0

UPCGIntersectionData * __thiscall
UPCGIntersectionData::UPCGIntersectionData(UPCGIntersectionData *this,FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->DensityFunction = Multiply;
  this->_padding_ = (longlong)&___7UPCGIntersectionData__6B_;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->A).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->B).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
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
  return this;
}

// ~UPCGIntersectionData @ 149891600

void __thiscall UPCGIntersectionData::~UPCGIntersectionData(UPCGIntersectionData *this)

{
  this->_padding_ = (longlong)&___7UPCGIntersectionData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// operator() @ 1498938e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
`UPCGIntersectionData::CreateAndFilterPointData'::__l2::<lambda_1>::operator()
          (void *this,
          TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int> *param_1,
          UPCGBasePointData *param_2,int param_3,UPCGBasePointData *param_4,int param_5)

{
  ForElementType<int> FVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long64 lVar13;
  UPCGMetadata *pUVar14;
  UPCGMetadata *pUVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  int iVar26;
  ForElementType<int> FVar27;
  ForElementType<int> FVar28;
  TTransform<double> *pTVar29;
  float *pfVar30;
  TVector<double> *pTVar31;
  TVector4<double> *pTVar32;
  int *piVar33;
  long64 *plVar34;
  UPCGMetadata *this_00;
  ForElementType<FPCGPoint> FVar35;
  longlong lVar36;
  TVector4<double>_u_0 *pTVar37;
  ulonglong uVar38;
  ForElementType<int> FVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
  uint uVar45;
  float fVar46;
  undefined1 auStackY_dcc8 [32];
  uint local_dc78;
  undefined1 local_dc74;
  undefined1 local_dc73 [3];
  int local_dc70;
  int local_dc6c;
  uint local_dc68;
  ForElementType<int> local_dc60;
  longlong *local_dc58;
  UPCGBasePointData *local_dc50;
  ForElementType<int> local_dc48;
  ForElementType<FPCGPoint> local_dc40;
  int local_dc38;
  TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *local_dc30;
  int local_dc28;
  FPCGPointValueRanges local_dc18;
  FConstPCGPointValueRanges local_da88;
  ForElementType<int> local_d8f8;
  uint local_d4f0;
  uint local_d4ec;
  ForElementType<int> local_d4e8;
  uint local_d0e0;
  uint local_d0dc;
  TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_d0d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_dcc8;
  local_dc50 = param_4;
  local_dc70 = 0;
  local_dc6c = param_3;
  local_dc58 = this;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_da88,param_2);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_dc18,param_4,false);
  iVar26 = param_1->ArrayNum;
  local_d0d8.AllocatorInstance.SecondaryData = (ForElementType<FPCGPoint>)0x0;
  local_d0d8.ArrayNum = 0;
  local_d0d8.ArrayMax = 0x100;
  TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_d0d8,iVar26,Default);
  local_dc38 = local_d0d8.ArrayNum;
  plVar10 = *(longlong **)((longlong)this + 0x10);
  uVar11 = *(undefined8 *)((longlong)this + 0x18);
  pcVar12 = *(code **)(*plVar10 + 0x3c8);
  local_dc40 = (ForElementType<FPCGPoint>)&local_d0d8;
  if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
    local_dc40 = local_d0d8.AllocatorInstance.SecondaryData;
  }
  if ((local_d0d8.ArrayNum < 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar25)) {
    pcVar12 = (code *)swi(3);
    iVar26 = (*pcVar12)();
    return iVar26;
  }
  local_dc30 = param_1->DataPtr;
  local_dc28 = param_1->ArrayNum;
  (*pcVar12)(plVar10,&local_dc30,&local_dc40,uVar11);
  local_d4ec = 0x100;
  local_d8f8.SecondaryData = (ForElementType<int>)0x0;
  FVar28 = (ForElementType<int>)0x0;
  local_d4f0 = 0;
  FVar27 = (ForElementType<int>)0x0;
  local_d4e8.SecondaryData = (ForElementType<int>)0x0;
  local_d0e0 = 0;
  local_d0dc = 0x100;
  local_dc78 = 0;
  if (0 < iVar26) {
    do {
      uVar42 = local_dc78;
      uVar43 = 0;
      if ((int)local_dc78 < local_d0d8.ArrayNum) {
        uVar43 = ~local_dc78 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar28 = local_d8f8.SecondaryData, FVar27 = local_d4e8.SecondaryData, bVar25)) {
        pcVar12 = (code *)swi(3);
        iVar26 = (*pcVar12)();
        return iVar26;
      }
      FVar35 = (ForElementType<FPCGPoint>)&local_d0d8;
      if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
        FVar35 = local_d0d8.AllocatorInstance.SecondaryData;
      }
      if (*(float *)((longlong)(int)uVar42 * 0xd0 + 0x60 + (longlong)FVar35) <= 0.0) {
        if (*(char *)(*(longlong *)this + 0x50) != '\0') {
          FVar28 = (ForElementType<int>)&local_d4e8;
          if (FVar27 != (ForElementType<int>)0x0) {
            FVar28 = FVar27;
          }
          if ((ulonglong)FVar28 <= &local_dc78) {
            FVar28 = (ForElementType<int>)&local_d4e8;
            if (FVar27 != (ForElementType<int>)0x0) {
              FVar28 = FVar27;
            }
            if ((&local_dc78 < (uint *)((longlong)FVar28 + (longlong)(int)local_d0dc * 4)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), FVar27 = local_d4e8.SecondaryData, bVar25)) {
              pcVar12 = (code *)swi(3);
              iVar26 = (*pcVar12)();
              return iVar26;
            }
          }
          if (local_d0e0 == local_d0dc) {
            local_d0e0 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_d4e8,(int *)&local_d0dc);
            FVar27 = local_d4e8.SecondaryData;
          }
          uVar42 = local_d0e0;
          FVar39 = (ForElementType<int>)&local_d4e8;
          if (FVar27 != (ForElementType<int>)0x0) {
            FVar39 = FVar27;
          }
          local_d0e0 = local_d0e0 + 1;
          goto LAB_149893cff;
        }
      }
      else {
        FVar27 = (ForElementType<int>)&local_d8f8;
        if (FVar28 != (ForElementType<int>)0x0) {
          FVar27 = FVar28;
        }
        if ((ulonglong)FVar27 <= &local_dc78) {
          FVar27 = (ForElementType<int>)&local_d8f8;
          if (FVar28 != (ForElementType<int>)0x0) {
            FVar27 = FVar28;
          }
          if ((&local_dc78 < (uint *)((longlong)FVar27 + (longlong)(int)local_d4ec * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), FVar28 = local_d8f8.SecondaryData, bVar25)) {
            pcVar12 = (code *)swi(3);
            iVar26 = (*pcVar12)();
            return iVar26;
          }
        }
        if (local_d4f0 == local_d4ec) {
          local_d4f0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_d8f8,(int *)&local_d4ec);
          FVar28 = local_d8f8.SecondaryData;
        }
        uVar42 = local_d4f0;
        FVar39 = (ForElementType<int>)&local_d8f8;
        if (FVar28 != (ForElementType<int>)0x0) {
          FVar39 = FVar28;
        }
        local_d4f0 = local_d4f0 + 1;
LAB_149893cff:
        *(uint *)((longlong)FVar39 + (longlong)(int)uVar42 * 4) = local_dc78;
        FVar28 = local_d8f8.SecondaryData;
        FVar27 = local_d4e8.SecondaryData;
      }
      local_dc78 = local_dc78 + 1;
    } while ((int)local_dc78 < iVar26);
  }
  uVar38 = (ulonglong)(int)local_d4f0;
  local_dc68 = local_d4f0;
  if (0 < (int)local_d4f0) {
    FVar39 = (ForElementType<int>)&local_d8f8;
    if (FVar28 != (ForElementType<int>)0x0) {
      FVar39 = FVar28;
    }
    local_dc48 = (ForElementType<int>)((longlong)FVar39 + uVar38 * 4);
    uVar42 = param_5;
    while( true ) {
      FVar1 = local_dc48;
      local_dc60 = FVar39;
      if (local_d4f0 != (uint)uVar38) {
        local_dc74 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_dc74);
      }
      FVar28 = local_d8f8.SecondaryData;
      FVar27 = local_d4e8.SecondaryData;
      if (FVar39 == FVar1) break;
      uVar43 = *(uint *)FVar39;
      uVar40 = local_dc6c + uVar43;
      uVar45 = 0;
      if ((int)uVar43 < local_d0d8.ArrayNum) {
        uVar45 = ~uVar43 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        iVar26 = (*pcVar12)();
        return iVar26;
      }
      FVar35 = (ForElementType<FPCGPoint>)&local_d0d8;
      if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
        FVar35 = local_d0d8.AllocatorInstance.SecondaryData;
      }
      lVar44 = (longlong)(int)uVar43 * 0xd0 + (longlong)FVar35;
      if (local_dc18.TransformRange.NumElements != 0) {
        pTVar29 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_da88.TransformRange,uVar40);
        dVar4 = (pTVar29->Rotation).XY.m128d_f64[0];
        dVar5 = (pTVar29->Rotation).XY.m128d_f64[1];
        dVar6 = (pTVar29->Rotation).ZW.m128d_f64[0];
        dVar7 = (pTVar29->Rotation).ZW.m128d_f64[1];
        dVar18 = (pTVar29->Translation).XY.m128d_f64[0];
        dVar19 = (pTVar29->Translation).XY.m128d_f64[1];
        dVar17 = (pTVar29->Translation).ZW.m128d_f64[0];
        dVar20 = (pTVar29->Translation).ZW.m128d_f64[1];
        dVar21 = (pTVar29->Scale3D).XY.m128d_f64[0];
        dVar22 = (pTVar29->Scale3D).XY.m128d_f64[1];
        dVar23 = (pTVar29->Scale3D).ZW.m128d_f64[0];
        dVar24 = (pTVar29->Scale3D).ZW.m128d_f64[1];
        pTVar29 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_dc18.TransformRange,uVar42);
        (pTVar29->Rotation).XY.m128d_f64[0] = dVar4;
        (pTVar29->Rotation).XY.m128d_f64[1] = dVar5;
        (pTVar29->Rotation).ZW.m128d_f64[0] = dVar6;
        (pTVar29->Rotation).ZW.m128d_f64[1] = dVar7;
        (pTVar29->Translation).XY.m128d_f64[0] = dVar18;
        (pTVar29->Translation).XY.m128d_f64[1] = dVar19;
        (pTVar29->Translation).ZW.m128d_f64[0] = dVar17;
        (pTVar29->Translation).ZW.m128d_f64[1] = dVar20;
        (pTVar29->Scale3D).XY.m128d_f64[0] = dVar21;
        (pTVar29->Scale3D).XY.m128d_f64[1] = dVar22;
        (pTVar29->Scale3D).ZW.m128d_f64[0] = dVar23;
        (pTVar29->Scale3D).ZW.m128d_f64[1] = dVar24;
      }
      if (local_dc18.DensityRange.NumElements != 0) {
        pfVar30 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_da88.DensityRange,uVar40);
        fVar46 = *pfVar30;
        pfVar30 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_dc18.DensityRange,uVar42);
        *pfVar30 = fVar46;
      }
      if (local_dc18.SteepnessRange.NumElements != 0) {
        pfVar30 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_da88.SteepnessRange,uVar40);
        fVar46 = *pfVar30;
        pfVar30 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_dc18.SteepnessRange,uVar42);
        *pfVar30 = fVar46;
      }
      if (local_dc18.BoundsMinRange.NumElements != 0) {
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_da88.BoundsMinRange,uVar40);
        dVar5 = (pTVar31->field0_0x0)._s_0.X;
        dVar6 = (pTVar31->field0_0x0)._s_0.Y;
        dVar4 = (pTVar31->field0_0x0)._s_0.Z;
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_dc18.BoundsMinRange,uVar42);
        (pTVar31->field0_0x0)._s_0.X = dVar5;
        (pTVar31->field0_0x0)._s_0.Y = dVar6;
        (pTVar31->field0_0x0)._s_0.Z = dVar4;
      }
      if (local_dc18.BoundsMaxRange.NumElements != 0) {
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_da88.BoundsMaxRange,uVar40);
        dVar5 = (pTVar31->field0_0x0)._s_0.X;
        dVar6 = (pTVar31->field0_0x0)._s_0.Y;
        dVar4 = (pTVar31->field0_0x0)._s_0.Z;
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_dc18.BoundsMaxRange,uVar42);
        (pTVar31->field0_0x0)._s_0.X = dVar5;
        (pTVar31->field0_0x0)._s_0.Y = dVar6;
        (pTVar31->field0_0x0)._s_0.Z = dVar4;
      }
      if (local_dc18.ColorRange.NumElements != 0) {
        pTVar32 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_da88.ColorRange,uVar40);
        dVar4 = (pTVar32->field0_0x0)._s_0.X;
        dVar5 = (pTVar32->field0_0x0)._s_0.Y;
        dVar6 = (pTVar32->field0_0x0)._s_0.Z;
        dVar7 = (pTVar32->field0_0x0)._s_0.W;
        pTVar32 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_dc18.ColorRange,uVar42);
        (pTVar32->field0_0x0)._s_0.X = dVar4;
        (pTVar32->field0_0x0)._s_0.Y = dVar5;
        (pTVar32->field0_0x0)._s_0.Z = dVar6;
        (pTVar32->field0_0x0)._s_0.W = dVar7;
      }
      if (local_dc18.SeedRange.NumElements != 0) {
        piVar33 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_da88.SeedRange,uVar40);
        iVar26 = *piVar33;
        piVar33 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_dc18.SeedRange,uVar42);
        *piVar33 = iVar26;
      }
      if (local_dc18.MetadataEntryRange.NumElements != 0) {
        plVar34 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_da88.MetadataEntryRange,uVar40);
        lVar13 = *plVar34;
        plVar34 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_dc18.MetadataEntryRange,uVar42);
        *plVar34 = lVar13;
      }
      plVar10 = local_dc58;
      fVar46 = *(float *)(lVar44 + 0x60);
      cVar8 = *(char *)(*local_dc58 + 0x110);
      uVar43 = 0;
      if ((int)uVar40 < local_da88.DensityRange.NumElements) {
        uVar43 = ~uVar40 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        iVar26 = (*pcVar12)();
        return iVar26;
      }
      fVar3 = *(float *)((longlong)((int)uVar40 % local_da88.DensityRange.ElementView.NumElements) *
                         (longlong)local_da88.DensityRange.ElementView.BytesBetweenElements +
                        (longlong)local_da88.DensityRange.ElementView.FirstElementPtr);
      if (cVar8 == '\x01') {
        if (fVar3 <= fVar46) {
          fVar46 = fVar3;
        }
      }
      else {
        fVar46 = fVar46 * fVar3;
      }
      uVar45 = ~uVar42 >> 0x1f;
      uVar43 = 0;
      if ((int)uVar42 < local_dc18.DensityRange.NumElements) {
        uVar43 = uVar45;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        iVar26 = (*pcVar12)();
        return iVar26;
      }
      if (uVar42 == (int)uVar42 % local_dc18.DensityRange.ElementView.NumElements) {
        pfVar30 = (float *)((longlong)local_dc18.DensityRange.ElementView.BytesBetweenElements *
                            (longlong)
                            ((int)uVar42 % local_dc18.DensityRange.ElementView.NumElements) +
                           (longlong)local_dc18.DensityRange.ElementView.FirstElementPtr);
      }
      else {
        pfVar30 = &local_dc18.DensityRange.StubValue;
      }
      *pfVar30 = fVar46;
      uVar43 = 0;
      if ((int)uVar40 < local_da88.ColorRange.NumElements) {
        uVar43 = ~uVar40 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        iVar26 = (*pcVar12)();
        return iVar26;
      }
      dVar4 = *(double *)(lVar44 + 0xa0);
      dVar18 = *(double *)(lVar44 + 0xb0);
      lVar36 = (longlong)((int)uVar40 % local_da88.ColorRange.ElementView.NumElements) *
               (longlong)local_da88.ColorRange.ElementView.BytesBetweenElements;
      dVar5 = *(double *)
               ((longlong)&(local_da88.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
               lVar36 + 8);
      pdVar2 = (double *)
               ((longlong)&(local_da88.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
               lVar36 + 0x10);
      dVar19 = *pdVar2;
      dVar6 = (((TVector4<double>_u_0 *)
               ((longlong)&(local_da88.ColorRange.ElementView.FirstElementPtr)->field0_0x0 + lVar36)
               )->_s_0).X;
      dVar7 = *(double *)(lVar44 + 0xa8);
      uVar43 = 0;
      if ((int)uVar42 < local_dc18.ColorRange.NumElements) {
        uVar43 = uVar45;
      }
      dVar17 = pdVar2[1] * *(double *)(lVar44 + 0xb8);
      if ((uVar43 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        iVar26 = (*pcVar12)();
        return iVar26;
      }
      if (uVar42 == (int)uVar42 % local_dc18.ColorRange.ElementView.NumElements) {
        pTVar37 = (TVector4<double>_u_0 *)
                  ((longlong)&(local_dc18.ColorRange.ElementView.FirstElementPtr)->field0_0x0 +
                  (longlong)local_dc18.ColorRange.ElementView.BytesBetweenElements *
                  (longlong)((int)uVar42 % local_dc18.ColorRange.ElementView.NumElements));
      }
      else {
        pTVar37 = &local_dc18.ColorRange.StubValue.field0_0x0;
      }
      (((TVector4<double>_u_0 *)&(pTVar37->_s_0).X)->_s_0).X = dVar4 * dVar6;
      *(double *)((longlong)pTVar37 + 8) = dVar5 * dVar7;
      auVar16._8_4_ = SUB84(dVar17,0);
      auVar16._0_8_ = dVar19 * dVar18;
      auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      *(undefined1 (*) [16])((longlong)pTVar37 + 0x10) = auVar16;
      this_00 = (UPCGMetadata *)(**(code **)(local_dc50->_padding_ + 0x328))();
      if ((this_00 != (UPCGMetadata *)0x0) &&
         (((char)plVar10[4] != '\0' || (*(longlong *)(lVar44 + 200) != -1)))) {
        uVar43 = 0;
        if ((int)uVar42 < local_dc18.MetadataEntryRange.NumElements) {
          uVar43 = uVar45;
        }
        if ((uVar43 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar25)) {
          pcVar12 = (code *)swi(3);
          iVar26 = (*pcVar12)();
          return iVar26;
        }
        if (uVar42 == (int)uVar42 % local_dc18.MetadataEntryRange.ElementView.NumElements) {
          plVar34 = (long64 *)
                    ((longlong)local_dc18.MetadataEntryRange.ElementView.BytesBetweenElements *
                     (longlong)((int)uVar42 % local_dc18.MetadataEntryRange.ElementView.NumElements)
                    + (longlong)local_dc18.MetadataEntryRange.ElementView.FirstElementPtr);
        }
        else {
          plVar34 = &local_dc18.MetadataEntryRange.StubValue;
        }
        pUVar14 = (UPCGMetadata *)plVar10[3];
        lVar13 = *(long64 *)(lVar44 + 200);
        pUVar15 = (UPCGMetadata *)plVar10[1];
        uVar43 = 0;
        if ((int)uVar40 < local_da88.MetadataEntryRange.NumElements) {
          uVar43 = ~uVar40 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar25)) {
          pcVar12 = (code *)swi(3);
          iVar26 = (*pcVar12)();
          return iVar26;
        }
        UPCGMetadata::MergeAttributesSubset
                  (this_00,*(long64 *)
                            ((longlong)
                             ((int)uVar40 % local_da88.MetadataEntryRange.ElementView.NumElements) *
                             (longlong)
                             local_da88.MetadataEntryRange.ElementView.BytesBetweenElements +
                            (longlong)local_da88.MetadataEntryRange.ElementView.FirstElementPtr),
                   pUVar15,pUVar15,lVar13,pUVar14,pUVar14,plVar34,Min);
      }
      local_dc70 = local_dc70 + 1;
      uVar42 = uVar42 + 1;
      uVar38 = (ulonglong)local_dc68;
      FVar39 = (ForElementType<int>)((longlong)local_dc60 + 4);
    }
  }
  uVar42 = local_d0e0;
  iVar26 = local_dc70;
  if (0 < (int)local_d0e0) {
    FVar39 = (ForElementType<int>)&local_d4e8;
    if (FVar27 != (ForElementType<int>)0x0) {
      FVar39 = FVar27;
    }
    uVar43 = param_5 + local_dc70;
    FVar1 = (ForElementType<int>)((longlong)FVar39 + (longlong)(int)local_d0e0 * 4);
    while( true ) {
      if (local_d0e0 != uVar42) {
        local_dc73[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_dc73);
      }
      FVar28 = local_d8f8.SecondaryData;
      FVar27 = local_d4e8.SecondaryData;
      if (FVar39 == FVar1) break;
      iVar41 = local_dc6c + *(uint *)FVar39;
      if (local_dc18.TransformRange.NumElements != 0) {
        pTVar29 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_da88.TransformRange,iVar41);
        dVar4 = (pTVar29->Rotation).XY.m128d_f64[0];
        dVar5 = (pTVar29->Rotation).XY.m128d_f64[1];
        dVar6 = (pTVar29->Rotation).ZW.m128d_f64[0];
        dVar7 = (pTVar29->Rotation).ZW.m128d_f64[1];
        dVar18 = (pTVar29->Translation).XY.m128d_f64[0];
        dVar19 = (pTVar29->Translation).XY.m128d_f64[1];
        dVar17 = (pTVar29->Translation).ZW.m128d_f64[0];
        dVar20 = (pTVar29->Translation).ZW.m128d_f64[1];
        dVar21 = (pTVar29->Scale3D).XY.m128d_f64[0];
        dVar22 = (pTVar29->Scale3D).XY.m128d_f64[1];
        dVar23 = (pTVar29->Scale3D).ZW.m128d_f64[0];
        dVar24 = (pTVar29->Scale3D).ZW.m128d_f64[1];
        pTVar29 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_dc18.TransformRange,uVar43);
        (pTVar29->Rotation).XY.m128d_f64[0] = dVar4;
        (pTVar29->Rotation).XY.m128d_f64[1] = dVar5;
        (pTVar29->Rotation).ZW.m128d_f64[0] = dVar6;
        (pTVar29->Rotation).ZW.m128d_f64[1] = dVar7;
        (pTVar29->Translation).XY.m128d_f64[0] = dVar18;
        (pTVar29->Translation).XY.m128d_f64[1] = dVar19;
        (pTVar29->Translation).ZW.m128d_f64[0] = dVar17;
        (pTVar29->Translation).ZW.m128d_f64[1] = dVar20;
        (pTVar29->Scale3D).XY.m128d_f64[0] = dVar21;
        (pTVar29->Scale3D).XY.m128d_f64[1] = dVar22;
        (pTVar29->Scale3D).ZW.m128d_f64[0] = dVar23;
        (pTVar29->Scale3D).ZW.m128d_f64[1] = dVar24;
      }
      if (local_dc18.DensityRange.NumElements != 0) {
        pfVar30 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_da88.DensityRange,iVar41);
        fVar46 = *pfVar30;
        pfVar30 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_dc18.DensityRange,uVar43);
        *pfVar30 = fVar46;
      }
      if (local_dc18.SteepnessRange.NumElements != 0) {
        pfVar30 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_da88.SteepnessRange,iVar41);
        fVar46 = *pfVar30;
        pfVar30 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_dc18.SteepnessRange,uVar43);
        *pfVar30 = fVar46;
      }
      if (local_dc18.BoundsMinRange.NumElements != 0) {
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_da88.BoundsMinRange,iVar41);
        dVar5 = (pTVar31->field0_0x0)._s_0.X;
        dVar6 = (pTVar31->field0_0x0)._s_0.Y;
        dVar4 = (pTVar31->field0_0x0)._s_0.Z;
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_dc18.BoundsMinRange,uVar43);
        (pTVar31->field0_0x0)._s_0.X = dVar5;
        (pTVar31->field0_0x0)._s_0.Y = dVar6;
        (pTVar31->field0_0x0)._s_0.Z = dVar4;
      }
      if (local_dc18.BoundsMaxRange.NumElements != 0) {
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_da88.BoundsMaxRange,iVar41);
        dVar5 = (pTVar31->field0_0x0)._s_0.X;
        dVar6 = (pTVar31->field0_0x0)._s_0.Y;
        dVar4 = (pTVar31->field0_0x0)._s_0.Z;
        pTVar31 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_dc18.BoundsMaxRange,uVar43);
        (pTVar31->field0_0x0)._s_0.X = dVar5;
        (pTVar31->field0_0x0)._s_0.Y = dVar6;
        (pTVar31->field0_0x0)._s_0.Z = dVar4;
      }
      if (local_dc18.ColorRange.NumElements != 0) {
        pTVar32 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_da88.ColorRange,iVar41);
        dVar4 = (pTVar32->field0_0x0)._s_0.X;
        dVar5 = (pTVar32->field0_0x0)._s_0.Y;
        dVar6 = (pTVar32->field0_0x0)._s_0.Z;
        dVar7 = (pTVar32->field0_0x0)._s_0.W;
        pTVar32 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_dc18.ColorRange,uVar43);
        (pTVar32->field0_0x0)._s_0.X = dVar4;
        (pTVar32->field0_0x0)._s_0.Y = dVar5;
        (pTVar32->field0_0x0)._s_0.Z = dVar6;
        (pTVar32->field0_0x0)._s_0.W = dVar7;
      }
      if (local_dc18.SeedRange.NumElements != 0) {
        piVar33 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_da88.SeedRange,iVar41);
        iVar9 = *piVar33;
        piVar33 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_dc18.SeedRange,uVar43);
        *piVar33 = iVar9;
      }
      if (local_dc18.MetadataEntryRange.NumElements != 0) {
        plVar34 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_da88.MetadataEntryRange,iVar41);
        lVar13 = *plVar34;
        plVar34 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_dc18.MetadataEntryRange,uVar43);
        *plVar34 = lVar13;
      }
      uVar45 = 0;
      if ((int)uVar43 < local_dc18.DensityRange.NumElements) {
        uVar45 = ~uVar43 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        iVar26 = (*pcVar12)();
        return iVar26;
      }
      uVar45 = (int)uVar43 % local_dc18.DensityRange.ElementView.NumElements;
      if (uVar43 == uVar45) {
        iVar26 = iVar26 + 1;
        uVar43 = uVar43 + 1;
        FVar39 = (ForElementType<int>)((longlong)FVar39 + 4);
        *(float *)((longlong)local_dc18.DensityRange.ElementView.BytesBetweenElements *
                   (longlong)(int)uVar45 +
                  (longlong)local_dc18.DensityRange.ElementView.FirstElementPtr) = 0.0;
      }
      else {
        iVar26 = iVar26 + 1;
        uVar43 = uVar43 + 1;
        local_dc18.DensityRange.StubValue = 0.0;
        FVar39 = (ForElementType<int>)((longlong)FVar39 + 4);
      }
    }
  }
  if (FVar27 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar27);
    FVar28 = local_d8f8.SecondaryData;
  }
  if (FVar28 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar28);
  }
  if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
    FMemory::Free((void *)local_d0d8.AllocatorInstance.SecondaryData);
  }
  return iVar26;
}

// AddToCrc @ 14989dce0

void __thiscall
UPCGIntersectionData::AddToCrc(UPCGIntersectionData *this,FArchiveCrc32 *param_1,bool param_2)

{
  longlong *plVar1;
  UClass *this_00;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res10);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  plVar1 = (longlong *)param_1->_padding_;
  local_res8[0] = (uint)this->DensityFunction;
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
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ComputeCrc @ 1498a2060

FPCGCrc __thiscall UPCGIntersectionData::ComputeCrc(UPCGIntersectionData *this,bool param_1)

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
  if ((((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetA() && GetB()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0x48,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FPCGCrc)(*pcVar1)();
    return FVar3;
  }
  FVar4 = UPCGData::GetOrComputeCrc((UPCGData *)(this->A).field0_0x0.DebugPtr,SUB81(local_res20,0));
  local_res8[0] = *(uint *)FVar4;
  FVar4 = UPCGData::GetOrComputeCrc((UPCGData *)(this->B).field0_0x0.DebugPtr,SUB81(local_d8,0));
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

// CopyInternal @ 1498a4220

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
UPCGIntersectionData::CopyInternal(UPCGIntersectionData *this,FPCGContext *param_1)

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
  UPCGIntersectionData *pUVar10;
  
  pUVar10 = FPCGContext::NewObject_AnyThread<UPCGIntersectionData>(param_1);
  pUVar10->DensityFunction = this->DensityFunction;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->A).field0_0x0.DebugPtr, pUVar1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar10->A).field0_0x0 = (this->A).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->B).field0_0x0.DebugPtr, pUVar1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar10->B).field0_0x0 = (this->B).field0_0x0;
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  (pUVar10->CachedBounds).Min.field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (pUVar10->CachedBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (pUVar10->CachedBounds).Min.field0_0x0._s_0.Z = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  (pUVar10->CachedBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (pUVar10->CachedBounds).Max.field0_0x0._s_0.Y = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  (pUVar10->CachedBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->CachedBounds).Pad[0];
  uVar4 = (this->CachedBounds).Pad[1];
  uVar5 = (this->CachedBounds).Pad[2];
  uVar6 = (this->CachedBounds).Pad[3];
  uVar7 = (this->CachedBounds).Pad[4];
  uVar8 = (this->CachedBounds).Pad[5];
  uVar9 = (this->CachedBounds).Pad[6];
  (pUVar10->CachedBounds).IsValid = (this->CachedBounds).IsValid;
  (pUVar10->CachedBounds).Pad[0] = uVar3;
  (pUVar10->CachedBounds).Pad[1] = uVar4;
  (pUVar10->CachedBounds).Pad[2] = uVar5;
  (pUVar10->CachedBounds).Pad[3] = uVar6;
  (pUVar10->CachedBounds).Pad[4] = uVar7;
  (pUVar10->CachedBounds).Pad[5] = uVar8;
  (pUVar10->CachedBounds).Pad[6] = uVar9;
  dVar2 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  (pUVar10->CachedStrictBounds).Min.field0_0x0._s_0.X =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.X;
  (pUVar10->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (pUVar10->CachedStrictBounds).Min.field0_0x0._s_0.Z =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  (pUVar10->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (pUVar10->CachedStrictBounds).Max.field0_0x0._s_0.Y =
       (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  (pUVar10->CachedStrictBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->CachedStrictBounds).Pad[0];
  uVar4 = (this->CachedStrictBounds).Pad[1];
  uVar5 = (this->CachedStrictBounds).Pad[2];
  uVar6 = (this->CachedStrictBounds).Pad[3];
  uVar7 = (this->CachedStrictBounds).Pad[4];
  uVar8 = (this->CachedStrictBounds).Pad[5];
  uVar9 = (this->CachedStrictBounds).Pad[6];
  (pUVar10->CachedStrictBounds).IsValid = (this->CachedStrictBounds).IsValid;
  (pUVar10->CachedStrictBounds).Pad[0] = uVar3;
  (pUVar10->CachedStrictBounds).Pad[1] = uVar4;
  (pUVar10->CachedStrictBounds).Pad[2] = uVar5;
  (pUVar10->CachedStrictBounds).Pad[3] = uVar6;
  (pUVar10->CachedStrictBounds).Pad[4] = uVar7;
  (pUVar10->CachedStrictBounds).Pad[5] = uVar8;
  (pUVar10->CachedStrictBounds).Pad[6] = uVar9;
  return (UPCGSpatialData *)pUVar10;
}

// CreateAndFilterPointData @ 1498a7da0

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
UPCGIntersectionData::CreateAndFilterPointData
          (UPCGIntersectionData *this,FPCGContext *param_1,UPCGSpatialData *param_2,
          UPCGSpatialData *param_3,TSubclassOf<UPCGBasePointData> param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  EPCGPointNativeProperties EVar5;
  UPCGBasePointData *pUVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  UPCGBasePointData *pUVar9;
  longlong lVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  bool bVar13;
  UPackage *local_res18;
  UPCGMetadata *local_res20;
  UPCGIntersectionData *local_158;
  UPCGBasePointData *local_150;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_128;
  undefined8 local_120;
  UPCGSpatialData *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_e8;
  undefined8 local_e0;
  code *local_d8;
  <lambda_4> local_d0;
  <lambda_3> local_c8;
  <lambda_1> local_c0;
  UPCGIntersectionData *local_a8;
  UPCGMetadata *pUStack_a0;
  UPCGSpatialData *local_98;
  UClass *pUStack_90;
  bool local_88;
  undefined7 uStack_87;
  <lambda_2> local_80;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId206,"UPCGIntersectionData::CreateAndFilterPointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
               ,0xce);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId206);
  }
  if (((param_2 == (UPCGSpatialData *)0x0) || (param_3 == (UPCGSpatialData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("X && Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0xcf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UPCGBasePointData *)(*pcVar1)();
    return pUVar6;
  }
  pcVar1 = *(code **)(param_2->_padding_ + 0x380);
  iVar3 = (**(code **)(param_3->_padding_ + 0x380))(param_3);
  iVar4 = (*pcVar1)(param_2);
  if ((iVar3 < iVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("X->GetDimension() <= Y->GetDimension()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0xd0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UPCGBasePointData *)(*pcVar1)();
    return pUVar6;
  }
  pUVar6 = UPCGSpatialData::ToBasePointData(param_2,param_1,&this->CachedBounds);
  if (pUVar6 == (UPCGBasePointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pUVar9 = (UPCGBasePointData *)0x0;
  }
  else {
    local_res20 = (UPCGMetadata *)(**(code **)(pUVar6->_padding_ + 800))(pUVar6);
    (**(code **)(this->_padding_ + 800))(this);
    pUVar7 = GetTransientPackage();
    pUVar12 = (UClass *)0x0;
    local_res18 = pUVar7;
    if (param_1 == (FPCGContext *)0x0) {
      bVar2 = IsInGameThread();
      if ((!bVar2) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0xa9,"Context != nullptr || IsInGameThread()"), bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar6 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar6;
      }
      lVar10 = *(longlong *)param_4.Class.field0_0x0;
      pUVar11 = pUVar12;
      if ((lVar10 != 0) &&
         (pUVar8 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar8 != (UClass *)0x0)) {
        iVar3 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar11 = *(UClass **)param_4.Class.field0_0x0;
        }
      }
      pUVar9 = NewObject<UPCGBasePointData>
                         ((UObject *)pUVar7,pUVar11,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    }
    else {
      pUVar9 = FPCGContext::
               NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                         (param_1,&local_res18,
                          (TSubclassOf<UPCGBasePointData> *)param_4.Class.field0_0x0);
    }
    (**(code **)(pUVar9->_padding_ + 0x328))(pUVar9);
    local_158 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_148 = 0x101;
    local_145 = 0;
    local_140 = (**(code **)(this->_padding_ + 800))(this);
    local_138 = (void *)0x0;
    local_130 = 0;
    local_128 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
    local_120 = 0;
    local_146 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_150 = pUVar6;
    (**(code **)(pUVar9->_padding_ + 0x468))(pUVar9,&local_158);
    if ((local_158 != (UPCGIntersectionData *)0x0) && ((char)local_148 != '\0')) {
      (**(code **)(pUVar9->_padding_ + 0x470))(pUVar9,&local_158);
    }
    lVar10 = (**(code **)(param_3->_padding_ + 800))(param_3);
    pUVar11 = pUVar12;
    if (lVar10 != 0) {
      pUVar11 = (UClass *)FPCGContext::NewObject_AnyThread<UPCGMetadata>(param_1);
      local_d8 = *(code **)(param_3->_padding_ + 0x450);
      local_118 = param_3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      local_110 = 0;
      local_108 = 0x10101;
      local_100 = (**(code **)(param_3->_padding_ + 800))(param_3);
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
      local_e0 = 0;
      (*local_d8)(param_3,&local_118,pUVar11);
      DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                (local_e8,(int)local_e0);
      if (local_e8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
        FMemory::Free(local_e8);
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
    }
    if (((local_res20 == (UPCGMetadata *)0x0) || (pUVar11 == (UClass *)0x0)) ||
       (bVar2 = UPCGMetadata::HasCommonAttributes(local_res20,(UPCGMetadata *)pUVar11), !bVar2)) {
      local_88 = false;
    }
    else {
      local_88 = true;
    }
    pUStack_a0 = local_res20;
    local_a8 = this;
    local_98 = param_3;
    pUStack_90 = pUVar11;
    EVar5 = (**(code **)(pUVar6->_padding_ + 0x640))(pUVar6,1);
    local_c0.NumIterations = (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
    local_80.RangeFunc.__this = local_a8;
    local_80.RangeFunc.SourceMetadata = pUStack_a0;
    pUVar11 = (UClass *)&param_1->AsyncState;
    if (param_1 == (FPCGContext *)0x0) {
      pUVar11 = pUVar12;
    }
    local_80.RangeFunc._33_7_ = uStack_87;
    local_80.RangeFunc.bPointDataHasCommonAttributes = local_88;
    local_80.RangeFunc.Y = local_98;
    local_80.RangeFunc.TempYMetadata = (UPCGMetadata *)pUStack_90;
    local_d0.TargetData = pUVar9;
    local_c8.TargetData = pUVar9;
    local_c0.TargetData = pUVar9;
    local_c0.SourceData = pUVar6;
    local_c0.PropertiesToAllocate = EVar5 | (MetadataEntry|Color|Density);
    local_80.SourceData = pUVar6;
    local_80.TargetData = pUVar9;
    bVar2 = FPCGAsync::
            AsyncProcessingRangeEx<_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_1>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_2>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_3>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGIntersectionData::CreateAndFilterPointData_::__l2::<lambda_1>_&>_::__l2::<lambda_4>_&>
                      ((FPCGAsyncState *)pUVar11,local_c0.NumIterations,&local_c0,&local_80,
                       &local_c8,&local_d0,false,0x100,false);
    if ((!bVar2) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3304061870582792308>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
                           ,0x74,
                           "FPCGAsync::AsyncProcessingRangeEx(AsyncState, NumIterations, Initialize, ProcessRange, MoveDataRange, Finished, false, ChunkSize, false)"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UPCGBasePointData *)(*pcVar1)();
      return pUVar6;
    }
    if (5 < (byte)LogPCG._0_1_) {
      (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
      (**(code **)(pUVar9->_padding_ + 0x488))(pUVar9);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_128,(int)local_120);
    if (local_128 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar9;
}

// CreateBasePointData @ 1498a8c40

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
UPCGIntersectionData::CreateBasePointData
          (UPCGIntersectionData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  UPCGSpatialData *pUVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UPCGBasePointData *pUVar7;
  TObjectPtr<UClass>_u_0 TVar8;
  UPCGSpatialData *pUVar9;
  UPCGSpatialData *pUVar10;
  UObject *local_res8;
  UObject *local_res20;
  
  pUVar10 = (this->A).field0_0x0.DebugPtr;
  pUVar1 = (this->B).field0_0x0.DebugPtr;
  if ((pUVar10 == (UPCGSpatialData *)0x0) || (pUVar1 == (UPCGSpatialData *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataA && DataB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                       ,0xbe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UPCGBasePointData *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (**(code **)(pUVar1->_padding_ + 0x380))(pUVar1);
  iVar6 = (**(code **)(pUVar10->_padding_ + 0x380))(pUVar10);
  pUVar2 = *(UObject **)param_2.Class.field0_0x0;
  if (iVar5 < iVar6) {
    local_res20 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    TVar8.DebugPtr = (UClass *)&local_res20;
    pUVar9 = pUVar1;
  }
  else {
    local_res8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    TVar8.DebugPtr = (UClass *)&local_res8;
    pUVar9 = pUVar10;
    pUVar10 = pUVar1;
  }
  pUVar7 = CreateAndFilterPointData
                     (this,param_1,pUVar9,pUVar10,(TSubclassOf<UPCGBasePointData>)TVar8);
  return pUVar7;
}

// CreatePointArrayData @ 1498ad950

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
UPCGIntersectionData::CreatePointArrayData
          (UPCGIntersectionData *this,FPCGContext *param_1,TBox<double> *param_2)

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
              (&__CpuProfilerEventSpecId182,"UPCGIntersectionData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
               ,0xb6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId182);
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
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData>(&local_18,(UPCGBasePointData *)pUVar2);
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

// CreatePointData @ 1498aeae0

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
UPCGIntersectionData::CreatePointData(UPCGIntersectionData *this,FPCGContext *param_1)

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
              (&__CpuProfilerEventSpecId176,"UPCGIntersectionData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
               ,0xb0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId176);
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
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData>(&local_18,(UPCGBasePointData *)pUVar2);
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

// FindFirstConcreteShapeFromNetwork @ 1498b3490

UPCGSpatialData * __thiscall
UPCGIntersectionData::FindFirstConcreteShapeFromNetwork(UPCGIntersectionData *this)

{
  code *pcVar1;
  bool bVar2;
  UPCGSpatialData *pUVar3;
  
  if ((((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetA() && GetB()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0xa4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UPCGSpatialData *)(*pcVar1)();
    return pUVar3;
  }
  pUVar3 = (UPCGSpatialData *)(**(code **)(((this->A).field0_0x0.DebugPtr)->_padding_ + 0x430))();
  if (pUVar3 != (UPCGSpatialData *)0x0) {
    return pUVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001498b350a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UPCGSpatialData *)(**(code **)(((this->B).field0_0x0.DebugPtr)->_padding_ + 0x430))();
  return pUVar3;
}

// GetBounds @ 1498b56c0

TBox<double> * __thiscall
UPCGIntersectionData::GetBounds(UPCGIntersectionData *this,TBox<double> *__return_storage_ptr__)

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
  
  if (((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
     ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("GetA() && GetB()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                        ,0x67,L"");
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

// GetDataType @ 1498b83d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGIntersectionData::GetDataType(UPCGIntersectionData *this)

{
  return Composite;
}

// GetDataTypeId @ 1498b8750

FPCGDataTypeBaseId * __thiscall UPCGIntersectionData::GetDataTypeId(UPCGIntersectionData *this)

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

// GetDimension @ 1498b99b0

int __thiscall UPCGIntersectionData::GetDimension(UPCGIntersectionData *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if ((((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetA() && GetB()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0x61,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  iVar3 = (**(code **)(((this->B).field0_0x0.DebugPtr)->_padding_ + 0x380))();
  iVar4 = (**(code **)(((this->A).field0_0x0.DebugPtr)->_padding_ + 0x380))();
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// GetPrivateStaticClass @ 1498bc410

UClass * __cdecl UPCGIntersectionData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGIntersectionData",
               &Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton,
               StaticRegisterNativesUPCGIntersectionData,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGIntersectionData>,
               InternalVTableHelperCtorCaller<UPCGIntersectionData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGIntersectionData.InnerSingleton;
}

// GetStrictBounds @ 1498c7630

TBox<double> * __thiscall
UPCGIntersectionData::GetStrictBounds
          (UPCGIntersectionData *this,TBox<double> *__return_storage_ptr__)

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
  
  if (((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
     ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("GetA() && GetB()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                        ,0x6d,L"");
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

// HasNonTrivialTransform @ 1498ca5d0

bool __thiscall UPCGIntersectionData::HasNonTrivialTransform(UPCGIntersectionData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if ((((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetA() && GetB()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0x9e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)(((this->A).field0_0x0.DebugPtr)->_padding_ + 0x3e0))();
  if ((cVar4 == '\0') &&
     (cVar4 = (**(code **)(((this->B).field0_0x0.DebugPtr)->_padding_ + 0x3e0))(), cVar4 == '\0')) {
    return false;
  }
  return true;
}

// Initialize @ 1498cb8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGIntersectionData::Initialize
          (UPCGIntersectionData *this,UPCGSpatialData *param_1,UPCGSpatialData *param_2)

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
  TBox<double> *pTVar15;
  TBox<double> *pTVar16;
  undefined1 auStack_198 [32];
  undefined1 local_178 [56];
  undefined1 local_140 [56];
  TBox<double> local_108;
  undefined1 local_d0 [56];
  undefined1 local_98 [56];
  TBox<double> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((param_1 == (UPCGSpatialData *)0x0) || (param_2 == (UPCGSpatialData *)0x0)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InA && InB",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                        ,0x22,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->A).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->B).field0_0x0.DebugPtr = param_2;
  this->_padding_ = (longlong)(((this->A).field0_0x0.DebugPtr)->TargetActor).WeakPtr;
  pTVar15 = (TBox<double> *)(**(code **)(param_2->_padding_ + 0x388))(param_2,local_178);
  pUVar1 = (this->A).field0_0x0.DebugPtr;
  pTVar16 = (TBox<double> *)(**(code **)(pUVar1->_padding_ + 0x388))(pUVar1,local_140);
  pTVar15 = PCGHelpers::OverlapBounds(&local_108,pTVar16,pTVar15);
  pUVar1 = (this->B).field0_0x0.DebugPtr;
  dVar6 = (pTVar15->Min).field0_0x0._s_0.Y;
  (this->CachedBounds).Min.field0_0x0._s_0.X = (pTVar15->Min).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (pTVar15->Max).field0_0x0._s_0.X;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = (pTVar15->Min).field0_0x0._s_0.Z;
  (this->CachedBounds).Max.field0_0x0._s_0.X = dVar6;
  uVar3 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 0xc);
  uVar4 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 0x14);
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) =
       *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 8);
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->CachedBounds).Max.field0_0x0 + 0x14) = uVar5;
  uVar7 = pTVar15->Pad[0];
  uVar8 = pTVar15->Pad[1];
  uVar9 = pTVar15->Pad[2];
  uVar10 = pTVar15->Pad[3];
  uVar11 = pTVar15->Pad[4];
  uVar12 = pTVar15->Pad[5];
  uVar13 = pTVar15->Pad[6];
  (this->CachedBounds).IsValid = pTVar15->IsValid;
  (this->CachedBounds).Pad[0] = uVar7;
  (this->CachedBounds).Pad[1] = uVar8;
  (this->CachedBounds).Pad[2] = uVar9;
  (this->CachedBounds).Pad[3] = uVar10;
  (this->CachedBounds).Pad[4] = uVar11;
  (this->CachedBounds).Pad[5] = uVar12;
  (this->CachedBounds).Pad[6] = uVar13;
  pTVar15 = (TBox<double> *)(**(code **)(pUVar1->_padding_ + 0x398))(pUVar1,local_d0);
  pUVar1 = (this->A).field0_0x0.DebugPtr;
  pTVar16 = (TBox<double> *)(**(code **)(pUVar1->_padding_ + 0x398))(pUVar1,local_98);
  pTVar15 = PCGHelpers::OverlapBounds(&local_60,pTVar16,pTVar15);
  dVar6 = (pTVar15->Min).field0_0x0._s_0.Y;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = (pTVar15->Min).field0_0x0._s_0.X;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar6;
  dVar6 = (pTVar15->Max).field0_0x0._s_0.X;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = (pTVar15->Min).field0_0x0._s_0.Z;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar6;
  dVar6 = (pTVar15->Max).field0_0x0._s_0.Z;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = (pTVar15->Max).field0_0x0._s_0.Y;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = dVar6;
  uVar7 = pTVar15->Pad[0];
  uVar8 = pTVar15->Pad[1];
  uVar9 = pTVar15->Pad[2];
  uVar10 = pTVar15->Pad[3];
  uVar11 = pTVar15->Pad[4];
  uVar12 = pTVar15->Pad[5];
  uVar13 = pTVar15->Pad[6];
  (this->CachedStrictBounds).IsValid = pTVar15->IsValid;
  (this->CachedStrictBounds).Pad[0] = uVar7;
  (this->CachedStrictBounds).Pad[1] = uVar8;
  (this->CachedStrictBounds).Pad[2] = uVar9;
  (this->CachedStrictBounds).Pad[3] = uVar10;
  (this->CachedStrictBounds).Pad[4] = uVar11;
  (this->CachedStrictBounds).Pad[5] = uVar12;
  (this->CachedStrictBounds).Pad[6] = uVar13;
  return;
}

// InitializeTargetMetadata @ 1498cfba0

void __thiscall
UPCGIntersectionData::InitializeTargetMetadata
          (UPCGIntersectionData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  UPCGSpatialData *pUVar1;
  TObjectPtr<UPCGSpatialData_const_>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  TObjectPtr<UPCGSpatialData_const_>_u_0 TVar8;
  TObjectPtr<UPCGSpatialData_const_>_u_0 TVar9;
  TObjectPtr<UPCGSpatialData_const_>_u_0 local_48;
  undefined8 local_40;
  void *local_28;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  int local_10;
  
  if (param_1->bInheritMetadata == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.bInheritMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                       ,0x15c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 == (UPCGMetadata *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetadataToInitialize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                       ,0x15d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->bIsDuplicatingData != false) {
    UPCGSpatialData::InitializeTargetMetadata((UPCGSpatialData *)this,param_1,param_2);
    return;
  }
  if ((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetA()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                       ,0x166,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetB()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                       ,0x167,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
            ((FPCGInitializeFromDataParams *)&local_48.ObjectPtr,param_1);
  pUVar1 = (this->B).field0_0x0.DebugPtr;
  local_40 = 0;
  iVar5 = (**(code **)(((this->A).field0_0x0.DebugPtr)->_padding_ + 0x380))();
  iVar6 = (**(code **)(pUVar1->_padding_ + 0x380))(pUVar1);
  TVar9 = (TObjectPtr<UPCGSpatialData_const_>_u_0)(this->A).field0_0x0.DebugPtr;
  lVar7 = 0x118;
  if (iVar6 < iVar5) {
    lVar7 = 0x120;
  }
  TVar8 = (TObjectPtr<UPCGSpatialData_const_>_u_0)
          ((TObjectPtr<UPCGSpatialData_const_>_u_0 *)((longlong)&this->_padding_ + lVar7))->DebugPtr
  ;
  if (TVar8.DebugPtr == TVar9.DebugPtr) {
    TVar9 = (TObjectPtr<UPCGSpatialData_const_>_u_0)(this->B).field0_0x0.DebugPtr;
  }
  TVar2 = (TObjectPtr<UPCGSpatialData_const_>_u_0)(param_1->SourceOverride).field0_0x0.DebugPtr;
  if (TVar2.DebugPtr != (UPCGSpatialData *)0x0) {
    TVar8 = TVar2;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar8.DebugPtr != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
  }
  local_48 = TVar8;
  (**(code **)((TVar8.DebugPtr)->_padding_ + 0x450))(TVar8.DebugPtr,&local_48,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar9.DebugPtr != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
  }
  local_48 = TVar9;
  (**(code **)((TVar9.DebugPtr)->_padding_ + 0x450))(TVar9.DebugPtr,&local_48,param_2);
  UPCGMetadata::AddAttributes(param_2,(UPCGMetadata *)this->_padding_);
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// SamplePoint @ 1498d9300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGIntersectionData::SamplePoint
          (UPCGIntersectionData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  TObjectPtr<UPCGSpatialData_const_> *pTVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  UPCGSpatialData *pUVar10;
  UPCGSpatialData *pUVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_278 [32];
  FPCGPoint local_218;
  FPCGPoint local_148;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pTVar1 = &this->B;
  if ((((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((pTVar1->field0_0x0).DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetA() && GetB()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0x74,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  cVar9 = (**(code **)(((this->A).field0_0x0.DebugPtr)->_padding_ + 0x3e0))();
  if ((cVar9 == '\0') &&
     (cVar9 = (**(code **)(((pTVar1->field0_0x0).DebugPtr)->_padding_ + 0x3e0))(), cVar9 != '\0')) {
    pUVar10 = (pTVar1->field0_0x0).DebugPtr;
    pUVar11 = (this->A).field0_0x0.DebugPtr;
    if (pUVar10 != pUVar11) goto LAB_1498d93cd;
  }
  else {
    pUVar10 = (this->A).field0_0x0.DebugPtr;
  }
  pUVar11 = (pTVar1->field0_0x0).DebugPtr;
LAB_1498d93cd:
  dVar6 = _UNK_150689688;
  dVar5 = ___xmm_3ff00000000000003ff0000000000000;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_148.Density = 1.0;
  local_148.Steepness = 0.5;
  local_148.Seed = 0;
  local_148.MetadataEntry = -1;
  local_148.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148.Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_148.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_148.Transform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_148.Transform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_148.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Transform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_148.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_148.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_148.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_148.BoundsMax.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  local_148.BoundsMax.field0_0x0._12_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_148.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_148.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_148.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar14,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar13);
  local_148.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_148.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_148.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_148.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_148.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_148.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_148.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44(local_148.BoundsMax.field0_0x0._12_4_ ^ uVar14,
                        local_148.BoundsMax.field0_0x0._8_4_ ^ uVar13);
  local_148.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_148.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_148.BoundsMin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar14,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_148.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_148.Color.field0_0x0._s_0.W = _UNK_150689688;
  cVar9 = (**(code **)(pUVar10->_padding_ + 0x3c0))(pUVar10,param_1,param_2,&local_148);
  if (cVar9 != '\0') {
    local_218.Density = 1.0;
    local_218.Steepness = 0.5;
    local_218.Seed = 0;
    local_218.MetadataEntry = -1;
    local_218.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_218.Transform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_218.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_218.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_218.Transform.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_218.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_218.Transform.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_218.Transform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_218.Transform.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_218.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_218.Transform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_218.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_218.BoundsMax.field0_0x0._8_4_ =
         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    local_218.BoundsMax.field0_0x0._12_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
    local_218.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_218.Transform.Translation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_218.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_218.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_218.Transform.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_218.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_218.BoundsMin.field0_0x0._s_0.Y =
         (double)CONCAT44(local_218.BoundsMax.field0_0x0._12_4_ ^ uVar14,
                          local_218.BoundsMax.field0_0x0._8_4_ ^ uVar13);
    local_218.BoundsMin.field0_0x0._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar14,
                          UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar13);
    local_218.BoundsMin.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar14,
                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
    local_218.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    local_218.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    local_218.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_218.Color.field0_0x0._s_0.X = dVar5;
    local_218.Color.field0_0x0._s_0.Y = dVar6;
    local_218.Color.field0_0x0._s_0.Z = dVar5;
    local_218.Color.field0_0x0._s_0.W = dVar6;
    cVar9 = (**(code **)(pUVar11->_padding_ + 0x3c0))(pUVar11,&local_148,param_2,&local_218);
    if (cVar9 != '\0') {
      (param_3->Transform).Rotation.XY.m128d_f64[0] = local_218.Transform.Rotation.XY.m128d_f64[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = local_218.Transform.Rotation.XY.m128d_f64[1];
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = local_218.Transform.Rotation.ZW.m128d_f64[0];
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = local_218.Transform.Rotation.ZW.m128d_f64[1];
      (param_3->Transform).Translation.XY.m128d_f64[0] =
           local_218.Transform.Translation.XY.m128d_f64[0];
      (param_3->Transform).Translation.XY.m128d_f64[1] =
           local_218.Transform.Translation.XY.m128d_f64[1];
      (param_3->Transform).Translation.ZW.m128d_f64[0] =
           local_218.Transform.Translation.ZW.m128d_f64[0];
      (param_3->Transform).Translation.ZW.m128d_f64[1] =
           local_218.Transform.Translation.ZW.m128d_f64[1];
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = local_218.Transform.Scale3D.XY.m128d_f64[0];
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = local_218.Transform.Scale3D.XY.m128d_f64[1];
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = local_218.Transform.Scale3D.ZW.m128d_f64[0];
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = local_218.Transform.Scale3D.ZW.m128d_f64[1];
      *(ulonglong *)&param_3->Density = CONCAT44(local_218._100_4_,local_218.Density);
      (param_3->BoundsMin).field0_0x0._s_0.X = local_218.BoundsMin.field0_0x0._s_0.X;
      (param_3->BoundsMin).field0_0x0._s_0.Y = local_218.BoundsMin.field0_0x0._s_0.Y;
      (param_3->BoundsMin).field0_0x0._s_0.Z = local_218.BoundsMin.field0_0x0._s_0.Z;
      (param_3->BoundsMax).field0_0x0._s_0.X =
           (double)CONCAT44(local_218.BoundsMax.field0_0x0._4_4_,
                            local_218.BoundsMax.field0_0x0._0_4_);
      (param_3->BoundsMax).field0_0x0._s_0.Y =
           (double)CONCAT44(local_218.BoundsMax.field0_0x0._12_4_,
                            local_218.BoundsMax.field0_0x0._8_4_);
      (param_3->BoundsMax).field0_0x0._s_0.Z = local_218.BoundsMax.field0_0x0._s_0.Z;
      param_3->_padding_ = local_218._padding_;
      (param_3->Color).field0_0x0._s_0.X = local_218.Color.field0_0x0._s_0.X;
      (param_3->Color).field0_0x0._s_0.Y = local_218.Color.field0_0x0._s_0.Y;
      (param_3->Color).field0_0x0._s_0.Z = local_218.Color.field0_0x0._s_0.Z;
      (param_3->Color).field0_0x0._s_0.W = local_218.Color.field0_0x0._s_0.W;
      param_3->Steepness = local_218.Steepness;
      param_3->Seed = local_218.Seed;
      param_3->MetadataEntry = local_218.MetadataEntry;
      if (this->DensityFunction == Minimum) {
        fVar12 = local_148.Density;
        if (local_218.Density <= local_148.Density) {
          fVar12 = local_218.Density;
        }
      }
      else {
        fVar12 = local_148.Density * local_218.Density;
      }
      param_3->Density = fVar12;
      auVar3._8_4_ = SUB84(local_148.Color.field0_0x0._s_0.Y * local_218.Color.field0_0x0._s_0.Y,0);
      auVar3._0_8_ = local_148.Color.field0_0x0._s_0.X * local_218.Color.field0_0x0._s_0.X;
      auVar3._12_4_ =
           (int)((ulonglong)(local_148.Color.field0_0x0._s_0.Y * local_218.Color.field0_0x0._s_0.Y)
                >> 0x20);
      *(undefined1 (*) [16])&(param_3->Color).field0_0x0 = auVar3;
      auVar4._8_4_ = SUB84(local_148.Color.field0_0x0._s_0.W * local_218.Color.field0_0x0._s_0.W,0);
      auVar4._0_8_ = local_148.Color.field0_0x0._s_0.Z * local_218.Color.field0_0x0._s_0.Z;
      auVar4._12_4_ =
           (int)((ulonglong)(local_148.Color.field0_0x0._s_0.W * local_218.Color.field0_0x0._s_0.W)
                >> 0x20);
      *(undefined1 (*) [16])((longlong)&(param_3->Color).field0_0x0 + 0x10) = auVar4;
      if (param_4 != (UPCGMetadata *)0x0) {
        if ((local_148.MetadataEntry != -1) && (local_218.MetadataEntry != -1)) {
          UPCGMetadata::MergePointAttributesSubset
                    (param_4,&local_148,param_4,(UPCGMetadata *)pUVar10->_padding_,&local_218,
                     param_4,(UPCGMetadata *)pUVar11->_padding_,param_3,Min);
          return true;
        }
        if (local_148.MetadataEntry != -1) {
          local_218.MetadataEntry = local_148.MetadataEntry;
        }
        param_3->MetadataEntry = local_218.MetadataEntry;
      }
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUPCGIntersectionData @ 1498f68d0

void __cdecl UPCGIntersectionData::StaticRegisterNativesUPCGIntersectionData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGIntersectionData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VisitDataNetwork @ 1498f9cf0

void __thiscall
UPCGIntersectionData::VisitDataNetwork
          (UPCGIntersectionData *this,TFunctionRef<void___cdecl(UPCGData_const_*)> *param_1)

{
  UPCGSpatialData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((((this->A).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) ||
      ((this->B).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetA() && GetB()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGIntersectionData.cpp"
                         ,0x3c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = (this->A).field0_0x0.DebugPtr;
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined8 *)&param_1->field_0x8;
  (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,&local_28);
  pUVar1 = (this->B).field0_0x0.DebugPtr;
  local_18 = *(undefined8 *)param_1;
  local_10 = *(undefined8 *)&param_1->field_0x8;
  (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,&local_18);
  return;
}

// execInitialize @ 1498fdc90

void __cdecl UPCGIntersectionData::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Initialize((UPCGIntersectionData *)param_1,local_res20,local_res10);
  return;
}

