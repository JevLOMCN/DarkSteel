// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 5

// FSimpleMeshProcessingBaseOp @ 14c946ed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSimpleMeshProcessingBaseOp * __thiscall
UE::Geometry::FSimpleMeshProcessingBaseOp::FSimpleMeshProcessingBaseOp
          (FSimpleMeshProcessingBaseOp *this,FDynamicMesh3 *param_1)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  FSimpleMeshProcessingBaseOp *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FSimpleMeshProcessingBaseOp_Geometry_UE__6B_;
  (this->PositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionBuffer).ArrayNum = 0;
  (this->PositionBuffer).ArrayMax = 0;
  FDynamicMesh3::Copy((FDynamicMesh3 *)this->_padding_,param_1,true,true,true,true);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PositionBuffer,
             *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24),Default);
  lVar4 = this->_padding_;
  uVar17 = 0;
  uVar18 = *(int *)(lVar4 + 0x24) + *(int *)(lVar4 + 0x20) * 0x200;
  if ((uVar18 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x28) - 1U))) {
    uVar17 = 1;
    uVar15 = 1;
    if ((int)uVar18 < 2) goto joined_r0x00014c946fb3;
    do {
      lVar8 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar5 = (*(undefined8 **)(lVar4 + 0x28))[uVar17 >> 9];
      if ((*(short *)(lVar8 + lVar5) != 0) && (*(short *)(lVar8 + lVar5) != -1)) break;
      uVar15 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar18);
  }
  uVar15 = (uint)uVar17;
joined_r0x00014c946fb3:
  do {
    if (uVar15 == uVar18) {
      return this;
    }
    while( true ) {
      uVar16 = (uint)uVar17;
      lVar5 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (uVar17 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar5 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      uVar15 = 0;
      if ((int)uVar16 < (this->PositionBuffer).ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FSimpleMeshProcessingBaseOp *)(*pcVar7)();
        return pFVar14;
      }
      pFVar6 = (this->PositionBuffer).AllocatorInstance.Data;
      uVar15 = uVar16 + 1;
      uVar17 = (ulonglong)uVar15;
      pFVar2 = pFVar6 + (longlong)(int)uVar16 * 0x18;
      *(undefined4 *)pFVar2 = uVar9;
      *(undefined4 *)(pFVar2 + 4) = uVar10;
      *(undefined4 *)(pFVar2 + 8) = uVar11;
      *(undefined4 *)(pFVar2 + 0xc) = uVar12;
      *(undefined8 *)(pFVar6 + (longlong)(int)uVar16 * 0x18 + 0x10) = uVar3;
      if ((int)uVar18 <= (int)uVar15) break;
      while( true ) {
        lVar8 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + (uVar17 >> 9) * 8);
        if ((*(short *)(lVar8 + lVar5) != 0) && (*(short *)(lVar8 + lVar5) != -1)) break;
        uVar15 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar15;
        if ((int)uVar18 <= (int)uVar15) goto joined_r0x00014c946fb3;
      }
    }
  } while( true );
}

// ~FSimpleMeshProcessingBaseOp @ 14c949820

void __thiscall
UE::Geometry::FSimpleMeshProcessingBaseOp::~FSimpleMeshProcessingBaseOp
          (FSimpleMeshProcessingBaseOp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSimpleMeshProcessingBaseOp_Geometry_UE__6B_;
  pFVar1 = (this->PositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// SetTransform @ 14c9859c0

void __thiscall
UE::Geometry::FSimpleMeshProcessingBaseOp::SetTransform
          (FSimpleMeshProcessingBaseOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

// UpdateResultMeshNormals @ 14c987430

void __thiscall
UE::Geometry::FSimpleMeshProcessingBaseOp::UpdateResultMeshNormals
          (FSimpleMeshProcessingBaseOp *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar3;
  FMeshNormals local_28;
  
  local_28.Mesh = (FDynamicMesh3 *)this->_padding_;
  pFVar1 = ((local_28.Mesh)->AttributeSet).Ptr;
  if (((pFVar1 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar1->NormalLayers).Array.ArrayNum < 1))
     || (pFVar2 = (pFVar1->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar2 == 0)) {
    FMeshNormals::QuickComputeVertexNormals(local_28.Mesh,false);
    return;
  }
  pTVar3 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_28.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Normals.ArrayNum = 0;
  local_28.Normals.ArrayMax = 0;
  if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
    pTVar3 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar2;
  }
  FMeshNormals::Compute_Overlay_FaceAvg(&local_28,pTVar3,true,true);
  FMeshNormals::CopyToOverlay(&local_28,pTVar3,false);
  if (local_28.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Normals.AllocatorInstance.Data);
    return;
  }
  return;
}

// UpdateResultMeshPositions @ 14c9874d0

void __thiscall
UE::Geometry::FSimpleMeshProcessingBaseOp::UpdateResultMeshPositions
          (FSimpleMeshProcessingBaseOp *this)

{
  atomic<unsigned_char> *this_00;
  undefined8 *puVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  
  lVar5 = this->_padding_;
  uVar15 = *(int *)(lVar5 + 0x24) + *(int *)(lVar5 + 0x20) * 0x200;
  uVar14 = 0;
  if ((uVar15 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar15) {
      do {
        lVar6 = (*(undefined8 **)(lVar5 + 0x28))[uVar13 >> 9];
        if ((*(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (uVar14 = uVar13, *(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        uVar14 = uVar13;
      } while ((int)uVar13 < (int)uVar15);
    }
  }
joined_r0x00014c987548:
  do {
    if (uVar14 == uVar15) {
      return;
    }
    while( true ) {
      uVar13 = 0;
      if ((int)uVar14 < (this->PositionBuffer).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (this->PositionBuffer).AllocatorInstance.Data;
      lVar6 = this->_padding_;
      lVar16 = (longlong)(int)uVar14;
      uVar4 = *(undefined8 *)(pFVar7 + lVar16 * 0x18 + 0x10);
      uVar10 = *(undefined8 *)(pFVar7 + lVar16 * 0x18 + 8);
      sVar12 = _dclass(*(undefined8 *)(pFVar7 + lVar16 * 0x18));
      if (((sVar12 < 1) && (sVar12 = _dclass(uVar10), sVar12 < 1)) &&
         (sVar12 = _dclass(uVar4), sVar12 < 1)) {
        uVar10 = *(undefined8 *)(pFVar7 + lVar16 * 0x18 + 8);
        uVar4 = *(undefined8 *)(pFVar7 + lVar16 * 0x18 + 0x10);
        lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
        puVar1 = (undefined8 *)(lVar8 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        *puVar1 = *(undefined8 *)(pFVar7 + lVar16 * 0x18);
        puVar1[1] = uVar10;
        *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18) = uVar4;
        if (*(char *)(lVar6 + 0x21c) != '\0') {
          this_00 = (atomic<unsigned_char> *)(lVar6 + 0x21d);
          LOCK();
          FVar2.State = *this_00;
          if (FVar2.State == (atomic<unsigned_char>)0x0) {
            *this_00 = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar2.State != (atomic<unsigned_char>)0x0) {
            FMutex::LockSlow((FMutex *)this_00);
          }
          *(int *)(lVar6 + 0x220) = *(int *)(lVar6 + 0x220) + 1;
          LOCK();
          aVar3 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            FMutex::WakeWaitingThread((FMutex *)this_00);
          }
        }
      }
      uVar14 = uVar14 + 1;
      if ((int)uVar15 <= (int)uVar14) break;
      while( true ) {
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar14 >> 9) * 8);
        if ((*(short *)(lVar6 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar6 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
        uVar14 = uVar14 + 1;
        if ((int)uVar15 <= (int)uVar14) goto joined_r0x00014c987548;
      }
    }
  } while( true );
}

