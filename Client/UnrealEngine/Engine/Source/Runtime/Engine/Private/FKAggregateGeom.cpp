// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticStruct @ 147259360

UScriptStruct * __cdecl FKAggregateGeom::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKAggregateGeom.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKAggregateGeom.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKAggregateGeom,(UObject *)pUVar1,
                         L"KAggregateGeom");
  }
  return Z_Registration_Info_UScriptStruct_FKAggregateGeom.OuterSingleton;
}

// ~FKAggregateGeom @ 14725d960

void __thiscall FKAggregateGeom::~FKAggregateGeom(FKAggregateGeom *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)(this->SkinnedTriangleMeshElems).AllocatorInstance.Data,
             (this->SkinnedTriangleMeshElems).ArrayNum);
  pFVar1 = (this->SkinnedTriangleMeshElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)(this->MLLevelSetElems).AllocatorInstance.Data,
             (this->MLLevelSetElems).ArrayNum);
  pFVar1 = (this->MLLevelSetElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)(this->SkinnedLevelSetElems).AllocatorInstance.Data,
             (this->SkinnedLevelSetElems).ArrayNum);
  pFVar1 = (this->SkinnedLevelSetElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)(this->LevelSetElems).AllocatorInstance.Data,
             (this->LevelSetElems).ArrayNum);
  pFVar1 = (this->LevelSetElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)(this->TaperedCapsuleElems).AllocatorInstance.Data,
             (this->TaperedCapsuleElems).ArrayNum);
  pFVar1 = (this->TaperedCapsuleElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)(this->ConvexElems).AllocatorInstance.Data,(this->ConvexElems).ArrayNum
            );
  pFVar1 = (this->ConvexElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)(this->SphylElems).AllocatorInstance.Data,(this->SphylElems).ArrayNum);
  pFVar1 = (this->SphylElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)(this->BoxElems).AllocatorInstance.Data,(this->BoxElems).ArrayNum);
  pFVar1 = (this->BoxElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)(this->SphereElems).AllocatorInstance.Data,(this->SphereElems).ArrayNum
            );
  pFVar1 = (this->SphereElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CloneAgg @ 14725f000

void __thiscall FKAggregateGeom::CloneAgg(FKAggregateGeom *this,FKAggregateGeom *param_1)

{
  int *piVar1;
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FKTaperedCapsuleElem,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FKMLLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FKSphereElem *pFVar10;
  FKBoxElem *pFVar11;
  FKSphylElem *pFVar12;
  FKConvexElem *pFVar13;
  FKTaperedCapsuleElem *pFVar14;
  FKLevelSetElem *pFVar15;
  FKSkinnedLevelSetElem *pFVar16;
  FKMLLevelSetElem *pFVar17;
  FKSkinnedTriangleMeshElem *pFVar18;
  TArray<FKSkinnedTriangleMeshElem,TSizedDefaultAllocator<32>_> *pTVar19;
  
  if (this != param_1) {
    DestructItems<FKSphereElem,int>
              ((FKSphereElem *)(this->SphereElems).AllocatorInstance.Data,
               (this->SphereElems).ArrayNum);
    iVar9 = (param_1->SphereElems).ArrayNum;
    piVar1 = &(this->SphereElems).ArrayMax;
    pFVar10 = (FKSphereElem *)(param_1->SphereElems).AllocatorInstance.Data;
    (this->SphereElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar9,*piVar1,(ForAnyElementType *)this,iVar9,piVar1);
      ConstructItems<FKSphereElem,FKSphereElem,int>
                ((this->SphereElems).AllocatorInstance.Data,pFVar10,iVar9);
    }
  }
  pTVar2 = &this->BoxElems;
  if (pTVar2 != &param_1->BoxElems) {
    DestructItems<FKBoxElem,int>
              ((FKBoxElem *)(pTVar2->AllocatorInstance).Data,(this->BoxElems).ArrayNum);
    iVar9 = (param_1->BoxElems).ArrayNum;
    piVar1 = &(this->BoxElems).ArrayMax;
    pFVar11 = (FKBoxElem *)(param_1->BoxElems).AllocatorInstance.Data;
    (this->BoxElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar9,*piVar1,&pTVar2->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FKBoxElem,FKBoxElem,int>((pTVar2->AllocatorInstance).Data,pFVar11,iVar9);
    }
  }
  pTVar3 = &this->SphylElems;
  if (pTVar3 != &param_1->SphylElems) {
    DestructItems<FKSphylElem,int>
              ((FKSphylElem *)(pTVar3->AllocatorInstance).Data,(this->SphylElems).ArrayNum);
    iVar9 = (param_1->SphylElems).ArrayNum;
    piVar1 = &(this->SphylElems).ArrayMax;
    pFVar12 = (FKSphylElem *)(param_1->SphylElems).AllocatorInstance.Data;
    (this->SphylElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,iVar9,*piVar1,&pTVar3->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FKSphylElem,FKSphylElem,int>((pTVar3->AllocatorInstance).Data,pFVar12,iVar9);
    }
  }
  pTVar4 = &this->ConvexElems;
  if (pTVar4 != &param_1->ConvexElems) {
    DestructItems<FKConvexElem,int>
              ((FKConvexElem *)(pTVar4->AllocatorInstance).Data,(this->ConvexElems).ArrayNum);
    iVar9 = (param_1->ConvexElems).ArrayNum;
    piVar1 = &(this->ConvexElems).ArrayMax;
    pFVar13 = (FKConvexElem *)(param_1->ConvexElems).AllocatorInstance.Data;
    (this->ConvexElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,0x10,iVar9,*piVar1,&pTVar4->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FKConvexElem,FKConvexElem,int>((pTVar4->AllocatorInstance).Data,pFVar13,iVar9);
    }
  }
  pTVar5 = &this->TaperedCapsuleElems;
  if (pTVar5 != &param_1->TaperedCapsuleElems) {
    DestructItems<FKTaperedCapsuleElem,int>
              ((FKTaperedCapsuleElem *)(pTVar5->AllocatorInstance).Data,
               (this->TaperedCapsuleElems).ArrayNum);
    iVar9 = (param_1->TaperedCapsuleElems).ArrayNum;
    piVar1 = &(this->TaperedCapsuleElems).ArrayMax;
    pFVar14 = (FKTaperedCapsuleElem *)(param_1->TaperedCapsuleElems).AllocatorInstance.Data;
    (this->TaperedCapsuleElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar9,*piVar1,&pTVar5->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FKTaperedCapsuleElem,FKTaperedCapsuleElem,int>
                ((pTVar5->AllocatorInstance).Data,pFVar14,iVar9);
    }
  }
  pTVar6 = &this->LevelSetElems;
  if (pTVar6 != &param_1->LevelSetElems) {
    DestructItems<FKLevelSetElem,int>
              ((FKLevelSetElem *)(pTVar6->AllocatorInstance).Data,(this->LevelSetElems).ArrayNum);
    iVar9 = (param_1->LevelSetElems).ArrayNum;
    piVar1 = &(this->LevelSetElems).ArrayMax;
    pFVar15 = (FKLevelSetElem *)(param_1->LevelSetElems).AllocatorInstance.Data;
    (this->LevelSetElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,0x10,iVar9,*piVar1,&pTVar6->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FKLevelSetElem,FKLevelSetElem,int>
                ((pTVar6->AllocatorInstance).Data,pFVar15,iVar9);
    }
  }
  pTVar7 = &this->SkinnedLevelSetElems;
  if (pTVar7 != &param_1->SkinnedLevelSetElems) {
    DestructItems<FKSkinnedLevelSetElem,int>
              ((FKSkinnedLevelSetElem *)(pTVar7->AllocatorInstance).Data,
               (this->SkinnedLevelSetElems).ArrayNum);
    iVar9 = (param_1->SkinnedLevelSetElems).ArrayNum;
    piVar1 = &(this->SkinnedLevelSetElems).ArrayMax;
    pFVar16 = (FKSkinnedLevelSetElem *)(param_1->SkinnedLevelSetElems).AllocatorInstance.Data;
    (this->SkinnedLevelSetElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar9,*piVar1,&pTVar7->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FKSkinnedLevelSetElem,FKSkinnedLevelSetElem,int>
                ((pTVar7->AllocatorInstance).Data,pFVar16,iVar9);
    }
  }
  pTVar8 = &this->MLLevelSetElems;
  if (pTVar8 != &param_1->MLLevelSetElems) {
    DestructItems<FKMLLevelSetElem,int>
              ((FKMLLevelSetElem *)(pTVar8->AllocatorInstance).Data,(this->MLLevelSetElems).ArrayNum
              );
    iVar9 = (param_1->MLLevelSetElems).ArrayNum;
    piVar1 = &(this->MLLevelSetElems).ArrayMax;
    pFVar17 = (FKMLLevelSetElem *)(param_1->MLLevelSetElems).AllocatorInstance.Data;
    (this->MLLevelSetElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar9,*piVar1,&pTVar8->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FKMLLevelSetElem,FKMLLevelSetElem,int>
                ((pTVar8->AllocatorInstance).Data,pFVar17,iVar9);
    }
  }
  pTVar19 = &this->SkinnedTriangleMeshElems;
  if (pTVar19 != &param_1->SkinnedTriangleMeshElems) {
    DestructItems<FKSkinnedTriangleMeshElem,int>
              ((FKSkinnedTriangleMeshElem *)(pTVar19->AllocatorInstance).Data,
               (this->SkinnedTriangleMeshElems).ArrayNum);
    iVar9 = (param_1->SkinnedTriangleMeshElems).ArrayNum;
    piVar1 = &(this->SkinnedTriangleMeshElems).ArrayMax;
    pFVar18 = (FKSkinnedTriangleMeshElem *)
              (param_1->SkinnedTriangleMeshElems).AllocatorInstance.Data;
    (this->SkinnedTriangleMeshElems).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar9,*piVar1,&pTVar19->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FKSkinnedTriangleMeshElem,FKSkinnedTriangleMeshElem,int>
              ((pTVar19->AllocatorInstance).Data,pFVar18,iVar9);
  }
  return;
}

// CalcAABB @ 1476f1a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKAggregateGeom::CalcAABB
          (FKAggregateGeom *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uint uVar18;
  bool bVar19;
  uint uVar20;
  TBox<double> *pTVar21;
  TMatrix<double> *pTVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_608 [32];
  longlong local_5e8;
  longlong local_5e0;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 local_5c0;
  TVector<double>_u_0 local_5a8;
  TVector<double>_u_0 local_590;
  double local_578;
  double dStack_570;
  double local_568;
  double local_560;
  double dStack_558;
  double local_550;
  double local_548;
  double dStack_540;
  double local_538;
  undefined1 local_500;
  undefined7 uStack_4ff;
  TBox<double> local_4f8;
  TBox<double> local_4c0;
  TBox<double> local_488;
  TBox<double> local_450;
  TBox<double> local_418;
  TVector<double>_u_0 local_3e0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  char local_3b0;
  undefined7 uStack_3af;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TBox<double> local_1c8;
  TBox<double> local_190;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_608;
  local_578 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_570 = (param_1->Scale3D).XY.m128d_f64[1];
  local_568 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar32 = (param_1->Rotation).XY.m128d_f64[0];
  dVar8 = (param_1->Rotation).XY.m128d_f64[1];
  dVar9 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
  uVar26 = 0;
  fVar48 = (float)local_578;
  fVar47 = (float)dStack_570;
  local_3a8.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_3a8.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  fVar46 = (float)local_568;
  local_3a8.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_3a8.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_3a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  auVar43._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
  auVar43._0_8_ = auVar43._8_8_;
  local_3a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  dVar36 = dVar32 * dVar32 + dVar9 * dVar9;
  dVar41 = dVar8 * dVar8 + dVar10 * dVar10;
  auVar33._8_4_ = SUB84(dVar41,0);
  auVar33._0_8_ = dVar36;
  auVar33._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  auVar34._0_8_ = auVar33._8_8_ + dVar36;
  auVar34._8_8_ = dVar36 + dVar41;
  auVar44 = sqrtpd(auVar43,auVar34);
  uVar28 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar34._0_8_);
  uVar30 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar34._8_8_);
  uVar29 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar34._0_8_);
  uVar31 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar34._8_8_);
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
  auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
  auVar39._0_8_ = uVar28 & (ulonglong)(auVar38._0_8_ * dVar32);
  uVar25 = uVar30 & (ulonglong)(auVar38._8_8_ * dVar8);
  auVar39._8_4_ = (undefined4)uVar25;
  auVar39._12_4_ = (undefined4)(uVar25 >> 0x20);
  auVar35._0_8_ = uVar29 & (ulonglong)(auVar44._0_8_ * dVar9);
  uVar25 = uVar31 & (ulonglong)(auVar44._8_8_ * dVar10);
  auVar35._8_4_ = (undefined4)uVar25;
  auVar35._12_4_ = (undefined4)(uVar25 >> 0x20);
  auVar44._4_4_ = ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar44._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar44._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar44._12_4_ = ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_3a8.Rotation.XY.m128d_f64 = (double  [2])(auVar39 | auVar44);
  uVar27 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar20 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar24 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  auVar38._4_4_ = ~(uint)(uVar29 >> 0x20) & uVar20;
  auVar38._0_4_ = ~(uint)uVar29 & uVar27;
  auVar38._8_4_ = ~(uint)uVar31 & uVar24;
  auVar38._12_4_ = ~(uint)(uVar31 >> 0x20) & uVar7;
  local_3a8.Rotation.ZW.m128d_f64 = (double  [2])(auVar35 | auVar38);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  fVar45 = fVar48;
  fVar42 = (float)((uint)fVar48 & uVar18);
  if ((float)((uint)fVar47 & uVar18) < (float)((uint)fVar48 & uVar18)) {
    fVar45 = fVar47;
    fVar42 = (float)((uint)fVar47 & uVar18);
  }
  if ((float)((uint)fVar46 & uVar18) < fVar42) {
    fVar45 = fVar46;
  }
  iVar23 = (this->SphereElems).ArrayNum;
  uVar27 = 0;
  if (0 < iVar23) {
    dVar32 = (double)fVar45;
    uVar25 = uVar26;
    uVar28 = uVar26;
    do {
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e0 = (longlong)iVar23;
        local_5e8 = (longlong)(int)uVar24;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      pFVar5 = (this->SphereElems).AllocatorInstance.Data;
      local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_348.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_348.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_348.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_348.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_348.Translation.XY.m128d_f64[0] = *(double *)(pFVar5 + uVar28 + 0x30) * dVar32;
      local_348.Translation.XY.m128d_f64[1] = *(double *)(pFVar5 + uVar28 + 0x30 + 8) * dVar32;
      local_348.Translation.ZW.m128d_f64[0] = *(double *)(pFVar5 + uVar28 + 0x40) * dVar32;
      local_348.Translation.ZW.m128d_f64[1] = 0.0;
      local_560 = dVar32;
      dStack_558 = dVar32;
      local_550 = dVar32;
      UE::Math::TTransform<double>::Multiply(&local_348,&local_348,&local_3a8);
      local_548 = local_348.Translation.XY.m128d_f64[0];
      dStack_540 = local_348.Translation.XY.m128d_f64[1];
      local_538 = local_348.Translation.ZW.m128d_f64[0];
      local_500 = 1;
      fVar42 = fVar45 * *(float *)(pFVar5 + uVar28 + 0x48);
      dVar41 = (double)((float)local_348.Translation.XY.m128d_f64[0] + fVar42);
      dVar10 = (double)((float)local_348.Translation.XY.m128d_f64[0] - fVar42);
      dVar37 = (double)((float)local_348.Translation.XY.m128d_f64[1] - fVar42);
      dVar36 = (double)((float)local_348.Translation.ZW.m128d_f64[0] - fVar42);
      dVar9 = (double)((float)local_348.Translation.XY.m128d_f64[1] + fVar42);
      dVar8 = (double)((float)local_348.Translation.ZW.m128d_f64[0] + fVar42);
      if (__return_storage_ptr__->IsValid == '\0') {
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar10;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar37;
        auVar40._8_8_ = dVar41;
        auVar40._0_8_ = dVar36;
        *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = auVar40
        ;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar9;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
        __return_storage_ptr__->IsValid = 1;
        __return_storage_ptr__->Pad[0] = (char)uStack_4ff;
        __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_4ff >> 8);
        __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_4ff >> 0x10);
        __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_4ff >> 0x18);
        __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_4ff >> 0x20);
        __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_4ff >> 0x28);
        __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_4ff >> 0x30);
      }
      else {
        dVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar2 <= dVar37) {
          dVar37 = dVar2;
        }
        dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar2 <= dVar10) {
          dVar10 = dVar2;
        }
        dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar2) {
          dVar8 = dVar2;
        }
        if (dVar36 <= dVar1) {
          dVar1 = dVar36;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar37;
        dVar36 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar36 <= dVar41) {
          dVar36 = dVar41;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar10;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
        dVar10 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar10 <= dVar9) {
          dVar10 = dVar9;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar36;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar10;
      }
      iVar23 = (this->SphereElems).ArrayNum;
      uVar25 = (ulonglong)(uVar24 + 1);
      uVar28 = uVar28 + 0x50;
    } while ((int)(uVar24 + 1) < iVar23);
  }
  uVar25 = uVar26;
  if (0 < (this->BoxElems).ArrayNum) {
    do {
      iVar23 = (this->BoxElems).ArrayNum;
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      pTVar21 = FKBoxElem::CalcAABB((FKBoxElem *)
                                    ((this->BoxElems).AllocatorInstance.Data +
                                    (longlong)(int)uVar24 * 0x70),&local_1c8,&local_3a8,fVar45);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (pTVar21->IsValid != '\0') {
          dVar32 = (pTVar21->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar21->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar32;
          uVar11 = pTVar21->Pad[0];
          uVar12 = pTVar21->Pad[1];
          uVar13 = pTVar21->Pad[2];
          uVar14 = pTVar21->Pad[3];
          uVar15 = pTVar21->Pad[4];
          uVar16 = pTVar21->Pad[5];
          uVar17 = pTVar21->Pad[6];
          __return_storage_ptr__->IsValid = pTVar21->IsValid;
          __return_storage_ptr__->Pad[0] = uVar11;
          __return_storage_ptr__->Pad[1] = uVar12;
          __return_storage_ptr__->Pad[2] = uVar13;
          __return_storage_ptr__->Pad[3] = uVar14;
          __return_storage_ptr__->Pad[4] = uVar15;
          __return_storage_ptr__->Pad[5] = uVar16;
          __return_storage_ptr__->Pad[6] = uVar17;
        }
      }
      else if (pTVar21->IsValid != '\0') {
        dVar8 = (pTVar21->Min).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->BoxElems).ArrayNum);
  }
  uVar25 = uVar26;
  if (0 < (this->SphylElems).ArrayNum) {
    do {
      iVar23 = (this->SphylElems).ArrayNum;
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      pTVar21 = FKSphylElem::CalcAABB
                          ((FKSphylElem *)
                           ((this->SphylElems).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x68
                           ),&local_190,&local_3a8,fVar45);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (pTVar21->IsValid != '\0') {
          dVar32 = (pTVar21->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar21->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar32;
          uVar11 = pTVar21->Pad[0];
          uVar12 = pTVar21->Pad[1];
          uVar13 = pTVar21->Pad[2];
          uVar14 = pTVar21->Pad[3];
          uVar15 = pTVar21->Pad[4];
          uVar16 = pTVar21->Pad[5];
          uVar17 = pTVar21->Pad[6];
          __return_storage_ptr__->IsValid = pTVar21->IsValid;
          __return_storage_ptr__->Pad[0] = uVar11;
          __return_storage_ptr__->Pad[1] = uVar12;
          __return_storage_ptr__->Pad[2] = uVar13;
          __return_storage_ptr__->Pad[3] = uVar14;
          __return_storage_ptr__->Pad[4] = uVar15;
          __return_storage_ptr__->Pad[5] = uVar16;
          __return_storage_ptr__->Pad[6] = uVar17;
        }
      }
      else if (pTVar21->IsValid != '\0') {
        dVar8 = (pTVar21->Min).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->SphylElems).ArrayNum);
  }
  uVar27 = 0;
  if (0 < (this->ConvexElems).ArrayNum) {
    uVar25 = uVar26;
    do {
      iVar23 = (this->ConvexElems).ArrayNum;
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      pFVar5 = (this->ConvexElems).AllocatorInstance.Data;
      local_228.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
      local_228.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
      local_228.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
      local_228.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
      local_228.Translation.XY.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_228.Translation.XY.m128d_f64[1] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_228.Translation.ZW.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_228.Translation.ZW.m128d_f64[1] = 0.0;
      local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_228.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar47,0);
      local_228.Scale3D.XY.m128d_f64[0] = (double)fVar48;
      local_228.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar47 >> 0x20);
      local_228.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_228.Scale3D.ZW.m128d_f64[0] = (double)fVar46;
      UE::Math::TTransform<double>::Multiply(&local_2e8,&local_228,&local_3a8);
      local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_288.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_288.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_288.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_288.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_288.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_288.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_288,(TTransform<double> *)(pFVar5 + (longlong)(int)uVar24 * 0x100 + 0x90),
                 &local_2e8);
      pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_288,&local_158);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)(pFVar5 + (longlong)(int)uVar24 * 0x100 + 0x50),
                 (TBox<double> *)&local_3e0._s_0,pTVar22);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (local_3b0 != '\0') {
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_3e0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_3e0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_3e0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_3c8;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_3c0;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_3b8;
          __return_storage_ptr__->IsValid = local_3b0;
          __return_storage_ptr__->Pad[0] = (char)uStack_3af;
          __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_3af >> 8);
          __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_3af >> 0x10);
          __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_3af >> 0x18);
          __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_3af >> 0x20);
          __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_3af >> 0x28);
          __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_3af >> 0x30);
        }
      }
      else if (local_3b0 != '\0') {
        uVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (local_3e0._s_0.Y <= (double)uVar3) {
          uVar3 = local_3e0._s_0.Y;
        }
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        uVar4 = local_3e0._s_0.X;
        if (dVar32 <= local_3e0._s_0.X) {
          uVar4 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)uVar3;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        dVar8 = dStack_3c8;
        if (dStack_3c8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)uVar4;
        uVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (local_3e0._s_0.Z <= (double)uVar3) {
          uVar3 = local_3e0._s_0.Z;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        dVar8 = dStack_3b8;
        if (dStack_3b8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)uVar3;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar32 <= local_3c0) {
          dVar32 = local_3c0;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar32;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->ConvexElems).ArrayNum);
  }
  uVar25 = uVar26;
  if (0 < (this->TaperedCapsuleElems).ArrayNum) {
    do {
      iVar23 = (this->TaperedCapsuleElems).ArrayNum;
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      pTVar21 = FKTaperedCapsuleElem::CalcAABB
                          ((FKTaperedCapsuleElem *)
                           ((this->TaperedCapsuleElems).AllocatorInstance.Data +
                           (longlong)(int)uVar24 * 0x70),&local_4f8,&local_3a8,fVar45);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (pTVar21->IsValid != '\0') {
          dVar32 = (pTVar21->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar21->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar32;
          uVar11 = pTVar21->Pad[0];
          uVar12 = pTVar21->Pad[1];
          uVar13 = pTVar21->Pad[2];
          uVar14 = pTVar21->Pad[3];
          uVar15 = pTVar21->Pad[4];
          uVar16 = pTVar21->Pad[5];
          uVar17 = pTVar21->Pad[6];
          __return_storage_ptr__->IsValid = pTVar21->IsValid;
          __return_storage_ptr__->Pad[0] = uVar11;
          __return_storage_ptr__->Pad[1] = uVar12;
          __return_storage_ptr__->Pad[2] = uVar13;
          __return_storage_ptr__->Pad[3] = uVar14;
          __return_storage_ptr__->Pad[4] = uVar15;
          __return_storage_ptr__->Pad[5] = uVar16;
          __return_storage_ptr__->Pad[6] = uVar17;
        }
      }
      else if (pTVar21->IsValid != '\0') {
        dVar8 = (pTVar21->Min).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar32 = (pTVar21->Max).field0_0x0._s_0.Y;
        dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar32 = dVar8;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar32;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->TaperedCapsuleElems).ArrayNum);
  }
  if (0 < (this->LevelSetElems).ArrayNum) {
    uVar25 = uVar26;
    do {
      iVar23 = (this->LevelSetElems).ArrayNum;
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      local_5d8._s_0.X = (double)fVar48;
      local_5d8._s_0.Y = (double)fVar47;
      local_5d8._s_0.Z = (double)fVar46;
      pTVar21 = FKLevelSetElem::CalcAABB
                          ((FKLevelSetElem *)
                           ((this->LevelSetElems).AllocatorInstance.Data +
                           (longlong)(int)uVar24 * 0xa0),&local_4c0,&local_3a8,
                           (TVector<double> *)&local_5d8._s_0);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (pTVar21->IsValid != '\0') {
          dVar32 = (pTVar21->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar21->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar32;
          uVar11 = pTVar21->Pad[0];
          uVar12 = pTVar21->Pad[1];
          uVar13 = pTVar21->Pad[2];
          uVar14 = pTVar21->Pad[3];
          uVar15 = pTVar21->Pad[4];
          uVar16 = pTVar21->Pad[5];
          uVar17 = pTVar21->Pad[6];
          __return_storage_ptr__->IsValid = pTVar21->IsValid;
          __return_storage_ptr__->Pad[0] = uVar11;
          __return_storage_ptr__->Pad[1] = uVar12;
          __return_storage_ptr__->Pad[2] = uVar13;
          __return_storage_ptr__->Pad[3] = uVar14;
          __return_storage_ptr__->Pad[4] = uVar15;
          __return_storage_ptr__->Pad[5] = uVar16;
          __return_storage_ptr__->Pad[6] = uVar17;
        }
      }
      else if (pTVar21->IsValid != '\0') {
        dVar8 = (pTVar21->Min).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar32 = (pTVar21->Max).field0_0x0._s_0.Y;
        dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar32 = dVar8;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar32;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->LevelSetElems).ArrayNum);
  }
  if (0 < (this->SkinnedLevelSetElems).ArrayNum) {
    uVar25 = uVar26;
    do {
      iVar23 = (this->SkinnedLevelSetElems).ArrayNum;
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      local_5c0._s_0.X = (double)fVar48;
      local_5c0._s_0.Y = (double)fVar47;
      local_5c0._s_0.Z = (double)fVar46;
      pTVar21 = FKSkinnedLevelSetElem::CalcAABB
                          ((FKSkinnedLevelSetElem *)
                           ((this->SkinnedLevelSetElems).AllocatorInstance.Data +
                           (longlong)(int)uVar24 * 0x38),&local_488,&local_3a8,
                           (TVector<double> *)&local_5c0._s_0);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (pTVar21->IsValid != '\0') {
          dVar32 = (pTVar21->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar21->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar32;
          uVar11 = pTVar21->Pad[0];
          uVar12 = pTVar21->Pad[1];
          uVar13 = pTVar21->Pad[2];
          uVar14 = pTVar21->Pad[3];
          uVar15 = pTVar21->Pad[4];
          uVar16 = pTVar21->Pad[5];
          uVar17 = pTVar21->Pad[6];
          __return_storage_ptr__->IsValid = pTVar21->IsValid;
          __return_storage_ptr__->Pad[0] = uVar11;
          __return_storage_ptr__->Pad[1] = uVar12;
          __return_storage_ptr__->Pad[2] = uVar13;
          __return_storage_ptr__->Pad[3] = uVar14;
          __return_storage_ptr__->Pad[4] = uVar15;
          __return_storage_ptr__->Pad[5] = uVar16;
          __return_storage_ptr__->Pad[6] = uVar17;
        }
      }
      else if (pTVar21->IsValid != '\0') {
        dVar8 = (pTVar21->Min).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar32 = (pTVar21->Max).field0_0x0._s_0.Y;
        dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar32 = dVar8;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar32;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->SkinnedLevelSetElems).ArrayNum);
  }
  if (0 < (this->MLLevelSetElems).ArrayNum) {
    uVar25 = uVar26;
    do {
      iVar23 = (this->MLLevelSetElems).ArrayNum;
      uVar24 = (uint)uVar25;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      local_5a8._s_0.X = (double)fVar48;
      local_5a8._s_0.Y = (double)fVar47;
      local_5a8._s_0.Z = (double)fVar46;
      pTVar21 = FKMLLevelSetElem::CalcAABB
                          ((FKMLLevelSetElem *)
                           ((this->MLLevelSetElems).AllocatorInstance.Data +
                           (longlong)(int)uVar24 * 0x50),&local_450,&local_3a8,
                           (TVector<double> *)&local_5a8._s_0);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (pTVar21->IsValid != '\0') {
          dVar32 = (pTVar21->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar21->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar32;
          uVar11 = pTVar21->Pad[0];
          uVar12 = pTVar21->Pad[1];
          uVar13 = pTVar21->Pad[2];
          uVar14 = pTVar21->Pad[3];
          uVar15 = pTVar21->Pad[4];
          uVar16 = pTVar21->Pad[5];
          uVar17 = pTVar21->Pad[6];
          __return_storage_ptr__->IsValid = pTVar21->IsValid;
          __return_storage_ptr__->Pad[0] = uVar11;
          __return_storage_ptr__->Pad[1] = uVar12;
          __return_storage_ptr__->Pad[2] = uVar13;
          __return_storage_ptr__->Pad[3] = uVar14;
          __return_storage_ptr__->Pad[4] = uVar15;
          __return_storage_ptr__->Pad[5] = uVar16;
          __return_storage_ptr__->Pad[6] = uVar17;
        }
      }
      else if (pTVar21->IsValid != '\0') {
        dVar8 = (pTVar21->Min).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar32 = (pTVar21->Max).field0_0x0._s_0.Y;
        dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar32 = dVar8;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar32;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->MLLevelSetElems).ArrayNum);
  }
  if (0 < (this->SkinnedTriangleMeshElems).ArrayNum) {
    do {
      iVar23 = (this->SkinnedTriangleMeshElems).ArrayNum;
      uVar24 = (uint)uVar26;
      uVar20 = uVar27;
      if ((int)uVar24 < iVar23) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_5e8 = (longlong)(int)uVar24;
        local_5e0 = (longlong)iVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          pTVar21 = (TBox<double> *)(*pcVar6)();
          return pTVar21;
        }
      }
      local_590._s_0.X = (double)fVar48;
      local_590._s_0.Y = (double)fVar47;
      local_590._s_0.Z = (double)fVar46;
      pTVar21 = FKSkinnedTriangleMeshElem::CalcAABB
                          ((FKSkinnedTriangleMeshElem *)
                           ((this->SkinnedTriangleMeshElems).AllocatorInstance.Data +
                           (longlong)(int)uVar24 * 0x38),&local_418,&local_3a8,
                           (TVector<double> *)&local_590._s_0);
      if (__return_storage_ptr__->IsValid == '\0') {
        if (pTVar21->IsValid != '\0') {
          dVar32 = (pTVar21->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar21->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar21->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar32;
          dVar32 = (pTVar21->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar21->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar32;
          uVar11 = pTVar21->Pad[0];
          uVar12 = pTVar21->Pad[1];
          uVar13 = pTVar21->Pad[2];
          uVar14 = pTVar21->Pad[3];
          uVar15 = pTVar21->Pad[4];
          uVar16 = pTVar21->Pad[5];
          uVar17 = pTVar21->Pad[6];
          __return_storage_ptr__->IsValid = pTVar21->IsValid;
          __return_storage_ptr__->Pad[0] = uVar11;
          __return_storage_ptr__->Pad[1] = uVar12;
          __return_storage_ptr__->Pad[2] = uVar13;
          __return_storage_ptr__->Pad[3] = uVar14;
          __return_storage_ptr__->Pad[4] = uVar15;
          __return_storage_ptr__->Pad[5] = uVar16;
          __return_storage_ptr__->Pad[6] = uVar17;
        }
      }
      else if (pTVar21->IsValid != '\0') {
        dVar8 = (pTVar21->Min).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Y;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = (pTVar21->Min).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
        if (dVar32 <= dVar8) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar8;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.X;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        dVar32 = (pTVar21->Max).field0_0x0._s_0.Y;
        dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        if (dVar32 <= dVar8) {
          dVar32 = dVar8;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar32;
        dVar8 = (pTVar21->Max).field0_0x0._s_0.Z;
        dVar32 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
        if (dVar8 <= dVar32) {
          dVar8 = dVar32;
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
      }
      uVar26 = (ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (this->SkinnedTriangleMeshElems).ArrayNum);
  }
  return __return_storage_ptr__;
}

// CalcBoxSphereBounds @ 1476f43a0

void __thiscall
FKAggregateGeom::CalcBoxSphereBounds
          (FKAggregateGeom *this,TBoxSphereBounds<double,double> *param_1,
          TTransform<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar38;
  double dVar37;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  TVector<double>_u_0 local_128;
  double local_110;
  double local_108;
  double local_100;
  TBoxSphereBounds<double,double> *local_f0;
  undefined1 local_e8 [16];
  
  local_f0 = param_1;
  CalcAABB(this,(TBox<double> *)&local_128._s_0,param_2);
  dVar30 = __real_3fe0000000000000;
  iVar3 = (this->SphereElems).ArrayNum;
  if (iVar3 == 0) {
    if (((this->SphylElems).ArrayNum == 0) && ((this->BoxElems).ArrayNum == 0)) {
      uVar15 = 0;
      fVar42 = 0.0;
      dVar18 = (local_128._s_0.X + local_110) * __real_3fe0000000000000;
      dVar19 = (local_128._s_0.Y + local_108) * __real_3fe0000000000000;
      dVar27 = (local_128._s_0.Z + local_100) * __real_3fe0000000000000;
      if (0 < (this->ConvexElems).ArrayNum) {
        lVar14 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar15 < (this->ConvexElems).ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->ConvexElems).AllocatorInstance.Data;
          uVar13 = 0;
          if (0 < *(int *)(pFVar4 + lVar14 + 0x38)) {
            lVar16 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar13 < *(int *)(pFVar4 + lVar14 + 0x38)) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              auVar24 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
              uVar13 = uVar13 + 1;
              auVar22 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
              dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
              pdVar1 = (double *)(lVar16 + *(longlong *)(pFVar4 + lVar14 + 0x30));
              lVar2 = lVar16 + 0x10;
              lVar16 = lVar16 + 0x18;
              dVar7 = *(double *)(lVar2 + *(longlong *)(pFVar4 + lVar14 + 0x30)) *
                      (param_2->Scale3D).ZW.m128d_f64[0];
              dVar34 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
              dVar37 = (param_2->Scale3D).XY.m128d_f64[0] * *pdVar1;
              dVar6 = (param_2->Scale3D).XY.m128d_f64[1] * pdVar1[1];
              uVar38 = (undefined4)((ulonglong)dVar6 >> 0x20);
              local_e8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
              auVar39._8_4_ = SUB84(dVar6,0);
              auVar39._0_8_ = dVar37;
              auVar39._12_4_ = uVar38;
              auVar28 = blendpd(local_e8,auVar24,2);
              dVar35 = auVar24._0_8_;
              auVar40._0_8_ = auVar39._8_8_ * local_e8._0_8_ - local_e8._8_8_ * dVar37;
              auVar40._8_8_ = dVar7 * local_e8._8_8_ - dVar35 * dVar6;
              auVar31._8_4_ = SUB84(dVar6,0);
              auVar31._0_8_ = dVar37;
              auVar31._12_4_ = uVar38;
              auVar20._8_4_ = SUB84(dVar34,0);
              auVar20._0_8_ = dVar7;
              auVar20._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
              auVar20 = blendpd(auVar31,auVar20,2);
              auVar21._0_8_ = auVar20._0_8_ * dVar35 - auVar28._0_8_ * dVar7;
              auVar21._8_8_ = auVar20._8_8_ * auVar24._8_8_ - auVar28._8_8_ * dVar34;
              auVar20 = blendpd(auVar40,auVar21,2);
              dVar34 = auVar40._8_8_ + auVar40._8_8_;
              dVar36 = auVar21._0_8_ + auVar21._0_8_;
              auVar41._0_8_ = auVar20._0_8_ + auVar20._0_8_;
              auVar41._8_8_ = auVar20._8_8_ + auVar20._8_8_;
              auVar32._8_4_ = SUB84(dVar36,0);
              auVar32._0_8_ = dVar34;
              uVar38 = (undefined4)((ulonglong)dVar36 >> 0x20);
              auVar32._12_4_ = uVar38;
              auVar28._8_4_ = SUB84(dVar36,0);
              auVar28._0_8_ = dVar34;
              auVar28._12_4_ = uVar38;
              auVar20 = blendpd(auVar28,auVar41,2);
              auVar31 = blendpd(auVar22,auVar24,2);
              auVar33._0_8_ = auVar32._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar34;
              auVar33._8_8_ = auVar41._0_8_ * auVar22._8_8_ - dVar35 * dVar36;
              auVar22._8_4_ = SUB84(auVar33._8_8_,0);
              auVar22._0_8_ = auVar33._0_8_;
              auVar22._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
              auVar29._0_8_ = auVar20._0_8_ * dVar35 - auVar31._0_8_ * auVar41._0_8_;
              auVar29._8_8_ = auVar20._8_8_ * auVar24._8_8_ - auVar31._8_8_ * auVar41._8_8_;
              auVar20 = blendpd(auVar33,auVar29,2);
              dVar35 = dVar34 * dVar10 + dVar37 + auVar22._8_8_ +
                       (param_2->Translation).XY.m128d_f64[0];
              dVar37 = dVar36 * dVar10 + dVar6 + auVar29._0_8_ +
                       (param_2->Translation).XY.m128d_f64[1];
              auVar9._4_8_ = auVar29._0_8_;
              auVar9._0_4_ = (int)((ulonglong)dVar35 >> 0x20);
              auVar24._0_8_ = auVar9._0_8_ << 0x20;
              auVar24._8_4_ = SUB84(dVar37,0);
              auVar24._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
              fVar26 = (float)dVar35 - (float)dVar18;
              fVar25 = (float)auVar24._8_8_ - (float)dVar19;
              fVar17 = (float)(auVar41._0_8_ * dVar10 + dVar7 + auVar20._0_8_ +
                              (param_2->Translation).ZW.m128d_f64[0]) - (float)dVar27;
              fVar17 = fVar26 * fVar26 + fVar25 * fVar25 + fVar17 * fVar17;
              if (fVar17 <= fVar42) {
                fVar17 = fVar42;
              }
              fVar42 = fVar17;
            } while ((int)uVar13 < *(int *)(pFVar4 + lVar14 + 0x38));
          }
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 0x100;
          param_1 = local_f0;
        } while ((int)uVar15 < (this->ConvexElems).ArrayNum);
      }
      dVar18 = (local_100 - local_128._s_0.Z) * dVar30;
      dVar27 = (local_108 - local_128._s_0.Y) * dVar30;
      (param_1->BoxExtent).field0_0x0._s_0.X = (local_110 - local_128._s_0.X) * dVar30;
      (param_1->BoxExtent).field0_0x0._s_0.Y = dVar27;
      (param_1->BoxExtent).field0_0x0._s_0.Z = dVar18;
      (param_1->Origin).field0_0x0._s_0.X =
           local_128._s_0.X + (param_1->BoxExtent).field0_0x0._s_0.X;
      (param_1->Origin).field0_0x0._s_0.Y = dVar27 + local_128._s_0.Y;
      (param_1->Origin).field0_0x0._s_0.Z = dVar18 + local_128._s_0.Z;
      param_1->SphereRadius = (double)SQRT(fVar42);
      return;
    }
  }
  else if ((((iVar3 == 1) && ((this->SphylElems).ArrayNum == 0)) && ((this->BoxElems).ArrayNum == 0)
           ) && ((this->ConvexElems).ArrayNum == 0)) {
    dVar18 = (local_108 - local_128._s_0.Y) * __real_3fe0000000000000;
    dVar27 = (local_100 - local_128._s_0.Z) * __real_3fe0000000000000;
    (param_1->BoxExtent).field0_0x0._s_0.X =
         (local_110 - local_128._s_0.X) * __real_3fe0000000000000;
    (param_1->BoxExtent).field0_0x0._s_0.Y = dVar18;
    (param_1->BoxExtent).field0_0x0._s_0.Z = dVar27;
    dVar30 = (param_1->BoxExtent).field0_0x0._s_0.X;
    (param_1->Origin).field0_0x0._s_0.X = local_128._s_0.X + dVar30;
    (param_1->Origin).field0_0x0._s_0.Y = dVar18 + local_128._s_0.Y;
    (param_1->Origin).field0_0x0._s_0.Z = dVar27 + local_128._s_0.Z;
    param_1->SphereRadius = dVar30;
    return;
  }
  local_108 = local_108 - local_128._s_0.Y;
  local_110 = local_110 - local_128._s_0.X;
  local_100 = local_100 - local_128._s_0.Z;
  dVar27 = local_108 * __real_3fe0000000000000;
  dVar18 = local_110 * __real_3fe0000000000000;
  dVar30 = local_100 * __real_3fe0000000000000;
  auVar23._0_8_ = dVar18 + local_128._s_0.X;
  auVar23._8_8_ = 0;
  (param_1->Origin).field0_0x0._s_0.X = auVar23._0_8_;
  (param_1->Origin).field0_0x0._s_0.Y = dVar27 + local_128._s_0.Y;
  (param_1->Origin).field0_0x0._s_0.Z = dVar30 + local_128._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar18;
  (param_1->BoxExtent).field0_0x0._s_0.Y = dVar27;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar30;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (local_108 * local_108 + local_110 * local_110 + local_100 * local_100) *
                 __real_3fd0000000000000;
  auVar24 = sqrtpd(auVar23,auVar8);
  param_1->SphereRadius = auVar24._0_8_;
  return;
}

// EmptyElements @ 1479bfad0

void __thiscall FKAggregateGeom::EmptyElements(FKAggregateGeom *this)

{
  int *piVar1;
  
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)(this->BoxElems).AllocatorInstance.Data,(this->BoxElems).ArrayNum);
  piVar1 = &(this->BoxElems).ArrayMax;
  (this->BoxElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->BoxElems).AllocatorInstance,0,piVar1);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)(this->ConvexElems).AllocatorInstance.Data,(this->ConvexElems).ArrayNum
            );
  piVar1 = &(this->ConvexElems).ArrayMax;
  (this->ConvexElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,0x10,0,&(this->ConvexElems).AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)(this->SphylElems).AllocatorInstance.Data,(this->SphylElems).ArrayNum);
  piVar1 = &(this->SphylElems).ArrayMax;
  (this->SphylElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->SphylElems).AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)(this->SphereElems).AllocatorInstance.Data,(this->SphereElems).ArrayNum
            );
  piVar1 = &(this->SphereElems).ArrayMax;
  (this->SphereElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)(this->TaperedCapsuleElems).AllocatorInstance.Data,
             (this->TaperedCapsuleElems).ArrayNum);
  piVar1 = &(this->TaperedCapsuleElems).ArrayMax;
  (this->TaperedCapsuleElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->TaperedCapsuleElems).AllocatorInstance,0,piVar1);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)(this->LevelSetElems).AllocatorInstance.Data,
             (this->LevelSetElems).ArrayNum);
  piVar1 = &(this->LevelSetElems).ArrayMax;
  (this->LevelSetElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,0,&(this->LevelSetElems).AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)(this->SkinnedLevelSetElems).AllocatorInstance.Data,
             (this->SkinnedLevelSetElems).ArrayNum);
  piVar1 = &(this->SkinnedLevelSetElems).ArrayMax;
  (this->SkinnedLevelSetElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->SkinnedLevelSetElems).AllocatorInstance,0,piVar1);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)(this->MLLevelSetElems).AllocatorInstance.Data,
             (this->MLLevelSetElems).ArrayNum);
  piVar1 = &(this->MLLevelSetElems).ArrayMax;
  (this->MLLevelSetElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->MLLevelSetElems).AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)(this->SkinnedTriangleMeshElems).AllocatorInstance.Data,
             (this->SkinnedTriangleMeshElems).ArrayNum);
  piVar1 = &(this->SkinnedTriangleMeshElems).ArrayMax;
  (this->SkinnedTriangleMeshElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->SkinnedTriangleMeshElems).AllocatorInstance,0,piVar1);
  }
  FreeRenderInfo(this);
  return;
}

// GetElement @ 1481fa490

FKShapeElem * __thiscall FKAggregateGeom::GetElement(FKAggregateGeom *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FKShapeElem *pFVar3;
  uint uVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (param_1 < (this->SphereElems).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)((this->SphereElems).AllocatorInstance.Data + (longlong)param_1 * 0x50);
  }
  uVar5 = param_1 - (this->SphereElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->BoxElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->BoxElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)((this->BoxElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70);
  }
  uVar5 = uVar5 - (this->BoxElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SphylElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->SphylElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)((this->SphylElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x68);
  }
  uVar5 = uVar5 - (this->SphylElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->ConvexElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->ConvexElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->ConvexElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x100);
  }
  uVar5 = uVar5 - (this->ConvexElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->TaperedCapsuleElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->TaperedCapsuleElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->TaperedCapsuleElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70);
  }
  uVar5 = uVar5 - (this->TaperedCapsuleElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->LevelSetElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->LevelSetElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->LevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xa0);
  }
  uVar5 = uVar5 - (this->LevelSetElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SkinnedLevelSetElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->SkinnedLevelSetElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->SkinnedLevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38);
  }
  uVar5 = uVar5 - (this->SkinnedLevelSetElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->MLLevelSetElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->MLLevelSetElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->MLLevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50);
  }
  uVar5 = uVar5 - (this->MLLevelSetElems).ArrayNum;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SkinnedTriangleMeshElems).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->SkinnedTriangleMeshElems).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FKShapeElem *)
           ((this->SkinnedTriangleMeshElems).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x38);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1983460388859019598>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                     ,0x14e,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FKShapeElem *)(*pcVar1)();
    return pFVar3;
  }
  return (FKShapeElem *)0x0;
}

// GetElementCount @ 148287730

int __thiscall FKAggregateGeom::GetElementCount(FKAggregateGeom *this,Type param_1)

{
  switch(param_1) {
  case Sphere:
    return (this->SphereElems).ArrayNum;
  case Box:
    return (this->BoxElems).ArrayNum;
  case Sphyl:
    return (this->SphylElems).ArrayNum;
  case Convex:
    return (this->ConvexElems).ArrayNum;
  case TaperedCapsule:
    return (this->TaperedCapsuleElems).ArrayNum;
  case LevelSet:
    return (this->LevelSetElems).ArrayNum;
  default:
    return 0;
  }
}

// GetScaledVolume @ 14828d1a0

double __thiscall FKAggregateGeom::GetScaledVolume(FKAggregateGeom *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  dVar11 = __real_4010c136cb35b820;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar19 = 0.0;
  for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (this->SphereElems).ArrayNum)); iVar9 = iVar9 + 1) {
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    dVar15 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    dVar12 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) & uVar5
                              ,(uint)*(undefined8 *)&param_1->field0_0x0 & uVar4);
    if (dVar12 <= dVar15) {
      dVar15 = dVar12;
    }
    dVar12 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4);
    if (dVar12 <= dVar15) {
      dVar15 = dVar12;
    }
    dVar15 = dVar15 * (double)*(float *)((this->SphereElems).AllocatorInstance.Data +
                                        (longlong)iVar9 * 0x50 + 0x48);
    fVar19 = (float)(dVar15 * dVar15 * dVar15 * dVar11 + (double)fVar19);
  }
  for (iVar9 = 0;
      (dVar12 = __real_3ff5553260000000, dVar15 = __real_400921fb60000000, fVar10 = __real_3dcccccd,
      dVar11 = __real_3fe0000000000000, -1 < iVar9 && (iVar9 < (this->BoxElems).ArrayNum));
      iVar9 = iVar9 + 1) {
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    lVar7 = (longlong)iVar9 * 0x70;
    pFVar2 = (this->BoxElems).AllocatorInstance.Data;
    dVar11 = (double)(*(float *)(pFVar2 + lVar7 + 0x68) * *(float *)(pFVar2 + lVar7 + 100) *
                     *(float *)(pFVar2 + lVar7 + 0x60)) *
             (param_1->field0_0x0)._s_0.Z * (param_1->field0_0x0)._s_0.X *
             (param_1->field0_0x0)._s_0.Y;
    fVar19 = (float)((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar5,
                                      SUB84(dVar11,0) & uVar4) + (double)fVar19);
  }
  iVar9 = 0;
  while ((iVar8 = 0, -1 < iVar9 && (iVar8 = 0, iVar9 < (this->SphylElems).ArrayNum))) {
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    lVar7 = (longlong)iVar9;
    pFVar2 = (this->SphylElems).AllocatorInstance.Data;
    iVar9 = iVar9 + 1;
    fVar18 = *(float *)(pFVar2 + lVar7 * 0x68 + 0x60);
    dVar13 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) & uVar5
                              ,(uint)*(undefined8 *)&param_1->field0_0x0 & uVar4);
    fVar17 = (float)((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4)
                     * (double)(fVar18 + fVar18 + *(float *)(pFVar2 + lVar7 * 0x68 + 100)) * dVar11)
    ;
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    dVar16 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4);
    if (fVar17 <= fVar10) {
      fVar17 = fVar10;
    }
    if (dVar16 <= dVar13) {
      dVar16 = dVar13;
    }
    fVar14 = (float)dVar16 * fVar18;
    if (fVar17 <= (float)dVar16 * fVar18) {
      fVar14 = fVar17;
    }
    if (fVar14 <= fVar10) {
      fVar14 = fVar10;
    }
    dVar16 = (double)fVar14;
    fVar18 = (fVar17 - fVar14) + (fVar17 - fVar14);
    if (fVar18 <= fVar10) {
      fVar18 = fVar10;
    }
    fVar19 = (float)(((double)fVar18 + dVar16 * dVar12) * dVar16 * dVar16 * dVar15 + (double)fVar19)
    ;
  }
  for (; (-1 < iVar8 && (iVar8 < (this->ConvexElems).ArrayNum)); iVar8 = iVar8 + 1) {
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    fVar10 = 0.0;
    lVar7 = *(longlong *)
             ((this->ConvexElems).AllocatorInstance.Data + (longlong)iVar8 * 0x100 + 0xf0);
    if (lVar7 != 0) {
      dVar11 = (param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X *
               (param_1->field0_0x0)._s_0.Z;
      fVar10 = (float)((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar5,
                                        SUB84(dVar11,0) & uVar4) * (double)*(float *)(lVar7 + 0x68))
      ;
    }
    fVar19 = fVar19 + fVar10;
  }
  return (double)fVar19;
}

// GetVolume @ 14828ed40

double __thiscall FKAggregateGeom::GetVolume(FKAggregateGeom *this,TVector<double> *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  dVar11 = __real_4010c136cb35b820;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar19 = 0.0;
  for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (this->SphereElems).ArrayNum)); iVar9 = iVar9 + 1) {
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    dVar15 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    dVar12 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) & uVar5
                              ,(uint)*(undefined8 *)&param_1->field0_0x0 & uVar4);
    if (dVar12 <= dVar15) {
      dVar15 = dVar12;
    }
    dVar12 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4);
    if (dVar12 <= dVar15) {
      dVar15 = dVar12;
    }
    dVar15 = dVar15 * (double)*(float *)((this->SphereElems).AllocatorInstance.Data +
                                        (longlong)iVar9 * 0x50 + 0x48);
    fVar19 = (float)(dVar15 * dVar15 * dVar15 * dVar11 + (double)fVar19);
  }
  for (iVar9 = 0;
      (dVar12 = __real_3ff5553260000000, dVar15 = __real_400921fb60000000, fVar10 = __real_3dcccccd,
      dVar11 = __real_3fe0000000000000, -1 < iVar9 && (iVar9 < (this->BoxElems).ArrayNum));
      iVar9 = iVar9 + 1) {
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    lVar7 = (longlong)iVar9 * 0x70;
    pFVar2 = (this->BoxElems).AllocatorInstance.Data;
    dVar11 = (double)(*(float *)(pFVar2 + lVar7 + 0x68) * *(float *)(pFVar2 + lVar7 + 100) *
                     *(float *)(pFVar2 + lVar7 + 0x60)) *
             (param_1->field0_0x0)._s_0.Z * (param_1->field0_0x0)._s_0.X *
             (param_1->field0_0x0)._s_0.Y;
    fVar19 = (float)((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar5,
                                      SUB84(dVar11,0) & uVar4) + (double)fVar19);
  }
  iVar9 = 0;
  while ((iVar8 = 0, -1 < iVar9 && (iVar8 = 0, iVar9 < (this->SphylElems).ArrayNum))) {
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    lVar7 = (longlong)iVar9;
    pFVar2 = (this->SphylElems).AllocatorInstance.Data;
    iVar9 = iVar9 + 1;
    fVar18 = *(float *)(pFVar2 + lVar7 * 0x68 + 0x60);
    dVar13 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) & uVar5
                              ,(uint)*(undefined8 *)&param_1->field0_0x0 & uVar4);
    fVar17 = (float)((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4)
                     * (double)(fVar18 + fVar18 + *(float *)(pFVar2 + lVar7 * 0x68 + 100)) * dVar11)
    ;
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    dVar16 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar5,(uint)uVar1 & uVar4);
    if (fVar17 <= fVar10) {
      fVar17 = fVar10;
    }
    if (dVar16 <= dVar13) {
      dVar16 = dVar13;
    }
    fVar14 = (float)dVar16 * fVar18;
    if (fVar17 <= (float)dVar16 * fVar18) {
      fVar14 = fVar17;
    }
    if (fVar14 <= fVar10) {
      fVar14 = fVar10;
    }
    dVar16 = (double)fVar14;
    fVar18 = (fVar17 - fVar14) + (fVar17 - fVar14);
    if (fVar18 <= fVar10) {
      fVar18 = fVar10;
    }
    fVar19 = (float)(((double)fVar18 + dVar16 * dVar12) * dVar16 * dVar16 * dVar15 + (double)fVar19)
    ;
  }
  for (; (-1 < iVar8 && (iVar8 < (this->ConvexElems).ArrayNum)); iVar8 = iVar8 + 1) {
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar11 = (double)(*pcVar3)();
        return dVar11;
      }
    }
    fVar10 = 0.0;
    lVar7 = *(longlong *)
             ((this->ConvexElems).AllocatorInstance.Data + (longlong)iVar8 * 0x100 + 0xf0);
    if (lVar7 != 0) {
      dVar11 = (param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X *
               (param_1->field0_0x0)._s_0.Z;
      fVar10 = (float)((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar5,
                                        SUB84(dVar11,0) & uVar4) * (double)*(float *)(lVar7 + 0x68))
      ;
    }
    fVar19 = fVar19 + fVar10;
  }
  return (double)fVar19;
}

// MakeDDCKey @ 1482963a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall FKAggregateGeom::MakeDDCKey(FKAggregateGeom *this,FGuid *__return_storage_ptr__)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar3;
  undefined1 auStackY_368 [32];
  ForAnyElementType local_338;
  undefined8 local_330;
  undefined8 local_328;
  FArchiveState local_318;
  undefined8 local_288;
  ForAnyElementType *local_280;
  undefined8 local_278;
  FSHA1 local_268;
  FStructuredArchiveFromArchive local_1d8;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pUVar2 = StaticStruct();
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x40,&local_338,0,(int *)((longlong)&local_330 + 4));
  local_328 = 0;
  local_318._padding_ = 0;
  local_318.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_318.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_318.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_318.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_318._40_8_ = 0;
  local_318.ArSerializingDefaults = 0;
  local_318.ArPortFlags = 0;
  local_318.ArMaxSerializeSize = 0;
  local_318.ArUEVer.FileVersionUE4 = 0;
  local_318.ArUEVer.FileVersionUE5 = 0;
  local_318.ArLicenseeUEVer = 0;
  local_318.ArEngineVer.Major = 0;
  local_318.ArEngineVer.Minor = 0;
  local_318.ArEngineVer.Patch = 0;
  local_318.ArEngineVer._6_2_ = 0;
  local_318.ArEngineVer.Changelist = 0;
  local_318.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_318.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_318.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_318.SerializedProperty = (FProperty *)0x0;
  local_318.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_318.bCustomVersionsAreReset = false;
  local_318._129_7_ = 0;
  local_318.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_318);
  local_288 = 0;
  local_318._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_280 = &local_338;
  local_278 = 0;
  FArchiveState::SetIsSaving(&local_318,true);
  (**(code **)(local_318._padding_ + 0x108))(&local_318,0);
  local_318._padding_ = (longlong)&___7FMemoryWriter__6B_;
  pcVar1 = *(code **)(pUVar2->_padding_ + 0x2e0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                      (&local_1d8,(FArchive *)&local_318);
  FVar3 = FStructuredArchiveFromArchive::GetSlot(this_00);
  (*pcVar1)(pUVar2,*(undefined8 *)FVar3,this,pUVar2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
  FSHA1::FSHA1(&local_268);
  FSHA1::Update(&local_268,(uchar *)local_338.Data,(longlong)(int)local_330);
  FSHA1::Final(&local_268);
  FSHA1::GetHash(&local_268,(uchar *)&local_48);
  __return_storage_ptr__->A = local_48 ^ local_38;
  __return_storage_ptr__->C = local_40;
  __return_storage_ptr__->B = local_44;
  __return_storage_ptr__->D = local_3c;
  FSHA1::~FSHA1(&local_268);
  FArchive::~FArchive((FArchive *)&local_318);
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 1482e2010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()(void *this)

{
  int iVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  code *local_88 [2];
  undefined **local_78 [3];
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [3];
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (*(longlong *)((longlong)this + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != RenderInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysDrawing.cpp"
                       ,0x59a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (**(longlong **)((longlong)this + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderInfo->VertexBuffers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysDrawing.cpp"
                       ,0x59b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderInfo->IndexBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysDrawing.cpp"
                       ,0x59c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78[0] = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``FKAggregateGeom::FreeRenderInfo'::`5'::<lambda_2>::operator()'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  local_78[1] = *(undefined ***)((longlong)this + 8);
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<__FKAggregateGeom::FreeRenderInfo_::__l5::<lambda_2>::operator()_::__l2::TSTR_FKAggregateGeomFreeRenderInfo1439>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    if (this_00->bInitialized == 0) {
      FRenderCommandList::Init(this_00);
    }
    iVar1 = (this_00->CommandLists).ArrayNum;
    uVar8 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar8 < iVar1) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_98 = (longlong)(int)uVar8;
      local_90 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (this_00->CommandLists).ArrayNum;
    local_48[0] = local_78[0];
    local_48[1] = local_78[1];
    local_48[2] = local_78[2];
    local_28 = 2;
    pFVar2 = (this_00->CommandLists).AllocatorInstance.Data;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_88[0] = (code *)0x0;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<``FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()'::__l2::TSTR_FKAggregateGeomFreeRenderInfo1439>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar2 + (iVar1 + -1),
               (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_58,pFVar6);
    uVar9 = (ulonglong)local_28;
    if (2 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar7 = local_30;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar7 = local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return;
}

// FreeRenderInfo @ 148304ae0

void __thiscall FKAggregateGeom::FreeRenderInfo(FKAggregateGeom *this)

{
  FKAggregateGeom *local_18;
  atomic<FKConvexGeomRenderInfo_*> local_10;
  
  LOCK();
  local_10 = this->RenderInfoPtr;
  this->RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  UNLOCK();
  if (local_10 != (atomic<FKConvexGeomRenderInfo_*>)0x0) {
    local_18 = this;
    `FKAggregateGeom::FreeRenderInfo'::__l5::<lambda_2>::operator()(&local_18);
  }
  return;
}

// GetAggGeom @ 148304e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FKAggregateGeom::GetAggGeom
          (FKAggregateGeom *this,TTransform<double> *param_1,FColor param_2,
          FMaterialRenderProxy *param_3,bool param_4,bool param_5,bool param_6,int param_7,
          FMeshElementCollector *param_8)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FScriptContainerElement *pFVar2;
  FRHICommandListBase *pFVar3;
  longlong *plVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  double dVar12;
  FDynamicPrimitiveUniformBuffer *pFVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  TQuat<double> *pTVar18;
  TMatrix<double> *pTVar19;
  atomic<FKConvexGeomRenderInfo_*> aVar20;
  FStaticMeshVertexBuffer *this_01;
  FDynamicMeshIndexBuffer32 *this_02;
  FDynamicMeshIndexBuffer32 *pFVar21;
  FLocalVertexFactory *this_03;
  FLocalVertexFactory *pFVar22;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar23;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  FPrimitiveDrawInterface *pFVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  ForElementType<FMeshBatchElement> FVar31;
  FScriptContainerElement *pFVar32;
  ForElementType<FMeshBatchElement> FVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_998 [32];
  TVector<double>_u_0 local_938;
  TMatrix<double> *local_918;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_910;
  FDynamicPrimitiveUniformBuffer *local_900;
  TVector<double>_u_0 local_8f8;
  TVector<double>_u_0 local_8e0;
  TVector<double>_u_0 local_8c8;
  FScopedTaperedCapsuleBuilder local_8b0;
  double local_878;
  double dStack_870;
  double local_868;
  double dStack_860;
  double local_858;
  double dStack_850;
  double local_848;
  double dStack_840;
  double local_838;
  double dStack_830;
  double local_828;
  double dStack_820;
  FKSphylElem local_818;
  FKTaperedCapsuleElem local_7a8;
  FKBoxElem local_738;
  TBoxSphereBounds<double,double> local_6c8;
  TBoxSphereBounds<double,double> local_690;
  TQuat<double> local_658;
  TQuat<double> local_638;
  TQuat<double> local_618;
  TTransform<double> local_5f8;
  TTransform<double> local_598;
  TTransform<double> local_538;
  TTransform<double> local_4d8;
  TTransform<double> local_478;
  TTransform<double> local_418;
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  TMatrix<double> local_298;
  TMatrix<double> local_218;
  TMatrix<double> local_198;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_998;
  dVar45 = (param_1->Rotation).XY.m128d_f64[0];
  dVar38 = (param_1->Rotation).XY.m128d_f64[1];
  dVar9 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
  local_938._s_0.X = (param_1->Scale3D).XY.m128d_f64[0];
  local_938._s_0.Y = (param_1->Scale3D).XY.m128d_f64[1];
  uVar29 = 0;
  local_938._s_0.Z = (param_1->Scale3D).ZW.m128d_f64[0];
  iVar17 = (this->SphereElems).ArrayNum;
  local_5f8.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_5f8.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_5f8.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_5f8.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  local_5f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_5f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_5f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_5f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  auVar46._0_8_ = dVar45 * dVar45 + dVar9 * dVar9;
  auVar46._8_8_ = dVar38 * dVar38 + dVar10 * dVar10;
  auVar39._8_4_ = SUB84(auVar46._8_8_,0);
  auVar39._0_8_ = auVar46._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
  auVar40._0_8_ = auVar39._8_8_ + auVar46._0_8_;
  auVar40._8_8_ = auVar46._0_8_ + auVar46._8_8_;
  auVar47 = sqrtpd(auVar46,auVar40);
  uVar34 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar40._0_8_);
  uVar36 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar40._8_8_);
  uVar35 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar40._0_8_);
  uVar37 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar40._8_8_);
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
  auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
  auVar43._0_8_ = uVar34 & (ulonglong)(auVar42._0_8_ * dVar45);
  uVar8 = uVar36 & (ulonglong)(auVar42._8_8_ * dVar38);
  auVar43._8_4_ = (undefined4)uVar8;
  auVar43._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar41._0_8_ = uVar35 & (ulonglong)(auVar47._0_8_ * dVar9);
  uVar8 = uVar37 & (ulonglong)(auVar47._8_8_ * dVar10);
  auVar41._8_4_ = (undefined4)uVar8;
  auVar41._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar47._4_4_ = ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar47._0_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar47._8_4_ = ~(uint)uVar36 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar47._12_4_ = ~(uint)(uVar36 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_5f8.Rotation.XY.m128d_f64 = (double  [2])(auVar43 | auVar47);
  auVar42._4_4_ = ~(uint)(uVar35 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar42._0_4_ = ~(uint)uVar35 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar42._8_4_ = ~(uint)uVar37 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar42._12_4_ = ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  local_5f8.Rotation.ZW.m128d_f64 = (double  [2])(auVar41 | auVar42);
  if (0 < iVar17) {
    lVar28 = 0;
    do {
      uVar27 = ~uVar29 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar29 < iVar17) {
        uVar15 = uVar27;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->SphereElems).AllocatorInstance.Data;
      local_538.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_538.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_538.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_538.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      pFVar32 = pFVar2 + lVar28 + 0x30;
      local_538.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_538.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_538.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_538.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_538.Translation.XY.m128d_f64[0] = *(double *)pFVar32 * local_938._s_0.X;
      local_538.Translation.XY.m128d_f64[1] = *(double *)(pFVar32 + 8) * local_938._s_0.Y;
      local_538.Translation.ZW.m128d_f64[0] = local_938._s_0.Z * *(double *)(pFVar2 + lVar28 + 0x40)
      ;
      local_538.Translation.ZW.m128d_f64[1] = 0.0;
      UE::Math::TTransform<double>::Multiply(&local_538,&local_538,&local_5f8);
      iVar17 = (this->SphereElems).ArrayNum;
      if (param_5) {
        uVar15 = 0;
        if ((int)uVar29 < iVar17) {
          uVar15 = uVar27;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        dVar45 = (double)CONCAT44((uint)((ulonglong)local_938._0_8_ >> 0x20) & uVar16,
                                  SUB84(local_938._s_0.X,0) & uVar30);
        dVar38 = (double)CONCAT44((uint)((ulonglong)local_938._8_8_ >> 0x20) & uVar16,
                                  SUB84(local_938._s_0.Y,0) & uVar30);
        if (dVar38 <= dVar45) {
          dVar45 = dVar38;
        }
        dVar38 = (double)CONCAT44((uint)((ulonglong)local_938._16_8_ >> 0x20) & uVar16,
                                  SUB84(local_938._s_0.Z,0) & uVar30);
        if (dVar38 <= dVar45) {
          dVar45 = dVar38;
        }
        local_8c8._s_0.Z = local_538.Translation.ZW.m128d_f64[0];
        local_8f8._0_8_ =
             dVar45 * (double)*(float *)((this->SphereElems).AllocatorInstance.Data + lVar28 + 0x48)
        ;
        local_8c8._s_0.X = local_538.Translation.XY.m128d_f64[0];
        local_8c8._s_0.Y = local_538.Translation.XY.m128d_f64[1];
        local_8f8._8_8_ = local_8f8._0_8_;
        local_8f8._s_0.Z = local_8f8._0_8_;
        GetSphereMesh((TVector<double> *)&local_8c8._s_0,(TVector<double> *)&local_8f8._s_0,0x20,
                      0x10,param_3,'\0',false,param_7,param_8);
      }
      else {
        uVar15 = 0;
        if ((int)uVar29 < iVar17) {
          uVar15 = uVar27;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->SphereElems).AllocatorInstance.Data;
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        FKSphereElem::DrawElemWire
                  ((FKSphereElem *)(pFVar32 + lVar28),pFVar26,&local_538,
                   (TVector<double> *)&local_938._s_0,param_2);
      }
      iVar17 = (this->SphereElems).ArrayNum;
      uVar29 = uVar29 + 1;
      lVar28 = lVar28 + 0x50;
    } while ((int)uVar29 < iVar17);
  }
  dVar12 = _UNK_150689688;
  dVar10 = ___xmm_3ff00000000000003ff0000000000000;
  dVar9 = _UNK_150689518;
  dVar38 = ___xmm_00000000000000003ff0000000000000;
  dVar45 = __real_3fe0000000000000;
  uVar30 = 0;
  if (0 < (this->BoxElems).ArrayNum) {
    lVar28 = 0;
    do {
      uVar29 = ~uVar30 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar30 < (this->BoxElems).ArrayNum) {
        uVar16 = uVar29;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FKBoxElem::GetFinalScaled
                ((FKBoxElem *)((this->BoxElems).AllocatorInstance.Data + lVar28),&local_738,
                 (TVector<double> *)&local_938._s_0,&UE::Math::TTransform<double>::Identity);
      pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_738.Rotation,&local_618);
      local_878 = pTVar18->X;
      dStack_870 = pTVar18->Y;
      local_868 = pTVar18->Z;
      dStack_860 = pTVar18->W;
      local_4d8.Translation.ZW.m128d_f64[1] = 0.0;
      local_4d8.Translation.ZW.m128d_f64[0] = local_738.Center.field0_0x0._s_0.Z;
      local_4d8.Scale3D.XY.m128d_f64[0] = dVar10;
      local_4d8.Scale3D.XY.m128d_f64[1] = dVar12;
      local_4d8.Scale3D.ZW.m128d_f64[0] = dVar38;
      local_4d8.Scale3D.ZW.m128d_f64[1] = dVar9;
      local_4d8.Rotation.XY.m128d_f64[0] = local_878;
      local_4d8.Rotation.XY.m128d_f64[1] = dStack_870;
      local_4d8.Rotation.ZW.m128d_f64[0] = local_868;
      local_4d8.Rotation.ZW.m128d_f64[1] = dStack_860;
      UE::Math::TTransform<double>::Multiply(&local_4d8,&local_4d8,&local_5f8);
      iVar17 = (this->BoxElems).ArrayNum;
      if (param_5) {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->BoxElems).AllocatorInstance.Data;
        local_8e0._s_0.X = (double)*(float *)(pFVar32 + lVar28 + 0x60) * local_938._s_0.X * dVar45;
        local_8e0._s_0.Y = (double)*(float *)(pFVar32 + lVar28 + 100) * local_938._s_0.Y * dVar45;
        local_8e0._s_0.Z = (double)*(float *)(pFVar32 + lVar28 + 0x68) * local_938._s_0.Z * dVar45;
        pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_4d8,&local_298);
        GetBoxMesh(pTVar19,(TVector<double> *)&local_8e0._s_0,param_3,'\0',param_7,param_8,
                   (HHitProxy *)0x0);
      }
      else {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->BoxElems).AllocatorInstance.Data;
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        FKBoxElem::DrawElemWire
                  ((FKBoxElem *)(pFVar32 + lVar28),pFVar26,&local_4d8,
                   (TVector<double> *)&local_938._s_0,param_2);
      }
      FKBoxElem::~FKBoxElem(&local_738);
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + 0x70;
    } while ((int)uVar30 < (this->BoxElems).ArrayNum);
  }
  dVar10 = _UNK_150689688;
  dVar9 = ___xmm_3ff00000000000003ff0000000000000;
  dVar38 = _UNK_150689518;
  dVar45 = ___xmm_00000000000000003ff0000000000000;
  uVar30 = 0;
  if (0 < (this->SphylElems).ArrayNum) {
    do {
      uVar29 = ~uVar30 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar30 < (this->SphylElems).ArrayNum) {
        uVar16 = uVar29;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar28 = (longlong)(int)uVar30 * 0x68;
      FKSphylElem::GetFinalScaled
                ((FKSphylElem *)((this->SphylElems).AllocatorInstance.Data + lVar28),&local_818,
                 (TVector<double> *)&local_938._s_0,&UE::Math::TTransform<double>::Identity);
      pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_818.Rotation,&local_638);
      local_858 = pTVar18->X;
      dStack_850 = pTVar18->Y;
      local_848 = pTVar18->Z;
      dStack_840 = pTVar18->W;
      local_478.Translation.ZW.m128d_f64[1] = 0.0;
      local_478.Translation.ZW.m128d_f64[0] = local_818.Center.field0_0x0._s_0.Z;
      local_478.Scale3D.XY.m128d_f64[0] = dVar9;
      local_478.Scale3D.XY.m128d_f64[1] = dVar10;
      local_478.Scale3D.ZW.m128d_f64[0] = dVar45;
      local_478.Scale3D.ZW.m128d_f64[1] = dVar38;
      local_478.Rotation.XY.m128d_f64[0] = local_858;
      local_478.Rotation.XY.m128d_f64[1] = dStack_850;
      local_478.Rotation.ZW.m128d_f64[0] = local_848;
      local_478.Rotation.ZW.m128d_f64[1] = dStack_840;
      UE::Math::TTransform<double>::Multiply(&local_478,&local_478,&local_5f8);
      iVar17 = (this->SphylElems).ArrayNum;
      if (param_5) {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FKSphylElem::GetElemSolid
                  ((FKSphylElem *)((this->SphylElems).AllocatorInstance.Data + lVar28),&local_478,
                   (TVector<double> *)&local_938._s_0,param_3,param_7,param_8);
      }
      else {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->SphylElems).AllocatorInstance.Data;
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        FKSphylElem::DrawElemWire
                  ((FKSphylElem *)(pFVar32 + lVar28),pFVar26,&local_478,
                   (TVector<double> *)&local_938._s_0,param_2);
      }
      FKSphylElem::~FKSphylElem(&local_818);
      uVar30 = uVar30 + 1;
    } while ((int)uVar30 < (this->SphylElems).ArrayNum);
  }
  if ((param_8->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = __real_3f800000;
  iVar17 = (this->ConvexElems).ArrayNum;
  pFVar3 = (FRHICommandListBase *)param_8->RHICmdList;
  if (0 < iVar17) {
    if (param_5) {
      aVar20 = this->RenderInfoPtr;
      if (aVar20 == (atomic<FKConvexGeomRenderInfo_*>)0x0) {
        this_00 = &this->RenderInfoLock;
        if ((this_00 == (FMutex *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        bVar14 = this_00->State == (atomic<unsigned_char>)0x0;
        if (bVar14) {
          this_00->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar14) {
          UE::FMutex::LockSlow(this_00);
        }
        aVar20 = this->RenderInfoPtr;
        if (aVar20 == (atomic<FKConvexGeomRenderInfo_*>)0x0) {
          aVar20 = (atomic<FKConvexGeomRenderInfo_*>)::operator_new(0x18);
          if (aVar20 == (atomic<FKConvexGeomRenderInfo_*>)0x0) {
            aVar20 = (atomic<FKConvexGeomRenderInfo_*>)0x0;
          }
          else {
            *(longlong *)aVar20 = 0;
            *(longlong *)((longlong)aVar20 + 8) = 0;
            *(longlong *)((longlong)aVar20 + 0x10) = 0;
          }
          this_01 = ::operator_new(0x158);
          if (this_01 == (FStaticMeshVertexBuffer *)0x0) {
            this_01 = (FStaticMeshVertexBuffer *)0x0;
          }
          else {
            memset(this_01,0,0x158);
            FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(this_01);
            FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)(this_01 + 1));
            FColorVertexBuffer::FColorVertexBuffer
                      ((FColorVertexBuffer *)&this_01[1].TexCoordVertexBuffer.field_0x8);
          }
          *(FStaticMeshVertexBuffer **)aVar20 = this_01;
          this_02 = ::operator_new(0x40);
          pFVar21 = (FDynamicMeshIndexBuffer32 *)0x0;
          if (this_02 != (FDynamicMeshIndexBuffer32 *)0x0) {
            pFVar21 = FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(this_02);
          }
          *(FDynamicMeshIndexBuffer32 **)((longlong)aVar20 + 8) = pFVar21;
          uVar30 = 0;
          local_910.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_910.ArrayNum = 0;
          local_910.ArrayMax = 0;
          iVar17 = 0;
          if (0 < (this->ConvexElems).ArrayNum) {
            do {
              uVar16 = 0;
              if ((int)uVar30 < (this->ConvexElems).ArrayNum) {
                uVar16 = ~uVar30 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FKConvexElem::AddCachedSolidConvexGeom
                        ((FKConvexElem *)
                         ((this->ConvexElems).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x100
                         ),&local_910,
                         (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)((longlong)aVar20 + 8) + 0x28),FColor::White);
              uVar30 = uVar30 + 1;
            } while ((int)uVar30 < (this->ConvexElems).ArrayNum);
            iVar17 = local_910.ArrayNum;
          }
          if ((((*(longlong *)aVar20 != 0) &&
               (plVar4 = *(longlong **)((longlong)aVar20 + 8), plVar4 != (longlong *)0x0)) &&
              (0 < iVar17)) && (0 < (int)plVar4[6])) {
            (**(code **)(*plVar4 + 0x18))(plVar4,pFVar3);
            this_03 = ::operator_new(0x230);
            pFVar22 = (FLocalVertexFactory *)0x0;
            if (this_03 != (FLocalVertexFactory *)0x0) {
              pFVar22 = FLocalVertexFactory::FLocalVertexFactory
                                  (this_03,param_8->FeatureLevel,"FKAggregateGeom");
            }
            *(FLocalVertexFactory **)((longlong)aVar20 + 0x10) = pFVar22;
            FStaticMeshVertexBuffers::InitFromDynamicVertex
                      (*(FStaticMeshVertexBuffers **)aVar20,pFVar3,(FRenderCommandPipe *)0x0,pFVar22
                       ,&local_910,1,0);
          }
          this->RenderInfoPtr = aVar20;
          if (local_910.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_910.AllocatorInstance.Data);
          }
        }
        if (this_00 != (FMutex *)0x0) {
          LOCK();
          aVar1 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar1 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      if (((*(longlong *)aVar20 != 0) && (*(int *)(*(longlong *)aVar20 + 0xfc) != 0)) &&
         ((*(longlong *)((longlong)aVar20 + 8) != 0 &&
          (0 < *(int *)(*(longlong *)((longlong)aVar20 + 8) + 0x30))))) {
        local_2f8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
        local_2f8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
        local_2f8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
        local_2f8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
        local_2f8.Translation.XY.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_2f8.Translation.XY.m128d_f64[1] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_2f8.Translation.ZW.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_2f8.Translation.ZW.m128d_f64[1] = 0.0;
        local_2f8.Scale3D.XY.m128d_f64[0] = local_938._s_0.X;
        local_2f8.Scale3D.XY.m128d_f64[1] = local_938._s_0.Y;
        local_598.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_598.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_598.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_598.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2f8.Scale3D.ZW.m128d_f64[0] = local_938._s_0.Z;
        local_2f8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_598.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_598.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_598.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_598.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_598.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        dVar45 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_598.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_598.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_598.Scale3D.XY.m128d_f64[1] = dVar45;
        UE::Math::TTransform<double>::Multiply(&local_598,&local_2f8,&local_5f8);
        iVar17 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                 ::Add(&param_8->MeshBatchStorage,1);
        uVar30 = iVar17 / 0x49;
        uVar16 = 0;
        if ((int)uVar30 < (param_8->MeshBatchStorage).Chunks.Array.ArrayNum) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar33 = (ForElementType<FMeshBatchElement>)
                 ((ulonglong)(uint)(iVar17 % 0x49) * 0xe0 +
                 (longlong)
                 (param_8->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar30]);
        if ((*(int *)((longlong)FVar33 + 0xa0) < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar31 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar33 + 0x98);
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar33 + 0x98) ==
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar31 = FVar33;
        }
        *(longlong *)((longlong)FVar31 + 0x18) = *(longlong *)((longlong)aVar20 + 8);
        *(longlong *)((longlong)FVar33 + 0xa8) = *(longlong *)((longlong)aVar20 + 0x10);
        *(FMaterialRenderProxy **)((longlong)FVar33 + 0xb0) = param_3;
        CalcBoxSphereBounds(this,&local_690,&local_598);
        CalcBoxSphereBounds(this,&local_6c8,&UE::Math::TTransform<double>::Identity);
        paVar5 = &param_8->OneFrameResources->Next;
        aVar23 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
        *(undefined8 *)((longlong)aVar23 + 8) = 0;
        local_900 = (FDynamicPrimitiveUniformBuffer *)((longlong)aVar23 + 0x10);
        *(undefined ***)aVar23 =
             &
             ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
        ;
        TVar24.Next = *paVar5;
        do {
          *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            *)((longlong)aVar23 + 8) = TVar24.Next;
          LOCK();
          aVar25 = *paVar5;
          bVar14 = TVar24.Next == aVar25;
          if (bVar14) {
            *paVar5 = aVar23;
            aVar25 = TVar24.Next;
          }
          UNLOCK();
          TVar24.Next = aVar25;
        } while (!bVar14);
        FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(local_900);
        pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_598,&local_218);
        local_918 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_598,&local_198);
        if ((param_8->RHICmdList == (FRHICommandList *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("RHICmdList",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                ,0x46,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = local_900;
        FDynamicPrimitiveUniformBuffer::Set
                  (local_900,(FRHICommandListBase *)param_8->RHICmdList,local_918,pTVar19,&local_690
                   ,&local_6c8,true,false,param_6);
        *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar31 + 8) =
             &pFVar13->UniformBuffer;
        *(undefined4 *)((longlong)FVar31 + 0x58) = 0;
        iVar17 = *(int *)(*(longlong *)((longlong)aVar20 + 8) + 0x30);
        *(undefined4 *)((longlong)FVar31 + 0x68) = 0;
        *(int *)((longlong)FVar31 + 0x5c) =
             iVar17 / 3 + (iVar17 >> 0x1f) +
             (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >> 0x1f);
        *(int *)((longlong)FVar31 + 0x6c) = *(int *)(*(longlong *)aVar20 + 0xfc) + -1;
        auVar7._4_8_ = dVar45;
        auVar7._0_4_ = (int)((ulonglong)local_598.Scale3D.XY.m128d_f64[0] >> 0x20);
        auVar44._0_8_ = auVar7._0_8_ << 0x20;
        auVar44._8_4_ = SUB84(local_598.Scale3D.XY.m128d_f64[1],0);
        auVar44._12_4_ = (int)((ulonglong)local_598.Scale3D.XY.m128d_f64[1] >> 0x20);
        *(uint *)((longlong)FVar33 + 0xd4) =
             (uint)(auVar44._8_8_ * local_598.Scale3D.XY.m128d_f64[0] *
                    local_598.Scale3D.ZW.m128d_f64[0] < 0.0) |
             *(uint *)((longlong)FVar33 + 0xd4) & 0xffffc07e;
        FMeshElementCollector::AddMesh(param_8,param_7,(FMeshBatch *)FVar33);
      }
    }
    else {
      uVar30 = 0;
      local_918 = (TMatrix<double> *)0x0;
      do {
        pTVar19 = local_918;
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->ConvexElems).AllocatorInstance.Data;
        local_358.Rotation.XY.m128d_f64[0] = *(double *)(pFVar32 + 0x10 + (longlong)pTVar19[1].M[0])
        ;
        local_358.Rotation.XY.m128d_f64[1] =
             *(double *)(pFVar32 + 0x10 + (longlong)pTVar19[1].M[0] + 8);
        local_358.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar32 + 0x20 + (longlong)pTVar19[1].M[0])
        ;
        local_358.Rotation.ZW.m128d_f64[1] =
             *(double *)(pFVar32 + 0x20 + (longlong)pTVar19[1].M[0] + 8);
        local_358.Translation.XY.m128d_f64[0] =
             *(double *)(pFVar32 + 0x30 + (longlong)pTVar19[1].M[0]);
        local_358.Translation.XY.m128d_f64[1] =
             *(double *)(pFVar32 + 0x30 + (longlong)pTVar19[1].M[0] + 8);
        local_358.Translation.ZW.m128d_f64[0] =
             *(double *)(pFVar32 + 0x40 + (longlong)pTVar19[1].M[0]);
        local_358.Translation.ZW.m128d_f64[1] =
             *(double *)(pFVar32 + 0x40 + (longlong)pTVar19[1].M[0] + 8);
        local_358.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar32 + 0x50 + (longlong)pTVar19[1].M[0]);
        local_358.Scale3D.XY.m128d_f64[1] =
             *(double *)(pFVar32 + 0x50 + (longlong)pTVar19[1].M[0] + 8);
        local_358.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar32 + 0x60 + (longlong)pTVar19[1].M[0]);
        local_358.Scale3D.ZW.m128d_f64[1] =
             *(double *)(pFVar32 + 0x60 + (longlong)pTVar19[1].M[0] + 8);
        UE::Math::TTransform<double>::Multiply(&local_358,&local_358,param_1);
        uVar16 = 0;
        if ((int)uVar30 < (this->ConvexElems).ArrayNum) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->ConvexElems).AllocatorInstance.Data + (longlong)pTVar19->M[0];
        pcVar6 = *(code **)(*(longlong *)pFVar32 + 0x10);
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        (*pcVar6)(pFVar32,pFVar26,&local_358,uVar11);
        iVar17 = (this->ConvexElems).ArrayNum;
        local_918 = local_918 + 2;
        uVar30 = uVar30 + 1;
      } while ((int)uVar30 < iVar17);
    }
  }
  dVar10 = _UNK_150689688;
  dVar9 = ___xmm_3ff00000000000003ff0000000000000;
  dVar38 = _UNK_150689518;
  dVar45 = ___xmm_00000000000000003ff0000000000000;
  uVar30 = 0;
  if (0 < (this->TaperedCapsuleElems).ArrayNum) {
    do {
      uVar29 = ~uVar30 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar30 < (this->TaperedCapsuleElems).ArrayNum) {
        uVar16 = uVar29;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar28 = (longlong)(int)uVar30 * 0x70;
      FKTaperedCapsuleElem::GetFinalScaled
                ((FKTaperedCapsuleElem *)
                 ((this->TaperedCapsuleElems).AllocatorInstance.Data + lVar28),&local_7a8,
                 (TVector<double> *)&local_938._s_0,&UE::Math::TTransform<double>::Identity);
      pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_7a8.Rotation,&local_658);
      local_838 = pTVar18->X;
      dStack_830 = pTVar18->Y;
      local_828 = pTVar18->Z;
      dStack_820 = pTVar18->W;
      local_418.Translation.ZW.m128d_f64[0] = local_7a8.Center.field0_0x0._s_0.Z;
      local_418.Translation.ZW.m128d_f64[1] = 0.0;
      local_418.Translation.XY.m128d_f64[0] = local_7a8.Center.field0_0x0._s_0.X;
      local_418.Translation.XY.m128d_f64[1] = local_7a8.Center.field0_0x0._s_0.Y;
      local_418.Scale3D.XY.m128d_f64[0] = dVar9;
      local_418.Scale3D.XY.m128d_f64[1] = dVar10;
      local_418.Scale3D.ZW.m128d_f64[0] = dVar45;
      local_418.Scale3D.ZW.m128d_f64[1] = dVar38;
      local_418.Rotation.XY.m128d_f64[0] = local_838;
      local_418.Rotation.XY.m128d_f64[1] = dStack_830;
      local_418.Rotation.ZW.m128d_f64[0] = local_828;
      local_418.Rotation.ZW.m128d_f64[1] = dStack_820;
      UE::Math::TTransform<double>::Multiply(&local_418,&local_418,&local_5f8);
      iVar17 = (this->TaperedCapsuleElems).ArrayNum;
      if (param_5) {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FScopedTaperedCapsuleBuilder::FScopedTaperedCapsuleBuilder
                  (&local_8b0,
                   (FKTaperedCapsuleElem *)
                   ((this->TaperedCapsuleElems).AllocatorInstance.Data + lVar28),
                   (TVector<double> *)&local_938._s_0,param_8->FeatureLevel);
        pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_418,&local_118);
        FDynamicMeshBuilder::GetMesh
                  (&local_8b0.MeshBuilder,pTVar19,param_3,'\0',false,false,param_7,param_8);
        FMemory::Free(local_8b0.Verts);
        FMemory::Free(local_8b0.ArcVerts);
        FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_8b0.MeshBuilder);
      }
      else {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->TaperedCapsuleElems).AllocatorInstance.Data;
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        FKTaperedCapsuleElem::DrawElemWire
                  ((FKTaperedCapsuleElem *)(pFVar32 + lVar28),pFVar26,&local_418,
                   (TVector<double> *)&local_938._s_0,param_2);
      }
      FKTaperedCapsuleElem::~FKTaperedCapsuleElem(&local_7a8);
      uVar30 = uVar30 + 1;
    } while ((int)uVar30 < (this->TaperedCapsuleElems).ArrayNum);
  }
  iVar17 = (this->LevelSetElems).ArrayNum;
  uVar30 = 0;
  if (0 < iVar17) {
    lVar28 = 0;
    do {
      uVar29 = ~uVar30 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar30 < iVar17) {
        uVar16 = uVar29;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar32 = (this->LevelSetElems).AllocatorInstance.Data;
      local_3b8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar32 + lVar28 + 0x30);
      local_3b8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar32 + lVar28 + 0x30 + 8);
      local_3b8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar32 + lVar28 + 0x40);
      local_3b8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar32 + lVar28 + 0x40 + 8);
      local_3b8.Translation.XY.m128d_f64[0] = *(double *)(pFVar32 + lVar28 + 0x50);
      local_3b8.Translation.XY.m128d_f64[1] = *(double *)(pFVar32 + lVar28 + 0x50 + 8);
      local_3b8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar32 + lVar28 + 0x60);
      local_3b8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar32 + lVar28 + 0x60 + 8);
      local_3b8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar32 + lVar28 + 0x70);
      local_3b8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar32 + lVar28 + 0x70 + 8);
      local_3b8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar32 + lVar28 + 0x80);
      local_3b8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar32 + lVar28 + 0x80 + 8);
      UE::Math::TTransform<double>::Multiply(&local_3b8,&local_3b8,param_1);
      iVar17 = (this->LevelSetElems).ArrayNum;
      if (param_5) {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FKLevelSetElem::GetElemSolid
                  ((FKLevelSetElem *)
                   ((this->LevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar30 * 0xa0),
                   &local_3b8,(TVector<double> *)&local_938._s_0,param_3,param_7,param_8);
      }
      else {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = uVar29;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->LevelSetElems).AllocatorInstance.Data + lVar28;
        pcVar6 = *(code **)(*(longlong *)pFVar32 + 0x10);
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        (*pcVar6)(pFVar32,pFVar26,&local_3b8,uVar11);
      }
      iVar17 = (this->LevelSetElems).ArrayNum;
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + 0xa0;
    } while ((int)uVar30 < iVar17);
  }
  uVar30 = 0;
  if (0 < (this->SkinnedLevelSetElems).ArrayNum) {
    lVar28 = 0;
    do {
      iVar17 = (this->SkinnedLevelSetElems).ArrayNum;
      if (param_5) {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FKSkinnedLevelSetElem::GetElemSolid
                  ((FKSkinnedLevelSetElem *)
                   ((this->SkinnedLevelSetElems).AllocatorInstance.Data +
                   (longlong)(int)uVar30 * 0x38),param_1,(TVector<double> *)&local_938._s_0,param_3,
                   param_7,param_8);
      }
      else {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->SkinnedLevelSetElems).AllocatorInstance.Data;
        pcVar6 = *(code **)(*(longlong *)(pFVar32 + lVar28) + 0x10);
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        (*pcVar6)(pFVar32 + (longlong)(int)uVar30 * 0x38,pFVar26,param_1,uVar11);
      }
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + 0x38;
    } while ((int)uVar30 < (this->SkinnedLevelSetElems).ArrayNum);
  }
  uVar30 = 0;
  if (0 < (this->MLLevelSetElems).ArrayNum) {
    lVar28 = 0;
    do {
      iVar17 = (this->MLLevelSetElems).ArrayNum;
      if (param_5) {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FKMLLevelSetElem::GetElemSolid
                  ((FKMLLevelSetElem *)
                   ((this->MLLevelSetElems).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x50),
                   param_1,(TVector<double> *)&local_938._s_0,param_3,param_7,param_8);
      }
      else {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->MLLevelSetElems).AllocatorInstance.Data;
        pcVar6 = *(code **)(*(longlong *)(pFVar32 + lVar28) + 0x10);
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        (*pcVar6)(pFVar32 + (longlong)(int)uVar30 * 0x50,pFVar26,param_1,uVar11);
      }
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + 0x50;
    } while ((int)uVar30 < (this->MLLevelSetElems).ArrayNum);
  }
  uVar30 = 0;
  if (0 < (this->SkinnedTriangleMeshElems).ArrayNum) {
    lVar28 = 0;
    do {
      iVar17 = (this->SkinnedTriangleMeshElems).ArrayNum;
      if (param_5) {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FKSkinnedTriangleMeshElem::GetElemSolid
                  ((FKSkinnedTriangleMeshElem *)
                   ((this->SkinnedTriangleMeshElems).AllocatorInstance.Data +
                   (longlong)(int)uVar30 * 0x38),param_1,(TVector<double> *)&local_938._s_0,param_3,
                   param_7,param_8);
      }
      else {
        uVar16 = 0;
        if ((int)uVar30 < iVar17) {
          uVar16 = ~uVar30 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = (this->SkinnedTriangleMeshElems).AllocatorInstance.Data;
        pcVar6 = *(code **)(*(longlong *)(pFVar32 + lVar28) + 0x10);
        pFVar26 = FMeshElementCollector::GetPDI(param_8,param_7);
        (*pcVar6)(pFVar32 + (longlong)(int)uVar30 * 0x38,pFVar26,param_1,uVar11);
      }
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + 0x38;
    } while ((int)uVar30 < (this->SkinnedTriangleMeshElems).ArrayNum);
  }
  return;
}

// GetElement @ 14830a300

FKShapeElem * __thiscall FKAggregateGeom::GetElement(FKAggregateGeom *this,Type param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FKShapeElem *pFVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  switch(param_1) {
  case Sphere:
    if ((-1 < param_2) && (param_2 < (this->SphereElems).ArrayNum)) {
      if ((param_2 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->SphereElems).AllocatorInstance.Data + lVar5 * 0x50);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019428>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xa4,"SphereElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case Box:
    if ((-1 < param_2) && (param_2 < (this->BoxElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->BoxElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->BoxElems).AllocatorInstance.Data + lVar5 * 0x70);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019434>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xaa,"BoxElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case Sphyl:
    if ((-1 < param_2) && (param_2 < (this->SphylElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->SphylElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->SphylElems).AllocatorInstance.Data + lVar5 * 0x68);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019440>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xb0,"SphylElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case Convex:
    if ((-1 < param_2) && (param_2 < (this->ConvexElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->ConvexElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->ConvexElems).AllocatorInstance.Data + lVar5 * 0x100);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019446>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xb6,"ConvexElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case TaperedCapsule:
    if ((-1 < param_2) && (param_2 < (this->TaperedCapsuleElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->TaperedCapsuleElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->TaperedCapsuleElems).AllocatorInstance.Data + lVar5 * 0x70);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019452>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xbc,"TaperedCapsuleElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case LevelSet:
    if ((-1 < param_2) && (param_2 < (this->LevelSetElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->LevelSetElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->LevelSetElems).AllocatorInstance.Data + lVar5 * 0xa0);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019458>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xc2,"LevelSetElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case SkinnedLevelSet:
    if ((-1 < param_2) && (param_2 < (this->SkinnedLevelSetElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->SkinnedLevelSetElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->SkinnedLevelSetElems).AllocatorInstance.Data + lVar5 * 0x38);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019464>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,200,"SkinnedLevelSetElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case MLLevelSet:
    if ((-1 < param_2) && (param_2 < (this->MLLevelSetElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->MLLevelSetElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->MLLevelSetElems).AllocatorInstance.Data + lVar5 * 0x50);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019470>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xce,"MLLevelSetElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  case SkinnedTriangleMesh:
    if ((-1 < param_2) && (param_2 < (this->SkinnedTriangleMeshElems).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->SkinnedTriangleMeshElems).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FKShapeElem *)(*pcVar1)();
        return pFVar3;
      }
      return (FKShapeElem *)((this->SkinnedTriangleMeshElems).AllocatorInstance.Data + lVar5 * 0x38)
      ;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019476>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xd4,"SkinnedTriangleMeshElems.IsValidIndex(Index)");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
    break;
  default:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1983460388859019482>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\AggregateGeom.h"
                       ,0xda,"false");
    if (!bVar2) {
      return (FKShapeElem *)0x0;
    }
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FKShapeElem *)(*pcVar1)();
  return pFVar3;
}

