// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 30

// StaticClass @ 145ece3b0

UClass * __cdecl UProceduralFoliageTile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageTile",
               &Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton,
               StaticRegisterNativesUProceduralFoliageTile,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralFoliageTile>,
               InternalVTableHelperCtorCaller<UProceduralFoliageTile>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton;
}

// UProceduralFoliageTile @ 145ed95c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UProceduralFoliageTile * __thiscall
UProceduralFoliageTile::UProceduralFoliageTile(UProceduralFoliageTile *this,FVTableHelper *param_1)

{
  double dVar1;
  double dVar2;
  undefined7 uStack_17;
  
  UObject::UObject((UObject *)this,param_1);
  dVar2 = _UNK_15066df78;
  dVar1 = __xmm_80000000000000008000000000000000;
  this->_padding_ = (longlong)&___7UProceduralFoliageTile__6B_;
  *(undefined8 *)&(this->PendingRemovals).Elements.field_0x8 = 0;
  (this->FoliageSpawner).field0_0x0.DebugPtr = (UProceduralFoliageSpawner *)0x0;
  *(undefined8 *)&(this->PendingRemovals).Elements = 0;
  *(undefined8 *)&(this->PendingRemovals).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x30 = 0xffffffff;
  (this->PendingRemovals).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingRemovals).HashSize = 0;
  *(undefined8 *)&(this->InstancesSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstancesSet).Elements = 0;
  *(undefined8 *)&(this->InstancesSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x30 = 0xffffffff;
  (this->InstancesSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstancesSet).HashSize = 0;
  (this->InstancesArray).ArrayNum = 0;
  (this->InstancesArray).ArrayMax = 0;
  (this->InstancesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Broadphase).QuadTree.Nodes.ArrayNum = 0;
  (this->Broadphase).QuadTree.Nodes.ArrayMax = 0;
  (this->Broadphase).QuadTree.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Broadphase).QuadTree.TreeBox.Min.field0_0x0._s_0.X = dVar1;
  (this->Broadphase).QuadTree.TreeBox.Min.field0_0x0._s_0.Y = dVar2;
  (this->Broadphase).QuadTree.bInternal = false;
  (this->Broadphase).QuadTree.TreeBox.Max.field0_0x0._s_0.X = 0.0;
  (this->Broadphase).QuadTree.TreeBox.Max.field0_0x0._s_0.Y = 0.0;
  (this->Broadphase).QuadTree.MinimumQuadSize = 100.0;
  *(ulonglong *)&(this->Broadphase).QuadTree.TreeBox.bIsValid = CONCAT71(uStack_17,1);
  (this->Broadphase).QuadTree.Position.field0_0x0._s_0.X = 0.0;
  (this->Broadphase).QuadTree.Position.field0_0x0._s_0.Y = 0.0;
  (this->Broadphase).QuadTree.SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Broadphase).QuadTree.SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Broadphase).QuadTree.SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Broadphase).QuadTree.SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  return this;
}

// UProceduralFoliageTile @ 145ed96e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UProceduralFoliageTile * __thiscall
UProceduralFoliageTile::UProceduralFoliageTile
          (UProceduralFoliageTile *this,FObjectInitializer *param_1)

{
  double dVar1;
  double dVar2;
  undefined7 uStack_17;
  
  UObject::UObject((UObject *)this,param_1);
  dVar2 = _UNK_15066df78;
  dVar1 = __xmm_80000000000000008000000000000000;
  this->_padding_ = (longlong)&___7UProceduralFoliageTile__6B_;
  *(undefined8 *)&(this->PendingRemovals).Elements.field_0x8 = 0;
  (this->FoliageSpawner).field0_0x0.DebugPtr = (UProceduralFoliageSpawner *)0x0;
  *(undefined8 *)&(this->PendingRemovals).Elements = 0;
  *(undefined8 *)&(this->PendingRemovals).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x30 = 0xffffffff;
  (this->PendingRemovals).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingRemovals).HashSize = 0;
  *(undefined8 *)&(this->InstancesSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstancesSet).Elements = 0;
  *(undefined8 *)&(this->InstancesSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x30 = 0xffffffff;
  (this->InstancesSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstancesSet).HashSize = 0;
  (this->InstancesArray).ArrayNum = 0;
  (this->InstancesArray).ArrayMax = 0;
  (this->InstancesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Broadphase).QuadTree.Nodes.ArrayNum = 0;
  (this->Broadphase).QuadTree.Nodes.ArrayMax = 0;
  (this->Broadphase).QuadTree.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Broadphase).QuadTree.TreeBox.Min.field0_0x0._s_0.X = dVar1;
  (this->Broadphase).QuadTree.TreeBox.Min.field0_0x0._s_0.Y = dVar2;
  (this->Broadphase).QuadTree.bInternal = false;
  (this->Broadphase).QuadTree.TreeBox.Max.field0_0x0._s_0.X = 0.0;
  (this->Broadphase).QuadTree.TreeBox.Max.field0_0x0._s_0.Y = 0.0;
  (this->Broadphase).QuadTree.MinimumQuadSize = 100.0;
  *(ulonglong *)&(this->Broadphase).QuadTree.TreeBox.bIsValid = CONCAT71(uStack_17,1);
  (this->Broadphase).QuadTree.Position.field0_0x0._s_0.X = 0.0;
  (this->Broadphase).QuadTree.Position.field0_0x0._s_0.Y = 0.0;
  (this->Broadphase).QuadTree.SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Broadphase).QuadTree.SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Broadphase).QuadTree.SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Broadphase).QuadTree.SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  return this;
}

// ~UProceduralFoliageTile @ 145eda660

void __thiscall UProceduralFoliageTile::~UProceduralFoliageTile(UProceduralFoliageTile *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UProceduralFoliageTile__6B_;
  TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>
            (&(this->Broadphase).QuadTree);
  pFVar1 = (this->InstancesArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->InstancesSet).HashSize = 0;
  FVar2 = (this->InstancesSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InstancesSet).Elements);
  (this->PendingRemovals).HashSize = 0;
  FVar2 = (this->PendingRemovals).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingRemovals).Elements);
  UObject::~UObject((UObject *)this);
  return;
}

// AddInstances @ 145edd0c0

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
UProceduralFoliageTile::AddInstances
          (UProceduralFoliageTile *this,
          TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,TBox2<double> *param_3)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  UFoliageType *pUVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  FProceduralFoliageInstance *local_res10;
  FProceduralFoliageInstance *local_b8;
  TVector<double>_u_0 local_b0 [5];
  
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FProceduralFoliageInstance_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (pFVar13 == pFVar2) break;
    lVar5 = *(longlong *)pFVar13;
    pUVar6 = *(UFoliageType **)(lVar5 + 0x60);
    fVar3 = *(float *)(lVar5 + 0x58);
    fVar14 = fVar3 * pUVar6->CollisionRadius;
    fVar18 = fVar3 * pUVar6->ShadeRadius;
    if (fVar18 <= fVar14) {
      fVar18 = fVar14;
    }
    dVar19 = (double)fVar18;
    dVar15 = *(double *)(lVar5 + 0x20) + dVar19;
    if ((((dVar15 < (param_3->Min).field0_0x0._s_0.X || dVar15 == (param_3->Min).field0_0x0._s_0.X)
         || (dVar15 = *(double *)(lVar5 + 0x20) - dVar19,
            (param_3->Max).field0_0x0._s_0.X <= dVar15 && dVar15 != (param_3->Max).field0_0x0._s_0.X
            )) || (dVar15 = *(double *)(lVar5 + 0x28) + dVar19,
                  pdVar1 = &(param_3->Min).field0_0x0._s_0.Y, dVar15 < *pdVar1 || dVar15 == *pdVar1)
        ) || (dVar19 = *(double *)(lVar5 + 0x28) - dVar19,
             pdVar1 = &(param_3->Max).field0_0x0._s_0.Y, *pdVar1 <= dVar19 && dVar19 != *pdVar1)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    auVar25 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar10 = *(double *)(lVar5 + 0x30) * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar15 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar8 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(lVar5 + 0x20);
    dVar9 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(lVar5 + 0x28);
    uVar26 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar20 = blendpd(auVar16,auVar25,2);
    auVar27._8_4_ = SUB84(dVar9,0);
    auVar27._0_8_ = dVar8;
    auVar27._12_4_ = uVar26;
    dVar19 = auVar25._0_8_;
    auVar28._0_8_ = auVar27._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar8;
    auVar28._8_8_ = dVar10 * auVar16._8_8_ - dVar19 * dVar9;
    auVar29._8_4_ = SUB84(dVar9,0);
    auVar29._0_8_ = dVar8;
    auVar29._12_4_ = uVar26;
    auVar16._8_4_ = SUB84(dVar15,0);
    auVar16._0_8_ = dVar10;
    auVar16._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    auVar16 = blendpd(auVar29,auVar16,2);
    auVar17._0_8_ = auVar16._0_8_ * dVar19 - auVar20._0_8_ * dVar10;
    auVar17._8_8_ = auVar16._8_8_ * auVar25._8_8_ - auVar20._8_8_ * dVar15;
    auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar29 = blendpd(auVar28,auVar17,2);
    dVar15 = auVar28._8_8_ + auVar28._8_8_;
    dVar7 = auVar17._0_8_ + auVar17._0_8_;
    uVar26 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar30._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar30._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar23._8_4_ = SUB84(dVar7,0);
    auVar23._0_8_ = dVar15;
    auVar23._12_4_ = uVar26;
    auVar21._8_4_ = SUB84(dVar7,0);
    auVar21._0_8_ = dVar15;
    auVar21._12_4_ = uVar26;
    auVar29 = blendpd(auVar21,auVar30,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar15;
    auVar24._8_8_ = auVar30._0_8_ * auVar16._8_8_ - dVar19 * dVar7;
    auVar16 = blendpd(auVar16,auVar25,2);
    auVar20._8_4_ = SUB84(auVar24._8_8_,0);
    auVar20._0_8_ = auVar24._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar22._0_8_ = auVar29._0_8_ * dVar19 - auVar16._0_8_ * auVar30._0_8_;
    auVar22._8_8_ = auVar29._8_8_ * auVar25._8_8_ - auVar16._8_8_ * auVar30._8_8_;
    dVar19 = dVar7 * dVar11 + dVar9 + auVar22._0_8_ + (param_2->Translation).XY.m128d_f64[1];
    auVar25 = blendpd(auVar24,auVar22,2);
    local_b0[0]._8_4_ = SUB84(dVar19,0);
    local_b0[0]._0_8_ =
         dVar15 * dVar11 + dVar8 + auVar20._8_8_ + (param_2->Translation).XY.m128d_f64[0];
    local_b0[0]._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    local_b0[0]._16_8_ =
         auVar30._0_8_ * dVar11 + dVar10 + auVar25._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
    local_res10 = NewSeed(this,(TVector<double> *)&local_b0[0]._s_0,fVar3,pUVar6,
                          *(float *)(lVar5 + 0x38),bVar12);
    if (local_res10 != (FProceduralFoliageInstance *)0x0) {
      TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
      ::Emplace<FProceduralFoliageInstance_*_const_&>
                (&this->InstancesSet,&local_b8,(bool *)&local_res10);
    }
    pFVar13 = pFVar13 + 8;
  }
  FlushPendingRemovals(this);
  return;
}

// AddRandomSeeds @ 145edd340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UProceduralFoliageTile::AddRandomSeeds
          (UProceduralFoliageTile *this,
          TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  UProceduralFoliageSpawner *pUVar7;
  UFoliageType *pUVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  FRichCurve *pFVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  ForElementType<FSetElementId> FVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_348 [32];
  undefined1 local_2f8 [8];
  UFoliageType *local_2f0;
  uint local_2e8 [2];
  ForAnyElementType local_2e0;
  undefined8 local_2d8;
  int local_2d0;
  uint local_2cc;
  FProceduralFoliageInstance *local_2c8;
  float local_2c0;
  float local_2bc;
  int local_2b8;
  int *local_2b0;
  int local_2a8;
  int local_2a4;
  undefined1 local_2a0 [8];
  undefined1 local_298 [16];
  UFoliageType **local_288;
  int *local_280;
  UFoliageType **local_278;
  int *local_270;
  uint *local_268;
  float *local_260;
  uint *local_258;
  float *local_250;
  TVector<double>_u_0 local_248;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> local_228;
  TSet<TTuple<UFoliageType_const_*,FRandomStream>,TDefaultMapHashableKeyFuncs<UFoliageType_const_*,FRandomStream,0>,FDefaultSetAllocator>
  local_1d8;
  TSet<TTuple<UFoliageType_const_*,int>,TDefaultMapHashableKeyFuncs<UFoliageType_const_*,int,0>,FDefaultSetAllocator>
  local_188;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator> local_138;
  ulonglong local_e8;
  
  fVar25 = __real_3f000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  pUVar7 = (this->FoliageSpawner).field0_0x0.DebugPtr;
  local_228.Elements._0_8_ = 0;
  local_228.Elements._8_8_ = 0;
  local_228.Elements._32_8_ = 0;
  local_228.Elements._40_4_ = 0;
  local_228.Elements._44_4_ = 0x80;
  local_228.Elements._48_4_ = 0xffffffff;
  local_228.Elements._52_4_ = 0;
  local_228.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_228.HashSize = 0;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_188.Elements._0_8_ = 0;
  local_188.Elements._8_8_ = 0;
  local_188.Elements._32_8_ = 0;
  local_188.Elements._40_4_ = 0;
  local_188.Elements._44_4_ = 0x80;
  local_188.Elements._48_4_ = 0xffffffff;
  local_188.Elements._52_4_ = 0;
  local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.HashSize = 0;
  local_1d8.Elements._0_8_ = 0;
  local_1d8.Elements._8_8_ = 0;
  local_1d8.Elements._32_8_ = 0;
  local_1d8.Elements._40_4_ = 0;
  local_1d8.Elements._44_4_ = 0x80;
  local_1d8.Elements._48_4_ = 0xffffffff;
  local_1d8.Elements._52_4_ = 0;
  local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1d8.HashSize = 0;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  iVar6 = (pUVar7->FoliageTypes).ArrayNum;
  pFVar20 = (pUVar7->FoliageTypes).AllocatorInstance.Data;
  pFVar23 = pFVar20 + (longlong)iVar6 * 0x20;
  local_2cc = 0xffffffff;
  fVar29 = pUVar7->TileSize * pUVar7->TileSize * __real_358637bd;
  local_2b0 = &this->LastCancel;
LAB_145edd4c8:
  if ((pUVar7->FoliageTypes).ArrayNum != iVar6) {
    local_2f8[0] = 0;
    `TCheckedPointerIterator<FFoliageTypeObject_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_2f8);
    local_2b0 = &this->LastCancel;
  }
  fVar24 = __real_3f800000;
  if (pFVar20 == pFVar23) {
    iVar6 = (this->InstancesArray).ArrayNum;
    iVar11 = (int)local_2d8;
    local_2b8 = (int)local_2d8;
    while ((0 < iVar11 &&
           ((((this->FoliageSpawner).field0_0x0.DebugPtr)->LastCancel).Counter == *local_2b0))) {
      local_2cc = (int)(local_2cc + 1) % local_2b8;
      lVar21 = (longlong)(int)local_2cc;
      uVar16 = 0;
      if ((int)local_2cc < (int)local_2d8) {
        uVar16 = ~local_2cc >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pUVar8 = *(UFoliageType **)(local_2e0.Data + lVar21 * 8);
      if (pUVar8 != (UFoliageType *)0x0) {
        uVar16 = ((uint)((ulonglong)pUVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar8 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = uVar16 >> 0x10 ^ uVar16;
        lVar21 = 0;
        if (local_188.Elements._8_4_ != local_188.Elements._52_4_) {
          FVar19 = (ForElementType<FSetElementId>)&local_188.Hash;
          if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar19 = local_188.Hash.SecondaryData;
          }
          iVar13 = *(int *)((longlong)FVar19 + (ulonglong)(local_188.HashSize - 1U & uVar16) * 4);
          while (lVar21 = 0, iVar13 != -1) {
            lVar21 = local_188.Elements._0_8_ + (longlong)iVar13 * 0x18;
            if (*(UFoliageType **)(local_188.Elements._0_8_ + (longlong)iVar13 * 0x18) == pUVar8) {
              if (lVar21 != 0) goto LAB_145edd9d5;
              break;
            }
            iVar13 = *(int *)(lVar21 + 0x10);
          }
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_145edd9d5:
        if (*(int *)(lVar21 + 8) != 0) {
          uVar12 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
          (this->RandomStream).Seed = uVar12;
          fVar29 = ((float)(uVar12 >> 9 | 0x3f800000) - fVar24) * pUVar8->MaxInitialAge;
          pFVar15 = FRuntimeFloatCurve::GetRichCurveConst(&pUVar8->ScaleCurve);
          fVar25 = fVar24;
          if (pUVar8->MaxAge != 0.0) {
            fVar25 = fVar29 / pUVar8->MaxAge;
          }
          if (fVar24 <= fVar25) {
            fVar25 = fVar24;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          fVar25 = FRichCurve::Eval(pFVar15,fVar25,0.0);
          fVar25 = (*(float *)&(pUVar8->ProceduralScale).field_0x4 -
                   *(float *)&pUVar8->ProceduralScale) * fVar25 + *(float *)&pUVar8->ProceduralScale
          ;
          if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
            FVar19 = (ForElementType<FSetElementId>)&local_1d8.Hash;
            if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_1d8.Hash.SecondaryData;
            }
            iVar13 = *(int *)((longlong)FVar19 + (ulonglong)(local_1d8.HashSize - 1U & uVar16) * 4);
            while (iVar13 != -1) {
              lVar22 = local_1d8.Elements._0_8_ + (longlong)iVar13 * 0x18;
              if (*(UFoliageType **)(local_1d8.Elements._0_8_ + (longlong)iVar13 * 0x18) == pUVar8)
              {
                if (lVar22 != 0) goto LAB_145eddaf6;
                goto LAB_145eddad0;
              }
              iVar13 = *(int *)(lVar22 + 0x10);
            }
          }
          lVar22 = 0;
LAB_145eddad0:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
LAB_145eddaf6:
          if ((this->bSimulateOnlyInShade == false) || (iVar6 + -1 < 0)) {
            fVar26 = ((this->FoliageSpawner).field0_0x0.DebugPtr)->TileSize;
            uVar16 = *(int *)(lVar22 + 0xc) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar22 + 0xc) = uVar16;
            dVar4 = (double)((float)(uVar16 >> 9 | 0x3f800000) - fVar24) * (double)fVar26;
            fVar26 = ((this->FoliageSpawner).field0_0x0.DebugPtr)->TileSize;
            uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar22 + 0xc) = uVar16;
            dVar5 = (double)((float)(uVar16 >> 9 | 0x3f800000) - fVar24) * (double)fVar26;
            if (local_228.Elements._8_4_ != local_228.Elements._52_4_) {
              FVar19 = (ForElementType<FSetElementId>)&local_228.Hash;
              if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar19 = local_228.Hash.SecondaryData;
              }
              uVar16 = *(uint *)((longlong)FVar19 +
                                (ulonglong)(local_228.HashSize - 1U & pUVar8->DistributionSeed) * 4)
              ;
              while (uVar16 != 0xffffffff) {
                puVar17 = (uint *)((longlong)(int)uVar16 * 0x10 + local_228.Elements._0_8_);
                if (*puVar17 == pUVar8->DistributionSeed) {
                  if (puVar17 != (uint *)0x0) {
                    fVar26 = (float)puVar17[1];
                    goto LAB_145eddcff;
                  }
                  break;
                }
                uVar16 = puVar17[2];
              }
            }
            fVar26 = 0.0;
          }
          else {
            if (iVar6 < 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(int *)(lVar22 + 0xc) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar22 + 0xc) = uVar16;
              uVar16 = (uint)(((float)(uVar16 >> 9 | 0x3f800000) - fVar24) * (float)iVar6);
            }
            uVar12 = 0;
            if ((int)uVar16 < (this->InstancesArray).ArrayNum) {
              uVar12 = ~uVar16 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar20 = (this->InstancesArray).AllocatorInstance.Data;
            lVar18 = (longlong)(int)uVar16 * 0x80;
            lVar22 = *(longlong *)(pFVar20 + lVar18 + 0x60);
            dVar4 = *(double *)(pFVar20 + lVar18 + 0x20);
            dVar5 = *(double *)(pFVar20 + lVar18 + 0x28);
            fVar26 = *(float *)(pFVar20 + lVar18 + 0x38);
            fVar2 = *(float *)(lVar22 + 0x34c);
            fVar3 = *(float *)(pFVar20 + lVar18 + 0x58);
            pFVar15 = FRuntimeFloatCurve::GetRichCurveConst((FRuntimeFloatCurve *)(lVar22 + 0x388));
            fVar28 = fVar24;
            if (*(float *)(lVar22 + 0x378) != 0.0) {
              fVar28 = fVar26 / *(float *)(lVar22 + 0x378);
            }
            if (fVar24 <= fVar28) {
              fVar28 = fVar24;
            }
            if (fVar28 <= 0.0) {
              fVar28 = 0.0;
            }
            fVar26 = FRichCurve::Eval(pFVar15,fVar28,0.0);
            fVar26 = ((*(float *)(lVar22 + 900) - *(float *)(lVar22 + 0x380)) * fVar26 +
                      *(float *)(lVar22 + 0x380) + fVar25) * fVar2 * fVar3;
          }
LAB_145eddcff:
          uVar16 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
          (this->RandomStream).Seed = uVar16;
          __libm_sse2_sincos_();
          fVar2 = pUVar8->MaxInitialSeedOffset;
          uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
          (this->RandomStream).Seed = uVar16;
          local_248._s_0.Z = 0.0;
          dVar27 = (double)((float)(uVar16 >> 9 | 0x3f800000) - fVar24) * (double)fVar2 +
                   (double)fVar26;
          local_248._s_0.X = extraout_XMM0_Qb * dVar27 + dVar4;
          local_248._s_0.Y = extraout_XMM0_Qa * dVar27 + dVar5;
          local_2c8 = NewSeed(this,(TVector<double> *)&local_248._s_0,fVar25,pUVar8,fVar29,false);
          if (local_2c8 != (FProceduralFoliageInstance *)0x0) {
            pFVar20 = (param_1->AllocatorInstance).Data;
            if (((pFVar20 <= (FScriptContainerElement *)&local_2c8) &&
                ((FScriptContainerElement *)&local_2c8 < pFVar20 + (longlong)param_1->ArrayMax * 8))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar13 = param_1->ArrayNum;
            if (iVar13 == param_1->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar13 + 1;
            *(FProceduralFoliageInstance **)
             ((param_1->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_2c8;
          }
          piVar1 = (int *)(lVar21 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            iVar11 = iVar11 + -1;
          }
        }
      }
    }
  }
  else {
    local_2b0 = &this->LastCancel;
    if ((((this->FoliageSpawner).field0_0x0.DebugPtr)->LastCancel).Counter == *local_2b0) {
      local_2f0 = *(UFoliageType **)(pFVar20 + 8);
      if (local_2f0 != (UFoliageType *)0x0) {
        if ((local_2f0->bCanGrowInShade == false) || (local_2f0->bSpawnsInShade == false)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10 == this->bSimulateOnlyInShade) {
          local_2d0 = (int)ROUND(local_2f0->InitialSeedDensity * local_2f0->InitialSeedDensity *
                                 (fVar29 + fVar29) + fVar25) >> 1;
          local_288 = &local_2f0;
          local_280 = &local_2d0;
          TSet<TTuple<UFoliageType_const_*,int>,TDefaultMapHashableKeyFuncs<UFoliageType_const_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UFoliageType_const_*_const_&,int_const_&>_>
                    (&local_188,
                     (TPairInitializer<UFoliageType_const_*_const_&,int_const_&> *)local_2a0,
                     (bool *)&local_288);
          if (0 < local_2d0) {
            if (((local_2e0.Data <= (FScriptContainerElement *)&local_2f0) &&
                ((FScriptContainerElement *)&local_2f0 <
                 local_2e0.Data + (longlong)local_2d8._4_4_ * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar11 = (int)local_2d8;
            if ((int)local_2d8 == local_2d8._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_2e0,(int *)((longlong)&local_2d8 + 4));
            }
            local_2d8 = CONCAT44(local_2d8._4_4_,iVar11 + 1);
            *(UFoliageType **)(local_2e0.Data + (longlong)iVar11 * 8) = local_2f0;
          }
          local_2a8 = local_2f0->DistributionSeed +
                      ((this->FoliageSpawner).field0_0x0.DebugPtr)->RandomSeed + this->RandomSeed;
          local_278 = &local_2f0;
          local_270 = &local_2a8;
          local_2a4 = local_2a8;
          TSet<TTuple<UFoliageType_const_*,FRandomStream>,TDefaultMapHashableKeyFuncs<UFoliageType_const_*,FRandomStream,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UFoliageType_const_*_const_&,FRandomStream_&&>_>
                    (&local_1d8,
                     (TPairInitializer<UFoliageType_const_*_const_&,FRandomStream_&&> *)
                     (local_2a0 + 4),(bool *)&local_278);
          local_2e8[0] = local_2f0->DistributionSeed;
          fVar24 = UFoliageType::GetScaleForAge(local_2f0,local_2f0->MaxAge);
          local_2c0 = fVar24 * local_2f0->CollisionRadius;
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            FVar19 = (ForElementType<FSetElementId>)&local_138.Hash;
            if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_138.Hash.SecondaryData;
            }
            uVar16 = *(uint *)((longlong)FVar19 +
                              (ulonglong)(local_138.HashSize - 1U & local_2e8[0]) * 4);
            while (uVar16 != 0xffffffff) {
              puVar17 = (uint *)((longlong)(int)uVar16 * 0x10 + local_138.Elements._0_8_);
              if (*puVar17 == local_2e8[0]) {
                pfVar14 = (float *)(puVar17 + 1);
                if (puVar17 == (uint *)0x0) {
                  pfVar14 = (float *)0x0;
                }
                if (pfVar14 != (float *)0x0) {
                  fVar26 = *pfVar14;
                  if (*pfVar14 <= local_2c0) {
                    fVar26 = local_2c0;
                  }
                  *pfVar14 = fVar26;
                  goto LAB_145edd746;
                }
                break;
              }
              uVar16 = puVar17[2];
            }
          }
          local_268 = local_2e8;
          local_260 = &local_2c0;
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,float_const_&>_>
                    (&local_138,(TPairInitializer<int_const_&,float_const_&> *)local_298,
                     (bool *)&local_268);
LAB_145edd746:
          local_2bc = fVar24 * local_2f0->ShadeRadius;
          if (local_228.Elements._8_4_ != local_228.Elements._52_4_) {
            FVar19 = (ForElementType<FSetElementId>)&local_228.Hash;
            if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_228.Hash.SecondaryData;
            }
            uVar16 = *(uint *)((longlong)FVar19 +
                              (ulonglong)(local_228.HashSize - 1U & local_2e8[0]) * 4);
            while (uVar16 != 0xffffffff) {
              puVar17 = (uint *)((longlong)(int)uVar16 * 0x10 + local_228.Elements._0_8_);
              if (*puVar17 == local_2e8[0]) {
                pfVar14 = (float *)(puVar17 + 1);
                if (puVar17 == (uint *)0x0) {
                  pfVar14 = (float *)0x0;
                }
                if (pfVar14 != (float *)0x0) {
                  pFVar20 = pFVar20 + 0x20;
                  fVar24 = *pfVar14;
                  if (*pfVar14 <= local_2bc) {
                    fVar24 = local_2bc;
                  }
                  *pfVar14 = fVar24;
                  goto LAB_145edd4c8;
                }
                break;
              }
              uVar16 = puVar17[2];
            }
          }
          local_258 = local_2e8;
          local_250 = &local_2bc;
          TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,float_const_&>_>
                    (&local_228,(TPairInitializer<int_const_&,float_const_&> *)(local_298 + 4),
                     (bool *)&local_258);
        }
      }
      pFVar20 = pFVar20 + 0x20;
      goto LAB_145edd4c8;
    }
  }
  if (local_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data);
  }
  local_1d8.HashSize = 0;
  if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UFoliageType_const_*,FRandomStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UFoliageType_const_*,FRandomStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.Elements);
  local_188.HashSize = 0;
  if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UFoliageType_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UFoliageType_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.Elements);
  local_138.HashSize = 0;
  if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138.Elements);
  local_228.HashSize = 0;
  if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_228.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_228.Elements);
  return;
}

// AgeSeeds @ 145ede3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProceduralFoliageTile::AgeSeeds(UProceduralFoliageTile *this)

{
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FProceduralFoliageInstance *pFVar5;
  UFoliageType *this_01;
  code *pcVar6;
  float fVar7;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ForAnyElementType local_128;
  undefined8 local_120;
  FProceduralFoliageInstance *local_118;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [8];
  FProceduralFoliageInstance *local_d8;
  FProceduralFoliageInstance *local_d0;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TVector<double>_u_0 local_98 [3];
  
  uStack_104 = 1;
  this_00 = &this->InstancesSet;
  local_100 = &(this->InstancesSet).Elements.field_0x10;
  local_128.Data = (FScriptContainerElement *)0x0;
  iStack_108 = 0;
  local_120 = 0;
  iVar10 = *(int *)&(this->InstancesSet).Elements.field_0x28;
  local_f0 = 0;
  iStack_f4 = iStack_108;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_100;
    }
    uVar14 = *puVar16;
    local_f0 = 0;
    iStack_108 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_108;
      local_f0 = local_f0 + 0x20;
      iStack_108 = iStack_108 + 1;
      iStack_f4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_145ede4c2;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_104 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_f4 = local_f0 + -1 + local_res18;
    if (iVar10 < iStack_f4) {
      iStack_f4 = iVar10;
    }
  }
LAB_145ede4c2:
  uVar14 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  puVar1 = &(this->InstancesSet).Elements.field_0x10;
  uVar17 = uVar14 & 0xffffffe0;
  iStack_e8 = *(int *)&(this->InstancesSet).Elements.field_0x8 -
              *(int *)&(this->InstancesSet).Elements.field_0x34;
  uStack_f8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_f4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_104,iStack_108);
  iVar12 = (int)uVar14 >> 5;
  TStack_c0._28_4_ = iStack_f4;
  TStack_c0.BaseBitIndex = local_f0;
  uStack_a0 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = this_00;
  iStack_ec = iStack_f4;
  local_c8 = this_00;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_100;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar7 = __real_3f800000;
  uVar4 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145ede5f0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar14 = local_res20 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_145ede5f0:
  do {
    pTVar8 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar14) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this_00))
    {
      iVar10 = (int)local_120;
      pFVar2 = local_128.Data + (longlong)(int)local_120 * 8;
      FVar13.Data = local_128.Data;
      while( true ) {
        if ((int)local_120 != iVar10) {
          `TCheckedPointerIterator<FProceduralFoliageInstance_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (FVar13.Data == pFVar2) break;
        local_d0 = *(FProceduralFoliageInstance **)FVar13.Data;
        TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
        ::Emplace<FProceduralFoliageInstance_*_const_&>
                  (this_00,(FProceduralFoliageInstance **)(local_e0 + 4),(bool *)&local_d0);
        FVar13.Data = FVar13.Data + 8;
      }
      FlushPendingRemovals(this);
LAB_145ede840:
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      return;
    }
    pFVar5 = *(FProceduralFoliageInstance **)
              (*(longlong *)&pTVar8->Elements + (longlong)TStack_c0.CurrentBitIndex * 0x10);
    if ((((this->FoliageSpawner).field0_0x0.DebugPtr)->LastCancel).Counter != this->LastCancel)
    goto LAB_145ede840;
    if ((pFVar5->bAlive != false) &&
       (this_01 = (pFVar5->Type).field0_0x0.DebugPtr, this->SimulationStep <= this_01->NumSteps)) {
      if ((this_01->bCanGrowInShade == false) || (this_01->bSpawnsInShade == false)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9 == this->bSimulateOnlyInShade) {
        iVar10 = 0;
        fVar19 = pFVar5->Age;
        do {
          fVar18 = fVar19 + fVar7;
          if (this_01->MaxAge < fVar18) break;
          iVar10 = iVar10 + 1;
          fVar19 = fVar18;
        } while (iVar10 < 1);
        fVar18 = UFoliageType::GetScaleForAge(this_01,fVar19);
        local_98[0]._0_8_ = (pFVar5->Location).field0_0x0._s_0.X;
        local_98[0]._8_8_ = (pFVar5->Location).field0_0x0._s_0.Y;
        local_98[0]._16_8_ = (pFVar5->Location).field0_0x0._s_0.Z;
        local_d8 = pFVar5;
        if (pFVar5->bAlive != false) {
          FProceduralFoliageBroadphase::Remove(&this->Broadphase,pFVar5);
          pFVar5->bAlive = false;
          TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
          ::Emplace<FProceduralFoliageInstance_*_const_&>
                    (&this->PendingRemovals,(FProceduralFoliageInstance **)local_e0,
                     (bool *)&local_d8);
        }
        local_118 = NewSeed(this,(TVector<double> *)&local_98[0]._s_0,fVar18,this_01,fVar19,false);
        if (local_118 != (FProceduralFoliageInstance *)0x0) {
          if (((local_128.Data <= (FScriptContainerElement *)&local_118) &&
              ((FScriptContainerElement *)&local_118 <
               local_128.Data + (longlong)local_120._4_4_ * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = (int)local_120;
          if ((int)local_120 == local_120._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_128,(int *)((longlong)&local_120 + 4));
          }
          local_120 = CONCAT44(local_120._4_4_,iVar10 + 1);
          *(FProceduralFoliageInstance **)(local_128.Data + (longlong)iVar10 * 8) = local_118;
        }
      }
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// BeginDestroy @ 145ede8d0

void __thiscall UProceduralFoliageTile::BeginDestroy(UProceduralFoliageTile *this)

{
  UObject::BeginDestroy((UObject *)this);
  RemoveInstances(this);
  return;
}

// CopyInstancesToTile @ 145edf630

void __thiscall
UProceduralFoliageTile::CopyInstancesToTile
          (UProceduralFoliageTile *this,UProceduralFoliageTile *param_1,TBox2<double> *param_2,
          TTransform<double> *param_3,float param_4)

{
  double dVar1;
  TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> local_48;
  TVector2<double>_u_0 local_38;
  undefined1 local_28 [16];
  undefined1 local_18;
  
  local_38._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_18 = 1;
  dVar1 = (param_2->Max).field0_0x0._s_0.Y + (double)param_4;
  local_28._8_4_ = SUB84(dVar1,0);
  local_28._0_8_ = (param_2->Max).field0_0x0._s_0.X + (double)param_4;
  local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  GetInstancesInAABB(this,(TBox2<double> *)&local_38._s_0,&local_48,true);
  AddInstances(param_1,&local_48,param_3,param_2);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// Empty @ 145ee0840

void __thiscall UProceduralFoliageTile::Empty(UProceduralFoliageTile *this)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *this_00;
  int iVar4;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  pTVar5 = (this->Broadphase).QuadTree.SubTrees[0];
  if (pTVar5 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar5);
    ::operator_delete(pTVar5,0x70);
    (this->Broadphase).QuadTree.SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar5 = (this->Broadphase).QuadTree.SubTrees[1];
  if (pTVar5 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar5);
    ::operator_delete(pTVar5,0x70);
    (this->Broadphase).QuadTree.SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar5 = (this->Broadphase).QuadTree.SubTrees[2];
  if (pTVar5 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar5);
    ::operator_delete(pTVar5,0x70);
    (this->Broadphase).QuadTree.SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar5 = (this->Broadphase).QuadTree.SubTrees[3];
  if (pTVar5 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar5);
    ::operator_delete(pTVar5,0x70);
    (this->Broadphase).QuadTree.SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  piVar1 = &(this->Broadphase).QuadTree.Nodes.ArrayMax;
  (this->Broadphase).QuadTree.Nodes.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->Broadphase,0,piVar1);
  }
  (this->Broadphase).QuadTree.bInternal = false;
  piVar1 = &(this->InstancesArray).ArrayMax;
  (this->InstancesArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&(this->InstancesArray).AllocatorInstance,0,piVar1);
  }
  puVar3 = &(this->InstancesSet).Elements.field_0x10;
  iVar4 = *(int *)&(this->InstancesSet).Elements.field_0x28;
  this_00 = &this->InstancesSet;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar3;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145ee09dd;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar14 + -1 + local_res10;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_145ee09dd:
  uVar11 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar12);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->InstancesSet).Elements.field_0x8 -
                       *(int *)&(this->InstancesSet).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar3;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145ee0af0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_145ee0af0:
  while( true ) {
    if (*(int *)&(this->InstancesSet).Elements.field_0x8 -
        *(int *)&(this->InstancesSet).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    ::operator_delete(*(void **)(*(longlong *)&this_00->Elements +
                                (longlong)TStack_60.CurrentBitIndex * 0x10),0x80);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar7 = 1 < (this->InstancesSet).HashSize;
  if (!bVar7) {
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar3 = &(this->InstancesSet).Elements.field_0xc;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x34 = 0;
  iVar12 = *(int *)&(this->InstancesSet).Elements.field_0x2c;
  *(undefined4 *)&(this->InstancesSet).Elements.field_0x28 = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)&(this->InstancesSet).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InstancesSet).Elements.field_0x10,0);
  }
  if (bVar7) {
    (this->InstancesSet).HashSize = 1;
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  bVar7 = 1 < (this->PendingRemovals).HashSize;
  if (!bVar7) {
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->PendingRemovals);
  }
  puVar3 = &(this->PendingRemovals).Elements.field_0xc;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->PendingRemovals,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x34 = 0;
  iVar12 = *(int *)&(this->PendingRemovals).Elements.field_0x2c;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x28 = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)&(this->PendingRemovals).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingRemovals).Elements.field_0x10,
               0);
  }
  if (bVar7) {
    (this->PendingRemovals).HashSize = 1;
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::Rehash(&this->PendingRemovals);
  }
  return;
}

// ExtractDesiredInstances @ 145ee10f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProceduralFoliageTile::ExtractDesiredInstances
          (UProceduralFoliageTile *this,
          TArray<FDesiredFoliageInstance,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,TVector2<double> *param_3,double param_4,FGuid *param_5,
          double param_6,FBodyInstance *param_7,bool param_8)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  FName *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_338 [32];
  undefined1 local_2d8 [8];
  undefined8 local_2d0;
  TStatId local_2c8;
  TVector2<double> *local_2c0;
  TTransform<double> *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 uStack_298;
  undefined1 uStack_294;
  undefined2 uStack_293;
  undefined1 uStack_291;
  TVector2<double>_u_0 local_290;
  FName local_280;
  FName local_278;
  double local_270;
  double dStack_268;
  double local_260;
  undefined1 local_258 [4];
  undefined4 local_254;
  undefined4 local_1b4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  FCollisionQueryParams local_158;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2c0 = param_3;
  local_2b8 = param_2;
  InstancesToArray(this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
    StatPtr_UnknownSceneQuery =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
          )0x0;
    pFVar10 = ::FName::FName(&local_280,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar10,L"UnknownSceneQuery",
               "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_2c8.StatIdPtr =
       (TStatIdData *)
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar10 = ::FName::FName(&local_278,"UnknownSceneQuery");
    local_2c8.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar10,L"UnknownSceneQuery",
                    "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_2d0 = 0;
  FCollisionQueryParams::FCollisionQueryParams(&local_158,(FName)0x0,&local_2c8,true,(AActor *)0x0);
  memset(local_258,0,0x100);
  uVar15 = *(int *)&(this->InstancesSet).Elements.field_0x8 -
           *(int *)&(this->InstancesSet).Elements.field_0x34;
  local_2b0 = 0;
  uStack_2a8 = 0;
  uStack_293 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_291 = 0;
  local_2a0 = 0;
  uStack_298 = 0xffffffff;
  uStack_294 = 0;
  uStack_188 = 0xffffffff;
  local_254 = 0x3f800000;
  local_1b4 = 0xffffffff;
  local_190 = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar15,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  dVar8 = __real_4024000000000000;
  iVar2 = (this->InstancesArray).ArrayNum;
  pFVar14 = (this->InstancesArray).AllocatorInstance.Data;
  pFVar16 = pFVar14 + (longlong)iVar2 * 0x80;
  do {
    if ((this->InstancesArray).ArrayNum != iVar2) {
      local_2d8[0] = 0;
      `TCheckedPointerIterator<FProceduralFoliageInstance,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2d8);
    }
    if (pFVar14 == pFVar16) {
      if (param_8) {
        Empty(this);
      }
      if (local_158.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_158.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_158.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_158.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
      return;
    }
    local_260 = (param_2->Translation).ZW.m128d_f64[0];
    local_270 = (param_2->Translation).XY.m128d_f64[0];
    dStack_268 = (param_2->Translation).XY.m128d_f64[1];
    dVar6 = local_270 + *(double *)(pFVar14 + 0x20);
    dVar5 = dStack_268 + *(double *)(pFVar14 + 0x28);
    dVar7 = local_260 + *(double *)(pFVar14 + 0x30) + param_6;
    local_290._s_0.X = dVar6;
    local_290._s_0.Y = dVar5;
    bVar9 = FFoliageDensityFalloff::IsInstanceFiltered
                      ((FFoliageDensityFalloff *)(*(longlong *)(pFVar14 + 0x60) + 0x410),
                       (TVector2<double> *)&local_290._s_0,local_2c0,param_4);
    if (!bVar9) {
      uVar15 = param_1->ArrayNum;
      if (uVar15 == *piVar1) {
        uVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1090,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = uVar15 + 1;
      uVar11 = 0;
      if ((int)uVar15 < (int)(uVar15 + 1)) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (FScriptContainerElement *)0x0;
      pFVar12 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x90;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        lVar3 = *(longlong *)(pFVar14 + 0x60);
        fVar18 = *(float *)(pFVar14 + 0x58) * *(float *)(lVar3 + 0x350);
        fVar17 = *(float *)(pFVar14 + 0x58) * *(float *)(lVar3 + 0x34c);
        *(longlong *)(pFVar12 + 8) = 0;
        *(longlong *)(pFVar12 + 0x10) = 0;
        *(longlong *)pFVar12 = lVar3;
        *(double *)(pFVar12 + 0x18) = dVar6;
        if (fVar18 <= fVar17) {
          fVar18 = fVar17;
        }
        *(double *)(pFVar12 + 0x20) = dVar5;
        *(double *)(pFVar12 + 0x28) = dVar7;
        *(double *)(pFVar12 + 0x30) = dVar6;
        *(double *)(pFVar12 + 0x38) = dVar5;
        *(double *)(pFVar12 + 0x40) = dVar7 - (param_6 + param_6 + dVar8);
        *(longlong *)(pFVar12 + 0x50) = 0;
        *(longlong *)(pFVar12 + 0x58) = 0;
        *(longlong *)(pFVar12 + 0x60) = 0;
        *(longlong *)(pFVar12 + 0x68) = 0x3ff0000000000000;
        *(float *)(pFVar12 + 0x70) = fVar18;
        *(undefined4 *)(pFVar12 + 0x74) = 0;
        *(undefined4 *)(pFVar12 + 0x80) = 0;
        pFVar13 = pFVar12;
      }
      lVar3 = *(longlong *)(pFVar14 + 8);
      *(longlong *)(pFVar13 + 0x50) = *(longlong *)pFVar14;
      *(longlong *)(pFVar13 + 0x58) = lVar3;
      lVar3 = *(longlong *)(pFVar14 + 0x18);
      *(longlong *)(pFVar13 + 0x60) = *(longlong *)(pFVar14 + 0x10);
      *(longlong *)(pFVar13 + 0x68) = lVar3;
      lVar3 = *(longlong *)&param_5->C;
      *(longlong *)(pFVar13 + 8) = *(longlong *)param_5;
      *(longlong *)(pFVar13 + 0x10) = lVar3;
      *(undefined4 *)(pFVar13 + 0x74) = *(undefined4 *)(pFVar14 + 0x38);
      *(FBodyInstance **)(pFVar13 + 0x78) = param_7;
      *(undefined4 *)(pFVar13 + 0x80) = 1;
      param_2 = local_2b8;
    }
    pFVar14 = pFVar14 + 0x80;
  } while( true );
}

// FlushPendingRemovals @ 145ee1c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProceduralFoliageTile::FlushPendingRemovals(UProceduralFoliageTile *this)

{
  undefined1 *puVar1;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  FProceduralFoliageInstance *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->PendingRemovals).Elements.field_0x28;
  puVar1 = &(this->PendingRemovals).Elements.field_0x10;
  iVar11 = 0;
  this_00 = &this->PendingRemovals;
  iVar13 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->PendingRemovals).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ee1cdd;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145ee1cdd:
  uVar10 = *(uint *)&(this->PendingRemovals).Elements.field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PendingRemovals).Elements.field_0x8 -
                       *(int *)&(this->PendingRemovals).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->PendingRemovals).Elements.field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->PendingRemovals).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ee1de0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_145ee1de0:
  while( true ) {
    if (*(int *)&(this->PendingRemovals).Elements.field_0x8 -
        *(int *)&(this->PendingRemovals).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar4 = *(FProceduralFoliageInstance **)
              (*(longlong *)&this_00->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pFVar4->bAlive != false) {
      FProceduralFoliageBroadphase::Remove(&this->Broadphase,pFVar4);
      pFVar4->bAlive = false;
    }
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::Remove(&this->InstancesSet,pFVar4);
    ::operator_delete(pFVar4,0x80);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar6 = 1 < (this->PendingRemovals).HashSize;
  if (!bVar6) {
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->PendingRemovals).Elements.field_0xc;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->PendingRemovals).Elements.field_0x2c;
  *(undefined4 *)&(this->PendingRemovals).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->PendingRemovals).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingRemovals).Elements.field_0x10,
               0);
  }
  if (bVar6) {
    (this->PendingRemovals).HashSize = 1;
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  return;
}

// GetInstancesInAABB @ 145ee3a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UProceduralFoliageTile::GetInstancesInAABB
          (UProceduralFoliageTile *this,TBox2<double> *param_1,
          TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined1 auStackY_d8 [32];
  undefined1 local_88;
  FIdentityFunctor local_87 [7];
  longlong local_80;
  TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> local_78;
  TQuadTree<FProceduralFoliageInstance_*,4> *local_68 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  lVar10 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  iVar7 = TQuadTree<FProceduralFoliageInstance_*,4>::GetQuads
                    (&(this->Broadphase).QuadTree,param_1,local_68);
  TQuadTree<FProceduralFoliageInstance_*,4>::GetIntersectingElements<TSizedDefaultAllocator<32>_>
            (&(this->Broadphase).QuadTree,param_1,&local_78);
  if (0 < (longlong)iVar7) {
    do {
      TQuadTree<FProceduralFoliageInstance_*,4>::GetElements<TSizedDefaultAllocator<32>_>
                (local_68[lVar10],param_1,&local_78);
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar7);
  }
  uVar11 = local_78.ArrayNum + param_2->ArrayNum;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar7 = local_78.ArrayNum;
  pFVar3 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8;
  FVar9.Data = local_78.AllocatorInstance.Data;
  do {
    if (local_78.ArrayNum != iVar7) {
      local_88 = 0;
      `TCheckedPointerIterator<FProceduralFoliageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_88);
    }
    if (FVar9.Data == pFVar3) {
      AlgoImpl::
      IntroSortInternal<FProceduralFoliageInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FProceduralFoliageInstance_*,_UProceduralFoliageTile::GetInstancesInAABB_::__l2::<lambda_1>_>_>
                ((FProceduralFoliageInstance **)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
                 local_87[0],(<lambda_1> *)local_87);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    local_80 = *(longlong *)FVar9.Data;
    if (param_3) {
      fVar13 = *(float *)(local_80 + 0x58) * *(float *)(*(longlong *)(local_80 + 0x60) + 0x34c);
      fVar12 = *(float *)(local_80 + 0x58) * *(float *)(*(longlong *)(local_80 + 0x60) + 0x350);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      dVar15 = (double)fVar12;
      if (((((param_1->Min).field0_0x0._s_0.X <= *(double *)(local_80 + 0x20) - dVar15) &&
           (dVar14 = *(double *)(local_80 + 0x20) + dVar15,
           dVar14 < (param_1->Max).field0_0x0._s_0.X || dVar14 == (param_1->Max).field0_0x0._s_0.X))
          && ((param_1->Min).field0_0x0._s_0.Y <= *(double *)(local_80 + 0x28) - dVar15)) &&
         (dVar15 = *(double *)(local_80 + 0x28) + dVar15, pdVar2 = &(param_1->Max).field0_0x0._s_0.Y
         , dVar15 < *pdVar2 || dVar15 == *pdVar2)) goto LAB_145ee3b6d;
    }
    else {
LAB_145ee3b6d:
      pFVar4 = (param_2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
          ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)*piVar1 * 8)) &&
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
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar8 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_80;
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// GetPrivateStaticClass @ 145ee54f0

UClass * __cdecl UProceduralFoliageTile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageTile",
               &Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton,
               StaticRegisterNativesUProceduralFoliageTile,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralFoliageTile>,
               InternalVTableHelperCtorCaller<UProceduralFoliageTile>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageTile.InnerSingleton;
}

// GetRandomGaussian @ 145ee5660

float __thiscall UProceduralFoliageTile::GetRandomGaussian(UProceduralFoliageTile *this)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  uVar2 = uVar1 * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar2;
  fVar3 = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  if (fVar3 <= __real_322bcc77) {
    fVar3 = __real_322bcc77;
  }
  fVar4 = logf(fVar3);
  fVar4 = fVar4 * __real_c0000000;
  fVar3 = (float)(uVar2 >> 9 | 0x3f800000) - __real_3f800000;
  if (fVar3 <= __real_322bcc77) {
    fVar3 = __real_322bcc77;
  }
  fVar3 = cosf(fVar3 * __real_40c90fdb);
  return SQRT(fVar4) * fVar3;
}

// GetResourceSizeEx @ 145ee5bd0

void __thiscall
UProceduralFoliageTile::GetResourceSizeEx(UProceduralFoliageTile *this,FResourceSizeEx *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  iVar11 = 0;
  puVar1 = &(this->InstancesSet).Elements.field_0x10;
  iVar3 = *(int *)&(this->InstancesSet).Elements.field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ee5c7d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145ee5c7d:
  uVar10 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->InstancesSet).Elements.field_0x8 -
                       *(int *)&(this->InstancesSet).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ee5d80;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145ee5d80:
  while( true ) {
    if (*(int *)&(this->InstancesSet).Elements.field_0x8 -
        *(int *)&(this->InstancesSet).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x80);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetSeedOffset @ 145ee5fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UProceduralFoliageTile::GetSeedOffset
          (UProceduralFoliageTile *this,TVector<double> *__return_storage_ptr__,
          UFoliageType *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar6;
  
  uVar1 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  uVar2 = uVar1 * 0xbb38435 + 0x3619636b;
  fVar3 = (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
  (this->RandomStream).Seed = uVar2;
  if (fVar3 <= __real_322bcc77) {
    fVar3 = __real_322bcc77;
  }
  fVar4 = logf(fVar3);
  fVar4 = fVar4 * __real_c0000000;
  fVar3 = (float)(uVar2 >> 9 | 0x3f800000) - __real_3f800000;
  if (fVar3 <= __real_322bcc77) {
    fVar3 = __real_322bcc77;
  }
  fVar5 = cosf(fVar3 * __real_40c90fdb);
  fVar3 = param_1->AverageSpreadDistance;
  fVar5 = SQRT(fVar4) * fVar5;
  if (__real_3fd1eb85 <= fVar5) {
    fVar5 = __real_3fd1eb85;
  }
  if (fVar5 <= __real_bfd1eb85) {
    fVar5 = __real_bfd1eb85;
  }
  fVar4 = param_1->SpreadVariance;
  (this->RandomStream).Seed = uVar2 * 0xbb38435 + 0x3619636b;
  fVar4 = fVar5 * fVar4 * ___real_3f1c18fa;
  __libm_sse2_sincosf_();
  dVar6 = (double)(param_2 + fVar3 + fVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)extraout_XMM0_Db * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)extraout_XMM0_Da * dVar6;
  return __return_storage_ptr__;
}

// HandleOverlaps @ 145ee6790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UProceduralFoliageTile::HandleOverlaps
          (UProceduralFoliageTile *this,FProceduralFoliageInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  FProceduralFoliageInstance *pFVar2;
  FProceduralFoliageInstance *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  FProceduralFoliageInstance *pFVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FProceduralFoliageInstance *local_res20;
  FProceduralFoliageInstance *local_68;
  FProceduralFoliageInstance *local_60;
  FProceduralFoliageInstance *local_58;
  TArray<FProceduralFoliageOverlap,TSizedDefaultAllocator<32>_> local_50;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  bVar10 = true;
  FProceduralFoliageBroadphase::GetOverlaps(&this->Broadphase,param_1,&local_50);
  iVar5 = local_50.ArrayNum;
  pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x18;
  FVar9.Data = local_50.AllocatorInstance.Data;
  do {
    if (local_50.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FProceduralFoliageOverlap,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) {
      iVar5 = local_50.ArrayNum;
      pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x18;
      FVar9.Data = local_50.AllocatorInstance.Data;
      break;
    }
    pFVar2 = *(FProceduralFoliageInstance **)FVar9.Data;
    pFVar3 = *(FProceduralFoliageInstance **)(FVar9.Data + 8);
    pFVar8 = pFVar3;
    if ((pFVar2->bBlocker == false) && (pFVar8 = pFVar2, pFVar3->bBlocker == false)) {
      fVar11 = ((pFVar3->Type).field0_0x0.DebugPtr)->OverlapPriority;
      fVar12 = ((pFVar2->Type).field0_0x0.DebugPtr)->OverlapPriority;
      if (fVar12 == fVar11) {
        fVar11 = pFVar3->Age;
        fVar12 = pFVar2->Age;
        if (fVar12 == fVar11) {
          pFVar8 = pFVar3;
          if (pFVar2->Scale < pFVar3->Scale) {
            pFVar8 = pFVar2;
          }
          goto LAB_145ee685e;
        }
      }
      pFVar8 = pFVar3;
      if (fVar12 < fVar11) {
        pFVar8 = pFVar2;
      }
    }
LAB_145ee685e:
    if ((*(int *)(FVar9.Data + 0x10) == 1) &&
       (((pFVar8->Type).field0_0x0.DebugPtr)->bCanGrowInShade != false)) {
      pFVar8 = (FProceduralFoliageInstance *)0x0;
    }
    if (pFVar8 == param_1) goto LAB_145ee6882;
    FVar9.Data = FVar9.Data + 0x18;
  } while( true );
LAB_145ee6900:
  if (local_50.ArrayNum != iVar5) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FProceduralFoliageOverlap,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res18);
  }
  if (FVar9.Data == pFVar1) goto LAB_145ee68bc;
  pFVar2 = *(FProceduralFoliageInstance **)FVar9.Data;
  pFVar3 = *(FProceduralFoliageInstance **)(FVar9.Data + 8);
  pFVar8 = pFVar3;
  if ((pFVar2->bBlocker == false) && (pFVar8 = pFVar2, pFVar3->bBlocker == false)) {
    fVar11 = ((pFVar3->Type).field0_0x0.DebugPtr)->OverlapPriority;
    fVar12 = ((pFVar2->Type).field0_0x0.DebugPtr)->OverlapPriority;
    if (fVar12 == fVar11) {
      fVar11 = pFVar3->Age;
      fVar12 = pFVar2->Age;
      if (fVar12 == fVar11) {
        pFVar8 = pFVar3;
        if (pFVar2->Scale < pFVar3->Scale) {
          pFVar8 = pFVar2;
        }
        goto LAB_145ee697a;
      }
    }
    pFVar8 = pFVar3;
    if (fVar12 < fVar11) {
      pFVar8 = pFVar2;
    }
  }
LAB_145ee697a:
  if (((*(int *)(FVar9.Data + 0x10) != 1) ||
      (((pFVar8->Type).field0_0x0.DebugPtr)->bCanGrowInShade == false)) &&
     (pFVar8 != (FProceduralFoliageInstance *)0x0)) {
    if ((pFVar8 == param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dominated != Instance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\ProceduralFoliageTile.cpp"
                           ,0x2e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_58 = pFVar8;
    if (pFVar8->bAlive != false) {
      FProceduralFoliageBroadphase::Remove(&this->Broadphase,pFVar8);
      pFVar8->bAlive = false;
      TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
      ::Emplace<FProceduralFoliageInstance_*_const_&>
                (&this->PendingRemovals,&local_68,(bool *)&local_58);
    }
  }
  FVar9.Data = FVar9.Data + 0x18;
  goto LAB_145ee6900;
LAB_145ee6882:
  bVar10 = false;
  local_60 = param_1;
  if (param_1->bAlive != false) {
    FProceduralFoliageBroadphase::Remove(&this->Broadphase,param_1);
    param_1->bAlive = false;
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::Emplace<FProceduralFoliageInstance_*_const_&>
              (&this->PendingRemovals,&local_res20,(bool *)&local_60);
  }
LAB_145ee68bc:
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return bVar10;
}

// InitSimulation @ 145ee6a40

void __thiscall
UProceduralFoliageTile::InitSimulation
          (UProceduralFoliageTile *this,UProceduralFoliageSpawner *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  TQuadTree<FProceduralFoliageInstance_*,4> *this_00;
  TVector2<double>_u_0 TVar3;
  TVector2<double>_u_0 TVar4;
  TVector2<double>_u_0 TVar5;
  double dVar6;
  double dVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8 [4];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  float local_90;
  undefined1 local_8c;
  undefined1 local_68;
  undefined7 uStack_67;
  
  this->RandomSeed = param_2;
  (this->RandomStream).InitialSeed = param_2;
  (this->RandomStream).Seed = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UProceduralFoliageSpawner *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->FoliageSpawner).field0_0x0.DebugPtr = param_1;
  this->SimulationStep = 0;
  fVar1 = param_1->TileSize;
  fVar2 = param_1->MinimumQuadTreeSize;
  local_68 = 1;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar6 = (double)(fVar1 * __real_c0000000);
  uVar12 = (undefined4)((ulonglong)dVar6 >> 0x20);
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_8c = 0;
  local_e8[3] = 0;
  local_e8[0] = 0;
  dVar9 = (double)(fVar1 + fVar1);
  uVar10 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_e8[2] = 0;
  local_c8._8_4_ = SUB84(dVar6,0);
  local_c8._0_8_ = dVar6;
  local_c8._12_4_ = uVar12;
  local_e8[1] = 0;
  dVar7 = (dVar6 + dVar9) * __real_3fe0000000000000;
  uVar11 = SUB84(dVar7,0);
  uVar13 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_b8._8_4_ = SUB84(dVar9,0);
  local_b8._0_8_ = dVar9;
  local_b8._12_4_ = uVar10;
  local_a0._8_4_ = uVar11;
  local_a0._0_8_ = dVar7;
  local_a0._12_4_ = uVar13;
  local_a8 = CONCAT71(uStack_67,1);
  local_90 = fVar2;
  TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_> *
             )&this->Broadphase,&local_f8);
  TVar5._8_4_ = SUB84(dVar6,0);
  TVar5._s_0.X = dVar6;
  TVar5._12_4_ = uVar12;
  (this->Broadphase).QuadTree.TreeBox.Min.field0_0x0 = TVar5;
  (this->Broadphase).QuadTree.bInternal = false;
  TVar4._8_4_ = SUB84(dVar9,0);
  TVar4._s_0.X = dVar9;
  TVar4._12_4_ = uVar10;
  (this->Broadphase).QuadTree.TreeBox.Max.field0_0x0 = TVar4;
  (this->Broadphase).QuadTree.MinimumQuadSize = fVar2;
  TVar3._8_4_ = uVar11;
  TVar3._s_0.X = dVar7;
  TVar3._12_4_ = uVar13;
  (this->Broadphase).QuadTree.Position.field0_0x0 = TVar3;
  *(ulonglong *)&(this->Broadphase).QuadTree.TreeBox.bIsValid = CONCAT71(uStack_67,1);
  puVar8 = local_e8;
  do {
    this_00 = (TQuadTree<FProceduralFoliageInstance_*,4> *)*puVar8;
    if (this_00 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
      TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>(this_00)
      ;
      ::operator_delete(this_00,0x70);
    }
    puVar8 = puVar8 + 1;
  } while (puVar8 != (undefined8 *)local_c8);
  return;
}

// InstancesToArray @ 145ee7240

void __thiscall UProceduralFoliageTile::InstancesToArray(UProceduralFoliageTile *this)

{
  int *piVar1;
  TArray<FProceduralFoliageInstance,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *pTVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  UObject *pUVar8;
  code *pcVar9;
  undefined8 uVar10;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pTVar2 = &this->InstancesArray;
  uVar18 = *(int *)&(this->InstancesSet).Elements.field_0x8 -
           *(int *)&(this->InstancesSet).Elements.field_0x34;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = &(this->InstancesArray).ArrayMax;
  (this->InstancesArray).ArrayNum = 0;
  if (*piVar1 != uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar18,&pTVar2->AllocatorInstance,0,piVar1);
  }
  puVar3 = &(this->InstancesSet).Elements.field_0x10;
  iVar19 = 0;
  iVar6 = *(int *)&(this->InstancesSet).Elements.field_0x28;
  pTVar4 = &this->InstancesSet;
  iVar21 = 0;
  uVar18 = 1;
  iVar13 = 0;
  if (iVar6 != 0) {
    puVar22 = *(uint **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar3;
    }
    uVar17 = *puVar22;
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar13 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_145ee733f;
      uVar17 = puVar22[lVar15 + 1];
    }
    uVar18 = -uVar17 & uVar17;
    uVar5 = (ulonglong)uVar18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar13 = local_res10 + -1 + iVar21;
    if (iVar6 < iVar13) {
      iVar13 = iVar6;
    }
  }
LAB_145ee733f:
  uVar17 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  TStack_70._padding_ = CONCAT44(uVar18,iVar19);
  uVar18 = uVar17 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar13;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar17 >> 5;
  TStack_70._28_4_ = iVar13;
  TStack_70.BaseBitIndex = iVar21;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->InstancesSet).Elements.field_0x8 -
                       *(int *)&(this->InstancesSet).Elements.field_0x34);
  local_res20 = pTVar4;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar17 < 0) || (iVar6 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_res20;
  uVar14 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  if (uVar17 != uVar14) {
    puVar20 = *(undefined1 **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar19;
      uVar18 = uVar18 + 0x20;
      iVar19 = iVar19 + 1;
      uVar17 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_145ee7450;
      uVar17 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar17 = local_res18 + -1 + uVar18;
    if ((int)uVar14 < (int)uVar17) {
      uVar17 = uVar14;
    }
  }
LAB_145ee7450:
  while( true ) {
    if (*(int *)&(this->InstancesSet).Elements.field_0x8 -
        *(int *)&(this->InstancesSet).Elements.field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar17) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar4 == pTVar11))
    break;
    puVar7 = *(undefined8 **)
              (*(longlong *)&pTVar4->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (*(char *)(puVar7 + 0xe) == '\0') {
      uVar18 = (this->InstancesArray).ArrayNum;
      if (uVar18 == *piVar1) {
        uVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->InstancesArray).ArrayNum = uVar18 + 1;
      uVar14 = 0;
      if ((int)uVar18 < (int)(uVar18 + 1)) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x80;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        uVar10 = puVar7[1];
        *(undefined8 *)pFVar16 = *puVar7;
        *(undefined8 *)(pFVar16 + 8) = uVar10;
        uVar10 = puVar7[3];
        *(undefined8 *)(pFVar16 + 0x10) = puVar7[2];
        *(undefined8 *)(pFVar16 + 0x18) = uVar10;
        uVar10 = puVar7[5];
        *(undefined8 *)(pFVar16 + 0x20) = puVar7[4];
        *(undefined8 *)(pFVar16 + 0x28) = uVar10;
        *(undefined8 *)(pFVar16 + 0x30) = puVar7[6];
        *(undefined4 *)(pFVar16 + 0x38) = *(undefined4 *)(puVar7 + 7);
        uVar10 = puVar7[9];
        *(undefined8 *)(pFVar16 + 0x40) = puVar7[8];
        *(undefined8 *)(pFVar16 + 0x48) = uVar10;
        *(undefined8 *)(pFVar16 + 0x50) = puVar7[10];
        *(undefined4 *)(pFVar16 + 0x58) = *(undefined4 *)(puVar7 + 0xb);
        pUVar8 = (UObject *)puVar7[0xc];
        *(UObject **)(pFVar16 + 0x60) = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        *(undefined8 *)(pFVar16 + 0x68) = puVar7[0xd];
        pFVar16[0x70] = *(FScriptContainerElement *)(puVar7 + 0xe);
        pFVar16[0x71] = *(FScriptContainerElement *)((longlong)puVar7 + 0x71);
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// MarkPendingRemoval @ 145ee7980

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
UProceduralFoliageTile::MarkPendingRemoval
          (UProceduralFoliageTile *this,FProceduralFoliageInstance *param_1)

{
  FProceduralFoliageInstance *local_res10;
  FProceduralFoliageInstance *local_res18 [2];
  
  if (param_1->bAlive != false) {
    local_res10 = param_1;
    FProceduralFoliageBroadphase::Remove(&this->Broadphase,param_1);
    param_1->bAlive = false;
    TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
    ::Emplace<FProceduralFoliageInstance_*_const_&>
              (&this->PendingRemovals,local_res18,(bool *)&local_res10);
  }
  return;
}

// NewSeed @ 145ee7a40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FProceduralFoliageInstance * __thiscall
UProceduralFoliageTile::NewSeed
          (UProceduralFoliageTile *this,TVector<double> *param_1,float param_2,UFoliageType *param_3
          ,float param_4,bool param_5)

{
  TVector2<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  UFoliageType *pUVar4;
  double dVar5;
  bool bVar6;
  FProceduralFoliageInstance *pFVar7;
  TQuat<double> *pTVar8;
  uint uVar9;
  FProceduralFoliageInstance *pFVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  FProceduralFoliageInstance *local_res8;
  TRotator<double> local_78;
  TVector2<double>_u_0 local_58;
  double local_48;
  double local_40;
  undefined1 local_38;
  
  pFVar7 = ::operator_new(0x80);
  pFVar10 = (FProceduralFoliageInstance *)0x0;
  if (pFVar7 != (FProceduralFoliageInstance *)0x0) {
    (pFVar7->Rotation).X = 0.0;
    (pFVar7->Rotation).Y = 0.0;
    (pFVar7->Rotation).Z = 0.0;
    (pFVar7->Rotation).W = 1.0;
    (pFVar7->Location).field0_0x0._s_0.X = 0.0;
    (pFVar7->Location).field0_0x0._s_0.Y = 0.0;
    (pFVar7->Location).field0_0x0._s_0.Z = 0.0;
    pFVar7->Age = 0.0;
    (pFVar7->Normal).field0_0x0._s_0.X = 0.0;
    (pFVar7->Normal).field0_0x0._s_0.Y = 0.0;
    (pFVar7->Normal).field0_0x0._s_0.Z = 0.0;
    pFVar7->Scale = 1.0;
    pFVar7->BaseComponent = (UActorComponent *)0x0;
    pFVar7->bBlocker = false;
    pFVar7->bAlive = true;
    (pFVar7->Type).field0_0x0.DebugPtr = (UFoliageType *)0x0;
    pFVar10 = pFVar7;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (pFVar10->Location).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (pFVar10->Location).field0_0x0._s_0.Y = dVar3;
  (pFVar10->Location).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_78.Roll = 0.0;
  uVar9 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar9;
  local_78.Yaw = (double)(-(uint)(param_3->RandomYaw != 0) & 0x168) *
                 (double)((float)(uVar9 >> 9 | 0x3f800000) - __real_3f800000);
  local_78.Pitch =
       (double)((float)(uVar9 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - __real_3f800000) *
       (double)param_3->RandomPitchAngle;
  pTVar8 = UE::Math::TRotator<double>::Quaternion(&local_78,(TQuat<double> *)&local_58._s_0);
  dVar3 = pTVar8->Y;
  dVar12 = pTVar8->Z;
  dVar5 = pTVar8->W;
  (pFVar10->Rotation).X = pTVar8->X;
  (pFVar10->Rotation).Y = dVar3;
  pFVar10->Age = param_4;
  (pFVar10->Rotation).Z = dVar12;
  (pFVar10->Rotation).W = dVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (pFVar10->Type).field0_0x0.DebugPtr = param_3;
  (pFVar10->Normal).field0_0x0._s_0.X = 0.0;
  (pFVar10->Normal).field0_0x0._s_0.Y = 0.0;
  (pFVar10->Normal).field0_0x0._s_0.Z = 1.0;
  pFVar10->bBlocker = param_5;
  pUVar4 = (pFVar10->Type).field0_0x0.DebugPtr;
  pFVar10->Scale = param_2;
  local_48 = (pFVar10->Location).field0_0x0._s_0.X;
  dVar3 = (pFVar10->Location).field0_0x0._s_0.Y;
  fVar11 = param_2 * pUVar4->ShadeRadius;
  fVar13 = param_2 * pUVar4->CollisionRadius;
  if (fVar11 <= fVar13) {
    fVar11 = fVar13;
  }
  dVar12 = (double)fVar11;
  local_58._s_0.X = local_48 - dVar12;
  local_48 = local_48 + dVar12;
  local_40 = dVar3 + dVar12;
  local_58._s_0.Y = dVar3 - dVar12;
  pTVar1 = &(this->Broadphase).QuadTree.TreeBox.Max;
  if (((((pTVar1->field0_0x0)._s_0.X <= local_58._s_0.X &&
         local_58._s_0.X != (pTVar1->field0_0x0)._s_0.X) ||
       (local_48 < (this->Broadphase).QuadTree.TreeBox.Min.field0_0x0._s_0.X)) ||
      (pdVar2 = &(this->Broadphase).QuadTree.TreeBox.Max.field0_0x0._s_0.Y,
      *pdVar2 <= local_58._s_0.Y && local_58._s_0.Y != *pdVar2)) ||
     (local_40 < (this->Broadphase).QuadTree.TreeBox.Min.field0_0x0._s_0.Y)) {
    pFVar7 = (FProceduralFoliageInstance *)0x0;
  }
  else {
    local_38 = 1;
    local_res8 = pFVar10;
    TQuadTree<FProceduralFoliageInstance_*,4>::Insert
              (&(this->Broadphase).QuadTree,&local_res8,(TBox2<double> *)&local_58._s_0,
               (wchar_t *)0x0);
    bVar6 = HandleOverlaps(this,pFVar10);
    pFVar7 = (FProceduralFoliageInstance *)0x0;
    if (bVar6) {
      pFVar7 = pFVar10;
    }
  }
  return pFVar7;
}

// RemoveInstance @ 145eea410

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
UProceduralFoliageTile::RemoveInstance
          (UProceduralFoliageTile *this,FProceduralFoliageInstance *param_1)

{
  if (param_1->bAlive != false) {
    FProceduralFoliageBroadphase::Remove(&this->Broadphase,param_1);
    param_1->bAlive = false;
  }
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  ::Remove(&this->InstancesSet,param_1);
  ::operator_delete(param_1,0x80);
  return;
}

// RemoveInstances @ 145eea470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProceduralFoliageTile::RemoveInstances(UProceduralFoliageTile *this)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  FProceduralFoliageInstance *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FProceduralFoliageInstance *local_res18;
  FProceduralFoliageInstance *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar2 = &(this->InstancesSet).Elements.field_0x10;
  iVar12 = 0;
  iVar4 = *(int *)&(this->InstancesSet).Elements.field_0x28;
  iVar14 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145eea51d;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar14;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_145eea51d:
  uVar11 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar12);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->InstancesSet).Elements.field_0x8 -
                       *(int *)&(this->InstancesSet).Elements.field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145eea620;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_145eea620:
  while( true ) {
    if (*(int *)&(this->InstancesSet).Elements.field_0x8 -
        *(int *)&(this->InstancesSet).Elements.field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar11) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar5 = *(FProceduralFoliageInstance **)
              (*(longlong *)&(this->InstancesSet).Elements +
              (longlong)TStack_70.CurrentBitIndex * 0x10);
    local_res20 = pFVar5;
    if (pFVar5->bAlive != false) {
      FProceduralFoliageBroadphase::Remove(&this->Broadphase,pFVar5);
      pFVar5->bAlive = false;
      TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
      ::Emplace<FProceduralFoliageInstance_*_const_&>
                (&this->PendingRemovals,&local_res18,(bool *)&local_res20);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  piVar1 = &(this->InstancesArray).ArrayMax;
  (this->InstancesArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&(this->InstancesArray).AllocatorInstance,0,piVar1);
  }
  FlushPendingRemovals(this);
  return;
}

// RunSimulation @ 145eeaa10

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
UProceduralFoliageTile::RunSimulation(UProceduralFoliageTile *this,int param_1,bool param_2)

{
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  UProceduralFoliageSpawner *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  FProceduralFoliageInstance *local_res8;
  undefined4 local_res10;
  undefined1 local_res18 [8];
  TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> local_48;
  
  pUVar3 = (this->FoliageSpawner).field0_0x0.DebugPtr;
  iVar13 = 0;
  iVar15 = (pUVar3->FoliageTypes).ArrayNum;
  pFVar9 = (pUVar3->FoliageTypes).AllocatorInstance.Data;
  pFVar12 = pFVar9 + (longlong)iVar15 * 0x20;
  while( true ) {
    if ((pUVar3->FoliageTypes).ArrayNum != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FFoliageTypeObject_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar9 == pFVar12) break;
    lVar14 = *(longlong *)(pFVar9 + 8);
    iVar7 = iVar13;
    if (lVar14 != 0) {
      if ((*(char *)(lVar14 + 0x370) == '\0') || (*(char *)(lVar14 + 0x371) == '\0')) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6 == param_2) && (iVar7 = *(int *)(lVar14 + 0x354) + 1, iVar7 < iVar13)) {
        iVar7 = iVar13;
      }
    }
    iVar13 = iVar7;
    pFVar9 = pFVar9 + 0x20;
  }
  iVar15 = iVar13;
  if ((-1 < param_1) && (iVar15 = param_1, iVar13 < param_1)) {
    iVar15 = iVar13;
  }
  iVar13 = 0;
  this->bSimulateOnlyInShade = param_2;
  this->SimulationStep = 0;
  if (0 < iVar15) {
    do {
      if ((((this->FoliageSpawner).field0_0x0.DebugPtr)->LastCancel).Counter == this->LastCancel) {
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        if (this->SimulationStep == 0) {
          AddRandomSeeds(this,&local_48);
        }
        else {
          AgeSeeds(this);
          SpreadSeeds(this,&local_48);
        }
        FVar10.Data = local_48.AllocatorInstance.Data;
        iVar7 = local_48.ArrayNum;
        lVar14 = (longlong)local_48.ArrayNum;
        this_00 = &this->InstancesSet;
        if ((local_48.ArrayNum < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(int *)&(this->InstancesSet).Elements.field_0x8 -
                *(int *)&(this->InstancesSet).Elements.field_0x34;
        uVar11 = uVar8 + iVar7;
        if (uVar8 < uVar11) {
          if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,uVar11);
          if (uVar11 < 4) {
            iVar7 = 1;
          }
          else {
            uVar1 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            local_res10 = (undefined4)lVar4;
            iVar7 = 1 << ((byte)lVar4 & 0x1f);
          }
          iVar2 = (this->InstancesSet).HashSize;
          if ((iVar2 == 0) || (iVar2 < iVar7)) {
            (this->InstancesSet).HashSize = iVar7;
            TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
            ::Rehash(this_00);
          }
        }
        pFVar9 = FVar10.Data + lVar14 * 8;
        for (; FVar10.Data != pFVar9; FVar10.Data = FVar10.Data + 8) {
          TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
          ::Emplace<FProceduralFoliageInstance_*_const_&>(this_00,&local_res8,(bool *)FVar10.Data);
        }
        FlushPendingRemovals(this);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
      this->SimulationStep = this->SimulationStep + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar15);
  }
  InstancesToArray(this);
  return;
}

// Simulate @ 145eec050

void __thiscall
UProceduralFoliageTile::Simulate
          (UProceduralFoliageTile *this,UProceduralFoliageSpawner *param_1,int param_2,int param_3,
          int param_4)

{
  this->LastCancel = param_4;
  InitSimulation(this,param_1,param_2);
  RunSimulation(this,param_3,false);
  RunSimulation(this,param_3,true);
  return;
}

// SpreadSeeds @ 145eec760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UProceduralFoliageTile::SpreadSeeds
          (UProceduralFoliageTile *this,
          TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  UFoliageType *this_00;
  UFoliageType *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 local_res8 [8];
  uint local_res18;
  FProceduralFoliageInstance *local_168;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TVector<double>_u_0 local_f8 [8];
  
  puVar1 = &(this->InstancesSet).Elements.field_0x10;
  iVar20 = *(int *)&(this->InstancesSet).Elements.field_0x28;
  local_160 = &this->InstancesSet;
  iStack_158 = 0;
  local_140 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  if (iVar20 != 0) {
    puVar19 = *(uint **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      iStack_144 = iVar20;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_145eec850;
      uVar15 = puVar19[lVar12 + 1];
    }
    uStack_154 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_144 = (int)lVar12 + -1 + local_140;
    if (iVar20 < iStack_144) {
      iStack_144 = iVar20;
    }
  }
LAB_145eec850:
  local_res18 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  iStack_138 = *(int *)&(this->InstancesSet).Elements.field_0x8 -
               *(int *)&(this->InstancesSet).Elements.field_0x34;
  uVar15 = local_res18 & 0xffffffe0;
  TStack_120._padding_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  TStack_120.CurrentBitIndex = iStack_144;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_res18 >> 5;
  TStack_120._28_4_ = iStack_144;
  TStack_120.BaseBitIndex = local_140;
  uStack_100 = CONCAT44(uStack_134,iStack_138);
  local_150 = puVar1;
  iStack_13c = iStack_144;
  local_128 = local_160;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_res18 < 0) || (iVar20 < (int)local_res18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar9 = __real_3fd1eb85;
  fVar8 = __real_c0000000;
  fVar7 = __real_40c90fdb;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  uVar17 = *(uint *)&(this->InstancesSet).Elements.field_0x28;
  if (local_res18 != uVar17) {
    puVar18 = *(undefined1 **)&(this->InstancesSet).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)local_res18 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      local_res18 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_145eec9a0;
      uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_130 = (int)lVar12;
    local_res18 = local_130 + -1 + uVar15;
    if ((int)uVar17 < (int)local_res18) {
      local_res18 = uVar17;
    }
  }
LAB_145eec9a0:
  do {
    pTVar10 = local_128;
    if (*(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34 !=
        (int)uStack_100) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FProceduralFoliageInstance_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((((TStack_120.CurrentBitIndex == local_res18) &&
         (TStack_120.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)&(this->InstancesSet).Elements.field_0x10)) &&
        (pTVar10 == &this->InstancesSet)) ||
       (lVar12 = *(longlong *)
                  (*(longlong *)&pTVar10->Elements + (longlong)TStack_120.CurrentBitIndex * 0x10),
       (((this->FoliageSpawner).field0_0x0.DebugPtr)->LastCancel).Counter != this->LastCancel)) {
      return;
    }
    if ((*(char *)(lVar12 + 0x71) != '\0') &&
       (this_00 = *(UFoliageType **)(lVar12 + 0x60), this->SimulationStep <= this_00->NumSteps)) {
      if ((this_00->bCanGrowInShade == false) || (this_00->bSpawnsInShade == false)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if ((bVar11 == this->bSimulateOnlyInShade) && (iVar20 = 0, 0 < this_00->SeedsPerStep)) {
        do {
          uVar15 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
          (this->RandomStream).Seed = uVar15;
          fVar29 = ((float)(uVar15 >> 9 | 0x3f800000) - fVar6) * this_00->MaxInitialAge;
          fVar21 = UFoliageType::GetScaleForAge(this_00,fVar29);
          iVar14 = 0;
          this_01 = *(UFoliageType **)(lVar12 + 0x60);
          fVar28 = this_01->MaxAge;
          fVar23 = *(float *)(lVar12 + 0x38);
          iVar13 = (int)(fVar28 - (float)this->SimulationStep);
          fVar25 = fVar23;
          if (7 < iVar13) {
            do {
              fVar22 = fVar23 + fVar6;
              fVar25 = fVar23;
              if ((((fVar28 < fVar22) || (fVar23 = fVar22 + fVar6, fVar25 = fVar22, fVar28 < fVar23)
                   ) || (fVar22 = fVar23 + fVar6, fVar25 = fVar23, fVar28 < fVar22)) ||
                 (((fVar23 = fVar22 + fVar6, fVar25 = fVar22, fVar28 < fVar23 ||
                   (fVar22 = fVar23 + fVar6, fVar25 = fVar23, fVar28 < fVar22)) ||
                  ((fVar23 = fVar22 + fVar6, fVar25 = fVar22, fVar28 < fVar23 ||
                   ((fVar22 = fVar23 + fVar6, fVar25 = fVar23, fVar28 < fVar22 ||
                    (fVar23 = fVar22 + fVar6, fVar25 = fVar22, fVar28 < fVar23))))))))
              goto LAB_145eecb65;
              iVar14 = iVar14 + 8;
              fVar25 = fVar23;
            } while (iVar14 < iVar13 + -7);
          }
          while ((iVar14 < iVar13 && (fVar25 + fVar6 <= fVar28))) {
            iVar14 = iVar14 + 1;
            fVar25 = fVar25 + fVar6;
          }
LAB_145eecb65:
          iVar14 = 0;
          fVar22 = fVar29;
          fVar23 = fVar29;
          if (7 < iVar13) {
            do {
              fVar24 = fVar22 + fVar6;
              fVar23 = fVar22;
              if (((((fVar28 < fVar24) ||
                    (fVar22 = fVar24 + fVar6, fVar23 = fVar24, fVar28 < fVar22)) ||
                   (fVar24 = fVar22 + fVar6, fVar23 = fVar22, fVar28 < fVar24)) ||
                  ((fVar22 = fVar24 + fVar6, fVar23 = fVar24, fVar28 < fVar22 ||
                   (fVar24 = fVar22 + fVar6, fVar23 = fVar22, fVar28 < fVar24)))) ||
                 ((fVar22 = fVar24 + fVar6, fVar23 = fVar24, fVar28 < fVar22 ||
                  ((fVar24 = fVar22 + fVar6, fVar23 = fVar22, fVar28 < fVar24 ||
                   (fVar22 = fVar24 + fVar6, fVar23 = fVar24, fVar28 < fVar22))))))
              goto LAB_145eecc0b;
              iVar14 = iVar14 + 8;
              fVar23 = fVar22;
            } while (iVar14 < iVar13 + -7);
          }
          while ((iVar14 < iVar13 && (fVar23 + fVar6 <= fVar28))) {
            iVar14 = iVar14 + 1;
            fVar23 = fVar23 + fVar6;
          }
LAB_145eecc0b:
          fVar25 = UFoliageType::GetScaleForAge(this_01,fVar25);
          fVar23 = UFoliageType::GetScaleForAge(this_01,fVar23);
          fVar28 = this_01->ShadeRadius;
          if (this_01->ShadeRadius <= this_01->CollisionRadius) {
            fVar28 = this_01->CollisionRadius;
          }
          fVar28 = fVar28 * (fVar23 + fVar25);
          uVar15 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
          uVar17 = uVar15 * 0xbb38435 + 0x3619636b;
          fVar23 = (float)(uVar15 >> 9 | 0x3f800000) - fVar6;
          (this->RandomStream).Seed = uVar17;
          if (fVar23 <= fVar5) {
            fVar23 = fVar5;
          }
          fVar25 = logf(fVar23);
          fVar23 = (float)(uVar17 >> 9 | 0x3f800000) - fVar6;
          if (fVar23 <= fVar5) {
            fVar23 = fVar5;
          }
          fVar22 = cosf(fVar23 * fVar7);
          fVar22 = SQRT(fVar25 * fVar8) * fVar22;
          fVar23 = this_00->AverageSpreadDistance;
          if (fVar9 <= fVar22) {
            fVar22 = fVar9;
          }
          if (fVar22 <= __real_bfd1eb85) {
            fVar22 = __real_bfd1eb85;
          }
          fVar25 = this_00->SpreadVariance;
          (this->RandomStream).Seed = uVar17 * 0xbb38435 + 0x3619636b;
          fVar25 = fVar22 * fVar25 * ___real_3f1c18fa;
          __libm_sse2_sincosf_();
          dVar26 = (double)(fVar28 + fVar23 + fVar25);
          dVar27 = (double)extraout_XMM0_Db * dVar26;
          dVar26 = (double)extraout_XMM0_Da * dVar26;
          if ((double)(fVar28 * fVar28) <
              dVar27 * dVar27 + dVar26 * dVar26 + __real_3e45798ee0000000) {
            local_f8[0]._0_8_ = dVar27 + *(double *)(lVar12 + 0x20);
            local_f8[0]._8_8_ = dVar26 + *(double *)(lVar12 + 0x28);
            local_f8[0]._16_8_ = *(double *)(lVar12 + 0x30);
            local_168 = NewSeed(this,(TVector<double> *)&local_f8[0]._s_0,fVar21,this_00,fVar29,
                                false);
            if (local_168 != (FProceduralFoliageInstance *)0x0) {
              pFVar3 = (param_1->AllocatorInstance).Data;
              if (((pFVar3 <= (FScriptContainerElement *)&local_168) &&
                  ((FScriptContainerElement *)&local_168 < pFVar3 + (longlong)param_1->ArrayMax * 8)
                  ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar14 = param_1->ArrayNum;
              if (iVar14 == param_1->ArrayMax) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar14 + 1;
              *(FProceduralFoliageInstance **)
               ((param_1->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_168;
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < this_00->SeedsPerStep);
      }
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  } while( true );
}

// StaticRegisterNativesUProceduralFoliageTile @ 145eed0d0

void __cdecl UProceduralFoliageTile::StaticRegisterNativesUProceduralFoliageTile(void)

{
  return;
}

// StepSimulation @ 145eed0e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProceduralFoliageTile::StepSimulation(UProceduralFoliageTile *this)

{
  TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  longlong lVar11;
  FProceduralFoliageInstance *local_res8;
  TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> local_28;
  
  if ((((this->FoliageSpawner).field0_0x0.DebugPtr)->LastCancel).Counter == this->LastCancel) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if (this->SimulationStep == 0) {
      AddRandomSeeds(this,&local_28);
    }
    else {
      AgeSeeds(this);
      SpreadSeeds(this,&local_28);
    }
    FVar9.Data = local_28.AllocatorInstance.Data;
    iVar8 = local_28.ArrayNum;
    lVar11 = (longlong)local_28.ArrayNum;
    this_00 = &this->InstancesSet;
    if ((local_28.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(int *)&(this->InstancesSet).Elements.field_0x8 -
            *(int *)&(this->InstancesSet).Elements.field_0x34;
    uVar10 = uVar7 + iVar8;
    if (uVar7 < uVar10) {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,uVar10);
      if (uVar10 < 4) {
        iVar8 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar4 & 0x1f);
      }
      iVar3 = (this->InstancesSet).HashSize;
      if ((iVar3 == 0) || (iVar3 < iVar8)) {
        (this->InstancesSet).HashSize = iVar8;
        TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
    }
    pFVar1 = FVar9.Data + lVar11 * 8;
    for (; FVar9.Data != pFVar1; FVar9.Data = FVar9.Data + 8) {
      TSet<FProceduralFoliageInstance_*,DefaultKeyFuncs<FProceduralFoliageInstance_*,0>,FDefaultSetAllocator>
      ::Emplace<FProceduralFoliageInstance_*_const_&>(this_00,&local_res8,(bool *)FVar9.Data);
    }
    FlushPendingRemovals(this);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UserCancelled @ 145eeeb90

bool __thiscall UProceduralFoliageTile::UserCancelled(UProceduralFoliageTile *this)

{
  return (((this->FoliageSpawner).field0_0x0.DebugPtr)->LastCancel).Counter != this->LastCancel;
}

