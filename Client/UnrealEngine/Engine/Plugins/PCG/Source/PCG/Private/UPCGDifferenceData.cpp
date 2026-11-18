// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 30

// StaticClass @ 149856330

UClass * __cdecl UPCGDifferenceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDifferenceData",
               &Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton,
               StaticRegisterNativesUPCGDifferenceData,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDifferenceData>,
               InternalVTableHelperCtorCaller<UPCGDifferenceData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton;
}

// UPCGDifferenceData @ 14988dce0

UPCGDifferenceData * __thiscall
UPCGDifferenceData::UPCGDifferenceData(UPCGDifferenceData *this,FVTableHelper *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->bDiffMetadata = true;
  this->_padding_ = (longlong)&___7UPCGDifferenceData__6B_;
  (this->Source).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->Difference).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->DifferencesUnion).field0_0x0.DebugPtr = (UPCGUnionData *)0x0;
  this->DensityFunction = Minimum;
  return this;
}

// UPCGDifferenceData @ 14988dd30

UPCGDifferenceData * __thiscall
UPCGDifferenceData::UPCGDifferenceData(UPCGDifferenceData *this,FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->bDiffMetadata = true;
  this->_padding_ = (longlong)&___7UPCGDifferenceData__6B_;
  (this->Source).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->Difference).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->DifferencesUnion).field0_0x0.DebugPtr = (UPCGUnionData *)0x0;
  this->DensityFunction = Minimum;
  return this;
}

// ~UPCGDifferenceData @ 149891560

void __thiscall UPCGDifferenceData::~UPCGDifferenceData(UPCGDifferenceData *this)

{
  this->_padding_ = (longlong)&___7UPCGDifferenceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// operator() @ 149894cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
`UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>::operator()
          (void *this,
          TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int> *param_1,
          UPCGBasePointData *param_2,int param_3,UPCGBasePointData *param_4,int param_5)

{
  ForElementType<int> FVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  long64 lVar5;
  UPCGMetadata *pUVar6;
  UPCGMetadata *pUVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
  FVar20;
  bool bVar21;
  int iVar22;
  TTransform<double> *pTVar23;
  float *pfVar24;
  TVector<double> *pTVar25;
  TVector4<double> *pTVar26;
  int *piVar27;
  long64 *plVar28;
  ForElementType<FPCGPoint> FVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
  FVar37;
  ForElementType<int> FVar38;
  ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
  FVar39;
  int iVar40;
  ForElementType<int> FVar41;
  longlong *plVar42;
  float fVar43;
  undefined1 auStackY_e0c8 [32];
  undefined1 local_e078;
  undefined1 local_e077 [3];
  uint local_e074;
  int local_e070;
  int local_e06c;
  uint local_e068;
  float fStack_e064;
  uint local_e060;
  longlong *local_e058;
  UPCGMetadata *local_e050;
  ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
  local_e048;
  ForElementType<FPCGPoint> local_e040;
  int local_e038;
  TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_> *local_e030;
  int local_e028;
  FPCGPointValueRanges local_e018;
  FConstPCGPointValueRanges local_de88;
  ForElementType<int> local_dcf8;
  int local_d8f0;
  int local_d8ec;
  ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
  local_d8e8;
  uint local_d0e0;
  uint local_d0dc;
  TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_d0d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_e0c8;
  iVar40 = 0;
  local_e06c = 0;
  local_e070 = param_3;
  local_e058 = this;
  FConstPCGPointValueRanges::FConstPCGPointValueRanges(&local_de88,param_2);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_e018,param_4,false);
  iVar22 = param_1->ArrayNum;
  local_d0d8.AllocatorInstance.SecondaryData = (ForElementType<FPCGPoint>)0x0;
  local_d0d8.ArrayNum = 0;
  local_d0d8.ArrayMax = 0x100;
  TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_d0d8,iVar22,Default);
  if ((*(longlong *)(*(longlong *)this + 0x120) == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetDifference()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                          ,0x126,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    iVar22 = (*pcVar8)();
    return iVar22;
  }
  iVar34 = local_d0d8.ArrayNum;
  plVar42 = *(longlong **)(*(longlong *)this + 0x120);
  pcVar8 = *(code **)(*plVar42 + 0x3c8);
  local_e040 = (ForElementType<FPCGPoint>)&local_d0d8;
  if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
    local_e040 = local_d0d8.AllocatorInstance.SecondaryData;
  }
  if ((local_d0d8.ArrayNum < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    iVar22 = (*pcVar8)();
    return iVar22;
  }
  local_e030 = param_1->DataPtr;
  local_e028 = param_1->ArrayNum;
  local_e038 = iVar34;
  (*pcVar8)(plVar42,&local_e030);
  plVar42 = local_e058;
  iVar34 = local_e070;
  FVar37 = (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
            )0x0;
  FVar38 = (ForElementType<int>)0x0;
  local_d8e8.SecondaryData =
       (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
        )0x0;
  local_d0e0 = 0;
  local_d0dc = 0x100;
  local_dcf8.SecondaryData = (ForElementType<int>)0x0;
  local_d8f0 = 0;
  local_d8ec = 0x100;
  cVar3 = *(char *)(*local_e058 + 0x130);
  local_e074 = 0;
  if (0 < iVar22) {
    do {
      uVar36 = local_e074;
      uVar35 = iVar34 + local_e074;
      uVar30 = 0;
      if ((int)local_e074 < local_d0d8.ArrayNum) {
        uVar30 = ~local_e074 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar37 = local_d8e8.SecondaryData, FVar38 = local_dcf8.SecondaryData, bVar21)) {
        pcVar8 = (code *)swi(3);
        iVar22 = (*pcVar8)();
        return iVar22;
      }
      FVar29 = (ForElementType<FPCGPoint>)&local_d0d8;
      if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
        FVar29 = local_d0d8.AllocatorInstance.SecondaryData;
      }
      lVar32 = (longlong)(int)uVar36 * 0xd0 + (longlong)FVar29;
      if ((cVar3 != '\x02') || (*(float *)(lVar32 + 0x60) <= 0.0)) {
        uVar36 = 0;
        if ((int)uVar35 < local_de88.DensityRange.NumElements) {
          uVar36 = ~uVar35 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , FVar37 = local_d8e8.SecondaryData, FVar38 = local_dcf8.SecondaryData, bVar21)) {
          pcVar8 = (code *)swi(3);
          iVar22 = (*pcVar8)();
          return iVar22;
        }
        fVar43 = *(float *)((longlong)
                            ((int)uVar35 % local_de88.DensityRange.ElementView.NumElements) *
                            (longlong)local_de88.DensityRange.ElementView.BytesBetweenElements +
                           (longlong)local_de88.DensityRange.ElementView.FirstElementPtr) -
                 *(float *)(lVar32 + 0x60);
        if (fVar43 <= 0.0) goto LAB_1498950bb;
        local_e068 = local_e074;
        FVar39 = (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                  )&local_d8e8;
        if (FVar37 != (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                       )0x0) {
          FVar39 = FVar37;
        }
        fStack_e064 = fVar43;
        if ((ulonglong)FVar39 <= &local_e068) {
          FVar39 = (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                    )&local_d8e8;
          if (FVar37 != (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                         )0x0) {
            FVar39 = FVar37;
          }
          if ((&local_e068 < (uint *)((longlong)FVar39 + (longlong)(int)local_d0dc * 8)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), FVar37 = local_d8e8.SecondaryData, bVar21)) {
            pcVar8 = (code *)swi(3);
            iVar22 = (*pcVar8)();
            return iVar22;
          }
        }
        if (local_d0e0 == local_d0dc) {
          local_d0e0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>::operator()_::__l2::FKeptPoint>_>
                                 (0x408,&local_d8e8,(int *)&local_d0dc);
          FVar37 = local_d8e8.SecondaryData;
        }
        lVar32 = (longlong)(int)local_d0e0;
        FVar39 = (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                  )&local_d8e8;
        if (FVar37 != (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                       )0x0) {
          FVar39 = FVar37;
        }
        local_d0e0 = local_d0e0 + 1;
        *(ulonglong *)((longlong)FVar39 + lVar32 * 8) = CONCAT44(fStack_e064,local_e068);
        FVar37 = local_d8e8.SecondaryData;
        FVar38 = local_dcf8.SecondaryData;
      }
      else {
LAB_1498950bb:
        if (*(char *)(*plVar42 + 0x50) != '\0') {
          FVar41 = (ForElementType<int>)&local_dcf8;
          if (FVar38 != (ForElementType<int>)0x0) {
            FVar41 = FVar38;
          }
          if ((ulonglong)FVar41 <= &local_e074) {
            FVar41 = (ForElementType<int>)&local_dcf8;
            if (FVar38 != (ForElementType<int>)0x0) {
              FVar41 = FVar38;
            }
            if ((&local_e074 < (uint *)((longlong)FVar41 + (longlong)local_d8ec * 4)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), FVar38 = local_dcf8.SecondaryData, bVar21)) {
              pcVar8 = (code *)swi(3);
              iVar22 = (*pcVar8)();
              return iVar22;
            }
          }
          if (local_d8f0 == local_d8ec) {
            local_d8f0 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_dcf8,&local_d8ec);
            FVar38 = local_dcf8.SecondaryData;
          }
          lVar32 = (longlong)local_d8f0;
          FVar41 = (ForElementType<int>)&local_dcf8;
          if (FVar38 != (ForElementType<int>)0x0) {
            FVar41 = FVar38;
          }
          local_d8f0 = local_d8f0 + 1;
          *(uint *)((longlong)FVar41 + lVar32 * 4) = local_e074;
          FVar37 = local_d8e8.SecondaryData;
          FVar38 = local_dcf8.SecondaryData;
        }
      }
      local_e074 = local_e074 + 1;
    } while ((int)local_e074 < iVar22);
  }
  uVar31 = (ulonglong)(int)local_d0e0;
  local_e060 = local_d0e0;
  if (0 < (int)local_d0e0) {
    FVar39 = (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
              )&local_d8e8;
    if (FVar37 != (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                   )0x0) {
      FVar39 = FVar37;
    }
    local_e048 = (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                  )((longlong)FVar39 + uVar31 * 8);
    uVar36 = param_5;
    while( true ) {
      FVar20 = local_e048;
      if (local_d0e0 != (uint)uVar31) {
        local_e078 = 0;
        `TCheckedPointerIterator<``UPCGDifferenceData::CreateBasePointData'::__l2::<lambda_1>::operator()'::__l2::FKeptPoint,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_e078);
      }
      FVar37 = local_d8e8.SecondaryData;
      FVar38 = local_dcf8.SecondaryData;
      if (FVar39 == FVar20) break;
      uVar30 = *(uint *)FVar39;
      uVar33 = iVar34 + uVar30;
      uVar35 = 0;
      if ((int)uVar30 < local_d0d8.ArrayNum) {
        uVar35 = ~uVar30 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        iVar22 = (*pcVar8)();
        return iVar22;
      }
      FVar29 = (ForElementType<FPCGPoint>)&local_d0d8;
      if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
        FVar29 = local_d0d8.AllocatorInstance.SecondaryData;
      }
      lVar32 = (longlong)(int)uVar30 * 0xd0 + (longlong)FVar29;
      if (local_e018.TransformRange.NumElements != 0) {
        pTVar23 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_de88.TransformRange,uVar33);
        dVar2 = (pTVar23->Rotation).XY.m128d_f64[0];
        dVar9 = (pTVar23->Rotation).XY.m128d_f64[1];
        dVar10 = (pTVar23->Rotation).ZW.m128d_f64[0];
        dVar11 = (pTVar23->Rotation).ZW.m128d_f64[1];
        dVar12 = (pTVar23->Translation).XY.m128d_f64[0];
        dVar13 = (pTVar23->Translation).XY.m128d_f64[1];
        dVar14 = (pTVar23->Translation).ZW.m128d_f64[0];
        dVar15 = (pTVar23->Translation).ZW.m128d_f64[1];
        dVar16 = (pTVar23->Scale3D).XY.m128d_f64[0];
        dVar17 = (pTVar23->Scale3D).XY.m128d_f64[1];
        dVar18 = (pTVar23->Scale3D).ZW.m128d_f64[0];
        dVar19 = (pTVar23->Scale3D).ZW.m128d_f64[1];
        pTVar23 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_e018.TransformRange,uVar36);
        (pTVar23->Rotation).XY.m128d_f64[0] = dVar2;
        (pTVar23->Rotation).XY.m128d_f64[1] = dVar9;
        (pTVar23->Rotation).ZW.m128d_f64[0] = dVar10;
        (pTVar23->Rotation).ZW.m128d_f64[1] = dVar11;
        (pTVar23->Translation).XY.m128d_f64[0] = dVar12;
        (pTVar23->Translation).XY.m128d_f64[1] = dVar13;
        (pTVar23->Translation).ZW.m128d_f64[0] = dVar14;
        (pTVar23->Translation).ZW.m128d_f64[1] = dVar15;
        (pTVar23->Scale3D).XY.m128d_f64[0] = dVar16;
        (pTVar23->Scale3D).XY.m128d_f64[1] = dVar17;
        (pTVar23->Scale3D).ZW.m128d_f64[0] = dVar18;
        (pTVar23->Scale3D).ZW.m128d_f64[1] = dVar19;
      }
      if (local_e018.DensityRange.NumElements != 0) {
        pfVar24 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_de88.DensityRange,uVar33);
        fVar43 = *pfVar24;
        pfVar24 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_e018.DensityRange,uVar36);
        *pfVar24 = fVar43;
      }
      if (local_e018.SteepnessRange.NumElements != 0) {
        pfVar24 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_de88.SteepnessRange,uVar33);
        fVar43 = *pfVar24;
        pfVar24 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_e018.SteepnessRange,uVar36);
        *pfVar24 = fVar43;
      }
      if (local_e018.BoundsMinRange.NumElements != 0) {
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_de88.BoundsMinRange,uVar33);
        dVar9 = (pTVar25->field0_0x0)._s_0.X;
        dVar10 = (pTVar25->field0_0x0)._s_0.Y;
        dVar2 = (pTVar25->field0_0x0)._s_0.Z;
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_e018.BoundsMinRange,uVar36);
        (pTVar25->field0_0x0)._s_0.X = dVar9;
        (pTVar25->field0_0x0)._s_0.Y = dVar10;
        (pTVar25->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_e018.BoundsMaxRange.NumElements != 0) {
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_de88.BoundsMaxRange,uVar33);
        dVar9 = (pTVar25->field0_0x0)._s_0.X;
        dVar10 = (pTVar25->field0_0x0)._s_0.Y;
        dVar2 = (pTVar25->field0_0x0)._s_0.Z;
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_e018.BoundsMaxRange,uVar36);
        (pTVar25->field0_0x0)._s_0.X = dVar9;
        (pTVar25->field0_0x0)._s_0.Y = dVar10;
        (pTVar25->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_e018.ColorRange.NumElements != 0) {
        pTVar26 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_de88.ColorRange,uVar33);
        dVar2 = (pTVar26->field0_0x0)._s_0.X;
        dVar9 = (pTVar26->field0_0x0)._s_0.Y;
        dVar10 = (pTVar26->field0_0x0)._s_0.Z;
        dVar11 = (pTVar26->field0_0x0)._s_0.W;
        pTVar26 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_e018.ColorRange,uVar36);
        (pTVar26->field0_0x0)._s_0.X = dVar2;
        (pTVar26->field0_0x0)._s_0.Y = dVar9;
        (pTVar26->field0_0x0)._s_0.Z = dVar10;
        (pTVar26->field0_0x0)._s_0.W = dVar11;
      }
      if (local_e018.SeedRange.NumElements != 0) {
        piVar27 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_de88.SeedRange,uVar33);
        iVar22 = *piVar27;
        piVar27 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_e018.SeedRange,uVar36);
        *piVar27 = iVar22;
      }
      if (local_e018.MetadataEntryRange.NumElements != 0) {
        plVar28 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_de88.MetadataEntryRange,uVar33);
        lVar5 = *plVar28;
        plVar28 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_e018.MetadataEntryRange,uVar36);
        *plVar28 = lVar5;
      }
      fVar43 = *(float *)((longlong)FVar39 + 4);
      uVar30 = 0;
      if ((int)uVar36 < local_e018.DensityRange.NumElements) {
        uVar30 = ~uVar36 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        iVar22 = (*pcVar8)();
        return iVar22;
      }
      if (uVar36 == (int)uVar36 % local_e018.DensityRange.ElementView.NumElements) {
        pfVar24 = (float *)((longlong)local_e018.DensityRange.ElementView.BytesBetweenElements *
                            (longlong)
                            ((int)uVar36 % local_e018.DensityRange.ElementView.NumElements) +
                           (longlong)local_e018.DensityRange.ElementView.FirstElementPtr);
      }
      else {
        pfVar24 = &local_e018.DensityRange.StubValue;
      }
      *pfVar24 = fVar43;
      if ((plVar42[2] != 0) && (*(longlong *)(lVar32 + 200) != -1)) {
        local_e050 = (UPCGMetadata *)plVar42[3];
        uVar30 = 0;
        if ((int)uVar36 < local_e018.MetadataEntryRange.NumElements) {
          uVar30 = ~uVar36 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar21)) {
          pcVar8 = (code *)swi(3);
          iVar22 = (*pcVar8)();
          return iVar22;
        }
        if (uVar36 == (int)uVar36 % local_e018.MetadataEntryRange.ElementView.NumElements) {
          plVar28 = (long64 *)
                    ((longlong)local_e018.MetadataEntryRange.ElementView.BytesBetweenElements *
                     (longlong)((int)uVar36 % local_e018.MetadataEntryRange.ElementView.NumElements)
                    + (longlong)local_e018.MetadataEntryRange.ElementView.FirstElementPtr);
        }
        else {
          plVar28 = &local_e018.MetadataEntryRange.StubValue;
        }
        pUVar6 = (UPCGMetadata *)plVar42[2];
        lVar5 = *(long64 *)(lVar32 + 200);
        pUVar7 = (UPCGMetadata *)plVar42[1];
        uVar30 = 0;
        if ((int)uVar33 < local_de88.MetadataEntryRange.NumElements) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar21)) {
          pcVar8 = (code *)swi(3);
          iVar22 = (*pcVar8)();
          return iVar22;
        }
        UPCGMetadata::MergeAttributesSubset
                  (local_e050,
                   *(long64 *)
                    ((longlong)((int)uVar33 % local_de88.MetadataEntryRange.ElementView.NumElements)
                     * (longlong)local_de88.MetadataEntryRange.ElementView.BytesBetweenElements +
                    (longlong)local_de88.MetadataEntryRange.ElementView.FirstElementPtr),pUVar7,
                   pUVar7,lVar5,pUVar6,pUVar6,plVar28,Sub);
        plVar42 = local_e058;
        iVar34 = local_e070;
      }
      uVar36 = uVar36 + 1;
      uVar31 = (ulonglong)local_e060;
      iVar40 = local_e06c + 1;
      FVar39 = (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                )((longlong)FVar39 + 8);
      local_e06c = iVar40;
    }
  }
  iVar22 = local_d8f0;
  if (0 < local_d8f0) {
    FVar41 = (ForElementType<int>)&local_dcf8;
    if (FVar38 != (ForElementType<int>)0x0) {
      FVar41 = FVar38;
    }
    uVar36 = param_5 + iVar40;
    FVar1 = (ForElementType<int>)((longlong)FVar41 + (longlong)local_d8f0 * 4);
    while( true ) {
      if (local_d8f0 != iVar22) {
        local_e077[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e077);
      }
      FVar37 = local_d8e8.SecondaryData;
      FVar38 = local_dcf8.SecondaryData;
      if (FVar41 == FVar1) break;
      iVar34 = local_e070 + *(int *)FVar41;
      if (local_e018.TransformRange.NumElements != 0) {
        pTVar23 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  ::GetElement(&local_de88.TransformRange,iVar34);
        dVar2 = (pTVar23->Rotation).XY.m128d_f64[0];
        dVar9 = (pTVar23->Rotation).XY.m128d_f64[1];
        dVar10 = (pTVar23->Rotation).ZW.m128d_f64[0];
        dVar11 = (pTVar23->Rotation).ZW.m128d_f64[1];
        dVar12 = (pTVar23->Translation).XY.m128d_f64[0];
        dVar13 = (pTVar23->Translation).XY.m128d_f64[1];
        dVar14 = (pTVar23->Translation).ZW.m128d_f64[0];
        dVar15 = (pTVar23->Translation).ZW.m128d_f64[1];
        dVar16 = (pTVar23->Scale3D).XY.m128d_f64[0];
        dVar17 = (pTVar23->Scale3D).XY.m128d_f64[1];
        dVar18 = (pTVar23->Scale3D).ZW.m128d_f64[0];
        dVar19 = (pTVar23->Scale3D).ZW.m128d_f64[1];
        pTVar23 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_e018.TransformRange,uVar36);
        (pTVar23->Rotation).XY.m128d_f64[0] = dVar2;
        (pTVar23->Rotation).XY.m128d_f64[1] = dVar9;
        (pTVar23->Rotation).ZW.m128d_f64[0] = dVar10;
        (pTVar23->Rotation).ZW.m128d_f64[1] = dVar11;
        (pTVar23->Translation).XY.m128d_f64[0] = dVar12;
        (pTVar23->Translation).XY.m128d_f64[1] = dVar13;
        (pTVar23->Translation).ZW.m128d_f64[0] = dVar14;
        (pTVar23->Translation).ZW.m128d_f64[1] = dVar15;
        (pTVar23->Scale3D).XY.m128d_f64[0] = dVar16;
        (pTVar23->Scale3D).XY.m128d_f64[1] = dVar17;
        (pTVar23->Scale3D).ZW.m128d_f64[0] = dVar18;
        (pTVar23->Scale3D).ZW.m128d_f64[1] = dVar19;
      }
      if (local_e018.DensityRange.NumElements != 0) {
        pfVar24 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_de88.DensityRange,iVar34);
        fVar43 = *pfVar24;
        pfVar24 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_e018.DensityRange,uVar36);
        *pfVar24 = fVar43;
      }
      if (local_e018.SteepnessRange.NumElements != 0) {
        pfVar24 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                            (&local_de88.SteepnessRange,iVar34);
        fVar43 = *pfVar24;
        pfVar24 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_e018.SteepnessRange,uVar36);
        *pfVar24 = fVar43;
      }
      if (local_e018.BoundsMinRange.NumElements != 0) {
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_de88.BoundsMinRange,iVar34);
        dVar9 = (pTVar25->field0_0x0)._s_0.X;
        dVar10 = (pTVar25->field0_0x0)._s_0.Y;
        dVar2 = (pTVar25->field0_0x0)._s_0.Z;
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_e018.BoundsMinRange,uVar36);
        (pTVar25->field0_0x0)._s_0.X = dVar9;
        (pTVar25->field0_0x0)._s_0.Y = dVar10;
        (pTVar25->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_e018.BoundsMaxRange.NumElements != 0) {
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  ::GetElement(&local_de88.BoundsMaxRange,iVar34);
        dVar9 = (pTVar25->field0_0x0)._s_0.X;
        dVar10 = (pTVar25->field0_0x0)._s_0.Y;
        dVar2 = (pTVar25->field0_0x0)._s_0.Z;
        pTVar25 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_e018.BoundsMaxRange,uVar36);
        (pTVar25->field0_0x0)._s_0.X = dVar9;
        (pTVar25->field0_0x0)._s_0.Y = dVar10;
        (pTVar25->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_e018.ColorRange.NumElements != 0) {
        pTVar26 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  ::GetElement(&local_de88.ColorRange,iVar34);
        dVar2 = (pTVar26->field0_0x0)._s_0.X;
        dVar9 = (pTVar26->field0_0x0)._s_0.Y;
        dVar10 = (pTVar26->field0_0x0)._s_0.Z;
        dVar11 = (pTVar26->field0_0x0)._s_0.W;
        pTVar26 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_e018.ColorRange,uVar36);
        (pTVar26->field0_0x0)._s_0.X = dVar2;
        (pTVar26->field0_0x0)._s_0.Y = dVar9;
        (pTVar26->field0_0x0)._s_0.Z = dVar10;
        (pTVar26->field0_0x0)._s_0.W = dVar11;
      }
      if (local_e018.SeedRange.NumElements != 0) {
        piVar27 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                            (&local_de88.SeedRange,iVar34);
        iVar4 = *piVar27;
        piVar27 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_e018.SeedRange,uVar36);
        *piVar27 = iVar4;
      }
      if (local_e018.MetadataEntryRange.NumElements != 0) {
        plVar28 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_de88.MetadataEntryRange,iVar34);
        lVar5 = *plVar28;
        plVar28 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                            (&local_e018.MetadataEntryRange,uVar36);
        *plVar28 = lVar5;
      }
      uVar30 = 0;
      if ((int)uVar36 < local_e018.DensityRange.NumElements) {
        uVar30 = ~uVar36 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        iVar22 = (*pcVar8)();
        return iVar22;
      }
      uVar30 = (int)uVar36 % local_e018.DensityRange.ElementView.NumElements;
      if (uVar36 == uVar30) {
        iVar40 = iVar40 + 1;
        uVar36 = uVar36 + 1;
        FVar41 = (ForElementType<int>)((longlong)FVar41 + 4);
        *(float *)((longlong)local_e018.DensityRange.ElementView.BytesBetweenElements *
                   (longlong)(int)uVar30 +
                  (longlong)local_e018.DensityRange.ElementView.FirstElementPtr) = 0.0;
      }
      else {
        iVar40 = iVar40 + 1;
        uVar36 = uVar36 + 1;
        local_e018.DensityRange.StubValue = 0.0;
        FVar41 = (ForElementType<int>)((longlong)FVar41 + 4);
      }
    }
  }
  if (FVar38 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar38);
    FVar37 = local_d8e8.SecondaryData;
  }
  if (FVar37 != (ForElementType<_public:___cdecl__protected:_class_UPCGBasePointData_const_*___cdecl_UPCGDifferenceData::CreateBasePointData(FPCGContext_*,UPCGBasePointData_const_*,TSubclassOf<UPCGBasePointData>)const_::_2_::<lambda_1>::operator()(TArrayView<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>,int>_const_&,UPCGBasePointData_const_*,int,UPCGBasePointData_*,int)const_::_2_::FKeptPoint>
                 )0x0) {
    FMemory::Free((void *)FVar37);
  }
  if (local_d0d8.AllocatorInstance.SecondaryData != (ForElementType<FPCGPoint>)0x0) {
    FMemory::Free((void *)local_d0d8.AllocatorInstance.SecondaryData);
  }
  return iVar40;
}

// AddDifference @ 14989c780

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
UPCGDifferenceData::AddDifference
          (UPCGDifferenceData *this,FPCGContext *param_1,UPCGSpatialData *param_2)

{
  UPCGUnionData *pUVar1;
  code *pcVar2;
  bool bVar3;
  EPCGUnionDensityFunction EVar4;
  double *pdVar5;
  double *pdVar6;
  UPCGUnionData *pUVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [56];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_2 == (UPCGSpatialData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDifference",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0x37,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pdVar5 = (double *)(**(code **)(this->_padding_ + 0x388))(this,local_98);
  pdVar6 = (double *)(**(code **)(param_2->_padding_ + 0x388))(param_2,local_60);
  if (((((*pdVar5 <= pdVar6[3]) && (*pdVar6 <= pdVar5[3])) && (pdVar5[1] <= pdVar6[4])) &&
      ((pdVar6[1] <= pdVar5[4] && (pdVar5[2] <= pdVar6[5])))) && (pdVar6[2] <= pdVar5[5])) {
    pUVar7 = (UPCGUnionData *)(this->Difference).field0_0x0.DebugPtr;
    if (pUVar7 == (UPCGUnionData *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (this->Difference).field0_0x0.DebugPtr = param_2;
    }
    else {
      pUVar1 = (this->DifferencesUnion).field0_0x0.DebugPtr;
      if (pUVar1 == (UPCGUnionData *)0x0) {
        pUVar7 = FPCGContext::NewObject_AnyThread<UPCGUnionData>(param_1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPCGUnionData *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        (this->DifferencesUnion).field0_0x0.DebugPtr = pUVar7;
        UPCGUnionData::AddData(pUVar7,(this->Difference).field0_0x0.DebugPtr);
        if (this->DensityFunction == ClampedSubstraction) {
          EVar4 = ClampedAddition;
        }
        else {
          EVar4 = Maximum;
          if (this->DensityFunction == Binary) {
            EVar4 = Binary;
          }
        }
        ((this->DifferencesUnion).field0_0x0.DebugPtr)->DensityFunction = EVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 = (this->DifferencesUnion).field0_0x0.DebugPtr, pUVar7 != (UPCGUnionData *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        (this->Difference).field0_0x0 =
             (TObjectPtr<UPCGSpatialData_const_>_u_0)(this->DifferencesUnion).field0_0x0;
      }
      else if (pUVar7 != pUVar1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Difference == DifferencesUnion",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                           ,0x57,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UPCGUnionData::AddData((this->DifferencesUnion).field0_0x0.DebugPtr,param_2);
    }
  }
  return;
}

// AddToCrc @ 14989dad0

void __thiscall
UPCGDifferenceData::AddToCrc(UPCGDifferenceData *this,FArchiveCrc32 *param_1,bool param_2)

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
  local_res8[0] = (uint)(this->bDiffMetadata != false);
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

// ComputeCrc @ 1498a1f00

FPCGCrc __thiscall UPCGDifferenceData::ComputeCrc(UPCGDifferenceData *this,bool param_1)

{
  UPCGSpatialData *this_00;
  code *pcVar1;
  bool bVar2;
  FPCGCrc FVar3;
  FPCGCrc FVar4;
  undefined7 in_register_00000011;
  undefined1 in_R8B;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_c8 [16];
  FArchiveCrc32 local_b8;
  
  FVar3._1_7_ = in_register_00000011;
  FVar3.Value._0_1_ = param_1;
  FArchiveCrc32::FArchiveCrc32(&local_b8,0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x370))(this,&local_b8,in_R8B);
  if ((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSource()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0x8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FPCGCrc)(*pcVar1)();
      return FVar3;
    }
  }
  FVar4 = UPCGData::GetOrComputeCrc
                    ((UPCGData *)(this->Source).field0_0x0.DebugPtr,SUB81(local_res20,0));
  local_res8[0] = *(uint *)FVar4;
  if (*(uint **)(local_b8._padding_ + 8) < *(uint **)local_b8._padding_ + 1) {
    if ((local_b8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_b8._padding_ + 0x188))(&local_b8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b8,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_b8._padding_;
    *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 4;
  }
  this_00 = (this->Difference).field0_0x0.DebugPtr;
  if (this_00 != (UPCGSpatialData *)0x0) {
    FVar4 = UPCGData::GetOrComputeCrc((UPCGData *)this_00,SUB81(local_c8,0));
    local_res10[0] = *(uint *)FVar4;
    if (*(uint **)(local_b8._padding_ + 8) < *(uint **)local_b8._padding_ + 1) {
      if ((local_b8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_b8._padding_ + 0x188))(&local_b8,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_b8,local_res10);
      }
    }
    else {
      local_res10[0] = **(uint **)local_b8._padding_;
      *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 4;
    }
  }
  *(uint *)FVar3 = local_b8.CRC;
  *(undefined1 *)((longlong)FVar3 + 4) = 1;
  FArchive::~FArchive((FArchive *)&local_b8);
  return FVar3;
}

// CopyInternal @ 1498a3e50

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
UPCGDifferenceData::CopyInternal(UPCGDifferenceData *this,FPCGContext *param_1)

{
  UPCGSpatialData *pUVar1;
  UPCGDifferenceData *pUVar2;
  UPCGUnionData *pUVar3;
  
  pUVar2 = FPCGContext::NewObject_AnyThread<UPCGDifferenceData>(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->Source).field0_0x0.DebugPtr, pUVar1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar2->Source).field0_0x0 = (this->Source).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->Difference).field0_0x0.DebugPtr, pUVar1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar2->Difference).field0_0x0 = (this->Difference).field0_0x0;
  pUVar2->DensityFunction = this->DensityFunction;
  pUVar3 = (this->DifferencesUnion).field0_0x0.DebugPtr;
  if (pUVar3 != (UPCGUnionData *)0x0) {
    pUVar3 = (UPCGUnionData *)(**(code **)(pUVar3->_padding_ + 0x310))(pUVar3,param_1,1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGUnionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (pUVar2->DifferencesUnion).field0_0x0.DebugPtr = pUVar3;
  }
  return (UPCGSpatialData *)pUVar2;
}

// CreateBasePointData @ 1498a8800

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
UPCGDifferenceData::CreateBasePointData
          (UPCGDifferenceData *this,FPCGContext *param_1,UPCGBasePointData *param_2,
          TSubclassOf<UPCGBasePointData> param_3)

{
  int iVar1;
  TObjectPtr<UPCGSpatialData_const_>_u_0 TVar2;
  longlong lVar3;
  UPCGMetadata *pUVar4;
  code *pcVar5;
  bool bVar6;
  EPCGPointNativeProperties EVar7;
  UPackage *pUVar8;
  UPCGBasePointData *pUVar9;
  UClass *pUVar10;
  UPCGMetadata *pUVar11;
  FPCGAsyncState *pFVar12;
  UPackage *local_128 [2];
  UPCGDifferenceData *local_118;
  UPCGBasePointData *local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_e8;
  undefined8 local_e0;
  TObjectPtr<UPCGSpatialData_const_>_u_0 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_a8;
  undefined8 local_a0;
  code *local_98;
  UPCGMetadata *local_90;
  <lambda_4> local_88;
  <lambda_3> local_80;
  <lambda_1> local_78;
  <lambda_2> local_60;
  
  if (param_2 == (UPCGBasePointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    return (UPCGBasePointData *)0x0;
  }
  TVar2 = (TObjectPtr<UPCGSpatialData_const_>_u_0)(this->Difference).field0_0x0.DebugPtr;
  if (TVar2.DebugPtr == (UPCGSpatialData *)0x0) {
    if ((byte)LogPCG._0_1_ < 6) {
      return param_2;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    return param_2;
  }
  pUVar8 = GetTransientPackage();
  local_128[0] = pUVar8;
  if (param_1 != (FPCGContext *)0x0) {
    pUVar9 = FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,local_128,(TSubclassOf<UPCGBasePointData> *)param_3.Class.field0_0x0
                       );
    goto LAB_1498a8975;
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar9 = (UPCGBasePointData *)(*pcVar5)();
    return pUVar9;
  }
  lVar3 = *(longlong *)param_3.Class.field0_0x0;
  if ((lVar3 == 0) ||
     (pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_1498a8934:
    pUVar10 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1498a8934;
    pUVar10 = *(UClass **)param_3.Class.field0_0x0;
  }
  pUVar9 = NewObject<UPCGBasePointData>
                     ((UObject *)pUVar8,pUVar10,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_1498a8975:
  pUVar11 = (UPCGMetadata *)0x0;
  local_90 = (UPCGMetadata *)(**(code **)(param_2->_padding_ + 800))(param_2);
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
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_110 = param_2;
  (**(code **)(pUVar9->_padding_ + 0x468))(pUVar9);
  if ((local_118 != (UPCGDifferenceData *)0x0) && ((char)local_108 != '\0')) {
    (**(code **)(pUVar9->_padding_ + 0x470))(pUVar9);
  }
  pUVar4 = (UPCGMetadata *)pUVar9->_padding_;
  if ((this->bDiffMetadata != false) && (pUVar4 != (UPCGMetadata *)0x0)) {
    pUVar11 = FPCGContext::NewObject_AnyThread<UPCGMetadata>(param_1);
    local_98 = *(code **)((TVar2.DebugPtr)->_padding_ + 0x450);
    local_d8 = TVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    local_d0 = 0;
    local_c8 = 0x10101;
    local_c0 = (**(code **)((TVar2.DebugPtr)->_padding_ + 800))(TVar2.DebugPtr);
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
    local_a0 = 0;
    (*local_98)(TVar2.DebugPtr,&local_d8,pUVar11);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_a8,(int)local_a0);
    if (local_a8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  EVar7 = (**(code **)(param_2->_padding_ + 0x640))(param_2,1);
  local_78.NumIterations = (**(code **)(param_2->_padding_ + 0x488))(param_2);
  local_60.RangeFunc.SourceMetadata = local_90;
  pFVar12 = &param_1->AsyncState;
  if (param_1 == (FPCGContext *)0x0) {
    pFVar12 = (FPCGAsyncState *)0x0;
  }
  local_88.TargetData = pUVar9;
  local_80.TargetData = pUVar9;
  local_78.TargetData = pUVar9;
  local_78.SourceData = param_2;
  local_78.PropertiesToAllocate = EVar7 | (MetadataEntry|Density);
  local_60.RangeFunc.__this = this;
  local_60.RangeFunc.TempDiffMetadata = pUVar11;
  local_60.RangeFunc.OutMetadata = pUVar4;
  local_60.SourceData = param_2;
  local_60.TargetData = pUVar9;
  bVar6 = FPCGAsync::
          AsyncProcessingRangeEx<_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_1>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_2>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_3>_&,_FPCGSpatialDataProcessing::SampleBasedRangeProcessing<256,_UPCGDifferenceData::CreateBasePointData_::__l2::<lambda_1>_&>_::__l2::<lambda_4>_&>
                    (pFVar12,local_78.NumIterations,&local_78,&local_60,&local_80,&local_88,false,
                     0x100,false);
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3304061870582792308>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialDataTpl.h"
                         ,0x74,
                         "FPCGAsync::AsyncProcessingRangeEx(AsyncState, NumIterations, Initialize, ProcessRange, MoveDataRange, Finished, false, ChunkSize, false)"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar9 = (UPCGBasePointData *)(*pcVar5)();
    return pUVar9;
  }
  if (5 < (byte)LogPCG._0_1_) {
    (**(code **)(param_2->_padding_ + 0x488))(param_2);
    (**(code **)(pUVar9->_padding_ + 0x488))(pUVar9);
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
  return pUVar9;
}

// CreatePointArrayData @ 1498ad7d0

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

UPCGPointArrayData * __thiscall
UPCGDifferenceData::CreatePointArrayData
          (UPCGDifferenceData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGSpatialData *pUVar2;
  UPCGBasePointData *pUVar3;
  UPCGPointArrayData *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId239,"UPCGDifferenceData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
               ,0xef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId239);
  }
  pUVar2 = (this->Source).field0_0x0.DebugPtr;
  local_27 = 0;
  local_23 = 0;
  local_21 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  pUVar3 = (UPCGBasePointData *)(**(code **)(pUVar2->_padding_ + 0x3b8))(pUVar2,param_1,&local_58);
  local_78.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_78.Data.AllocatorInstance.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.Data.AllocatorInstance.Data);
  }
  pUVar4 = (UPCGPointArrayData *)
           CreateBasePointData(this,param_1,pUVar3,(TSubclassOf<UPCGBasePointData>)&local_78);
  if (pUVar4 == (UPCGPointArrayData *)0x0) {
    pUVar4 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar5 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<UPCGPointArrayData>(&local_78);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_68,(UPCGBasePointData *)pUVar4);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar4;
}

// CreatePointData @ 1498ae960

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

UPCGPointData * __thiscall
UPCGDifferenceData::CreatePointData(UPCGDifferenceData *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGSpatialData *pUVar2;
  UPCGBasePointData *pUVar3;
  UPCGPointData *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId230,"UPCGDifferenceData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
               ,0xe6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId230);
  }
  pUVar2 = (this->Source).field0_0x0.DebugPtr;
  local_27 = 0;
  local_23 = 0;
  local_21 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  pUVar3 = (UPCGBasePointData *)(**(code **)(pUVar2->_padding_ + 0x3b0))(pUVar2,param_1,&local_58);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_78.Data.AllocatorInstance.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.Data.AllocatorInstance.Data);
  }
  pUVar4 = (UPCGPointData *)
           CreateBasePointData(this,param_1,pUVar3,(TSubclassOf<UPCGBasePointData>)&local_78);
  if (pUVar4 == (UPCGPointData *)0x0) {
    pUVar4 = (UPCGPointData *)0x0;
  }
  else {
    pUVar5 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<UPCGPointData>(&local_78);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_68,(UPCGBasePointData *)pUVar4);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar4;
}

// FindFirstConcreteShapeFromNetwork @ 1498b3470

UPCGSpatialData * __thiscall
UPCGDifferenceData::FindFirstConcreteShapeFromNetwork(UPCGDifferenceData *this)

{
  UPCGSpatialData *pUVar1;
  
  pUVar1 = (this->Source).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGSpatialData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498b347f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UPCGSpatialData *)(**(code **)(pUVar1->_padding_ + 0x430))();
    return pUVar1;
  }
  return (UPCGSpatialData *)0x0;
}

// GetBounds @ 1498b55d0

TBox<double> * __thiscall
UPCGDifferenceData::GetBounds(UPCGDifferenceData *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)(((this->Source).field0_0x0.DebugPtr)->_padding_ + 0x388))();
  return __return_storage_ptr__;
}

// GetDataType @ 1498b83b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGDifferenceData::GetDataType(UPCGDifferenceData *this)

{
  return Composite;
}

// GetDataTypeId @ 1498b8620

FPCGDataTypeBaseId * __thiscall UPCGDifferenceData::GetDataTypeId(UPCGDifferenceData *this)

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

// GetDimension @ 1498b9980

int __thiscall UPCGDifferenceData::GetDimension(UPCGDifferenceData *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498b998a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->Source).field0_0x0.DebugPtr)->_padding_ + 0x380))();
  return iVar1;
}

// GetPrivateStaticClass @ 1498bc290

UClass * __cdecl UPCGDifferenceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDifferenceData",
               &Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton,
               StaticRegisterNativesUPCGDifferenceData,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDifferenceData>,
               InternalVTableHelperCtorCaller<UPCGDifferenceData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDifferenceData.InnerSingleton;
}

// GetStrictBounds @ 1498c7580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
UPCGDifferenceData::GetStrictBounds(UPCGDifferenceData *this,TBox<double> *__return_storage_ptr__)

{
  UPCGSpatialData *pUVar1;
  double dVar2;
  double *pdVar3;
  undefined1 auStack_68 [32];
  double local_48 [6];
  undefined1 local_18;
  undefined4 uStack_17;
  undefined2 uStack_13;
  undefined1 uStack_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((this->Difference).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
    pUVar1 = (this->Source).field0_0x0.DebugPtr;
    pdVar3 = (double *)(**(code **)(pUVar1->_padding_ + 0x398))(pUVar1,local_48);
  }
  else {
    local_18 = 0;
    uStack_17 = 0;
    uStack_13 = 0;
    uStack_11 = 0;
    pdVar3 = local_48;
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_48[2] = 0.0;
    local_48[3] = 0.0;
    local_48[4] = 0.0;
    local_48[5] = 0.0;
  }
  dVar2 = pdVar3[1];
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar3;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
  dVar2 = pdVar3[3];
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = pdVar3[2];
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
  dVar2 = pdVar3[5];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = pdVar3[4];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
  *(double *)&__return_storage_ptr__->IsValid = pdVar3[6];
  return __return_storage_ptr__;
}

// HasNonTrivialTransform @ 1498ca570

bool __thiscall UPCGDifferenceData::HasNonTrivialTransform(UPCGDifferenceData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSource()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0xe0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001498ca5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(((this->Source).field0_0x0.DebugPtr)->_padding_ + 0x3e0))();
  return (bool)uVar3;
}

// Initialize @ 1498cb6f0

void __thiscall UPCGDifferenceData::Initialize(UPCGDifferenceData *this,UPCGSpatialData *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UPCGSpatialData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Source).field0_0x0.DebugPtr = param_1;
  this->_padding_ = (longlong)(param_1->TargetActor).WeakPtr;
  return;
}

// InitializeTargetMetadata @ 1498cfa50

void __thiscall
UPCGDifferenceData::InitializeTargetMetadata
          (UPCGDifferenceData *this,FPCGInitializeFromDataParams *param_1,UPCGMetadata *param_2)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UPCGSpatialData_const_>_u_0 *pTVar3;
  TObjectPtr<UPCGSpatialData_const_>_u_0 local_48;
  undefined8 local_40;
  void *local_28;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  int local_10;
  
  if (param_1->bInheritMetadata == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.bInheritMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0x18e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (UPCGMetadata *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetadataToInitialize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,399,L"");
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
              ((FPCGInitializeFromDataParams *)&local_48.ObjectPtr,param_1);
    local_40 = 0;
    pTVar3 = &(param_1->SourceOverride).field0_0x0;
    if ((param_1->SourceOverride).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
      pTVar3 = &(this->Source).field0_0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pTVar3->DebugPtr != (UPCGSpatialData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pTVar3->DebugPtr);
    }
    local_48.DebugPtr = pTVar3->DebugPtr;
    (**(code **)((local_48.DebugPtr)->_padding_ + 0x450))(local_48.DebugPtr,&local_48,param_2);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_18,local_10);
    if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  UPCGMetadata::AddAttributes(param_2,(UPCGMetadata *)this->_padding_);
  return;
}

// K2_AddDifference @ 1498d1290

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
UPCGDifferenceData::K2_AddDifference(UPCGDifferenceData *this,UPCGSpatialData *param_1)

{
  FPCGContext *pFVar1;
  
  pFVar1 = UPCGBlueprintBaseElement::ResolveContext();
  AddDifference(this,pFVar1,param_1);
  return;
}

// SamplePoint @ 1498d8930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGDifferenceData::SamplePoint
          (UPCGDifferenceData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  UPCGSpatialData *pUVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStackY_258 [32];
  FPCGPoint local_208;
  FPCGPoint local_138;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSource()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                         ,0xbd,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  dVar4 = _UNK_150689688;
  dVar3 = ___xmm_3ff00000000000003ff0000000000000;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pUVar1 = (this->Source).field0_0x0.DebugPtr;
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
  local_138.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_138.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_138.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_138.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_138.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar10,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar9);
  local_138.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_138.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_138.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_138.BoundsMax.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  local_138.BoundsMax.field0_0x0._12_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_138.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_138.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_138.Color.field0_0x0._s_0.Y = _UNK_150689688;
  local_138.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44(local_138.BoundsMax.field0_0x0._12_4_ ^ uVar10,
                        local_138.BoundsMax.field0_0x0._8_4_ ^ uVar9);
  local_138.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  local_138.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_138.BoundsMin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar10,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar9);
  local_138.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_138.Color.field0_0x0._s_0.W = _UNK_150689688;
  cVar7 = (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,param_1,param_2,&local_138);
  bVar5 = false;
  if (cVar7 != '\0') {
    local_208.Density = 1.0;
    local_208.Steepness = 0.5;
    local_208.Seed = 0;
    local_208.MetadataEntry = -1;
    (param_3->Transform).Rotation.XY.m128d_f64[0] = local_138.Transform.Rotation.XY.m128d_f64[0];
    (param_3->Transform).Rotation.XY.m128d_f64[1] = local_138.Transform.Rotation.XY.m128d_f64[1];
    (param_3->Transform).Rotation.ZW.m128d_f64[0] = local_138.Transform.Rotation.ZW.m128d_f64[0];
    (param_3->Transform).Rotation.ZW.m128d_f64[1] = local_138.Transform.Rotation.ZW.m128d_f64[1];
    (param_3->Transform).Translation.XY.m128d_f64[0] =
         local_138.Transform.Translation.XY.m128d_f64[0];
    (param_3->Transform).Translation.XY.m128d_f64[1] =
         local_138.Transform.Translation.XY.m128d_f64[1];
    (param_3->Transform).Translation.ZW.m128d_f64[0] =
         local_138.Transform.Translation.ZW.m128d_f64[0];
    (param_3->Transform).Translation.ZW.m128d_f64[1] =
         local_138.Transform.Translation.ZW.m128d_f64[1];
    (param_3->Transform).Scale3D.XY.m128d_f64[0] = local_138.Transform.Scale3D.XY.m128d_f64[0];
    (param_3->Transform).Scale3D.XY.m128d_f64[1] = local_138.Transform.Scale3D.XY.m128d_f64[1];
    (param_3->Transform).Scale3D.ZW.m128d_f64[0] = local_138.Transform.Scale3D.ZW.m128d_f64[0];
    (param_3->Transform).Scale3D.ZW.m128d_f64[1] = local_138.Transform.Scale3D.ZW.m128d_f64[1];
    *(ulonglong *)&param_3->Density = CONCAT44(local_138._100_4_,local_138.Density);
    (param_3->BoundsMin).field0_0x0._s_0.X = local_138.BoundsMin.field0_0x0._s_0.X;
    local_208.Color.field0_0x0._s_0.X = dVar3;
    local_208.Color.field0_0x0._s_0.Y = dVar4;
    (param_3->BoundsMin).field0_0x0._s_0.Y = local_138.BoundsMin.field0_0x0._s_0.Y;
    (param_3->BoundsMin).field0_0x0._s_0.Z = local_138.BoundsMin.field0_0x0._s_0.Z;
    (param_3->BoundsMax).field0_0x0._s_0.X =
         (double)CONCAT44(local_138.BoundsMax.field0_0x0._4_4_,local_138.BoundsMax.field0_0x0._0_4_)
    ;
    (param_3->BoundsMax).field0_0x0._s_0.Y =
         (double)CONCAT44(local_138.BoundsMax.field0_0x0._12_4_,local_138.BoundsMax.field0_0x0._8_4_
                         );
    (param_3->BoundsMax).field0_0x0._s_0.Z = local_138.BoundsMax.field0_0x0._s_0.Z;
    param_3->_padding_ = local_138._padding_;
    (param_3->Color).field0_0x0._s_0.X = local_138.Color.field0_0x0._s_0.X;
    (param_3->Color).field0_0x0._s_0.Y = local_138.Color.field0_0x0._s_0.Y;
    (param_3->Color).field0_0x0._s_0.Z = local_138.Color.field0_0x0._s_0.Z;
    (param_3->Color).field0_0x0._s_0.W = local_138.Color.field0_0x0._s_0.W;
    param_3->Steepness = local_138.Steepness;
    param_3->Seed = local_138.Seed;
    param_3->MetadataEntry = local_138.MetadataEntry;
    pUVar1 = (this->Difference).field0_0x0.DebugPtr;
    local_208.Color.field0_0x0._s_0.Z = dVar3;
    local_208.Color.field0_0x0._s_0.W = dVar4;
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
    local_208.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
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
    local_208.BoundsMin.field0_0x0._s_0.Y =
         (double)CONCAT44(local_208.BoundsMax.field0_0x0._12_4_ ^ uVar10,
                          local_208.BoundsMax.field0_0x0._8_4_ ^ uVar9);
    local_208.BoundsMin.field0_0x0._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar10,
                          UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar9);
    local_208.BoundsMin.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                >> 0x20) ^ uVar10,
                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar9);
    local_208.BoundsMax.field0_0x0._0_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
    local_208.BoundsMax.field0_0x0._4_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
    if ((pUVar1 == (UPCGSpatialData *)0x0) ||
       (cVar7 = (**(code **)(pUVar1->_padding_ + 0x3c0))(pUVar1,param_1,param_2,&local_208),
       cVar7 == '\0')) {
      bVar5 = true;
    }
    else {
      if (this->DensityFunction == Binary) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = local_138.Density - local_208.Density;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
      }
      param_3->Density = fVar8;
      if ((((this->bDiffMetadata != false) && (param_4 != (UPCGMetadata *)0x0)) && (0.0 < fVar8)) &&
         (local_208.MetadataEntry != -1)) {
        UPCGMetadata::MergePointAttributesSubset
                  (param_4,&local_138,param_4,
                   (UPCGMetadata *)((this->Source).field0_0x0.DebugPtr)->_padding_,&local_208,
                   param_4,(UPCGMetadata *)((this->Difference).field0_0x0.DebugPtr)->_padding_,
                   param_3,Sub);
      }
      bVar5 = 0.0 < param_3->Density;
    }
  }
  return bVar5;
}

// SetDensityFunction @ 1498defa0

void __thiscall
UPCGDifferenceData::SetDensityFunction
          (UPCGDifferenceData *this,EPCGDifferenceDensityFunction param_1)

{
  UPCGUnionData *pUVar1;
  EPCGUnionDensityFunction EVar2;
  
  pUVar1 = (this->DifferencesUnion).field0_0x0.DebugPtr;
  this->DensityFunction = param_1;
  if (pUVar1 != (UPCGUnionData *)0x0) {
    if (param_1 == ClampedSubstraction) {
      pUVar1->DensityFunction = ClampedAddition;
      return;
    }
    EVar2 = Maximum;
    if (param_1 == Binary) {
      EVar2 = Binary;
    }
    pUVar1->DensityFunction = EVar2;
  }
  return;
}

// StaticRegisterNativesUPCGDifferenceData @ 1498f6850

void __cdecl UPCGDifferenceData::StaticRegisterNativesUPCGDifferenceData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPCGDifferenceData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VisitDataNetwork @ 1498f9c40

void __thiscall
UPCGDifferenceData::VisitDataNetwork
          (UPCGDifferenceData *this,TFunctionRef<void___cdecl(UPCGData_const_*)> *param_1)

{
  UPCGSpatialData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->Source).field0_0x0.DebugPtr == (UPCGSpatialData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSource()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0x7d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->Source).field0_0x0.DebugPtr;
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined8 *)&param_1->field_0x8;
  (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,&local_28);
  pUVar1 = (this->Difference).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGSpatialData *)0x0) {
    local_18 = *(undefined8 *)param_1;
    local_10 = *(undefined8 *)&param_1->field_0x8;
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,&local_18);
  }
  return;
}

// execInitialize @ 1498fdbb0

void __cdecl UPCGDifferenceData::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDifferenceData.cpp"
                       ,0x27,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)(param_1 + 7) = pUVar3;
  *(undefined8 *)&param_1[1].field_0x20 = *(undefined8 *)&pUVar3[1].field_0x20;
  return;
}

// execK2_AddDifference @ 1498fe8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGDifferenceData::execK2_AddDifference(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGSpatialData *pUVar2;
  FPCGContext *pFVar3;
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
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = UPCGBlueprintBaseElement::ResolveContext();
  AddDifference((UPCGDifferenceData *)param_1,pFVar3,pUVar2);
  return;
}

// execSetDensityFunction @ 1498ff990

void __cdecl
UPCGDifferenceData::execSetDensityFunction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined1 uVar3;
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
  lVar2 = *(longlong *)&param_1[7].field_0x10;
  param_1[7].field_0x18 = local_res8[0];
  if (lVar2 != 0) {
    if (local_res8[0] == '\x01') {
      *(undefined1 *)(lVar2 + 0x129) = 1;
      return;
    }
    uVar3 = 0;
    if (local_res8[0] == '\x02') {
      uVar3 = 2;
    }
    *(undefined1 *)(lVar2 + 0x129) = uVar3;
  }
  return;
}

