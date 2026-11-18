// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 33

// operator() @ 14635faf0

TVector<float> * __thiscall
`FGeometryCollectionEngineConversion::ConvertCollectionToSkeleton'::__l2::<lambda_1>::operator()
          (void *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  TVector<float> *pTVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar4;
  if (**(char **)((longlong)this + 0x18) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + 0x30);
    if ((plVar1 != (longlong *)0x0) && (-1 < param_1)) {
      iVar6 = (**(code **)(*plVar1 + 0x60))();
      if (iVar6 <= param_1) goto LAB_14635fb69;
      piVar7 = TManagedArrayAccessor<int>::operator[]
                         (*(TManagedArrayAccessor<int> **)((longlong)this + 8),param_1);
      if (*piVar7 != 1) {
        return __return_storage_ptr__;
      }
    }
    if (-1 < param_1) {
LAB_14635fb69:
      lVar2 = *(longlong *)this;
      if (param_1 < *(int *)(lVar2 + 0x18)) {
        uVar9 = 0;
        if (param_1 < *(int *)(lVar2 + 0x18)) {
          uVar9 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TVector<float> *)(*pcVar3)();
          return pTVar8;
        }
        uVar9 = *(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)param_1 * 4);
        if (uVar9 != 0xffffffff) {
          lVar2 = *(longlong *)((longlong)this + 0x10);
          if ((*(longlong *)(lVar2 + 0x40) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                 ,0x67,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TVector<float> *)(*pcVar3)();
            return pTVar8;
          }
          lVar2 = *(longlong *)(lVar2 + 0x40);
          uVar11 = 0;
          if ((int)uVar9 < *(int *)(lVar2 + 0x18)) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TVector<float> *)(*pcVar3)();
            return pTVar8;
          }
          lVar2 = *(longlong *)(lVar2 + 0x10);
          lVar10 = (longlong)(int)uVar9 * 0x38;
          dVar12 = (*(double *)(lVar10 + 0x20 + lVar2) + *(double *)(lVar10 + 8 + lVar2)) *
                   __real_3fe0000000000000;
          dVar13 = (*(double *)(lVar10 + 0x28 + lVar2) + *(double *)(lVar10 + 0x10 + lVar2)) *
                   __real_3fe0000000000000;
          (__return_storage_ptr__->field0_0x0)._s_0.X =
               (float)((*(double *)(lVar10 + 0x18 + lVar2) + *(double *)(lVar10 + lVar2)) *
                      __real_3fe0000000000000);
          (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar12;
          (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar13;
        }
      }
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 146360e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FGeometryCollectionEngineConversion::ConvertCollectionToSkeleton'::__l34::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  TVector<float>_u_0 *pTVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  FName local_158;
  FMeshBoneInfo local_150;
  FReferenceSkeletonModifier local_140;
  FName local_130;
  FString local_128;
  TVector<float> local_118;
  __m128 local_108;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  __m128 local_d8;
  undefined1 local_c8 [16];
  __m128 local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar12 = (longlong)param_1;
  lVar3 = **(longlong **)this;
  uVar11 = (uint)~param_1 >> 0x1f;
  iVar8 = *(int *)(lVar3 + 0x18);
  uVar7 = 0;
  if (param_1 < iVar8) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    local_168 = lVar12;
    local_160 = (longlong)iVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  iVar1 = *(int *)(lVar3 + 8 + lVar12 * 0x10);
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  pFVar9 = ::FName::FName(&local_130,iVar8,*(wchar_t **)(lVar3 + lVar12 * 0x10),FNAME_Add);
  local_158 = *pFVar9;
  pTVar10 = &ConvertCollectionToSkeleton'::__l2::<lambda_1>::operator()
                       ((void *)((longlong)this + 0x20),&local_118,param_1)->field0_0x0;
  local_108.m128_i32[0] = GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.m128_i32[1] = GlobalVectorConstants::Float0001.m128_f32[1];
  local_108.m128_i32[2] = GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.m128_i32[3] = GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8 = GlobalVectorConstants::Float1110.m128_f32[0];
  fStack_e4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fStack_e0 = GlobalVectorConstants::Float1110.m128_f32[2];
  fStack_dc = GlobalVectorConstants::Float1110.m128_f32[3];
  local_d8 = GlobalVectorConstants::Float0001;
  local_b8 = GlobalVectorConstants::Float1110;
  local_c8._12_4_ = 0;
  local_c8._0_12_ = (undefined1  [12])*pTVar10;
  lVar3 = **(longlong **)((longlong)this + 8);
  iVar8 = *(int *)(lVar3 + 0x18);
  uVar7 = 0;
  if (param_1 < iVar8) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    local_168 = lVar12;
    local_160 = (longlong)iVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_e8 = GlobalVectorConstants::Float1110.m128_f32[0];
    fStack_e4 = GlobalVectorConstants::Float1110.m128_f32[1];
    fStack_e0 = GlobalVectorConstants::Float1110.m128_f32[2];
    fStack_dc = GlobalVectorConstants::Float1110.m128_f32[3];
    local_108.m128_i32[0] = GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.m128_i32[1] = GlobalVectorConstants::Float0001.m128_f32[1];
    local_108.m128_i32[2] = GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.m128_i32[3] = GlobalVectorConstants::Float0001.m128_f32[3];
  }
  _local_f8 = GlobalVectorConstants::FloatZero;
  UE::Math::TTransform<float>::Multiply
            ((TTransform<float> *)&local_108,(TTransform<float> *)&local_d8,
             (TTransform<float> *)(lVar12 * 0x30 + *(longlong *)(lVar3 + 0x10)));
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)local_108.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)local_108.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)local_108.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)local_108.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)local_108.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)local_108.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)(float)local_f8._4_4_,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)(float)local_f8._0_4_;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)(float)local_f8._4_4_ >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fStack_ec,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fStack_f0;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_ec >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fStack_e4,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)local_e8;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_e4 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fStack_dc,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fStack_e0;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_dc >> 0x20);
  ::FName::ToString(&local_158,&local_128);
  local_150.Name = local_158;
  local_150.ParentIndex = param_2;
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  FReferenceSkeletonModifier::FReferenceSkeletonModifier
            (&local_140,(USkeleton *)**(undefined8 **)((longlong)this + 0x10));
  iVar8 = FReferenceSkeletonModifier::FindBoneIndex(&local_140,&local_158);
  if (iVar8 == -1) {
    FReferenceSkeletonModifier::Add(&local_140,&local_150,&local_a8,true);
  }
  FReferenceSkeletonModifier::~FReferenceSkeletonModifier(&local_140);
  plVar4 = *(longlong **)((longlong)this + 0x18);
  iVar8 = (int)plVar4[1];
  local_160 = (longlong)iVar8;
  uVar2 = *(undefined4 *)(**(longlong **)((longlong)this + 0x10) + 0x70);
  uVar7 = 0;
  if (param_1 < iVar8) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    local_168 = lVar12;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)(*plVar4 + lVar12 * 4) = uVar2;
  return;
}

// operator() @ 146361570

void __thiscall
`FGeometryCollectionEngineConversion::ConvertCollectionToSkeleton'::__l34::<lambda_3>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  FName *pFVar10;
  int *piVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_78 [2];
  longlong *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  
  plVar9 = ::operator_new(0x10);
  plVar14 = (longlong *)0x0;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = 0;
    plVar9[1] = 0;
    *plVar9 = 0;
    plVar14 = plVar9;
  }
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar15 = param_1->ArrayNum;
  local_res20 = 0xffffffff;
  pFVar1 = pFVar13 + (longlong)iVar15 * 4;
  local_68 = plVar14;
  while( true ) {
    if (param_1->ArrayNum != iVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar1) break;
    uVar2 = *(undefined4 *)pFVar13;
    plVar9 = ::operator_new(0x10);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      *(undefined4 *)(plVar9 + 1) = uVar2;
      *local_68 = (longlong)plVar9;
      local_68 = plVar9;
    }
    pFVar13 = pFVar13 + 4;
  }
  lVar3 = *plVar14;
  uVar16 = local_res20;
  while( true ) {
    local_res20 = uVar16;
    if (lVar3 == 0) {
      do {
        plVar9 = (longlong *)*plVar14;
        ::operator_delete(plVar14,0x10);
        plVar14 = plVar9;
      } while (plVar9 != (longlong *)0x0);
      return;
    }
    plVar9 = (longlong *)*plVar14;
    if (plVar9 != (longlong *)0x0) {
      uVar16 = *(uint *)(plVar9 + 1);
      *(undefined4 *)(plVar9 + 1) = 0;
      local_res20 = uVar16;
      ::operator_delete(plVar14,0x10);
      plVar14 = plVar9;
    }
    lVar3 = *(longlong *)(*(longlong *)this + 0x40);
    uVar7 = 0;
    if ((int)uVar16 < *(int *)(lVar3 + 0x18)) {
      uVar7 = ~uVar16 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar16 * 4);
    lVar3 = **(longlong **)((longlong)this + 8);
    lVar4 = *(longlong *)(*(longlong *)this + 0xe8);
    uVar8 = 0;
    if ((int)uVar7 < *(int *)(lVar4 + 0x18)) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar15 = *(int *)(lVar4 + 8 + (longlong)(int)uVar7 * 0x10);
    uVar8 = iVar15 - 1;
    if (iVar15 == 0) {
      uVar8 = 0;
    }
    pFVar10 = ::FName::FName(local_78,uVar8,*(wchar_t **)(lVar4 + (longlong)(int)uVar7 * 0x10),
                             FNAME_Add);
    iVar15 = -1;
    if ((*pFVar10 != (FName)0x0) &&
       (piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)(lVar3 + 0xd8),*pFVar10), piVar11 != (int *)0x0)) {
      iVar15 = *piVar11;
    }
    __l34::<lambda_2>::operator()(*(void **)((longlong)this + 0x10),uVar16,iVar15);
    lVar3 = *(longlong *)(*(longlong *)this + 0x78);
    uVar7 = 0;
    if ((int)uVar16 < *(int *)(lVar3 + 0x18)) {
      uVar7 = ~uVar16 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pTVar12 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         ((longlong)(int)uVar16 * 0x50 + *(longlong *)(lVar3 + 0x10)),&local_58);
    pFVar13 = (pTVar12->AllocatorInstance).Data;
    iVar15 = pTVar12->ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar12->ArrayNum != iVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar13 == pFVar1) break;
      uVar2 = *(undefined4 *)pFVar13;
      plVar9 = ::operator_new(0x10);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = 0;
        *(undefined4 *)(plVar9 + 1) = uVar2;
        *local_68 = (longlong)plVar9;
        local_68 = plVar9;
      }
      pFVar13 = pFVar13 + 4;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    lVar3 = *plVar14;
    uVar16 = local_res20;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AppendAutoInstanceMeshIndices @ 1463645f0

void __cdecl
FGeometryCollectionEngineConversion::AppendAutoInstanceMeshIndices
          (UGeometryCollection *param_1,int param_2,UStaticMesh *param_3,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FGeometryCollection *this;
  int iVar2;
  int iVar3;
  FCollectionInstancedMeshFacade local_58;
  
  pTVar1 = (param_1->GeometryCollection).SharedReferenceCount.ReferenceController;
  this = (param_1->GeometryCollection).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (FGeometryCollection *)0x0) {
    GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
              (&local_58,(FManagedArrayCollection *)this);
    iVar2 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
    if (param_2 < iVar2) {
      GeometryCollection::Facades::FCollectionInstancedMeshFacade::DefineSchema(&local_58);
      iVar3 = UGeometryCollection::FindOrAddAutoInstanceMesh(param_1,param_3,param_4);
      do {
        GeometryCollection::Facades::FCollectionInstancedMeshFacade::SetIndex
                  (&local_58,param_2,iVar3);
        param_2 = param_2 + 1;
      } while (param_2 < iVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// AppendGeometryCollection @ 1463646b0

void __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollection
          (UGeometryCollection *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TTransform<double> *param_3,UGeometryCollection *param_4,bool param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FGeometryCollection *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryCollection *this;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != (UGeometryCollection *)0x0) {
    pTVar1 = (param_1->GeometryCollection).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->GeometryCollection).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_4 == (UGeometryCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetGeometryCollectionObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x402,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar3 = (param_4->GeometryCollection).SharedReferenceCount.ReferenceController;
    this = (param_4->GeometryCollection).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FGeometryCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x405,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = AppendMaterials(param_2,param_4,false);
    if (this == (FGeometryCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
    bVar5 = AppendGeometryCollection(pFVar2,iVar6,param_3,this,param_5);
    if (bVar5) {
      AppendGeometryCollectionInstancedMeshes(param_1,param_4,iVar7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// AppendGeometryCollection @ 146364840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollection
          (UGeometryCollection *param_1,UGeometryCollectionComponent *param_2,
          TTransform<double> *param_3,UGeometryCollection *param_4,bool param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FGeometryCollection *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryCollection *this;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != (UGeometryCollection *)0x0) {
    iVar6 = AppendGeometryCollectionMaterials(param_1,param_2,param_4);
    pTVar1 = (param_1->GeometryCollection).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->GeometryCollection).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_4 == (UGeometryCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetGeometryCollectionObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x471,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar3 = (param_4->GeometryCollection).SharedReferenceCount.ReferenceController;
    this = (param_4->GeometryCollection).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FGeometryCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x474,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)this,FTransformCollection::TransformGroup);
    bVar5 = AppendGeometryCollection(pFVar2,iVar6,param_3,this,param_5);
    if (bVar5) {
      AppendGeometryCollectionInstancedMeshes(param_1,param_4,iVar7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// AppendGeometryCollection @ 1463649b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollection
          (FGeometryCollection *param_1,int param_2,TTransform<double> *param_3,
          FGeometryCollection *param_4,bool param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong64 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  FName FVar22;
  FName FVar23;
  ForElementType<unsigned_int> FVar24;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  undefined1 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar34;
  undefined1 *puVar35;
  longlong *plVar36;
  byte bVar37;
  longlong lVar38;
  FValueType *pFVar39;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *this;
  ulonglong uVar40;
  FName *pFVar41;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar42;
  uint uVar43;
  uint uVar44;
  FName *pFVar45;
  ulonglong uVar46;
  longlong lVar47;
  FValueType *pFVar48;
  ForElementType<unsigned_int> FVar49;
  uint *puVar50;
  uchar auVar51 [8];
  longlong *plVar52;
  ulonglong uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  float fVar58;
  float fVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auStack_448 [32];
  longlong *local_428;
  ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_408;
  uint local_3f8;
  uint local_3f0;
  ForElementType<unsigned_int> local_3e8;
  uint local_3e0;
  uint local_3dc;
  longlong *local_3d8;
  uint local_3d0;
  longlong *local_3c8;
  undefined1 local_3c0 [4];
  uint local_3bc;
  uint local_3b8;
  FGeometryCollection *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  uint local_398;
  FGeometryCollection *local_390;
  TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *local_388;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  uint local_370;
  undefined1 local_368 [16];
  int local_358 [2];
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_*> local_350;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_*> local_348;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_*> local_340;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_*> local_338;
  undefined2 local_330 [4];
  undefined8 local_328;
  longlong local_320;
  longlong local_318;
  int local_310;
  int local_30c;
  int local_308 [2];
  longlong local_300;
  FGeometryCollection *local_2f8;
  FConstructionParameters local_2e8;
  longlong *local_2d8;
  int iStack_2d0;
  uint uStack_2cc;
  longlong *local_2c8;
  undefined4 uStack_2c0;
  int iStack_2bc;
  int local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined4 local_214;
  ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*> local_210;
  int local_1d0;
  int local_1cc;
  ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> local_1c8;
  int local_188;
  int local_184 [3];
  __m128 local_178;
  __m128 local_168;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  undefined1 uStack_111;
  __m128 local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  __m128 local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_448;
  if (param_1 == (FGeometryCollection *)0x0) {
    bVar28 = false;
  }
  else {
    local_390 = param_1;
    local_374 = param_2;
    local_2f8 = param_4;
    iVar30 = (**(code **)(*(longlong *)&param_1->Vertex + 0x60))();
    iVar31 = (**(code **)(*(longlong *)&param_1->Indices + 0x60))(&param_1->Indices);
    local_3a0 = CONCAT44(local_3a0._4_4_,iVar31);
    iVar32 = (**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_);
    local_380 = iVar32;
    iVar33 = (**(code **)(*(longlong *)&param_1->TransformIndex + 0x60))(&param_1->TransformIndex);
    local_37c = iVar33;
    local_378 = (**(code **)(*(longlong *)&param_1->Sections + 0x60))(&param_1->Sections);
    fVar64 = (float)(param_3->Rotation).XY.m128d_f64[0];
    fVar65 = (float)(param_3->Rotation).XY.m128d_f64[1];
    local_248 = (param_3->Scale3D).XY.m128d_f64[0];
    dStack_240 = (param_3->Scale3D).XY.m128d_f64[1];
    local_238 = (param_3->Scale3D).ZW.m128d_f64[0];
    fVar70 = (float)local_248;
    fVar71 = (float)dStack_240;
    fVar58 = (float)(param_3->Rotation).ZW.m128d_f64[0];
    fVar61 = (float)(param_3->Rotation).ZW.m128d_f64[1];
    fStack_f0 = (float)(param_3->Translation).ZW.m128d_f64[0];
    fStack_ec = (float)(param_3->Translation).ZW.m128d_f64[1];
    fVar72 = (float)local_238;
    local_f8 = (float)(param_3->Translation).XY.m128d_f64[0];
    fStack_f4 = (float)(param_3->Translation).XY.m128d_f64[1];
    local_e8 = GlobalVectorConstants::Float1110;
    auVar59._0_4_ = fVar65 * fVar65 + fVar64 * fVar64;
    auVar59._4_4_ = fVar64 * fVar64 + fVar65 * fVar65;
    auVar59._8_4_ = fVar61 * fVar61 + fVar58 * fVar58;
    auVar59._12_4_ = fVar58 * fVar58 + fVar61 * fVar61;
    auVar60._4_4_ = auVar59._12_4_ + auVar59._4_4_;
    auVar60._0_4_ = auVar59._8_4_ + auVar59._0_4_;
    auVar60._8_4_ = auVar59._0_4_ + auVar59._8_4_;
    auVar60._12_4_ = auVar59._4_4_ + auVar59._12_4_;
    auVar60 = sqrtps(auVar59,auVar60);
    uVar54 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                    auVar59._8_4_ + auVar59._0_4_);
    uVar55 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                    auVar59._12_4_ + auVar59._4_4_);
    uVar56 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                    auVar59._0_4_ + auVar59._8_4_);
    uVar57 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                    auVar59._4_4_ + auVar59._12_4_);
    auVar60 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar60);
    auVar63._0_4_ = (uint)(auVar60._0_4_ * fVar64) & uVar54;
    auVar63._4_4_ = (uint)(auVar60._4_4_ * fVar65) & uVar55;
    auVar63._8_4_ = (uint)(auVar60._8_4_ * fVar58) & uVar56;
    auVar63._12_4_ = (uint)(auVar60._12_4_ * fVar61) & uVar57;
    auVar14._4_4_ = ~uVar55 & GlobalVectorConstants::Float0001.m128_u32[1];
    auVar14._0_4_ = ~uVar54 & GlobalVectorConstants::Float0001.m128_u32[0];
    auVar14._8_4_ = ~uVar56 & GlobalVectorConstants::Float0001.m128_u32[2];
    auVar14._12_4_ = ~uVar57 & GlobalVectorConstants::Float0001.m128_u32[3];
    local_108 = (__m128)(auVar63 | auVar14);
    local_3b8 = FManagedArrayCollection::AddElements
                          ((FManagedArrayCollection *)param_4,iVar30,
                           FGeometryCollection::VerticesGroup);
    local_398 = FManagedArrayCollection::AddElements
                          ((FManagedArrayCollection *)param_4,iVar31,FGeometryCollection::FacesGroup
                          );
    local_3bc = FManagedArrayCollection::AddElements
                          ((FManagedArrayCollection *)param_4,iVar32,
                           FTransformCollection::TransformGroup);
    uVar54 = FManagedArrayCollection::AddElements
                       ((FManagedArrayCollection *)param_4,iVar33,FGeometryCollection::GeometryGroup
                       );
    local_3d0 = uVar54;
    local_370 = FManagedArrayCollection::AddElements
                          ((FManagedArrayCollection *)param_4,local_378,
                           FGeometryCollection::MaterialGroup);
    iVar31 = FGeometryCollection::NumUVLayers(param_1);
    iVar32 = FGeometryCollection::NumUVLayers(param_4);
    if (iVar31 < iVar32) {
      iVar31 = iVar32;
    }
    FGeometryCollection::SetNumUVLayers(param_4,iVar31);
    pFVar48 = (FValueType *)0x0;
    local_184[0] = 8;
    pFVar45 = GeometryCollection::UV::UVLayerNames;
    local_188 = 0;
    pFVar41 = GeometryCollection::UV::UVLayerNames;
    do {
      local_258 = *pFVar41;
      local_250 = GeometryCollection::UV::VerticesGroupName;
      pTVar34 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&param_4->_padding_,(TTuple<FName,FName> *)&local_258);
      pFVar39 = (FValueType *)&pTVar34->field_0x10;
      if (pTVar34 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar39 = pFVar48;
      }
      if ((pFVar39 == (FValueType *)0x0) || (pFVar39->ArrayType != FVector2DType)) {
        local_368[0] = '\0';
        local_368[1] = '\0';
        local_368[2] = '\0';
        local_368[3] = '\0';
        local_368[4] = '\0';
        local_368[5] = '\0';
        local_368[6] = '\0';
        local_368[7] = '\0';
        break;
      }
      local_368._0_8_ =
           FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector2<float>_>(pFVar39);
      if ((uchar  [8])local_368._0_8_ == (uchar  [8])0x0) break;
      if ((&local_1c8 <= (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)local_368)
         && (local_368 < local_1c8.InlineData + local_184[0])) {
        local_410 = (longlong)local_188;
        local_408 = 8;
        local_420 = &local_1c8;
        local_428 = (longlong *)local_368;
        local_418 = (longlong)local_184[0];
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar28) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
      }
      if (local_188 == local_184[0]) {
        local_188 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*>_>
                              (0x808,&local_1c8,local_184);
      }
      pFVar41 = pFVar41 + 1;
      lVar38 = (longlong)local_188;
      local_188 = local_188 + 1;
      *(undefined8 *)local_1c8.InlineData[lVar38].Pad = local_368._0_8_;
    } while ((longlong)pFVar41 < 0x155073a40);
    local_1d0 = 0;
    local_1cc = 8;
    do {
      local_278 = *pFVar45;
      local_270 = GeometryCollection::UV::VerticesGroupName;
      pTVar34 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&param_1->_padding_,(TTuple<FName,FName> *)&local_278);
      pFVar39 = (FValueType *)&pTVar34->field_0x10;
      if (pTVar34 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar39 = pFVar48;
      }
      if ((pFVar39 == (FValueType *)0x0) || (pFVar39->ArrayType != FVector2DType)) {
        local_368[8] = '\0';
        local_368[9] = '\0';
        local_368[10] = '\0';
        local_368[0xb] = '\0';
        local_368[0xc] = '\0';
        local_368[0xd] = '\0';
        local_368[0xe] = '\0';
        local_368[0xf] = '\0';
        break;
      }
      local_368._8_8_ =
           FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector2<float>_>(pFVar39);
      if ((uchar  [8])local_368._8_8_ == (uchar  [8])0x0) break;
      if ((&local_210 <=
           (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*> *)(local_368 + 8)) &&
         (local_368 + 8 < local_210.InlineData + local_1cc)) {
        local_410 = (longlong)local_1d0;
        local_408 = 8;
        local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)&local_210;
        local_428 = (longlong *)(local_368 + 8);
        local_418 = (longlong)local_1cc;
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar28) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
      }
      iVar31 = local_1d0;
      if (local_1d0 == local_1cc) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*>_>
                           (0x808,&local_210,&local_1cc);
      }
      pFVar45 = pFVar45 + 1;
      local_1d0 = iVar31 + 1;
      *(undefined8 *)local_210.InlineData[iVar31].Pad = local_368._8_8_;
    } while ((longlong)pFVar45 < 0x155073a40);
    local_348.Pad = (uchar  [8])(longlong)iVar30;
    if (0 < iVar30) {
      auVar51 = (uchar  [8])(longlong)(int)local_3b8;
      local_3d8 = (longlong *)0x0;
      local_388 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)((longlong)auVar51 << 4);
      local_3c8 = (longlong *)0x0;
      local_3b0 = (FGeometryCollection *)((longlong)auVar51 * 3);
      local_3e8 = (ForElementType<unsigned_int>)0x0;
      local_3e0 = 0;
      uVar55 = local_3b8;
      local_340.Pad = auVar51;
      do {
        FVar24 = local_3e8;
        local_300 = (longlong)local_3d8 * 8 + (longlong)local_340.Pad * 8;
        uVar56 = uVar55 - auVar51._0_4_;
        local_320 = (longlong)local_3c8 + (longlong)local_388;
        local_318 = (longlong)local_3d8 * 4;
        iVar31 = *(int *)&(param_1->Vertex).field_0x18;
        uVar57 = ~uVar56 >> 0x1f;
        local_350.Pad = (uchar  [8])(local_318 + (longlong)local_340.Pad * 4);
        uVar54 = 0;
        if ((int)pFVar48 < iVar31) {
          uVar54 = uVar57;
        }
        local_3f0 = uVar57;
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar38 = *(longlong *)&(param_1->Vertex).field_0x10;
        iVar31 = *(int *)&(param_4->Vertex).field_0x18;
        fVar58 = *(float *)(lVar38 + (longlong)FVar24);
        uVar43 = ~uVar55 >> 0x1f;
        fVar61 = *(float *)(lVar38 + 4 + (longlong)FVar24);
        fVar64 = *(float *)(lVar38 + 8 + (longlong)FVar24);
        uVar54 = 0;
        if ((int)uVar55 < iVar31) {
          uVar54 = uVar43;
        }
        local_3dc = uVar43;
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar38 = (longlong)FVar24 + (longlong)local_3b0 * 4;
        lVar47 = *(longlong *)&(param_4->Vertex).field_0x10;
        *(float *)(lVar47 + lVar38) = fVar70 * fVar58;
        *(float *)(lVar47 + 4 + lVar38) = fVar71 * fVar61;
        *(float *)(lVar47 + 8 + lVar38) = fVar72 * fVar64;
        iVar31 = *(int *)&(param_1->TangentU).field_0x18;
        uVar54 = 0;
        if ((int)uVar56 < iVar31) {
          uVar54 = uVar57;
        }
        if (uVar54 == 0) {
          local_428 = local_3d8;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar47 = *(longlong *)&(param_1->TangentU).field_0x10;
        uVar6 = *(undefined8 *)(lVar47 + (longlong)local_3e8);
        local_3f8 = *(undefined4 *)(lVar47 + 8 + (longlong)local_3e8);
        iVar31 = *(int *)&(param_4->TangentU).field_0x18;
        uVar54 = 0;
        if ((int)uVar55 < iVar31) {
          uVar54 = uVar43;
        }
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar47 = *(longlong *)&(param_4->TangentU).field_0x10;
        *(undefined8 *)(lVar47 + lVar38) = uVar6;
        *(uint *)(lVar47 + 8 + lVar38) = local_3f8;
        iVar31 = *(int *)&(param_1->TangentV).field_0x18;
        uVar54 = 0;
        if ((int)uVar56 < iVar31) {
          uVar54 = uVar57;
        }
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar47 = *(longlong *)&(param_1->TangentV).field_0x10;
        uVar6 = *(undefined8 *)(lVar47 + (longlong)local_3e8);
        local_3f8 = *(undefined4 *)(lVar47 + 8 + (longlong)local_3e8);
        iVar31 = *(int *)&(param_4->TangentV).field_0x18;
        uVar54 = 0;
        if ((int)uVar55 < iVar31) {
          uVar54 = uVar43;
        }
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar47 = *(longlong *)&(param_4->TangentV).field_0x10;
        *(undefined8 *)(lVar47 + lVar38) = uVar6;
        *(uint *)(lVar47 + 8 + lVar38) = local_3f8;
        iVar31 = *(int *)&(param_1->Normal).field_0x18;
        uVar54 = 0;
        if ((int)uVar56 < iVar31) {
          uVar54 = uVar57;
        }
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar47 = *(longlong *)&(param_1->Normal).field_0x10;
        uVar6 = *(undefined8 *)(lVar47 + (longlong)local_3e8);
        local_3f8 = *(uint *)(lVar47 + 8 + (longlong)local_3e8);
        iVar31 = *(int *)&(param_4->Normal).field_0x18;
        uVar54 = 0;
        if ((int)uVar55 < iVar31) {
          uVar54 = uVar43;
        }
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        uVar43 = local_3dc;
        lVar47 = *(longlong *)&(param_4->Normal).field_0x10;
        uVar44 = 0;
        *(undefined8 *)(lVar47 + lVar38) = uVar6;
        *(uint *)(lVar47 + 8 + lVar38) = local_3f8;
        uVar54 = uVar57;
        if (0 < local_1d0) {
          local_3a8 = 0;
          do {
            lVar38 = local_3a8;
            uVar54 = 0;
            if ((int)uVar44 < local_1d0) {
              uVar54 = ~uVar44 >> 0x1f;
            }
            if (uVar54 == 0) {
              local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                          (longlong)local_1d0;
              local_428 = (longlong *)(longlong)(int)uVar44;
              bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar28) {
                pcVar12 = (code *)swi(3);
                uVar29 = (*pcVar12)();
                return (bool)uVar29;
              }
            }
            lVar38 = *(longlong *)(local_210.InlineData[0].Pad + lVar38);
            iVar31 = *(int *)(lVar38 + 0x18);
            uVar54 = 0;
            if ((int)uVar56 < iVar31) {
              uVar54 = uVar57;
            }
            if (uVar54 == 0) {
              local_428 = (longlong *)(longlong)(int)uVar56;
              local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                          (longlong)iVar31;
              bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar28) {
                pcVar12 = (code *)swi(3);
                uVar29 = (*pcVar12)();
                return (bool)uVar29;
              }
            }
            uVar6 = *(undefined8 *)(*(longlong *)(lVar38 + 0x10) + (longlong)local_3d8 * 8);
            uVar54 = 0;
            if ((int)uVar44 < local_188) {
              uVar54 = ~uVar44 >> 0x1f;
            }
            if (uVar54 == 0) {
              local_428 = (longlong *)(longlong)(int)uVar44;
              local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                          (longlong)local_188;
              bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar28) {
                pcVar12 = (code *)swi(3);
                uVar29 = (*pcVar12)();
                return (bool)uVar29;
              }
            }
            lVar38 = *(longlong *)(local_1c8.InlineData[0].Pad + local_3a8);
            iVar31 = *(int *)(lVar38 + 0x18);
            uVar54 = 0;
            if ((int)uVar55 < iVar31) {
              uVar54 = uVar43;
            }
            if (uVar54 == 0) {
              local_428 = (longlong *)(longlong)(int)uVar55;
              local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                          (longlong)iVar31;
              bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar28) {
                pcVar12 = (code *)swi(3);
                uVar29 = (*pcVar12)();
                return (bool)uVar29;
              }
            }
            uVar44 = uVar44 + 1;
            *(undefined8 *)(local_300 + *(longlong *)(lVar38 + 0x10)) = uVar6;
            local_3a8 = local_3a8 + 8;
            param_4 = local_2f8;
            param_1 = local_390;
            uVar54 = local_3f0;
          } while ((int)uVar44 < local_1d0);
        }
        iVar31 = *(int *)&(param_1->Color).field_0x18;
        uVar57 = 0;
        if ((int)uVar56 < iVar31) {
          uVar57 = uVar54;
        }
        if (uVar57 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        uVar57 = local_3dc;
        puVar2 = (undefined8 *)((longlong)local_3c8 + *(longlong *)&(param_1->Color).field_0x10);
        uVar6 = *puVar2;
        uVar20 = puVar2[1];
        iVar31 = *(int *)&(param_4->Color).field_0x18;
        uVar43 = 0;
        if ((int)uVar55 < iVar31) {
          uVar43 = local_3dc;
        }
        if (uVar43 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        puVar2 = (undefined8 *)(*(longlong *)&(param_4->Color).field_0x10 + local_320);
        *puVar2 = uVar6;
        puVar2[1] = uVar20;
        iVar31 = *(int *)&(param_1->BoneMap).field_0x18;
        uVar43 = 0;
        if ((int)uVar56 < iVar31) {
          uVar43 = uVar54;
        }
        if (uVar43 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar30 = local_3bc + *(int *)(local_318 + *(longlong *)&(param_1->BoneMap).field_0x10);
        iVar31 = *(int *)&(param_4->BoneMap).field_0x18;
        uVar54 = 0;
        if ((int)uVar55 < iVar31) {
          uVar54 = uVar57;
        }
        if (uVar54 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        uVar55 = uVar55 + 1;
        local_3e8 = (ForElementType<unsigned_int>)((longlong)local_3e8 + 0xc);
        local_3c8 = (longlong *)((longlong)local_3c8 + 0x10);
        auVar51[4] = '\0';
        auVar51[5] = '\0';
        auVar51[6] = '\0';
        auVar51[7] = '\0';
        auVar51[0] = (undefined1)local_3b8;
        auVar51[1] = local_3b8._1_1_;
        auVar51[2] = local_3b8._2_1_;
        auVar51[3] = local_3b8._3_1_;
        *(int *)((longlong)local_350.Pad + *(longlong *)&(param_4->BoneMap).field_0x10) = iVar30;
        local_3d8 = (longlong *)((longlong)local_3d8 + 1);
        local_3e0 = local_3e0 + 1;
        pFVar48 = (FValueType *)(ulonglong)local_3e0;
        uVar54 = local_3d0;
      } while ((longlong)local_3d8 < (longlong)local_348.Pad);
    }
    uVar46 = 0;
    if (0 < (int)local_3a0) {
      uVar40 = (ulonglong)(int)local_398;
      local_3c8 = (longlong *)0x0;
      local_3f8 = 1;
      local_340.Pad = (uchar  [8])(uVar40 * -4);
      local_3a8 = uVar40 * 4;
      local_388 = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)(uVar40 * 3);
      local_3dc = 0;
      uVar53 = uVar46;
      uVar55 = local_398;
      do {
        uVar54 = local_3f8;
        uVar57 = uVar55 - (int)uVar40;
        iVar31 = *(int *)&(param_1->Indices).field_0x18;
        local_3e8._0_4_ = ~uVar57 >> 0x1f;
        uVar56 = 0;
        if ((int)uVar46 < iVar31) {
          uVar56 = ~uVar57 >> 0x1f;
        }
        if (uVar56 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar57;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar38 = *(longlong *)&(param_1->Indices).field_0x10;
        uVar43 = ~uVar55 >> 0x1f;
        local_3f0 = *(int *)(uVar53 + lVar38) + local_3b8;
        local_3e0 = *(int *)(uVar53 + 4 + lVar38) + local_3b8;
        iVar31 = *(int *)&(param_4->Indices).field_0x18;
        local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,*(int *)(uVar53 + 8 + lVar38) + local_3b8);
        uVar56 = 0;
        if ((int)uVar55 < iVar31) {
          uVar56 = uVar43;
        }
        if (uVar56 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar38 = uVar53 + (longlong)local_388 * 4;
        lVar47 = *(longlong *)&(param_4->Indices).field_0x10;
        *(uint *)(lVar38 + lVar47) = local_3f0;
        *(uint *)(lVar38 + 4 + lVar47) = local_3e0;
        *(undefined4 *)(lVar38 + 8 + lVar47) = local_3d8._0_4_;
        if ((((int)uVar57 < 0) || (*(int *)&(param_1->Visible).field_0x28 <= (int)uVar57)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        puVar35 = *(undefined1 **)&(param_1->Visible).field_0x20;
        uVar56 = uVar57;
        if ((int)uVar57 < 0) {
          uVar56 = uVar57 + 0x1f;
        }
        local_348.Pad = (uchar  [8])(longlong)((int)uVar56 >> 5);
        if (puVar35 == (undefined1 *)0x0) {
          puVar35 = &(param_1->Visible).field_0x10;
        }
        local_3f0 = *(uint *)(puVar35 + (longlong)local_348.Pad * 4) & uVar54;
        if ((((int)uVar55 < 0) || (*(int *)&(param_4->Visible).field_0x28 <= (int)uVar55)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        puVar35 = *(undefined1 **)&(param_4->Visible).field_0x20;
        uVar54 = uVar55;
        if ((int)uVar55 < 0) {
          uVar54 = uVar55 + 0x1f;
        }
        local_350.Pad = (uchar  [8])(longlong)((int)uVar54 >> 5);
        if (puVar35 == (undefined1 *)0x0) {
          puVar35 = &(param_4->Visible).field_0x10;
        }
        uVar54 = 1 << ((byte)uVar55 & 0x1f);
        if (local_3f0 == 0) {
          uVar56 = ~uVar54 & *(uint *)(puVar35 + (longlong)local_350.Pad * 4);
        }
        else {
          uVar56 = uVar54 | *(uint *)(puVar35 + (longlong)local_350.Pad * 4);
        }
        *(uint *)(puVar35 + (longlong)local_350.Pad * 4) = uVar56;
        iVar31 = *(int *)&(param_1->MaterialID).field_0x18;
        iVar30 = 0;
        if ((int)uVar57 < iVar31) {
          iVar30 = local_3e8._0_4_;
        }
        if (iVar30 == 0) {
          local_428 = local_3c8;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar31 = *(int *)&(param_4->MaterialID).field_0x18;
        local_3e8._0_4_ =
             *(int *)(*(longlong *)&(param_1->MaterialID).field_0x10 + (longlong)local_340.Pad +
                     local_3a8) + local_374;
        uVar56 = 0;
        if ((int)uVar55 < iVar31) {
          uVar56 = uVar43;
        }
        if (uVar56 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)(local_3a8 + *(longlong *)&(param_4->MaterialID).field_0x10) =
             local_3e8._0_4_;
        iVar31 = *(int *)&(param_4->MaterialIndex).field_0x18;
        uVar56 = 0;
        if ((int)uVar55 < iVar31) {
          uVar56 = uVar43;
        }
        if (uVar56 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar55;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar38 = local_3a8;
        *(uint *)(local_3a8 + *(longlong *)&(param_4->MaterialIndex).field_0x10) = uVar55;
        if ((((int)uVar57 < 0) || (*(int *)&(param_1->Internal).field_0x28 <= (int)uVar57)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        puVar35 = *(undefined1 **)&(param_1->Internal).field_0x20;
        if (puVar35 == (undefined1 *)0x0) {
          puVar35 = &(param_1->Internal).field_0x10;
        }
        uVar56 = *(uint *)(puVar35 + (longlong)local_348.Pad * 4) & local_3f8;
        if ((((int)uVar55 < 0) || (*(int *)&(param_4->Internal).field_0x28 <= (int)uVar55)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        puVar35 = *(undefined1 **)&(param_4->Internal).field_0x20;
        if (puVar35 == (undefined1 *)0x0) {
          puVar35 = &(param_4->Internal).field_0x10;
        }
        if (uVar56 == 0) {
          uVar54 = ~uVar54 & *(uint *)(puVar35 + (longlong)local_350.Pad * 4);
        }
        else {
          uVar54 = uVar54 | *(uint *)(puVar35 + (longlong)local_350.Pad * 4);
        }
        local_3a8 = lVar38 + 4;
        uVar55 = uVar55 + 1;
        local_3f8 = local_3f8 << 1 | (uint)((int)local_3f8 < 0);
        uVar53 = uVar53 + 0xc;
        *(uint *)(puVar35 + (longlong)local_350.Pad * 4) = uVar54;
        local_3c8 = (longlong *)((longlong)local_3c8 + 1);
        uVar40 = (ulonglong)local_398;
        local_3dc = local_3dc + 1;
        uVar46 = (ulonglong)local_3dc;
        uVar54 = local_3d0;
      } while ((longlong)local_3c8 < (longlong)(int)local_3a0);
    }
    local_388 = FManagedArrayCollection::FindAttribute<TRefCountPtr<Chaos::FImplicitObject>_>
                          ((FManagedArrayCollection *)param_1,
                           FGeometryCollection::ExternalCollisionsAttribute,
                           FTransformCollection::TransformGroup);
    FVar23 = FTransformCollection::TransformGroup;
    FVar22 = FGeometryCollection::ExternalCollisionsAttribute;
    local_328 = 0;
    local_338.Pad[0] = '\0';
    local_338.Pad[1] = '\0';
    local_338.Pad[2] = '\0';
    local_338.Pad[3] = '\0';
    local_338.Pad[4] = '\0';
    local_338.Pad[5] = '\0';
    local_338.Pad[6] = '\0';
    local_338.Pad[7] = '\0';
    local_330[0] = 1;
    local_2e8._8_4_ = local_330._0_4_;
    local_2e8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_2e8.GroupIndexDependency.Number = 0;
    bVar28 = FManagedArrayCollection::HasAttribute
                       ((FManagedArrayCollection *)param_4,
                        FGeometryCollection::ExternalCollisionsAttribute,
                        FTransformCollection::TransformGroup);
    if (!bVar28) {
      FManagedArrayCollection::AddNewAttributeImpl<TRefCountPtr<Chaos::FImplicitObject>_>
                ((FManagedArrayCollection *)param_4,FVar22,FVar23,&local_2e8);
    }
    bVar28 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_4,FVar22,FVar23)
    ;
    if ((!bVar28) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasAttribute(Name, Group)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x164,L""), bVar28)) {
      pcVar12 = (code *)swi(3);
      uVar29 = (*pcVar12)();
      return (bool)uVar29;
    }
    local_268 = FVar22;
    local_260 = FVar23;
    pTVar34 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_4->_padding_,(TTuple<FName,FName> *)&local_268);
    if ((pTVar34 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar28)) {
      pcVar12 = (code *)swi(3);
      uVar29 = (*pcVar12)();
      return (bool)uVar29;
    }
    if ((pTVar34->field_0x10 != '*') &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSameType<T>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x315,L""), bVar28)) {
      pcVar12 = (code *)swi(3);
      uVar29 = (*pcVar12)();
      return (bool)uVar29;
    }
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar34->field_0x10);
    lVar38 = *(longlong *)&pTVar34->field_0x30;
    local_3a8 = lVar38;
    if ((lVar38 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x319,L""), bVar28)) {
      pcVar12 = (code *)swi(3);
      uVar29 = (*pcVar12)();
      return (bool)uVar29;
    }
    *(undefined1 *)(lVar38 + 8) = 1;
    local_3f0 = 0;
    if (0 < local_380) {
      plVar36 = (longlong *)(longlong)(int)local_3bc;
      local_3a0 = 0;
      local_3b0 = (FGeometryCollection *)0x0;
      plVar52 = plVar36;
      do {
        lVar38 = local_3a0;
        uVar54 = local_3f0;
        iVar31 = (int)param_1->_padding_;
        uVar56 = local_3f0 + (int)plVar36;
        local_3f8 = ~local_3f0 >> 0x1f;
        uVar55 = 0;
        if ((int)local_3f0 < iVar31) {
          uVar55 = local_3f8;
        }
        local_3d8 = plVar52;
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)local_3f0;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar31 = (int)param_1->_padding_;
        if (*(int *)((longlong)local_3b0 + param_1->_padding_) == -1) {
          uVar55 = 0;
          if ((int)uVar54 < iVar31) {
            uVar55 = local_3f8;
          }
          if (uVar55 == 0) {
            local_428 = (longlong *)(longlong)(int)uVar54;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar31;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          local_178 = GlobalVectorConstants::Float0001;
          local_168 = GlobalVectorConstants::FloatZero;
          _local_158 = GlobalVectorConstants::Float1110;
          UE::Math::TTransform<float>::Multiply
                    ((TTransform<float> *)&local_178,
                     (TTransform<float> *)((longlong)(int)uVar54 * 0x30 + param_1->_padding_),
                     (TTransform<float> *)&local_108);
          iVar31 = (int)param_4->_padding_;
          uVar6 = local_178.m128_u64[0];
          uVar20 = local_178.m128_u64[1];
          uVar26 = local_168.m128_u64[0];
          uVar27 = local_168.m128_u64[1];
          fVar66 = (float)local_158._0_4_;
          fVar67 = (float)local_158._4_4_;
          fVar68 = fStack_150;
          fVar69 = fStack_14c;
          uVar57 = ~uVar56 >> 0x1f;
          uVar55 = 0;
          if ((int)uVar56 < iVar31) {
            uVar55 = uVar57;
          }
          local_3dc = uVar57;
          if (uVar55 == 0) {
            local_428 = (longlong *)(longlong)(int)uVar56;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar31;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          lVar38 = param_4->_padding_;
          puVar3 = (ulong64 *)(lVar38 + (longlong)plVar52 * 0x30);
          *puVar3 = uVar6;
          puVar3[1] = uVar20;
          puVar3 = (ulong64 *)(lVar38 + 0x10 + (longlong)plVar52 * 0x30);
          *puVar3 = uVar26;
          puVar3[1] = uVar27;
        }
        else {
          uVar55 = 0;
          if ((int)uVar54 < iVar31) {
            uVar55 = local_3f8;
          }
          if (uVar55 == 0) {
            local_428 = (longlong *)(longlong)(int)uVar54;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar31;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          lVar47 = param_1->_padding_;
          uVar57 = ~uVar56 >> 0x1f;
          pfVar4 = (float *)(lVar47 + 0x10 + lVar38 * 0x30);
          fVar58 = *pfVar4;
          fVar61 = pfVar4[1];
          fVar64 = pfVar4[2];
          fVar65 = pfVar4[3];
          puVar2 = (undefined8 *)(lVar47 + lVar38 * 0x30);
          uVar6 = *puVar2;
          uVar20 = puVar2[1];
          pfVar4 = (float *)(lVar47 + 0x20 + lVar38 * 0x30);
          fVar66 = *pfVar4;
          fVar67 = pfVar4[1];
          fVar68 = pfVar4[2];
          fVar69 = pfVar4[3];
          iVar31 = (int)param_4->_padding_;
          uVar55 = 0;
          if ((int)uVar56 < iVar31) {
            uVar55 = uVar57;
          }
          local_3dc = uVar57;
          if (uVar55 == 0) {
            local_428 = (longlong *)(longlong)(int)uVar56;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar31;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          lVar38 = param_4->_padding_;
          puVar2 = (undefined8 *)(lVar38 + (longlong)plVar52 * 0x30);
          *puVar2 = uVar6;
          puVar2[1] = uVar20;
          pfVar4 = (float *)(lVar38 + 0x10 + (longlong)plVar52 * 0x30);
          *pfVar4 = fVar58 * fVar70;
          pfVar4[1] = fVar61 * fVar71;
          pfVar4[2] = fVar64 * fVar72;
          pfVar4[3] = fVar65 * 0.0;
        }
        pfVar4 = (float *)(lVar38 + 0x20 + (longlong)plVar52 * 0x30);
        *pfVar4 = fVar66;
        pfVar4[1] = fVar67;
        pfVar4[2] = fVar68;
        pfVar4[3] = fVar69;
        iVar31 = (int)param_1->_padding_;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = local_3f8;
        }
        if ((uVar55 == 0) &&
           (local_428 = (longlong *)(longlong)(int)uVar54,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        iVar31 = (int)param_4->_padding_;
        pTVar42 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                  ((longlong)(int)uVar54 * 0x10 + param_1->_padding_);
        if ((uVar57 & (int)uVar56 < iVar31) == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar38 = (longlong)plVar52 * 0x10;
        this = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(param_4->_padding_ + lVar38);
        if (this != pTVar42) {
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                    (this,(wchar_t *)(pTVar42->AllocatorInstance).Data,pTVar42->ArrayNum,
                     this->ArrayMax);
        }
        uVar55 = rand();
        uVar57 = rand();
        uVar43 = rand();
        uVar54 = local_3dc;
        fVar58 = FLinearColor::sRGBToLinearTable
                 [(ulonglong)uVar43 + (ulonglong)(uint)((int)uVar43 / 100) * -100 + 5 & 0xff];
        fVar61 = FLinearColor::sRGBToLinearTable
                 [(ulonglong)uVar57 + (ulonglong)(uint)((int)uVar57 / 100) * -100 + 5 & 0xff];
        iVar31 = (int)param_4->_padding_;
        fVar64 = FLinearColor::sRGBToLinearTable
                 [(ulonglong)uVar55 + (ulonglong)(uint)((int)uVar55 / 100) * -100 + 5 & 0xff];
        if ((local_3dc & (int)uVar56 < iVar31) == 0) {
          local_428 = local_3d8;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        uVar55 = local_3f0;
        lVar47 = param_4->_padding_;
        *(float *)(lVar38 + lVar47) = fVar58;
        *(float *)(lVar38 + 4 + lVar47) = fVar61;
        *(float *)(lVar38 + 8 + lVar47) = fVar64;
        *(undefined4 *)(lVar38 + 0xc + lVar47) = 0x3f800000;
        plVar52 = (longlong *)(longlong)(int)local_3f0;
        iVar31 = (int)param_1->_padding_;
        uVar57 = 0;
        if ((int)local_3f0 < iVar31) {
          uVar57 = local_3f8;
        }
        if ((uVar57 == 0) &&
           (local_428 = plVar52,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        if (*(int *)(param_1->_padding_ + local_3a0 * 4) == -1) {
          iVar31 = -1;
        }
        else {
          iVar31 = (int)param_1->_padding_;
          uVar57 = 0;
          if ((int)uVar55 < iVar31) {
            uVar57 = local_3f8;
          }
          if ((uVar57 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          iVar31 = local_3bc + *(int *)(param_1->_padding_ + local_3a0 * 4);
        }
        iVar30 = (int)param_4->_padding_;
        if ((uVar54 & (int)uVar56 < iVar30) == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar30;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(int *)(param_4->_padding_ + (longlong)local_3d8 * 4) = iVar31;
        iVar31 = (int)param_1->_padding_;
        uVar54 = 0;
        if ((int)uVar55 < iVar31) {
          uVar54 = local_3f8;
        }
        if ((uVar54 == 0) &&
           (local_428 = plVar52,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        iStack_2d0 = 0;
        local_3c8 = (longlong *)((longlong)plVar52 * 0x50 + param_1->_padding_);
        local_2b8 = 0;
        iVar31 = (int)local_3c8[5];
        local_3e8 = (ForElementType<unsigned_int>)(local_3c8 + 2);
        uStack_2cc = 1;
        iStack_2bc = 0;
        if (iVar31 != 0) {
          puVar50 = (uint *)local_3e8;
          if ((uint *)local_3c8[4] != (uint *)0x0) {
            puVar50 = (uint *)local_3c8[4];
          }
          uVar54 = *puVar50;
          while (uVar54 == 0) {
            lVar38 = (longlong)iStack_2d0;
            local_2b8 = local_2b8 + 0x20;
            iStack_2d0 = iStack_2d0 + 1;
            iStack_2bc = iVar31;
            if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2d0)
            goto LAB_1463661c2;
            uVar54 = puVar50[lVar38 + 1];
          }
          uStack_2cc = -uVar54 & uVar54;
          uVar46 = (ulonglong)uStack_2cc * 2 + 1;
          lVar38 = 0x3f;
          if (uVar46 != 0) {
            for (; uVar46 >> lVar38 == 0; lVar38 = lVar38 + -1) {
            }
          }
          local_30c = (int)lVar38;
          iStack_2bc = local_30c + -1 + local_2b8;
          if (iVar31 < iStack_2bc) {
            iStack_2bc = iVar31;
          }
        }
LAB_1463661c2:
        uStack_2b4 = local_214;
        iStack_2b0 = (int)local_3c8[1] - *(int *)((longlong)local_3c8 + 0x34);
        local_3e0 = (uint)local_3c8[5];
        TStack_2a0._padding_ = CONCAT44(uStack_2cc,iStack_2d0);
        uStack_2c0 = 0xffffffff;
        uVar54 = local_3e0 & 0xffffffe0;
        TStack_2a0.CurrentBitIndex = iStack_2bc;
        TStack_2a0.UnvisitedBitMask = 0xffffffff;
        iVar30 = (int)local_3e0 >> 5;
        bVar37 = (byte)local_3e0;
        TStack_2a0._28_4_ = local_214;
        TStack_2a0.BaseBitIndex = local_2b8;
        uStack_280 = CONCAT44(uStack_2ac,iStack_2b0);
        local_2d8 = local_3c8;
        local_2c8 = (longlong *)local_3e8;
        local_2a8 = local_3c8;
        TStack_2a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3e8;
        if ((((int)local_3e0 < 0) || (iVar31 < (int)local_3e0)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        plVar52 = local_3c8;
        uVar43 = local_3dc;
        FVar24 = local_3e8;
        uVar55 = *(int *)((longlong)local_3e8 + 0x18);
        uVar57 = local_3e0;
        if (local_3e0 != uVar55) {
          FVar49 = local_3e8;
          if (*(ForElementType<unsigned_int> *)((longlong)local_3e8 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar49 = *(ForElementType<unsigned_int> *)((longlong)local_3e8 + 0x10);
          }
          uVar57 = -1 << (bVar37 & 0x1f) & *(uint *)((longlong)FVar49 + (longlong)iVar30 * 4);
          while (uVar57 == 0) {
            lVar38 = (longlong)iVar30;
            uVar54 = uVar54 + 0x20;
            iVar30 = iVar30 + 1;
            local_3e0 = uVar55;
            uVar57 = uVar55;
            if ((int)((uVar55 - 1) + ((int)(uVar55 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
            goto LAB_146366312;
            uVar57 = *(uint *)((longlong)FVar49 + 4 + lVar38 * 4);
          }
          uVar46 = (ulonglong)(-uVar57 & uVar57) * 2 + 1;
          lVar38 = 0x3f;
          if (uVar46 != 0) {
            for (; uVar46 >> lVar38 == 0; lVar38 = lVar38 + -1) {
            }
          }
          local_310 = (int)lVar38;
          local_3e0 = local_310 + -1 + uVar54;
          uVar57 = local_3e0;
          if ((int)uVar55 < (int)local_3e0) {
            local_3e0 = uVar55;
            uVar57 = uVar55;
          }
        }
LAB_146366312:
        while( true ) {
          plVar36 = local_2a8;
          if ((int)local_2a8[1] - *(int *)((longlong)local_2a8 + 0x34) != (int)uStack_280) {
            local_3c0[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3c0);
          }
          param_1 = local_390;
          uVar54 = local_3d0;
          uVar55 = local_3f0;
          if (((TStack_2a0.CurrentBitIndex == uVar57) &&
              ((ForElementType<unsigned_int>)TStack_2a0.Array == FVar24)) && (plVar36 == plVar52))
          break;
          iVar31 = *(int *)(*plVar36 + (longlong)TStack_2a0.CurrentBitIndex * 0xc);
          iVar30 = (int)param_4->_padding_;
          if ((uVar43 & (int)uVar56 < iVar30) == 0) {
            local_428 = (longlong *)(longlong)(int)uVar56;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar30;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          local_358[0] = local_3bc + iVar31;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                     ((longlong)(int)uVar56 * 0x50 + param_4->_padding_),local_308,(bool *)local_358
                    );
          TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
        }
        plVar36 = (longlong *)(longlong)(int)local_3f0;
        iVar31 = *(int *)&(local_390->TransformToGeometryIndex).field_0x18;
        uVar57 = 0;
        if ((int)local_3f0 < iVar31) {
          uVar57 = local_3f8;
        }
        if ((uVar57 == 0) &&
           (local_428 = plVar36,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        iVar31 = *(int *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 +
                         local_3a0 * 4);
        iVar30 = *(int *)&(param_4->TransformToGeometryIndex).field_0x18;
        if ((uVar43 & (int)uVar56 < iVar30) == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar30;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(uint *)(*(longlong *)&(param_4->TransformToGeometryIndex).field_0x10 +
                 (longlong)local_3d8 * 4) = iVar31 + uVar54;
        iVar31 = *(int *)&(param_1->SimulationType).field_0x18;
        uVar57 = 0;
        if ((int)uVar55 < iVar31) {
          uVar57 = local_3f8;
        }
        if ((uVar57 == 0) &&
           (local_428 = plVar36,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        uVar9 = *(undefined4 *)(*(longlong *)&(param_1->SimulationType).field_0x10 + local_3a0 * 4);
        iVar31 = *(int *)&(param_4->SimulationType).field_0x18;
        if ((uVar43 & (int)uVar56 < iVar31) == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)
         (*(longlong *)&(param_4->SimulationType).field_0x10 + (longlong)local_3d8 * 4) = uVar9;
        iVar31 = *(int *)&(param_1->StatusFlags).field_0x18;
        uVar57 = 0;
        if ((int)uVar55 < iVar31) {
          uVar57 = local_3f8;
        }
        if ((uVar57 == 0) &&
           (local_428 = plVar36,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        uVar9 = *(undefined4 *)(*(longlong *)&(param_1->StatusFlags).field_0x10 + local_3a0 * 4);
        iVar31 = *(int *)&(param_4->StatusFlags).field_0x18;
        if ((uVar43 & (int)uVar56 < iVar31) == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)(*(longlong *)&(param_4->StatusFlags).field_0x10 + (longlong)local_3d8 * 4) =
             uVar9;
        iVar31 = *(int *)&(param_1->InitialDynamicState).field_0x18;
        uVar57 = 0;
        if ((int)uVar55 < iVar31) {
          uVar57 = local_3f8;
        }
        if ((uVar57 == 0) &&
           (local_428 = plVar36,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        uVar9 = *(undefined4 *)
                 (*(longlong *)&(param_1->InitialDynamicState).field_0x10 + local_3a0 * 4);
        iVar31 = *(int *)&(param_4->InitialDynamicState).field_0x18;
        if ((uVar43 & (int)uVar56 < iVar31) == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        lVar38 = local_3a8;
        *(undefined4 *)
         (*(longlong *)&(param_4->InitialDynamicState).field_0x10 + (longlong)local_3d8 * 4) = uVar9
        ;
        if ((uVar43 & (int)uVar56 < *(int *)(local_3a8 + 0x18)) == 0) {
          local_428 = (longlong *)(longlong)(int)uVar56;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)*(int *)(local_3a8 + 0x18);
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        puVar2 = *(undefined8 **)(*(longlong *)(lVar38 + 0x10) + (longlong)local_3d8 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)(*(longlong *)(lVar38 + 0x10) + (longlong)local_3d8 * 8) = 0;
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          iVar31 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar31 == 1) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
            (**(code **)*puVar2)();
          }
        }
        pTVar25 = local_388;
        plVar52 = local_3d8;
        if (local_388 != (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)0x0) {
          uVar57 = 0;
          if ((int)uVar55 < *(int *)&local_388->field_0x18) {
            uVar57 = local_3f8;
          }
          if ((uVar57 == 0) &&
             (local_428 = plVar36,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)*(int *)&local_388->field_0x18,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          plVar52 = local_3d8;
          lVar38 = *(longlong *)&pTVar25->field_0x10;
          if ((uVar43 & (int)uVar56 < *(int *)(local_3a8 + 0x18)) == 0) {
            local_428 = local_3d8;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)*(int *)(local_3a8 + 0x18);
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          puVar2 = *(undefined8 **)(lVar38 + (longlong)plVar36 * 8);
          puVar10 = *(undefined8 **)(*(longlong *)(local_3a8 + 0x10) + (longlong)plVar52 * 8);
          if (puVar10 != puVar2) {
            *(undefined8 **)(*(longlong *)(local_3a8 + 0x10) + (longlong)plVar52 * 8) = puVar2;
            if (puVar2 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
              UNLOCK();
            }
            if (puVar10 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar10 + 1);
              iVar31 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar31 == 1) && (*(int *)((longlong)puVar10 + 0xc) == 0)) {
                (**(code **)*puVar10)();
              }
            }
          }
        }
        local_3f0 = uVar55 + 1;
        local_3b0 = (FGeometryCollection *)((longlong)local_3b0 + 4);
        local_3a0 = local_3a0 + 1;
        plVar52 = (longlong *)((longlong)plVar52 + 1);
        local_3d8 = plVar52;
        if (local_380 <= local_3a0) break;
        plVar36 = (longlong *)(ulonglong)local_3bc;
      } while( true );
    }
    dVar21 = __real_3ff0000000000000;
    local_3f8 = 0;
    if (0 < local_37c) {
      local_3c8 = (longlong *)0x0;
      local_3e8 = (ForElementType<unsigned_int>)0x0;
      plVar52 = (longlong *)(longlong)(int)uVar54;
      do {
        plVar36 = local_3c8;
        iVar31 = *(int *)&(param_1->TransformIndex).field_0x18;
        uVar56 = ~local_3f8 >> 0x1f;
        uVar55 = 0;
        if ((int)local_3f8 < iVar31) {
          uVar55 = uVar56;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)local_3f8;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar31 = *(int *)&(param_4->TransformIndex).field_0x18;
        iVar30 = local_3bc +
                 *(int *)((longlong)plVar36 + *(longlong *)&(param_1->TransformIndex).field_0x10);
        uVar57 = ~uVar54 >> 0x1f;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(int *)(*(longlong *)&(param_4->TransformIndex).field_0x10 + (longlong)plVar52 * 4) =
             iVar30;
        iVar31 = *(int *)&(param_1->VertexStart).field_0x18;
        uVar55 = 0;
        if ((int)local_3f8 < iVar31) {
          uVar55 = uVar56;
        }
        if ((uVar55 == 0) &&
           (local_428 = (longlong *)(longlong)(int)local_3f8,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        iVar30 = local_3b8 +
                 *(int *)(*(longlong *)&(param_1->VertexStart).field_0x10 + (longlong)local_3e8 * 4)
        ;
        iVar31 = *(int *)&(param_4->VertexStart).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(int *)(*(longlong *)&(param_4->VertexStart).field_0x10 + (longlong)plVar52 * 4) = iVar30;
        iVar31 = *(int *)&(param_1->VertexCount).field_0x18;
        uVar55 = 0;
        if ((int)local_3f8 < iVar31) {
          uVar55 = uVar56;
        }
        if ((uVar55 == 0) &&
           (local_428 = (longlong *)(longlong)(int)local_3f8,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        uVar9 = *(undefined4 *)
                 (*(longlong *)&(param_1->VertexCount).field_0x10 + (longlong)local_3e8 * 4);
        iVar31 = *(int *)&(param_4->VertexCount).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)(*(longlong *)&(param_4->VertexCount).field_0x10 + (longlong)plVar52 * 4) =
             uVar9;
        iVar31 = *(int *)&(param_1->FaceStart).field_0x18;
        uVar55 = 0;
        if ((int)local_3f8 < iVar31) {
          uVar55 = uVar56;
        }
        if ((uVar55 == 0) &&
           (local_428 = (longlong *)(longlong)(int)local_3f8,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        iVar30 = local_398 +
                 *(int *)(*(longlong *)&(param_1->FaceStart).field_0x10 + (longlong)local_3e8 * 4);
        iVar31 = *(int *)&(param_4->FaceStart).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(int *)(*(longlong *)&(param_4->FaceStart).field_0x10 + (longlong)plVar52 * 4) = iVar30;
        iVar31 = *(int *)&(param_1->FaceCount).field_0x18;
        uVar55 = 0;
        if ((int)local_3f8 < iVar31) {
          uVar55 = uVar56;
        }
        if ((uVar55 == 0) &&
           (local_428 = (longlong *)(longlong)(int)local_3f8,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        uVar9 = *(undefined4 *)
                 (*(longlong *)&(param_1->FaceCount).field_0x10 + (longlong)local_3e8 * 4);
        iVar31 = *(int *)&(param_4->FaceCount).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        dVar16 = 0.0;
        dVar17 = 0.0;
        dVar18 = 0.0;
        *(undefined4 *)(*(longlong *)&(param_4->FaceCount).field_0x10 + (longlong)plVar52 * 4) =
             uVar9;
        iVar31 = *(int *)&(param_4->VertexStart).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        uVar54 = local_3d0;
        uVar46 = (ulonglong)
                 *(int *)(*(longlong *)&(param_4->VertexStart).field_0x10 + (longlong)plVar52 * 4);
        lVar38 = uVar46 * 0xc;
        while( true ) {
          iVar31 = *(int *)&(param_4->VertexCount).field_0x18;
          uVar55 = 0;
          if ((int)uVar54 < iVar31) {
            uVar55 = uVar57;
          }
          if ((uVar55 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          iVar31 = *(int *)&(param_4->VertexStart).field_0x18;
          lVar47 = *(longlong *)&(param_4->VertexCount).field_0x10;
          uVar55 = 0;
          if ((int)uVar54 < iVar31) {
            uVar55 = uVar57;
          }
          if ((uVar55 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          uVar55 = (uint)uVar46;
          if (*(int *)(lVar47 + (longlong)plVar52 * 4) +
              *(int *)(*(longlong *)&(param_4->VertexStart).field_0x10 + (longlong)plVar52 * 4) <=
              (int)uVar55) break;
          iVar31 = *(int *)&(param_4->Vertex).field_0x18;
          uVar56 = 0;
          if ((int)uVar55 < iVar31) {
            uVar56 = ~uVar55 >> 0x1f;
          }
          if (uVar56 == 0) {
            local_428 = (longlong *)(longlong)(int)uVar55;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar31;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          lVar47 = *(longlong *)&(param_4->Vertex).field_0x10;
          uVar46 = (ulonglong)(uVar55 + 1);
          pfVar4 = (float *)(lVar47 + 4 + lVar38);
          dVar16 = dVar16 + (double)*(float *)(lVar47 + lVar38);
          pfVar5 = (float *)(lVar47 + 8 + lVar38);
          lVar38 = lVar38 + 0xc;
          dVar17 = dVar17 + (double)*pfVar4;
          dVar18 = dVar18 + (double)*pfVar5;
        }
        iVar31 = *(int *)&(param_4->VertexCount).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if ((uVar55 == 0) &&
           (local_428 = plVar52,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        if (*(int *)(*(longlong *)&(param_4->VertexCount).field_0x10 + (longlong)plVar52 * 4) != 0)
        {
          iVar31 = *(int *)&(param_4->VertexCount).field_0x18;
          uVar55 = 0;
          if ((int)uVar54 < iVar31) {
            uVar55 = uVar57;
          }
          if ((uVar55 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          dVar13 = dVar21 / (double)*(int *)(*(longlong *)&(param_4->VertexCount).field_0x10 +
                                            (longlong)plVar52 * 4);
          dVar16 = dVar16 * dVar13;
          dVar17 = dVar17 * dVar13;
          dVar18 = dVar18 * dVar13;
        }
        iVar31 = *(int *)&(param_4->BoundingBox).field_0x18;
        uStack_117 = 0;
        uStack_113 = 0;
        uStack_111 = 0;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        local_118 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        if ((uVar55 == 0) &&
           (local_428 = plVar52,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        lVar38 = *(longlong *)&(param_4->BoundingBox).field_0x10;
        lVar47 = (longlong)plVar52 * 0x38;
        *(undefined8 *)(lVar47 + lVar38) = 0;
        ((undefined8 *)(lVar47 + lVar38))[1] = 0;
        puVar2 = (undefined8 *)(lVar47 + 0x10 + lVar38);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar47 + 0x20 + lVar38);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar47 + 0x30 + lVar38) = 0;
        iVar31 = *(int *)&(param_4->InnerRadius).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if ((uVar55 == 0) &&
           (local_428 = plVar52,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        *(undefined4 *)(*(longlong *)&(param_4->InnerRadius).field_0x10 + (longlong)plVar52 * 4) =
             0x7f7fffff;
        iVar31 = *(int *)&(param_4->OuterRadius).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if ((uVar55 == 0) &&
           (local_428 = plVar52,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        *(undefined4 *)(*(longlong *)&(param_4->OuterRadius).field_0x10 + (longlong)plVar52 * 4) =
             0xff7fffff;
        iVar31 = *(int *)&(param_4->VertexStart).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar57;
        }
        if ((uVar55 == 0) &&
           (local_428 = plVar52,
           local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                       (longlong)iVar31,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar12 = (code *)swi(3);
          uVar29 = (*pcVar12)();
          return (bool)uVar29;
        }
        plVar36 = (longlong *)
                  (longlong)
                  *(int *)(*(longlong *)&(param_4->VertexStart).field_0x10 + (longlong)plVar52 * 4);
        lVar38 = (longlong)plVar36 * 0xc;
        local_3b0 = (FGeometryCollection *)plVar36;
        while( true ) {
          iVar31 = *(int *)&(param_4->VertexCount).field_0x18;
          uVar55 = 0;
          if ((int)uVar54 < iVar31) {
            uVar55 = uVar57;
          }
          if ((uVar55 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          local_388 = *(TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> **)
                       &(param_4->VertexCount).field_0x10;
          iVar31 = *(int *)&(param_4->VertexStart).field_0x18;
          uVar55 = 0;
          if ((int)uVar54 < iVar31) {
            uVar55 = uVar57;
          }
          if ((uVar55 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          uVar55 = (uint)plVar36;
          if (*(int *)(*(longlong *)&(param_4->VertexStart).field_0x10 + (longlong)plVar52 * 4) +
              *(int *)(&local_388->field_0x0 + (longlong)plVar52 * 4) <= (int)uVar55) break;
          iVar31 = *(int *)&(param_4->Vertex).field_0x18;
          uVar54 = 0;
          if ((int)uVar55 < iVar31) {
            uVar54 = ~uVar55 >> 0x1f;
          }
          if (uVar54 == 0) {
            local_428 = (longlong *)(longlong)(int)uVar55;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar31;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          lVar11 = *(longlong *)&(param_4->Vertex).field_0x10;
          iVar31 = *(int *)&(param_4->BoundingBox).field_0x18;
          dVar13 = (double)*(float *)(lVar11 + lVar38);
          uVar54 = 0;
          if ((int)local_3d0 < iVar31) {
            uVar54 = uVar57;
          }
          dVar62 = (double)*(float *)(lVar11 + 4 + lVar38);
          dVar15 = (double)*(float *)(lVar11 + 8 + lVar38);
          if ((uVar54 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          lVar11 = *(longlong *)&(param_4->BoundingBox).field_0x10;
          if (*(char *)(lVar47 + 0x30 + lVar11) == '\0') {
            *(double *)(lVar47 + 0x18 + lVar11) = dVar13;
            *(double *)(lVar47 + 0x20 + lVar11) = dVar62;
            *(double *)(lVar47 + 0x28 + lVar11) = dVar15;
            puVar2 = (undefined8 *)(lVar47 + 0x18 + lVar11);
            uVar20 = puVar2[1];
            *(undefined1 *)(lVar47 + 0x30 + lVar11) = 1;
            uVar6 = *(undefined8 *)(lVar47 + 0x28 + lVar11);
            *(undefined8 *)(lVar47 + lVar11) = *puVar2;
            ((undefined8 *)(lVar47 + lVar11))[1] = uVar20;
            *(undefined8 *)(lVar47 + 0x10 + lVar11) = uVar6;
          }
          else {
            dVar7 = *(double *)(lVar47 + 8 + lVar11);
            dVar19 = dVar62;
            if (dVar7 <= dVar62) {
              dVar19 = dVar7;
            }
            dVar7 = *(double *)(lVar47 + 0x20 + lVar11);
            if (dVar62 <= dVar7) {
              dVar62 = dVar7;
            }
            dVar7 = *(double *)(lVar47 + lVar11);
            if (dVar13 <= *(double *)(lVar47 + lVar11)) {
              dVar7 = dVar13;
            }
            dVar8 = *(double *)(lVar47 + 0x18 + lVar11);
            if (dVar13 <= dVar8) {
              dVar13 = dVar8;
            }
            *(double *)(lVar47 + 8 + lVar11) = dVar19;
            *(double *)(lVar47 + 0x20 + lVar11) = dVar62;
            *(double *)(lVar47 + lVar11) = dVar7;
            dVar62 = *(double *)(lVar47 + 0x10 + lVar11);
            if (dVar15 <= dVar62) {
              dVar62 = dVar15;
            }
            *(double *)(lVar47 + 0x18 + lVar11) = dVar13;
            *(double *)(lVar47 + 0x10 + lVar11) = dVar62;
            dVar13 = *(double *)(lVar47 + 0x28 + lVar11);
            if (dVar13 <= dVar15) {
              dVar13 = dVar15;
            }
            *(double *)(lVar47 + 0x28 + lVar11) = dVar13;
          }
          iVar31 = *(int *)&(param_4->Vertex).field_0x18;
          uVar54 = 0;
          if ((int)uVar55 < iVar31) {
            uVar54 = ~uVar55 >> 0x1f;
          }
          if (uVar54 == 0) {
            local_428 = &local_3b0->_padding_;
            local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                        (longlong)iVar31;
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar12 = (code *)swi(3);
              uVar29 = (*pcVar12)();
              return (bool)uVar29;
            }
          }
          uVar54 = local_3d0;
          lVar11 = *(longlong *)&(param_4->Vertex).field_0x10;
          iVar31 = *(int *)&(param_4->InnerRadius).field_0x18;
          dVar62 = dVar16 - (double)*(float *)(lVar38 + lVar11);
          dVar13 = dVar17 - (double)*(float *)(lVar38 + 4 + lVar11);
          uVar56 = 0;
          if ((int)local_3d0 < iVar31) {
            uVar56 = uVar57;
          }
          dVar15 = dVar18 - (double)*(float *)(lVar38 + 8 + lVar11);
          fVar58 = (float)SQRT(dVar13 * dVar13 + dVar62 * dVar62 + dVar15 * dVar15);
          if ((uVar56 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          iVar31 = *(int *)&(param_4->InnerRadius).field_0x18;
          fVar61 = *(float *)(*(longlong *)&(param_4->InnerRadius).field_0x10 +
                             (longlong)plVar52 * 4);
          if (fVar58 <= fVar61) {
            fVar61 = fVar58;
          }
          uVar56 = 0;
          if ((int)uVar54 < iVar31) {
            uVar56 = uVar57;
          }
          if ((uVar56 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          *(float *)(*(longlong *)&(param_4->InnerRadius).field_0x10 + (longlong)plVar52 * 4) =
               fVar61;
          iVar31 = *(int *)&(param_4->OuterRadius).field_0x18;
          uVar56 = 0;
          if ((int)uVar54 < iVar31) {
            uVar56 = uVar57;
          }
          if ((uVar56 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          iVar31 = *(int *)&(param_4->OuterRadius).field_0x18;
          fVar61 = *(float *)(*(longlong *)&(param_4->OuterRadius).field_0x10 +
                             (longlong)plVar52 * 4);
          if (fVar61 <= fVar58) {
            fVar61 = fVar58;
          }
          uVar56 = 0;
          if ((int)uVar54 < iVar31) {
            uVar56 = uVar57;
          }
          if ((uVar56 == 0) &&
             (local_428 = plVar52,
             local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                         (longlong)iVar31,
             bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
          plVar36 = (longlong *)(ulonglong)(uVar55 + 1);
          local_3b0 = (FGeometryCollection *)((longlong)local_3b0 + 1);
          lVar38 = lVar38 + 0xc;
          *(float *)(*(longlong *)&(param_4->OuterRadius).field_0x10 + (longlong)plVar52 * 4) =
               fVar61;
        }
        local_3f8 = local_3f8 + 1;
        local_3e8 = (ForElementType<unsigned_int>)((longlong)local_3e8 + 1);
        uVar54 = uVar54 + 1;
        local_3c8 = (longlong *)((longlong)local_3c8 + 4);
        plVar52 = (longlong *)((longlong)plVar52 + 1);
        param_1 = local_390;
        local_3d0 = uVar54;
      } while ((longlong)local_3e8 < (longlong)local_37c);
    }
    local_3c8 = (longlong *)(longlong)local_378;
    uVar54 = 0;
    if (0 < (longlong)local_3c8) {
      uVar46 = (ulonglong)(int)local_370;
      local_3f0 = local_370;
      local_3b0 = (FGeometryCollection *)(uVar46 << 5);
      lVar38 = 0;
      local_390 = local_3b0;
      do {
        iVar31 = *(int *)&(param_1->Sections).field_0x18;
        uVar56 = ~uVar54 >> 0x1f;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar56;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        uVar57 = (int)uVar46 + uVar54;
        uVar43 = ~uVar57 >> 0x1f;
        iVar31 = *(int *)&(param_4->Sections).field_0x18;
        local_3e8._0_4_ =
             local_374 + *(int *)(lVar38 + *(longlong *)&(param_1->Sections).field_0x10);
        uVar55 = 0;
        if ((int)local_3f0 < iVar31) {
          uVar55 = uVar43;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar57;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)
         ((longlong)&local_3b0->_padding_ + *(longlong *)&(param_4->Sections).field_0x10) =
             local_3e8._0_4_;
        iVar31 = *(int *)&(param_1->Sections).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar56;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar31 = *(int *)&(param_4->Sections).field_0x18;
        local_3e8._0_4_ =
             local_398 * 3 + *(int *)(lVar38 + 4 + *(longlong *)&(param_1->Sections).field_0x10);
        uVar55 = 0;
        if ((int)uVar57 < iVar31) {
          uVar55 = uVar43;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar57;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)
         ((longlong)&local_390->_padding_ +
         *(longlong *)&(param_4->Sections).field_0x10 + lVar38 + 4) = local_3e8._0_4_;
        iVar31 = *(int *)&(param_1->Sections).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar56;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar31 = *(int *)&(param_4->Sections).field_0x18;
        local_3e8._0_4_ =
             local_3b8 + *(int *)(lVar38 + 0xc + *(longlong *)&(param_1->Sections).field_0x10);
        uVar55 = 0;
        if ((int)uVar57 < iVar31) {
          uVar55 = uVar43;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar57;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)
         ((longlong)&local_390->_padding_ +
         *(longlong *)&(param_4->Sections).field_0x10 + lVar38 + 4) = local_3e8._0_4_;
        iVar31 = *(int *)&(param_1->Sections).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar56;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar31 = *(int *)&(param_4->Sections).field_0x18;
        local_3e8._0_4_ = *(undefined4 *)(lVar38 + 8 + *(longlong *)&(param_1->Sections).field_0x10)
        ;
        uVar55 = 0;
        if ((int)uVar57 < iVar31) {
          uVar55 = uVar43;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar57;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        *(undefined4 *)
         ((longlong)&local_390->_padding_ + *(longlong *)&(param_4->Sections).field_0x10 + lVar38) =
             local_3e8._0_4_;
        iVar31 = *(int *)&(param_1->Sections).field_0x18;
        uVar55 = 0;
        if ((int)uVar54 < iVar31) {
          uVar55 = uVar56;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar54;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        iVar31 = *(int *)&(param_4->Sections).field_0x18;
        iVar30 = local_3b8 + *(int *)(lVar38 + 0x10 + *(longlong *)&(param_1->Sections).field_0x10);
        uVar55 = 0;
        if ((int)uVar57 < iVar31) {
          uVar55 = uVar43;
        }
        if (uVar55 == 0) {
          local_428 = (longlong *)(longlong)(int)uVar57;
          local_420 = (ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> *)
                      (longlong)iVar31;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar12 = (code *)swi(3);
            uVar29 = (*pcVar12)();
            return (bool)uVar29;
          }
        }
        uVar54 = uVar54 + 1;
        local_3f0 = local_3f0 + 1;
        local_3c8 = (longlong *)((longlong)local_3c8 + -1);
        local_3b0 = (FGeometryCollection *)&local_3b0->_padding_;
        uVar46 = (ulonglong)local_370;
        *(int *)((longlong)&local_390->_padding_ +
                *(longlong *)&(param_4->Sections).field_0x10 + lVar38) = iVar30;
        lVar38 = lVar38 + 0x20;
      } while (local_3c8 != (longlong *)0x0);
    }
    if (param_5) {
      FGeometryCollection::ReindexMaterials(param_4);
    }
    bVar28 = true;
  }
  return bVar28;
}

// AppendGeometryCollectionInstancedMeshes @ 146367920

void __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollectionInstancedMeshes
          (UGeometryCollection *param_1,UGeometryCollection *param_2,int param_3)

{
  FGeometryCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryCollection *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FGeometryCollectionAutoInstanceMesh *pFVar9;
  int iVar10;
  FCollectionInstancedMeshFacade local_98;
  FCollectionInstancedMeshFacade local_60;
  
  pFVar1 = (param_1->GeometryCollection).Object;
  pTVar2 = (param_1->GeometryCollection).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = (param_2->GeometryCollection).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_2->GeometryCollection).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar1 != (FGeometryCollection *)0x0) && (pFVar4 != (FGeometryCollection *)0x0)) {
    GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
              (&local_98,(FManagedArrayCollection *)pFVar1);
    GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
              (&local_60,(FManagedArrayCollection *)pFVar4);
    bVar5 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::IsValid(&local_98);
    if (bVar5) {
      GeometryCollection::Facades::FCollectionInstancedMeshFacade::DefineSchema(&local_60);
      iVar6 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetNumIndices(&local_98);
      iVar10 = 0;
      if (0 < iVar6) {
        do {
          iVar8 = -1;
          iVar7 = GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetIndex
                            (&local_98,iVar10);
          if ((-1 < iVar7) && (iVar7 < (param_1->AutoInstanceMeshes).ArrayNum)) {
            pFVar9 = UGeometryCollection::GetAutoInstanceMesh(param_1,iVar7);
            iVar8 = UGeometryCollection::FindOrAddAutoInstanceMesh(param_2,pFVar9);
          }
          GeometryCollection::Facades::FCollectionInstancedMeshFacade::SetIndex
                    (&local_60,iVar10 + param_3,iVar8);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar6);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// AppendGeometryCollectionMaterials @ 146367a70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollectionMaterials
          (UGeometryCollection *param_1,UGeometryCollectionComponent *param_2,
          UGeometryCollection *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  UClass *pUVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  TObjectPtr<UMaterialInterface>_u_0 local_res8;
  TObjectPtr<UMaterialInterface>_u_0 local_res10;
  undefined8 local_88;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_80;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1 == (UGeometryCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceGeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x42e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((param_2 == (UGeometryCollectionComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollectionComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x42f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((param_3 == (UGeometryCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetGeometryCollectionObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x430,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar8 = (param_1->Materials).ArrayNum;
  uVar9 = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar10 = 0;
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&local_80.AllocatorInstance,0,&local_80.ArrayMax);
  }
  uVar11 = uVar9;
  if (0 < (param_1->Materials).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      if (param_2 == (UGeometryCollectionComponent *)0x0) {
        uVar4 = uVar10;
        if ((int)uVar8 < (param_1->Materials).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        local_88 = *(undefined8 *)((param_1->Materials).AllocatorInstance.Data + uVar11);
      }
      else {
        local_88 = (**(code **)(*(longlong *)param_2 + 0x690))(param_2,uVar9);
      }
      if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (local_80.ArrayNum == local_80.ArrayMax) {
        local_80.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
      }
      lVar7 = (longlong)local_80.ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      local_80.ArrayNum = local_80.ArrayNum + 1;
      *(undefined8 *)(local_80.AllocatorInstance.Data + lVar7 * 8) = local_88;
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < (param_1->Materials).ArrayNum);
  }
  local_68 = (wchar_t *)0x0;
  iStack_60 = 0;
  local_58 = UGeometryCollection::GetSelectedMaterialPath();
  if (local_58 != (wchar_t *)0x0) {
    sVar5 = wcslen(local_58);
    uVar10 = (uint)sVar5;
  }
  uStack_50 = uVar10;
  pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  local_48._12_4_ = uStack_5c;
  local_48.Size = iStack_60;
  local_38._12_4_ = uStack_4c;
  local_38.Size = uStack_50;
  local_48.DataPtr = local_68;
  local_38.DataPtr = local_58;
  local_res8.DebugPtr =
       (UMaterialInterface *)
       StaticLoadObject(pUVar6,(UObject *)0x0,&local_38,&local_48,0,(UPackageMap *)0x0,true,
                        (FLinkerInstancingContext *)0x0);
  local_res10.DebugPtr = local_res8.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8.DebugPtr != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::Remove
            (&param_3->Materials,(TObjectPtr<UMaterialInterface> *)&local_res8.ObjectPtr);
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::Remove(&local_80,&local_res10.DebugPtr);
  iVar3 = AppendMaterials(&local_80,param_3,false);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return iVar3;
}

// AppendGeometryCollectionSource @ 146367d80

void __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollectionSource
          (FGeometryCollectionSource *param_1,FGeometryCollection *param_2,
          TArray<UMaterial_*,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  bool bVar1;
  
  bVar1 = AppendGeometryCollectionSourceNoMaterial(param_1,param_2,param_3->ArrayNum,param_4);
  if (bVar1) {
    TArray<UMaterial_*,TSizedDefaultAllocator<32>_>::
    Append<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
              (param_3,&param_1->SourceMaterial);
  }
  return;
}

// AppendGeometryCollectionSource @ 146367dc0

void __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollectionSource
          (FGeometryCollectionSource *param_1,FGeometryCollection *param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  bVar3 = AppendGeometryCollectionSourceNoMaterial(param_1,param_2,param_3->ArrayNum,param_4);
  if (bVar3) {
    if ((param_3 ==
         (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)&param_1->SourceMaterial) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (param_1->SourceMaterial).ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax
                        );
      ConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int>
                ((param_3->AllocatorInstance).Data + (longlong)iVar4 * 8,
                 (TObjectPtr<UMaterialInterface> *)(param_1->SourceMaterial).AllocatorInstance.Data,
                 iVar1);
    }
  }
  return;
}

// AppendGeometryCollectionSourceNoMaterial @ 146367e80

bool __cdecl
FGeometryCollectionEngineConversion::AppendGeometryCollectionSourceNoMaterial
          (FGeometryCollectionSource *param_1,FGeometryCollection *param_2,int param_3,bool param_4)

{
  int iVar1;
  FGeometryCollection *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  
  pUVar5 = FSoftObjectPath::TryLoad(&param_1->SourceGeometryObject,(FUObjectSerializeContext *)0x0);
  if (pUVar5 == (UObject *)0x0) {
LAB_146367f5a:
    bVar4 = false;
  }
  else {
    pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_USkeletalMesh_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pUVar6 = Z_Construct_UClass_UGeometryCollection_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_146367f5a;
        pFVar2 = *(FGeometryCollection **)&pUVar5[0xf].field_0x20;
        pTVar3 = *(TReferenceControllerBase<1> **)(pUVar5 + 0x10);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        AppendGeometryCollection(pFVar2,param_3,&param_1->LocalTransform,param_2,param_4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

// AppendMaterials @ 146367f80

int __cdecl
FGeometryCollectionEngineConversion::AppendMaterials
          (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          UGeometryCollection *param_2,bool param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  UMaterial *pUVar10;
  uint uVar11;
  longlong lVar12;
  UMaterial *local_48;
  UMaterial *local_40;
  
  iVar8 = (param_2->Materials).ArrayNum;
  pTVar2 = &param_2->Materials;
  iVar3 = param_1->ArrayNum;
  uVar11 = iVar3 + iVar8;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(param_2->Materials).ArrayMax;
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&pTVar2->AllocatorInstance,iVar8,piVar1);
  }
  uVar11 = 0;
  if (0 < iVar3) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      pUVar10 = *(UMaterial **)((param_1->AllocatorInstance).Data + lVar12 * 8);
      if (pUVar10 == (UMaterial *)0x0) {
        pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      local_48 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UMaterial *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar9 = (param_2->Materials).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_2->Materials).ArrayNum = iVar9 + 1;
      *(UMaterial **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UMaterial *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_48);
      }
      if (param_3) {
        local_40 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UMaterial *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        iVar9 = (param_2->Materials).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (param_2->Materials).ArrayNum = iVar9 + 1;
        *(UMaterial **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_40;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UMaterial *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_40);
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar3);
  }
  return iVar8;
}

// AppendMeshDescription @ 146368260

void __cdecl
FGeometryCollectionEngineConversion::AppendMeshDescription
          (FMeshDescription *param_1,FString *param_2,int param_3,TTransform<double> *param_4,
          FGeometryCollection *param_5,UBodySetup *param_6,bool param_7,bool param_8,bool param_9)

{
  return;
}

// AppendSkeletalMesh @ 146368270

void __cdecl
FGeometryCollectionEngineConversion::AppendSkeletalMesh
          (USkeletalMesh *param_1,USkeletalMeshComponent *param_2,TTransform<double> *param_3,
          UGeometryCollection *param_4,bool param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (USkeletalMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletalMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                       ,0x5ea,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_4 != (UGeometryCollection *)0x0) {
    pTVar1 = (param_4->GeometryCollection).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return;
  }
  return;
}

// AppendSkeletalMesh @ 1463682d0

bool __cdecl
FGeometryCollectionEngineConversion::AppendSkeletalMesh
          (USkeletalMesh *param_1,int param_2,TTransform<double> *param_3,
          FManagedArrayCollection *param_4,bool param_5,bool param_6)

{
  return false;
}

// AppendSkeletalMeshMaterials @ 1463682e0

int __cdecl
FGeometryCollectionEngineConversion::AppendSkeletalMeshMaterials
          (USkeletalMesh *param_1,USkeletalMeshComponent *param_2,UGeometryCollection *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  UObject *local_28 [2];
  
  if ((param_1 == (USkeletalMesh *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkeletalMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x5fc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((param_2 == (USkeletalMeshComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkeletalMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x5fd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((param_3 == (UGeometryCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollectionObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                         ,0x5fe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x3c0))(param_1);
  uVar8 = 0;
  if (param_2 == (USkeletalMeshComponent *)0x0) {
    if (((int)plVar7[1] < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    local_28[0] = *(UObject **)*plVar7;
  }
  else {
    local_28[0] = (UObject *)(**(code **)(param_2->_padding_ + 0x690))(param_2,0);
  }
  iVar4 = (param_3->Materials).ArrayNum;
  if (local_28[0] != (UObject *)0x0) {
    lVar10 = 0;
    pTVar9 = &param_3->Materials;
    do {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28[0]);
      }
      pFVar1 = (pTVar9->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar1 + (longlong)(param_3->Materials).ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar5 = (param_3->Materials).ArrayNum;
      if (iVar5 == (param_3->Materials).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,&(param_3->Materials).ArrayMax);
      }
      (param_3->Materials).ArrayNum = iVar5 + 1;
      *(UObject **)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28[0]);
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      if (param_2 == (USkeletalMeshComponent *)0x0) {
        uVar6 = 0;
        if ((int)uVar8 < (int)plVar7[1]) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        local_28[0] = *(UObject **)(*plVar7 + lVar10 * 0x30);
      }
      else {
        local_28[0] = (UObject *)(**(code **)(param_2->_padding_ + 0x690))(param_2,uVar8);
      }
    } while (local_28[0] != (UObject *)0x0);
  }
  return iVar4;
}

// AppendSkeleton @ 146368590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeometryCollectionEngineConversion::AppendSkeleton
          (USkeleton *param_1,TTransform<double> *param_2,FManagedArrayCollection *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
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
  double dVar20;
  FName FVar21;
  FName FVar22;
  TManagedArray<FLinearColor> *pTVar23;
  longlong lVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar29;
  FName *pFVar30;
  TManagedArray<int> *pTVar31;
  FString *pFVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  FString *pFVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined1 auStackY_2a8 [32];
  uint local_278 [2];
  longlong local_270;
  TManagedArray<FString> *local_268;
  longlong local_260;
  FString local_258;
  FString local_248;
  int local_238;
  int local_234;
  longlong local_230;
  TManagedArray<FLinearColor> *local_228;
  longlong local_220;
  longlong local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FString local_1e8;
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FGuid local_1b8;
  FTransformSource local_1a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  if (param_3 != (FManagedArrayCollection *)0x0) {
    local_78 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
    if (param_1 != (USkeleton *)0x0) {
      FTransformCollection::DefineTransformSchema(param_3);
      GeometryCollection::Facades::FTransformSource::FTransformSource(&local_1a8,param_3);
      FVar22 = FTransformCollection::TransformAttribute;
      FVar21 = FTransformCollection::TransformGroup;
      bVar25 = FManagedArrayCollection::HasAttribute
                         (param_3,FTransformCollection::TransformAttribute,
                          FTransformCollection::TransformGroup);
      if ((!bVar25) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_208 = FVar22;
      local_200 = FVar21;
      pTVar29 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&param_3->Map,(TTuple<FName,FName> *)&local_208);
      if ((pTVar29 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((pTVar29->field_0x10 != ',') &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSameType<T>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x315,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar29->field_0x10);
      lVar33 = *(longlong *)&pTVar29->field_0x30;
      local_230 = lVar33;
      if ((lVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypedManagedArray != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x319,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined1 *)(lVar33 + 8) = 1;
      FVar21 = FTransformCollection::TransformGroup;
      pFVar30 = ::FName::FName(&local_1d8,"BoneColor");
      local_228 = FManagedArrayCollection::ModifyAttribute<FLinearColor>(param_3,*pFVar30,FVar21);
      FVar21 = FTransformCollection::TransformGroup;
      pFVar30 = ::FName::FName(&local_1d0,"BoneName");
      local_268 = FManagedArrayCollection::ModifyAttribute<FString>(param_3,*pFVar30,FVar21);
      pTVar31 = FManagedArrayCollection::ModifyAttribute<int>
                          (param_3,FTransformCollection::ParentAttribute,
                           FTransformCollection::TransformGroup);
      FVar22 = FTransformCollection::ChildrenAttribute;
      FVar21 = FTransformCollection::TransformGroup;
      bVar25 = FManagedArrayCollection::HasAttribute
                         (param_3,FTransformCollection::ChildrenAttribute,
                          FTransformCollection::TransformGroup);
      if ((!bVar25) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1f8 = FVar22;
      local_1f0 = FVar21;
      pTVar29 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&param_3->Map,(TTuple<FName,FName> *)&local_1f8);
      if ((pTVar29 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((pTVar29->field_0x10 != '\x0e') &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSameType<T>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x315,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar29->field_0x10);
      lVar33 = *(longlong *)&pTVar29->field_0x30;
      local_220 = lVar33;
      if ((lVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypedManagedArray != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x319,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined1 *)(lVar33 + 8) = 1;
      iVar5 = (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
      if (iVar5 != 0) {
        uVar37 = 0;
        local_c8.Elements._0_8_ = 0;
        local_c8.Elements._8_8_ = 0;
        local_c8.Elements._32_8_ = 0;
        local_c8.Elements._40_4_ = 0;
        local_c8.Elements._52_4_ = 0;
        local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_c8.HashSize = 0;
        local_c8.Elements._44_4_ = 0x80;
        local_c8.Elements._48_4_ = 0xffffffff;
        local_278[0] = FManagedArrayCollection::AddElements
                                 (param_3,iVar5,FTransformCollection::TransformGroup);
        local_218 = (longlong)iVar5;
        if (0 < iVar5) {
          local_270 = 0;
          local_260 = 0;
          uVar39 = uVar37;
          do {
            lVar33 = local_260;
            uVar38 = (uint)uVar39;
            uVar35 = ~uVar38 >> 0x1f;
            uVar26 = 0;
            if ((int)uVar38 < (param_1->ReferenceSkeleton).FinalRefBonePose.ArrayNum) {
              uVar26 = uVar35;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar34 = local_230;
            pFVar7 = (param_1->ReferenceSkeleton).FinalRefBonePose.AllocatorInstance.Data;
            dVar9 = *(double *)(pFVar7 + lVar33 + 0x10);
            dVar10 = *(double *)(pFVar7 + lVar33 + 0x10 + 8);
            dVar11 = *(double *)(pFVar7 + lVar33);
            dVar12 = *(double *)(pFVar7 + lVar33 + 8);
            dVar13 = *(double *)(pFVar7 + lVar33 + 0x20);
            dVar14 = *(double *)(pFVar7 + lVar33 + 0x20 + 8);
            dVar15 = *(double *)(pFVar7 + lVar33 + 0x40);
            dVar16 = *(double *)(pFVar7 + lVar33 + 0x40 + 8);
            dVar17 = *(double *)(pFVar7 + lVar33 + 0x30);
            dVar18 = *(double *)(pFVar7 + lVar33 + 0x30 + 8);
            dVar19 = *(double *)(pFVar7 + lVar33 + 0x50);
            dVar20 = *(double *)(pFVar7 + lVar33 + 0x50 + 8);
            lVar33 = (longlong)(int)local_278[0];
            uVar26 = 0;
            if ((int)local_278[0] < *(int *)(local_230 + 0x18)) {
              uVar26 = ~local_278[0] >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar34 = *(longlong *)(lVar34 + 0x10);
            pfVar1 = (float *)(lVar34 + lVar33 * 0x30);
            *pfVar1 = (float)dVar11;
            pfVar1[1] = (float)dVar12;
            pfVar1[2] = (float)dVar9;
            pfVar1[3] = (float)dVar10;
            pfVar1 = (float *)(lVar34 + 0x10 + lVar33 * 0x30);
            *pfVar1 = (float)dVar13;
            pfVar1[1] = (float)dVar14;
            pfVar1[2] = (float)dVar17;
            pfVar1[3] = (float)dVar18;
            pfVar1 = (float *)(lVar34 + 0x20 + lVar33 * 0x30);
            *pfVar1 = (float)dVar15;
            pfVar1[1] = (float)dVar16;
            pfVar1[2] = (float)dVar19;
            pfVar1[3] = (float)dVar20;
            uVar26 = rand();
            uVar27 = rand();
            uVar28 = rand();
            pTVar23 = local_228;
            fVar2 = FLinearColor::sRGBToLinearTable
                    [(ulonglong)uVar28 + (ulonglong)(uint)((int)uVar28 / 100) * -100 + 5 & 0xff];
            lVar33 = (longlong)(int)local_278[0];
            fVar3 = FLinearColor::sRGBToLinearTable
                    [(ulonglong)uVar27 + (ulonglong)(uint)((int)uVar27 / 100) * -100 + 5 & 0xff];
            fVar4 = FLinearColor::sRGBToLinearTable
                    [(ulonglong)uVar26 + (ulonglong)(uint)((int)uVar26 / 100) * -100 + 5 & 0xff];
            uVar26 = 0;
            if ((int)local_278[0] < *(int *)&local_228->field_0x18) {
              uVar26 = ~local_278[0] >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar34 = *(longlong *)&pTVar23->field_0x10;
            *(float *)(lVar34 + lVar33 * 0x10) = fVar2;
            *(float *)(lVar34 + 4 + lVar33 * 0x10) = fVar3;
            *(float *)(lVar34 + 8 + lVar33 * 0x10) = fVar4;
            *(undefined4 *)(lVar34 + 0xc + lVar33 * 0x10) = 0x3f800000;
            uVar26 = 0;
            if ((int)uVar38 < (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
              uVar26 = uVar35;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar32 = ::FName::ToString((FName *)((param_1->ReferenceSkeleton).FinalRefBoneInfo.
                                                  AllocatorInstance.Data + local_270),&local_1c8);
            lVar33 = (longlong)(int)local_278[0];
            uVar26 = 0;
            if ((int)local_278[0] < *(int *)&local_268->field_0x18) {
              uVar26 = ~local_278[0] >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar36 = (FString *)(lVar33 * 0x10 + *(longlong *)&local_268->field_0x10);
            if (pFVar36 != pFVar32) {
              pFVar7 = (pFVar36->Data).AllocatorInstance.Data;
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar7);
              }
              (pFVar36->Data).AllocatorInstance.Data = (pFVar32->Data).AllocatorInstance.Data;
              (pFVar32->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar36->Data).ArrayNum = (pFVar32->Data).ArrayNum;
              (pFVar36->Data).ArrayMax = (pFVar32->Data).ArrayMax;
              (pFVar32->Data).ArrayNum = 0;
              (pFVar32->Data).ArrayMax = 0;
            }
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            uVar26 = 0;
            if ((int)uVar38 < (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
              uVar26 = uVar35;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar33 = local_270;
            lVar34 = (longlong)(int)local_278[0];
            uVar6 = *(undefined4 *)
                     ((param_1->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
                     local_270 + 8);
            uVar26 = 0;
            if ((int)local_278[0] < *(int *)&pTVar31->field_0x18) {
              uVar26 = ~local_278[0] >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(undefined4 *)(*(longlong *)&pTVar31->field_0x10 + lVar34 * 4) = uVar6;
            lVar34 = (longlong)(int)local_278[0];
            uVar26 = 0;
            if ((int)local_278[0] < *(int *)&pTVar31->field_0x18) {
              uVar26 = ~local_278[0] >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(int *)(*(longlong *)&pTVar31->field_0x10 + lVar34 * 4) == -1) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_c8,&local_234,(bool *)local_278);
            }
            else {
              lVar34 = (longlong)(int)local_278[0];
              uVar26 = 0;
              if ((int)local_278[0] < *(int *)&pTVar31->field_0x18) {
                uVar26 = ~local_278[0] >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar24 = local_220;
              uVar26 = *(uint *)(*(longlong *)&pTVar31->field_0x10 + lVar34 * 4);
              uVar35 = 0;
              if ((int)uVar26 < *(int *)(local_220 + 0x18)) {
                uVar35 = ~uVar26 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         ((longlong)(int)uVar26 * 0x50 + *(longlong *)(lVar24 + 0x10)),&local_238,
                         (bool *)local_278);
            }
            local_270 = lVar33 + 0xc;
            local_278[0] = local_278[0] + 1;
            local_260 = local_260 + 0x60;
            uVar39 = (ulonglong)(uVar38 + 1);
            uVar37 = uVar37 + 1;
          } while ((longlong)uVar37 < local_218);
        }
        if ((local_c8.Elements._8_4_ == local_c8.Elements._52_4_) &&
           (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2293510727882766893>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                                ,0x5d3,"Roots.Num()"), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1b8.A = (param_1->Guid).A;
        local_1b8.B = (param_1->Guid).B;
        local_1b8.C = (param_1->Guid).C;
        local_1b8.D = (param_1->Guid).D;
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.Data.ArrayNum = 0;
        local_258.Data.ArrayMax = 0;
        FGuid::AppendString(&local_1b8,&local_258,Digits);
        local_210 = (FName)param_1->_padding_;
        ::FName::ToString(&local_210,&local_1e8);
        GeometryCollection::Facades::FTransformSource::AddTransformSource
                  (&local_1a8,&local_1e8,&local_258,&local_c8,&local_248);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        local_c8.HashSize = 0;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_c8.Elements);
      }
    }
  }
  return;
}

// AppendStaticMesh @ 146368f30

void __cdecl
FGeometryCollectionEngineConversion::AppendStaticMesh
          (UStaticMesh *param_1,UStaticMeshComponent *param_2,TTransform<double> *param_3,
          UGeometryCollection *param_4,bool param_5,bool param_6,bool param_7,bool param_8)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  UClass *pUVar6;
  int iVar7;
  int iVar8;
  TObjectPtr<UMaterialInterface>_u_0 local_res8;
  UMaterialInterface *local_78;
  TObjectPtr<UMaterialInterface>_u_0 local_70;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_68;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  if (param_1 != (UStaticMesh *)0x0) {
    uVar1 = (param_1->StaticMaterials).ArrayNum;
    iVar7 = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar8 = 0;
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
    }
    if (0 < (param_1->StaticMaterials).ArrayNum) {
      do {
        if (param_2 == (UStaticMeshComponent *)0x0) {
          local_78 = UStaticMesh::GetMaterial(param_1,iVar7);
        }
        else {
          local_78 = UStaticMeshComponent::GetMaterial(param_2,iVar7);
        }
        if (((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = local_68.ArrayNum;
        if (local_68.ArrayNum == local_68.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_68.AllocatorInstance,&local_68.ArrayMax);
        }
        iVar7 = iVar7 + 1;
        local_68.ArrayNum = iVar4 + 1;
        *(UMaterialInterface **)(local_68.AllocatorInstance.Data + (longlong)iVar4 * 8) = local_78;
      } while (iVar7 < (param_1->StaticMaterials).ArrayNum);
    }
    local_58 = (wchar_t *)0x0;
    iStack_50 = 0;
    local_48 = UGeometryCollection::GetSelectedMaterialPath();
    if (local_48 != (wchar_t *)0x0) {
      sVar5 = wcslen(local_48);
      iVar8 = (int)sVar5;
    }
    iStack_40 = iVar8;
    pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    local_38._12_4_ = uStack_4c;
    local_38.Size = iStack_50;
    local_28._12_4_ = uStack_3c;
    local_28.Size = iStack_40;
    local_38.DataPtr = local_58;
    local_28.DataPtr = local_48;
    local_res8.DebugPtr =
         (UMaterialInterface *)
         StaticLoadObject(pUVar6,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0,true,
                          (FLinkerInstancingContext *)0x0);
    local_70.DebugPtr = local_res8.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::Remove
              (&param_4->Materials,(TObjectPtr<UMaterialInterface> *)&local_res8.ObjectPtr);
    TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::Remove(&local_68,&local_70.DebugPtr);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

// AppendStaticMesh @ 146369160

bool __cdecl
FGeometryCollectionEngineConversion::AppendStaticMesh
          (UStaticMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TTransform<double> *param_3,UGeometryCollection *param_4,bool param_5,bool param_6,
          bool param_7,bool param_8)

{
  return false;
}

// AppendStaticMesh @ 146369170

bool __cdecl
FGeometryCollectionEngineConversion::AppendStaticMesh
          (UStaticMesh *param_1,int param_2,TTransform<double> *param_3,FGeometryCollection *param_4
          ,bool param_5,bool param_6,bool param_7,bool param_8)

{
  return false;
}

// ConvertActorToGeometryCollection @ 14636cc90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FGeometryCollectionEngineConversion::ConvertActorToGeometryCollection
          (AActor *param_1,FManagedArrayCollection *param_2,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_4,
          FSkeletalMeshToCollectionConversionParameters *param_5,bool param_6)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetMaterialsFromInstances(&local_18,param_3);
  return;
}

// ConvertActorToGeometryCollection @ 14636ccc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FGeometryCollectionEngineConversion::ConvertActorToGeometryCollection
          (AActor *param_1,FManagedArrayCollection *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_4,
          FSkeletalMeshToCollectionConversionParameters *param_5,bool param_6)

{
  return;
}

// ConvertCollectionToSkeletalMesh @ 14636ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGeometryCollectionEngineConversion::ConvertCollectionToSkeletalMesh
          (FManagedArrayCollection *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2,
          USkeletalMesh *param_3,USkeleton *param_4)

{
  FScriptContainerElement *pFVar1;
  
  if (1 < (byte)UGeometryCollectionConversionLogging._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&UGeometryCollectionConversionLogging);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ConvertCollectionToSkeleton @ 14636cd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGeometryCollectionEngineConversion::ConvertCollectionToSkeleton
          (FManagedArrayCollection *param_1,USkeleton *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  code *pcVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar6;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  char *pcVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_res20 [8];
  undefined1 auStackY_4d8 [32];
  undefined4 local_488 [2];
  ForAnyElementType local_480;
  int local_478;
  int local_474;
  USkeleton *local_470;
  ForAnyElementType local_468;
  int local_460;
  int local_45c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_458;
  FName local_450;
  TManagedArray<FString> *local_448;
  TManagedArray<UE::Math::TTransform<float>_> *local_440;
  FReferenceSkeletonModifier local_438;
  FName local_428;
  FName local_420;
  FString local_418;
  FString local_408;
  FCollectionTransformFacade *local_3f8;
  USkeleton **local_3f0;
  TManagedArray<FString> ***local_3e8;
  FManagedArrayCollection *local_3e0;
  undefined8 local_3d8;
  FName local_3d0;
  FName local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  TManagedArray<FString> **local_3a8;
  TManagedArray<UE::Math::TTransform<float>_> **local_3a0;
  USkeleton **local_398;
  TArray<int,TSizedDefaultAllocator<32>_> *local_390;
  TManagedArray<int> *local_388;
  FManagedArrayCollection **local_380;
  FBoundsFacade *local_378;
  undefined1 *local_370;
  TArray<int,TSizedDefaultAllocator<32>_> local_368;
  FCollectionTransformFacade local_358;
  FBoundsFacade local_268;
  FManagedArrayCollection local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  uVar10 = 0;
  local_480.Data = (FScriptContainerElement *)0x0;
  local_478 = (param_2->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  lVar15 = (longlong)local_478;
  pFVar2 = (param_2->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data;
  local_res20[0] = param_4;
  local_470 = param_2;
  local_458 = param_3;
  if (local_478 == 0) {
    local_474 = 0;
    iVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_478,0,&local_480,local_478,&local_474);
    memcpy(local_480.Data,pFVar2,lVar15 * 0xc);
    iVar11 = local_478;
  }
  if (iVar11 != 0) {
    while( true ) {
      uVar17 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < iVar11) {
        uVar9 = uVar17;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar11 = local_478, bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_3 = local_458;
      lVar15 = (longlong)(int)uVar10 * 0xc;
      if (*(int *)(local_480.Data + lVar15 + 8) == -1) break;
      uVar9 = 0;
      if ((int)uVar10 < iVar11) {
        uVar9 = uVar17;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar11 = local_478, bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = *(uint *)(local_480.Data + lVar15 + 8);
    }
    if (uVar10 != 0xffffffff) {
      FReferenceSkeletonModifier::FReferenceSkeletonModifier(&local_438,local_470);
      uVar9 = 0;
      if ((int)uVar10 < local_478) {
        uVar9 = uVar17;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FReferenceSkeletonModifier::Remove(&local_438,(FName *)(local_480.Data + lVar15),true);
      FReferenceSkeletonModifier::~FReferenceSkeletonModifier(&local_438);
    }
  }
  FManagedArrayCollection::FManagedArrayCollection(&local_108,param_1);
  GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
            (&local_358,&local_108);
  GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_268,param_1);
  bVar8 = GeometryCollection::Facades::FBoundsFacade::IsValid(&local_268);
  if (bVar8) {
    ::FName::FName(&local_450,"SimulationType");
    local_3d0 = local_450;
    local_428 = local_450;
    local_3d8 = 0;
    local_3c8 = FTransformCollection::TransformGroup;
    local_3c0 = 0;
    local_3b8 = 0;
    local_420 = FTransformCollection::TransformGroup;
    local_3e0 = param_1;
    pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_428);
    pcVar14 = &pTVar12->field_0x10;
    if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar14 = (char *)0x0;
    }
    if ((pcVar14 == (char *)0x0) || (*pcVar14 != '\x05')) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)(pcVar14 + 0x20);
      if ((lVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x306,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_3b0 = lVar15;
    if ((local_268.TransformToGeometryIndexAttribute.ConstAttributeArray ==
         (TManagedArray<int> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid(&local_358);
    if (((bVar8) &&
        (bVar8 = GeometryCollection::Facades::FCollectionTransformFacade::HasBoneNameAttribute
                           (&local_358), bVar8)) && (local_470 != (USkeleton *)0x0)) {
      ::FString::FString(&local_418,"root");
      GeometryCollection::Facades::FCollectionTransformFacade::EnforceSingleRoot
                (&local_358,&local_418);
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
      local_440 = local_358.TransformAttribute.ConstAttributeArray;
      local_448 = local_358.BoneNameAttribute.ConstAttributeArray;
      if (((local_358.TransformAttribute.ConstAttributeArray ==
            (TManagedArray<UE::Math::TTransform<float>_> *)0x0) ||
          (local_358.BoneNameAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2293510727882766535>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionEngineConversion.cpp"
                             ,0x739,"Transforms && BoneNames"), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = GeometryCollection::Facades::FCollectionTransformFacade::Num(&local_358);
      uVar16 = (ulonglong)uVar10;
      local_488[0] = 0xffffffff;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar16);
      }
      piVar1 = &param_3->ArrayMax;
      param_3->ArrayNum = 0;
      if (*piVar1 != uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar10,&param_3->AllocatorInstance,0,piVar1);
      }
      if (0 < (int)uVar10) {
        do {
          pFVar2 = (param_3->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_488) &&
              ((FScriptContainerElement *)local_488 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = param_3->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar11 + 1;
          *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_488[0];
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      local_3a8 = &local_448;
      local_3a0 = &local_440;
      local_398 = &local_470;
      local_380 = &local_3e0;
      local_378 = &local_268;
      local_370 = local_res20;
      local_3f8 = &local_358;
      local_3f0 = &local_470;
      local_3e8 = &local_3a8;
      local_388 = local_268.TransformToGeometryIndexAttribute.ConstAttributeArray;
      local_468.Data = (FScriptContainerElement *)0x0;
      iVar11 = *(int *)&(local_358.BoneNameAttribute.ConstAttributeArray)->field_0x18;
      pFVar3 = *(FString **)&(local_358.BoneNameAttribute.ConstAttributeArray)->field_0x10;
      local_460 = iVar11;
      local_390 = param_3;
      if (iVar11 == 0) {
        local_45c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,0,&local_468,iVar11,&local_45c);
        ConstructItems<FString,FString,int>(local_468.Data,pFVar3,iVar11);
      }
      uVar10 = 0;
      iVar11 = (**(code **)(*(longlong *)local_358.ParentAttribute.ConstAttributeArray + 0x60))();
      if (0 < iVar11) {
        lVar15 = 0;
        lVar18 = 0;
        do {
          pTVar5 = local_358.ParentAttribute.ConstAttributeArray;
          uVar17 = ~uVar10 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar10 < *(int *)&(local_358.ParentAttribute.ConstAttributeArray)->field_0x18) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(*(longlong *)&pTVar5->field_0x10 + lVar15 * 4) == -1) {
            `FGeometryCollectionEngineConversion::ConvertCollectionToSkeleton'::__l34::<lambda_2>::
            operator()(&local_3a8,uVar10,-1);
            pTVar6 = local_358.ChildrenAttribute.ConstAttributeArray;
            uVar9 = 0;
            if ((int)uVar10 < *(int *)&(local_358.ChildrenAttribute.ConstAttributeArray)->field_0x18
               ) {
              uVar9 = uVar17;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar7 = local_358.ChildrenAttribute.ConstAttributeArray;
            if (*(int *)(lVar18 + 8 + *(longlong *)&pTVar6->field_0x10) !=
                *(int *)(lVar18 + 0x34 + *(longlong *)&pTVar6->field_0x10)) {
              uVar9 = 0;
              if ((int)uVar10 <
                  *(int *)&(local_358.ChildrenAttribute.ConstAttributeArray)->field_0x18) {
                uVar9 = uVar17;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                                   (*(longlong *)&pTVar7->field_0x10 + lVar18),&local_368);
              `FGeometryCollectionEngineConversion::ConvertCollectionToSkeleton'::__l34::<lambda_3>
              ::operator()(&local_3f8,pTVar13);
              if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.AllocatorInstance.Data);
              }
            }
          }
          uVar10 = uVar10 + 1;
          lVar15 = lVar15 + 1;
          lVar18 = lVar18 + 0x50;
          iVar11 = (**(code **)(*(longlong *)local_358.ParentAttribute.ConstAttributeArray + 0x60))
                             ();
        } while ((int)uVar10 < iVar11);
      }
      ::FString::FString(&local_408,"root");
      GeometryCollection::Facades::FCollectionTransformFacade::EnforceSingleRoot
                (&local_358,&local_408);
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)UGeometryCollectionConversionLogging._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&UGeometryCollectionConversionLogging);
      }
      DestructItems<FString,int>((FString *)local_468.Data,local_460);
      if (local_468.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data);
      }
    }
  }
  else if (1 < (byte)UGeometryCollectionConversionLogging._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&UGeometryCollectionConversionLogging);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_108);
  if (local_480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data);
  }
  return;
}

// ConvertGeometryCollectionToGeometryCollection @ 14636d500

void __cdecl
FGeometryCollectionEngineConversion::ConvertGeometryCollectionToGeometryCollection
          (TObjectPtr<UGeometryCollection> param_1,FManagedArrayCollection *param_2,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  FManagedArrayCollection *this;
  TObjectPtr<UMaterialInterface> *pTVar5;
  FGeometryCollectionAutoInstanceMesh *pFVar6;
  int iVar7;
  undefined1 local_58 [16];
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar3 = *(UObject **)param_1.field0_0x0;
  local_58._0_8_ = (FScriptContainerElement *)0x0;
  local_58._8_8_ = 0;
  if (pUVar3 != (UObject *)0x0) {
    iVar7 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar3);
      iVar7 = local_58._12_4_;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pUVar3 + 0x10);
    this = *(FManagedArrayCollection **)&pUVar3[0xf].field_0x20;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      iVar7 = local_58._12_4_;
    }
    if ((UObject *)local_58 != pUVar3 + 4) {
      iVar2 = *(int *)&pUVar3[4].field_0x8;
      pTVar5 = *(TObjectPtr<UMaterialInterface> **)(pUVar3 + 4);
      local_58._8_4_ = iVar2;
      if ((iVar2 != 0) || (iVar7 != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,iVar7,(ForAnyElementType *)local_58,iVar2,(int *)(local_58 + 0xc));
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  ((void *)local_58._0_8_,pTVar5,iVar2);
      }
    }
    if (param_4 !=
        (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)
        &pUVar3[6].field_0x10) {
      DestructItems<FGeometryCollectionAutoInstanceMesh,int>
                ((FGeometryCollectionAutoInstanceMesh *)(param_4->AllocatorInstance).Data,
                 param_4->ArrayNum);
      iVar7 = *(int *)&pUVar3[6].field_0x18;
      piVar1 = &param_4->ArrayMax;
      pFVar6 = *(FGeometryCollectionAutoInstanceMesh **)&pUVar3[6].field_0x10;
      param_4->ArrayNum = iVar7;
      if ((iVar7 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar7,*piVar1,&param_4->AllocatorInstance,iVar7,piVar1);
        ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
                  ((param_4->AllocatorInstance).Data,pFVar6,iVar7);
      }
    }
    if (this != (FManagedArrayCollection *)0x0) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      FManagedArrayCollection::CopyTo(this,param_2,&local_38,&local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  GetMaterialsFromInstances
            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)local_58,param_3)
  ;
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  return;
}

// ConvertGeometryCollectionToGeometryCollection @ 14636d6f0

void __cdecl
FGeometryCollectionEngineConversion::ConvertGeometryCollectionToGeometryCollection
          (TObjectPtr<UGeometryCollection> param_1,FManagedArrayCollection *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FManagedArrayCollection *this;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FGeometryCollectionAutoInstanceMesh *pFVar6;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  lVar3 = *(longlong *)param_1.field0_0x0;
  if (lVar3 != 0) {
    this = *(FManagedArrayCollection **)(lVar3 + 0x278);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x280);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1.field0_0x0 + 0xa0);
    if (param_3 != pTVar7) {
      iVar2 = *(int *)(*(longlong *)param_1.field0_0x0 + 0xa8);
      piVar1 = &param_3->ArrayMax;
      pFVar5 = (pTVar7->AllocatorInstance).Data;
      param_3->ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,*piVar1,&param_3->AllocatorInstance,iVar2,piVar1);
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  ((param_3->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar5,iVar2)
        ;
      }
    }
    lVar3 = *(longlong *)param_1.field0_0x0;
    pTVar8 = (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)
             (lVar3 + 0x100);
    if (param_4 != pTVar8) {
      DestructItems<FGeometryCollectionAutoInstanceMesh,int>
                ((FGeometryCollectionAutoInstanceMesh *)(param_4->AllocatorInstance).Data,
                 param_4->ArrayNum);
      iVar2 = *(int *)(lVar3 + 0x108);
      piVar1 = &param_4->ArrayMax;
      pFVar6 = (FGeometryCollectionAutoInstanceMesh *)(pTVar8->AllocatorInstance).Data;
      param_4->ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar2,*piVar1,&param_4->AllocatorInstance,iVar2,piVar1);
        ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
                  ((param_4->AllocatorInstance).Data,pFVar6,iVar2);
      }
    }
    if (this != (FManagedArrayCollection *)0x0) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      FManagedArrayCollection::CopyTo(this,param_2,&local_38,&local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// ConvertStaticMeshToGeometryCollection @ 14636d870

void __cdecl
FGeometryCollectionEngineConversion::ConvertStaticMeshToGeometryCollection
          (TObjectPtr<UStaticMesh> param_1,FManagedArrayCollection *param_2,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5,bool param_6)

{
  UObject *pUVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  GetMaterialsFromInstances(&local_18,param_3);
  return;
}

// ConvertStaticMeshToGeometryCollection @ 14636d8e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FGeometryCollectionEngineConversion::ConvertStaticMeshToGeometryCollection
          (TObjectPtr<UStaticMesh> param_1,FManagedArrayCollection *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  EInternalObjectFlags EVar6;
  longlong lVar7;
  FString FStack_28;
  FString FStack_18;
  
  if ((!UE::GC::GIsIncrementalReachabilityPending) || (*(longlong *)param_1.field0_0x0 == 0)) {
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)(*(longlong *)param_1.field0_0x0 + 0xc));
  if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
      (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) == Borrowed)
  {
    if (pFVar3->ClusterRootIndex < 1) {
      return;
    }
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,pFVar3->ClusterRootIndex);
    if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
      return;
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(pFVar3->field1_0x8).Object,&FStack_18,(UObject *)0x0,None);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1924,
                         L"%s is marked as MaybeUnreachable but Incremental Reachability Analysis is not in progress"
                        );
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar6 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar7 = (longlong)(int)UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
      return;
    }
    uVar4 = (pFVar3->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar5 = (pFVar3->field0_0x0).FlagsAndRefCount;
      bVar2 = uVar4 == uVar5;
      if (bVar2) {
        (pFVar3->field0_0x0).FlagsAndRefCount = uVar4 & ~(lVar7 << 0x20);
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar2);
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(pFVar3->field1_0x8).Object,&FStack_28,(UObject *)0x0,None);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1924,
                         L"%s is marked as MaybeUnreachable but Incremental Reachability Analysis is not in progress"
                        );
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar6 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar7 = (longlong)(int)UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
      return;
    }
    uVar4 = (pFVar3->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar5 = (pFVar3->field0_0x0).FlagsAndRefCount;
      bVar2 = uVar4 == uVar5;
      if (bVar2) {
        (pFVar3->field0_0x0).FlagsAndRefCount = uVar4 & ~(lVar7 << 0x20);
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar2);
  }
  LOCK();
  (pFVar3->field0_0x0).FlagsAndRefCount =
       (pFVar3->field0_0x0).FlagsAndRefCount |
       (longlong)(int)UE::GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
  UNLOCK();
  if ((EVar6 & (EInternalObjectFlags)(uVar5 >> 0x20)) != Borrowed) {
    if (-1 < pFVar3->ClusterRootIndex) {
      TExpandingChunkedList<UObject_*,64>::Push
                (&UE::GC::Private::GReachableObjects,(UObject *)(pFVar3->field1_0x8).Object);
      return;
    }
    TExpandingChunkedList<FUObjectItem_*,64>::Push(&UE::GC::Private::GReachableClusters,pFVar3);
  }
  return;
}

// ConvertStaticMeshToGeometryCollection @ 14636d900

void __cdecl
FGeometryCollectionEngineConversion::ConvertStaticMeshToGeometryCollection
          (TObjectPtr<UStaticMesh> param_1,TTransform<double> *param_2,
          FManagedArrayCollection *param_3,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_5,
          bool param_6,bool param_7)

{
  return;
}

// GetMaterialsFromInstances @ 146378950

void __cdecl
FGeometryCollectionEngineConversion::GetMaterialsFromInstances
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  UObject *local_38;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  if (&local_30 == param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&local_30.AllocatorInstance,&local_30.ArrayNum,&local_30.ArrayMax);
    ConstructItems<UMaterial_*,TObjectPtr<UMaterialInterface>,int>
              (local_30.AllocatorInstance.Data + (longlong)iVar8 * 8,
               (TObjectPtr<UMaterialInterface> *)(param_1->AllocatorInstance).Data,iVar3);
  }
  uVar4 = param_1->ArrayNum;
  if (-1 < (int)uVar4) {
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    iVar3 = local_30.ArrayNum;
    pFVar2 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8;
    FVar9.Data = local_30.AllocatorInstance.Data;
    while( true ) {
      if (local_30.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UMaterial_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar9.Data == pFVar2) break;
      local_38 = *(UObject **)FVar9.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_38);
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 < pFVar5 + (longlong)*piVar1 * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar8 + 1;
      *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_38);
      }
      FVar9.Data = FVar9.Data + 8;
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// GetMaxResMeshDescriptionWithNormalsAndTangents @ 146378b60

FMeshDescription * __cdecl
FGeometryCollectionEngineConversion::GetMaxResMeshDescriptionWithNormalsAndTangents
          (UStaticMesh *param_1)

{
  return (FMeshDescription *)0x0;
}

// GetSkeletalMeshLOD @ 14637afd0

FSkeletalMeshLODRenderData * __cdecl
FGeometryCollectionEngineConversion::GetSkeletalMeshLOD(USkeletalMesh *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  
  lVar3 = (**(code **)(param_1->_padding_ + 0x400))();
  if (lVar3 != 0) {
    plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))(param_1);
    if (((plVar4 != (longlong *)0x0) && (-1 < param_2)) && (param_2 < (int)plVar4[1])) {
      if (param_2 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FSkeletalMeshLODRenderData *)(*pcVar1)();
          return pFVar5;
        }
      }
      return *(FSkeletalMeshLODRenderData **)(*plVar4 + (longlong)param_2 * 8);
    }
  }
  return (FSkeletalMeshLODRenderData *)0x0;
}

