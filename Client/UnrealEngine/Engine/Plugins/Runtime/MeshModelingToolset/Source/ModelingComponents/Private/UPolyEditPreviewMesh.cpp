// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 22

// StaticClass @ 14caace30

UClass * __cdecl UPolyEditPreviewMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPreviewMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolyEditPreviewMesh",
               &Z_Registration_Info_UClass_UPolyEditPreviewMesh.InnerSingleton,
               StaticRegisterNativesUPolyEditPreviewMesh,0x480,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditPreviewMesh>,
               InternalVTableHelperCtorCaller<UPolyEditPreviewMesh>,local_res8,
               UPreviewMesh::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPreviewMesh.InnerSingleton;
}

// UPolyEditPreviewMesh @ 14cace690

UPolyEditPreviewMesh * __thiscall
UPolyEditPreviewMesh::UPolyEditPreviewMesh(UPolyEditPreviewMesh *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &UPreviewMesh::_vftable__for__UObject__;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)&this->field_0x28 = &UPreviewMesh::_vftable__for__IMeshVertexCommandChangeTarget__
  ;
  *(undefined ***)&this->field_0x30 = &UPreviewMesh::_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x38 =
       &UPreviewMesh::_vftable__for__IMeshReplacementCommandChangeTarget__;
  *(undefined8 *)&this->field_0x50 = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x60);
  this->field_0x120 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->ActiveSubmesh).Ptr = (FDynamicSubmesh3 *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->InitialEditPatch);
  (this->EditVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditVertices).ArrayNum = 0;
  (this->EditVertices).ArrayMax = 0;
  (this->InitialPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialPositions).ArrayNum = 0;
  (this->InitialPositions).ArrayMax = 0;
  (this->InitialNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialNormals).ArrayNum = 0;
  (this->InitialNormals).ArrayMax = 0;
  (this->InitialTriNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialTriNormals).ArrayNum = 0;
  (this->InitialTriNormals).ArrayMax = 0;
  *(undefined8 *)&this->ExtrudeToInitialVerts = 0;
  *(undefined8 *)&(this->ExtrudeToInitialVerts).field_0x8 = 0;
  *(undefined8 *)&(this->ExtrudeToInitialVerts).field_0x20 = 0;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x28 = 0;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x34 = 0;
  *(undefined8 *)&(this->ExtrudeToInitialVerts).field_0x40 = 0;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x48 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->MeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->MeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->MeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->MeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->MeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->MeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UPolyEditPreviewMesh @ 14cace810

UPolyEditPreviewMesh * __thiscall
UPolyEditPreviewMesh::UPolyEditPreviewMesh(UPolyEditPreviewMesh *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPreviewMesh::UPreviewMesh((UPreviewMesh *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->ActiveSubmesh).Ptr = (FDynamicSubmesh3 *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->InitialEditPatch);
  (this->EditVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditVertices).ArrayNum = 0;
  (this->EditVertices).ArrayMax = 0;
  (this->InitialPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialPositions).ArrayNum = 0;
  (this->InitialPositions).ArrayMax = 0;
  (this->InitialNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialNormals).ArrayNum = 0;
  (this->InitialNormals).ArrayMax = 0;
  (this->InitialTriNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialTriNormals).ArrayNum = 0;
  (this->InitialTriNormals).ArrayMax = 0;
  *(undefined8 *)&this->ExtrudeToInitialVerts = 0;
  *(undefined8 *)&(this->ExtrudeToInitialVerts).field_0x8 = 0;
  *(undefined8 *)&(this->ExtrudeToInitialVerts).field_0x20 = 0;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x28 = 0;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x34 = 0;
  *(undefined8 *)&(this->ExtrudeToInitialVerts).field_0x40 = 0;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x48 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->MeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->MeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->MeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->MeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->MeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->MeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UPolyEditPreviewMesh @ 14cad26b0

void __thiscall UPolyEditPreviewMesh::~UPolyEditPreviewMesh(UPolyEditPreviewMesh *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  *(undefined4 *)&(this->ExtrudeToInitialVerts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExtrudeToInitialVerts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExtrudeToInitialVerts);
  pFVar2 = (this->InitialTriNormals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InitialNormals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InitialPositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EditVertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->InitialEditPatch);
  TDefaultDelete<UE::Geometry::FDynamicSubmesh3>::operator()
            ((TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *)&this->ActiveSubmesh,
             (this->ActiveSubmesh).Ptr);
  UPreviewMesh::~UPreviewMesh((UPreviewMesh *)this);
  return;
}

// operator() @ 14cad6370

TVector<double> * __thiscall
`UPolyEditPreviewMesh::MakeExtrudeTypeHitTargetMesh'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<float> *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (**(char **)((longlong)this + 8) == '\0') {
    pdVar3 = *(double **)((longlong)this + 0x10);
    dVar4 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
  }
  else {
    dVar4 = (double)(param_2->field0_0x0)._s_0.X;
    dVar6 = (double)(param_2->field0_0x0)._s_0.Y;
    dVar7 = (double)(param_2->field0_0x0)._s_0.Z;
  }
  dVar5 = **(double **)this + **(double **)this;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * dVar4 + (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * dVar6 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar7 + dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14cad6e80

void __thiscall
`UPolyEditPreviewMesh::UpdateExtrudeType'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  atomic<unsigned_char> aVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  double *pdVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  
  uVar18 = 0;
  iVar5 = *(int *)(*(longlong *)this + 0x368);
  if (0 < (longlong)iVar5) {
    lVar20 = 0;
    lVar19 = 0;
    do {
      lVar6 = *(longlong *)this;
      uVar16 = ~uVar18 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar18 < *(int *)(lVar6 + 0x368)) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)this;
      uVar13 = *(uint *)(*(longlong *)(lVar6 + 0x360) + lVar20 * 4);
      uVar14 = 0;
      if ((int)uVar18 < *(int *)(lVar7 + 0x378)) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)(lVar7 + 0x370);
      lVar7 = *(longlong *)this;
      dVar3 = *(double *)(lVar6 + 0x10 + lVar19);
      pdVar17 = (double *)(lVar6 + lVar19);
      dVar10 = *pdVar17;
      dVar9 = pdVar17[1];
      if (**(char **)((longlong)this + 0x10) == '\0') {
        pdVar17 = (double *)(lVar7 + 0x3f0);
      }
      else {
        uVar14 = 0;
        if ((int)uVar18 < *(int *)(lVar7 + 0x388)) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pdVar17 = (double *)(*(longlong *)(lVar7 + 0x380) + (longlong)(int)uVar18 * 0x18);
      }
      dVar4 = **(double **)((longlong)this + 8);
      dVar10 = dVar4 * *pdVar17 + dVar10;
      dVar9 = dVar4 * pdVar17[1] + dVar9;
      dVar3 = dVar4 * pdVar17[2] + dVar3;
      sVar12 = _dclass(dVar10);
      if (((sVar12 < 1) && (sVar12 = _dclass(dVar9), sVar12 < 1)) &&
         (sVar12 = _dclass(dVar3), sVar12 < 1)) {
        uVar15 = (ulonglong)(uVar13 & 0x1ff);
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
        *(double *)(lVar6 + uVar15 * 0x18) = dVar10;
        *(double *)(lVar6 + 8 + uVar15 * 0x18) = dVar9;
        *(double *)(lVar6 + 0x10 + uVar15 * 0x18) = dVar3;
        if ((param_1->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(param_1->ChangeStampShape).Mutex;
          LOCK();
          bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar11) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar11) {
            UE::FMutex::LockSlow(this_00);
          }
          puVar1 = &(param_1->ChangeStampShape).Value;
          *puVar1 = *puVar1 + 1;
          LOCK();
          aVar2 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar2 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 0x18;
    } while (lVar20 < iVar5);
  }
  return;
}

// operator() @ 14cad7150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  FMutex *this_00;
  uint *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  short sVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  double dVar26;
  int local_res20 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_118;
  longlong local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  code *local_d0;
  double **local_c8;
  double *local_c0;
  double *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int *local_a0;
  double local_88;
  
  uVar22 = 0;
  iVar6 = *(int *)(*(longlong *)this + 0x368);
  lVar20 = (longlong)iVar6;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_118,iVar6,Default);
  dVar13 = __real_3ff0000000000000;
  uVar18 = uVar22;
  uVar24 = uVar22;
  local_108 = lVar20;
  if (0 < iVar6) {
    do {
      lVar25 = *(longlong *)this;
      uVar23 = (uint)uVar18;
      uVar19 = ~uVar23 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar23 < *(int *)(lVar25 + 0x368)) {
        uVar21 = uVar19;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)this;
      iVar6 = *(int *)(*(longlong *)(lVar25 + 0x360) + uVar24 * 4);
      uVar21 = 0;
      if ((int)uVar23 < *(int *)(lVar7 + 0x378)) {
        uVar21 = uVar19;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar25 = *(longlong *)(lVar7 + 0x370);
      pdVar1 = (double *)(lVar25 + uVar22);
      local_e8 = *pdVar1;
      dStack_e0 = pdVar1[1];
      local_d8 = *(double *)(lVar25 + 0x10 + uVar22);
      local_res20[0] = 0;
      local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      piVar17 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)(*(longlong *)this + 0x3a0),iVar6);
      local_a8 = *(longlong *)this;
      local_c0 = &local_100;
      local_b8 = &local_e8;
      local_b0 = *(undefined8 *)((longlong)this + 8);
      local_a0 = local_res20;
      local_c8 = &local_c0;
      local_d0 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                 ::Call;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                ((FDynamicMesh3 *)(local_a8 + 0x130),*piVar17,
                 (TFunctionRef<void___cdecl(int)> *)&local_d0);
      dVar10 = local_e8;
      dVar11 = local_d8;
      dVar26 = dStack_e0;
      if (local_res20[0] != 0) {
        dVar26 = dVar13 / (double)local_res20[0];
        local_88 = dVar26 * local_f0;
        dVar10 = dVar26 * local_100;
        dVar11 = local_88;
        dVar26 = dVar26 * dStack_f8;
      }
      uVar21 = 0;
      if ((int)uVar23 < local_118.ArrayNum) {
        uVar21 = uVar19;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar24 = uVar24 + 1;
      auVar9._8_4_ = SUB84(dVar26,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      *(undefined1 (*) [16])(local_118.AllocatorInstance.Data + uVar22) = auVar9;
      *(double *)(local_118.AllocatorInstance.Data + uVar22 + 0x10) = dVar11;
      uVar22 = uVar22 + 0x18;
      uVar18 = (ulonglong)(uVar23 + 1);
    } while ((longlong)uVar24 < lVar20);
    uVar21 = 0;
    lVar25 = 0;
    lVar20 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar21 < local_118.ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar14.Data = local_118.AllocatorInstance.Data;
      lVar7 = *(longlong *)this;
      uVar19 = 0;
      if ((int)uVar21 < *(int *)(lVar7 + 0x368)) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = *(uint *)(*(longlong *)(lVar7 + 0x360) + lVar25 * 4);
      sVar16 = _dclass(*(undefined8 *)(FVar14.Data + lVar20));
      if (((sVar16 < 1) && (sVar16 = _dclass(*(undefined8 *)(FVar14.Data + lVar20 + 8)), sVar16 < 1)
          ) && (sVar16 = _dclass(*(undefined8 *)(FVar14.Data + lVar20 + 0x10)), sVar16 < 1)) {
        uVar12 = *(undefined8 *)(FVar14.Data + lVar20 + 8);
        uVar18 = (ulonglong)(uVar19 & 0x1ff);
        uVar5 = *(undefined8 *)(FVar14.Data + lVar20 + 0x10);
        lVar7 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        *puVar2 = *(undefined8 *)(FVar14.Data + lVar20);
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18) = uVar5;
        if ((param_1->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(param_1->ChangeStampShape).Mutex;
          LOCK();
          bVar15 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar15) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar15) {
            UE::FMutex::LockSlow(this_00);
          }
          puVar3 = &(param_1->ChangeStampShape).Value;
          *puVar3 = *puVar3 + 1;
          LOCK();
          aVar4 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      uVar21 = uVar21 + 1;
      lVar25 = lVar25 + 1;
      lVar20 = lVar20 + 0x18;
    } while (lVar25 < local_108);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14cb12b20

UClass * __cdecl UPolyEditPreviewMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditPreviewMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolyEditPreviewMesh",
               &Z_Registration_Info_UClass_UPolyEditPreviewMesh.InnerSingleton,
               StaticRegisterNativesUPolyEditPreviewMesh,0x480,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditPreviewMesh>,
               InternalVTableHelperCtorCaller<UPolyEditPreviewMesh>,local_res8,
               UPreviewMesh::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditPreviewMesh.InnerSingleton;
}

// InitializeExtrudeType @ 14cb1d740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPolyEditPreviewMesh::InitializeExtrudeType
          (UPolyEditPreviewMesh *this,FDynamicMesh3 *param_1,TVector<double> *param_2,
          TTransform<double> *param_3,bool param_4)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  uint *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  double dVar9;
  short sVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_00;
  UPolyEditPreviewMesh *pUVar15;
  bool bVar16;
  TVector<double> *pTVar17;
  FDynamicMesh3 *this_01;
  undefined8 uVar18;
  ulong64 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  uint *puVar29;
  FExtrusionInfo *pFVar30;
  FScriptContainerElement *pFVar31;
  UPolyEditPreviewMesh *this_02;
  FScriptContainerElement *pFVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  undefined4 uVar34;
  undefined1 auStackY_598 [32];
  undefined1 local_548;
  undefined1 local_547;
  undefined1 local_546;
  undefined1 local_545;
  uint local_544;
  TArray<int,TSizedDefaultAllocator<32>_> local_540;
  undefined4 local_530 [2];
  undefined4 local_528 [2];
  undefined4 local_520 [2];
  FScriptContainerElement *local_518;
  undefined8 local_510;
  float local_508;
  undefined8 local_500;
  undefined8 local_4f0;
  UPolyEditPreviewMesh *local_4e8;
  double local_4e0;
  double dStack_4d8;
  double local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  undefined1 local_49c [20];
  FScriptContainerElement *local_488;
  uint uStack_480;
  uint uStack_47c;
  TBitArray<FDefaultBitArrayAllocator> *local_478;
  undefined4 uStack_470;
  uint uStack_46c;
  uint local_468;
  int iStack_460;
  undefined4 uStack_45c;
  FScriptContainerElement *local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_450;
  undefined8 uStack_430;
  longlong local_428;
  undefined8 *local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  TQuaternion<double>_u_0 local_3e8;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  TVector<double> local_398 [2];
  undefined4 local_364;
  FDynamicMesh3 local_358;
  FDynamicMesh3 *local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_120;
  undefined1 local_c8 [64];
  double local_88;
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_598;
  local_4e8 = this;
  local_49c._12_8_ = param_2;
  UE::Geometry::FDynamicMesh3::operator=(&this->InitialEditPatch,param_1);
  this->bHaveMeshTransform = param_3 != (TTransform<double> *)0x0;
  if (param_3 != (TTransform<double> *)0x0) {
    dVar9 = (param_3->Rotation).XY.m128d_f64[1];
    (this->MeshTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    (this->MeshTransform).Rotation.XY.m128d_f64[1] = dVar9;
    dVar9 = (param_3->Rotation).ZW.m128d_f64[1];
    (this->MeshTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    (this->MeshTransform).Rotation.ZW.m128d_f64[1] = dVar9;
    dVar9 = (param_3->Translation).XY.m128d_f64[1];
    (this->MeshTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    (this->MeshTransform).Translation.XY.m128d_f64[1] = dVar9;
    dVar9 = (param_3->Translation).ZW.m128d_f64[1];
    (this->MeshTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    (this->MeshTransform).Translation.ZW.m128d_f64[1] = dVar9;
    dVar9 = (param_3->Scale3D).XY.m128d_f64[1];
    (this->MeshTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    (this->MeshTransform).Scale3D.XY.m128d_f64[1] = dVar9;
    dVar9 = (param_3->Scale3D).ZW.m128d_f64[1];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
    local_3e8._s_0.X = (this->MeshTransform).Rotation.XY.m128d_f64[0];
    local_3e8._s_0.Y = (this->MeshTransform).Rotation.XY.m128d_f64[1];
    local_3e8._s_0.Z = (this->MeshTransform).Rotation.ZW.m128d_f64[0];
    local_3e8._s_0.W = (this->MeshTransform).Rotation.ZW.m128d_f64[1];
    local_408 = (this->MeshTransform).Translation.ZW.m128d_f64[0];
    local_3f0 = (this->MeshTransform).Scale3D.ZW.m128d_f64[0];
    local_418 = (this->MeshTransform).Translation.XY.m128d_f64[0];
    dStack_410 = (this->MeshTransform).Translation.XY.m128d_f64[1];
    local_400 = (this->MeshTransform).Scale3D.XY.m128d_f64[0];
    dStack_3f8 = (this->MeshTransform).Scale3D.XY.m128d_f64[1];
    local_3c8 = local_418;
    dStack_3c0 = dStack_410;
    local_3b8 = local_408;
    local_3b0 = local_400;
    dStack_3a8 = dStack_3f8;
    local_3a0 = local_3f0;
    MeshTransforms::ApplyTransform
              (&this->InitialEditPatch,(TTransformSRT3<double> *)&local_3e8._s_0,true,All);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InitialTriNormals,
             (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
             (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlockUsed,Default);
  uVar28 = (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlockUsed;
  uVar26 = 0;
  if ((uVar28 != 0) &&
     (pFVar32 = (this->InitialEditPatch).TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
     uVar26 = 0, 0xfffd < (ushort)(**(short **)pFVar32 - 1U))) {
    uVar26 = 1;
    uVar23 = 1;
    if ((int)uVar28 < 2) goto joined_r0x00014cb1d949;
    do {
      sVar10 = *(short *)(*(longlong *)(pFVar32 + (uVar26 >> 9) * 8) +
                         (ulonglong)((uint)uVar26 & 0x1ff) * 2);
      if ((sVar10 != 0) && (sVar10 != -1)) break;
      uVar23 = (uint)uVar26 + 1;
      uVar26 = (ulonglong)uVar23;
    } while ((int)uVar23 < (int)uVar28);
  }
  uVar23 = (uint)uVar26;
joined_r0x00014cb1d949:
  do {
    if (uVar23 == uVar28) {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_358,&this->InitialEditPatch);
      UE::Geometry::FExtrudeMesh::FExtrudeMesh((FExtrudeMesh *)local_c8,&local_358);
      local_88 = __real_3f847ae147ae147b;
      UE::Geometry::FExtrudeMesh::Apply((FExtrudeMesh *)local_c8);
      local_500 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)&this->ExtrudeToInitialVerts;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                (local_500);
      (this->EditVertices).ArrayNum = 0;
      if ((this->EditVertices).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->EditVertices).AllocatorInstance,0,&(this->EditVertices).ArrayMax);
      }
      this_00 = local_500;
      uVar20 = (ulonglong)(int)local_70;
      local_128 = &local_358;
      local_120.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_120.Elements._48_8_ = _UNK_150631d98;
      local_518 = local_78.Data + uVar20 * 0x1c0;
      local_120.Elements._0_8_ = 0;
      local_120.Elements._8_8_ = 0;
      local_120.Elements._32_8_ = 0;
      pFVar32 = local_78.Data + 0x148;
      local_120.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_120.HashSize = 0;
      local_544 = local_70;
      uVar26 = uVar20;
      do {
        pFVar31 = local_518;
        if ((int)uVar20 != (int)uVar26) {
          local_548 = 0;
          `TCheckedPointerIterator<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_548);
        }
        if (pFVar32 + -0x148 == pFVar31) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_120,&local_540);
          pUVar15 = local_4e8;
          pTVar3 = &local_4e8->EditVertices;
          if (pTVar3 != &local_540) {
            pFVar32 = (pTVar3->AllocatorInstance).Data;
            if (pFVar32 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar32);
            }
            (pTVar3->AllocatorInstance).Data = local_540.AllocatorInstance.Data;
            (pUVar15->EditVertices).ArrayNum = local_540.ArrayNum;
            (pUVar15->EditVertices).ArrayMax = local_540.ArrayMax;
            local_540.ArrayNum = 0;
            local_540.ArrayMax = 0;
            local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_540.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_540.AllocatorInstance.Data);
          }
          pTVar4 = &pUVar15->InitialPositions;
          piVar1 = &(pUVar15->InitialPositions).ArrayMax;
          (pUVar15->InitialPositions).ArrayNum = 0;
          if ((pUVar15->InitialPositions).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&pTVar4->AllocatorInstance,0,piVar1);
          }
          pTVar5 = &pUVar15->InitialNormals;
          piVar2 = &(pUVar15->InitialNormals).ArrayMax;
          (pUVar15->InitialNormals).ArrayNum = 0;
          if ((pUVar15->InitialNormals).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&pTVar5->AllocatorInstance,0,piVar2);
          }
          local_544 = (pUVar15->EditVertices).ArrayNum;
          uVar26 = (ulonglong)(int)local_544;
          pFVar32 = (pUVar15->EditVertices).AllocatorInstance.Data;
          local_518 = pFVar32 + uVar26 * 4;
          this_02 = pUVar15;
          while( true ) {
            pFVar31 = local_518;
            if ((this_02->EditVertices).ArrayNum != (int)uVar26) {
              local_546 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_546);
            }
            uVar28 = local_70;
            if (pFVar32 == pFVar31) {
              if (param_4) {
                uVar26 = (ulonglong)(int)local_70;
                local_49c._4_8_ = &local_358;
                pFVar30 = (FExtrusionInfo *)(local_78.Data + uVar26 * 0x1c0);
                FVar27.Data = local_78.Data;
                while( true ) {
                  if ((uint)uVar26 != uVar28) {
                    `TCheckedPointerIterator<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(&local_545);
                  }
                  if ((FExtrusionInfo *)FVar27.Data == pFVar30) break;
                  UE::Geometry::FDynamicMeshEditor::RemoveTriangles
                            ((FDynamicMeshEditor *)(local_49c + 4),
                             &((FExtrusionInfo *)FVar27.Data)->InitialTriangles,false);
                  uVar26 = (ulonglong)local_70;
                  FVar27.Data = FVar27.Data + 0x1c0;
                }
              }
              plVar22 = *(longlong **)&this_02->field_0x50;
              dVar9 = (((TVector<double>_u_0 *)local_49c._12_8_)->_s_0).Y;
              (this_02->InputDirection).field0_0x0._s_0.X =
                   (((TVector<double>_u_0 *)local_49c._12_8_)->_s_0).X;
              (this_02->InputDirection).field0_0x0._s_0.Y = dVar9;
              (this_02->InputDirection).field0_0x0._s_0.Z =
                   (((TVector<double>_u_0 *)local_49c._12_8_)->_s_0).Z;
              this_01 = (FDynamicMesh3 *)(**(code **)(*plVar22 + 0xb38))();
              UE::Geometry::FDynamicMesh3::Copy(this_01,&local_358,true,true,true,true);
              if (this_02->field_0x40 != '\0') {
                uVar18 = (**(code **)(**(longlong **)&this_02->field_0x50 + 0xb38))();
                *(undefined8 *)&this_02->field_0x70 = 0;
                *(undefined8 *)&this_02->field_0x68 = uVar18;
                UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                          ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this_02->field_0x60,false
                          );
                uVar19 = UE::Geometry::FDynamicMesh3::GetChangeStamp
                                   (*(FDynamicMesh3 **)&this_02->field_0x68);
                *(ulong64 *)&this_02->field_0x70 = uVar19;
              }
              (**(code **)(**(longlong **)&this_02->field_0x50 + 0xb50))();
              if (this_02->field_0x120 != '\0') {
                UPreviewMesh::UpdateRenderMeshDecomposition((UPreviewMesh *)this_02);
              }
              UPreviewMesh::NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)this_02);
              local_120.HashSize = 0;
              if (local_120.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_120.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_120.Elements);
              local_c8._0_8_ = &___7FExtrudeMesh_Geometry_UE__6B_;
              DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
                        ((FExtrusionInfo *)local_78.Data,local_70);
              if ((FExtrusionInfo *)local_78.Data != (FExtrusionInfo *)0x0) {
                FMemory::Free(local_78.Data);
              }
              if (local_c8._16_8_ != 0) {
                plVar22 = (longlong *)(local_c8 + 0x20);
                if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
                  plVar22 = (longlong *)local_c8._56_8_;
                }
                (**(code **)(*plVar22 + 0x10))();
              }
              UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
              return;
            }
            uVar28 = *(uint *)pFVar32;
            pFVar31 = (pTVar4->AllocatorInstance).Data;
            puVar7 = (undefined8 *)
                     (*(longlong *)
                       (local_358.Vertices.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar28 >> 9) * 8) + (ulonglong)(uVar28 & 0x1ff) * 0x18);
            local_4c8 = *puVar7;
            uStack_4c0 = puVar7[1];
            local_4b8 = *(undefined8 *)
                         (*(longlong *)
                           (local_358.Vertices.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar28 >> 9) * 8) + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18
                         );
            if (((pFVar31 <= (FScriptContainerElement *)&local_4c8) &&
                ((FScriptContainerElement *)&local_4c8 < pFVar31 + (longlong)*piVar1 * 0x18)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar25 = (pUVar15->InitialPositions).ArrayNum;
            if (iVar25 == *piVar1) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar4->AllocatorInstance,piVar1);
            }
            (pUVar15->InitialPositions).ArrayNum = iVar25 + 1;
            pFVar11 = (pTVar4->AllocatorInstance).Data;
            pFVar31 = pFVar11 + (longlong)iVar25 * 0x18;
            *(undefined8 *)pFVar31 = local_4c8;
            *(undefined8 *)(pFVar31 + 8) = uStack_4c0;
            *(undefined8 *)(pFVar11 + (longlong)iVar25 * 0x18 + 0x10) = local_4b8;
            if (local_358.VertexNormals.bIsSet == false) {
              local_510 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                   UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
              local_508 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
              uVar34 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
            }
            else {
              pfVar8 = (float *)(*(longlong *)
                                  (local_358.VertexNormals.TypedValue.Blocks.AllocatorInstance.Data
                                  + (ulonglong)(uVar28 >> 9) * 8) +
                                (ulonglong)(uVar28 & 0x1ff) * 0xc);
              uVar34 = *pfVar8;
              local_510 = *(undefined8 *)pfVar8;
              local_508 = *(float *)(*(longlong *)
                                      (local_358.VertexNormals.TypedValue.Blocks.AllocatorInstance.
                                       Data + (ulonglong)(uVar28 >> 9) * 8) + 8 +
                                    (ulonglong)(uVar28 & 0x1ff) * 0xc);
            }
            pFVar31 = (pTVar5->AllocatorInstance).Data;
            local_4e0 = (double)(float)uVar34;
            dStack_4d8 = (double)local_510._4_4_;
            local_4d0 = (double)local_508;
            if (((pFVar31 <= (FScriptContainerElement *)&local_4e0) &&
                ((FScriptContainerElement *)&local_4e0 < pFVar31 + (longlong)*piVar2 * 0x18)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) break;
            iVar25 = (pUVar15->InitialNormals).ArrayNum;
            if (iVar25 == *piVar2) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar5->AllocatorInstance,piVar2);
            }
            pFVar32 = pFVar32 + 4;
            (pUVar15->InitialNormals).ArrayNum = iVar25 + 1;
            pFVar11 = (pTVar5->AllocatorInstance).Data;
            pFVar31 = pFVar11 + (longlong)iVar25 * 0x18;
            *(double *)pFVar31 = local_4e0;
            *(double *)(pFVar31 + 8) = dStack_4d8;
            *(double *)(pFVar11 + (longlong)iVar25 * 0x18 + 0x10) = local_4d0;
            uVar26 = (ulonglong)local_544;
            this_02 = local_4e8;
          }
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar28 = *(uint *)(pFVar32 + 0x30);
        puVar29 = *(uint **)(pFVar32 + 0x28);
        if (((int)uVar28 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        puVar6 = puVar29 + (int)uVar28;
        for (; puVar29 != puVar6; puVar29 = puVar29 + 1) {
          uVar26 = (ulonglong)(*puVar29 & 0x1ff);
          lVar21 = *(longlong *)
                    ((local_128->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(*puVar29 >> 9) * 8);
          local_500 = *(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        **)(lVar21 + uVar26 * 0xc);
          uVar34 = *(undefined4 *)(lVar21 + 8 + uVar26 * 0xc);
          local_530[0] = (undefined4)local_500;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_120,&local_4b0,(bool *)local_530);
          local_528[0] = local_500._4_4_;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_120,&local_4ac,(bool *)local_528);
          local_520[0] = uVar34;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_120,&local_4a8,(bool *)local_520);
        }
        uVar28 = *(uint *)pFVar32;
        uStack_480 = 0;
        uStack_47c = 1;
        uStack_46c = uStack_480;
        local_468 = uStack_480;
        if (uVar28 != 0) {
          pFVar31 = *(FScriptContainerElement **)(pFVar32 + -8);
          if (pFVar31 == (FScriptContainerElement *)0x0) {
            pFVar31 = pFVar32 + -0x18;
          }
          uVar23 = *(uint *)pFVar31;
          local_468 = 0;
          uStack_480 = 0;
          while (uVar23 == 0) {
            lVar21 = (longlong)(int)uStack_480;
            local_468 = local_468 + 0x20;
            uStack_480 = uStack_480 + 1;
            uStack_46c = uVar28;
            if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_480)
            goto LAB_14cb1dcad;
            uVar23 = *(uint *)(pFVar31 + lVar21 * 4 + 4);
          }
          uStack_47c = -uVar23 & uVar23;
          uVar26 = (ulonglong)uStack_47c * 2 + 1;
          lVar21 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_4a4 = (int)lVar21;
          uStack_46c = (local_468 - 1) + local_4a4;
          if ((int)uVar28 < (int)uStack_46c) {
            uStack_46c = uVar28;
          }
        }
LAB_14cb1dcad:
        local_488 = pFVar32 + -0x28;
        pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar32 + -0x18);
        iStack_460 = *(uint *)(pFVar32 + -0x20) - *(uint *)(pFVar32 + 0xc);
        uVar23 = uVar28 & 0xffffffe0;
        TStack_450._padding_ = CONCAT44(uStack_47c,uStack_480);
        uStack_470 = 0xffffffff;
        TStack_450.CurrentBitIndex = uStack_46c;
        TStack_450.UnvisitedBitMask = 0xffffffff;
        iVar25 = (int)uVar28 >> 5;
        TStack_450._28_4_ = local_364;
        TStack_450.BaseBitIndex = local_468;
        uStack_430 = CONCAT44(uStack_45c,iStack_460);
        local_478 = pTVar33;
        local_458 = local_488;
        TStack_450.Array = pTVar33;
        if (((int)uVar28 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar24 = *(uint *)pFVar32;
        if (uVar28 != uVar24) {
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar32 + -8) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar33 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar32 + -8);
          }
          uVar28 = -1 << ((byte)uVar28 & 0x1f) &
                   *(uint *)((pTVar33->AllocatorInstance).InlineData + (longlong)iVar25 * 4);
          while (uVar28 == 0) {
            lVar21 = (longlong)iVar25;
            uVar23 = uVar23 + 0x20;
            iVar25 = iVar25 + 1;
            uVar28 = uVar24;
            if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
            goto LAB_14cb1ddad;
            uVar28 = *(uint *)((pTVar33->AllocatorInstance).InlineData + lVar21 * 4 + 4);
          }
          uVar26 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar21 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_4a0 = (int)lVar21;
          uVar28 = (uVar23 - 1) + local_4a0;
          if ((int)uVar24 < (int)uVar28) {
            uVar28 = uVar24;
          }
        }
LAB_14cb1ddad:
        while( true ) {
          pFVar31 = local_458;
          if (*(uint *)(local_458 + 8) - *(uint *)(local_458 + 0x34) != (int)uStack_430) {
            local_547 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_547);
          }
          if (((TStack_450.CurrentBitIndex == uVar28) &&
              (TStack_450.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar32 + -0x18))) &&
             (pFVar31 == pFVar32 + -0x28)) break;
          local_4f0 = *(undefined8 *)
                       (*(longlong *)pFVar31 + (longlong)TStack_450.CurrentBitIndex * 0x10);
          local_428 = (longlong)&local_4f0 + 4;
          local_420 = &local_4f0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (this_00,(TPairInitializer<int_const_&,int_const_&> *)local_49c,
                     (bool *)&local_428);
          TStack_450.UnvisitedBitMask = TStack_450.UnvisitedBitMask & ~TStack_450._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_450);
        }
        uVar20 = (ulonglong)local_70;
        pFVar32 = pFVar32 + 0x1c0;
        uVar26 = (ulonglong)local_544;
      } while( true );
    }
    while( true ) {
      uVar24 = (uint)uVar26;
      pTVar17 = UE::Geometry::FDynamicMesh3::GetTriNormal(&this->InitialEditPatch,local_398,uVar24);
      dVar13 = (pTVar17->field0_0x0)._s_0.X;
      dVar14 = (pTVar17->field0_0x0)._s_0.Y;
      dVar9 = (pTVar17->field0_0x0)._s_0.Z;
      uVar23 = 0;
      if ((int)uVar24 < (this->InitialTriNormals).ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar23 = uVar24 + 1;
      uVar26 = (ulonglong)uVar23;
      pFVar31 = (this->InitialTriNormals).AllocatorInstance.Data;
      pFVar32 = pFVar31 + (longlong)(int)uVar24 * 0x18;
      *(double *)pFVar32 = dVar13;
      *(double *)(pFVar32 + 8) = dVar14;
      *(double *)(pFVar31 + (longlong)(int)uVar24 * 0x18 + 0x10) = dVar9;
      if ((int)uVar28 <= (int)uVar23) break;
      while( true ) {
        uVar20 = (ulonglong)((uint)uVar26 & 0x1ff);
        lVar21 = *(longlong *)
                  ((this->InitialEditPatch).TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                   Data + (uVar26 >> 9) * 8);
        if ((*(short *)(lVar21 + uVar20 * 2) != 0) && (*(short *)(lVar21 + uVar20 * 2) != -1))
        break;
        uVar23 = (uint)uVar26 + 1;
        uVar26 = (ulonglong)uVar23;
        if ((int)uVar28 <= (int)uVar23) goto joined_r0x00014cb1d949;
      }
    }
  } while( true );
}

// InitializeExtrudeType @ 14cb1e360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPolyEditPreviewMesh::InitializeExtrudeType
          (UPolyEditPreviewMesh *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,
          TTransform<double> *param_4,bool param_5)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  TUniquePtr<UE::Geometry::FDynamicSubmesh3,TDefaultDelete<UE::Geometry::FDynamicSubmesh3>_>
  *this_00;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  double dVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  UPolyEditPreviewMesh *pUVar16;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_01;
  bool bVar17;
  FDynamicSubmesh3 *pFVar18;
  TVector<double> *pTVar19;
  FDynamicMesh3 *pFVar20;
  undefined8 uVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  int iVar27;
  FDynamicSubmesh3 *pFVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  uint *puVar31;
  FExtrusionInfo *pFVar32;
  uint uVar33;
  TBitArray<FDefaultBitArrayAllocator> *pTVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  undefined4 uVar37;
  undefined1 auStackY_398 [32];
  undefined1 local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  uint local_344;
  FDynamicMesh3 *local_340;
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  undefined4 local_328 [2];
  undefined4 local_320 [2];
  undefined4 local_318 [2];
  FScriptContainerElement *local_310;
  FDynamicSubmesh3 *local_308;
  undefined8 local_300;
  float local_2f8;
  FScriptContainerElement *local_2f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2e8;
  UPolyEditPreviewMesh *local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  int local_2a0;
  int local_29c;
  int local_298 [2];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_290;
  TPairInitializer<int_const_&,int_const_&> local_288;
  TVector<double> *local_278;
  int local_270;
  undefined8 local_268;
  int local_258;
  FScriptContainerElement *local_250;
  uint uStack_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *local_240;
  undefined4 uStack_238;
  uint uStack_234;
  uint local_230;
  int iStack_228;
  undefined4 uStack_224;
  FScriptContainerElement *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  longlong local_1f0;
  undefined8 *local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  TQuaternion<double>_u_0 local_1b0;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double> local_160 [2];
  undefined4 local_12c;
  FDynamicMesh3 *local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_120;
  undefined1 local_c8 [64];
  double local_88;
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_2e0 = this;
  local_278 = param_3;
  pFVar18 = ::operator_new(0x5f0);
  pFVar28 = (FDynamicSubmesh3 *)0x0;
  local_308 = pFVar28;
  if (pFVar18 != (FDynamicSubmesh3 *)0x0) {
    local_308 = UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3(pFVar18,param_1,param_2,9,true);
  }
  this_00 = &this->ActiveSubmesh;
  pFVar18 = local_308;
  if (this_00 !=
      (TUniquePtr<UE::Geometry::FDynamicSubmesh3,TDefaultDelete<UE::Geometry::FDynamicSubmesh3>_> *)
      &local_308) {
    pFVar18 = this_00->Ptr;
    this_00->Ptr = local_308;
    local_308 = (FDynamicSubmesh3 *)0x0;
    TDefaultDelete<UE::Geometry::FDynamicSubmesh3>::operator()
              ((TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *)this_00,pFVar18);
    pFVar18 = pFVar28;
  }
  TDefaultDelete<UE::Geometry::FDynamicSubmesh3>::operator()
            ((TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *)&local_308,pFVar18);
  pFVar18 = this_00->Ptr;
  pFVar20 = &pFVar18->Submesh;
  local_340 = pFVar20;
  if (((((pFVar18->Submesh).VertexRefCounts.FreeIndices.CurBlock * 0x200 +
         (pFVar18->Submesh).VertexRefCounts.FreeIndices.CurBlockUsed != 0) ||
       ((pFVar18->Submesh).EdgeRefCounts.FreeIndices.CurBlock * 0x200 +
        (pFVar18->Submesh).EdgeRefCounts.FreeIndices.CurBlockUsed != 0)) ||
      ((pFVar18->Submesh).TriangleRefCounts.FreeIndices.CurBlock * 0x200 +
       (pFVar18->Submesh).TriangleRefCounts.FreeIndices.CurBlockUsed != 0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("EditPatch.IsCompact()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PolyEditPreviewMesh.cpp"
                          ,0x1a,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this->bHaveMeshTransform = param_4 != (TTransform<double> *)0x0;
  if (param_4 != (TTransform<double> *)0x0) {
    dVar9 = (param_4->Rotation).XY.m128d_f64[1];
    (this->MeshTransform).Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
    (this->MeshTransform).Rotation.XY.m128d_f64[1] = dVar9;
    dVar9 = (param_4->Rotation).ZW.m128d_f64[1];
    (this->MeshTransform).Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
    (this->MeshTransform).Rotation.ZW.m128d_f64[1] = dVar9;
    dVar9 = (param_4->Translation).XY.m128d_f64[1];
    (this->MeshTransform).Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
    (this->MeshTransform).Translation.XY.m128d_f64[1] = dVar9;
    dVar9 = (param_4->Translation).ZW.m128d_f64[1];
    (this->MeshTransform).Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
    (this->MeshTransform).Translation.ZW.m128d_f64[1] = dVar9;
    dVar9 = (param_4->Scale3D).XY.m128d_f64[1];
    (this->MeshTransform).Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
    (this->MeshTransform).Scale3D.XY.m128d_f64[1] = dVar9;
    dVar9 = (param_4->Scale3D).ZW.m128d_f64[1];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
    local_1b0._s_0.X = (this->MeshTransform).Rotation.XY.m128d_f64[0];
    local_1b0._s_0.Y = (this->MeshTransform).Rotation.XY.m128d_f64[1];
    local_1b0._s_0.Z = (this->MeshTransform).Rotation.ZW.m128d_f64[0];
    local_1b0._s_0.W = (this->MeshTransform).Rotation.ZW.m128d_f64[1];
    local_1d0 = (this->MeshTransform).Translation.ZW.m128d_f64[0];
    local_1b8 = (this->MeshTransform).Scale3D.ZW.m128d_f64[0];
    local_1e0 = (this->MeshTransform).Translation.XY.m128d_f64[0];
    dStack_1d8 = (this->MeshTransform).Translation.XY.m128d_f64[1];
    local_1c8 = (this->MeshTransform).Scale3D.XY.m128d_f64[0];
    dStack_1c0 = (this->MeshTransform).Scale3D.XY.m128d_f64[1];
    local_190 = local_1e0;
    dStack_188 = dStack_1d8;
    local_180 = local_1d0;
    local_178 = local_1c8;
    dStack_170 = dStack_1c0;
    local_168 = local_1b8;
    MeshTransforms::ApplyTransform(pFVar20,(TTransformSRT3<double> *)&local_1b0._s_0,true,All);
  }
  UE::Geometry::FDynamicMesh3::operator=(&this->InitialEditPatch,pFVar20);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InitialTriNormals,
             (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
             (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlockUsed,Default);
  pFVar18 = pFVar28;
  if (0 < (int)((this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlockUsed)) {
    do {
      uVar30 = (uint)pFVar28;
      pTVar19 = UE::Geometry::FDynamicMesh3::GetTriNormal(&this->InitialEditPatch,local_160,uVar30);
      dVar13 = (pTVar19->field0_0x0)._s_0.X;
      dVar14 = (pTVar19->field0_0x0)._s_0.Y;
      dVar9 = (pTVar19->field0_0x0)._s_0.Z;
      uVar33 = 0;
      if ((int)uVar30 < (this->InitialTriNormals).ArrayNum) {
        uVar33 = ~uVar30 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar35 = (this->InitialTriNormals).AllocatorInstance.Data;
      pFVar28 = (FDynamicSubmesh3 *)(ulonglong)(uVar30 + 1);
      pFVar36 = (FScriptContainerElement *)((longlong)&pFVar18->BaseMesh + (longlong)pFVar35);
      *(double *)pFVar36 = dVar13;
      *(double *)(pFVar36 + 8) = dVar14;
      *(double *)(pFVar35 + 8 + (longlong)&(pFVar18->Submesh)._padding_) = dVar9;
      pFVar18 = (FDynamicSubmesh3 *)&(pFVar18->Submesh).Vertices.Blocks;
    } while ((int)(uVar30 + 1) <
             (int)((this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                  (this->InitialEditPatch).TriangleRefCounts.RefCounts.CurBlockUsed));
  }
  UE::Geometry::FExtrudeMesh::FExtrudeMesh((FExtrudeMesh *)local_c8,pFVar20);
  local_88 = __real_3f847ae147ae147b;
  UE::Geometry::FExtrudeMesh::Apply((FExtrudeMesh *)local_c8);
  local_290 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              &this->ExtrudeToInitialVerts;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            (local_290);
  local_2e8 = &this->EditVertices;
  (this->EditVertices).ArrayNum = 0;
  if ((this->EditVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_2e8->AllocatorInstance,0,&(this->EditVertices).ArrayMax);
  }
  uVar23 = (ulonglong)(int)local_70;
  local_120.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_120.Elements._48_8_ = _UNK_150631d98;
  pFVar36 = local_78.Data + 0x148;
  local_310 = local_78.Data + uVar23 * 0x1c0;
  local_120.Elements._0_8_ = 0;
  local_120.Elements._8_8_ = 0;
  local_120.Elements._32_8_ = 0;
  local_120.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_120.HashSize = 0;
  local_344 = local_70;
  uVar25 = uVar23;
  local_128 = pFVar20;
  do {
    pFVar35 = local_310;
    uVar33 = 0;
    local_2f0 = pFVar36;
    if ((int)uVar23 != (int)uVar25) {
      local_348 = 0;
      `TCheckedPointerIterator<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_348);
    }
    if (pFVar36 + -0x148 == pFVar35) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_120,&local_338);
      pTVar15 = local_2e8;
      if (local_2e8 != &local_338) {
        pFVar36 = (local_2e8->AllocatorInstance).Data;
        if (pFVar36 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar36);
        }
        (pTVar15->AllocatorInstance).Data = local_338.AllocatorInstance.Data;
        pTVar15->ArrayNum = local_338.ArrayNum;
        pTVar15->ArrayMax = local_338.ArrayMax;
        local_338.ArrayNum = 0;
        local_338.ArrayMax = 0;
        local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.AllocatorInstance.Data);
      }
      pUVar16 = local_2e0;
      pTVar7 = &local_2e0->InitialPositions;
      piVar2 = &(local_2e0->InitialPositions).ArrayMax;
      (local_2e0->InitialPositions).ArrayNum = 0;
      if ((local_2e0->InitialPositions).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar7->AllocatorInstance,0,piVar2);
      }
      pTVar8 = &pUVar16->InitialNormals;
      piVar3 = &(pUVar16->InitialNormals).ArrayMax;
      (pUVar16->InitialNormals).ArrayNum = 0;
      if ((pUVar16->InitialNormals).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&pTVar8->AllocatorInstance,0,piVar3);
      }
      local_344 = pTVar15->ArrayNum;
      uVar25 = (ulonglong)(int)local_344;
      pFVar36 = (pTVar15->AllocatorInstance).Data;
      local_310 = pFVar36 + uVar25 * 4;
      while( true ) {
        pFVar35 = local_310;
        if (local_2e8->ArrayNum != (int)uVar25) {
          local_346 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_346)
          ;
        }
        uVar33 = local_70;
        if (pFVar36 == pFVar35) {
          if (param_5) {
            uVar25 = (ulonglong)(int)local_70;
            local_288.Value = (int *)local_340;
            pFVar32 = (FExtrusionInfo *)(local_78.Data + uVar25 * 0x1c0);
            FVar29.Data = local_78.Data;
            while( true ) {
              if ((uint)uVar25 != uVar33) {
                `TCheckedPointerIterator<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_345);
              }
              if ((FExtrusionInfo *)FVar29.Data == pFVar32) break;
              UE::Geometry::FDynamicMeshEditor::RemoveTriangles
                        ((FDynamicMeshEditor *)&local_288.Value,
                         &((FExtrusionInfo *)FVar29.Data)->InitialTriangles,false);
              uVar25 = (ulonglong)local_70;
              FVar29.Data = FVar29.Data + 0x1c0;
            }
          }
          pUVar16 = local_2e0;
          dVar9 = (local_278->field0_0x0)._s_0.Y;
          plVar26 = *(longlong **)&local_2e0->field_0x50;
          (local_2e0->InputDirection).field0_0x0._s_0.X = (local_278->field0_0x0)._s_0.X;
          (local_2e0->InputDirection).field0_0x0._s_0.Y = dVar9;
          (local_2e0->InputDirection).field0_0x0._s_0.Z = (local_278->field0_0x0)._s_0.Z;
          pFVar20 = (FDynamicMesh3 *)(**(code **)(*plVar26 + 0xb38))();
          UE::Geometry::FDynamicMesh3::Copy(pFVar20,local_340,true,true,true,true);
          if (pUVar16->field_0x40 != '\0') {
            uVar21 = (**(code **)(**(longlong **)&pUVar16->field_0x50 + 0xb38))();
            *(undefined8 *)&pUVar16->field_0x70 = 0;
            *(undefined8 *)&pUVar16->field_0x68 = uVar21;
            UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                      ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&pUVar16->field_0x60,false);
            uVar22 = UE::Geometry::FDynamicMesh3::GetChangeStamp
                               (*(FDynamicMesh3 **)&pUVar16->field_0x68);
            *(ulong64 *)&pUVar16->field_0x70 = uVar22;
          }
          (**(code **)(**(longlong **)&pUVar16->field_0x50 + 0xb50))();
          if (pUVar16->field_0x120 != '\0') {
            UPreviewMesh::UpdateRenderMeshDecomposition((UPreviewMesh *)pUVar16);
          }
          UPreviewMesh::NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)pUVar16);
          local_120.HashSize = 0;
          if (local_120.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_120.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_120.Elements);
          local_c8._0_8_ = &___7FExtrudeMesh_Geometry_UE__6B_;
          DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
                    ((FExtrusionInfo *)local_78.Data,local_70);
          if ((FExtrusionInfo *)local_78.Data != (FExtrusionInfo *)0x0) {
            FMemory::Free(local_78.Data);
          }
          if (local_c8._16_8_ != 0) {
            plVar26 = (longlong *)(local_c8 + 0x20);
            if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
              plVar26 = (longlong *)local_c8._56_8_;
            }
            (**(code **)(*plVar26 + 0x10))();
          }
          return;
        }
        uVar33 = *(uint *)pFVar36;
        pFVar35 = (pTVar7->AllocatorInstance).Data;
        lVar24 = *(longlong *)
                  ((local_340->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar33 >> 9) * 8);
        puVar5 = (undefined8 *)(lVar24 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
        local_2b8 = *puVar5;
        uStack_2b0 = puVar5[1];
        local_2a8 = *(undefined8 *)(lVar24 + 0x10 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
        if (((pFVar35 <= (FScriptContainerElement *)&local_2b8) &&
            ((FScriptContainerElement *)&local_2b8 < pFVar35 + (longlong)*piVar2 * 0x18)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar27 = (pUVar16->InitialPositions).ArrayNum;
        if (iVar27 == *piVar2) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar7->AllocatorInstance,piVar2);
        }
        (pUVar16->InitialPositions).ArrayNum = iVar27 + 1;
        pFVar11 = (pTVar7->AllocatorInstance).Data;
        pFVar35 = pFVar11 + (longlong)iVar27 * 0x18;
        *(undefined8 *)pFVar35 = local_2b8;
        *(undefined8 *)(pFVar35 + 8) = uStack_2b0;
        *(undefined8 *)(pFVar11 + (longlong)iVar27 * 0x18 + 0x10) = local_2a8;
        if ((local_340->VertexNormals).bIsSet == false) {
          local_300 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
          local_2f8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          uVar37 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
        }
        else {
          lVar24 = *(longlong *)
                    ((local_340->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar33 >> 9) * 8);
          pfVar6 = (float *)(lVar24 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
          uVar37 = *pfVar6;
          local_300 = *(undefined8 *)pfVar6;
          local_2f8 = *(float *)(lVar24 + 8 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
        }
        pFVar35 = (pTVar8->AllocatorInstance).Data;
        local_2d0 = (double)(float)uVar37;
        dStack_2c8 = (double)local_300._4_4_;
        local_2c0 = (double)local_2f8;
        if (((pFVar35 <= (FScriptContainerElement *)&local_2d0) &&
            ((FScriptContainerElement *)&local_2d0 < pFVar35 + (longlong)*piVar3 * 0x18)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) break;
        iVar27 = (pUVar16->InitialNormals).ArrayNum;
        if (iVar27 == *piVar3) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar8->AllocatorInstance,piVar3);
        }
        (pUVar16->InitialNormals).ArrayNum = iVar27 + 1;
        pFVar36 = pFVar36 + 4;
        pFVar11 = (pTVar8->AllocatorInstance).Data;
        pFVar35 = pFVar11 + (longlong)iVar27 * 0x18;
        *(double *)pFVar35 = local_2d0;
        *(double *)(pFVar35 + 8) = dStack_2c8;
        *(double *)(pFVar11 + (longlong)iVar27 * 0x18 + 0x10) = local_2c0;
        uVar25 = (ulonglong)local_344;
      }
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar30 = *(uint *)(pFVar36 + 0x30);
    puVar31 = *(uint **)(pFVar36 + 0x28);
    if (((int)uVar30 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    puVar4 = puVar31 + (int)uVar30;
    for (; puVar31 != puVar4; puVar31 = puVar31 + 1) {
      uVar25 = (ulonglong)(*puVar31 & 0x1ff);
      lVar24 = *(longlong *)
                ((local_128->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(*puVar31 >> 9) * 8);
      local_268 = *(undefined8 *)(lVar24 + uVar25 * 0xc);
      uVar37 = *(undefined4 *)(lVar24 + 8 + uVar25 * 0xc);
      local_328[0] = (undefined4)local_268;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_120,&local_2a0,(bool *)local_328);
      local_320[0] = local_268._4_4_;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_120,&local_29c,(bool *)local_320);
      local_318[0] = uVar37;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_120,local_298,(bool *)local_318);
    }
    uVar30 = *(uint *)pFVar36;
    uStack_244 = 1;
    local_230 = 0;
    uStack_234 = local_230;
    uStack_248 = uVar33;
    if (uVar30 != 0) {
      pFVar35 = *(FScriptContainerElement **)(pFVar36 + -8);
      if (pFVar35 == (FScriptContainerElement *)0x0) {
        pFVar35 = pFVar36 + -0x18;
      }
      uVar10 = *(uint *)pFVar35;
      local_230 = uVar33;
      while (uVar10 == 0) {
        lVar24 = (longlong)(int)uVar33;
        local_230 = local_230 + 0x20;
        uVar33 = uVar33 + 1;
        uStack_234 = uVar30;
        uStack_248 = uVar33;
        if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar33)
        goto LAB_14cb1e910;
        uVar10 = *(uint *)(pFVar35 + lVar24 * 4 + 4);
      }
      uStack_244 = -uVar10 & uVar10;
      uVar25 = (ulonglong)uStack_244 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_258 = (int)lVar24;
      uStack_234 = (local_230 - 1) + local_258;
      uStack_248 = uVar33;
      if ((int)uVar30 < (int)uStack_234) {
        uStack_234 = uVar30;
      }
    }
LAB_14cb1e910:
    pFVar35 = pFVar36 + -0x28;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar36 + -0x18);
    iStack_228 = *(uint *)(pFVar36 + -0x20) - *(uint *)(pFVar36 + 0xc);
    uVar33 = uVar30 & 0xffffffe0;
    TStack_218._padding_ = CONCAT44(uStack_244,uStack_248);
    uStack_238 = 0xffffffff;
    TStack_218.CurrentBitIndex = uStack_234;
    TStack_218.UnvisitedBitMask = 0xffffffff;
    TStack_218._28_4_ = local_12c;
    TStack_218.BaseBitIndex = local_230;
    uStack_1f8 = CONCAT44(uStack_224,iStack_228);
    iVar27 = (int)uVar30 >> 5;
    local_250 = pFVar35;
    local_240 = pTVar1;
    local_220 = pFVar35;
    TStack_218.Array = pTVar1;
    if (((int)uVar30 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    this_01 = local_290;
    uVar10 = *(uint *)pFVar36;
    if (uVar30 != uVar10) {
      pTVar34 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar36 + -8) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar34 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar36 + -8);
      }
      uVar30 = -1 << ((byte)uVar30 & 0x1f) &
               *(uint *)((pTVar34->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
      while (uVar30 == 0) {
        lVar24 = (longlong)iVar27;
        uVar33 = uVar33 + 0x20;
        iVar27 = iVar27 + 1;
        uVar30 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
        goto LAB_14cb1ea30;
        uVar30 = *(uint *)((pTVar34->AllocatorInstance).InlineData + lVar24 * 4 + 4);
      }
      uVar25 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_270 = (int)lVar24;
      uVar30 = (uVar33 - 1) + local_270;
      if ((int)uVar10 < (int)uVar30) {
        uVar30 = uVar10;
      }
    }
LAB_14cb1ea30:
    while( true ) {
      pFVar36 = local_220;
      if (*(uint *)(local_220 + 8) - *(uint *)(local_220 + 0x34) != (int)uStack_1f8) {
        local_347 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_347);
      }
      if (((TStack_218.CurrentBitIndex == uVar30) && (TStack_218.Array == pTVar1)) &&
         (pFVar36 == pFVar35)) break;
      local_2d8 = *(undefined8 *)
                   (*(longlong *)pFVar36 + (longlong)TStack_218.CurrentBitIndex * 0x10);
      local_1f0 = (longlong)&local_2d8 + 4;
      local_1e8 = &local_2d8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(this_01,&local_288,(bool *)&local_1f0);
      TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
    }
    uVar23 = (ulonglong)local_70;
    pFVar36 = local_2f0 + 0x1c0;
    uVar25 = (ulonglong)local_344;
  } while( true );
}

// InitializeInsetType @ 14cb1fc40

void __thiscall
UPolyEditPreviewMesh::InitializeInsetType
          (UPolyEditPreviewMesh *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TTransform<double> *param_3)

{
  TUniquePtr<UE::Geometry::FDynamicSubmesh3,TDefaultDelete<UE::Geometry::FDynamicSubmesh3>_>
  *this_00;
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FDynamicSubmesh3 *pFVar5;
  FDynamicSubmesh3 *pFVar6;
  FDynamicMesh3 *this_01;
  undefined8 uVar7;
  ulong64 uVar8;
  FDynamicMesh3 *pFVar9;
  TDefaultDelete<UE::Geometry::FDynamicSubmesh3> local_a8 [8];
  TQuaternion<double>_u_0 local_a0;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_40;
  double local_28;
  
  pFVar5 = ::operator_new(0x5f0);
  pFVar6 = (FDynamicSubmesh3 *)0x0;
  if (pFVar5 != (FDynamicSubmesh3 *)0x0) {
    pFVar6 = UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3(pFVar5,param_1,param_2,8,true);
  }
  this_00 = &this->ActiveSubmesh;
  if ((TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *)this_00 == local_a8) {
    if (pFVar6 != (FDynamicSubmesh3 *)0x0) {
      (pFVar6->BaseBorderV).HashSize = 0;
      FVar1 = (pFVar6->BaseBorderV).Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar6->BaseBorderV).Elements);
      (pFVar6->BaseBoundaryE).HashSize = 0;
      FVar1 = (pFVar6->BaseBoundaryE).Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar6->BaseBoundaryE).Elements);
      (pFVar6->BaseBorderE).HashSize = 0;
      FVar1 = (pFVar6->BaseBorderE).Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar6->BaseBorderE).Elements);
      UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&pFVar6->Mappings);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&pFVar6->Submesh);
      ::operator_delete(pFVar6,0x5f0);
    }
  }
  else {
    pFVar5 = this_00->Ptr;
    this_00->Ptr = pFVar6;
    TDefaultDelete<UE::Geometry::FDynamicSubmesh3>::operator()
              ((TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *)this_00,pFVar5);
  }
  pFVar5 = this_00->Ptr;
  pFVar9 = &pFVar5->Submesh;
  if (((((pFVar5->Submesh).VertexRefCounts.FreeIndices.CurBlock * 0x200 +
         (pFVar5->Submesh).VertexRefCounts.FreeIndices.CurBlockUsed != 0) ||
       ((pFVar5->Submesh).EdgeRefCounts.FreeIndices.CurBlock * 0x200 +
        (pFVar5->Submesh).EdgeRefCounts.FreeIndices.CurBlockUsed != 0)) ||
      ((pFVar5->Submesh).TriangleRefCounts.FreeIndices.CurBlock * 0x200 +
       (pFVar5->Submesh).TriangleRefCounts.FreeIndices.CurBlockUsed != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EditPatch.IsCompact()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PolyEditPreviewMesh.cpp"
                         ,0xf8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bHaveMeshTransform = param_3 != (TTransform<double> *)0x0;
  if (param_3 != (TTransform<double> *)0x0) {
    dVar3 = (param_3->Rotation).XY.m128d_f64[1];
    (this->MeshTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    (this->MeshTransform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Rotation).ZW.m128d_f64[1];
    (this->MeshTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    (this->MeshTransform).Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Translation).XY.m128d_f64[1];
    (this->MeshTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    (this->MeshTransform).Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Translation).ZW.m128d_f64[1];
    (this->MeshTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    (this->MeshTransform).Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Scale3D).XY.m128d_f64[1];
    (this->MeshTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    (this->MeshTransform).Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Scale3D).ZW.m128d_f64[1];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
    local_a0._s_0.X = (this->MeshTransform).Rotation.XY.m128d_f64[0];
    local_a0._s_0.Y = (this->MeshTransform).Rotation.XY.m128d_f64[1];
    local_a0._s_0.Z = (this->MeshTransform).Rotation.ZW.m128d_f64[0];
    local_a0._s_0.W = (this->MeshTransform).Rotation.ZW.m128d_f64[1];
    local_70 = (this->MeshTransform).Translation.ZW.m128d_f64[0];
    local_58 = (this->MeshTransform).Scale3D.ZW.m128d_f64[0];
    local_80 = (this->MeshTransform).Translation.XY.m128d_f64[0];
    dStack_78 = (this->MeshTransform).Translation.XY.m128d_f64[1];
    local_68 = (this->MeshTransform).Scale3D.XY.m128d_f64[0];
    dStack_60 = (this->MeshTransform).Scale3D.XY.m128d_f64[1];
    local_40 = local_70;
    local_28 = local_58;
    MeshTransforms::ApplyTransform(pFVar9,(TTransformSRT3<double> *)&local_a0._s_0,true,All);
  }
  UE::Geometry::FDynamicMesh3::operator=(&this->InitialEditPatch,pFVar9);
  this_01 = (FDynamicMesh3 *)(**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
  UE::Geometry::FDynamicMesh3::Copy(this_01,pFVar9,true,true,true,true);
  if (this->field_0x40 != '\0') {
    uVar7 = (**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
    *(undefined8 *)&this->field_0x70 = 0;
    *(undefined8 *)&this->field_0x68 = uVar7;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x60,false);
    uVar8 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)&this->field_0x68);
    *(ulong64 *)&this->field_0x70 = uVar8;
  }
  (**(code **)(**(longlong **)&this->field_0x50 + 0xb50))();
  if (this->field_0x120 != '\0') {
    UPreviewMesh::UpdateRenderMeshDecomposition((UPreviewMesh *)this);
  }
  UPreviewMesh::NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)this);
  return;
}

// InitializeStaticType @ 14cb20900

void __thiscall
UPolyEditPreviewMesh::InitializeStaticType
          (UPolyEditPreviewMesh *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TTransform<double> *param_3)

{
  TUniquePtr<UE::Geometry::FDynamicSubmesh3,TDefaultDelete<UE::Geometry::FDynamicSubmesh3>_>
  *this_00;
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FDynamicSubmesh3 *pFVar5;
  FDynamicSubmesh3 *pFVar6;
  FDynamicMesh3 *this_01;
  undefined8 uVar7;
  ulong64 uVar8;
  FDynamicMesh3 *pFVar9;
  TDefaultDelete<UE::Geometry::FDynamicSubmesh3> local_a8 [8];
  TQuaternion<double>_u_0 local_a0;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_40;
  double local_28;
  
  pFVar5 = ::operator_new(0x5f0);
  pFVar6 = (FDynamicSubmesh3 *)0x0;
  if (pFVar5 != (FDynamicSubmesh3 *)0x0) {
    pFVar6 = UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3(pFVar5,param_1,param_2,8,true);
  }
  this_00 = &this->ActiveSubmesh;
  if ((TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *)this_00 == local_a8) {
    if (pFVar6 != (FDynamicSubmesh3 *)0x0) {
      (pFVar6->BaseBorderV).HashSize = 0;
      FVar1 = (pFVar6->BaseBorderV).Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar6->BaseBorderV).Elements);
      (pFVar6->BaseBoundaryE).HashSize = 0;
      FVar1 = (pFVar6->BaseBoundaryE).Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar6->BaseBoundaryE).Elements);
      (pFVar6->BaseBorderE).HashSize = 0;
      FVar1 = (pFVar6->BaseBorderE).Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar6->BaseBorderE).Elements);
      UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&pFVar6->Mappings);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&pFVar6->Submesh);
      ::operator_delete(pFVar6,0x5f0);
    }
  }
  else {
    pFVar5 = this_00->Ptr;
    this_00->Ptr = pFVar6;
    TDefaultDelete<UE::Geometry::FDynamicSubmesh3>::operator()
              ((TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *)this_00,pFVar5);
  }
  pFVar5 = this_00->Ptr;
  pFVar9 = &pFVar5->Submesh;
  if (((((pFVar5->Submesh).VertexRefCounts.FreeIndices.CurBlock * 0x200 +
         (pFVar5->Submesh).VertexRefCounts.FreeIndices.CurBlockUsed != 0) ||
       ((pFVar5->Submesh).EdgeRefCounts.FreeIndices.CurBlock * 0x200 +
        (pFVar5->Submesh).EdgeRefCounts.FreeIndices.CurBlockUsed != 0)) ||
      ((pFVar5->Submesh).TriangleRefCounts.FreeIndices.CurBlock * 0x200 +
       (pFVar5->Submesh).TriangleRefCounts.FreeIndices.CurBlockUsed != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EditPatch.IsCompact()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PolyEditPreviewMesh.cpp"
                         ,0x130,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bHaveMeshTransform = param_3 != (TTransform<double> *)0x0;
  if (param_3 != (TTransform<double> *)0x0) {
    dVar3 = (param_3->Rotation).XY.m128d_f64[1];
    (this->MeshTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    (this->MeshTransform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Rotation).ZW.m128d_f64[1];
    (this->MeshTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    (this->MeshTransform).Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Translation).XY.m128d_f64[1];
    (this->MeshTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    (this->MeshTransform).Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Translation).ZW.m128d_f64[1];
    (this->MeshTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    (this->MeshTransform).Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Scale3D).XY.m128d_f64[1];
    (this->MeshTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    (this->MeshTransform).Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Scale3D).ZW.m128d_f64[1];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    (this->MeshTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
    local_a0._s_0.X = (this->MeshTransform).Rotation.XY.m128d_f64[0];
    local_a0._s_0.Y = (this->MeshTransform).Rotation.XY.m128d_f64[1];
    local_a0._s_0.Z = (this->MeshTransform).Rotation.ZW.m128d_f64[0];
    local_a0._s_0.W = (this->MeshTransform).Rotation.ZW.m128d_f64[1];
    local_70 = (this->MeshTransform).Translation.ZW.m128d_f64[0];
    local_58 = (this->MeshTransform).Scale3D.ZW.m128d_f64[0];
    local_80 = (this->MeshTransform).Translation.XY.m128d_f64[0];
    dStack_78 = (this->MeshTransform).Translation.XY.m128d_f64[1];
    local_68 = (this->MeshTransform).Scale3D.XY.m128d_f64[0];
    dStack_60 = (this->MeshTransform).Scale3D.XY.m128d_f64[1];
    local_40 = local_70;
    local_28 = local_58;
    MeshTransforms::ApplyTransform(pFVar9,(TTransformSRT3<double> *)&local_a0._s_0,true,All);
  }
  UE::Geometry::FDynamicMesh3::operator=(&this->InitialEditPatch,pFVar9);
  this_01 = (FDynamicMesh3 *)(**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
  UE::Geometry::FDynamicMesh3::Copy(this_01,pFVar9,true,true,true,true);
  if (this->field_0x40 != '\0') {
    uVar7 = (**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
    *(undefined8 *)&this->field_0x70 = 0;
    *(undefined8 *)&this->field_0x68 = uVar7;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x60,false);
    uVar8 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)&this->field_0x68);
    *(ulong64 *)&this->field_0x70 = uVar8;
  }
  (**(code **)(**(longlong **)&this->field_0x50 + 0xb50))();
  if (this->field_0x120 != '\0') {
    UPreviewMesh::UpdateRenderMeshDecomposition((UPreviewMesh *)this);
  }
  UPreviewMesh::NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)this);
  return;
}

// MakeExtrudeTypeHitTargetMesh @ 14cb23440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UPolyEditPreviewMesh::MakeExtrudeTypeHitTargetMesh
          (UPolyEditPreviewMesh *this,FDynamicMesh3 *param_1,bool param_2)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res18 [8];
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [48];
  undefined1 local_78 [24];
  double dStack_60;
  longlong local_58 [6];
  ForAnyElementType local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c0 = (this->InputDirection).field0_0x0._s_0.X;
  dStack_b8 = (this->InputDirection).field0_0x0._s_0.Y;
  local_b0 = (this->InputDirection).field0_0x0._s_0.Z;
  local_c8 = __real_40f869f000000000;
  local_res18[0] = param_2;
  UE::Geometry::FDynamicMesh3::operator=(param_1,&this->InitialEditPatch);
  uVar10 = (uint)local_c8 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)local_c8 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar1 = dStack_b8 * (double)CONCAT44(uVar11,uVar10);
  local_a8._16_8_ = (double)CONCAT44(uVar11,uVar10) * local_b0;
  local_a8._8_4_ = SUB84(dVar1,0);
  local_a8._0_8_ = local_c0 * (double)CONCAT44(uVar11,uVar10);
  local_a8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  MeshTransforms::Translate(param_1,(TVector<double> *)&((TVector<double>_u_0 *)local_a8)->_s_0,All)
  ;
  UE::Geometry::FExtrudeMesh::FExtrudeMesh((FExtrudeMesh *)local_78,param_1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_a8._8_8_;
  local_a8._0_16_ = auVar3 << 0x40;
  puVar7 = FMemory::Malloc(0x20,8);
  uVar6 = local_58[1]._4_4_;
  uVar5 = (undefined4)local_58[1];
  uVar4 = local_78._16_8_;
  *puVar7 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UPolyEditPreviewMesh::MakeExtrudeTypeHitTargetMesh'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar7[1] = &local_c8;
  puVar7[2] = local_res18;
  puVar7[3] = &local_c0;
  local_78._16_8_ = local_a8._0_8_;
  if (puVar7 + 1 != (longlong *)0x0) {
    local_78._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UPolyEditPreviewMesh::MakeExtrudeTypeHitTargetMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<float>_const_&,int>
         ::Call;
  }
  pdVar2 = (double *)CONCAT44(local_58[3]._4_4_,(undefined4)local_58[3]);
  dStack_60 = (double)local_a8._8_8_;
  local_a8._40_4_ = SUB84(puVar7,0);
  local_a8._44_4_ = (undefined4)((ulonglong)puVar7 >> 0x20);
  local_58[2]._0_4_ = local_a8._32_4_;
  local_58[2]._4_4_ = local_a8._36_4_;
  local_58[3]._0_4_ = local_a8._40_4_;
  local_58[3]._4_4_ = local_a8._44_4_;
  local_58[0]._0_4_ = local_a8._16_4_;
  local_58[0]._4_4_ = local_a8._20_4_;
  local_58[1]._0_4_ = local_a8._24_4_;
  local_58[1]._4_4_ = local_a8._28_4_;
  local_a8._24_4_ = uVar5;
  local_a8._28_4_ = uVar6;
  if (uVar4 != 0) {
    pdVar8 = &(((TVector<double>_u_0 *)local_a8)->_s_0).Z;
    if (pdVar2 != (double *)0x0) {
      pdVar8 = pdVar2;
    }
    (**(code **)((longlong)*pdVar8 + 0x10))();
  }
  UE::Geometry::FExtrudeMesh::Apply((FExtrudeMesh *)local_78);
  local_78._0_8_ = &___7FExtrudeMesh_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
            ((FExtrusionInfo *)local_28.Data,local_20);
  if ((FExtrusionInfo *)local_28.Data != (FExtrusionInfo *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if ((code *)local_78._16_8_ != (code *)0x0) {
    plVar9 = local_58;
    if ((longlong *)CONCAT44(local_58[3]._4_4_,(undefined4)local_58[3]) != (longlong *)0x0) {
      plVar9 = (longlong *)CONCAT44(local_58[3]._4_4_,(undefined4)local_58[3]);
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// MakeInsetTypeTargetMesh @ 14cb23600

void __thiscall
UPolyEditPreviewMesh::MakeInsetTypeTargetMesh(UPolyEditPreviewMesh *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TTransform<double> *pTVar6;
  TQuaternion<double>_u_0 local_60;
  undefined1 local_40 [16];
  double local_30;
  undefined1 local_28 [16];
  double local_18;
  
  UE::Geometry::FDynamicMesh3::operator=(param_1,&this->InitialEditPatch);
  if (*(longlong *)&this->field_0x48 == 0) {
    local_60._s_0.X = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_60._s_0.Y = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_60._s_0.Z = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_60._s_0.W = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    dVar4 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dVar5 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    dVar2 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    dVar3 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_18 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_30 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)&this->field_0x48 + 0x1b8);
    if (lVar1 == 0) {
      pTVar6 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar6 = (TTransform<double> *)(lVar1 + 0x1f0);
    }
    local_60._s_0.X = (pTVar6->Rotation).XY.m128d_f64[0];
    local_60._s_0.Y = (pTVar6->Rotation).XY.m128d_f64[1];
    local_60._s_0.Z = (pTVar6->Rotation).ZW.m128d_f64[0];
    local_60._s_0.W = (pTVar6->Rotation).ZW.m128d_f64[1];
    dVar2 = (pTVar6->Translation).XY.m128d_f64[0];
    dVar3 = (pTVar6->Translation).XY.m128d_f64[1];
    local_30 = (pTVar6->Translation).ZW.m128d_f64[0];
    dVar4 = (pTVar6->Scale3D).XY.m128d_f64[0];
    dVar5 = (pTVar6->Scale3D).XY.m128d_f64[1];
    local_18 = (pTVar6->Scale3D).ZW.m128d_f64[0];
  }
  local_40._8_4_ = SUB84(dVar3,0);
  local_40._0_8_ = dVar2;
  local_40._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_28._8_4_ = SUB84(dVar5,0);
  local_28._0_8_ = dVar4;
  local_28._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  MeshTransforms::ApplyTransform(param_1,(TTransformSRT3<double> *)&local_60._s_0,false,All);
  return;
}

// MakeStaticTypeTargetMesh @ 14cb238a0

void __thiscall
UPolyEditPreviewMesh::MakeStaticTypeTargetMesh(UPolyEditPreviewMesh *this,FDynamicMesh3 *param_1)

{
  UE::Geometry::FDynamicMesh3::operator=(param_1,&this->InitialEditPatch);
  return;
}

// StaticRegisterNativesUPolyEditPreviewMesh @ 14cb3ebd0

void __cdecl UPolyEditPreviewMesh::StaticRegisterNativesUPolyEditPreviewMesh(void)

{
  return;
}

// UpdateExtrudeType @ 14cb463b0

void __thiscall
UPolyEditPreviewMesh::UpdateExtrudeType(UPolyEditPreviewMesh *this,double param_1,bool param_2)

{
  double local_res10;
  undefined1 local_res18 [16];
  code *local_38;
  UPolyEditPreviewMesh **local_30;
  UPolyEditPreviewMesh *local_28;
  double *local_20;
  undefined1 *local_18;
  
  local_20 = &local_res10;
  local_18 = local_res18;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPolyEditPreviewMesh::UpdateExtrudeType'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_28 = this;
  UPreviewMesh::EditMesh
            ((UPreviewMesh *)this,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38);
  return;
}

// UpdateExtrudeType @ 14cb46400

void __thiscall
UPolyEditPreviewMesh::UpdateExtrudeType
          (UPolyEditPreviewMesh *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *param_1,bool param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> local_248;
  FDynamicMesh3 local_238;
  
  if (param_2) {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238,&this->InitialEditPatch);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_238);
    (**(code **)(**(longlong **)&this->field_0x50 + 0xb28))();
    if (this->field_0x40 != '\0') {
      uVar1 = (**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
      *(undefined8 *)&this->field_0x70 = 0;
      *(undefined8 *)&this->field_0x68 = uVar1;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x60,false);
      uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)&this->field_0x68);
      *(ulong64 *)&this->field_0x70 = uVar2;
    }
    if (this->field_0x120 != '\0') {
      UPreviewMesh::UpdateRenderMeshDecomposition((UPreviewMesh *)this);
    }
    UPreviewMesh::NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)this);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
    return;
  }
  local_248._0_8_ = *(undefined8 *)param_1;
  local_248._8_8_ = *(undefined8 *)&param_1->field_0x8;
  UPreviewMesh::EditMesh((UPreviewMesh *)this,&local_248);
  return;
}

// UpdateExtrudeType_FaceNormalAvg @ 14cb464f0

void __thiscall
UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg(UPolyEditPreviewMesh *this,double param_1)

{
  double local_res10 [3];
  UPolyEditPreviewMesh *local_28;
  double *local_20;
  code *local_18;
  UPolyEditPreviewMesh **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPolyEditPreviewMesh::UpdateExtrudeType_FaceNormalAvg'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_res10[0] = param_1;
  local_28 = this;
  UPreviewMesh::EditMesh
            ((UPreviewMesh *)this,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18);
  return;
}

// UpdateInsetType @ 14cb47e60

void __thiscall
UPolyEditPreviewMesh::UpdateInsetType
          (UPolyEditPreviewMesh *this,double param_1,bool param_2,double param_3,double param_4,
          bool param_5)

{
  int iVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  FDynamicMesh3 *this_00;
  undefined8 uVar5;
  ulong64 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_2e8 [4];
  FInsetMeshRegion local_2d8;
  FDynamicMesh3 local_268;
  
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268,&this->InitialEditPatch);
  UE::Geometry::FInsetMeshRegion::FInsetMeshRegion(&local_2d8,&local_268);
  uVar9 = local_268.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
          local_268.TriangleRefCounts.RefCounts.CurBlockUsed;
  uVar8 = 0;
  if ((uVar9 != 0) &&
     (uVar8 = 0,
     0xfffd < (ushort)(**(short **)
                         local_268.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data - 1U)))
  {
    uVar7 = 1;
    uVar8 = 1;
    if (1 < (int)uVar9) {
      do {
        sVar2 = *(short *)(*(longlong *)
                            (local_268.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2);
        if ((sVar2 != 0) && (uVar8 = uVar7, sVar2 != -1)) break;
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
      } while ((int)uVar7 < (int)uVar9);
    }
  }
joined_r0x00014cb47f1a:
  if (uVar8 == uVar9) {
    local_2d8.AreaCorrection = (float)param_4;
    local_2d8.bSolveRegionInteriors = !param_5;
    local_2d8.Softness = (float)param_3;
    local_2d8.InsetDistance = param_1;
    local_2d8.bReproject = param_2;
    UE::Geometry::FInsetMeshRegion::Apply(&local_2d8);
    UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals(&local_268,false,true,true,true);
    this_00 = (FDynamicMesh3 *)(**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
    UE::Geometry::FDynamicMesh3::Copy(this_00,&local_268,true,true,true,true);
    if (this->field_0x40 != '\0') {
      uVar5 = (**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
      *(undefined8 *)&this->field_0x70 = 0;
      *(undefined8 *)&this->field_0x68 = uVar5;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x60,false);
      uVar6 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)&this->field_0x68);
      *(ulong64 *)&this->field_0x70 = uVar6;
    }
    (**(code **)(**(longlong **)&this->field_0x50 + 0xb50))();
    if (this->field_0x120 != '\0') {
      UPreviewMesh::UpdateRenderMeshDecomposition((UPreviewMesh *)this);
    }
    UPreviewMesh::NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)this);
    UE::Geometry::FInsetMeshRegion::~FInsetMeshRegion(&local_2d8);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
    return;
  }
  do {
    local_2e8[0] = uVar8;
    if (((local_2d8.Triangles.AllocatorInstance.Data <= (FScriptContainerElement *)local_2e8) &&
        ((FScriptContainerElement *)local_2e8 <
         local_2d8.Triangles.AllocatorInstance.Data + (longlong)local_2d8.Triangles.ArrayMax * 4))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_2d8.Triangles.ArrayNum == local_2d8.Triangles.ArrayMax) {
      local_2d8.Triangles.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_2d8.Triangles.AllocatorInstance,&local_2d8.Triangles.ArrayMax);
    }
    iVar1 = local_2d8.Triangles.ArrayNum + 1;
    *(uint *)(local_2d8.Triangles.AllocatorInstance.Data +
             (longlong)local_2d8.Triangles.ArrayNum * 4) = local_2e8[0];
    do {
      uVar8 = uVar8 + 1;
      local_2d8.Triangles.ArrayNum = iVar1;
      if ((int)uVar9 <= (int)uVar8) goto joined_r0x00014cb47f1a;
      sVar2 = *(short *)(*(longlong *)
                          (local_268.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 2);
    } while ((sVar2 == 0) || (sVar2 == -1));
  } while( true );
}

// UpdateStaticType @ 14cb49bc0

void __thiscall
UPolyEditPreviewMesh::UpdateStaticType
          (UPolyEditPreviewMesh *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *param_1,bool param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> local_248;
  FDynamicMesh3 local_238;
  
  if (param_2) {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238,&this->InitialEditPatch);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_238);
    (**(code **)(**(longlong **)&this->field_0x50 + 0xb28))();
    if (this->field_0x40 != '\0') {
      uVar1 = (**(code **)(**(longlong **)&this->field_0x50 + 0xb38))();
      *(undefined8 *)&this->field_0x70 = 0;
      *(undefined8 *)&this->field_0x68 = uVar1;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x60,false);
      uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)&this->field_0x68);
      *(ulong64 *)&this->field_0x70 = uVar2;
    }
    if (this->field_0x120 != '\0') {
      UPreviewMesh::UpdateRenderMeshDecomposition((UPreviewMesh *)this);
    }
    UPreviewMesh::NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)this);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
    return;
  }
  local_248._0_8_ = *(undefined8 *)param_1;
  local_248._8_8_ = *(undefined8 *)&param_1->field_0x8;
  UPreviewMesh::EditMesh((UPreviewMesh *)this,&local_248);
  return;
}

// __VTableCtorCaller @ 14cb4bb80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPolyEditPreviewMesh::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x20 = 0;
    *(undefined ***)pUVar4 = &UPreviewMesh::_vftable__for__UObject__;
    *(undefined ***)(pUVar4 + 1) = &UPreviewMesh::_vftable__for__IMeshVertexCommandChangeTarget__;
    *(undefined ***)&pUVar4[1].field_0x8 = &UPreviewMesh::_vftable__for__IMeshCommandChangeTarget__;
    *(undefined ***)&pUVar4[1].field_0x10 =
         &UPreviewMesh::_vftable__for__IMeshReplacementCommandChangeTarget__;
    *(undefined8 *)(pUVar4 + 2) = 0;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&pUVar4[2].field_0x10);
    pUVar4[7].field_0x8 = 0;
    *(undefined ***)pUVar4 = &_vftable__for__UObject__;
    *(undefined8 *)&pUVar4[7].field_0x10 = 0;
    *(undefined ***)(pUVar4 + 1) = &_vftable__for__IMeshVertexCommandChangeTarget__;
    *(undefined ***)&pUVar4[1].field_0x8 = &_vftable__for__IMeshCommandChangeTarget__;
    *(undefined ***)&pUVar4[1].field_0x10 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&pUVar4[7].field_0x18);
    *(undefined8 *)&pUVar4[0x15].field_0x18 = 0;
    *(undefined8 *)&pUVar4[0x15].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 0x16) = 0;
    *(undefined8 *)&pUVar4[0x16].field_0x8 = 0;
    *(undefined8 *)&pUVar4[0x16].field_0x10 = 0;
    *(undefined8 *)&pUVar4[0x16].field_0x18 = 0;
    *(undefined8 *)&pUVar4[0x16].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 0x17) = 0;
    *(undefined8 *)&pUVar4[0x17].field_0x8 = 0;
    *(undefined8 *)&pUVar4[0x17].field_0x10 = 0;
    *(undefined8 *)(pUVar4 + 0x18) = 0;
    *(undefined4 *)&pUVar4[0x18].field_0x8 = 0;
    *(undefined4 *)&pUVar4[0x18].field_0xc = 0x80;
    *(undefined4 *)&pUVar4[0x18].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar4[0x18].field_0x14 = 0;
    *(undefined8 *)&pUVar4[0x18].field_0x20 = 0;
    *(undefined4 *)(pUVar4 + 0x19) = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 0x1a) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[0x1a].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[0x1a].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[0x1a].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[0x1a].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 0x1b) = (double)fVar1;
    *(double *)&pUVar4[0x1b].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[0x1b].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[0x1b].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[0x1b].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 0x1c) = (double)fVar2;
    *(double *)&pUVar4[0x1c].field_0x8 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

