// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// ~FAnimSync @ 1474366c0

void __thiscall UE::Anim::FAnimSync::~FAnimSync(FAnimSync *this)

{
  void *pvVar1;
  longlong lVar2;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *this_00;
  longlong lVar3;
  
  *(undefined4 *)&this->SyncGroupMaps[1].field_0x48 = 0;
  pvVar1 = *(void **)&this->SyncGroupMaps[1].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->SyncGroupMaps + 1));
  *(undefined4 *)&this->SyncGroupMaps[0].field_0x48 = 0;
  pvVar1 = *(void **)&this->SyncGroupMaps[0].field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this_00 = this->SyncGroupMaps;
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  lVar3 = 2;
  do {
    lVar2 = (longlong)(this_00 + -1);
    this_00 = (TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
               *)((longlong)(this_00 + -1) + 0x40);
    lVar3 = lVar3 + -1;
    DestructItems<FAnimTickRecord,int>(*(FAnimTickRecord **)this_00,*(int *)(lVar2 + 0x48));
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
  } while (lVar3 != 0);
  return;
}

// operator= @ 147439e10

FAnimSync * __thiscall UE::Anim::FAnimSync::operator=(FAnimSync *this,FAnimSync *param_1)

{
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *pTVar3;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *this_00;
  undefined1 *puVar4;
  undefined1 *puVar5;
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  
  if (this != param_1) {
    DestructItems<FAnimTickRecord,int>
              ((FAnimTickRecord *)this->UngroupedActivePlayerArrays[0].AllocatorInstance.Data,
               this->UngroupedActivePlayerArrays[0].ArrayNum);
    pFVar7 = this->UngroupedActivePlayerArrays[0].AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    this->UngroupedActivePlayerArrays[0].AllocatorInstance.Data =
         param_1->UngroupedActivePlayerArrays[0].AllocatorInstance.Data;
    param_1->UngroupedActivePlayerArrays[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->UngroupedActivePlayerArrays[0].ArrayNum = param_1->UngroupedActivePlayerArrays[0].ArrayNum
    ;
    this->UngroupedActivePlayerArrays[0].ArrayMax = param_1->UngroupedActivePlayerArrays[0].ArrayMax
    ;
    param_1->UngroupedActivePlayerArrays[0].ArrayNum = 0;
    param_1->UngroupedActivePlayerArrays[0].ArrayMax = 0;
  }
  pTVar1 = param_1->UngroupedActivePlayerArrays + 1;
  pTVar2 = this->UngroupedActivePlayerArrays + 1;
  if (pTVar2 != pTVar1) {
    DestructItems<FAnimTickRecord,int>
              ((FAnimTickRecord *)(pTVar2->AllocatorInstance).Data,
               this->UngroupedActivePlayerArrays[1].ArrayNum);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->UngroupedActivePlayerArrays[1].ArrayNum = param_1->UngroupedActivePlayerArrays[1].ArrayNum
    ;
    this->UngroupedActivePlayerArrays[1].ArrayMax = param_1->UngroupedActivePlayerArrays[1].ArrayMax
    ;
    param_1->UngroupedActivePlayerArrays[1].ArrayNum = 0;
    param_1->UngroupedActivePlayerArrays[1].ArrayMax = 0;
  }
  pTVar3 = param_1->SyncGroupMaps;
  this_00 = this->SyncGroupMaps;
  if (this_00 != pTVar3) {
    TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&this->SyncGroupMaps[0].field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar4 = &param_1->SyncGroupMaps[0].field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar3;
    puVar5 = &this->SyncGroupMaps[0].field_0x10;
    *(undefined8 *)pTVar3 = 0;
    *(undefined4 *)&this->SyncGroupMaps[0].field_0x8 =
         *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x8;
    *(undefined4 *)&this->SyncGroupMaps[0].field_0xc =
         *(undefined4 *)&param_1->SyncGroupMaps[0].field_0xc;
    *(undefined8 *)&param_1->SyncGroupMaps[0].field_0x8 = 0;
    if (puVar5 != puVar4) {
      if (*(longlong *)&param_1->SyncGroupMaps[0].field_0x20 == 0) {
        memmove(puVar5,puVar4,0x10);
      }
      pvVar8 = *(void **)&this->SyncGroupMaps[0].field_0x20;
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
      *(undefined8 *)&this->SyncGroupMaps[0].field_0x20 =
           *(undefined8 *)&param_1->SyncGroupMaps[0].field_0x20;
      *(undefined8 *)&param_1->SyncGroupMaps[0].field_0x20 = 0;
      *(undefined4 *)&this->SyncGroupMaps[0].field_0x28 =
           *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x28;
      *(undefined4 *)&this->SyncGroupMaps[0].field_0x2c =
           *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x2c;
      *(undefined8 *)&param_1->SyncGroupMaps[0].field_0x28 = 0;
    }
    *(undefined4 *)&this->SyncGroupMaps[0].field_0x30 =
         *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x30;
    *(undefined4 *)&this->SyncGroupMaps[0].field_0x34 =
         *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x34;
    *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x34 = 0;
    if (*(longlong *)&param_1->SyncGroupMaps[0].field_0x40 == 0) {
      *(undefined4 *)&this->SyncGroupMaps[0].field_0x38 =
           *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x38;
    }
    pvVar8 = *(void **)&this->SyncGroupMaps[0].field_0x40;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    *(undefined8 *)&this->SyncGroupMaps[0].field_0x40 =
         *(undefined8 *)&param_1->SyncGroupMaps[0].field_0x40;
    *(undefined8 *)&param_1->SyncGroupMaps[0].field_0x40 = 0;
    *(undefined4 *)&this->SyncGroupMaps[0].field_0x48 =
         *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x48;
    *(undefined4 *)&param_1->SyncGroupMaps[0].field_0x48 = 0;
  }
  pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)(param_1->SyncGroupMaps + 1);
  this_01 = (TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this->SyncGroupMaps + 1);
  if (this_01 != pTVar6) {
    TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(this_01,0,*(int *)&this->SyncGroupMaps[1].field_0x8);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar4 = &param_1->SyncGroupMaps[1].field_0x10;
    *(undefined8 *)this_01 = *(undefined8 *)pTVar6;
    puVar5 = &this->SyncGroupMaps[1].field_0x10;
    *(undefined8 *)pTVar6 = 0;
    *(undefined4 *)&this->SyncGroupMaps[1].field_0x8 =
         *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x8;
    *(undefined4 *)&this->SyncGroupMaps[1].field_0xc =
         *(undefined4 *)&param_1->SyncGroupMaps[1].field_0xc;
    *(undefined8 *)&param_1->SyncGroupMaps[1].field_0x8 = 0;
    if (puVar5 != puVar4) {
      if (*(longlong *)&param_1->SyncGroupMaps[1].field_0x20 == 0) {
        memmove(puVar5,puVar4,0x10);
      }
      pvVar8 = *(void **)&this->SyncGroupMaps[1].field_0x20;
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
      *(undefined8 *)&this->SyncGroupMaps[1].field_0x20 =
           *(undefined8 *)&param_1->SyncGroupMaps[1].field_0x20;
      *(undefined8 *)&param_1->SyncGroupMaps[1].field_0x20 = 0;
      *(undefined4 *)&this->SyncGroupMaps[1].field_0x28 =
           *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x28;
      *(undefined4 *)&this->SyncGroupMaps[1].field_0x2c =
           *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x2c;
      *(undefined8 *)&param_1->SyncGroupMaps[1].field_0x28 = 0;
    }
    *(undefined4 *)&this->SyncGroupMaps[1].field_0x30 =
         *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x30;
    *(undefined4 *)&this->SyncGroupMaps[1].field_0x34 =
         *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x34;
    *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x34 = 0;
    if (*(longlong *)&param_1->SyncGroupMaps[1].field_0x40 == 0) {
      *(undefined4 *)&this->SyncGroupMaps[1].field_0x38 =
           *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x38;
    }
    pvVar8 = *(void **)&this->SyncGroupMaps[1].field_0x40;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    *(undefined8 *)&this->SyncGroupMaps[1].field_0x40 =
         *(undefined8 *)&param_1->SyncGroupMaps[1].field_0x40;
    *(undefined8 *)&param_1->SyncGroupMaps[1].field_0x40 = 0;
    *(undefined4 *)&this->SyncGroupMaps[1].field_0x48 =
         *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x48;
    *(undefined4 *)&param_1->SyncGroupMaps[1].field_0x48 = 0;
  }
  this->MirrorDataTable = param_1->MirrorDataTable;
  this->SyncGroupWriteIndex = param_1->SyncGroupWriteIndex;
  return this;
}

// operator() @ 14753d310

/* WARNING: Type propagation algorithm not settling */

void __thiscall
`UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l2::<lambda_1>::operator()
          (void *this,FAnimTickRecord *param_1,FAnimAssetTickContext *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  TQuat<double> *pTVar9;
  TVector<double>_u_0 local_108;
  TQuat<double> local_e8;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  
  if (param_1->MirrorDataTable != (UMirrorDataTable *)0x0) {
    local_108._s_0.X =
         (param_2->RootMotionMovementParams).RootMotionTransform.Translation.XY.m128d_f64[0];
    local_108._s_0.Y =
         (param_2->RootMotionMovementParams).RootMotionTransform.Translation.XY.m128d_f64[1];
    local_108._s_0.Z =
         (param_2->RootMotionMovementParams).RootMotionTransform.Translation.ZW.m128d_f64[0];
    dVar2 = (param_2->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64[0];
    dVar3 = (param_2->RootMotionMovementParams).RootMotionTransform.Rotation.ZW.m128d_f64[1];
    dVar4 = (param_2->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64[0];
    dVar5 = (param_2->RootMotionMovementParams).RootMotionTransform.Rotation.XY.m128d_f64[1];
    dVar6 = (param_2->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64[0];
    dVar7 = (param_2->RootMotionMovementParams).RootMotionTransform.Scale3D.XY.m128d_f64[1];
    dVar1 = (param_2->RootMotionMovementParams).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
    pTVar8 = FAnimationRuntime::MirrorVector
                       ((TVector<double> *)&local_c8,(TVector<double> *)&local_108._s_0,
                        (uint)(param_1->MirrorDataTable->MirrorAxis).Value);
    local_108._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    local_108._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
    local_108._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    local_e8.X = dVar4;
    local_e8.Y = dVar5;
    local_e8.Z = dVar2;
    local_e8.W = dVar3;
    pTVar9 = FAnimationRuntime::MirrorQuat
                       (&local_c8,&local_e8,(uint)(param_1->MirrorDataTable->MirrorAxis).Value);
    local_e8.X = pTVar9->X;
    local_e8.Y = pTVar9->Y;
    local_e8.Z = pTVar9->Z;
    local_e8.W = pTVar9->W;
    local_a8.Translation.XY.m128d_f64[0] = local_108._s_0.X;
    local_a8.Translation.XY.m128d_f64[1] = local_108._s_0.Y;
    local_a8.Translation.ZW.m128d_f64[0] = local_108._s_0.Z;
    local_a8.Translation.ZW.m128d_f64[1] = 0.0;
    local_a8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_a8.Rotation.XY.m128d_f64[0] = local_e8.X;
    local_a8.Rotation.XY.m128d_f64[1] = local_e8.Y;
    local_a8.Rotation.ZW.m128d_f64[0] = local_e8.Z;
    local_a8.Rotation.ZW.m128d_f64[1] = local_e8.W;
    local_a8.Scale3D.XY.m128d_f64[0] = dVar6;
    local_a8.Scale3D.XY.m128d_f64[1] = dVar7;
    local_a8.Scale3D.ZW.m128d_f64[0] = dVar1;
    FRootMotionMovementParams::AccumulateWithBlend
              ((FRootMotionMovementParams *)(*(longlong *)this + 0x5f0),&local_a8,
               param_1->RootMotionWeightModifier * param_1->EffectiveBlendWeight);
    return;
  }
  if ((param_2->RootMotionMovementParams).bHasRootMotion != false) {
    FRootMotionMovementParams::AccumulateWithBlend
              ((FRootMotionMovementParams *)(*(longlong *)this + 0x5f0),
               &(param_2->RootMotionMovementParams).RootMotionTransform,
               param_1->RootMotionWeightModifier * param_1->EffectiveBlendWeight);
  }
  return;
}

// AddReferencedObjects @ 147542e00

void __thiscall
UE::Anim::FAnimSync::AddReferencedObjects
          (FAnimSync *this,UAnimInstance *param_1,FReferenceCollector *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  uint *puVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res20 [8];
  undefined1 local_d8;
  undefined1 local_d7 [3];
  uint local_d4;
  int *local_d0;
  undefined8 *local_c8;
  int local_c0;
  int local_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  longlong *local_b0;
  int iStack_a8;
  uint uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  
  local_d4 = 0;
  local_d0 = &this->UngroupedActivePlayerArrays[0].ArrayNum;
  puVar16 = (undefined8 *)&this->SyncGroupMaps[0].field_0x20;
  do {
    iVar7 = *local_d0;
    pFVar8 = (((TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)(local_d0 + -2))->
             AllocatorInstance).Data;
    pFVar10 = pFVar8 + (longlong)iVar7 * 0x78;
    local_c8 = puVar16;
    while( true ) {
      if (*local_d0 != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FAnimTickRecord,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar8 == pFVar10) break;
      (**(code **)(param_2->_padding_ + 0x88))(param_2,pFVar8);
      pFVar8 = pFVar8 + 0x78;
    }
    uVar9 = *(uint *)(puVar16 + 1);
    iStack_a8 = 0;
    local_90 = 0;
    uStack_a4 = 1;
    uStack_94 = 0;
    if (uVar9 != 0) {
      puVar13 = (uint *)*puVar16;
      if ((uint *)*puVar16 == (uint *)0x0) {
        puVar13 = (uint *)(puVar16 + -2);
      }
      uVar14 = *puVar13;
      while (uVar14 == 0) {
        lVar6 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        uStack_94 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_a8)
        goto LAB_147542f0f;
        uVar14 = puVar13[lVar6 + 1];
      }
      uStack_a4 = -uVar14 & uVar14;
      uVar1 = (ulonglong)uStack_a4 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_c0 = (int)lVar6;
      uStack_94 = local_90 + -1 + local_c0;
      if ((int)uVar9 < (int)uStack_94) {
        uStack_94 = uVar9;
      }
    }
LAB_147542f0f:
    local_b0 = puVar16 + -4;
    local_a0 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar16 + -2);
    TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
    uStack_8c = local_34;
    uVar14 = uVar9 & 0xffffffe0;
    iStack_88 = *(int *)(puVar16 + -3) - *(int *)((longlong)puVar16 + 0x14);
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar16 + -2);
    uStack_98 = 0xffffffff;
    TStack_78.CurrentBitIndex = uStack_94;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar7 = (int)uVar9 >> 5;
    TStack_78._28_4_ = local_34;
    TStack_78.BaseBitIndex = local_90;
    uStack_58 = CONCAT44(uStack_84,iStack_88);
    local_b8 = pTVar17;
    local_80 = local_b0;
    TStack_78.Array = local_a0;
    if (((int)uVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(uint *)(puVar16 + 1);
    if (uVar9 != uVar2) {
      pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)*local_c8;
      if ((TBitArray<FDefaultBitArrayAllocator> *)*local_c8 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar12 = pTVar17;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) &
              *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar7 * 4);
      while (uVar9 == 0) {
        lVar6 = (longlong)iVar7;
        uVar14 = uVar14 + 0x20;
        iVar7 = iVar7 + 1;
        uVar9 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_147543020;
        uVar9 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar6 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_bc = (int)lVar6;
      uVar9 = local_bc + -1 + uVar14;
      if ((int)uVar2 < (int)uVar9) {
        uVar9 = uVar2;
      }
    }
LAB_147543020:
    while( true ) {
      plVar4 = local_80;
      if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
        local_d8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_d8);
      }
      if (((TStack_78.CurrentBitIndex == uVar9) && (TStack_78.Array == pTVar17)) &&
         (plVar4 == local_c8 + -4)) break;
      lVar11 = (longlong)TStack_78.CurrentBitIndex * 0x88 + *plVar4;
      iVar7 = *(int *)(lVar11 + 0x10);
      lVar6 = *(longlong *)(lVar11 + 8);
      lVar15 = (longlong)iVar7 * 0x78 + lVar6;
      while( true ) {
        if (*(int *)(lVar11 + 0x10) != iVar7) {
          local_d7[0] = 0;
          `TCheckedPointerIterator<FAnimTickRecord,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_d7);
        }
        if (lVar6 == lVar15) break;
        (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar6,param_1);
        lVar6 = lVar6 + 0x78;
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      pTVar17 = local_b8;
    }
    puVar16 = local_c8 + 10;
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + 4;
    if (1 < local_d4) {
      return;
    }
  } while( true );
}

// AddTickRecord @ 1475432a0

void __thiscall
UE::Anim::FAnimSync::AddTickRecord
          (FAnimSync *this,FAnimTickRecord *param_1,FAnimSyncParams *param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  Type TVar3;
  int iVar4;
  FName FVar5;
  FAnimTickRecord *pFVar6;
  UMirrorDataTable *pUVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FAnimGroupInstance *this_00;
  uint uVar12;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar13;
  
  FVar5 = param_2->GroupName;
  iVar11 = this->SyncGroupWriteIndex;
  if (FVar5 == (FName)0x0) {
    pTVar13 = this->UngroupedActivePlayerArrays + iVar11;
    pFVar6 = (FAnimTickRecord *)(pTVar13->AllocatorInstance).Data;
    if ((pFVar6 <= param_1) && (param_1 < pFVar6 + pTVar13->ArrayMax)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar11 = pTVar13->ArrayNum;
    if (iVar11 == pTVar13->ArrayMax) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
    }
    pTVar13->ArrayNum = iVar11 + 1;
    FAnimTickRecord::FAnimTickRecord
              ((FAnimTickRecord *)((pTVar13->AllocatorInstance).Data + (longlong)iVar11 * 0x78),
               param_1);
    iVar11 = this->SyncGroupWriteIndex;
    pUVar7 = this->MirrorDataTable;
    iVar4 = this->UngroupedActivePlayerArrays[iVar11].ArrayNum;
    uVar12 = iVar4 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar4) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(UMirrorDataTable **)
     (this->UngroupedActivePlayerArrays[iVar11].AllocatorInstance.Data +
     (longlong)this->UngroupedActivePlayerArrays[iVar11].ArrayNum * 0x78 + -0x50) = pUVar7;
  }
  else {
    uVar10 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    this_00 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                          *)(this->SyncGroupMaps + iVar11),uVar10 + FVar5.Number,&param_2->GroupName
                        );
    pFVar6 = (FAnimTickRecord *)(this_00->ActivePlayers).AllocatorInstance.Data;
    if ((pFVar6 <= param_1) && (param_1 < pFVar6 + (this_00->ActivePlayers).ArrayMax)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar11 = (this_00->ActivePlayers).ArrayNum;
    piVar1 = &(this_00->ActivePlayers).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)this_00,piVar1);
    }
    (this_00->ActivePlayers).ArrayNum = iVar11 + 1;
    FAnimTickRecord::FAnimTickRecord
              ((FAnimTickRecord *)
               ((this_00->ActivePlayers).AllocatorInstance.Data + (longlong)iVar11 * 0x78),param_1);
    iVar11 = (this_00->ActivePlayers).ArrayNum;
    pUVar7 = this->MirrorDataTable;
    uVar12 = iVar11 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar11) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(UMirrorDataTable **)
     ((this_00->ActivePlayers).AllocatorInstance.Data +
     (longlong)(this_00->ActivePlayers).ArrayNum * 0x78 + -0x50) = pUVar7;
    iVar11 = (this_00->ActivePlayers).ArrayNum;
    FVar2 = (FScriptContainerElement)param_2->bOverridePositionWhenJoiningSyncGroupAsLeader;
    uVar12 = iVar11 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar11) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    (this_00->ActivePlayers).AllocatorInstance.Data
    [(longlong)(this_00->ActivePlayers).ArrayNum * 0x78 + -0x59] = FVar2;
    iVar11 = (this_00->ActivePlayers).ArrayNum;
    TVar3 = param_2->Role;
    uVar12 = iVar11 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar11) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    (this_00->ActivePlayers).AllocatorInstance.Data
    [(longlong)(this_00->ActivePlayers).ArrayNum * 0x78 + -0x58] =
         (FScriptContainerElement)(TVar3 == ExclusiveAlwaysLeader);
    FAnimGroupInstance::TestTickRecordForLeadership(this_00,param_2->Role);
  }
  return;
}

// CreateUninitializedTickRecord @ 1475502f0

FAnimTickRecord * __thiscall
UE::Anim::FAnimSync::CreateUninitializedTickRecord
          (FAnimSync *this,FAnimGroupInstance **param_1,FName param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FAnimGroupInstance *pFVar4;
  FAnimTickRecord *pFVar5;
  FName local_res18 [2];
  
  *param_1 = (FAnimGroupInstance *)0x0;
  local_res18[0] = param_2;
  if (param_2 != (FName)0x0) {
    iVar3 = this->SyncGroupWriteIndex;
    uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    pFVar4 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                         *)(this->SyncGroupMaps + iVar3),uVar2 + param_2.Number,local_res18);
    *param_1 = pFVar4;
    if (pFVar4 != (FAnimGroupInstance *)0x0) goto LAB_147550370;
  }
  pFVar4 = (FAnimGroupInstance *)(this->UngroupedActivePlayerArrays + this->SyncGroupWriteIndex);
LAB_147550370:
  iVar3 = (pFVar4->ActivePlayers).ArrayNum;
  piVar1 = &(pFVar4->ActivePlayers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)pFVar4,piVar1);
  }
  (pFVar4->ActivePlayers).ArrayNum = iVar3 + 1;
  pFVar5 = (FAnimTickRecord *)
           ((pFVar4->ActivePlayers).AllocatorInstance.Data + (longlong)iVar3 * 0x78);
  DefaultConstructItems<FAnimTickRecord,int>(pFVar5,1);
  return pFVar5;
}

// CreateUninitializedTickRecordInScope @ 1475503d0

FAnimTickRecord * __thiscall
UE::Anim::FAnimSync::CreateUninitializedTickRecordInScope
          (FAnimSync *this,FAnimInstanceProxy *param_1,FAnimGroupInstance **param_2,FName param_3,
          EAnimSyncGroupScope param_4)

{
  FAnimInstanceProxy *this_00;
  FAnimTickRecord *pFVar1;
  EAnimSyncGroupScope *local_res20;
  
  if (param_3 != (FName)0x0) {
    this_00 = param_1->MainInstanceProxy;
    if ((this_00 == (FAnimInstanceProxy *)0x0) || (this_00 == param_1)) {
      param_4 = Local;
    }
    if (param_4 != Local) {
      if (param_4 == Component) {
        pFVar1 = FAnimInstanceProxy::CreateUninitializedTickRecord(this_00,param_2,param_3);
        return pFVar1;
      }
      local_res20 = &param_4;
      `UE::Anim::FAnimSync::CreateUninitializedTickRecordInScope'::__l10::<lambda_1>::operator()
                (&local_res20);
    }
  }
  pFVar1 = CreateUninitializedTickRecord(this,param_2,param_3);
  return pFVar1;
}

// GetSyncGroupPosition @ 147563020

FMarkerSyncAnimPosition * __thiscall
UE::Anim::FAnimSync::GetSyncGroupPosition
          (FAnimSync *this,FMarkerSyncAnimPosition *__return_storage_ptr__,FName param_1)

{
  FName FVar1;
  FAnimGroupInstance *pFVar2;
  
  pFVar2 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           ::Find((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                   *)(this->SyncGroupMaps + (1 - this->SyncGroupWriteIndex)),param_1);
  if (pFVar2 == (FAnimGroupInstance *)0x0) {
    (__return_storage_ptr__->PreviousMarkerName).ComparisonIndex = 0;
    (__return_storage_ptr__->PreviousMarkerName).Number = 0;
    (__return_storage_ptr__->NextMarkerName).ComparisonIndex = 0;
    (__return_storage_ptr__->NextMarkerName).Number = 0;
    __return_storage_ptr__->PositionBetweenMarkers = 0.0;
    return __return_storage_ptr__;
  }
  if (((pFVar2->bCanUseMarkerSync != false) &&
      ((pFVar2->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName != (FName)0x0)) &&
     ((pFVar2->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName != (FName)0x0)) {
    FVar1 = (pFVar2->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName;
    __return_storage_ptr__->PreviousMarkerName =
         (pFVar2->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName;
    __return_storage_ptr__->NextMarkerName = FVar1;
    __return_storage_ptr__->PositionBetweenMarkers =
         (pFVar2->MarkerTickContext).MarkerSyncEndPostion.PositionBetweenMarkers;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->PreviousMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->PreviousMarkerName).Number = 0;
  (__return_storage_ptr__->NextMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->NextMarkerName).Number = 0;
  __return_storage_ptr__->PositionBetweenMarkers = pFVar2->AnimLengthRatio;
  return __return_storage_ptr__;
}

// GetTimeToClosestMarker @ 1475632a0

bool __thiscall
UE::Anim::FAnimSync::GetTimeToClosestMarker
          (FAnimSync *this,FName param_1,FName param_2,float *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FAnimGroupInstance *pFVar6;
  
  pFVar6 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           ::Find((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                   *)(this->SyncGroupMaps + (1 - this->SyncGroupWriteIndex)),param_1);
  if ((pFVar6 != (FAnimGroupInstance *)0x0) && (pFVar6->bCanUseMarkerSync != false)) {
    iVar1 = pFVar6->GroupLeaderIndex;
    if ((-1 < iVar1) && (iVar1 < (pFVar6->ActivePlayers).ArrayNum)) {
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (pFVar6->ActivePlayers).AllocatorInstance.Data;
      if ((pFVar6->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName == param_2) {
        *param_3 = *(float *)(*(longlong *)(pFVar2 + (longlong)iVar1 * 0x78 + 0x68) + 4);
        return true;
      }
      if ((pFVar6->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName == param_2) {
        *param_3 = *(float *)(*(longlong *)(pFVar2 + (longlong)iVar1 * 0x78 + 0x68) + 0xc);
        return true;
      }
    }
  }
  return false;
}

// HasMarkerBeenHitThisFrame @ 147563a40

bool __thiscall
UE::Anim::FAnimSync::HasMarkerBeenHitThisFrame(FAnimSync *this,FName param_1,FName param_2)

{
  FName *pFVar1;
  FAnimGroupInstance *pFVar2;
  FName *pFVar3;
  
  pFVar2 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           ::Find((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                   *)(this->SyncGroupMaps + (1 - this->SyncGroupWriteIndex)),param_1);
  if ((pFVar2 == (FAnimGroupInstance *)0x0) || (pFVar2->bCanUseMarkerSync == false)) {
    return false;
  }
  pFVar3 = (FName *)(pFVar2->MarkerTickContext).MarkersPassedThisTick.AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar3 +
                    (longlong)(pFVar2->MarkerTickContext).MarkersPassedThisTick.ArrayNum * 0xc);
  for (; pFVar3 != pFVar1; pFVar3 = (FName *)&pFVar3[1].Number) {
    if (*pFVar3 == param_2) goto LAB_147563aa0;
  }
  pFVar3 = (FName *)0x0;
LAB_147563aa0:
  return pFVar3 != (FName *)0x0;
}

// IsSyncGroupBetweenMarkers @ 14756ae50

bool __thiscall
UE::Anim::FAnimSync::IsSyncGroupBetweenMarkers
          (FAnimSync *this,FName param_1,FName param_2,FName param_3,bool param_4)

{
  FAnimGroupInstance *pFVar1;
  FName FVar2;
  FName FVar3;
  
  pFVar1 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           ::Find((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                   *)(this->SyncGroupMaps + (1 - this->SyncGroupWriteIndex)),param_1);
  if (pFVar1 == (FAnimGroupInstance *)0x0) {
    FVar3.ComparisonIndex.Value = 0;
    FVar3.Number = 0;
    FVar2.ComparisonIndex.Value = 0;
    FVar2.Number = 0;
  }
  else if (((pFVar1->bCanUseMarkerSync == false) ||
           ((pFVar1->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName == (FName)0x0)) ||
          ((pFVar1->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName == (FName)0x0)) {
    FVar2.ComparisonIndex.Value = 0;
    FVar2.Number = 0;
    FVar3 = FVar2;
  }
  else {
    FVar3 = (pFVar1->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName;
    FVar2 = (pFVar1->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName;
  }
  if (((FVar3 != param_2) || (FVar2 != param_3)) &&
     ((param_4 || ((FVar3 != param_3 || (FVar2 != param_2)))))) {
    return false;
  }
  return true;
}

// IsSyncGroupValid @ 14756af10

bool __thiscall UE::Anim::FAnimSync::IsSyncGroupValid(FAnimSync *this,FName param_1)

{
  FAnimGroupInstance *pFVar1;
  
  pFVar1 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           ::Find((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                   *)(this->SyncGroupMaps + (1 - this->SyncGroupWriteIndex)),param_1);
  if ((pFVar1 != (FAnimGroupInstance *)0x0) &&
     ((pFVar1->bCanUseMarkerSync == false ||
      (((pFVar1->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName != (FName)0x0 &&
       ((pFVar1->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName != (FName)0x0)))))) {
    return true;
  }
  return false;
}

// Reset @ 147575590

void __thiscall UE::Anim::FAnimSync::Reset(FAnimSync *this)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  FAnimTickRecord *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *pTVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_64;
  undefined8 uStack_5c;
  
  pTVar13 = this->UngroupedActivePlayerArrays + this->SyncGroupWriteIndex;
  pFVar6 = (FAnimTickRecord *)(pTVar13->AllocatorInstance).Data;
  if (pTVar13->ArrayMax < 0) {
    DestructItems<FAnimTickRecord,int>(pFVar6,pTVar13->ArrayNum);
    pTVar13->ArrayNum = 0;
    if (pTVar13->ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,&pTVar13->AllocatorInstance,0,&pTVar13->ArrayMax);
    }
  }
  else {
    DestructItems<FAnimTickRecord,int>(pFVar6,pTVar13->ArrayNum);
    pTVar13->ArrayNum = 0;
  }
  iVar14 = 0;
  iVar4 = this->SyncGroupWriteIndex;
  iVar16 = 0;
  uVar9 = 1;
  puVar19 = &this->SyncGroupMaps[iVar4].field_0x10;
  pTVar18 = this->SyncGroupMaps + iVar4;
  iVar5 = *(int *)(puVar19 + 0x18);
  iVar10 = iVar16;
  if (iVar5 != 0) {
    puVar17 = *(uint **)(puVar19 + 0x10);
    if (*(uint **)(puVar19 + 0x10) == (uint *)0x0) {
      puVar17 = (uint *)puVar19;
    }
    uVar12 = *puVar17;
    iVar16 = iVar14;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1475756af;
      uVar12 = (puVar17 + 1)[lVar11];
    }
    uVar9 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar10 = local_res10 + -1 + iVar16;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_1475756af:
  uVar12 = *(uint *)&this->SyncGroupMaps[iVar4].field_0x28;
  uVar20 = uVar12 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar9,iVar14);
  TStack_b0.CurrentBitIndex = iVar10;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_b0._28_4_ = iVar10;
  TStack_b0.BaseBitIndex = iVar16;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&this->SyncGroupMaps[iVar4].field_0x8 -
                       *(int *)&this->SyncGroupMaps[iVar4].field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar19;
  if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)(puVar19 + 0x18);
  if (uVar12 != uVar9) {
    puVar15 = *(undefined1 **)(puVar19 + 0x10);
    if (*(undefined1 **)(puVar19 + 0x10) == (undefined1 *)0x0) {
      puVar15 = puVar19;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1475757c0;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar20;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_1475757c0:
  while( true ) {
    if (*(int *)&pTVar18->field_0x8 - *(int *)&pTVar18->field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar12) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar19)) break;
    lVar11 = *(longlong *)pTVar18 + (longlong)TStack_b0.CurrentBitIndex * 0x88;
    *(undefined4 *)(lVar11 + 0x18) = 0xffffffff;
    piVar1 = (int *)(lVar11 + 0x14);
    if (*piVar1 < 0) {
      DestructItems<FAnimTickRecord,int>(*(FAnimTickRecord **)(lVar11 + 8),*(int *)(lVar11 + 0x10));
      *(undefined4 *)(lVar11 + 0x10) = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,0,(ForAnyElementType *)(lVar11 + 8),0,piVar1);
      }
    }
    else {
      DestructItems<FAnimTickRecord,int>(*(FAnimTickRecord **)(lVar11 + 8),*(int *)(lVar11 + 0x10));
      *(undefined4 *)(lVar11 + 0x10) = 0;
    }
    puVar2 = (undefined8 *)(lVar11 + 0x38);
    *(undefined1 *)(lVar11 + 0x30) = 0;
    *(undefined4 *)(lVar11 + 0x34) = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_64 = 0;
    uStack_5c = 0;
    if (puVar2 != local_88) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      *puVar2 = 0;
      *(undefined8 *)(lVar11 + 0x40) = 0;
    }
    *(TArray<FName,TSizedDefaultAllocator<32>_> **)(lVar11 + 0x70) =
         &FMarkerTickContext::DefaultMarkerNames;
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    *(undefined8 *)(lVar11 + 0x48) = local_78;
    *(undefined8 *)(lVar11 + 0x50) = uStack_70;
    *(undefined4 *)(lVar11 + 0x58) = 0;
    *(undefined8 *)(lVar11 + 0x5c) = local_64;
    *(undefined8 *)(lVar11 + 100) = uStack_5c;
    *(undefined4 *)(lVar11 + 0x6c) = 0;
    *(undefined8 *)(lVar11 + 0x78) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return;
}

// ResetAll @ 147575a70

void __thiscall UE::Anim::FAnimSync::ResetAll(FAnimSync *this)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  FAnimTickRecord *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *pTVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined4 local_5c;
  
  pTVar19 = this->SyncGroupMaps;
  if (this != (FAnimSync *)pTVar19) {
    piVar11 = &this->UngroupedActivePlayerArrays[0].ArrayNum;
    do {
      pFVar5 = (FAnimTickRecord *)
               (((TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)(piVar11 + -2))->
               AllocatorInstance).Data;
      if (piVar11[1] < 0) {
        DestructItems<FAnimTickRecord,int>(pFVar5,*piVar11);
        *piVar11 = 0;
        if (piVar11[1] != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,0,(ForAnyElementType *)(piVar11 + -2),0,piVar11 + 1);
        }
      }
      else {
        DestructItems<FAnimTickRecord,int>(pFVar5,*piVar11);
        *piVar11 = 0;
      }
      piVar1 = piVar11 + 2;
      piVar11 = piVar11 + 4;
    } while ((TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
              *)piVar1 != pTVar19);
  }
  if (pTVar19 !=
      (TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
       *)&this->MirrorDataTable) {
    puVar18 = (undefined8 *)&this->SyncGroupMaps[0].field_0x20;
    do {
      iVar14 = 0;
      uVar13 = *(uint *)(puVar18 + 1);
      uVar8 = 1;
      uVar16 = 0;
      uVar9 = uVar16;
      if (uVar13 != 0) {
        puVar17 = (uint *)*puVar18;
        if ((uint *)*puVar18 == (uint *)0x0) {
          puVar17 = (uint *)(puVar18 + -2);
        }
        uVar9 = *puVar17;
        while (uVar9 == 0) {
          lVar10 = (longlong)iVar14;
          uVar16 = uVar16 + 0x20;
          iVar14 = iVar14 + 1;
          uVar9 = uVar13;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_147575bbf;
          uVar9 = puVar17[lVar10 + 1];
        }
        uVar8 = -uVar9 & uVar9;
        uVar4 = (ulonglong)uVar8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res18 = (int)lVar10;
        uVar9 = local_res18 + -1 + uVar16;
        if ((int)uVar13 < (int)uVar9) {
          uVar9 = uVar13;
        }
      }
LAB_147575bbf:
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar18 + -2);
      uVar12 = uVar13 & 0xffffffe0;
      TStack_e0._padding_ = CONCAT44(uVar8,iVar14);
      TStack_e0.CurrentBitIndex = uVar9;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_e0._28_4_ = local_5c;
      TStack_e0.BaseBitIndex = uVar16;
      uStack_c0 = CONCAT44(uStack_ec,*(int *)(puVar18 + -3) - *(int *)((longlong)puVar18 + 0x14));
      TStack_e0.Array = pTVar2;
      if (((int)uVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar16 = *(uint *)(puVar18 + 1);
      if (uVar13 != uVar16) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)*puVar18;
        if ((TBitArray<FDefaultBitArrayAllocator> *)*puVar18 ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar2;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                 *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar10 = (longlong)iVar14;
          uVar12 = uVar12 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_147575ce0;
          uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res20 = (int)lVar10;
        uVar13 = local_res20 + -1 + uVar12;
        if ((int)uVar16 < (int)uVar13) {
          uVar13 = uVar16;
        }
      }
LAB_147575ce0:
      while( true ) {
        if (*(int *)(&pTVar19->field_0x0 + 8) - *(int *)(&pTVar19->field_0x20 + 0x14) !=
            (int)uStack_c0) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_e0.CurrentBitIndex == uVar13) && (TStack_e0.Array == pTVar2)) break;
        lVar10 = *(longlong *)&pTVar19->field_0x0 + (longlong)TStack_e0.CurrentBitIndex * 0x88;
        *(undefined4 *)(lVar10 + 0x18) = 0xffffffff;
        piVar11 = (int *)(lVar10 + 0x14);
        if (*piVar11 < 0) {
          DestructItems<FAnimTickRecord,int>
                    (*(FAnimTickRecord **)(lVar10 + 8),*(int *)(lVar10 + 0x10));
          *(undefined4 *)(lVar10 + 0x10) = 0;
          if (*piVar11 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,0,(ForAnyElementType *)(lVar10 + 8),0,piVar11);
          }
        }
        else {
          DestructItems<FAnimTickRecord,int>
                    (*(FAnimTickRecord **)(lVar10 + 8),*(int *)(lVar10 + 0x10));
          *(undefined4 *)(lVar10 + 0x10) = 0;
        }
        puVar3 = (undefined8 *)(lVar10 + 0x38);
        local_98 = 0;
        local_84 = 0;
        *(undefined1 *)(lVar10 + 0x30) = 0;
        *(undefined4 *)(lVar10 + 0x34) = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_94 = 0;
        uStack_8c = 0;
        if (puVar3 != local_b8) {
          if ((void *)*puVar3 != (void *)0x0) {
            FMemory::Free((void *)*puVar3);
          }
          *puVar3 = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
        }
        *(TArray<FName,TSizedDefaultAllocator<32>_> **)(lVar10 + 0x70) =
             &FMarkerTickContext::DefaultMarkerNames;
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        *(undefined8 *)(lVar10 + 0x48) = local_a8;
        *(undefined8 *)(lVar10 + 0x50) = uStack_a0;
        *(undefined4 *)(lVar10 + 0x58) = 0;
        *(undefined8 *)(lVar10 + 0x5c) = local_94;
        *(undefined8 *)(lVar10 + 100) = uStack_8c;
        *(undefined4 *)(lVar10 + 0x6c) = 0;
        *(undefined8 *)(lVar10 + 0x78) = 0;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      }
      pTVar19 = pTVar19 + 1;
      puVar18 = puVar18 + 10;
    } while (pTVar19 !=
             (TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
              *)&this->MirrorDataTable);
  }
  this->SyncGroupWriteIndex = 0;
  this->MirrorDataTable = (UMirrorDataTable *)0x0;
  return;
}

// SetMirror @ 1475790f0

void __thiscall UE::Anim::FAnimSync::SetMirror(FAnimSync *this,UMirrorDataTable *param_1)

{
  this->MirrorDataTable = param_1;
  return;
}

// TickAssetPlayerInstances @ 14757d420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Anim::FAnimSync::TickAssetPlayerInstances
          (FAnimSync *this,FAnimInstanceProxy *param_1,float param_2)

{
  FAnimGroupInstance *this_00;
  uint *puVar1;
  FPassedMarker *pFVar2;
  FMarkerTickContext *this_01;
  int iVar3;
  FName FVar4;
  int *piVar5;
  undefined8 *puVar6;
  UObjectBaseUtility *pUVar7;
  FScriptContainerElement *pFVar8;
  TAtomic<FMinimalName> TVar9;
  UAnimInstance *pUVar10;
  UAnimationAsset *pUVar11;
  code *pcVar12;
  bool bVar13;
  Type TVar14;
  FAnimNotifyQueue *pFVar15;
  FAnimSync *pFVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  FName *pFVar28;
  TStatId TVar29;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar30;
  FAnimGroupInstance *pFVar31;
  FName *pFVar32;
  FUObjectItem *pFVar33;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar34;
  TVector<double> *pTVar35;
  TQuat<double> *pTVar36;
  FString *pFVar37;
  FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstance> FVar38;
  FUObjectItem *pFVar39;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  UClass *pUVar40;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar41;
  int iVar42;
  FName FVar43;
  FName FVar44;
  longlong lVar45;
  FName FVar46;
  ForAnyElementType FVar47;
  TStatIdData *pTVar48;
  TTransform<double> *pTVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  uint uVar52;
  FScriptContainerElement *pFVar53;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar54;
  FAnimTickRecord *pFVar55;
  uint uVar56;
  FNameEntryId FVar57;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *pTVar58;
  FAnimTickRecord *pFVar59;
  uint uVar60;
  undefined1 *puVar61;
  wchar_t *pwVar62;
  uint uVar63;
  longlong lVar64;
  wchar_t *pwVar65;
  undefined1 auStackY_e08 [32];
  undefined1 local_da8;
  undefined1 local_da7;
  undefined1 local_da6 [6];
  FCycleCounter local_da0;
  FCycleCounter local_d90;
  uint local_d80;
  FName local_d78;
  byte local_d70;
  Type local_d68;
  FName local_d60;
  byte local_d58;
  int local_d50;
  int local_d4c;
  longlong local_d48;
  FAnimInstanceProxy *local_d40;
  FCycleCounter local_d38;
  FCycleCounter local_d28;
  FName *local_d18;
  undefined1 local_d08 [16];
  char *local_cf8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_ce8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_cd8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_cc8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_cb8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_ca8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c98;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c88;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c78;
  undefined8 local_c68;
  undefined8 uStack_c60;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c58;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c48;
  FColor_u_0 local_c38 [2];
  FAnimNotifyQueue *local_c30;
  FString local_c28;
  FString local_c18;
  undefined4 local_c08;
  undefined4 uStack_c04;
  char *pcStack_c00;
  char *local_bf8;
  FName local_be8;
  byte local_be0;
  FColor_u_0 local_bd8 [2];
  FAnimInstanceProxy *local_bd0;
  FAnimSync *local_bc8;
  uint local_bc0;
  uint uStack_bbc;
  FName local_bb8;
  FName local_bb0;
  FName local_ba8;
  FName local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  FString local_b88;
  undefined8 local_b78;
  undefined8 local_b70;
  uint local_b68;
  uint uStack_b64;
  undefined8 local_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  FName local_b40;
  TVector<double>_u_0 local_b38;
  TQuat<double> local_b18;
  undefined8 uStack_af8;
  int local_af0;
  undefined4 uStack_aec;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined4 local_ad8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_ad0;
  FName local_ab0;
  FString *local_aa8;
  FString *local_aa0;
  LARGE_INTEGER local_a98;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  FString local_a00;
  FStatMessage local_9f0;
  undefined4 local_9d8;
  undefined4 uStack_9d4;
  char *pcStack_9d0;
  char *local_9c8;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *local_9b8;
  undefined1 auStack_9b0 [20];
  int iStack_99c;
  undefined8 local_998;
  undefined8 uStack_990;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_988;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_978;
  FName *local_968;
  FAnimGroupInstance *local_960;
  FAnimInstanceProxy *local_958;
  TQuat<double> local_948;
  TQuat<double> local_928;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  source_location local_8b8;
  source_location local_898;
  FName local_878;
  FName local_870;
  FName local_868;
  FName local_860;
  source_location local_858;
  source_location local_838;
  FName local_818;
  FName local_810;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *local_808;
  double dStack_800;
  TBitArray<FDefaultBitArrayAllocator> *local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  FStringFormatArg local_7d8;
  FStringFormatArg local_7b8;
  double local_798;
  double dStack_790;
  double local_788;
  double local_780;
  double dStack_778;
  double local_770;
  FStringFormatArg local_768;
  FStringFormatArg local_748;
  FStringFormatArg local_728;
  FStringFormatArg local_708;
  FStringFormatArg local_6e8;
  FStringFormatArg local_6c8;
  FStringFormatArg local_6a8;
  FStringFormatArg local_688;
  TTransform<double> local_668;
  TTransform<double> local_608;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  TVector<double> local_4a8;
  TVector<double> local_490 [2];
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_418;
  TQuat<double> local_3f8;
  char local_3d8;
  undefined4 local_3d4;
  TTransform<double> local_3c8;
  Type local_368;
  FMarkerTickContext local_360;
  float local_320;
  undefined8 local_31c;
  float local_314;
  char local_310;
  undefined1 local_30f;
  undefined1 local_30e;
  FScriptContainerElement local_30d;
  FAnimAssetTickContext local_308;
  FStringFormatArg local_238;
  FStringFormatArg local_218;
  FStringFormatArg local_1f8;
  FStringFormatArg local_1d8;
  FStringFormatArg local_1b8;
  FStringFormatArg local_198;
  FStringFormatArg local_178;
  FStringFormatArg local_158;
  FStringFormatArg local_138;
  FStringFormatArg local_118;
  FStringFormatArg local_f8;
  FStringFormatArg local_d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_e08;
  local_bd0 = param_1;
  local_bc8 = this;
  FStatsHierarchical::BeginMeasurement("UE::Anim::FAnimSync::TickAssetPlayerInstances");
  TVar29.StatIdPtr = (TStatIdData *)StatPtr_STAT_TickAssetPlayerInstances;
  if (StatPtr_STAT_TickAssetPlayerInstances ==
      (FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstances>)0x0) {
    pFVar28 = ::FName::FName(&local_810,"STAT_TickAssetPlayerInstances");
    TVar29.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickAssetPlayerInstances,*pFVar28,
                    L"TickAssetPlayerInstances","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                    true,ST_int64,true,false,MCR_Invalid);
  }
  local_d08._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
  ;
  local_d08._0_8_ = 4.24399162293799e-314;
  local_cf8 = 
  "void __cdecl UE::Anim::FAnimSync::TickAssetPlayerInstances(struct FAnimInstanceProxy &,float)";
  local_d38.StatId.ComparisonIndex.Value = 0;
  local_d38.StatId.Number = 0;
  local_d38.EmittedEvent = 0;
  local_8b8._Line = 0x53;
  local_8b8._Column = 2;
  local_8b8._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
  ;
  local_8b8._Function =
       "void __cdecl UE::Anim::FAnimSync::TickAssetPlayerInstances(struct FAnimInstanceProxy &,float)"
  ;
  FCycleCounter::Start
            (&local_d38,TVar29,CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_8b8);
  local_d68 = param_1->RootMotionMode;
  iVar42 = this->SyncGroupWriteIndex;
  local_ad0._padding_._0_4_ = 0;
  puVar61 = &this->SyncGroupMaps[iVar42].field_0x10;
  local_ad0._padding_._4_4_ = 1;
  pTVar58 = this->SyncGroupMaps + iVar42;
  local_ad0.UnvisitedBitMask = 0xffffffff;
  local_ad0.CurrentBitIndex = 0;
  local_ad0.BaseBitIndex = 0;
  local_c30 = (FAnimNotifyQueue *)(this->SyncGroupMaps + (1 - iVar42));
  local_d40 = param_1;
  local_ad0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar61;
  if (*(int *)(puVar61 + 0x18) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_ad0);
  }
  local_b18.Y = (double)CONCAT44(local_ad0._padding_._4_4_,(undefined4)local_ad0._padding_);
  local_b18.W = (double)CONCAT44(local_ad0.CurrentBitIndex,local_ad0.UnvisitedBitMask);
  uStack_af8._4_4_ = local_ad0._28_4_;
  uStack_af8._0_4_ = local_ad0.BaseBitIndex;
  local_af0 = *(int *)&this->SyncGroupMaps[iVar42].field_0x8 -
              *(int *)&this->SyncGroupMaps[iVar42].field_0x34;
  local_b18.Z = (double)local_ad0.Array;
  uStack_990 = CONCAT44(uStack_aec,local_af0);
  auStack_9b0._8_8_ = local_ad0.Array;
  local_b18.X = (double)pTVar58;
  local_9b8 = pTVar58;
  auStack_9b0._0_8_ = local_b18.Y;
  unique0x100049e0 = local_b18.W;
  local_998 = uStack_af8;
  pTVar30 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_418,(TBitArray<FDefaultBitArrayAllocator> *)puVar61,
                       *(int *)&this->SyncGroupMaps[iVar42].field_0x28);
  local_b18.Y = (double)pTVar30->_padding_;
  local_b18.Z = (double)pTVar30->Array;
  local_b18.W = *(double *)&pTVar30->UnvisitedBitMask;
  uStack_af8 = *(undefined8 *)&pTVar30->BaseBitIndex;
  local_af0 = *(int *)&this->SyncGroupMaps[iVar42].field_0x8 -
              *(int *)&this->SyncGroupMaps[iVar42].field_0x34;
  uStack_7e0 = CONCAT44(uStack_aec,local_af0);
  local_b18.X = (double)pTVar58;
  local_808 = pTVar58;
  dStack_800 = local_b18.Y;
  local_7f8 = (TBitArray<FDefaultBitArrayAllocator> *)local_b18.Z;
  uStack_7f0 = local_b18.W;
  local_7e8 = uStack_af8;
  do {
    pTVar58 = local_9b8;
    if (*(int *)&local_9b8->field_0x8 - *(int *)&local_9b8->field_0x34 != (int)uStack_990) {
      local_da8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_da8);
    }
    if (((iStack_99c == uStack_7f0._4_4_) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_9b0._8_8_ == local_7f8)) &&
       (pTVar58 == local_808)) {
      uVar50 = 0;
      pTVar54 = local_bc8->UngroupedActivePlayerArrays + local_bc8->SyncGroupWriteIndex;
      iVar42 = pTVar54->ArrayNum;
      if (0 < iVar42) {
        local_c30 = &param_1->NotifyQueue;
        uVar51 = uVar50;
        do {
          pFVar15 = local_c30;
          uVar56 = (uint)uVar51;
          uVar52 = 0;
          if ((int)uVar56 < iVar42) {
            uVar52 = ~uVar56 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar55 = (FAnimTickRecord *)((pTVar54->AllocatorInstance).Data + uVar50);
          pTVar41 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
                    (**(code **)(((pFVar55->SourceAsset).field0_0x0.DebugPtr)->_padding_ + 0x2c8))()
          ;
          TVar14 = local_d68;
          local_308.MarkerTickContext.ValidMarkers = &FMarkerTickContext::DefaultMarkerNames;
          if (pTVar41 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
            local_308.MarkerTickContext.ValidMarkers = pTVar41;
          }
          local_308.RootMotionMovementParams.bHasRootMotion = false;
          local_308.RootMotionMovementParams.BlendWeight = 0.0;
          local_308.RootMotionMode = local_d68;
          local_308.MarkerTickContext.MarkersPassedThisTick.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_308.MarkerTickContext.MarkersPassedThisTick.ArrayNum = 0;
          local_308.MarkerTickContext.MarkersPassedThisTick.ArrayMax = 0;
          local_308.RootMotionMovementParams.RootMotionTransform.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_308.RootMotionMovementParams.RootMotionTransform.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_308.RootMotionMovementParams.RootMotionTransform.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_308.MarkerTickContext.MarkerSyncStartPostion.PreviousMarkerName.ComparisonIndex.
          Value = 0;
          local_308.MarkerTickContext.MarkerSyncStartPostion.PreviousMarkerName.Number = 0;
          local_308.MarkerTickContext.MarkerSyncStartPostion.NextMarkerName.ComparisonIndex.Value =
               0;
          local_308.MarkerTickContext.MarkerSyncStartPostion.NextMarkerName.Number = 0;
          local_308.MarkerTickContext.MarkerSyncStartPostion.PositionBetweenMarkers = 0.0;
          local_308.MarkerTickContext.MarkerSyncEndPostion.PreviousMarkerName.ComparisonIndex.Value
               = 0;
          local_308.MarkerTickContext.MarkerSyncEndPostion.PreviousMarkerName.Number = 0;
          local_308.MarkerTickContext.MarkerSyncEndPostion.NextMarkerName.ComparisonIndex.Value = 0;
          local_308.MarkerTickContext.MarkerSyncEndPostion.NextMarkerName.Number = 0;
          local_308.MarkerTickContext.MarkerSyncEndPostion.PositionBetweenMarkers = 0.0;
          local_308.LeaderDelta = 0.0;
          local_308.PreviousAnimLengthRatio = 0.0;
          local_308.AnimLengthRatio = 0.0;
          local_308.RootMotionMovementParams.RootMotionTransform.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_308.RootMotionMovementParams.RootMotionTransform.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_308.RootMotionMovementParams.RootMotionTransform.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_308.RootMotionMovementParams.RootMotionTransform.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_308.RootMotionMovementParams.RootMotionTransform.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_308.RootMotionMovementParams.RootMotionTransform.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_308.RootMotionMovementParams.RootMotionTransform.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_308.RootMotionMovementParams.RootMotionTransform.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_308.RootMotionMovementParams.RootMotionTransform.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_308.RootMotionMovementParams.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_308.RootMotionMovementParams.RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_308.RootMotionMovementParams.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_308.RootMotionMovementParams.RootMotionTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_308.RootMotionMovementParams.RootMotionTransform.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_308.RootMotionMovementParams.RootMotionTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_308.bIsLeader = true;
          local_308.bOnlyOneAnimationInGroup = true;
          local_308.bIsMarkerPositionValid =
               0 < (local_308.MarkerTickContext.ValidMarkers)->ArrayNum;
          local_308.bResyncToSyncGroup = false;
          TVar29.StatIdPtr = (TStatIdData *)StatPtr_STAT_TickAssetPlayerInstance;
          local_308.DeltaTime = param_2;
          if (StatPtr_STAT_TickAssetPlayerInstance ==
              (FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstance>)0x0) {
            pFVar28 = ::FName::FName(&local_878,"STAT_TickAssetPlayerInstance");
            TVar29.StatIdPtr =
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickAssetPlayerInstance,
                            *pFVar28,L"TickAssetPlayerInstance","STATGROUP_Anim","STATCAT_Advanced",
                            L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
          }
          local_c08 = 0x185;
          pcStack_c00 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
          ;
          uStack_c04 = 5;
          local_838._Line = 0x185;
          local_838._Column = 5;
          local_bf8 = 
          "void __cdecl UE::Anim::FAnimSync::TickAssetPlayerInstances(struct FAnimInstanceProxy &,float)"
          ;
          local_d28.StatId.ComparisonIndex.Value = 0;
          local_d28.StatId.Number = 0;
          local_d28.EmittedEvent = 0;
          local_838._File =
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
          ;
          local_838._Function =
               "void __cdecl UE::Anim::FAnimSync::TickAssetPlayerInstances(struct FAnimInstanceProxy &,float)"
          ;
          FCycleCounter::Start
                    (&local_d28,TVar29,CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_838
                    );
          FScopeCycleCounterUObject::FScopeCycleCounterUObject
                    ((FScopeCycleCounterUObject *)&local_be8,
                     (UObjectBaseUtility *)(pFVar55->SourceAsset).field0_0x0.DebugPtr);
          pUVar11 = (pFVar55->SourceAsset).field0_0x0.DebugPtr;
          (**(code **)(pUVar11->_padding_ + 0x2b0))(pUVar11,pFVar55,pFVar15);
          if ((local_be0 & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_be0 & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_be0 & 4) != 0) {
            FThreadStats::AddMessage(local_be8,CycleScopeEnd);
          }
          local_be0 = 0;
          if ((local_d28.EmittedEvent & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_d28.EmittedEvent & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_d28.EmittedEvent & 4) != 0) {
            FThreadStats::AddMessage(local_d28.StatId,CycleScopeEnd);
          }
          local_d28.EmittedEvent = '\0';
          if ((TVar14 == RootMotionFromEverything) &&
             (local_308.RootMotionMovementParams.bHasRootMotion != false)) {
            `UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l2::<lambda_1>::operator()
                      (&local_d40,pFVar55,&local_308);
          }
          iVar42 = local_308.MarkerTickContext.MarkersPassedThisTick.ArrayNum;
          uVar51 = (ulonglong)local_308.MarkerTickContext.MarkersPassedThisTick.ArrayNum;
          pFVar2 = (FPassedMarker *)
                   (local_308.MarkerTickContext.MarkersPassedThisTick.AllocatorInstance.Data +
                   uVar51 * 0xc);
          FVar47.Data = local_308.MarkerTickContext.MarkersPassedThisTick.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar51 != iVar42) {
              local_da6[0] = 0;
              `TCheckedPointerIterator<FPassedMarker,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_da6);
            }
            if ((FPassedMarker *)FVar47.Data == pFVar2) break;
            pUVar10 = (UAnimInstance *)local_bd0->AnimInstanceObject;
            if (pUVar10 == (UAnimInstance *)0x0) {
              pFVar37 = GetTypeName<UAnimInstance>(&local_518);
              if ((pFVar37->Data).ArrayNum == 0) {
                pwVar65 = L"";
              }
              else {
                pwVar65 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar65);
            }
            pUVar40 = Z_Construct_UClass_UAnimInstance_NoRegister();
            iVar3 = (int)pUVar40->_padding_;
            if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar40->_padding_)) {
              pFVar37 = GetTypeName<UAnimInstance>(&local_538);
              pwVar65 = L"";
              if ((pFVar37->Data).ArrayNum == 0) {
                pwVar62 = L"";
              }
              else {
                pwVar62 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
              }
              pFVar37 = GetFullNameForCastLogError<UObject>(&local_528,(UObject *)pUVar10);
              if ((pFVar37->Data).ArrayNum != 0) {
                pwVar65 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar65,pwVar62);
            }
            FAnimTrace::OutputAnimSyncMarker(pUVar10,(FPassedMarker *)FVar47.Data);
            uVar51 = local_308.MarkerTickContext.MarkersPassedThisTick._8_8_ & 0xffffffff;
            FVar47.Data = FVar47.Data + 0xc;
          }
          if ((FPassedMarker *)
              local_308.MarkerTickContext.MarkersPassedThisTick.AllocatorInstance.Data !=
              (FPassedMarker *)0x0) {
            FMemory::Free(local_308.MarkerTickContext.MarkersPassedThisTick.AllocatorInstance.Data);
          }
          iVar42 = pTVar54->ArrayNum;
          uVar51 = (ulonglong)(uVar56 + 1);
          uVar50 = uVar50 + 0x78;
        } while ((int)(uVar56 + 1) < iVar42);
      }
      local_bc8->SyncGroupWriteIndex = 1 - local_bc8->SyncGroupWriteIndex;
      if ((local_d38.EmittedEvent & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_d38.EmittedEvent & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_d38.EmittedEvent & 4) != 0) {
        FThreadStats::AddMessage(local_d38.StatId,CycleScopeEnd);
      }
      local_d38.EmittedEvent = '\0';
      FStatsHierarchical::EndMeasurement();
      return;
    }
    pFVar28 = (FName *)((longlong)iStack_99c * 0x88 + *(longlong *)pTVar58);
    this_00 = (FAnimGroupInstance *)(pFVar28 + 1);
    local_d18 = pFVar28;
    if (0 < (int)pFVar28[2].ComparisonIndex.Value) {
      pFVar31 = TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                ::Find((TMapBase<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                        *)local_c30,*pFVar28);
      FAnimGroupInstance::Prepare(this_00,pFVar31);
      if (4 < (byte)LogAnimMarkerSync._0_1_) {
        ::FName::ToString(pFVar28,&local_908);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
        if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_908.Data.AllocatorInstance.Data);
        }
      }
      local_360.ValidMarkers = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar28 + 4);
      uVar56 = 0;
      uVar52 = pFVar28[5].ComparisonIndex.Value;
      local_3d8 = '\0';
      local_3d4 = 0;
      local_368 = local_d68;
      local_360.MarkersPassedThisTick.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_360.MarkersPassedThisTick.ArrayNum = 0;
      local_360.MarkersPassedThisTick.ArrayMax = 0;
      local_310 = 0 < (int)uVar52;
      local_30e = pFVar28[2].ComparisonIndex.Value == 1;
      local_3c8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_3c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_3c8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_360.MarkerSyncStartPostion.PreviousMarkerName.ComparisonIndex.Value = 0;
      local_360.MarkerSyncStartPostion.PreviousMarkerName.Number = 0;
      local_360.MarkerSyncStartPostion.NextMarkerName.ComparisonIndex.Value = 0;
      local_360.MarkerSyncStartPostion.NextMarkerName.Number = 0;
      local_360.MarkerSyncStartPostion.PositionBetweenMarkers = 0.0;
      local_360.MarkerSyncEndPostion.PreviousMarkerName.ComparisonIndex.Value = 0;
      local_360.MarkerSyncEndPostion.PreviousMarkerName.Number = 0;
      local_360.MarkerSyncEndPostion.NextMarkerName.ComparisonIndex.Value = 0;
      local_360.MarkerSyncEndPostion.NextMarkerName.Number = 0;
      local_360.MarkerSyncEndPostion.PositionBetweenMarkers = 0.0;
      local_31c = 0;
      local_314 = 0.0;
      local_30f = 1;
      local_30d = (FScriptContainerElement)0x0;
      local_3c8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_3c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_3c8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_3c8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_3c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_3c8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_3c8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_3c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_3c8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_3c8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_3c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_3c8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_3c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_3c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_3c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (pFVar31 != (FAnimGroupInstance *)0x0) {
        local_31c = (ulonglong)(uint)pFVar31->AnimLengthRatio << 0x20;
        local_314 = pFVar31->AnimLengthRatio;
        FVar4 = (pFVar31->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName;
        local_b48 = 0;
        if (FVar4 != (FName)0x0) {
          FVar46 = (pFVar31->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName;
          local_b50 = 0;
          if (FVar46 != (FName)0x0) {
            local_b58 = 0;
            if (FVar4 == (FName)0x0) {
LAB_14757d920:
              local_b60 = 0;
              if (FVar46 == (FName)0x0) {
LAB_14757d948:
                local_360.MarkerSyncStartPostion.PreviousMarkerName =
                     (pFVar31->MarkerTickContext).MarkerSyncEndPostion.PreviousMarkerName;
                local_360.MarkerSyncStartPostion.NextMarkerName =
                     (pFVar31->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName;
                local_360.MarkerSyncStartPostion.PositionBetweenMarkers =
                     (pFVar31->MarkerTickContext).MarkerSyncEndPostion.PositionBetweenMarkers;
              }
              else {
                FVar44 = *(FName *)local_360.ValidMarkers;
                FVar4 = (FName)((longlong)FVar44 + (longlong)(int)uVar52 * 8);
                for (; FVar44 != FVar4; FVar44 = (FName)((longlong)FVar44 + 8)) {
                  if (*(FName *)FVar44 == FVar46) goto LAB_14757d948;
                }
              }
            }
            else {
              FVar43 = *(FName *)local_360.ValidMarkers;
              FVar44 = (FName)((longlong)FVar43 + (longlong)(int)uVar52 * 8);
              for (; FVar43 != FVar44; FVar43 = (FName)((longlong)FVar43 + 8)) {
                if (*(FName *)FVar43 == FVar4) goto LAB_14757d920;
              }
            }
          }
        }
      }
      local_ba8 = local_360.MarkerSyncStartPostion.PreviousMarkerName;
      local_bb0 = local_360.MarkerSyncStartPostion.NextMarkerName;
      local_320 = param_2;
      if (((int)pFVar28[2].ComparisonIndex.Value < 1) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      piVar5 = *(int **)((this_00->ActivePlayers).AllocatorInstance.Data + 0x68);
      if (((int)pFVar28[2].ComparisonIndex.Value < 1) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar42 = ((this_00->ActivePlayers).AllocatorInstance.Data[0x1c] !=
               (FScriptContainerElement)0x0) - 2;
      if ((iVar42 < *piVar5) && (iVar42 < piVar5[2])) {
        local_d50 = 1;
        local_d4c = 1;
      }
      else {
        local_d50 = 0;
        local_d4c = 0;
      }
      if (((int)pFVar28[2].ComparisonIndex.Value < 1) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar6 = *(undefined8 **)((this_00->ActivePlayers).AllocatorInstance.Data + 0x68);
      local_c68 = *puVar6;
      uStack_c60 = puVar6[1];
      if (pFVar28[3].ComparisonIndex.Value != 0xffffffff) {
        local_968 = pFVar28;
        local_960 = this_00;
        local_958 = param_1;
        `UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l10::<lambda_2>::operator()(&local_968);
      }
      uVar52 = pFVar28[2].ComparisonIndex.Value;
      local_d80 = 0;
      local_d48 = 0;
      pFVar32 = pFVar28;
      if (0 < (int)uVar52) {
        lVar64 = 0;
        do {
          uVar56 = 0;
          if ((int)local_d80 < (int)uVar52) {
            uVar56 = ~local_d80 >> 0x1f;
          }
          if ((uVar56 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar53 = (this_00->ActivePlayers).AllocatorInstance.Data + lVar64;
          TVar29.StatIdPtr = (TStatIdData *)StatPtr_STAT_TickAssetPlayerInstance;
          if (StatPtr_STAT_TickAssetPlayerInstance ==
              (FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstance>)0x0) {
            pFVar32 = ::FName::FName(&local_818,"STAT_TickAssetPlayerInstance");
            TVar29.StatIdPtr =
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickAssetPlayerInstance,
                            *pFVar32,L"TickAssetPlayerInstance","STATGROUP_Anim","STATCAT_Advanced",
                            L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
          }
          local_9d8 = 0xa9;
          pcStack_9d0 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
          ;
          uStack_9d4 = 6;
          local_898._Line = 0xa9;
          local_898._Column = 6;
          local_9c8 = 
          "void __cdecl UE::Anim::FAnimSync::TickAssetPlayerInstances(struct FAnimInstanceProxy &,float)"
          ;
          local_d90.StatId.ComparisonIndex.Value = 0;
          local_d90.StatId.Number = 0;
          local_d90.EmittedEvent = 0;
          local_898._File =
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
          ;
          local_898._Function =
               "void __cdecl UE::Anim::FAnimSync::TickAssetPlayerInstances(struct FAnimInstanceProxy &,float)"
          ;
          FCycleCounter::Start
                    (&local_d90,TVar29,CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_898
                    );
          pUVar7 = *(UObjectBaseUtility **)pFVar53;
          local_da0.StatId.ComparisonIndex.Value = 0;
          local_da0.StatId.Number = 0;
          local_da0.EmittedEvent = 0;
          if (pUVar7 != (UObjectBaseUtility *)0x0) {
            pFVar33 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
            FVar34 = StatPtr_STAT_UObjectsStatGroupTester;
            if (StatPtr_STAT_UObjectsStatGroupTester ==
                (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
              pFVar32 = ::FName::FName(&local_860,"STAT_UObjectsStatGroupTester");
              FVar34 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester
                                  ,*pFVar32,L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                                  "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            if ((((int)*(undefined8 *)FVar34 == 0) &&
                ((int)((ulonglong)*(undefined8 *)FVar34 >> 0x20) == 0)) ||
               (FThreadStats::bPrimaryEnable == false)) {
              pTVar48 = &TStatId::TStatId_NAME_None;
            }
            else {
              TVar9 = ((pFVar33->StatID).StatIdPtr)->Name;
              if ((TVar9._0_4_ == 0) && (TVar9._4_4_ == 0)) {
                pFVar39 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
                FUObjectItem::CreateStatID(pFVar39);
              }
              pTVar48 = (pFVar33->StatID).StatIdPtr;
            }
            if (((SUB84(pTVar48->Name,0) == 0) && (SUB84(pTVar48->Name,4) == 0)) ||
               (FThreadStats::bPrimaryEnable == false)) {
              if (-1 < CpuChannel->Enabled) {
                FScopeCycleCounterUObject::StartObjectTrace
                          ((FScopeCycleCounterUObject *)&local_da0,pUVar7);
              }
            }
            else {
              local_c08 = 0x3d8;
              pcStack_c00 = 
              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
              ;
              uStack_c04 = 6;
              local_858._Line = 0x3d8;
              local_858._Column = 6;
              local_bf8 = 
              "__cdecl FScopeCycleCounterUObject::FScopeCycleCounterUObject(const class UObjectBaseUtility *)"
              ;
              local_858._Function =
                   "__cdecl FScopeCycleCounterUObject::FScopeCycleCounterUObject(const class UObjectBaseUtility *)"
              ;
              local_858._File =
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
              ;
              FCycleCounter::Start
                        (&local_da0,(TStatId)pTVar48,None,false,(FSourceLocation *)&local_858);
            }
          }
          if (pFVar53[0x1f] == (FScriptContainerElement)0x0) {
            if ((((pFVar53[0x1e] != (FScriptContainerElement)0x0) &&
                 (pFVar31 != (FAnimGroupInstance *)0x0)) &&
                (iVar42 = (pFVar31->ActivePlayers).ArrayNum, iVar42 != 0)) &&
               ((local_310 == '\0' || ((pFVar31->ValidMarkers).ArrayNum < 1)))) {
              uVar52 = pFVar31->GroupLeaderIndex;
              uVar56 = 0;
              if ((int)uVar52 < iVar42) {
                uVar56 = ~uVar52 >> 0x1f;
              }
              if ((uVar56 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar8 = (pFVar31->ActivePlayers).AllocatorInstance.Data +
                       (longlong)(int)uVar52 * 0x78 + 0x74;
              local_30d = (FScriptContainerElement)
                          (*(float *)(pFVar53 + 0x74) < *(float *)pFVar8 ||
                          *(float *)(pFVar53 + 0x74) == *(float *)pFVar8);
            }
          }
          else if (pFVar31 != (FAnimGroupInstance *)0x0) {
            iVar42 = pFVar31->GroupLeaderIndex;
            if ((-1 < iVar42) && (iVar42 < (pFVar31->ActivePlayers).ArrayNum)) {
              pFVar8 = (pFVar31->ActivePlayers).AllocatorInstance.Data;
              lVar45 = (longlong)iVar42 * 0x78;
              if ((local_310 == '\0') || ((pFVar31->ValidMarkers).ArrayNum == 0)) {
                local_30d = (FScriptContainerElement)0x0;
              }
              else if (((*(longlong *)(pFVar8 + lVar45 + 0x68) != *(longlong *)(pFVar53 + 0x68)) ||
                       (*(longlong *)(pFVar8 + lVar45 + 0x60) != *(longlong *)(pFVar53 + 0x60))) ||
                      (*(longlong *)(pFVar8 + lVar45) != *(longlong *)pFVar53)) {
                local_ae8 = 0;
                uStack_ae0 = 0;
                local_ad8 = 0;
                local_360.MarkerSyncStartPostion.PreviousMarkerName.ComparisonIndex.Value = 0;
                local_360.MarkerSyncStartPostion.PreviousMarkerName.Number = 0;
                local_360.MarkerSyncStartPostion.NextMarkerName.ComparisonIndex.Value = 0;
                local_360.MarkerSyncStartPostion.NextMarkerName.Number = 0;
                local_360.MarkerSyncStartPostion.PositionBetweenMarkers = 0.0;
              }
            }
          }
          uVar24 = local_360.MarkersPassedThisTick._8_8_;
          iVar42 = local_360.MarkersPassedThisTick.ArrayMax;
          local_360.MarkersPassedThisTick._8_8_ =
               (ulonglong)(uint)local_360.MarkersPassedThisTick.ArrayMax << 0x20;
          if (((longlong)uVar24 < 0) && (iVar42 != 0)) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)&local_360,0,
                       &local_360.MarkersPassedThisTick.ArrayMax);
          }
          local_3d8 = '\0';
          local_3d4 = 0;
          (**(code **)(**(longlong **)pFVar53 + 0x2b0))
                    (*(longlong **)pFVar53,pFVar53,&param_1->NotifyQueue);
          if ((local_d68 == RootMotionFromEverything) && (local_3d8 != '\0')) {
            if (*(longlong *)(pFVar53 + 0x28) == 0) {
              pTVar49 = &local_3c8;
            }
            else {
              dVar17 = local_3c8.Rotation.XY.m128d_f64[0];
              dVar18 = local_3c8.Rotation.XY.m128d_f64[1];
              dVar19 = local_3c8.Rotation.ZW.m128d_f64[0];
              dVar20 = local_3c8.Rotation.ZW.m128d_f64[1];
              dVar21 = local_3c8.Scale3D.XY.m128d_f64[0];
              dVar22 = local_3c8.Scale3D.XY.m128d_f64[1];
              dVar23 = local_3c8.Scale3D.ZW.m128d_f64[0];
              local_b38._s_0.X = local_3c8.Translation.XY.m128d_f64[0];
              local_b38._s_0.Y = local_3c8.Translation.XY.m128d_f64[1];
              local_b38._s_0.Z = local_3c8.Translation.ZW.m128d_f64[0];
              local_458 = local_3c8.Translation.XY.m128d_f64[0];
              dStack_450 = local_3c8.Translation.XY.m128d_f64[1];
              local_448 = local_3c8.Translation.ZW.m128d_f64[0];
              dStack_440 = local_3c8.Translation.ZW.m128d_f64[1];
              pTVar35 = FAnimationRuntime::MirrorVector
                                  (&local_4a8,(TVector<double> *)&local_b38._s_0,
                                   (uint)*(byte *)(*(longlong *)(pFVar53 + 0x28) + 200));
              local_b38._s_0.X = (double)*(undefined8 *)&pTVar35->field0_0x0;
              local_b38._s_0.Y = *(double *)((longlong)&pTVar35->field0_0x0 + 8);
              local_b38._s_0.Z = (pTVar35->field0_0x0)._s_0.Z;
              local_948.X = dVar17;
              local_948.Y = dVar18;
              local_948.Z = dVar19;
              local_948.W = dVar20;
              pTVar36 = FAnimationRuntime::MirrorQuat
                                  (&local_3f8,&local_948,
                                   (uint)*(byte *)(*(longlong *)(pFVar53 + 0x28) + 200));
              pTVar49 = &local_668;
              local_798 = dVar21;
              dStack_790 = dVar22;
              local_948.X = pTVar36->X;
              local_948.Y = pTVar36->Y;
              local_948.Z = pTVar36->Z;
              local_948.W = pTVar36->W;
              local_668.Translation.XY.m128d_f64[1]._0_4_ = SUB84(local_b38._s_0.Y,0);
              local_668.Translation.XY.m128d_f64[1]._4_4_ =
                   (undefined4)((ulonglong)local_b38._8_8_ >> 0x20);
              local_668.Translation.XY.m128d_f64[0]._0_4_ = local_b38._0_4_;
              local_668.Translation.XY.m128d_f64[0]._4_4_ = local_b38._4_4_;
              local_668.Translation.ZW.m128d_f64[0] = local_b38._s_0.Z;
              local_668.Translation.ZW.m128d_f64[1] = 0.0;
              local_668.Scale3D.ZW.m128d_f64[0] = dVar23;
              local_668.Scale3D.ZW.m128d_f64[1] = 0.0;
              local_788 = dVar23;
              local_668.Scale3D.XY.m128d_f64[0] = dVar21;
              local_668.Scale3D.XY.m128d_f64[1] = dVar22;
              local_668.Rotation.XY.m128d_f64[0] = local_948.X;
              local_668.Rotation.XY.m128d_f64[1] = local_948.Y;
              local_668.Rotation.ZW.m128d_f64[0] = local_948.Z;
              local_668.Rotation.ZW.m128d_f64[1] = local_948.W;
            }
            FRootMotionMovementParams::AccumulateWithBlend
                      (&local_d40->ExtractedRootMotion,pTVar49,
                       *(float *)(pFVar53 + 0x18) * *(float *)(pFVar53 + 0x14));
          }
          FVar47.Data = local_360.MarkersPassedThisTick.AllocatorInstance.Data;
          uVar56 = local_d80;
          if (local_310 == '\0') {
            pFVar28[0xf].ComparisonIndex.Value = local_31c._4_4_;
            pFVar28[0xf].Number = (uint)local_314;
            pFVar28[3].ComparisonIndex.Value = local_d80;
LAB_14757e34d:
            if ((local_da0.EmittedEvent & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_da0.EmittedEvent & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((local_da0.EmittedEvent & 4) != 0) {
              FThreadStats::AddMessage(local_da0.StatId,CycleScopeEnd);
            }
            local_da0.EmittedEvent = '\0';
            if ((local_d90.EmittedEvent & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_d90.EmittedEvent & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((local_d90.EmittedEvent & 4) != 0) {
              FThreadStats::AddMessage(local_d90.StatId,CycleScopeEnd);
            }
            break;
          }
          local_b70 = 0;
          if ((CONCAT44(local_360.MarkerSyncEndPostion.PreviousMarkerName.Number,
                        local_360.MarkerSyncEndPostion.PreviousMarkerName.ComparisonIndex.Value) !=
               0) && (local_b78 = 0,
                     CONCAT44(local_360.MarkerSyncEndPostion.NextMarkerName.Number,
                              local_360.MarkerSyncEndPostion.NextMarkerName.ComparisonIndex.Value)
                     != 0)) {
            this_01 = (FMarkerTickContext *)(pFVar28 + 7);
            pFVar28[0xf].ComparisonIndex.Value = local_31c._4_4_;
            pFVar28[0xf].Number = (uint)local_314;
            if (this_01 != &local_360) {
              iVar42 = local_360.MarkersPassedThisTick.ArrayNum;
              lVar64 = (longlong)local_360.MarkersPassedThisTick.ArrayNum;
              puVar1 = &pFVar28[8].Number;
              uVar52 = *puVar1;
              pFVar28[8].ComparisonIndex.Value = local_360.MarkersPassedThisTick.ArrayNum;
              if ((local_360.MarkersPassedThisTick.ArrayNum == 0) && (uVar52 == 0)) {
                *puVar1 = 0;
              }
              else {
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,local_360.MarkersPassedThisTick.ArrayNum,uVar52,
                           (ForAnyElementType *)this_01,local_360.MarkersPassedThisTick.ArrayNum,
                           (int *)puVar1);
                if (iVar42 != 0) {
                  memcpy((this_01->MarkersPassedThisTick).AllocatorInstance.Data,FVar47.Data,
                         lVar64 * 0xc);
                }
              }
            }
            uVar56 = local_d80;
            pFVar28[9] = local_360.MarkerSyncStartPostion.PreviousMarkerName;
            pFVar28[10] = local_360.MarkerSyncStartPostion.NextMarkerName;
            pFVar28[0xb].ComparisonIndex.Value =
                 (uint)local_360.MarkerSyncStartPostion.PositionBetweenMarkers;
            *(ulonglong *)&pFVar28[0xb].Number =
                 CONCAT44(local_360.MarkerSyncEndPostion.PreviousMarkerName.Number,
                          local_360.MarkerSyncEndPostion.PreviousMarkerName.ComparisonIndex.Value);
            *(ulonglong *)&pFVar28[0xc].Number =
                 CONCAT44(local_360.MarkerSyncEndPostion.NextMarkerName.Number,
                          local_360.MarkerSyncEndPostion.NextMarkerName.ComparisonIndex.Value);
            pFVar28[0xd].Number = (uint)local_360.MarkerSyncEndPostion.PositionBetweenMarkers;
            pFVar28[0xe] = (FName)local_360.ValidMarkers;
            pFVar28[3].ComparisonIndex.Value = local_d80;
            if (4 < (byte)LogAnimMarkerSync._0_1_) {
              FMarkerTickContext::ToString(this_01,&local_8f8);
              Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
              if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
              }
              if (4 < (byte)LogAnimMarkerSync._0_1_) {
                FMarkerTickContext::ToString(&local_360,&local_8e8);
                Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
                if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
                }
              }
            }
            goto LAB_14757e34d;
          }
          pFVar28[0xf].ComparisonIndex.Value = local_31c._4_4_;
          pFVar28[0xf].Number = (uint)local_314;
          pFVar28[3].ComparisonIndex.Value = local_d80;
          if (4 < (byte)LogAnimMarkerSync._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
          }
          if ((local_da0.EmittedEvent & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_da0.EmittedEvent & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_da0.EmittedEvent & 4) != 0) {
            FThreadStats::AddMessage(local_da0.StatId,CycleScopeEnd);
          }
          local_da0.EmittedEvent = '\0';
          if ((local_d90.EmittedEvent & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_d90.EmittedEvent & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_d90.EmittedEvent & 4) != 0) {
            FThreadStats::AddMessage(local_d90.StatId,CycleScopeEnd);
          }
          uVar56 = uVar56 + 1;
          uVar52 = pFVar28[2].ComparisonIndex.Value;
          local_d48 = local_d48 + 1;
          lVar64 = lVar64 + 0x78;
          local_d90.EmittedEvent = '\0';
          local_d80 = uVar56;
        } while ((int)uVar56 < (int)uVar52);
        local_d90.EmittedEvent = '\0';
        pFVar32 = local_d18;
      }
      lVar64 = local_d48;
      if ((pFVar28[3].ComparisonIndex.Value == 0xffffffff) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("SyncGroup.GroupLeaderIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
                              ,0x103,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FAnimGroupInstance::Finalize(this_00,pFVar31);
      pFVar16 = local_bc8;
      uVar52 = pFVar28[2].ComparisonIndex.Value;
      uVar60 = uVar56 + 1;
      if ((int)uVar60 < (int)uVar52) {
        lVar64 = (lVar64 + 1) * 0x78;
        do {
          uVar56 = 0;
          if ((int)uVar60 < (int)uVar52) {
            uVar56 = ~uVar60 >> 0x1f;
          }
          if ((uVar56 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((this_00->ActivePlayers).AllocatorInstance.Data[lVar64 + 0x20] !=
              (FScriptContainerElement)0x0) {
            pTVar54 = pFVar16->UngroupedActivePlayerArrays + pFVar16->SyncGroupWriteIndex;
            uVar52 = 0;
            if ((int)uVar60 < (int)pFVar28[2].ComparisonIndex.Value) {
              uVar52 = ~uVar60 >> 0x1f;
            }
            if ((uVar52 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar55 = (FAnimTickRecord *)(pTVar54->AllocatorInstance).Data;
            pFVar59 = (FAnimTickRecord *)
                      ((this_00->ActivePlayers).AllocatorInstance.Data +
                      (longlong)(int)uVar60 * 0x78);
            if (((pFVar55 <= pFVar59) && (pFVar59 < pFVar55 + pTVar54->ArrayMax)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar42 = pTVar54->ArrayNum;
            if (iVar42 == pTVar54->ArrayMax) {
              iVar42 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,&pTVar54->AllocatorInstance,&pTVar54->ArrayMax);
            }
            pTVar54->ArrayNum = iVar42 + 1;
            FAnimTickRecord::FAnimTickRecord
                      ((FAnimTickRecord *)
                       ((pTVar54->AllocatorInstance).Data + (longlong)iVar42 * 0x78),pFVar59);
          }
          uVar52 = pFVar28[2].ComparisonIndex.Value;
          uVar60 = uVar60 + 1;
          lVar64 = lVar64 + 0x78;
          pFVar32 = local_d18;
          uVar56 = local_d80;
        } while ((int)uVar60 < (int)uVar52);
      }
      uVar60 = 0;
      if (local_310 != '\0') {
        uVar27 = pFVar28[3].ComparisonIndex.Value;
        local_ba0 = *pFVar32;
        uVar63 = 0;
        uVar26 = uVar63;
        if ((int)uVar27 < (int)uVar52) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_ab0 = *(FName *)(*(longlong *)
                                ((this_00->ActivePlayers).AllocatorInstance.Data +
                                (longlong)(int)uVar27 * 0x78) + 0x18);
        ::FName::ToString(&local_ab0,&local_b88);
        local_b90 = 0;
        if (local_360.MarkerSyncStartPostion.PreviousMarkerName == (FName)0x0) {
LAB_14757e654:
          bVar25 = true;
        }
        else {
          FVar46 = pFVar28[4];
          FVar4 = (FName)((longlong)FVar46 + (longlong)(int)pFVar28[5].ComparisonIndex.Value * 8);
          for (; FVar46 != FVar4; FVar46 = (FName)((longlong)FVar46 + 8)) {
            if (*(FName *)FVar46 == local_360.MarkerSyncStartPostion.PreviousMarkerName)
            goto LAB_14757e654;
          }
          bVar25 = false;
        }
        local_b98 = 0;
        if (local_360.MarkerSyncStartPostion.NextMarkerName == (FName)0x0) {
LAB_14757e697:
          bVar13 = true;
        }
        else {
          FVar46 = pFVar28[4];
          FVar4 = (FName)((longlong)FVar46 + (longlong)(int)pFVar28[5].ComparisonIndex.Value * 8);
          for (; FVar46 != FVar4; FVar46 = (FName)((longlong)FVar46 + 8)) {
            if (*(FName *)FVar46 == local_360.MarkerSyncStartPostion.NextMarkerName)
            goto LAB_14757e697;
          }
          bVar13 = false;
        }
        if (bVar25) {
          if (!bVar13) {
            ::FString::FString(&local_c18,L"Next Marker name not valid for sync group.\n");
            pFVar37 = ::FName::ToString(&local_360.MarkerSyncStartPostion.NextMarkerName,&local_588)
            ;
            FStringFormatArg::FStringFormatArg(&local_1d8,pFVar37);
            pFVar37 = ::FName::ToString(&local_ba0,&local_578);
            FStringFormatArg::FStringFormatArg(&local_1b8,pFVar37);
            local_988.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                      (&local_988,(wchar_t *)local_b88.Data.AllocatorInstance.Data,
                       local_b88.Data.ArrayNum,0);
            FStringFormatArg::FStringFormatArg(&local_198,(FString *)&local_988);
            local_cb8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_cb8.ArrayNum = 3;
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,3,0,&local_cb8.AllocatorInstance,3,&local_cb8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_cb8.AllocatorInstance.Data,&local_1d8,3);
            ::FString::FormatImpl
                      (&local_a40,L"\tMarker {0} : SyncGroupName {1} : Leader {2}\n",&local_cb8);
            uVar52 = uVar63;
            if (local_a40.Data.ArrayNum != 0) {
              uVar52 = local_a40.Data.ArrayNum - 1;
            }
            ::FString::AppendChars
                      (&local_c18,(wchar_t *)local_a40.Data.AllocatorInstance.Data,uVar52);
            if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a40.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_cb8.AllocatorInstance.Data,local_cb8.ArrayNum);
            if ((FStringFormatArg *)local_cb8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_cb8.AllocatorInstance.Data);
            }
            if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_1b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_1b8.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_1d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_1d8.StringValue.Data.AllocatorInstance.Data);
            }
            pFVar37 = ::FName::ToString(&local_ba8,&local_568);
            FStringFormatArg::FStringFormatArg(&local_178,pFVar37);
            pFVar37 = ::FName::ToString(&local_bb0,&local_558);
            FStringFormatArg::FStringFormatArg(&local_158,pFVar37);
            FStringFormatArg::FStringFormatArg(&local_138,uVar56);
            local_cc8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_cc8.ArrayNum = 3;
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,3,0,&local_cc8.AllocatorInstance,3,&local_cc8.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_cc8.AllocatorInstance.Data,&local_178,3);
            ::FString::FormatImpl
                      (&local_a30,L"\tInitalPrev {0} : InitialNext {1} : GroupLeaderIndex {2}\n",
                       &local_cc8);
            uVar52 = uVar63;
            if (local_a30.Data.ArrayNum != 0) {
              uVar52 = local_a30.Data.ArrayNum - 1;
            }
            ::FString::AppendChars
                      (&local_c18,(wchar_t *)local_a30.Data.AllocatorInstance.Data,uVar52);
            if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a30.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_cc8.AllocatorInstance.Data,local_cc8.ArrayNum);
            if ((FStringFormatArg *)local_cc8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_cc8.AllocatorInstance.Data);
            }
            if (local_138.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_138.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_158.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
            }
            FStringFormatArg::FStringFormatArg(&local_6e8,local_d50);
            ::FString::PrintfImpl
                      (&local_8c8,
                       L"[PreviousMarker Index/Time %i/%.2f, NextMarker Index/Time %i/%.2f]");
            FStringFormatArg::FStringFormatArg(&local_6c8,&local_8c8);
            local_c58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c58.ArrayNum = 2;
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_c58.AllocatorInstance,2,&local_c58.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_c58.AllocatorInstance.Data,&local_6e8,2);
            ::FString::FormatImpl
                      (&local_a20,L"\tLeader (0 index) was originally valid: {0} | Record: {1}\n",
                       &local_c58);
            if (local_a20.Data.ArrayNum != 0) {
              uVar63 = local_a20.Data.ArrayNum - 1;
            }
            ::FString::AppendChars
                      (&local_c18,(wchar_t *)local_a20.Data.AllocatorInstance.Data,uVar63);
            if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a20.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_c58.AllocatorInstance.Data,local_c58.ArrayNum);
            if ((FStringFormatArg *)local_c58.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_c58.AllocatorInstance.Data);
            }
            if (local_6c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_6c8.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_6e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_6e8.StringValue.Data.AllocatorInstance.Data);
            }
            FStringFormatArg::FStringFormatArg(&local_7b8,pFVar28[5].ComparisonIndex.Value);
            local_c48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c48.ArrayNum = 1;
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_c48.AllocatorInstance,1,&local_c48.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_c48.AllocatorInstance.Data,&local_7b8,1);
            ::FString::FormatImpl(&local_a10,L"\t Valid Markers : {0}\n",&local_c48);
            uVar52 = uVar60;
            if (local_a10.Data.ArrayNum != 0) {
              uVar52 = local_a10.Data.ArrayNum - 1;
            }
            ::FString::AppendChars
                      (&local_c18,(wchar_t *)local_a10.Data.AllocatorInstance.Data,uVar52);
            if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a10.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_c48.AllocatorInstance.Data,local_c48.ArrayNum);
            if ((FStringFormatArg *)local_c48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_c48.AllocatorInstance.Data);
            }
            if (local_7b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_7b8.StringValue.Data.AllocatorInstance.Data);
            }
            uVar52 = uVar60;
            if (0 < (int)pFVar28[5].ComparisonIndex.Value) {
              do {
                FStringFormatArg::FStringFormatArg(&local_6a8,uVar52);
                uVar27 = 0;
                if ((int)uVar52 < (int)pFVar28[5].ComparisonIndex.Value) {
                  uVar27 = ~uVar52 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar37 = ::FName::ToString((FName *)((longlong)pFVar28[4] +
                                                     (longlong)(int)uVar52 * 8),&local_548);
                FStringFormatArg::FStringFormatArg(&local_688,pFVar37);
                local_cd8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_cd8.ArrayNum = 2;
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,2,0,&local_cd8.AllocatorInstance,2,&local_cd8.ArrayMax);
                ConstructItems<FStringFormatArg,FStringFormatArg,int>
                          (local_cd8.AllocatorInstance.Data,&local_6a8,2);
                ::FString::FormatImpl(&local_a00,L"\t\t{0}) \'{1}\'\n",&local_cd8);
                uVar27 = uVar60;
                if (local_a00.Data.ArrayNum != 0) {
                  uVar27 = local_a00.Data.ArrayNum - 1;
                }
                ::FString::AppendChars
                          (&local_c18,(wchar_t *)local_a00.Data.AllocatorInstance.Data,uVar27);
                if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a00.Data.AllocatorInstance.Data);
                }
                DestructItems<FStringFormatArg,int>
                          ((FStringFormatArg *)local_cd8.AllocatorInstance.Data,local_cd8.ArrayNum);
                if ((FStringFormatArg *)local_cd8.AllocatorInstance.Data != (FStringFormatArg *)0x0)
                {
                  FMemory::Free(local_cd8.AllocatorInstance.Data);
                }
                if (local_688.StringValue.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_688.StringValue.Data.AllocatorInstance.Data);
                }
                if (local_6a8.StringValue.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6a8.StringValue.Data.AllocatorInstance.Data);
                }
                uVar52 = uVar52 + 1;
              } while ((int)uVar52 < (int)pFVar28[5].ComparisonIndex.Value);
            }
            local_aa0 = &local_c18;
            `UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l151::<lambda_4>::operator()
                      (&local_aa0);
            FVar47.Data = local_c18.Data.AllocatorInstance.Data;
            goto LAB_14757f40c;
          }
        }
        else {
          ::FString::FString(&local_c28,L"Prev Marker name not valid for sync group.\n");
          pFVar37 = ::FName::ToString(&local_360.MarkerSyncStartPostion.PreviousMarkerName,
                                      &local_4c8);
          FStringFormatArg::FStringFormatArg(&local_118,pFVar37);
          pFVar37 = ::FName::ToString(&local_ba0,&local_4d8);
          FStringFormatArg::FStringFormatArg(&local_f8,pFVar37);
          local_978.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                    (&local_978,(wchar_t *)local_b88.Data.AllocatorInstance.Data,
                     local_b88.Data.ArrayNum,0);
          FStringFormatArg::FStringFormatArg(&local_d8,(FString *)&local_978);
          local_c78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c78.ArrayNum = 3;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_c78.AllocatorInstance,3,&local_c78.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_c78.AllocatorInstance.Data,&local_118,3);
          ::FString::FormatImpl
                    (&local_a90,L"\tMarker {0} : SyncGroupName {1} : Leader {2}\n",&local_c78);
          uVar52 = uVar63;
          if (local_a90.Data.ArrayNum != 0) {
            uVar52 = local_a90.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_c28,(wchar_t *)local_a90.Data.AllocatorInstance.Data,uVar52)
          ;
          if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a90.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_c78.AllocatorInstance.Data,local_c78.ArrayNum);
          if ((FStringFormatArg *)local_c78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_c78.AllocatorInstance.Data);
          }
          if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_f8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_118.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.StringValue.Data.AllocatorInstance.Data);
          }
          pFVar37 = ::FName::ToString(&local_ba8,&local_4b8);
          FStringFormatArg::FStringFormatArg(&local_238,pFVar37);
          pFVar37 = ::FName::ToString(&local_bb0,&local_5a8);
          FStringFormatArg::FStringFormatArg(&local_218,pFVar37);
          FStringFormatArg::FStringFormatArg(&local_1f8,uVar56);
          local_c88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c88.ArrayNum = 3;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_c88.AllocatorInstance,3,&local_c88.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_c88.AllocatorInstance.Data,&local_238,3);
          ::FString::FormatImpl
                    (&local_a80,L"\tInitalPrev {0} : InitialNext {1} : GroupLeaderIndex {2}\n",
                     &local_c88);
          uVar52 = uVar63;
          if (local_a80.Data.ArrayNum != 0) {
            uVar52 = local_a80.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_c28,(wchar_t *)local_a80.Data.AllocatorInstance.Data,uVar52)
          ;
          if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a80.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_c88.AllocatorInstance.Data,local_c88.ArrayNum);
          if ((FStringFormatArg *)local_c88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_c88.AllocatorInstance.Data);
          }
          if (local_1f8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_218.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_238.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.StringValue.Data.AllocatorInstance.Data);
          }
          FStringFormatArg::FStringFormatArg(&local_768,local_d4c);
          ::FString::PrintfImpl
                    (&local_8d8,
                     L"[PreviousMarker Index/Time %i/%.2f, NextMarker Index/Time %i/%.2f]");
          FStringFormatArg::FStringFormatArg(&local_748,&local_8d8);
          local_ce8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_ce8.ArrayNum = 2;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_ce8.AllocatorInstance,2,&local_ce8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_ce8.AllocatorInstance.Data,&local_768,2);
          ::FString::FormatImpl
                    (&local_a70,L"\tLeader (0 index) was originally valid: {0} | Record: {1}\n",
                     &local_ce8);
          if (local_a70.Data.ArrayNum != 0) {
            uVar63 = local_a70.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_c28,(wchar_t *)local_a70.Data.AllocatorInstance.Data,uVar63)
          ;
          if (local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a70.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_ce8.AllocatorInstance.Data,local_ce8.ArrayNum);
          if ((FStringFormatArg *)local_ce8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_ce8.AllocatorInstance.Data);
          }
          if (local_748.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_748.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_768.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_768.StringValue.Data.AllocatorInstance.Data);
          }
          FStringFormatArg::FStringFormatArg(&local_7d8,pFVar28[5].ComparisonIndex.Value);
          local_c98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c98.ArrayNum = 1;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_c98.AllocatorInstance,1,&local_c98.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_c98.AllocatorInstance.Data,&local_7d8,1);
          ::FString::FormatImpl(&local_a60,L"\t Valid Markers : {0}\n",&local_c98);
          uVar52 = uVar60;
          if (local_a60.Data.ArrayNum != 0) {
            uVar52 = local_a60.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_c28,(wchar_t *)local_a60.Data.AllocatorInstance.Data,uVar52)
          ;
          if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a60.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_c98.AllocatorInstance.Data,local_c98.ArrayNum);
          if ((FStringFormatArg *)local_c98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_c98.AllocatorInstance.Data);
          }
          if (local_7d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7d8.StringValue.Data.AllocatorInstance.Data);
          }
          uVar52 = uVar60;
          if (0 < (int)pFVar28[5].ComparisonIndex.Value) {
            do {
              FStringFormatArg::FStringFormatArg(&local_728,uVar52);
              uVar27 = 0;
              if ((int)uVar52 < (int)pFVar28[5].ComparisonIndex.Value) {
                uVar27 = ~uVar52 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar37 = ::FName::ToString((FName *)((longlong)pFVar28[4] + (longlong)(int)uVar52 * 8
                                                   ),&local_598);
              FStringFormatArg::FStringFormatArg(&local_708,pFVar37);
              local_ca8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_ca8.ArrayNum = 2;
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,2,0,&local_ca8.AllocatorInstance,2,&local_ca8.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_ca8.AllocatorInstance.Data,&local_728,2);
              ::FString::FormatImpl(&local_a50,L"\t\t{0}) \'{1}\'\n",&local_ca8);
              uVar27 = uVar60;
              if (local_a50.Data.ArrayNum != 0) {
                uVar27 = local_a50.Data.ArrayNum - 1;
              }
              ::FString::AppendChars
                        (&local_c28,(wchar_t *)local_a50.Data.AllocatorInstance.Data,uVar27);
              if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a50.Data.AllocatorInstance.Data);
              }
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_ca8.AllocatorInstance.Data,local_ca8.ArrayNum);
              if ((FStringFormatArg *)local_ca8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_ca8.AllocatorInstance.Data);
              }
              if (local_708.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_708.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_728.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_728.StringValue.Data.AllocatorInstance.Data);
              }
              uVar52 = uVar52 + 1;
            } while ((int)uVar52 < (int)pFVar28[5].ComparisonIndex.Value);
          }
          local_aa8 = &local_c28;
          `UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l145::<lambda_3>::operator()
                    (&local_aa8);
          FVar47.Data = local_c28.Data.AllocatorInstance.Data;
LAB_14757f40c:
          local_310 = '\0';
          if (FVar47.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar47.Data);
          }
        }
        if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b88.Data.AllocatorInstance.Data);
        }
      }
      uVar52 = pFVar28[2].ComparisonIndex.Value;
      if ((int)(uVar56 + 1) < (int)uVar52) {
        uVar56 = uVar56 + 1;
        local_30f = 0;
        lVar64 = (local_d48 + 1) * 0x78;
        do {
          uVar60 = 0;
          if ((int)uVar56 < (int)uVar52) {
            uVar60 = ~uVar56 >> 0x1f;
          }
          if ((uVar60 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar53 = (this_00->ActivePlayers).AllocatorInstance.Data + lVar64;
          if (pFVar53[0x20] == (FScriptContainerElement)0x0) {
            FVar38 = StatPtr_STAT_TickAssetPlayerInstance;
            if (StatPtr_STAT_TickAssetPlayerInstance ==
                (FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstance>)0x0) {
              pFVar32 = ::FName::FName(&local_868,"STAT_TickAssetPlayerInstance");
              FVar38 = (FThreadSafeStaticStat<FStat_STAT_TickAssetPlayerInstance>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickAssetPlayerInstance
                                  ,*pFVar32,L"TickAssetPlayerInstance","STATGROUP_Anim",
                                  "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,
                                  MCR_Invalid);
            }
            local_d60.ComparisonIndex.Value = 0;
            local_d60.Number = 0;
            local_d58 = 0;
            FVar4 = *(FName *)FVar38;
            FVar57 = FVar4.ComparisonIndex.Value;
            uVar52 = FVar4.Number;
            if ((FVar57.Value != 0) || (uVar52 != 0)) {
              if (GCycleStatsShouldEmitNamedEvents != 0) {
                local_c38[0].Bits = 0;
                FGenericPlatformMisc::BeginNamedEvent
                          ((FColor *)&local_c38[0]._s_0,(char *)*(FName *)((longlong)FVar38 + 0x10))
                ;
                local_d58 = local_d58 | 1;
                if (-1 < CpuChannel->Enabled) {
                  local_bb8.ComparisonIndex.Value = FVar57.Value;
                  local_bb8.Number = uVar52;
                  FCpuProfilerTrace::OutputBeginDynamicEventWithId
                            (&local_bb8,(wchar_t *)*(FName *)((longlong)FVar38 + 8),
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSync.cpp"
                             ,0x156);
                  local_d58 = local_d58 | 2;
                }
              }
              if (FThreadStats::bPrimaryEnable != false) {
                local_d60 = FVar4;
                local_bc0 = FVar57.Value;
                uStack_bbc = uVar52;
                FThreadStats::AddMessage(FVar4,CycleScopeStart);
                local_d58 = local_d58 | 4;
              }
            }
            pUVar7 = *(UObjectBaseUtility **)pFVar53;
            local_d78.ComparisonIndex.Value = 0;
            local_d78.Number = 0;
            local_d70 = 0;
            if (pUVar7 != (UObjectBaseUtility *)0x0) {
              pFVar33 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
              FVar34 = StatPtr_STAT_UObjectsStatGroupTester;
              if (StatPtr_STAT_UObjectsStatGroupTester ==
                  (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
                pFVar32 = ::FName::FName(&local_870,"STAT_UObjectsStatGroupTester");
                FVar34 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_UObjectsStatGroupTester,*pFVar32,
                                    L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                                    "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,
                                    MCR_Invalid);
              }
              if ((((int)*(undefined8 *)FVar34 == 0) &&
                  ((int)((ulonglong)*(undefined8 *)FVar34 >> 0x20) == 0)) ||
                 (FThreadStats::bPrimaryEnable == false)) {
                pTVar48 = &TStatId::TStatId_NAME_None;
              }
              else {
                TVar9 = ((pFVar33->StatID).StatIdPtr)->Name;
                if ((TVar9._0_4_ == 0) && (TVar9._4_4_ == 0)) {
                  pFVar39 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
                  FUObjectItem::CreateStatID(pFVar39);
                }
                pTVar48 = (pFVar33->StatID).StatIdPtr;
              }
              if (((SUB84(pTVar48->Name,0) == 0) && (SUB84(pTVar48->Name,4) == 0)) ||
                 (FThreadStats::bPrimaryEnable == false)) {
                if (-1 < CpuChannel->Enabled) {
                  FScopeCycleCounterUObject::StartObjectTrace
                            ((FScopeCycleCounterUObject *)&local_d78,pUVar7);
                }
              }
              else {
                FVar4 = *(FName *)&pTVar48->Name;
                FVar57 = FVar4.ComparisonIndex.Value;
                uVar52 = FVar4.Number;
                if ((FVar57.Value != 0) || (uVar52 != 0)) {
                  if (GCycleStatsShouldEmitNamedEvents != 0) {
                    local_bd8[0].Bits = 0;
                    FGenericPlatformMisc::BeginNamedEvent
                              ((FColor *)&local_bd8[0]._s_0,(pTVar48->StatDescriptionAnsi).Ptr);
                    local_d70 = local_d70 | 1;
                    if (-1 < CpuChannel->Enabled) {
                      local_b40.ComparisonIndex.Value = FVar57.Value;
                      local_b40.Number = uVar52;
                      FCpuProfilerTrace::OutputBeginDynamicEventWithId
                                (&local_b40,(pTVar48->StatDescriptionWide).Ptr,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                 ,0x3d8);
                      local_d70 = local_d70 | 2;
                    }
                  }
                  if (FThreadStats::bPrimaryEnable != false) {
                    local_d78 = FVar4;
                    local_b68 = FVar57.Value;
                    uStack_b64 = uVar52;
                    FThreadStats::AddMessage(FVar4,CycleScopeStart);
                    local_d70 = local_d70 | 4;
                  }
                }
              }
            }
            local_30d = pFVar53[0x1e];
            local_3d8 = '\0';
            local_3d4 = 0;
            (**(code **)(**(longlong **)pFVar53 + 0x2b0))(*(longlong **)pFVar53,pFVar53);
            if ((local_d70 & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_d70 & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            FVar4 = local_d78;
            if (((((local_d70 & 4) != 0) && (local_d78 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_02 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_02 == (FThreadStats *)0x0) {
                this_03 = FThreadStatsPool::Get();
                this_02 = FThreadStatsPool::GetFromPool(this_03);
              }
              if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
                local_9f0.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
                local_9f0.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
                QueryPerformanceCounter(&local_a98);
                local_9f0.StatData.Pad[4] = '\0';
                local_9f0.StatData.Pad[5] = '\0';
                local_9f0.StatData.Pad[6] = '\0';
                local_9f0.StatData.Pad[7] = '\0';
                local_9f0.StatData.Pad[0] = local_a98.s.LowPart._0_1_;
                local_9f0.StatData.Pad[1] = local_a98.s.LowPart._1_1_;
                local_9f0.StatData.Pad[2] = local_a98.s.LowPart._2_1_;
                local_9f0.StatData.Pad[3] = local_a98.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(this_02,&local_9f0);
                piVar5 = &this_02->ScopeCount;
                *piVar5 = *piVar5 + -1;
                if (*piVar5 == 0) {
                  FThreadStats::Flush(this_02,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(this_02,false,false);
                }
              }
            }
            local_d70 = 0;
            if ((local_d58 & 1) != 0) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if ((local_d58 & 2) != 0) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((local_d58 & 4) != 0) {
              FThreadStats::AddMessage(local_d60,CycleScopeEnd);
            }
            local_d58 = 0;
            if ((local_d68 == RootMotionFromEverything) && (local_3d8 != '\0')) {
              if (*(longlong *)(pFVar53 + 0x28) == 0) {
                pTVar49 = &local_3c8;
              }
              else {
                dVar17 = local_3c8.Rotation.XY.m128d_f64[0];
                dVar18 = local_3c8.Rotation.XY.m128d_f64[1];
                dVar19 = local_3c8.Rotation.ZW.m128d_f64[0];
                dVar20 = local_3c8.Rotation.ZW.m128d_f64[1];
                dVar21 = local_3c8.Scale3D.XY.m128d_f64[0];
                dVar22 = local_3c8.Scale3D.XY.m128d_f64[1];
                dVar23 = local_3c8.Scale3D.ZW.m128d_f64[0];
                local_d08._0_8_ = local_3c8.Translation.XY.m128d_f64[0];
                local_d08._8_8_ = local_3c8.Translation.XY.m128d_f64[1];
                local_cf8 = (char *)local_3c8.Translation.ZW.m128d_f64[0];
                local_458 = local_3c8.Translation.XY.m128d_f64[0];
                dStack_450 = local_3c8.Translation.XY.m128d_f64[1];
                local_448 = local_3c8.Translation.ZW.m128d_f64[0];
                dStack_440 = local_3c8.Translation.ZW.m128d_f64[1];
                pTVar35 = FAnimationRuntime::MirrorVector
                                    (local_490,(TVector<double> *)local_d08,
                                     (uint)*(byte *)(*(longlong *)(pFVar53 + 0x28) + 200));
                local_d08._0_8_ = *(undefined8 *)&pTVar35->field0_0x0;
                local_d08._8_8_ = *(undefined8 *)((longlong)&pTVar35->field0_0x0 + 8);
                local_cf8 = (char *)(pTVar35->field0_0x0)._s_0.Z;
                local_928.X = dVar17;
                local_928.Y = dVar18;
                local_928.Z = dVar19;
                local_928.W = dVar20;
                pTVar36 = FAnimationRuntime::MirrorQuat
                                    (&local_b18,&local_928,
                                     (uint)*(byte *)(*(longlong *)(pFVar53 + 0x28) + 200));
                pTVar49 = &local_608;
                local_780 = dVar21;
                dStack_778 = dVar22;
                local_928.X = pTVar36->X;
                local_928.Y = pTVar36->Y;
                local_928.Z = pTVar36->Z;
                local_928.W = pTVar36->W;
                local_608.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)local_d08._8_8_;
                local_608.Translation.XY.m128d_f64[1]._4_4_ = SUB84(local_d08._8_8_,4);
                local_608.Translation.XY.m128d_f64[0]._0_4_ = local_d08._0_4_;
                local_608.Translation.XY.m128d_f64[0]._4_4_ = local_d08._4_4_;
                local_608.Translation.ZW.m128d_f64[0] = (double)local_cf8;
                local_608.Translation.ZW.m128d_f64[1] = 0.0;
                local_608.Scale3D.ZW.m128d_f64[0] = dVar23;
                local_608.Scale3D.ZW.m128d_f64[1] = 0.0;
                local_770 = dVar23;
                local_608.Scale3D.XY.m128d_f64[0] = dVar21;
                local_608.Scale3D.XY.m128d_f64[1] = dVar22;
                local_608.Rotation.XY.m128d_f64[0] = local_928.X;
                local_608.Rotation.XY.m128d_f64[1] = local_928.Y;
                local_608.Rotation.ZW.m128d_f64[0] = local_928.Z;
                local_608.Rotation.ZW.m128d_f64[1] = local_928.W;
              }
              FRootMotionMovementParams::AccumulateWithBlend
                        (&local_d40->ExtractedRootMotion,pTVar49,
                         *(float *)(pFVar53 + 0x18) * *(float *)(pFVar53 + 0x14));
            }
          }
          uVar52 = pFVar28[2].ComparisonIndex.Value;
          uVar56 = uVar56 + 1;
          lVar64 = lVar64 + 0x78;
        } while ((int)uVar56 < (int)uVar52);
      }
      param_1 = local_bd0;
      iVar42 = local_360.MarkersPassedThisTick.ArrayNum;
      uVar50 = (ulonglong)local_360.MarkersPassedThisTick.ArrayNum;
      pFVar2 = (FPassedMarker *)
               (local_360.MarkersPassedThisTick.AllocatorInstance.Data + uVar50 * 0xc);
      FVar47.Data = local_360.MarkersPassedThisTick.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar50 != iVar42) {
          local_da7 = 0;
          `TCheckedPointerIterator<FPassedMarker,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_da7);
        }
        if ((FPassedMarker *)FVar47.Data == pFVar2) break;
        pUVar10 = (UAnimInstance *)param_1->AnimInstanceObject;
        if (pUVar10 == (UAnimInstance *)0x0) {
          pFVar37 = GetTypeName<UAnimInstance>(&local_4e8);
          if ((pFVar37->Data).ArrayNum == 0) {
            pwVar65 = L"";
          }
          else {
            pwVar65 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar65);
        }
        pUVar40 = Z_Construct_UClass_UAnimInstance_NoRegister();
        iVar3 = (int)pUVar40->_padding_;
        if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar40->_padding_)) {
          pFVar37 = GetTypeName<UAnimInstance>(&local_508);
          pwVar65 = L"";
          if ((pFVar37->Data).ArrayNum == 0) {
            pwVar62 = L"";
          }
          else {
            pwVar62 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
          }
          pFVar37 = GetFullNameForCastLogError<UObject>(&local_4f8,(UObject *)pUVar10);
          if ((pFVar37->Data).ArrayNum != 0) {
            pwVar65 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar65,pwVar62);
        }
        FAnimTrace::OutputAnimSyncMarker(pUVar10,(FPassedMarker *)FVar47.Data);
        uVar50 = local_360.MarkersPassedThisTick._8_8_ & 0xffffffff;
        FVar47.Data = FVar47.Data + 0xc;
      }
      if ((FPassedMarker *)local_360.MarkersPassedThisTick.AllocatorInstance.Data !=
          (FPassedMarker *)0x0) {
        FMemory::Free(local_360.MarkersPassedThisTick.AllocatorInstance.Data);
      }
    }
    stack0xfffffffffffff660 = (double)CONCAT44(iStack_99c,auStack_9b0._16_4_ & ~auStack_9b0._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_9b0);
  } while( true );
}

// operator() @ 15050b820

bool __thiscall
`UE::Anim::FAnimSync::CreateUninitializedTickRecordInScope'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1155438316787596779>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1155438316787596779>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15050bd00

bool __thiscall
`UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l10::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1155438316787597151>);
  if (bVar5) {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x140);
    if (lVar1 == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,&local_38);
    }
    ::FName::ToString(*(FName **)this,&local_28);
    bVar4 = true;
    bVar3 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1155438316787597151>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15050bdec;
    }
  }
  bVar5 = false;
LAB_15050bdec:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15050be40

bool __thiscall
`UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l145::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1155438316787597011>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_1155438316787597011>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15050bea0

bool __thiscall
`UE::Anim::FAnimSync::TickAssetPlayerInstances'::__l151::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1155438316787596995>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_1155438316787596995>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

