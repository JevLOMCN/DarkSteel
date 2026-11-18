// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 13

// FGeometryCollectionISMPool @ 1463a1840

FGeometryCollectionISMPool * __thiscall
FGeometryCollectionISMPool::FGeometryCollectionISMPool(FGeometryCollectionISMPool *this)

{
  (this->ISMs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ISMs).ArrayNum = 0;
  (this->ISMs).ArrayMax = 0;
  *(undefined8 *)&this->MeshToISMIndex = 0;
  *(undefined8 *)&(this->MeshToISMIndex).field_0x8 = 0;
  *(undefined8 *)&(this->MeshToISMIndex).field_0x20 = 0;
  *(undefined4 *)&(this->MeshToISMIndex).field_0x28 = 0;
  *(undefined4 *)&(this->MeshToISMIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshToISMIndex).field_0x34 = 0;
  *(undefined4 *)&(this->MeshToISMIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MeshToISMIndex).field_0x40 = 0;
  *(undefined4 *)&(this->MeshToISMIndex).field_0x48 = 0;
  *(undefined8 *)&(this->PrellocationQueue).Elements = 0;
  *(undefined8 *)&(this->PrellocationQueue).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrellocationQueue).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrellocationQueue).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrellocationQueue).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrellocationQueue).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PrellocationQueue).Elements.field_0x30 = 0xffffffff;
  (this->PrellocationQueue).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrellocationQueue).HashSize = 0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  (this->FreeListISM).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeListISM).ArrayNum = 0;
  (this->FreeListISM).ArrayMax = 0;
  this->bCachedKeepAlive = GComponentKeepAlive;
  this->bCachedRecycle = GComponentRecycle;
  this->bDisableBoundsAndTransformUpdate = false;
  return this;
}

// ~FGeometryCollectionISMPool @ 1463a5430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGeometryCollectionISMPool::~FGeometryCollectionISMPool(FGeometryCollectionISMPool *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->FreeListISM).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PrellocationQueue).HashSize = 0;
  FVar2 = (this->PrellocationQueue).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FGeometryCollectionStaticMeshInstance>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGeometryCollectionStaticMeshInstance>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PrellocationQueue).Elements);
  *(undefined4 *)&(this->MeshToISMIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MeshToISMIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGeometryCollectionStaticMeshInstance,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGeometryCollectionStaticMeshInstance,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGeometryCollectionStaticMeshInstance,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshToISMIndex);
  DestructItems<FGeometryCollectionISM,int>
            ((FGeometryCollectionISM *)(this->ISMs).AllocatorInstance.Data,(this->ISMs).ArrayNum);
  pFVar1 = (this->ISMs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddInstancesToISM @ 1463a9ab0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGeometryCollectionMeshInfo * __thiscall
FGeometryCollectionISMPool::AddInstancesToISM
          (FGeometryCollectionISMPool *this,FGeometryCollectionMeshInfo *__return_storage_ptr__,
          UGeometryCollectionISMPoolComponent *param_1,
          FGeometryCollectionStaticMeshInstance *param_2,int param_3,
          TArrayView<float_const_,int> *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FGeometryCollectionMeshInfo *pFVar5;
  uint uVar6;
  bool local_res8 [8];
  TArrayView<float_const_,int> local_18;
  
  local_res8[0] = false;
  (__return_storage_ptr__->CustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CustomData).ArrayNum = 0;
  (__return_storage_ptr__->CustomData).ArrayMax = 0;
  uVar3 = GetOrAddISM(this,param_1,param_2,local_res8);
  __return_storage_ptr__->ISMIndex = uVar3;
  uVar6 = 0;
  if ((int)uVar3 < (this->ISMs).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGeometryCollectionMeshInfo *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_18.DataPtr = param_4->DataPtr;
  local_18.ArrayNum = param_4->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
  iVar4 = FGeometryCollectionISM::AddInstanceGroup
                    ((FGeometryCollectionISM *)
                     ((this->ISMs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xb8),param_3,
                     &local_18);
  __return_storage_ptr__->InstanceGroupIndex = iVar4;
  return __return_storage_ptr__;
}

// BatchUpdateInstanceCustomData @ 1463aa910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGeometryCollectionISMPool::BatchUpdateInstanceCustomData
          (FGeometryCollectionISMPool *this,FGeometryCollectionMeshInfo *param_1,int param_2,
          float param_3)

{
  FPrimitiveInstanceId FVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar7 = param_1->ISMIndex;
  if ((-1 < iVar7) && (iVar7 < (this->ISMs).ArrayNum)) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->ISMs).AllocatorInstance.Data;
    lVar10 = (longlong)iVar7 * 0xb8;
    if (param_2 < *(int *)(pFVar2 + lVar10 + 0x2c)) {
      uVar6 = param_1->InstanceGroupIndex;
      lVar8 = (longlong)(int)uVar6;
      uVar9 = 0;
      if ((int)uVar6 < *(int *)(pFVar2 + lVar10 + 0x90)) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(pFVar2 + lVar10 + 0x88);
      iVar7 = 0;
      if (0 < *(int *)(lVar3 + 4 + lVar8 * 8)) {
        do {
          uVar9 = *(int *)(lVar3 + lVar8 * 8) + iVar7;
          uVar6 = 0;
          if ((int)uVar9 < *(int *)(pFVar2 + lVar10 + 0xb0)) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar1.Id = *(int *)(*(longlong *)(pFVar2 + lVar10 + 0xa8) + (longlong)(int)uVar9 * 4);
          if (FVar1.Id != -1) {
            UInstancedStaticMeshComponent::SetCustomDataValueById
                      (*(UInstancedStaticMeshComponent **)(pFVar2 + lVar10 + 0x78),FVar1,param_2,
                       param_3);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar3 + 4 + lVar8 * 8));
      }
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6430729192270200446>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                         ,0x182,"CustomFloatIndex < ISM.MeshInstance.Desc.NumCustomDataFloats");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// BatchUpdateInstancesTransforms @ 1463aacc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGeometryCollectionISMPool::BatchUpdateInstancesTransforms
          (FGeometryCollectionISMPool *this,FGeometryCollectionMeshInfo *param_1,int param_2,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_3,bool param_4,bool param_5,
          bool param_6,bool param_7)

{
  FPrimitiveInstanceId FVar1;
  FScriptContainerElement *pFVar2;
  UInstancedStaticMeshComponent *this_00;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  undefined7 extraout_var;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  longlong lVar26;
  double dVar27;
  TTransform<double> *pTVar28;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  bool local_res8;
  undefined1 local_138 [24];
  FPrimitiveInstanceId local_120 [2];
  int local_118;
  double local_110;
  double local_108;
  undefined4 *local_100;
  undefined4 local_f8;
  TArrayView<float_const_,int> local_f0;
  TArrayView<FPrimitiveInstanceId_const_,int> local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  
  iVar19 = param_1->ISMIndex;
  dVar27 = (double)(longlong)param_2;
  if ((iVar19 < 0) || ((this->ISMs).ArrayNum <= iVar19)) {
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    return false;
  }
  if ((iVar19 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  pFVar2 = (this->ISMs).AllocatorInstance.Data;
  lVar26 = (longlong)iVar19 * 0xb8;
  uVar21 = param_1->InstanceGroupIndex;
  dVar24 = (double)(longlong)(int)uVar21;
  uVar20 = ~uVar21 >> 0x1f;
  uVar23 = 0;
  if ((int)uVar21 < *(int *)(pFVar2 + lVar26 + 0x90)) {
    uVar23 = uVar20;
  }
  if (uVar23 == 0) {
    uVar20 = 0x506106c8;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar23 = (uint)CONCAT71(extraout_var,bVar17);
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      uVar18 = (*pcVar3)();
      return (bool)uVar18;
    }
  }
  lVar30 = *(longlong *)(pFVar2 + lVar26 + 0x78);
  dVar9 = *(double *)(lVar30 + 0x220) -
          UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar10 = *(double *)(lVar30 + 0x228) -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar25 = *(double *)(pFVar2 + lVar26 + 0x88);
  dVar31 = *(double *)(lVar30 + 0x210) -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar33 = *(double *)(lVar30 + 0x218) -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  lVar29 = -(ulonglong)
            (0.0 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar10,0) & _UNK_15061cc88));
  auVar4._8_4_ = (int)lVar29;
  auVar4._0_8_ = -(ulonglong)
                  (0.0 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar9,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar4._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
  uVar21 = movmskpd(uVar20,auVar4);
  lVar29 = -(ulonglong)
            (0.0 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar33,0) & _UNK_15061cc88));
  auVar11._8_4_ = (int)lVar29;
  auVar11._0_8_ =
       -(ulonglong)
        (0.0 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar11._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
  iVar19 = movmskpd(uVar23,auVar11);
  local_d0 = 0;
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    local_c8 = 0;
    dVar32 = *(double *)(lVar30 + 0x200) -
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar34 = *(double *)(lVar30 + 0x208) -
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar14 = *(double *)(lVar30 + 0x200) +
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar15 = *(double *)(lVar30 + 0x208) +
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar9 = *(double *)(lVar30 + 0x1f0) -
            UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar10 = *(double *)(lVar30 + 0x1f8) -
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar31 = *(double *)(lVar30 + 0x1f0) +
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar33 = *(double *)(lVar30 + 0x1f8) +
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    lVar29 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar34,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar29;
    auVar5._0_8_ = -(ulonglong)
                    (0.0 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar32,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar5._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    iVar22 = movmskpd(0,auVar5);
    lVar29 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar10,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar29;
    auVar6._0_8_ = -(ulonglong)
                    (0.0 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar9,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar6._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    uVar21 = movmskpd(iVar19,auVar6);
    uVar23 = iVar22 << 2 | uVar21;
    if (uVar23 != 0) {
      lVar29 = -(ulonglong)
                (0.0 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                                        SUB84(dVar15,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar29;
      auVar7._0_8_ = -(ulonglong)
                      (0.0 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar14,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar7);
      lVar29 = -(ulonglong)
                (0.0 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                                        SUB84(dVar33,0) & _UNK_15061cc88));
      auVar13._8_4_ = (int)lVar29;
      auVar13._0_8_ =
           -(ulonglong)
            (0.0 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      ;
      auVar13._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      uVar21 = movmskpd(uVar21,auVar13);
      if ((uVar23 & 0x3fffffff) != 0 || uVar21 != 0) goto LAB_1463aaf05;
    }
    dVar9 = *(double *)(lVar30 + 0x240) -
            UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar10 = *(double *)(lVar30 + 0x248) -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar31 = *(double *)(lVar30 + 0x230) -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar33 = *(double *)(lVar30 + 0x238) -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_c0 = 0;
    lVar30 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar10,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar30;
    auVar8._0_8_ = -(ulonglong)
                    (0.0 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar9,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar8._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    uVar23 = movmskpd(0,auVar8);
    lVar30 = -(ulonglong)
              (0.0 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                                      SUB84(dVar33,0) & _UNK_15061cc88));
    auVar12._8_4_ = (int)lVar30;
    auVar12._0_8_ =
         -(ulonglong)
          (0.0 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar12._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    iVar19 = movmskpd(uVar21,auVar12);
    if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
      local_res8 = false;
      goto LAB_1463aaf0f;
    }
  }
LAB_1463aaf05:
  local_res8 = param_4;
LAB_1463aaf0f:
  local_110 = dVar25;
  local_108 = dVar24;
  if ((*(int *)((longlong)dVar25 + 4 + (longlong)dVar24 * 8) < param_3->ArrayNum + param_2) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6430729192270200497>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                          ,0x14f,
                          "StartInstanceIndex + NewInstancesTransforms.Num() <= InstanceGroup.Count"
                         ), bVar17)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  local_118 = *(int *)((longlong)dVar25 + 4 + (longlong)dVar24 * 8) - param_2;
  if (param_3->ArrayNum < local_118) {
    local_118 = param_3->ArrayNum;
  }
  local_118 = local_118 + param_2;
  if (param_2 < local_118) {
    lVar30 = (longlong)dVar27 * 0x60;
    local_138._8_8_ = dVar27;
    do {
      uVar20 = SUB84(dVar27,0);
      uVar23 = *(int *)((longlong)dVar25 + (longlong)dVar24 * 8) + uVar20;
      uVar21 = 0;
      if ((int)uVar23 < *(int *)(pFVar2 + lVar26 + 0xb0)) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      FVar1.Id = *(int *)(*(longlong *)(pFVar2 + lVar26 + 0xa8) + (longlong)(int)uVar23 * 4);
      uVar21 = 0;
      if ((int)uVar20 < param_3->ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      pTVar28 = (TTransform<double> *)((longlong)(param_3->DataPtr->Rotation).XY.m128d_f64 + lVar30)
      ;
      if (param_7) {
        local_98 = (pTVar28->Scale3D).XY.m128d_f64[0];
        dStack_90 = (pTVar28->Scale3D).XY.m128d_f64[1];
        local_88 = (pTVar28->Scale3D).ZW.m128d_f64[0];
        if ((((local_98 != 0.0) || (dStack_90 != 0.0)) || (local_88 != 0.0)) || (FVar1.Id == -1)) {
          local_80 = (pTVar28->Scale3D).XY.m128d_f64[0];
          dStack_78 = (pTVar28->Scale3D).XY.m128d_f64[1];
          local_70 = (pTVar28->Scale3D).ZW.m128d_f64[0];
          if (((local_80 == 0.0) && (dStack_78 == 0.0)) && (local_70 == 0.0)) goto LAB_1463ab2e7;
          if (FVar1.Id == -1) {
            UInstancedStaticMeshComponent::AddInstanceById
                      (*(UInstancedStaticMeshComponent **)(pFVar2 + lVar26 + 0x78),
                       (TTransform<double> *)local_138,SUB81(pTVar28,0));
            uVar16 = local_138._0_4_;
            uVar23 = *(int *)((longlong)local_110 + (longlong)dVar24 * 8) + uVar20;
            uVar21 = 0;
            if ((int)uVar23 < *(int *)(pFVar2 + lVar26 + 0xb0)) {
              uVar21 = ~uVar23 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              uVar18 = (*pcVar3)();
              return (bool)uVar18;
            }
            *(undefined4 *)(*(longlong *)(pFVar2 + lVar26 + 0xa8) + (longlong)(int)uVar23 * 4) =
                 uVar16;
            iVar19 = (param_1->CustomData).ArrayNum;
            dVar24 = local_108;
            if (iVar19 != 0) {
              this_00 = *(UInstancedStaticMeshComponent **)(pFVar2 + lVar26 + 0x78);
              local_f0.DataPtr = (float *)(param_1->CustomData).AllocatorInstance.Data;
              iVar22 = this_00->NumCustomDataFloats;
              if ((iVar19 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar17)) {
                pcVar3 = (code *)swi(3);
                uVar18 = (*pcVar3)();
                return (bool)uVar18;
              }
              local_f0.ArrayNum = iVar19;
              TArrayView<float_const_,int>::Slice(&local_f0,&local_b8,iVar22 * uVar20,iVar22);
              local_120[0].Id = local_138._0_4_;
              local_e0.DataPtr = local_120;
              local_e0.ArrayNum = 1;
              local_a8.DataPtr = local_b8.DataPtr;
              local_a8.ArrayNum = local_b8.ArrayNum;
              local_a8._12_4_ = local_b8._12_4_;
              UInstancedStaticMeshComponent::SetCustomDataById(this_00,&local_e0,&local_a8);
              dVar24 = local_108;
            }
            goto LAB_1463ab29a;
          }
          goto LAB_1463ab2ec;
        }
        local_100 = (undefined4 *)(local_138 + 0x10);
        local_f8 = 1;
        local_138._16_4_ = FVar1.Id;
        (**(code **)(**(longlong **)(pFVar2 + lVar26 + 0x78) + 0xbc0))
                  (*(longlong **)(pFVar2 + lVar26 + 0x78),&local_100,
                   CONCAT71((int7)((ulonglong)pTVar28 >> 8),1));
        uVar23 = *(int *)((longlong)local_110 + (longlong)dVar24 * 8) + uVar20;
        uVar21 = 0;
        if ((int)uVar23 < *(int *)(pFVar2 + lVar26 + 0xb0)) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          uVar18 = (*pcVar3)();
          return (bool)uVar18;
        }
        *(undefined4 *)(*(longlong *)(pFVar2 + lVar26 + 0xa8) + (longlong)(int)uVar23 * 4) =
             0xffffffff;
      }
      else {
LAB_1463ab2e7:
        if (FVar1.Id != -1) {
LAB_1463ab2ec:
          UInstancedStaticMeshComponent::UpdateInstanceTransformById
                    (*(UInstancedStaticMeshComponent **)(pFVar2 + lVar26 + 0x78),FVar1,pTVar28,
                     local_res8,param_6);
        }
      }
LAB_1463ab29a:
      dVar27 = (double)(ulonglong)(uVar20 + 1);
      local_138._8_8_ = local_138._8_8_ + 1;
      lVar30 = lVar30 + 0x60;
      dVar25 = local_110;
    } while ((int)(uVar20 + 1) < local_118);
  }
  return true;
}

// Clear @ 1463ae3a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGeometryCollectionISMPool::Clear(FGeometryCollectionISMPool *this)

{
  int *piVar1;
  int iVar2;
  FGeometryCollectionISM *pFVar3;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
           *)&this->MeshToISMIndex);
  TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
  ::Reset(&this->PrellocationQueue);
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  (this->FreeListISM).ArrayNum = 0;
  if ((this->FreeListISM).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeListISM).AllocatorInstance,0,&(this->FreeListISM).ArrayMax);
  }
  iVar2 = (this->ISMs).ArrayNum;
  if (0 < iVar2) {
    pFVar4 = (this->ISMs).AllocatorInstance.Data;
    if (*(longlong *)(*(longlong *)(pFVar4 + 0x78) + 0xa8) != 0) {
      pFVar6 = pFVar4 + (longlong)iVar2 * 0xb8;
      while( true ) {
        if ((this->ISMs).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FGeometryCollectionISM,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar4 == pFVar6) break;
        (**(code **)(**(longlong **)(pFVar4 + 0x78) + 0x4a0))(*(longlong **)(pFVar4 + 0x78),0);
        pFVar4 = pFVar4 + 0xb8;
      }
    }
    piVar5 = &(this->ISMs).ArrayNum;
    piVar1 = &(this->ISMs).ArrayMax;
    pFVar3 = (FGeometryCollectionISM *)(this->ISMs).AllocatorInstance.Data;
    iVar2 = (this->ISMs).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FGeometryCollectionISM,int>(pFVar3,iVar2);
      *piVar5 = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
    }
    else {
      DestructItems<FGeometryCollectionISM,int>(pFVar3,iVar2);
      *piVar5 = 0;
    }
  }
  return;
}

// GetOrAddISM @ 1463b6de0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FGeometryCollectionISMPool::GetOrAddISM
          (FGeometryCollectionISMPool *this,UGeometryCollectionISMPoolComponent *param_1,
          FGeometryCollectionStaticMeshInstance *param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  uint local_res8 [2];
  TPairInitializer<FGeometryCollectionStaticMeshInstance_const_&,int_const_&> local_58;
  uint *local_48;
  
  uVar3 = ::GetTypeHash(param_2);
  iVar4 = TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGeometryCollectionStaticMeshInstance>
                    ((TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
                      *)&this->MeshToISMIndex,uVar3,param_2);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x88 + *(longlong *)&this->MeshToISMIndex;
    piVar6 = (int *)(lVar5 + 0x78);
    if (lVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    if (piVar6 != (int *)0x0) {
      *param_3 = false;
      return *piVar6;
    }
  }
  iVar4 = (this->FreeListISM).ArrayNum;
  uVar3 = 0;
  if (iVar4 == 0) {
    iVar4 = (this->FreeList).ArrayNum;
    if (iVar4 == 0) {
      local_res8[0] = (this->ISMs).ArrayNum;
      piVar6 = &(this->ISMs).ArrayMax;
      if (local_res8[0] == *piVar6) {
        local_res8[0] =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b8,(ForAnyElementType *)this,piVar6);
      }
      lVar5 = (longlong)(int)local_res8[0];
      (this->ISMs).ArrayNum = local_res8[0] + 1;
      DefaultConstructItems<FGeometryCollectionISM,int>
                ((this->ISMs).AllocatorInstance.Data + lVar5 * 0xb8,1);
      uVar3 = 0;
      if ((int)local_res8[0] < (this->ISMs).ArrayNum) {
        uVar3 = ~local_res8[0] >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      FGeometryCollectionISM::CreateISM
                ((FGeometryCollectionISM *)((this->ISMs).AllocatorInstance.Data + lVar5 * 0xb8),
                 (USceneComponent *)param_1);
    }
    else {
      uVar7 = uVar3;
      if ((int)(iVar4 - 1U) < iVar4) {
        uVar7 = ~(iVar4 - 1U) >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      local_res8[0] =
           *(uint *)((this->FreeList).AllocatorInstance.Data +
                    (longlong)(this->FreeList).ArrayNum * 4 + -4);
      TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this->FreeList,(this->FreeList).ArrayNum + -1,Default);
      lVar5 = (longlong)(int)local_res8[0];
      if ((int)local_res8[0] < (this->ISMs).ArrayNum) {
        uVar3 = ~local_res8[0] >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      FGeometryCollectionISM::CreateISM
                ((FGeometryCollectionISM *)((this->ISMs).AllocatorInstance.Data + lVar5 * 0xb8),
                 (USceneComponent *)param_1);
    }
  }
  else {
    if ((int)(iVar4 - 1U) < iVar4) {
      uVar3 = ~(iVar4 - 1U) >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    local_res8[0] =
         *(uint *)((this->FreeListISM).AllocatorInstance.Data +
                  (longlong)(this->FreeListISM).ArrayNum * 4 + -4);
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->FreeListISM,(this->FreeListISM).ArrayNum + -1,Default);
  }
  lVar5 = (longlong)(int)local_res8[0];
  uVar3 = 0;
  if ((int)local_res8[0] < (this->ISMs).ArrayNum) {
    uVar3 = ~local_res8[0] >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  FGeometryCollectionISM::InitISM
            ((FGeometryCollectionISM *)((this->ISMs).AllocatorInstance.Data + lVar5 * 0xb8),param_2,
             this->bCachedKeepAlive,this->bDisableBoundsAndTransformUpdate);
  local_48 = local_res8;
  *param_3 = true;
  local_58.Value = (int *)param_2;
  TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGeometryCollectionStaticMeshInstance_const_&,int_const_&>_>
            ((TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
              *)&this->MeshToISMIndex,&local_58,(bool *)&local_58.Value);
  return local_res8[0];
}

// ProcessPreallocationRequests @ 1463c0ec0

void __thiscall
FGeometryCollectionISMPool::ProcessPreallocationRequests
          (FGeometryCollectionISMPool *this,UGeometryCollectionISMPoolComponent *param_1,int param_2
          )

{
  FWeakObjectPtr FVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  FWeakObjectPtr FVar8;
  FWeakObjectPtr *this_00;
  uint *puVar9;
  int iVar10;
  bool local_res20 [8];
  undefined1 local_c8 [8];
  TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
  *local_c0;
  TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
  *local_90;
  FWeakObjectPtr local_88;
  TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
  *local_80;
  int iStack_78;
  uint uStack_74;
  undefined1 *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  
  iVar10 = 0;
  local_b8 = &this->PrellocationQueue;
  iVar3 = *(int *)&(this->PrellocationQueue).Elements.field_0x28;
  TStack_b0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->PrellocationQueue).Elements.field_0x10;
  iStack_78 = 0;
  uStack_74 = 1;
  local_60 = 0;
  iStack_64 = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)&(this->PrellocationQueue).Elements.field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_b0.Array;
    }
    uVar4 = *puVar9;
    local_60 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)iStack_78;
      local_60 = local_60 + 0x20;
      iStack_78 = iStack_78 + 1;
      iStack_64 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_1463c0f6a;
      uVar4 = puVar9[lVar7 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_74 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_64 = (int)lVar7 + -1 + local_60;
    if (iVar3 < iStack_64) {
      iStack_64 = iVar3;
    }
  }
LAB_1463c0f6a:
  uStack_68 = 0xffffffff;
  iStack_5c = TStack_b0.CurrentBitIndex;
  TStack_b0._padding_ = CONCAT44(uStack_74,iStack_78);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = TStack_b0.CurrentBitIndex;
  TStack_b0.BaseBitIndex = local_60;
  local_90 = local_b8;
  local_80 = local_b8;
  local_70 = (undefined1 *)TStack_b0.Array;
  TStack_b0.CurrentBitIndex = iStack_64;
  if (iStack_64 < iVar3) {
    do {
      iVar3 = TStack_b0.CurrentBitIndex;
      lVar7 = (longlong)TStack_b0.CurrentBitIndex;
      local_res20[0] = false;
      this_00 = (FWeakObjectPtr *)(*(longlong *)&local_b8->Elements + lVar7 * 0x80);
      local_c0 = local_90;
      bVar6 = FWeakObjectPtr::IsValid(this_00);
      if (bVar6) {
        FVar8 = this_00[1];
        iVar5 = this_00[2].ObjectIndex;
        FVar1 = (FWeakObjectPtr)((longlong)FVar8 + (longlong)iVar5 * 8);
        while( true ) {
          if (this_00[2].ObjectIndex != iVar5) {
            `TCheckedPointerIterator<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_c8);
          }
          if (FVar8 == FVar1) break;
          local_88 = *(FWeakObjectPtr *)FVar8;
          bVar6 = FWeakObjectPtr::IsValid(&local_88);
          if (!bVar6) goto LAB_1463c1048;
          FVar8 = (FWeakObjectPtr)((longlong)FVar8 + 8);
        }
        GetOrAddISM(this,param_1,
                    (FGeometryCollectionStaticMeshInstance *)
                    (*(longlong *)&local_b8->Elements + lVar7 * 0x80),local_res20);
      }
LAB_1463c1048:
      TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
      ::RemoveByIndex(local_c0,iVar3);
      if ((local_res20[0] != false) && (iVar10 = iVar10 + 1, param_2 <= iVar10)) {
        return;
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  return;
}

// RemoveISM @ 1463c2e00

void __thiscall
FGeometryCollectionISMPool::RemoveISM
          (FGeometryCollectionISMPool *this,int param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10 [2];
  
  uVar4 = 0;
  if (param_1 < (this->ISMs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->ISMs).AllocatorInstance.Data;
  if ((*(int *)(pFVar1 + (longlong)param_1 * 0xb8 + 0x90) !=
       *(int *)(pFVar1 + (longlong)param_1 * 0xb8 + 0xa0)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6430729192270200383>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                         ,0x1c1,"ISM.InstanceGroups.IsEmpty()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(pFVar1 + (longlong)param_1 * 0xb8 + 0xb0) != 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6430729192270200382>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                         ,0x1c2,"ISM.InstanceIds.IsEmpty()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2) {
    return;
  }
  if (param_3) {
    pTVar6 = &this->FreeListISM;
    pFVar1 = (pTVar6->AllocatorInstance).Data;
    if (((FScriptContainerElement *)local_res10 < pFVar1) ||
       (pFVar1 + (longlong)(this->FreeListISM).ArrayMax * 4 <=
        (FScriptContainerElement *)local_res10)) goto LAB_1463c2fc9;
  }
  else {
    (**(code **)(**(longlong **)(pFVar1 + (longlong)param_1 * 0xb8 + 0x78) + 0x4a0))
              (*(longlong **)(pFVar1 + (longlong)param_1 * 0xb8 + 0x78),0);
    *(undefined8 *)(pFVar1 + (longlong)param_1 * 0xb8 + 0x78) = 0;
    pTVar6 = &this->FreeList;
    pFVar1 = (pTVar6->AllocatorInstance).Data;
    if (((FScriptContainerElement *)local_res10 < pFVar1) ||
       (pFVar1 + (longlong)(this->FreeList).ArrayMax * 4 <= (FScriptContainerElement *)local_res10))
    goto LAB_1463c2fc9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x7a5,
                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1463c2fc9:
  iVar5 = pTVar6->ArrayNum;
  if (iVar5 == pTVar6->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar5 + 1;
  *(int *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// RemoveInstancesFromISM @ 1463c3010

void __thiscall
FGeometryCollectionISMPool::RemoveInstancesFromISM
          (FGeometryCollectionISMPool *this,FGeometryCollectionMeshInfo *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FWeakObjectPtr FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FGeometryCollectionStaticMeshInstance *pFVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int local_res8 [2];
  uint local_48 [2];
  int *local_40;
  undefined4 local_38;
  
  iVar10 = param_1->ISMIndex;
  if ((-1 < iVar10) && (iVar10 < (this->ISMs).ArrayNum)) {
    if ((iVar10 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = param_1->InstanceGroupIndex;
    iVar11 = 0;
    uVar13 = 0;
    pFVar8 = (FGeometryCollectionStaticMeshInstance *)
             ((this->ISMs).AllocatorInstance.Data + (longlong)iVar10 * 0xb8);
    uVar9 = uVar13;
    if ((int)uVar7 < *(int *)&pFVar8[1].CustomPrimitiveData.AllocatorInstance.Data) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar2 = (int *)(*(longlong *)&pFVar8[1].MaterialsOverrides.ArrayNum + (longlong)(int)uVar7 * 8)
    ;
    iVar10 = iVar11;
    if (0 < piVar2[1]) {
      do {
        uVar9 = *piVar2 + iVar10;
        uVar7 = uVar13;
        if ((int)uVar9 < *(int *)((longlong)&pFVar8[1].Desc.Position.field0_0x0 + 8)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = *(int *)((longlong)pFVar8[1].Desc.Position.field0_0x0._s_0.X +
                        (longlong)(int)uVar9 * 4);
        if (iVar3 != -1) {
          FVar4 = pFVar8[1].StaticMesh.WeakPtr;
          local_40 = local_res8;
          local_38 = 1;
          local_res8[0] = iVar3;
          (**(code **)(*(longlong *)FVar4 + 0xbc0))(FVar4,&local_40,1);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < piVar2[1]);
      if (0 < piVar2[1]) {
        do {
          uVar9 = *piVar2 + iVar11;
          uVar7 = uVar13;
          if ((int)uVar9 < *(int *)((longlong)&pFVar8[1].Desc.Position.field0_0x0 + 8)) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = iVar11 + 1;
          *(undefined4 *)
           ((longlong)pFVar8[1].Desc.Position.field0_0x0._s_0.X + (longlong)(int)uVar9 * 4) =
               0xffffffff;
        } while (iVar11 < piVar2[1]);
      }
    }
    local_48[0] = param_1->InstanceGroupIndex;
    lVar12 = (longlong)(int)local_48[0];
    uVar7 = 0;
    if ((int)local_48[0] < *(int *)&pFVar8[1].CustomPrimitiveData.AllocatorInstance.Data) {
      uVar7 = ~local_48[0] >> 0x1f;
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
    piVar2 = &pFVar8[1].CustomPrimitiveData.ArrayNum;
    piVar1 = (int *)((longlong)&pFVar8[1].MaterialsOverrides.AllocatorInstance.Data + 4);
    *piVar1 = *piVar1 + *(int *)(*(longlong *)&pFVar8[1].MaterialsOverrides.ArrayNum + 4 +
                                lVar12 * 8);
    if (((*(uint **)piVar2 <= local_48) &&
        (local_48 < *(uint **)piVar2 + pFVar8[1].Desc.NumCustomDataFloats)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = pFVar8[1].Desc.Flags;
    piVar1 = &pFVar8[1].Desc.NumCustomDataFloats;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)piVar2,piVar1);
    }
    pFVar8[1].Desc.Flags = uVar7 + 1;
    *(uint *)(*(longlong *)piVar2 + (longlong)(int)uVar7 * 4) = local_48[0];
    if (*(uint *)&pFVar8[1].CustomPrimitiveData.AllocatorInstance.Data == pFVar8[1].Desc.Flags) {
      if ((*(int *)((longlong)pFVar8[1].StaticMesh.WeakPtr + 0x660) != 0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6430729192270200402>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                             ,0x1ae,"ISM.ISMComponent->PerInstanceSMData.Num() == 0"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8[1].MaterialsOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar2 = (int *)((longlong)&pFVar8[1].CustomPrimitiveData.AllocatorInstance.Data + 4);
      *(undefined4 *)&pFVar8[1].CustomPrimitiveData.AllocatorInstance.Data = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)&pFVar8[1].MaterialsOverrides.ArrayNum,0,piVar2);
      }
      piVar2 = &pFVar8[1].Desc.NumCustomDataFloats;
      pFVar8[1].Desc.Flags = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)&pFVar8[1].CustomPrimitiveData.ArrayNum,0,piVar2);
      }
      iVar10 = *(int *)((longlong)&pFVar8[1].Desc.Position.field0_0x0 + 0xc);
      *(undefined4 *)((longlong)&pFVar8[1].Desc.Position.field0_0x0 + 8) = 0;
      if (iVar10 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)&pFVar8[1].Desc.Position,0,
                   (int *)((longlong)&pFVar8[1].Desc.Position.field0_0x0 + 0xc));
      }
      RemoveISM(this,param_1->ISMIndex,this->bCachedKeepAlive,this->bCachedRecycle);
      if ((this->bCachedKeepAlive == false) &&
         (*(int *)&(this->MeshToISMIndex).field_0x8 != *(int *)&(this->MeshToISMIndex).field_0x34))
      {
        uVar7 = ::GetTypeHash(pFVar8);
        TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGeometryCollectionStaticMeshInstance>
                  ((TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
                    *)&this->MeshToISMIndex,uVar7,pFVar8);
      }
    }
  }
  return;
}

// RequestPreallocateMeshInstance @ 1463c3710

void __thiscall
FGeometryCollectionISMPool::RequestPreallocateMeshInstance
          (FGeometryCollectionISMPool *this,FGeometryCollectionStaticMeshInstance *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if (this->bCachedKeepAlive != false) {
    uVar1 = ::GetTypeHash(param_1);
    iVar2 = TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGeometryCollectionStaticMeshInstance>
                      ((TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
                        *)&this->MeshToISMIndex,uVar1,param_1);
    if (iVar2 != -1) {
      lVar3 = (longlong)iVar2 * 0x88 + *(longlong *)&this->MeshToISMIndex;
      lVar4 = lVar3 + 0x78;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        return;
      }
    }
    TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
    ::EmplaceByHash<FGeometryCollectionStaticMeshInstance_const_&>
              (&this->PrellocationQueue,(uint)local_res8,
               (FGeometryCollectionStaticMeshInstance *)(ulonglong)uVar1,(bool *)param_1);
  }
  return;
}

// Tick @ 1463ca930

void __thiscall
FGeometryCollectionISMPool::Tick
          (FGeometryCollectionISMPool *this,UGeometryCollectionISMPoolComponent *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FGeometryCollectionStaticMeshInstance *pFVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar9;
  
  if ((this->bCachedKeepAlive == false) || (GComponentKeepAlive)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((this->bCachedRecycle == false) || (GComponentRecycle)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bCachedKeepAlive = GComponentKeepAlive;
  uVar10 = 0;
  this->bCachedRecycle = GComponentRecycle;
  if ((bVar4) && (iVar6 = (this->ISMs).ArrayNum, uVar9 = uVar10, uVar11 = uVar10, 0 < iVar6)) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (FGeometryCollectionStaticMeshInstance *)
               ((this->ISMs).AllocatorInstance.Data + uVar11);
      if (((pFVar7[1].StaticMesh.WeakPtr != (FWeakObjectPtr)0x0) &&
          (*(uint *)&pFVar7[1].CustomPrimitiveData.AllocatorInstance.Data == pFVar7[1].Desc.Flags))
         && (RemoveISM(this,uVar8,false,this->bCachedRecycle),
            *(int *)&(this->MeshToISMIndex).field_0x8 != *(int *)&(this->MeshToISMIndex).field_0x34)
         ) {
        uVar5 = ::GetTypeHash(pFVar7);
        TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGeometryCollectionStaticMeshInstance>
                  ((TSet<TTuple<FGeometryCollectionStaticMeshInstance,int>,TDefaultMapHashableKeyFuncs<FGeometryCollectionStaticMeshInstance,int,0>,FDefaultSetAllocator>
                    *)&this->MeshToISMIndex,uVar5,pFVar7);
      }
      iVar6 = (this->ISMs).ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0xb8;
    } while ((int)(uVar8 + 1) < iVar6);
  }
  if (this->bCachedKeepAlive == false) {
    TSet<FGeometryCollectionStaticMeshInstance,DefaultKeyFuncs<FGeometryCollectionStaticMeshInstance,0>,FDefaultSetAllocator>
    ::Reset(&this->PrellocationQueue);
  }
  else if (*(int *)&(this->PrellocationQueue).Elements.field_0x8 !=
           *(int *)&(this->PrellocationQueue).Elements.field_0x34) {
    ProcessPreallocationRequests(this,param_1,2);
  }
  iVar6 = (this->FreeListISM).ArrayNum;
  if (0 < iVar6) {
    if (!bVar3) {
      uVar5 = GComponentFreeListTargetSize;
      if (GComponentFreeListTargetSize < (int)(iVar6 - 1U)) {
        uVar5 = iVar6 - 1U;
      }
      if (0 < (int)uVar5) {
        uVar10 = (ulonglong)uVar5;
      }
      if (iVar6 <= (int)uVar10) {
        return;
      }
    }
    do {
      if (((this->FreeListISM).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (this->FreeListISM).ArrayNum;
      iVar1 = *(int *)((this->FreeListISM).AllocatorInstance.Data + (longlong)iVar6 * 4 + -4);
      (this->FreeListISM).ArrayNum = iVar6 + -1;
      RemoveISM(this,iVar1,false,false);
    } while ((int)uVar10 < (this->FreeListISM).ArrayNum);
  }
  return;
}

// UpdateAbsoluteTransforms @ 1463cd3b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGeometryCollectionISMPool::UpdateAbsoluteTransforms
          (FGeometryCollectionISMPool *this,TTransform<double> *param_1,
          EUpdateTransformFlags param_2,ETeleportType param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  UInstancedStaticMeshComponent *this_00;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  bool bVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ISMs).ArrayNum;
  pFVar16 = (this->ISMs).AllocatorInstance.Data;
  uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar19 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar21 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar23 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uVar24 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar17 = pFVar16 + (longlong)iVar2 * 0xb8;
  while( true ) {
    if ((this->ISMs).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGeometryCollectionISM,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    }
    if (pFVar16 == pFVar17) break;
    uVar3 = *(uint *)(pFVar16 + 0x28);
    if ((((double)CONCAT44(uVar23,uVar22) != *(double *)(pFVar16 + 0x30)) ||
        ((double)CONCAT44(uVar21,uVar20) != *(double *)(pFVar16 + 0x38))) ||
       ((double)CONCAT44(uVar19,uVar18) != *(double *)(pFVar16 + 0x40))) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("GcIsm.MeshInstance.Desc.Position == FVector::ZeroVector",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionISMPoolComponent.cpp"
                          ,0x22c,L"");
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
    this_00 = *(UInstancedStaticMeshComponent **)(pFVar16 + 0x78);
    if (this_00 != (UInstancedStaticMeshComponent *)0x0) {
      if ((uVar3 & 8) == 0) {
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | 1;
        dVar1 = (param_1->Rotation).XY.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Rotation).XY.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Rotation).ZW.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Translation).XY.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Translation).XY.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Translation).ZW.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Translation).ZW.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Scale3D).XY.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
        dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
        this_00->_padding_ = (longlong)(param_1->Scale3D).ZW.m128d_f64[0];
        this_00->_padding_ = (longlong)dVar1;
      }
      else {
        uVar3 = *(uint *)(param_1->Scale3D).XY.m128d_f64;
        uVar5 = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
        dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
        dVar6 = (param_1->Rotation).XY.m128d_f64[0];
        dVar7 = (param_1->Rotation).XY.m128d_f64[1];
        dVar8 = (param_1->Rotation).ZW.m128d_f64[0];
        dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
        dVar10 = (param_1->Translation).XY.m128d_f64[0];
        dVar11 = (param_1->Translation).XY.m128d_f64[1];
        dVar12 = (param_1->Translation).ZW.m128d_f64[0];
        dVar13 = (param_1->Translation).ZW.m128d_f64[1];
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | 1;
        this_00->_padding_ = (longlong)dVar6;
        this_00->_padding_ = (longlong)dVar7;
        this_00->_padding_ = (longlong)dVar8;
        this_00->_padding_ = (longlong)dVar9;
        this_00->_padding_ = (longlong)dVar10;
        this_00->_padding_ = (longlong)dVar11;
        this_00->_padding_ = (longlong)dVar12;
        this_00->_padding_ = (longlong)dVar13;
        *(uint *)&this_00->_padding_ = uVar3 ^ uVar24;
        *(uint *)((longlong)&this_00->_padding_ + 4) = uVar5 ^ (uint)uVar14;
        *(undefined4 *)&this_00->_padding_ = uVar18;
        *(undefined4 *)((longlong)&this_00->_padding_ + 4) = uVar19;
        this_00->_padding_ = (longlong)dVar1;
        this_00->_padding_ = 0;
      }
      UInstancedStaticMeshComponent::UpdateComponentTransform
                (this_00,param_2 | SkipPhysicsUpdate,param_3);
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this_00);
      uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar19 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar23 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    }
    pFVar16 = pFVar16 + 0xb8;
  }
  return;
}

