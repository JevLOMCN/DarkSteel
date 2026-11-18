// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 148aa9ee0

UClass * __cdecl UWorldPartitionRuntimeCellDataSpatialHash::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellDataSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellDataSpatialHash,0x170,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellDataSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataSpatialHash>,local_res8,
               UWorldPartitionRuntimeCellData::StaticClass,UWorldPartitionRuntimeCell::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton;
}

// UWorldPartitionRuntimeCellDataSpatialHash @ 148ab5810

UWorldPartitionRuntimeCellDataSpatialHash * __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::UWorldPartitionRuntimeCellDataSpatialHash
          (UWorldPartitionRuntimeCellDataSpatialHash *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataSpatialHash__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CachedSourcePriorityWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSourcePriorityWeights).ArrayNum = 0;
  (this->CachedSourcePriorityWeights).ArrayMax = 0;
  (this->CachedSourceSquaredDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSourceSquaredDistances).ArrayNum = 0;
  (this->CachedSourceSquaredDistances).ArrayMax = 0;
  (this->CachedInstersectingShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedInstersectingShapes).ArrayNum = 0;
  (this->CachedInstersectingShapes).ArrayMax = 0;
  return this;
}

// UWorldPartitionRuntimeCellDataSpatialHash @ 148ab5890

UWorldPartitionRuntimeCellDataSpatialHash * __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::UWorldPartitionRuntimeCellDataSpatialHash
          (UWorldPartitionRuntimeCellDataSpatialHash *this,FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCellData::UWorldPartitionRuntimeCellData
            ((UWorldPartitionRuntimeCellData *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataSpatialHash__6B_;
  this->Extent = 0.0;
  (this->CachedSourcePriorityWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSourcePriorityWeights).ArrayNum = 0;
  (this->CachedSourcePriorityWeights).ArrayMax = 0;
  (this->CachedSourceSquaredDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSourceSquaredDistances).ArrayNum = 0;
  (this->CachedSourceSquaredDistances).ArrayMax = 0;
  (this->CachedInstersectingShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedInstersectingShapes).ArrayNum = 0;
  (this->CachedInstersectingShapes).ArrayMax = 0;
  this->CachedMinBlockOnSlowStreamingRatio2D = 1.7976931348623157e+308;
  this->CachedMinSquareDistanceToBlockingSource2D = 1.7976931348623157e+308;
  this->CachedMinSlowStreamingRatio2D = 1.7976931348623157e+308;
  this->CachedMinSquareDistanceToSource2D = 1.7976931348623157e+308;
  return this;
}

// ~UWorldPartitionRuntimeCellDataSpatialHash @ 148ab7580

void __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::~UWorldPartitionRuntimeCellDataSpatialHash
          (UWorldPartitionRuntimeCellDataSpatialHash *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellDataSpatialHash__6B_;
  pFVar1 = (this->CachedInstersectingShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSourceSquaredDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSourcePriorityWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeCellData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AppendStreamingSourceInfo @ 148abfdb0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::AppendStreamingSourceInfo
          (UWorldPartitionRuntimeCellDataSpatialHash *this,FWorldPartitionStreamingSource *param_1,
          FSphericalSector *param_2,FWorldPartitionStreamingContext *param_3)

{
  UWorldPartitionRuntimeCellData::AppendStreamingSourceInfo
            ((UWorldPartitionRuntimeCellData *)this,param_1,param_2,param_3,false);
  return;
}

// AppendStreamingSourceInfo @ 148abfdd0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::AppendStreamingSourceInfo
          (UWorldPartitionRuntimeCellDataSpatialHash *this,FWorldPartitionStreamingSource *param_1,
          FSphericalSector *param_2,FWorldPartitionStreamingContext *param_3,bool param_4)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSphericalSector,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FSphericalSector *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  double dVar15;
  float local_18 [2];
  double local_10;
  
  UWorldPartitionRuntimeCellData::AppendStreamingSourceInfo
            ((UWorldPartitionRuntimeCellData *)this,param_1,param_2,param_3,param_4);
  dVar9 = __real_3ff0000000000000;
  dVar15 = (this->Position).field0_0x0._s_0.X - (param_2->Center).field0_0x0._s_0.X;
  dVar13 = (this->Position).field0_0x0._s_0.Y - (param_2->Center).field0_0x0._s_0.Y;
  local_10 = dVar15 * dVar15 + dVar13 * dVar13;
  if ((param_4) && (param_1->bBlockOnSlowLoading != false)) {
    dVar13 = this->CachedMinSquareDistanceToBlockingSource2D;
    if (local_10 <= this->CachedMinSquareDistanceToBlockingSource2D) {
      dVar13 = local_10;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar13;
    auVar14 = sqrtpd(in_XMM1,auVar14);
    this->CachedMinSquareDistanceToBlockingSource2D = dVar13;
    in_XMM1._8_8_ = auVar14._8_8_;
    dVar13 = auVar14._0_8_ * (dVar9 / param_2->Radius);
    if (this->CachedMinBlockOnSlowStreamingRatio2D <= dVar13) {
      dVar13 = this->CachedMinBlockOnSlowStreamingRatio2D;
    }
    in_XMM1._0_8_ = dVar13;
    this->CachedMinBlockOnSlowStreamingRatio2D = dVar13;
  }
  pTVar2 = &this->CachedSourceSquaredDistances;
  dVar13 = this->CachedMinSquareDistanceToSource2D;
  if (local_10 <= this->CachedMinSquareDistanceToSource2D) {
    dVar13 = local_10;
  }
  this->CachedMinSquareDistanceToSource2D = dVar13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar13;
  auVar14 = sqrtpd(in_XMM1,auVar8);
  dVar13 = auVar14._0_8_ * (dVar9 / param_2->Radius);
  if (this->CachedMinSlowStreamingRatio2D <= dVar13) {
    dVar13 = this->CachedMinSlowStreamingRatio2D;
  }
  this->CachedMinSlowStreamingRatio2D = dVar13;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 <
      pFVar5 + (longlong)(this->CachedSourceSquaredDistances).ArrayMax * 8)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar11 = (this->CachedSourceSquaredDistances).ArrayNum;
  piVar1 = &(this->CachedSourceSquaredDistances).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->CachedSourceSquaredDistances).ArrayNum = iVar11 + 1;
  pTVar3 = &this->CachedSourcePriorityWeights;
  *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_10;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  local_18[0] = __real_3f800000 - (float)param_1->Priority * __real_3b808081;
  if ((pFVar5 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar5 + (longlong)(this->CachedSourcePriorityWeights).ArrayMax * 4)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar11 = (this->CachedSourcePriorityWeights).ArrayNum;
  piVar1 = &(this->CachedSourcePriorityWeights).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->CachedSourcePriorityWeights).ArrayNum = iVar11 + 1;
  pTVar4 = &this->CachedInstersectingShapes;
  *(float *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_18[0];
  pFVar6 = (FSphericalSector *)(pTVar4->AllocatorInstance).Data;
  if ((pFVar6 <= param_2) && (param_2 < pFVar6 + (this->CachedInstersectingShapes).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar11 = (this->CachedInstersectingShapes).ArrayNum;
  piVar1 = &(this->CachedInstersectingShapes).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->CachedInstersectingShapes).ArrayNum = iVar11 + 1;
  dVar13 = (param_2->Center).field0_0x0._s_0.Y;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  lVar12 = (longlong)iVar11 * 0x40;
  *(double *)(pFVar5 + lVar12) = (param_2->Center).field0_0x0._s_0.X;
  *(double *)(pFVar5 + lVar12 + 8) = dVar13;
  dVar13 = param_2->Radius;
  *(double *)(pFVar5 + lVar12 + 0x10) = (param_2->Center).field0_0x0._s_0.Z;
  *(double *)(pFVar5 + lVar12 + 0x10 + 8) = dVar13;
  dVar13 = (param_2->Axis).field0_0x0._s_0.Y;
  *(double *)(pFVar5 + lVar12 + 0x20) = (param_2->Axis).field0_0x0._s_0.X;
  *(double *)(pFVar5 + lVar12 + 0x20 + 8) = dVar13;
  dVar13 = param_2->Angle;
  *(double *)(pFVar5 + lVar12 + 0x30) = (param_2->Axis).field0_0x0._s_0.Z;
  *(double *)(pFVar5 + lVar12 + 0x30 + 8) = dVar13;
  return;
}

// ComputeSourceToCellAngleFactor @ 148ac1fb0

float __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::ComputeSourceToCellAngleFactor
          (UWorldPartitionRuntimeCellDataSpatialHash *this,FSphericalSector *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TVector<double>_u_0 *pTVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float _Y;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  undefined1 local_138 [24];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  
  fVar8 = __real_3f800000;
  dVar4 = __real_3ff0000000000000;
  fVar13 = 0.0;
  _Y = GRuntimeSpatialHashCellToSourceAngleContributionToCellImportance;
  if (__real_3f800000 <= GRuntimeSpatialHashCellToSourceAngleContributionToCellImportance) {
    _Y = __real_3f800000;
  }
  if (_Y <= 0.0) {
    _Y = 0.0;
  }
  if (__real_322bcc77 < (float)((uint)_Y & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    dVar1 = (this->Position).field0_0x0._s_0.X;
    dVar12 = (this->Position).field0_0x0._s_0.Y;
    fVar7 = this->Extent;
    dVar10 = (double)fVar7;
    local_b8 = 1;
    dVar2 = (param_1->Center).field0_0x0._s_0.X;
    local_e8._s_0.Y = dVar12 - dVar10;
    local_e8._s_0.Z = 0.0;
    dVar11 = dVar10 + dVar1;
    local_c0 = 0;
    local_e8._s_0.X = dVar1 - dVar10;
    dVar12 = dVar12 + dVar10;
    local_188._s_0.Z = 0.0;
    dVar1 = (param_1->Center).field0_0x0._s_0.Y;
    local_170._s_0.X = param_1->Radius * (param_1->Axis).field0_0x0._s_0.X;
    local_170._s_0.Y = param_1->Radius * (param_1->Axis).field0_0x0._s_0.Y;
    local_158._s_0.X = dVar2 + local_170._s_0.X;
    local_158._s_0.Y = dVar1 + local_170._s_0.Y;
    local_158._s_0.Z = 0.0;
    local_170._s_0.Z = 0.0;
    if (local_170._s_0.X == 0.0) {
      local_1a0._s_0.X = __real_47eff933c0000000;
    }
    else {
      local_1a0._s_0.X = __real_3ff0000000000000 / local_170._s_0.X;
    }
    if (local_170._s_0.Y == 0.0) {
      local_1a0._s_0.Y = __real_47eff933c0000000;
    }
    else {
      local_1a0._s_0.Y = __real_3ff0000000000000 / local_170._s_0.Y;
    }
    local_1a0._s_0.Z = __real_47eff933c0000000;
    local_188._s_0.X = dVar2;
    local_188._s_0.Y = dVar1;
    local_d0 = dVar11;
    local_c8 = dVar12;
    bVar5 = FMath::LineBoxIntersection<double>
                      ((TBox<double> *)&local_e8._s_0,(TVector<double> *)&local_188._s_0,
                       (TVector<double> *)&local_158._s_0,(TVector<double> *)&local_170._s_0,
                       (TVector<double> *)&local_1a0._s_0);
    if (!bVar5) {
      dVar10 = (param_1->Axis).field0_0x0._s_0.X;
      dVar3 = (param_1->Axis).field0_0x0._s_0.Y;
      dVar9 = dVar3 * dVar3 + dVar10 * dVar10;
      if (dVar9 <= __real_3e45798ee0000000) {
        dVar10 = 0.0;
        dVar3 = 0.0;
      }
      else {
        dVar9 = dVar4 / SQRT(dVar9);
        dVar10 = dVar10 * dVar9;
        dVar3 = dVar3 * dVar9;
      }
      pTVar6 = (TVector<double>_u_0 *)local_138;
      local_f8 = (this->Position).field0_0x0._s_0.X;
      local_f0 = (this->Position).field0_0x0._s_0.Y;
      local_138._8_8_ = (undefined8)(float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
      local_120 = dVar12;
      local_138._0_8_ = (double)local_138._8_8_ + local_f8;
      local_118 = dVar11;
      local_138._8_8_ = (double)local_138._8_8_ + local_f0;
      local_108 = dVar11;
      local_100 = dVar12;
      local_138._16_8_ = local_138._0_8_;
      local_110 = (double)local_138._8_8_;
      do {
        dVar9 = (pTVar6->_s_0).X - dVar2;
        dVar11 = pTVar6->XYZ[1] - dVar1;
        dVar12 = dVar11 * dVar11 + dVar9 * dVar9;
        if (dVar12 <= __real_3e45798ee0000000) {
          dVar11 = 0.0;
          dVar9 = 0.0;
        }
        else {
          dVar12 = dVar4 / SQRT(dVar12);
          dVar11 = dVar11 * dVar12;
          dVar9 = dVar9 * dVar12;
        }
        pTVar6 = (TVector<double>_u_0 *)(pTVar6->XYZ + 2);
        fVar7 = (float)(dVar10 * dVar9 + dVar3 * dVar11);
        if (fVar7 <= fVar13) {
          fVar7 = fVar13;
        }
        fVar13 = fVar7;
      } while (pTVar6 != &local_e8);
      fVar7 = __real_bf800000;
      if ((__real_bf800000 <= fVar13) && (fVar7 = fVar13, fVar8 <= fVar13)) {
        fVar7 = fVar8;
      }
      fVar13 = acosf(fVar7);
      fVar13 = (float)((uint)(fVar13 * __real_3ea2f983) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    if (fVar8 <= fVar13) {
      fVar13 = fVar8;
    }
    if (fVar13 <= __real_3c8efa35) {
      fVar13 = __real_3c8efa35;
    }
    fVar8 = powf(fVar13,_Y);
  }
  return fVar8;
}

// GetCellBounds @ 148acb2b0

TBox<double> * __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::GetCellBounds
          (UWorldPartitionRuntimeCellDataSpatialHash *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  dVar1 = (this->Position).field0_0x0._s_0.X;
  dVar2 = (this->Position).field0_0x0._s_0.Y;
  dVar3 = (this->Position).field0_0x0._s_0.Z;
  dVar6 = (double)this->Extent;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3 - dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar3 + dVar6;
  lVar5 = this->_padding_;
  __return_storage_ptr__->IsValid = '\x01';
  lVar4 = (**(code **)(lVar5 + 0x2e8))();
  lVar5 = this->_padding_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = *(double *)(lVar4 + 0x10);
  lVar5 = (**(code **)(lVar5 + 0x2e8))(this);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = *(double *)(lVar5 + 0x28);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148acf7b0

UClass * __cdecl UWorldPartitionRuntimeCellDataSpatialHash::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeCellDataSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeCellDataSpatialHash,0x170,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeCellDataSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeCellDataSpatialHash>,local_res8,
               UWorldPartitionRuntimeCellData::StaticClass,UWorldPartitionRuntimeCell::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellDataSpatialHash.InnerSingleton;
}

// GetStreamingBounds @ 148ad1310

TBox<double> * __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::GetStreamingBounds
          (UWorldPartitionRuntimeCellDataSpatialHash *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x2f0))();
  return __return_storage_ptr__;
}

// IsDebugShown @ 148ad4200

bool __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::IsDebugShown
          (UWorldPartitionRuntimeCellDataSpatialHash *this)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  wchar_t *_Str;
  FName local_res10;
  FString local_28;
  
  bVar7 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar1 = FWorldPartitionDebugHelper::IsDebugRuntimeHashGridShown((FName)this->_padding_);
  if (bVar1) {
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    iVar4 = FWorldPartitionDebugHelper::DebugCellNameFilter.ArrayNum;
    if (iVar4 != 0) {
      pFVar6 = FWorldPartitionDebugHelper::DebugCellNameFilter.AllocatorInstance.Data +
               (longlong)iVar4 * 0x10;
      FVar5 = FWorldPartitionDebugHelper::DebugCellNameFilter.AllocatorInstance;
      do {
        if (FWorldPartitionDebugHelper::DebugCellNameFilter.ArrayNum != iVar4) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if (FVar5.Data == pFVar6) break;
        if (*(int *)(FVar5.Data + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)FVar5.Data;
          if (_Str == (wchar_t *)0x0) goto LAB_148ad4295;
        }
        sVar3 = wcslen(_Str);
        iVar2 = ::FString::Find(&local_28,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
        if (iVar2 == -1) goto LAB_148ad4295;
        FVar5.Data = FVar5.Data + 0x10;
      } while( true );
    }
    bVar1 = true;
    bVar7 = true;
    goto LAB_148ad429c;
  }
  goto LAB_148ad429a;
LAB_148ad4295:
  bVar7 = true;
LAB_148ad429a:
  bVar1 = false;
LAB_148ad429c:
  if ((bVar7) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// MergeStreamingSourceInfo @ 148ad5110

void __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::MergeStreamingSourceInfo
          (UWorldPartitionRuntimeCellDataSpatialHash *this)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  
  iVar2 = (this->CachedSourceSquaredDistances).ArrayNum;
  if ((iVar2 != (this->CachedSourcePriorityWeights).ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count == CachedSourcePriorityWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeCellDataSpatialHash.cpp"
                         ,0x76,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((iVar2 != (this->CachedInstersectingShapes).ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count == CachedInstersectingShapes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeCellDataSpatialHash.cpp"
                         ,0x77,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->_padding_ = (longlong)this->CachedMinSquareDistanceToBlockingSource2D;
  this->_padding_ = (longlong)this->CachedMinSquareDistanceToSource2D;
  *(float *)&this->_padding_ = (float)this->CachedMinBlockOnSlowStreamingRatio2D;
  *(float *)&this->_padding_ = (float)this->CachedMinSlowStreamingRatio2D;
  if (iVar2 != 0) {
    uVar13 = 0;
    dVar4 = 0.0;
    dVar8 = 0.0;
    if (iVar2 < 1) {
      dVar7 = 0.0;
      dVar6 = 0.0;
    }
    else {
      lVar12 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar13 < (this->CachedSourcePriorityWeights).ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = uVar13 + 1;
        lVar1 = lVar12 * 4;
        lVar12 = lVar12 + 1;
        dVar4 = dVar4 + (double)*(float *)((this->CachedSourcePriorityWeights).AllocatorInstance.
                                           Data + lVar1);
      } while (lVar12 < iVar2);
      lVar12 = 0;
      dVar4 = __real_3ff0000000000000 / dVar4;
      uVar13 = 0;
      dVar7 = 0.0;
      dVar6 = 0.0;
      do {
        uVar11 = ~uVar13 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar13 < (this->CachedInstersectingShapes).ArrayNum) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar14 = ComputeSourceToCellAngleFactor
                           (this,(FSphericalSector *)
                                 ((this->CachedInstersectingShapes).AllocatorInstance.Data +
                                 (longlong)(int)uVar13 * 0x40));
        uVar10 = 0;
        if ((int)uVar13 < (this->CachedSourceSquaredDistances).ArrayNum) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar13 < (this->CachedSourcePriorityWeights).ArrayNum) {
          uVar10 = uVar11;
        }
        dVar5 = (double)fVar14 *
                *(double *)
                 ((this->CachedSourceSquaredDistances).AllocatorInstance.Data + lVar12 * 8) *
                (double)fVar14;
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar15 = (double)*(float *)((this->CachedSourcePriorityWeights).AllocatorInstance.Data +
                                   lVar12 * 4);
        dVar6 = dVar6 + dVar15 * dVar5 * dVar4;
        if ((uVar13 == 0) || ((dVar5 < dVar7 && (dVar8 <= dVar15)))) {
          dVar7 = dVar5;
          dVar8 = dVar15;
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar2);
    }
    if (dVar7 <= dVar6) {
      dVar6 = dVar7;
    }
    this->CachedSourceSortingDistance = dVar6;
  }
  return;
}

// ResetStreamingSourceInfo @ 148ad9e10

void __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::ResetStreamingSourceInfo
          (UWorldPartitionRuntimeCellDataSpatialHash *this,FWorldPartitionStreamingContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  *(undefined2 *)&this->_padding_ = 0xff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  *(undefined4 *)&this->_padding_ = 0x7f7fffff;
  *(undefined4 *)&this->_padding_ = 0x7f7fffff;
  if (param_1->bIsValid == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                       ,0xb1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)&this->_padding_ = param_1->UpdateStreamingStateEpoch;
  piVar1 = &(this->CachedSourcePriorityWeights).ArrayMax;
  (this->CachedSourcePriorityWeights).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CachedSourcePriorityWeights).AllocatorInstance,0,piVar1);
  }
  (this->CachedSourceSquaredDistances).ArrayNum = 0;
  if ((this->CachedSourceSquaredDistances).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CachedSourceSquaredDistances).AllocatorInstance,0,
               &(this->CachedSourceSquaredDistances).ArrayMax);
  }
  (this->CachedInstersectingShapes).ArrayNum = 0;
  if ((this->CachedInstersectingShapes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->CachedInstersectingShapes).AllocatorInstance,0,
               &(this->CachedInstersectingShapes).ArrayMax);
  }
  this->CachedMinBlockOnSlowStreamingRatio2D = 1.7976931348623157e+308;
  this->CachedMinSquareDistanceToBlockingSource2D = 1.7976931348623157e+308;
  this->CachedMinSlowStreamingRatio2D = 1.7976931348623157e+308;
  this->CachedMinSquareDistanceToSource2D = 1.7976931348623157e+308;
  return;
}

// SortCompare @ 148adb5f0

int __thiscall
UWorldPartitionRuntimeCellDataSpatialHash::SortCompare
          (UWorldPartitionRuntimeCellDataSpatialHash *this,UWorldPartitionRuntimeCellData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  
  if (param_1 != (UWorldPartitionRuntimeCellData *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      uVar3 = (uint)(byte)this->_padding_ - (uint)param_1->CachedMinSourcePriority;
      if (uVar3 == 0) {
        if (GRuntimeSpatialHashSortUsingCellExtent == false) {
          uVar3 = param_1->HierarchicalLevel - *(int *)((longlong)&this->_padding_ + 4);
        }
        else {
          uVar3 = (uint)(*(float *)&param_1[1]._padding_ - this->Extent);
        }
        if ((uVar3 == 0) &&
           ((GRuntimeSpatialHashSortUsingCellPriority == false ||
            (uVar3 = (int)this->_padding_ - param_1->Priority, uVar3 == 0)))) {
          dVar6 = this->CachedSourceSortingDistance - (double)param_1[1]._padding_;
          if (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            if (dVar6 < 0.0) {
              uVar3 = 0xffffffff;
              goto LAB_148adb6f4;
            }
          }
          else {
            dVar6 = this->CachedMinSquareDistanceToSource2D -
                    param_1[1].ContentBounds.Min.field0_0x0._s_0.Z;
            if (dVar6 < 0.0) {
              uVar3 = 0xffffffff;
              goto LAB_148adb6f4;
            }
          }
          uVar3 = (uint)(0.0 < dVar6);
        }
      }
LAB_148adb6f4:
      if (GRuntimeSpatialHashSortUsingCellPriority != false) {
        return uVar3;
      }
      if (uVar3 != 0) {
        return uVar3;
      }
      return (int)this->_padding_ - param_1->Priority;
    }
  }
  uVar4 = (ulonglong)(byte)this->_padding_ - (ulonglong)param_1->CachedMinSourcePriority;
  if (((uVar4 == 0) &&
      (iVar1 = param_1->HierarchicalLevel - *(int *)((longlong)&this->_padding_ + 4),
      uVar4 = (ulonglong)iVar1, iVar1 == 0)) &&
     (iVar1 = (int)this->_padding_ - param_1->Priority, uVar4 = (ulonglong)iVar1, iVar1 == 0)) {
    dVar6 = (double)this->_padding_ - param_1->CachedMinSpatialSortingPriority;
    if ((__real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (uVar4 = 1, (double)this->_padding_ < param_1->CachedMinSpatialSortingPriority)) {
      uVar4 = 0xffffffffffffffff;
    }
  }
  uVar5 = 1;
  if ((longlong)uVar4 < 1) {
    uVar5 = uVar4;
  }
  iVar1 = -1;
  if (uVar5 < 0x8000000000000000) {
    iVar1 = (int)uVar5;
  }
  return iVar1;
}

// StaticRegisterNativesUWorldPartitionRuntimeCellDataSpatialHash @ 148adb8c0

void __cdecl
UWorldPartitionRuntimeCellDataSpatialHash::
StaticRegisterNativesUWorldPartitionRuntimeCellDataSpatialHash(void)

{
  return;
}

