// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// FBevelOp @ 14cd4ebe0

FBevelOp * __thiscall FBevelOp::FBevelOp(FBevelOp *this)

{
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->bInferMaterialID = true;
  this->Subdivisions = 0;
  this->_padding_ = (longlong)&___7FBevelOp__6B_;
  this->BevelDistance = 1.0;
  this->RoundWeight = 1.0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MeshTopology).Object = (FGroupTopology *)0x0;
  (this->MeshTopology).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->BevelGroupEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BevelGroupEdges).ArrayNum = 0;
  (this->BevelGroupEdges).ArrayMax = 0;
  (this->BevelGroupFaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BevelGroupFaces).ArrayNum = 0;
  (this->BevelGroupFaces).ArrayMax = 0;
  this->SetMaterialID = 0;
  return this;
}

// ~FBevelOp @ 14cd52fa0

void __thiscall FBevelOp::~FBevelOp(FBevelOp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBevelOp__6B_;
  pFVar1 = (this->BevelGroupFaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BevelGroupEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// CalculateResult @ 14cd605d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBevelOp::CalculateResult(FBevelOp *this,FProgressCancel *param_1)

{
  TSharedPtr<UE::Geometry::FGroupTopology,1> *this_00;
  FDynamicMesh3 *this_01;
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  FGroupTopology *pFVar4;
  FGeometryError *pFVar5;
  undefined1 auStackY_1d8 [32];
  undefined4 local_1a8 [2];
  FGeometryError *local_1a0;
  undefined8 local_198;
  FGeometryWarning *local_190;
  undefined8 local_188;
  undefined4 local_180 [2];
  FGeometryError *local_178;
  undefined8 local_170;
  FGeometryWarning *local_168;
  undefined8 local_160;
  undefined1 local_158 [96];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((double)CONCAT44((uint)((ulonglong)this->BevelDistance >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(this->BevelDistance,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
      < __real_3f1a36e2e0000000) {
    return;
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar3 = FProgressCancel::Cancelled(param_1), bVar3)) {
    return;
  }
  this_01 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Geometry::FDynamicMesh3::Copy(this_01,(this->OriginalMesh).Object,true,true,true,true);
  local_158._48_4_ = 0;
  local_158._52_4_ = 0;
  local_158._28_4_ = this->SetMaterialID;
  local_158._32_8_ = (FProgressCancel *)0x0;
  local_158._40_8_ = (FScriptContainerElement *)0x0;
  local_158._0_8_ = this->BevelDistance;
  local_158._24_4_ = -(uint)(this->bInferMaterialID != false) & InferMaterialID_ConstantIfAmbiguous;
  local_158._16_8_ = this->RoundWeight;
  local_158._8_4_ = this->Subdivisions;
  this_00 = &this->MeshTopology;
  local_158._64_8_ = (FGeometryError *)0x0;
  local_158._72_4_ = 0;
  local_158._76_4_ = 0;
  local_158._80_8_ = (FGeometryWarning *)0x0;
  local_158._88_4_ = 0;
  local_158._92_4_ = 0;
  local_158._56_4_ = InProgress;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.NumBits = 0;
  local_e8.MaxBits = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  if ((this->BevelGroupEdges).ArrayNum < 1) {
    if ((this->BevelGroupFaces).ArrayNum < 1) {
      pFVar4 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                         (this_00);
      UE::Geometry::FMeshBevel::InitializeFromGroupTopology
                ((FMeshBevel *)local_158,(FDynamicMesh3 *)this->_padding_,pFVar4);
    }
    else {
      pFVar4 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                         (this_00);
      bVar3 = UE::Geometry::FMeshBevel::InitializeFromGroupTopologyFaces
                        ((FMeshBevel *)local_158,(FDynamicMesh3 *)this->_padding_,pFVar4,
                         &this->BevelGroupFaces);
      if (!bVar3) {
        local_1a0 = (FGeometryError *)0x0;
        local_198 = 0;
        local_190 = (FGeometryWarning *)0x0;
        local_188 = 0;
        local_1a8[0] = 4;
        (**(code **)(this->_padding_ + 0x10))(this,local_1a8);
        DestructItems<UE::Geometry::FGeometryWarning,int>(local_190,(int)local_188);
        if (local_190 != (FGeometryWarning *)0x0) {
          FMemory::Free(local_190);
        }
        DestructItems<UE::Geometry::FGeometryError,int>(local_1a0,(int)local_198);
        pFVar5 = local_1a0;
        goto LAB_14cd60898;
      }
    }
  }
  else {
    pFVar4 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                       (this_00);
    UE::Geometry::FMeshBevel::InitializeFromGroupTopologyEdges
              ((FMeshBevel *)local_158,(FDynamicMesh3 *)this->_padding_,pFVar4,
               &this->BevelGroupEdges);
  }
  UE::Geometry::FMeshBevel::Apply
            ((FMeshBevel *)local_158,(FDynamicMesh3 *)this->_padding_,
             (FDynamicMeshChangeTracker *)0x0);
  local_178 = (FGeometryError *)0x0;
  local_170 = 0;
  local_168 = (FGeometryWarning *)0x0;
  local_160 = 0;
  local_180[0] = 0;
  (**(code **)(this->_padding_ + 0x10))(this,local_180);
  DestructItems<UE::Geometry::FGeometryWarning,int>(local_168,(int)local_160);
  if (local_168 != (FGeometryWarning *)0x0) {
    FMemory::Free(local_168);
  }
  DestructItems<UE::Geometry::FGeometryError,int>(local_178,(int)local_170);
  pFVar5 = local_178;
LAB_14cd60898:
  if (pFVar5 != (FGeometryError *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  DestructItems<UE::Geometry::FMeshBevel::FBevelLoop,int>((FBevelLoop *)local_88.Data,(int)local_80)
  ;
  if ((FBevelLoop *)local_88.Data != (FBevelLoop *)0x0) {
    FMemory::Free(local_88.Data);
  }
  DestructItems<UE::Geometry::FMeshBevel::FBevelEdge,int>((FBevelEdge *)local_98.Data,(int)local_90)
  ;
  if ((FBevelEdge *)local_98.Data != (FBevelEdge *)0x0) {
    FMemory::Free(local_98.Data);
  }
  DestructItems<UE::Geometry::FMeshBevel::FBevelVertex,int>
            ((FBevelVertex *)local_a8.Data,(int)local_a0);
  if ((FBevelVertex *)local_a8.Data != (FBevelVertex *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  uVar2 = local_f0 >> 0x20;
  local_f0 = local_f0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_f8,0,(int *)((longlong)&local_f0 + 4));
  }
  local_c4 = 0;
  local_e8.NumBits = 0;
  local_c8 = 0xffffffff;
  if (0x80 < (uint)local_e8.MaxBits) {
    local_e8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e8,0);
  }
  if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_158._80_8_,local_158._88_4_);
  if ((FGeometryWarning *)local_158._80_8_ != (FGeometryWarning *)0x0) {
    FMemory::Free((void *)local_158._80_8_);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_158._64_8_,local_158._72_4_);
  if ((FGeometryError *)local_158._64_8_ != (FGeometryError *)0x0) {
    FMemory::Free((void *)local_158._64_8_);
  }
  if ((FScriptContainerElement *)local_158._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._40_8_);
  }
  return;
}

