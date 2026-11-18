// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 29

// StaticClass @ 147888d40

UClass * __cdecl ULineBatchComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULineBatchComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LineBatchComponent",
               &Z_Registration_Info_UClass_ULineBatchComponent.InnerSingleton,
               StaticRegisterNativesULineBatchComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULineBatchComponent>,
               InternalVTableHelperCtorCaller<ULineBatchComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULineBatchComponent.InnerSingleton;
}

// ULineBatchComponent @ 1478a9c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULineBatchComponent * __thiscall
ULineBatchComponent::ULineBatchComponent(ULineBatchComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->BatchedLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedLines).ArrayNum = 0;
  (this->BatchedLines).ArrayMax = 0;
  (this->BatchedPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedPoints).ArrayNum = 0;
  (this->BatchedPoints).ArrayMax = 0;
  (this->BatchedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedMeshes).ArrayNum = 0;
  (this->BatchedMeshes).ArrayMax = 0;
  return this;
}

// ULineBatchComponent @ 1478a9d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULineBatchComponent * __thiscall
ULineBatchComponent::ULineBatchComponent(ULineBatchComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->field_0x42 = this->field_0x42 | 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->BatchedLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedLines).ArrayNum = 0;
  (this->BatchedLines).ArrayMax = 0;
  (this->BatchedPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedPoints).ArrayNum = 0;
  (this->BatchedPoints).ArrayMax = 0;
  (this->BatchedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedMeshes).ArrayNum = 0;
  (this->BatchedMeshes).ArrayMax = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  this->field_0x281 = this->field_0x281 | 0x10;
  if ((this->field_0x27b & 8) != 0) {
    this->field_0x27b = this->field_0x27b & 0xf7;
    if (*(code **)(*(longlong *)this + 0xa10) == UPrimitiveComponent::OnGenerateOverlapEventsChanged
       ) {
      USceneComponent::ClearSkipUpdateOverlaps((USceneComponent *)this);
    }
    else {
      (**(code **)(*(longlong *)this + 0xa10))();
    }
  }
  this->bCalculateAccurateBounds = 1;
  this->field_0x27a = this->field_0x27a | 0x80;
  this->DefaultLifeTime = 1.0;
  return this;
}

// ~ULineBatchComponent @ 1478ac0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULineBatchComponent::~ULineBatchComponent(ULineBatchComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  DestructItems<FBatchedMesh,int>
            ((FBatchedMesh *)(this->BatchedMeshes).AllocatorInstance.Data,
             (this->BatchedMeshes).ArrayNum);
  pFVar1 = (this->BatchedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BatchedPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BatchedLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// AddCircle @ 1478b1f10

void __thiscall
ULineBatchComponent::AddCircle
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,int param_6,float param_7,
          uchar param_8,float param_9,uint param_10)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar12;
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  iVar11 = 2;
  if (2 < param_6) {
    iVar11 = param_6;
  }
  iVar8 = 0;
  dVar5 = (double)param_5;
  if (0 < iVar11) {
    local_b8 = dVar5 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
    dStack_b0 = dVar5 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_a8 = dVar5 * (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    do {
      iVar8 = iVar8 + 1;
      __libm_sse2_sincosf_();
      dVar2 = (double)extraout_XMM0_Da;
      dVar12 = (double)extraout_XMM0_Db;
      iVar9 = (this->BatchedLines).ArrayNum;
      dVar4 = (dVar2 * (param_3->field0_0x0)._s_0.X + dVar12 * (param_2->field0_0x0)._s_0.X) * dVar5
              + (param_1->field0_0x0)._s_0.X;
      dVar3 = (dVar2 * (param_3->field0_0x0)._s_0.Z + dVar12 * (param_2->field0_0x0)._s_0.Z) * dVar5
              + (param_1->field0_0x0)._s_0.Z;
      dVar2 = (dVar12 * (param_2->field0_0x0)._s_0.Y + dVar2 * (param_3->field0_0x0)._s_0.Y) * dVar5
              + (param_1->field0_0x0)._s_0.Y;
      if (iVar9 == (this->BatchedLines).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&(this->BatchedLines).AllocatorInstance,
                           &(this->BatchedLines).ArrayMax);
      }
      (this->BatchedLines).ArrayNum = iVar9 + 1;
      lVar10 = (longlong)iVar9;
      pFVar1 = (this->BatchedLines).AllocatorInstance.Data;
      *(double *)(pFVar1 + lVar10 * 0x50) = local_b8;
      *(double *)(pFVar1 + lVar10 * 0x50 + 8) = dStack_b0;
      *(double *)(pFVar1 + lVar10 * 0x50 + 0x10) = local_a8;
      *(double *)(pFVar1 + lVar10 * 0x50 + 0x18) = dVar4;
      *(double *)(pFVar1 + lVar10 * 0x50 + 0x20) = dVar2;
      *(double *)(pFVar1 + lVar10 * 0x50 + 0x28) = dVar3;
      uVar6 = *(undefined8 *)&param_4->field0_0x0;
      uVar7 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
      pFVar1[lVar10 * 0x50 + 0x48] = (FScriptContainerElement)param_8;
      *(float *)(pFVar1 + lVar10 * 0x50 + 0x40) = param_9;
      *(float *)(pFVar1 + lVar10 * 0x50 + 0x44) = param_7;
      *(uint *)(pFVar1 + lVar10 * 0x50 + 0x4c) = param_10;
      *(undefined8 *)(pFVar1 + lVar10 * 0x50 + 0x30) = uVar6;
      *(undefined8 *)(pFVar1 + lVar10 * 0x50 + 0x30 + 8) = uVar7;
      local_b8 = dVar4;
      dStack_b0 = dVar2;
      local_a8 = dVar3;
    } while (iVar8 < iVar11);
  }
  return;
}

// AddHalfCircle @ 1478b27a0

void __thiscall
ULineBatchComponent::AddHalfCircle
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,int param_6,float param_7,
          uchar param_8,float param_9,uint param_10)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar15;
  undefined4 uVar16;
  double local_c8;
  
  iVar14 = 2;
  if (2 < param_6) {
    iVar14 = param_6;
  }
  iVar11 = 0;
  dVar6 = (double)param_5;
  dVar3 = dVar6 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  if (0 < iVar14 / 2) {
    dVar7 = dVar6 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
    local_c8 = dVar6 * (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    do {
      uVar10 = (ulonglong)dVar3 >> 0x20;
      uVar16 = SUB84(dVar3,0);
      iVar11 = iVar11 + 1;
      __libm_sse2_sincosf_();
      dVar4 = (double)extraout_XMM0_Da;
      dVar15 = (double)extraout_XMM0_Db;
      dVar5 = (dVar4 * (param_3->field0_0x0)._s_0.X + dVar15 * (param_2->field0_0x0)._s_0.X) * dVar6
              + (param_1->field0_0x0)._s_0.X;
      dVar3 = (dVar4 * (param_3->field0_0x0)._s_0.Y + dVar15 * (param_2->field0_0x0)._s_0.Y) * dVar6
              + (param_1->field0_0x0)._s_0.Y;
      dVar4 = (dVar4 * (param_3->field0_0x0)._s_0.Z + dVar15 * (param_2->field0_0x0)._s_0.Z) * dVar6
              + (param_1->field0_0x0)._s_0.Z;
      iVar12 = (this->BatchedLines).ArrayNum;
      if (iVar12 == (this->BatchedLines).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&(this->BatchedLines).AllocatorInstance,
                            &(this->BatchedLines).ArrayMax);
      }
      (this->BatchedLines).ArrayNum = iVar12 + 1;
      lVar13 = (longlong)iVar12;
      pFVar1 = (this->BatchedLines).AllocatorInstance.Data;
      auVar2._8_4_ = uVar16;
      auVar2._0_8_ = dVar7;
      auVar2._12_4_ = (int)uVar10;
      *(undefined1 (*) [16])(pFVar1 + lVar13 * 0x50) = auVar2;
      *(double *)(pFVar1 + lVar13 * 0x50 + 0x10) = local_c8;
      *(double *)(pFVar1 + lVar13 * 0x50 + 0x18) = dVar5;
      *(double *)(pFVar1 + lVar13 * 0x50 + 0x20) = dVar3;
      *(double *)(pFVar1 + lVar13 * 0x50 + 0x28) = dVar4;
      uVar8 = *(undefined8 *)&param_4->field0_0x0;
      uVar9 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
      pFVar1[lVar13 * 0x50 + 0x48] = (FScriptContainerElement)param_8;
      *(float *)(pFVar1 + lVar13 * 0x50 + 0x40) = param_9;
      *(float *)(pFVar1 + lVar13 * 0x50 + 0x44) = param_7;
      *(uint *)(pFVar1 + lVar13 * 0x50 + 0x4c) = param_10;
      *(undefined8 *)(pFVar1 + lVar13 * 0x50 + 0x30) = uVar8;
      *(undefined8 *)(pFVar1 + lVar13 * 0x50 + 0x30 + 8) = uVar9;
      dVar7 = dVar5;
      local_c8 = dVar4;
    } while (iVar11 < iVar14 / 2);
  }
  return;
}

// ApplyWorldOffset @ 1478b4d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULineBatchComponent::ApplyWorldOffset
          (ULineBatchComponent *this,TVector<double> *param_1,bool param_2)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  double *pdVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  USceneComponent::ApplyWorldOffset((USceneComponent *)this,param_1,param_2);
  iVar2 = (this->BatchedLines).ArrayNum;
  bVar4 = false;
  pFVar6 = (this->BatchedLines).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar2 * 0x50;
  while( true ) {
    if ((this->BatchedLines).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FBatchedLine,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar8) break;
    bVar4 = true;
    *(double *)pFVar6 = (param_1->field0_0x0)._s_0.X + *(double *)pFVar6;
    *(double *)(pFVar6 + 8) = (param_1->field0_0x0)._s_0.Y + *(double *)(pFVar6 + 8);
    *(double *)(pFVar6 + 0x10) = *(double *)(pFVar6 + 0x10) + (param_1->field0_0x0)._s_0.Z;
    *(double *)(pFVar6 + 0x18) = (param_1->field0_0x0)._s_0.X + *(double *)(pFVar6 + 0x18);
    *(double *)(pFVar6 + 0x20) = (param_1->field0_0x0)._s_0.Y + *(double *)(pFVar6 + 0x20);
    *(double *)(pFVar6 + 0x28) = (param_1->field0_0x0)._s_0.Z + *(double *)(pFVar6 + 0x28);
    pFVar6 = pFVar6 + 0x50;
  }
  iVar2 = (this->BatchedPoints).ArrayNum;
  pFVar6 = (this->BatchedPoints).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((this->BatchedPoints).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FBatchedPoint,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar8) break;
    bVar4 = true;
    *(double *)pFVar6 = *(double *)pFVar6 + (param_1->field0_0x0)._s_0.X;
    *(double *)(pFVar6 + 8) = (param_1->field0_0x0)._s_0.Y + *(double *)(pFVar6 + 8);
    *(double *)(pFVar6 + 0x10) = (param_1->field0_0x0)._s_0.Z + *(double *)(pFVar6 + 0x10);
    pFVar6 = pFVar6 + 0x38;
  }
  uVar3 = (this->BatchedMeshes).ArrayNum;
  uVar5 = (ulonglong)(int)uVar3;
  pFVar6 = (this->BatchedMeshes).AllocatorInstance.Data;
  pFVar8 = pFVar6 + uVar5 * 0x30;
  while( true ) {
    if ((this->BatchedMeshes).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FBatchedMesh,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar8) break;
    iVar2 = *(int *)(pFVar6 + 8);
    pdVar7 = *(double **)pFVar6;
    pdVar1 = pdVar7 + (longlong)iVar2 * 3;
    while( true ) {
      if (*(int *)(pFVar6 + 8) != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pdVar7 == pdVar1) break;
      bVar4 = true;
      *pdVar7 = (param_1->field0_0x0)._s_0.X + *pdVar7;
      pdVar7[1] = (param_1->field0_0x0)._s_0.Y + pdVar7[1];
      pdVar7[2] = (param_1->field0_0x0)._s_0.Z + pdVar7[2];
      pdVar7 = pdVar7 + 3;
    }
    uVar5 = (ulonglong)uVar3;
    pFVar6 = pFVar6 + 0x30;
  }
  if (bVar4) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// CalcBounds @ 1478b7c20

TBoxSphereBounds<double,double> * __thiscall
ULineBatchComponent::CalcBounds
          (ULineBatchComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double *pdVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar20;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 local_f8 [4];
  uint local_f4;
  TBoxSphereBounds<double,double> *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  TTransform<double> *local_b0;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->bCalculateAccurateBounds != 0) {
    bVar5 = false;
    pFVar9 = (this->BatchedLines).AllocatorInstance.Data;
    iVar4 = (this->BatchedLines).ArrayNum;
    pFVar8 = pFVar9 + 0x28;
    local_e8 = 0;
    uStack_e0 = 0;
    pFVar11 = pFVar9 + (longlong)iVar4 * 0x50;
    local_d8 = 0;
    uStack_d0 = 0;
    uVar25 = 0;
    uVar26 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar18 = 0;
    uVar22 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    local_f0 = __return_storage_ptr__;
    local_b0 = param_1;
    while( true ) {
      if ((this->BatchedLines).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FBatchedLine_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (pFVar9 == pFVar11) break;
      if (bVar5) {
        dVar16 = *(double *)(pFVar8 + -0x20);
        dVar19 = *(double *)(pFVar8 + -0x18);
        dVar23 = *(double *)&pFVar9->field_0x0;
        uVar12 = uVar27;
        uVar13 = uVar28;
        if (dVar23 <= (double)CONCAT44(uVar28,uVar27)) {
          uVar12 = SUB84(dVar23,0);
          uVar13 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar23 = *(double *)&pFVar9->field_0x0;
        if ((double)CONCAT44(uVar26,uVar25) <= dVar23) {
          uVar25 = SUB84(dVar23,0);
          uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        uVar14 = SUB84(dVar16,0);
        uVar15 = (int)((ulonglong)dVar16 >> 0x20);
        if ((double)CONCAT44(uVar34,uVar33) <= dVar16) {
          uVar14 = uVar33;
          uVar15 = uVar34;
        }
        uVar17 = SUB84(dVar19,0);
        uVar21 = (int)((ulonglong)dVar19 >> 0x20);
        if ((double)CONCAT44(uVar32,uVar31) <= dVar19) {
          uVar17 = uVar31;
          uVar21 = uVar32;
        }
        if (dVar16 <= (double)CONCAT44(uVar22,uVar18)) {
          dVar16 = (double)CONCAT44(uVar22,uVar18);
        }
        if (dVar19 <= (double)CONCAT44(uVar30,uVar29)) {
          dVar19 = (double)CONCAT44(uVar30,uVar29);
        }
        dVar23 = (double)CONCAT44(uVar26,uVar25);
      }
      else {
        auVar3 = *(undefined1 (*) [16])pFVar9;
        uVar12 = auVar3._0_4_;
        uVar13 = auVar3._4_4_;
        dVar23 = auVar3._0_8_;
        uVar14 = auVar3._8_4_;
        uVar15 = auVar3._12_4_;
        bVar5 = true;
        dVar19 = *(double *)&pFVar9[0x10].field_0x0;
        dVar16 = auVar3._8_8_;
        uVar17 = SUB84(dVar19,0);
        uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
      }
      if (bVar5) {
        dVar20 = *(double *)(pFVar8 + -0x10);
        uVar25 = SUB84(dVar20,0);
        uVar26 = (undefined4)((ulonglong)dVar20 >> 0x20);
        pFVar9 = pFVar9 + 0x50;
        dVar24 = *(double *)(pFVar8 + -8);
        uVar18 = SUB84(dVar24,0);
        uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar2 = *(double *)pFVar8;
        uVar29 = SUB84(dVar2,0);
        uVar30 = (undefined4)((ulonglong)dVar2 >> 0x20);
        uVar27 = uVar25;
        uVar28 = uVar26;
        if ((double)CONCAT44(uVar13,uVar12) <= dVar20) {
          uVar27 = uVar12;
          uVar28 = uVar13;
        }
        if (dVar20 <= dVar23) {
          uVar25 = SUB84(dVar23,0);
          uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        uVar33 = uVar18;
        uVar34 = uVar22;
        if ((double)CONCAT44(uVar15,uVar14) <= dVar24) {
          uVar33 = uVar14;
          uVar34 = uVar15;
        }
        uVar31 = uVar29;
        uVar32 = uVar30;
        if ((double)CONCAT44(uVar21,uVar17) <= dVar2) {
          uVar31 = uVar17;
          uVar32 = uVar21;
        }
        pFVar8 = pFVar8 + 0x50;
        if (dVar24 <= dVar16) {
          uVar18 = SUB84(dVar16,0);
          uVar22 = (undefined4)((ulonglong)dVar16 >> 0x20);
        }
        if (dVar2 <= dVar19) {
          uVar29 = SUB84(dVar19,0);
          uVar30 = (undefined4)((ulonglong)dVar19 >> 0x20);
        }
      }
      else {
        uVar25 = *(undefined4 *)(pFVar8 + -0x10);
        uVar26 = *(undefined4 *)(pFVar8 + -0xc);
        uVar18 = *(undefined4 *)(pFVar8 + -8);
        uVar22 = *(undefined4 *)(pFVar8 + -4);
        pFVar9 = pFVar9 + 0x50;
        bVar5 = true;
        uVar29 = SUB84(*(double *)pFVar8,0);
        uVar30 = (undefined4)((ulonglong)*(double *)pFVar8 >> 0x20);
        pFVar8 = pFVar8 + 0x50;
        uVar27 = uVar25;
        uVar28 = uVar26;
        uVar31 = uVar29;
        uVar32 = uVar30;
        uVar33 = uVar18;
        uVar34 = uVar22;
      }
    }
    iVar4 = (this->BatchedPoints).ArrayNum;
    pFVar9 = (this->BatchedPoints).AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar4 * 0x38;
    while( true ) {
      if ((this->BatchedPoints).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FBatchedPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (pFVar9 == pFVar8) break;
      if (bVar5) {
        dVar16 = *(double *)(pFVar9 + 8);
        dVar19 = *(double *)pFVar9;
        if (dVar19 <= (double)CONCAT44(uVar28,uVar27)) {
          uVar27 = SUB84(dVar19,0);
          uVar28 = (undefined4)((ulonglong)dVar19 >> 0x20);
        }
        dVar19 = *(double *)(pFVar9 + 0x10);
        if (dVar19 <= (double)CONCAT44(uVar32,uVar31)) {
          uVar31 = SUB84(dVar19,0);
          uVar32 = (undefined4)((ulonglong)dVar19 >> 0x20);
        }
        dVar19 = *(double *)pFVar9;
        if ((double)CONCAT44(uVar26,uVar25) <= dVar19) {
          uVar25 = SUB84(dVar19,0);
          uVar26 = (undefined4)((ulonglong)dVar19 >> 0x20);
        }
        dVar19 = *(double *)(pFVar9 + 0x10);
        if ((double)CONCAT44(uVar30,uVar29) <= dVar19) {
          uVar29 = SUB84(dVar19,0);
          uVar30 = (undefined4)((ulonglong)dVar19 >> 0x20);
        }
        pFVar9 = pFVar9 + 0x38;
        uVar12 = SUB84(dVar16,0);
        uVar13 = (int)((ulonglong)dVar16 >> 0x20);
        if ((double)CONCAT44(uVar34,uVar33) <= dVar16) {
          uVar12 = uVar33;
          uVar13 = uVar34;
        }
        if (dVar16 <= (double)CONCAT44(uVar22,uVar18)) {
          dVar16 = (double)CONCAT44(uVar22,uVar18);
        }
        uVar18 = SUB84(dVar16,0);
        uVar22 = (undefined4)((ulonglong)dVar16 >> 0x20);
        uVar33 = uVar12;
        uVar34 = uVar13;
      }
      else {
        uVar25 = *(undefined4 *)pFVar9;
        uVar26 = *(undefined4 *)(pFVar9 + 4);
        uVar18 = *(undefined4 *)(pFVar9 + 8);
        uVar22 = *(undefined4 *)(pFVar9 + 0xc);
        bVar5 = true;
        uVar29 = SUB84(*(double *)(pFVar9 + 0x10),0);
        uVar30 = (undefined4)((ulonglong)*(double *)(pFVar9 + 0x10) >> 0x20);
        pFVar9 = pFVar9 + 0x38;
        uVar27 = uVar25;
        uVar28 = uVar26;
        uVar31 = uVar29;
        uVar32 = uVar30;
        uVar33 = uVar18;
        uVar34 = uVar22;
      }
    }
    local_f4 = (this->BatchedMeshes).ArrayNum;
    uVar7 = (ulonglong)(int)local_f4;
    pFVar9 = (this->BatchedMeshes).AllocatorInstance.Data;
    pFVar8 = pFVar9 + uVar7 * 0x30;
    while( true ) {
      if ((this->BatchedMeshes).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<FBatchedMesh_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (pFVar9 == pFVar8) break;
      iVar4 = *(int *)(pFVar9 + 8);
      pdVar10 = *(double **)pFVar9;
      pdVar1 = pdVar10 + (longlong)iVar4 * 3;
      while( true ) {
        if (*(int *)(pFVar9 + 8) != iVar4) {
          `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_f8);
        }
        if (pdVar10 == pdVar1) break;
        if (bVar5) {
          dVar16 = *pdVar10;
          if (dVar16 <= (double)CONCAT44(uVar28,uVar27)) {
            uVar27 = SUB84(dVar16,0);
            uVar28 = (undefined4)((ulonglong)dVar16 >> 0x20);
          }
          dVar16 = pdVar10[1];
          if (dVar16 <= (double)CONCAT44(uVar34,uVar33)) {
            uVar33 = SUB84(dVar16,0);
            uVar34 = (undefined4)((ulonglong)dVar16 >> 0x20);
          }
          dVar16 = pdVar10[2];
          if (dVar16 <= (double)CONCAT44(uVar32,uVar31)) {
            uVar31 = SUB84(dVar16,0);
            uVar32 = (undefined4)((ulonglong)dVar16 >> 0x20);
          }
          dVar16 = *pdVar10;
          if ((double)CONCAT44(uVar26,uVar25) <= dVar16) {
            uVar25 = SUB84(dVar16,0);
            uVar26 = (undefined4)((ulonglong)dVar16 >> 0x20);
          }
          dVar16 = pdVar10[1];
          if ((double)CONCAT44(uVar22,uVar18) <= dVar16) {
            uVar18 = SUB84(dVar16,0);
            uVar22 = (undefined4)((ulonglong)dVar16 >> 0x20);
          }
          dVar16 = pdVar10[2];
          if ((double)CONCAT44(uVar30,uVar29) <= dVar16) {
            uVar29 = SUB84(dVar16,0);
            uVar30 = (undefined4)((ulonglong)dVar16 >> 0x20);
          }
          pdVar10 = pdVar10 + 3;
        }
        else {
          uVar25 = *(undefined4 *)pdVar10;
          uVar26 = *(undefined4 *)((longlong)pdVar10 + 4);
          uVar18 = *(undefined4 *)(pdVar10 + 1);
          uVar22 = *(undefined4 *)((longlong)pdVar10 + 0xc);
          bVar5 = true;
          uVar29 = SUB84(pdVar10[2],0);
          uVar30 = (undefined4)((ulonglong)pdVar10[2] >> 0x20);
          pdVar10 = pdVar10 + 3;
          uVar27 = uVar25;
          uVar28 = uVar26;
          uVar31 = uVar29;
          uVar32 = uVar30;
          uVar33 = uVar18;
          uVar34 = uVar22;
        }
      }
      uVar7 = (ulonglong)local_f4;
      pFVar9 = pFVar9 + 0x30;
    }
    if (bVar5) {
      dVar19 = (double)CONCAT44(uVar30,uVar29) - (double)CONCAT44(uVar32,uVar31);
      dVar23 = (double)CONCAT44(uVar22,uVar18) - (double)CONCAT44(uVar34,uVar33);
      dVar20 = dVar19 * __real_3fe0000000000000;
      dVar24 = dVar23 * __real_3fe0000000000000;
      dVar16 = ((double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar28,uVar27)) *
               __real_3fe0000000000000;
      (local_f0->Origin).field0_0x0._s_0.X = dVar16 + (double)CONCAT44(uVar28,uVar27);
      (local_f0->Origin).field0_0x0._s_0.Y = dVar24 + (double)CONCAT44(uVar34,uVar33);
      (local_f0->Origin).field0_0x0._s_0.Z = dVar20 + (double)CONCAT44(uVar32,uVar31);
      (local_f0->BoxExtent).field0_0x0._s_0.X = dVar16;
      (local_f0->BoxExtent).field0_0x0._s_0.Y = dVar24;
      (local_f0->BoxExtent).field0_0x0._s_0.Z = dVar20;
      dVar16 = (local_f0->BoxExtent).field0_0x0._s_0.X;
      local_f0->SphereRadius =
           SQRT((dVar19 * dVar19 + dVar23 * dVar23) * __real_3fd0000000000000 + dVar16 * dVar16);
    }
    else {
      dVar19 = (local_b0->Translation).XY.m128d_f64[1];
      dVar16 = (local_b0->Translation).ZW.m128d_f64[0];
      (local_f0->Origin).field0_0x0._s_0.X = (local_b0->Translation).XY.m128d_f64[0];
      (local_f0->Origin).field0_0x0._s_0.Y = dVar19;
      (local_f0->Origin).field0_0x0._s_0.Z = dVar16;
      (local_f0->BoxExtent).field0_0x0._s_0.X = 1.0;
      (local_f0->BoxExtent).field0_0x0._s_0.Y = 1.0;
      (local_f0->BoxExtent).field0_0x0._s_0.Z = 1.0;
      local_f0->SphereRadius = 1.0;
    }
    return local_f0;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 4398046511104.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 4398046511104.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 4398046511104.0;
  __return_storage_ptr__->SphereRadius = 7617640011283.166;
  return __return_storage_ptr__;
}

// ClearBatch @ 1478b8ef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineBatchComponent::ClearBatch(ULineBatchComponent *this,uint param_1)

{
  TArray<FBatchedMesh,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  <lambda_1> local_res18 [2];
  <lambda_2> local_res20 [2];
  
  if (param_1 != 0) {
    local_res18[0].BatchID = param_1;
    iVar5 = TArray<FBatchedLine,TSizedDefaultAllocator<32>_>::
            RemoveAllSwap<_ULineBatchComponent::ClearBatch_::__l2::<lambda_1>_>
                      (&this->BatchedLines,local_res18,Default);
    local_res20[0].BatchID = param_1;
    iVar6 = TArray<FBatchedPoint,TSizedDefaultAllocator<32>_>::
            RemoveAllSwap<_ULineBatchComponent::ClearBatch_::__l2::<lambda_2>_>
                      (&this->BatchedPoints,local_res20,Default);
    bVar3 = false;
    uVar8 = 0;
    this_00 = &this->BatchedMeshes;
    iVar1 = (this->BatchedMeshes).ArrayNum;
    if (0 < iVar1) {
      lVar9 = 0;
      iVar10 = iVar1;
      do {
        uVar7 = 0;
        if ((int)uVar8 < iVar10) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(uint *)((this_00->AllocatorInstance).Data + lVar9 + 0x2c) == param_1) {
          bVar3 = true;
          uVar7 = 0;
          if ((int)uVar8 < (this->BatchedMeshes).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TArray<FBatchedMesh,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar8);
        }
        else {
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x30;
        }
        iVar10 = (this->BatchedMeshes).ArrayNum;
      } while ((int)uVar8 < iVar10);
      if (bVar3) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this_00->AllocatorInstance,iVar10,&(this->BatchedMeshes).ArrayMax);
      }
    }
    if (0 < iVar1 - (this->BatchedMeshes).ArrayNum || (0 < iVar6 || 0 < iVar5)) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// CreateSceneProxy @ 1478c2380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall ULineBatchComponent::CreateSceneProxy(ULineBatchComponent *this)

{
  FLineBatcherSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 != (FLineBatcherSceneProxy *)0x0) {
    pFVar1 = FLineBatcherSceneProxy::FLineBatcherSceneProxy(pFVar1,this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DrawBox @ 1478c50b0

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
ULineBatchComponent::DrawBox
          (ULineBatchComponent *this,TBox<double> *param_1,TMatrix<double> *param_2,
          FLinearColor *param_3,uchar param_4,uint param_5)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  double dVar34;
  int iVar35;
  longlong lVar36;
  double *pdVar37;
  double *pdVar38;
  longlong lVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dStack_170;
  longlong local_158;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  
  dVar28 = (param_1->Min).field0_0x0._s_0.X;
  dVar29 = (param_1->Min).field0_0x0._s_0.Y;
  pTVar1 = &this->BatchedLines;
  dVar3 = (param_1->Min).field0_0x0._s_0.Z;
  pdVar38 = &dStack_f0;
  dStack_f0 = dVar29;
  dVar30 = (param_1->Max).field0_0x0._s_0.X;
  dVar31 = (param_1->Max).field0_0x0._s_0.Y;
  local_158 = 2;
  local_e0 = dVar30;
  dStack_d8 = dVar31;
  local_e8 = dVar3;
  dVar4 = (param_1->Max).field0_0x0._s_0.Z;
  local_d0 = dVar4;
  uVar40 = SUB84(__real_3ff0000000000000,0);
  uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  do {
    pdVar37 = &local_e8;
    lVar39 = 2;
    do {
      dVar5 = pdVar37[-1];
      dVar19 = param_2->M[0][0];
      dVar20 = param_2->M[0][1];
      iVar35 = (this->BatchedLines).ArrayNum;
      dVar21 = param_2->M[1][0];
      dVar22 = param_2->M[1][1];
      dVar23 = param_2->M[2][0];
      dVar24 = param_2->M[2][1];
      dVar6 = pdVar38[-1];
      dVar25 = param_2->M[0][2];
      dVar26 = param_2->M[1][2];
      dVar27 = param_2->M[2][2];
      dVar11 = param_2->M[3][0];
      dVar12 = param_2->M[3][1];
      dVar43 = param_2->M[3][2];
      dVar7 = pdVar38[-1];
      dVar18 = (double)CONCAT44(uVar41,uVar40);
      dVar17 = dVar5 * dVar21 + dVar6 * dVar19;
      dVar42 = dVar5 * dVar22 + dVar6 * dVar20;
      auVar13._8_4_ = SUB84(dVar42,0);
      auVar13._0_8_ = dVar17;
      auVar13._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      dStack_170 = auVar13._8_8_;
      dVar17 = dVar17 + dVar4 * dVar23;
      dStack_170 = dStack_170 + dVar4 * dVar24;
      auVar9._8_4_ = SUB84(dStack_170,0);
      auVar9._0_8_ = dVar17;
      auVar9._12_4_ = (int)((ulonglong)dStack_170 >> 0x20);
      dStack_170 = auVar9._8_8_;
      dVar17 = dVar17 + dVar18 * dVar11;
      dStack_170 = dStack_170 + dVar18 * dVar12;
      auVar14._8_4_ = SUB84(dStack_170,0);
      auVar14._0_8_ = dVar17;
      auVar14._12_4_ = (int)((ulonglong)dStack_170 >> 0x20);
      dVar42 = __real_3ff0000000000000 * dVar43;
      dVar11 = __real_3ff0000000000000 * dVar11;
      dVar12 = __real_3ff0000000000000 * dVar12;
      if (iVar35 == (this->BatchedLines).ArrayMax) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
      }
      dStack_170 = auVar14._8_8_;
      (this->BatchedLines).ArrayNum = iVar35 + 1;
      fVar2 = this->DefaultLifeTime;
      lVar36 = (longlong)iVar35;
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar8 + lVar36 * 0x50) =
           dVar5 * dVar21 + dVar7 * dVar19 + dVar3 * dVar23 + dVar11;
      *(double *)(pFVar8 + lVar36 * 0x50 + 8) =
           dVar5 * dVar22 + dVar7 * dVar20 + dVar3 * dVar24 + dVar12;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x10) =
           dVar5 * dVar26 + dVar7 * dVar25 + dVar3 * dVar27 + dVar42;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x18) = dVar17;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x20) = dStack_170;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x28) =
           dVar5 * dVar26 + dVar6 * dVar25 + dVar4 * dVar27 + dVar18 * dVar43;
      dVar5 = *pdVar38;
      uVar32 = *(undefined8 *)&param_3->field0_0x0;
      uVar33 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      *(undefined4 *)(pFVar8 + lVar36 * 0x50 + 0x40) = 0;
      dVar6 = *pdVar37;
      *(undefined8 *)(pFVar8 + lVar36 * 0x50 + 0x30) = uVar32;
      *(undefined8 *)(pFVar8 + lVar36 * 0x50 + 0x30 + 8) = uVar33;
      pFVar8[lVar36 * 0x50 + 0x48] = (FScriptContainerElement)param_4;
      dVar27 = __real_3ff0000000000000;
      *(float *)(pFVar8 + lVar36 * 0x50 + 0x44) = fVar2;
      *(uint *)(pFVar8 + lVar36 * 0x50 + 0x4c) = param_5;
      dVar12 = param_2->M[1][0];
      dVar42 = param_2->M[1][1];
      dVar19 = param_2->M[0][0];
      dVar20 = param_2->M[0][1];
      dVar21 = param_2->M[2][0];
      dVar22 = param_2->M[2][1];
      dVar23 = param_2->M[0][2];
      dVar24 = param_2->M[1][2];
      dVar25 = param_2->M[2][2];
      dVar17 = param_2->M[3][0];
      dVar11 = param_2->M[3][1];
      dVar26 = param_2->M[3][2];
      dVar18 = dVar5 * dVar12 + dVar30 * dVar19;
      dVar7 = dVar5 * dVar42 + dVar30 * dVar20;
      auVar15._8_4_ = SUB84(dVar7,0);
      auVar15._0_8_ = dVar18;
      auVar15._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dStack_170 = auVar15._8_8_;
      dVar18 = dVar18 + dVar6 * dVar21;
      dStack_170 = dStack_170 + dVar6 * dVar22;
      auVar10._8_4_ = SUB84(dStack_170,0);
      auVar10._0_8_ = dVar18;
      auVar10._12_4_ = (int)((ulonglong)dStack_170 >> 0x20);
      dStack_170 = auVar10._8_8_;
      dVar18 = dVar18 + dVar27 * dVar17;
      dStack_170 = dStack_170 + dVar27 * dVar11;
      dVar7 = *pdVar37;
      auVar16._8_4_ = SUB84(dStack_170,0);
      auVar16._0_8_ = dVar18;
      auVar16._12_4_ = (int)((ulonglong)dStack_170 >> 0x20);
      iVar35 = (this->BatchedLines).ArrayNum;
      dVar43 = __real_3ff0000000000000 * dVar26;
      dVar17 = __real_3ff0000000000000 * dVar17;
      dVar11 = __real_3ff0000000000000 * dVar11;
      if (iVar35 == (this->BatchedLines).ArrayMax) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
      }
      dStack_170 = auVar16._8_8_;
      (this->BatchedLines).ArrayNum = iVar35 + 1;
      fVar2 = this->DefaultLifeTime;
      lVar36 = (longlong)iVar35;
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar8 + lVar36 * 0x50) =
           dVar5 * dVar12 + dVar28 * dVar19 + dVar7 * dVar21 + dVar17;
      *(double *)(pFVar8 + lVar36 * 0x50 + 8) =
           dVar5 * dVar42 + dVar28 * dVar20 + dVar7 * dVar22 + dVar11;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x10) =
           dVar5 * dVar24 + dVar28 * dVar23 + dVar7 * dVar25 + dVar43;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x18) = dVar18;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x20) = dStack_170;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x28) =
           dVar5 * dVar24 + dVar30 * dVar23 + dVar6 * dVar25 + dVar27 * dVar26;
      uVar32 = *(undefined8 *)&param_3->field0_0x0;
      uVar33 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      *(undefined4 *)(pFVar8 + lVar36 * 0x50 + 0x40) = 0;
      dVar5 = pdVar38[1];
      dVar6 = pdVar37[-2];
      *(undefined8 *)(pFVar8 + lVar36 * 0x50 + 0x30) = uVar32;
      *(undefined8 *)(pFVar8 + lVar36 * 0x50 + 0x30 + 8) = uVar33;
      pFVar8[lVar36 * 0x50 + 0x48] = (FScriptContainerElement)param_4;
      dVar7 = pdVar37[-2];
      *(float *)(pFVar8 + lVar36 * 0x50 + 0x44) = fVar2;
      dVar34 = __real_3ff0000000000000;
      *(uint *)(pFVar8 + lVar36 * 0x50 + 0x4c) = param_5;
      dVar12 = param_2->M[0][0];
      dVar42 = param_2->M[0][1];
      dVar19 = param_2->M[1][0];
      dVar20 = param_2->M[1][1];
      dVar21 = param_2->M[2][0];
      dVar22 = param_2->M[2][1];
      dVar23 = param_2->M[3][0];
      dVar24 = param_2->M[3][1];
      dVar25 = param_2->M[0][2];
      dVar26 = param_2->M[1][2];
      dVar27 = param_2->M[2][2];
      dVar43 = param_2->M[3][2];
      dVar18 = pdVar38[1];
      iVar35 = (this->BatchedLines).ArrayNum;
      dVar44 = __real_3ff0000000000000 * dVar43;
      dVar17 = __real_3ff0000000000000 * dVar23;
      dVar11 = __real_3ff0000000000000 * dVar24;
      if (iVar35 == (this->BatchedLines).ArrayMax) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
      }
      (this->BatchedLines).ArrayNum = iVar35 + 1;
      pdVar37 = pdVar37 + 3;
      fVar2 = this->DefaultLifeTime;
      lVar36 = (longlong)iVar35;
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar8 + lVar36 * 0x50) =
           dVar29 * dVar19 + dVar6 * dVar12 + dVar18 * dVar21 + dVar17;
      *(double *)(pFVar8 + lVar36 * 0x50 + 8) =
           dVar29 * dVar20 + dVar6 * dVar42 + dVar18 * dVar22 + dVar11;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x10) =
           dVar29 * dVar26 + dVar6 * dVar25 + dVar18 * dVar27 + dVar44;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x18) =
           dVar31 * dVar19 + dVar7 * dVar12 + dVar5 * dVar21 + dVar34 * dVar23;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x20) =
           dVar31 * dVar20 + dVar7 * dVar42 + dVar5 * dVar22 + dVar34 * dVar24;
      *(double *)(pFVar8 + lVar36 * 0x50 + 0x28) =
           dVar31 * dVar26 + dVar7 * dVar25 + dVar5 * dVar27 + dVar34 * dVar43;
      *(float *)(pFVar8 + lVar36 * 0x50 + 0x44) = fVar2;
      *(undefined4 *)(pFVar8 + lVar36 * 0x50 + 0x40) = 0;
      pFVar8[lVar36 * 0x50 + 0x48] = (FScriptContainerElement)param_4;
      *(uint *)(pFVar8 + lVar36 * 0x50 + 0x4c) = param_5;
      uVar32 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      *(undefined8 *)(pFVar8 + lVar36 * 0x50 + 0x30) = *(undefined8 *)&param_3->field0_0x0;
      *(undefined8 *)(pFVar8 + lVar36 * 0x50 + 0x30 + 8) = uVar32;
      uVar40 = SUB84(__real_3ff0000000000000,0);
      uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    pdVar38 = pdVar38 + 3;
    local_158 = local_158 + -1;
  } while (local_158 != 0);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawBox @ 1478c5860

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
ULineBatchComponent::DrawBox
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TQuat<double> *param_3,FLinearColor *param_4,float param_5,uchar param_6,float param_7,
          uint param_8)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double adVar4 [2];
  double adVar5 [2];
  FScriptContainerElement *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  TVector<double> *pTVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  double dVar64;
  undefined1 auVar57 [16];
  double dVar65;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar77;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar96;
  double dVar97;
  double dVar98;
  double dVar99;
  undefined1 auVar100 [16];
  double dVar104;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  double dVar110;
  double dVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  uint uVar116;
  uint uVar117;
  undefined4 uVar118;
  undefined4 uVar119;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  TVector<double> local_1d8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  TTransform<double> local_138 [2];
  
  dVar55 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  dVar97 = (param_2->field0_0x0)._s_0.Z;
  dVar111 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  uVar118 = (undefined4)((ulonglong)dVar13 >> 0x20);
  dVar53 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar20 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar21 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_198._8_4_ = uVar20;
  local_198._0_8_ = dVar53;
  local_198._12_4_ = uVar21;
  local_138[0].Translation.ZW.m128d_f64[1]._0_4_ = uVar20;
  local_138[0].Translation.ZW.m128d_f64[0] = dVar53;
  local_138[0].Translation.ZW.m128d_f64[1]._4_4_ = uVar21;
  local_188 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_180 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  auVar100._8_4_ = SUB84(dStack_180,0);
  auVar100._0_8_ = local_188;
  auVar100._12_4_ = (int)((ulonglong)dStack_180 >> 0x20);
  adVar4[0] = param_3->Z;
  adVar4[1] = param_3->W;
  adVar5[0] = param_3->X;
  adVar5[1] = param_3->Y;
  local_178 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_170 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  dVar96 = local_188 * (param_2->field0_0x0)._s_0.X;
  dVar104 = auVar100._8_8_ * dVar55;
  auVar78._8_4_ = SUB84(dVar104,0);
  auVar78._0_8_ = dVar96;
  uVar20 = (undefined4)((ulonglong)dVar104 >> 0x20);
  auVar78._12_4_ = uVar20;
  dVar52 = dVar97 * local_178;
  dVar105 = dStack_170 * 0.0;
  local_1b8 = blendpd((undefined1  [16])adVar5,(undefined1  [16])adVar4,2);
  auVar22._8_4_ = SUB84(dVar104,0);
  auVar22._0_8_ = dVar96;
  auVar22._12_4_ = uVar20;
  auVar23._8_4_ = SUB84(dVar105,0);
  auVar23._0_8_ = dVar52;
  auVar23._12_4_ = (int)((ulonglong)dVar105 >> 0x20);
  auVar23 = blendpd(auVar22,auVar23,2);
  auVar79._0_8_ = auVar78._8_8_ * adVar5[0] - adVar5[1] * dVar96;
  auVar79._8_8_ = dVar52 * adVar5[1] - adVar4[0] * dVar104;
  uVar21 = SUB84(adVar4[1],0);
  uVar119 = (undefined4)((ulonglong)adVar4[1] >> 0x20);
  dVar98 = local_1b8._0_8_;
  dVar77 = local_1b8._8_8_;
  auVar56._8_4_ = SUB84(auVar79._8_8_,0);
  auVar56._0_8_ = auVar79._0_8_;
  auVar56._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
  auVar24._0_8_ = auVar23._0_8_ * adVar4[0] - dVar98 * dVar52;
  auVar24._8_8_ = auVar23._8_8_ * adVar4[1] - dVar77 * dVar105;
  auVar23 = blendpd(auVar79,auVar24,2);
  dVar51 = auVar56._8_8_ + auVar56._8_8_;
  dVar64 = auVar24._0_8_ + auVar24._0_8_;
  auVar80._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar80._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar66._8_4_ = SUB84(dVar64,0);
  auVar66._0_8_ = dVar51;
  uVar20 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar66._12_4_ = uVar20;
  auVar25._8_4_ = SUB84(dVar64,0);
  auVar25._0_8_ = dVar51;
  auVar25._12_4_ = uVar20;
  auVar23 = blendpd(auVar25,auVar80,2);
  auVar67._0_8_ = auVar66._8_8_ * adVar5[0] - adVar5[1] * dVar51;
  auVar67._8_8_ = auVar80._0_8_ * adVar5[1] - adVar4[0] * dVar64;
  auVar115._8_4_ = uVar21;
  auVar115._0_8_ = adVar4[1];
  auVar115._12_4_ = uVar119;
  local_168._8_4_ = SUB84(dVar13,0);
  local_168._0_8_ = dVar111;
  local_168._12_4_ = uVar118;
  auVar26._0_8_ = auVar23._0_8_ * adVar4[0] - dVar98 * auVar80._0_8_;
  auVar26._8_8_ = auVar23._8_8_ * adVar4[1] - dVar77 * auVar80._8_8_;
  local_138[0].Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
  local_138[0].Translation.XY.m128d_f64[0] = dVar111;
  local_138[0].Translation.XY.m128d_f64[1]._4_4_ = uVar118;
  local_148._8_4_ = uVar21;
  local_148._0_8_ = adVar4[1];
  local_148._12_4_ = uVar119;
  local_1a8._8_4_ = SUB84(adVar4[0],0);
  local_1a8._0_8_ = adVar5[1];
  local_1a8._12_4_ = (int)((ulonglong)adVar4[0] >> 0x20);
  dVar105 = (param_1->field0_0x0)._s_0.Z;
  pTVar1 = &this->BatchedLines;
  auVar23 = blendpd(auVar67,auVar26,2);
  uVar116 = (uint)__xmm_80000000000000008000000000000000;
  uVar117 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar97 = dVar97 * local_178;
  dVar65 = dStack_170 * 0.0;
  dVar99 = local_188 * (param_2->field0_0x0)._s_0.X;
  dVar54 = dStack_180 *
           (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) ^ uVar117,SUB84(dVar55,0) ^ uVar116);
  uVar20 = (undefined4)((ulonglong)dVar54 >> 0x20);
  auVar101._8_4_ = SUB84(dVar54,0);
  auVar101._0_8_ = dVar99;
  auVar101._12_4_ = uVar20;
  auVar27._8_4_ = SUB84(dVar54,0);
  auVar27._0_8_ = dVar99;
  auVar27._12_4_ = uVar20;
  local_1e8 = adVar4[1] * auVar80._0_8_ + dVar52 + auVar23._0_8_ + dVar53;
  auVar12._8_4_ = SUB84(dVar65,0);
  auVar12._0_8_ = dVar97;
  auVar12._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
  auVar23 = blendpd(auVar27,auVar12,2);
  auVar68._8_4_ = uVar21;
  auVar68._0_8_ = adVar4[1];
  auVar68._12_4_ = uVar119;
  auVar102._0_8_ = auVar101._8_8_ * adVar5[0] - adVar5[1] * dVar99;
  auVar102._8_8_ = dVar97 * adVar5[1] - (double)local_1a8._8_8_ * dVar54;
  auVar57._8_4_ = SUB84(auVar102._8_8_,0);
  auVar57._0_8_ = auVar102._0_8_;
  auVar57._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
  auVar28._0_8_ = auVar23._0_8_ * adVar4[0] - dVar97 * dVar98;
  auVar28._8_8_ = auVar23._8_8_ * adVar4[1] - dVar65 * dVar77;
  auVar23 = blendpd(auVar102,auVar28,2);
  dVar52 = auVar57._8_8_ + auVar57._8_8_;
  dVar65 = auVar28._0_8_ + auVar28._0_8_;
  auVar103._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar103._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar81._8_4_ = SUB84(dVar65,0);
  auVar81._0_8_ = dVar52;
  uVar20 = (undefined4)((ulonglong)dVar65 >> 0x20);
  auVar81._12_4_ = uVar20;
  auVar29._8_4_ = SUB84(dVar65,0);
  auVar29._0_8_ = dVar52;
  auVar29._12_4_ = uVar20;
  dVar55 = (param_1->field0_0x0)._s_0.X;
  auVar23 = blendpd(auVar29,auVar103,2);
  dVar110 = dVar105 + (double)local_1e8;
  auVar82._0_8_ = auVar81._8_8_ * adVar5[0] - adVar5[1] * dVar52;
  auVar82._8_8_ = auVar103._0_8_ * adVar5[1] - (double)local_1a8._8_8_ * dVar65;
  auVar30._0_8_ = auVar23._0_8_ * adVar4[0] - dVar98 * auVar103._0_8_;
  auVar30._8_8_ = auVar23._8_8_ * adVar4[1] - dVar77 * auVar103._8_8_;
  auVar23 = blendpd(auVar82,auVar30,2);
  dVar77 = auVar68._8_8_ * dVar65 + dVar54 + auVar30._0_8_ + (double)local_168._8_8_;
  dVar98 = (param_1->field0_0x0)._s_0.Y;
  iVar17 = (this->BatchedLines).ArrayNum;
  local_138[0].Rotation.XY.m128d_f64 = adVar5;
  local_138[0].Rotation.ZW.m128d_f64 = adVar4;
  local_138[0].Scale3D.XY.m128d_f64[0] = local_188;
  local_138[0].Scale3D.XY.m128d_f64[1] = dStack_180;
  local_138[0].Scale3D.ZW.m128d_f64[0] = local_178;
  local_138[0].Scale3D.ZW.m128d_f64[1] = dStack_170;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  lVar18 = (longlong)iVar17;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) =
       dVar55 + adVar4[1] * dVar51 + dVar96 + auVar67._8_8_ + dVar111;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) =
       dVar98 + auVar115._8_8_ * dVar64 + dVar104 + auVar26._0_8_ + dVar13;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar110;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) =
       dVar55 + adVar4[1] * dVar52 + dVar99 + auVar82._8_8_ + dVar111;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar98 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) =
       dVar105 + adVar4[1] * auVar103._0_8_ + dVar97 + auVar23._0_8_ + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  dVar55 = *(double *)&param_2->field0_0x0;
  local_1e8 = (param_2->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  dVar98 = (double)local_1e8 * local_178;
  dVar77 = dStack_170 * 0.0;
  uVar106 = (uint)uVar2 ^ uVar116;
  uVar108 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar117;
  dVar97 = local_188 * dVar55;
  dVar105 = dStack_180 * (double)CONCAT44(uVar108,uVar106);
  auVar83._8_4_ = SUB84(dVar105,0);
  auVar83._0_8_ = dVar97;
  uVar20 = (undefined4)((ulonglong)dVar105 >> 0x20);
  auVar83._12_4_ = uVar20;
  auVar84._0_8_ = auVar83._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar97;
  auVar84._8_8_ = dVar98 * adVar5[1] - (double)local_1a8._8_8_ * dVar105;
  auVar31._8_4_ = SUB84(dVar105,0);
  auVar31._0_8_ = dVar97;
  auVar31._12_4_ = uVar20;
  auVar8._8_4_ = SUB84(dVar77,0);
  auVar8._0_8_ = dVar98;
  auVar8._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
  auVar23 = blendpd(auVar31,auVar8,2);
  auVar58._8_4_ = SUB84(auVar84._8_8_,0);
  auVar58._0_8_ = auVar84._0_8_;
  auVar58._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
  auVar32._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * dVar98;
  auVar32._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * dVar77;
  dVar53 = auVar58._8_8_ + auVar58._8_8_;
  dVar52 = auVar32._0_8_ + auVar32._0_8_;
  auVar23 = blendpd(auVar84,auVar32,2);
  auVar85._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar85._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar69._8_4_ = SUB84(dVar52,0);
  auVar69._0_8_ = dVar53;
  uVar20 = (undefined4)((ulonglong)dVar52 >> 0x20);
  auVar69._12_4_ = uVar20;
  auVar33._8_4_ = SUB84(dVar52,0);
  auVar33._0_8_ = dVar53;
  auVar33._12_4_ = uVar20;
  auVar23 = blendpd(auVar33,auVar85,2);
  auVar70._0_8_ = auVar69._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar53;
  auVar70._8_8_ = auVar85._0_8_ * adVar5[1] - (double)local_1a8._8_8_ * dVar52;
  auVar34._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * auVar85._0_8_;
  auVar34._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * auVar85._8_8_;
  dVar97 = adVar4[1] * dVar53 + dVar97;
  dVar105 = adVar4[1] * dVar52 + dVar105;
  auVar7._8_4_ = SUB84(dVar105,0);
  auVar7._0_8_ = dVar97;
  auVar7._12_4_ = (int)((ulonglong)dVar105 >> 0x20);
  dStack_150 = auVar7._8_8_;
  dVar54 = dVar97 + auVar70._8_8_ + (double)local_168._0_8_;
  dVar65 = dStack_150 + auVar34._0_8_ + (double)local_168._8_8_;
  auVar23 = blendpd(auVar70,auVar34,2);
  dStack_150 = dVar65;
  local_158 = dVar54;
  local_1d8.field0_0x0._s_0.Z =
       adVar4[1] * auVar85._0_8_ + dVar98 + auVar23._0_8_ + (double)local_198._0_8_;
  dVar97 = adVar4[1] * auVar85._8_8_ + dVar77 + auVar23._8_8_ + (double)local_198._8_8_;
  dStack_1f0._0_4_ = SUB84(dVar97,0);
  local_1f8 = local_1d8.field0_0x0._s_0.Z;
  dStack_1f0._4_4_ = (int)((ulonglong)dVar97 >> 0x20);
  dVar97 = (double)local_1e8 * local_178;
  dVar105 = dStack_170 * 0.0;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar98 = local_188 *
           (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) ^ uVar117,SUB84(dVar55,0) ^ uVar116);
  dVar77 = dStack_180 * (double)CONCAT44(uVar108,uVar106);
  auVar86._8_4_ = SUB84(dVar77,0);
  auVar86._0_8_ = dVar98;
  uVar20 = (undefined4)((ulonglong)dVar77 >> 0x20);
  auVar86._12_4_ = uVar20;
  auVar35._8_4_ = SUB84(dVar77,0);
  auVar35._0_8_ = dVar98;
  auVar35._12_4_ = uVar20;
  auVar9._8_4_ = SUB84(dVar105,0);
  auVar9._0_8_ = dVar97;
  auVar9._12_4_ = (int)((ulonglong)dVar105 >> 0x20);
  auVar23 = blendpd(auVar35,auVar9,2);
  auVar87._0_8_ = auVar86._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar98;
  auVar87._8_8_ = dVar97 * adVar5[1] - (double)local_1a8._8_8_ * dVar77;
  auVar59._8_4_ = SUB84(auVar87._8_8_,0);
  auVar59._0_8_ = auVar87._0_8_;
  auVar59._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
  auVar36._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * dVar97;
  auVar36._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * dVar105;
  auVar23 = blendpd(auVar87,auVar36,2);
  dVar55 = auVar59._8_8_ + auVar59._8_8_;
  dVar105 = auVar36._0_8_ + auVar36._0_8_;
  auVar88._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar88._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar71._8_4_ = SUB84(dVar105,0);
  auVar71._0_8_ = dVar55;
  uVar20 = (undefined4)((ulonglong)dVar105 >> 0x20);
  auVar71._12_4_ = uVar20;
  auVar37._8_4_ = SUB84(dVar105,0);
  auVar37._0_8_ = dVar55;
  auVar37._12_4_ = uVar20;
  auVar72._0_8_ = auVar71._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar55;
  auVar72._8_8_ = auVar88._0_8_ * adVar5[1] - (double)local_1a8._8_8_ * dVar105;
  auVar23 = blendpd(auVar37,auVar88,2);
  auVar38._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * auVar88._0_8_;
  auVar38._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * auVar88._8_8_;
  auVar23 = blendpd(auVar72,auVar38,2);
  dVar53 = adVar4[1] * dVar55 + dVar98 + auVar72._8_8_ + (double)local_168._0_8_;
  dVar52 = adVar4[1] * dVar105 + dVar77 + auVar38._0_8_ + (double)local_168._8_8_;
  dVar99 = adVar4[1] * auVar88._0_8_ + dVar97 + auVar23._0_8_ + (double)local_198._0_8_;
  dVar55 = (param_1->field0_0x0)._s_0.X;
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Z;
  dVar98 = (param_1->field0_0x0)._s_0.Y;
  dVar77 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = local_1d8.field0_0x0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  lVar18 = (longlong)iVar17;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar111;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar53 + dVar55;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar52 + dVar98;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar99 + dVar105;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  dVar55 = (param_2->field0_0x0)._s_0.Z;
  dVar105 = dVar55 * local_178;
  dVar98 = dStack_170 * 0.0;
  dVar97 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  dVar99 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^ uVar117
                            ,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar116);
  dVar52 = local_188 * dVar99;
  dVar65 = dStack_180 *
           (double)CONCAT44((uint)((ulonglong)dVar97 >> 0x20) ^ uVar117,SUB84(dVar97,0) ^ uVar116);
  uVar2 = local_1a8._0_8_;
  uVar3 = local_1a8._8_8_;
  auVar89._8_4_ = SUB84(dVar65,0);
  auVar89._0_8_ = dVar52;
  uVar20 = (undefined4)((ulonglong)dVar65 >> 0x20);
  auVar89._12_4_ = uVar20;
  auVar39._8_4_ = SUB84(dVar65,0);
  auVar39._0_8_ = dVar52;
  auVar39._12_4_ = uVar20;
  auVar10._8_4_ = SUB84(dVar98,0);
  auVar10._0_8_ = dVar105;
  auVar10._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
  auVar23 = blendpd(auVar39,auVar10,2);
  auVar90._0_8_ = auVar89._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar52;
  auVar90._8_8_ = dVar105 * adVar5[1] - (double)local_1a8._8_8_ * dVar65;
  auVar60._8_4_ = SUB84(auVar90._8_8_,0);
  auVar60._0_8_ = auVar90._0_8_;
  auVar60._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
  auVar40._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * dVar105;
  auVar40._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * dVar98;
  auVar23 = blendpd(auVar90,auVar40,2);
  dVar77 = auVar60._8_8_ + auVar60._8_8_;
  dVar53 = auVar40._0_8_ + auVar40._0_8_;
  auVar91._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar91._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar73._8_4_ = SUB84(dVar53,0);
  auVar73._0_8_ = dVar77;
  uVar20 = (undefined4)((ulonglong)dVar53 >> 0x20);
  auVar73._12_4_ = uVar20;
  auVar41._8_4_ = SUB84(dVar53,0);
  auVar41._0_8_ = dVar77;
  auVar41._12_4_ = uVar20;
  auVar23 = blendpd(auVar41,auVar91,2);
  auVar74._0_8_ = auVar73._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar77;
  auVar74._8_8_ = auVar91._0_8_ * adVar5[1] - (double)local_1a8._8_8_ * dVar53;
  auVar42._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * auVar91._0_8_;
  auVar42._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * auVar91._8_8_;
  dVar54 = adVar4[1] * dVar77 + dVar52 + auVar74._8_8_ + (double)local_168._0_8_;
  dVar65 = adVar4[1] * dVar53 + dVar65 + auVar42._0_8_ + (double)local_168._8_8_;
  auVar23 = blendpd(auVar74,auVar42,2);
  dVar55 = dVar55 * local_178;
  dVar77 = dStack_170 * 0.0;
  local_1d8.field0_0x0._s_0.Z =
       (double)local_148._0_8_ * auVar91._0_8_ + dVar105 + auVar23._0_8_ + (double)local_198._0_8_;
  dVar105 = (double)local_148._8_8_ * auVar91._8_8_ + dVar98 + auVar23._8_8_ +
            (double)local_198._8_8_;
  dStack_1f0._0_4_ = SUB84(dVar105,0);
  local_1f8 = local_1d8.field0_0x0._s_0.Z;
  dStack_1f0._4_4_ = (int)((ulonglong)dVar105 >> 0x20);
  dVar99 = local_188 * dVar99;
  dVar97 = dStack_180 * dVar97;
  auVar92._8_4_ = SUB84(dVar97,0);
  auVar92._0_8_ = dVar99;
  uVar20 = (undefined4)((ulonglong)dVar97 >> 0x20);
  auVar92._12_4_ = uVar20;
  iVar17 = (this->BatchedLines).ArrayNum;
  auVar43._8_4_ = SUB84(dVar97,0);
  auVar43._0_8_ = dVar99;
  auVar43._12_4_ = uVar20;
  auVar11._8_4_ = SUB84(dVar77,0);
  auVar11._0_8_ = dVar55;
  auVar11._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
  auVar23 = blendpd(auVar43,auVar11,2);
  auVar93._0_8_ = auVar92._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar99;
  auVar93._8_8_ = dVar55 * adVar5[1] - (double)local_1a8._8_8_ * dVar97;
  auVar61._8_4_ = SUB84(auVar93._8_8_,0);
  auVar61._0_8_ = auVar93._0_8_;
  auVar61._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
  auVar44._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * dVar55;
  auVar44._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * dVar77;
  auVar23 = blendpd(auVar93,auVar44,2);
  dVar105 = auVar61._8_8_ + auVar61._8_8_;
  dVar98 = auVar44._0_8_ + auVar44._0_8_;
  auVar94._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar94._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar75._8_4_ = SUB84(dVar98,0);
  auVar75._0_8_ = dVar105;
  uVar20 = (undefined4)((ulonglong)dVar98 >> 0x20);
  auVar75._12_4_ = uVar20;
  auVar45._8_4_ = SUB84(dVar98,0);
  auVar45._0_8_ = dVar105;
  auVar45._12_4_ = uVar20;
  auVar76._0_8_ = auVar75._8_8_ * adVar5[0] - (double)local_1a8._0_8_ * dVar105;
  auVar76._8_8_ = auVar94._0_8_ * adVar5[1] - (double)local_1a8._8_8_ * dVar98;
  auVar23 = blendpd(auVar45,auVar94,2);
  auVar46._0_8_ = auVar23._0_8_ * adVar4[0] - (double)local_1b8._0_8_ * auVar94._0_8_;
  auVar46._8_8_ = auVar23._8_8_ * adVar4[1] - (double)local_1b8._8_8_ * auVar94._8_8_;
  auVar23 = blendpd(auVar76,auVar46,2);
  dVar52 = (double)local_148._0_8_ * dVar105 + dVar99 + auVar76._8_8_ + (double)local_168._0_8_;
  dVar99 = (double)local_148._8_8_ * dVar98 + dVar97 + auVar46._0_8_ + (double)local_168._8_8_;
  dVar111 = (double)local_148._0_8_ * auVar94._0_8_ + dVar55 + auVar23._0_8_ +
            (double)local_198._0_8_;
  dVar55 = (param_1->field0_0x0)._s_0.X;
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Z;
  dVar98 = (param_1->field0_0x0)._s_0.Y;
  dVar77 = (param_1->field0_0x0)._s_0.Y;
  dVar53 = local_1d8.field0_0x0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  lVar18 = (longlong)iVar17;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar53;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar52 + dVar55;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar99 + dVar98;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar111 + dVar105;
  uVar14 = *(undefined8 *)&param_4->field0_0x0;
  uVar15 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar14;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar15;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  local_1e8 = (param_2->field0_0x0)._s_0.Z;
  auVar95._0_8_ = (double)local_1e8 * local_178;
  auVar95._8_8_ = dStack_170 * 0.0;
  _local_1f8 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar105 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^
                             uVar117,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar116) *
            local_188;
  dVar98 = (param_2->field0_0x0)._s_0.Y * dStack_180;
  auVar112._8_4_ = SUB84(dVar98,0);
  auVar112._0_8_ = dVar105;
  uVar20 = (undefined4)((ulonglong)dVar98 >> 0x20);
  auVar112._12_4_ = uVar20;
  auVar47._8_4_ = SUB84(dVar98,0);
  auVar47._0_8_ = dVar105;
  auVar47._12_4_ = uVar20;
  auVar113._0_8_ = auVar112._8_8_ * adVar5[0] - dVar105 * (double)uVar2;
  auVar113._8_8_ = auVar95._0_8_ * adVar5[1] - dVar98 * (double)uVar3;
  auVar23 = blendpd(auVar47,auVar95,2);
  auVar48._0_8_ = auVar23._0_8_ * adVar4[0] - auVar95._0_8_ * (double)local_1b8._0_8_;
  auVar48._8_8_ = auVar23._8_8_ * adVar4[1] - auVar95._8_8_ * (double)local_1b8._8_8_;
  auVar23 = blendpd(auVar113,auVar48,2);
  dVar55 = auVar113._8_8_ + auVar113._8_8_;
  dVar97 = auVar48._0_8_ + auVar48._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar97 >> 0x20);
  auVar114._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar114._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar62._8_4_ = SUB84(dVar97,0);
  auVar62._0_8_ = dVar55;
  auVar62._12_4_ = uVar20;
  auVar49._8_4_ = SUB84(dVar97,0);
  auVar49._0_8_ = dVar55;
  auVar49._12_4_ = uVar20;
  auVar23 = blendpd(auVar49,auVar114,2);
  auVar63._0_8_ = auVar62._8_8_ * adVar5[0] - dVar55 * (double)local_1a8._0_8_;
  auVar63._8_8_ = auVar114._0_8_ * adVar5[1] - dVar97 * (double)local_1a8._8_8_;
  auVar50._0_8_ = auVar23._0_8_ * adVar4[0] - auVar114._0_8_ * (double)local_1b8._0_8_;
  auVar50._8_8_ = auVar23._8_8_ * adVar4[1] - auVar114._8_8_ * (double)local_1b8._8_8_;
  auVar23 = blendpd(auVar63,auVar50,2);
  dVar52 = dVar55 * (double)local_148._0_8_ + dVar105 + auVar63._8_8_ + (double)local_168._0_8_;
  dVar99 = dVar97 * (double)local_148._8_8_ + dVar98 + auVar50._0_8_ + (double)local_168._8_8_;
  dVar111 = auVar114._0_8_ * (double)local_148._0_8_ + auVar95._0_8_ + auVar23._0_8_ +
            (double)local_198._0_8_;
  local_1d8.field0_0x0._s_0.Z = (double)local_1e8;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  local_1e8 = (pTVar19->field0_0x0)._s_0.Z;
  dVar55 = (param_1->field0_0x0)._s_0.X;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar97 = (param_1->field0_0x0)._s_0.Y;
  dVar105 = (param_1->field0_0x0)._s_0.X;
  dVar98 = (param_1->field0_0x0)._s_0.Y;
  dVar53 = (double)local_1e8 + (param_1->field0_0x0)._s_0.Z;
  dVar77 = (param_1->field0_0x0)._s_0.Z;
  local_1d8.field0_0x0._s_0.Z = dVar111;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar52 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar99 + dVar98;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar54 + dVar55;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar65 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  dVar55 = (param_2->field0_0x0)._s_0.X;
  uVar106 = (uint)uVar2 ^ uVar116;
  uVar108 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar117;
  dVar97 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  local_1e8 = CONCAT44(uVar108,uVar106);
  local_1f8 = dVar55;
  dStack_1f0 = dVar97;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dStack_1f0._4_4_ = (uint)((ulonglong)dVar97 >> 0x20) ^ uVar117;
  dStack_1f0._0_4_ = SUB84(dVar97,0) ^ uVar116;
  local_1f8 = dVar55;
  local_1e8 = CONCAT44(uVar108,uVar106);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    local_1e8 = dVar55;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar107 = (uint)uVar2 ^ uVar116;
  uVar109 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar117;
  uVar2 = *(undefined8 *)&param_2->field0_0x0;
  uVar106 = (uint)uVar3 ^ uVar116;
  uVar108 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar117;
  dStack_1f0._4_4_ = uVar109;
  dStack_1f0._0_4_ = uVar107;
  local_1e8 = CONCAT44(uVar108,uVar106);
  local_1f8 = (double)uVar2;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  local_1f8._4_4_ = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar117;
  local_1f8._0_4_ = (uint)uVar2 ^ uVar116;
  local_1e8 = CONCAT44(uVar108,uVar106);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    local_1e8 = dVar55;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  dVar55 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^ uVar117
                            ,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar116);
  dStack_1f0 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar117,(uint)uVar2 ^ uVar116);
  uVar106 = (uint)uVar3 ^ uVar116;
  uVar108 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar117;
  local_1e8 = CONCAT44(uVar108,uVar106);
  local_1f8 = dVar55;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dStack_1f0 = (double)uVar2;
  local_1f8 = dVar55;
  local_1e8 = CONCAT44(uVar108,uVar106);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    local_1e8 = dVar55;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  dStack_1f0 = (param_2->field0_0x0)._s_0.Y;
  auVar23 = *(undefined1 (*) [16])&param_2->field0_0x0;
  uVar106 = (uint)uVar2 ^ uVar116;
  uVar108 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar117;
  local_1f8 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^
                               uVar117,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar116);
  local_1e8 = CONCAT44(uVar108,uVar106);
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  local_1e8 = CONCAT44(uVar108,uVar106);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  _local_1f8 = auVar23;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    local_1e8 = dVar55;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  local_1f8 = (param_2->field0_0x0)._s_0.X;
  dStack_1f0 = (param_2->field0_0x0)._s_0.Y;
  auVar23 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar55 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  local_1e8 = dVar55;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  local_1e8 = CONCAT44((uint)((ulonglong)dVar55 >> 0x20) ^ uVar117,SUB84(dVar55,0) ^ uVar116);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  _local_1f8 = auVar23;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    local_1e8 = dVar55;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  dVar55 = (param_2->field0_0x0)._s_0.X;
  uVar108 = (uint)uVar2 ^ uVar116;
  uVar107 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar117;
  local_1e8 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar106 = (uint)local_1e8;
  uVar16 = (ulonglong)local_1e8 >> 0x20;
  dStack_1f0 = (double)CONCAT44(uVar107,uVar108);
  local_1f8 = dVar55;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dStack_1f0._4_4_ = uVar107;
  dStack_1f0._0_4_ = uVar108;
  local_1f8 = dVar55;
  local_1e8 = CONCAT44((uint)uVar16 ^ uVar117,uVar106 ^ uVar116);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    local_1e8 = dVar55;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  dVar55 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^ uVar117
                            ,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar116);
  local_1e8 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar106 = (uint)local_1e8;
  uVar16 = (ulonglong)local_1e8 >> 0x20;
  uVar108 = (uint)uVar2 ^ uVar116;
  uVar107 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar117;
  dStack_1f0 = (double)CONCAT44(uVar107,uVar108);
  local_1f8 = dVar55;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dStack_1f0._4_4_ = uVar107;
  dStack_1f0._0_4_ = uVar108;
  local_1f8 = dVar55;
  local_1e8 = CONCAT44((uint)uVar16 ^ uVar117,uVar106 ^ uVar116);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.X;
  dVar105 = (param_1->field0_0x0)._s_0.Y;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Z;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    local_1e8 = dVar55;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  dVar55 = (param_2->field0_0x0)._s_0.Y;
  dVar97 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^ uVar117
                            ,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar116);
  local_1e8 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar106 = (uint)local_1e8;
  uVar16 = (ulonglong)local_1e8 >> 0x20;
  local_1f8 = dVar97;
  dStack_1f0 = dVar55;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dStack_1f0 = dVar55;
  local_1f8 = dVar97;
  local_1e8 = CONCAT44((uint)uVar16 ^ uVar117,uVar106 ^ uVar116);
  dVar54 = (pTVar19->field0_0x0)._s_0.X;
  dVar65 = (pTVar19->field0_0x0)._s_0.Y;
  dVar55 = (pTVar19->field0_0x0)._s_0.Z;
  pTVar19 = UE::Math::TTransform<double>::TransformPosition
                      (local_138,&local_1d8,(TVector<double> *)&local_1f8);
  dVar97 = (param_1->field0_0x0)._s_0.Z;
  dVar105 = (param_1->field0_0x0)._s_0.X;
  dVar111 = (pTVar19->field0_0x0)._s_0.X;
  dVar13 = (pTVar19->field0_0x0)._s_0.Y;
  dVar98 = (pTVar19->field0_0x0)._s_0.Z;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar77 = (param_1->field0_0x0)._s_0.X;
  dVar53 = (param_1->field0_0x0)._s_0.Z;
  dVar52 = (param_1->field0_0x0)._s_0.Y;
  dVar99 = (param_1->field0_0x0)._s_0.Y;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = dVar54 + dVar105;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dVar65 + dVar52;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = dVar55 + dVar97;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x18) = dVar111 + dVar77;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = dVar13 + dVar99;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x28) = dVar98 + dVar53;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar6[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30) = uVar2;
  *(undefined8 *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = uVar3;
  *(uint *)(pFVar6 + lVar18 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar6 + lVar18 * 0x50 + 0x44) = param_5;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawBox @ 1478c6cf0

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
ULineBatchComponent::DrawBox
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,float param_4,uchar param_5,float param_6,uint param_7)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  
  pTVar1 = &this->BatchedLines;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  iVar10 = (this->BatchedLines).ArrayNum;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  lVar11 = (longlong)iVar10;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar2 - dVar3;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar7 = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar2 - dVar3;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar2 - dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar2 + dVar3;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  dVar7 = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar2 - dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar2 + dVar3;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar2 - dVar3;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar7 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar2 - dVar3;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar2 - dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar2 + dVar3;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  dVar7 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar2 - dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar3 + dVar2;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar7;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar2 - dVar3;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar2 - dVar3;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar2 - dVar3;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  iVar10 = (this->BatchedLines).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  if (iVar10 == (this->BatchedLines).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar11 = (longlong)iVar10;
  (this->BatchedLines).ArrayNum = iVar10 + 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar5 + lVar11 * 0x50) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 8) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x10) = dVar2 + dVar4;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x18) = dVar6;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x20) = dVar7;
  *(double *)(pFVar5 + lVar11 * 0x50 + 0x28) = dVar2 - dVar3;
  uVar8 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar5[lVar11 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x40) = param_6;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30) = uVar8;
  *(undefined8 *)(pFVar5 + lVar11 * 0x50 + 0x30 + 8) = uVar9;
  *(uint *)(pFVar5 + lVar11 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar5 + lVar11 * 0x50 + 0x44) = param_4;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawCapsule @ 1478c74f0

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
ULineBatchComponent::DrawCapsule
          (ULineBatchComponent *this,TVector<double> *param_1,float param_2,float param_3,
          TQuat<double> *param_4,FLinearColor *param_5,float param_6,uchar param_7,float param_8,
          uint param_9)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  TVector<double>_u_0 local_190;
  double local_178;
  TVector<double>_u_0 local_170;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0 [7];
  
  local_f8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  dVar25 = param_4->X;
  dVar2 = param_4->Y;
  dVar21 = param_4->Z;
  dVar9 = dVar21 + dVar21;
  dVar6 = dVar2 + dVar2;
  dVar5 = (dVar25 + dVar25) * dVar25;
  dVar3 = param_4->W;
  dVar24 = (dVar25 + dVar25) * dVar3;
  local_190._s_0.X = dVar6 * dVar25 - dVar9 * dVar3;
  dVar22 = dVar9 * dVar3 + dVar6 * dVar25;
  local_190._s_0.Y = __real_3ff0000000000000 - (dVar9 * dVar21 + dVar5);
  local_e0[0]._0_8_ = dVar6 * dVar3 + dVar9 * dVar25;
  uVar28 = (uint)local_e0[0]._0_8_;
  uVar13 = (ulonglong)local_e0[0]._0_8_ >> 0x20;
  dVar21 = __real_3ff0000000000000 - (dVar9 * dVar21 + dVar6 * dVar2);
  local_e0[0]._8_8_ = dVar9 * dVar2 - dVar24;
  uVar27 = (uint)local_e0[0]._8_8_;
  uVar14 = (ulonglong)local_e0[0]._8_8_ >> 0x20;
  dVar25 = dVar9 * dVar25 - dVar6 * dVar3;
  dVar24 = dVar24 + dVar9 * dVar2;
  local_e0[0]._16_8_ = __real_3ff0000000000000 - (dVar6 * dVar2 + dVar5);
  uVar29 = (uint)local_e0[0]._16_8_;
  uVar15 = (ulonglong)local_e0[0]._16_8_ >> 0x20;
  fVar26 = param_2 - param_3;
  if (param_2 - param_3 <= __real_3f800000) {
    fVar26 = __real_3f800000;
  }
  dVar2 = (double)fVar26;
  dVar6 = (double)local_e0[0]._0_8_ * dVar2 + dVar8;
  dVar8 = dVar8 - (double)local_e0[0]._0_8_ * dVar2;
  dVar9 = (double)local_e0[0]._8_8_ * dVar2 + dVar10;
  dVar3 = (double)local_e0[0]._16_8_ * dVar2 + local_f8._s_0.Z;
  dVar5 = local_f8._s_0.Z - (double)local_e0[0]._16_8_ * dVar2;
  dVar10 = dVar10 - (double)local_e0[0]._8_8_ * dVar2;
  local_190._s_0.Z = dVar24;
  local_178 = dVar9;
  local_170._s_0.X = dVar21;
  local_170._s_0.Y = dVar22;
  local_170._s_0.Z = dVar25;
  local_140 = local_190._s_0.X;
  local_138 = local_190._s_0.Y;
  local_130 = dVar6;
  local_128._s_0.X = dVar6;
  local_128._s_0.Y = dVar9;
  local_128._s_0.Z = dVar3;
  local_110._s_0.X = dVar8;
  local_110._s_0.Y = dVar10;
  local_110._s_0.Z = dVar5;
  AddCircle(this,(TVector<double> *)&local_128._s_0,(TVector<double> *)&local_170._s_0,
            (TVector<double> *)&local_190._s_0,param_5,param_3,0x10,param_6,param_7,param_8,param_9)
  ;
  AddCircle(this,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_170._s_0,
            (TVector<double> *)&local_190._s_0,param_5,param_3,0x10,param_6,param_7,param_8,param_9)
  ;
  AddHalfCircle(this,(TVector<double> *)&local_128._s_0,(TVector<double> *)&local_190._s_0,
                (TVector<double> *)&local_e0[0]._s_0,param_5,param_3,0x10,param_6,param_7,param_8,
                param_9);
  AddHalfCircle(this,(TVector<double> *)&local_128._s_0,(TVector<double> *)&local_170._s_0,
                (TVector<double> *)&local_e0[0]._s_0,param_5,param_3,0x10,param_6,param_7,param_8,
                param_9);
  uVar19 = (uint)__xmm_80000000000000008000000000000000;
  uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_f8._s_0.Z = (double)CONCAT44((uint)uVar15 ^ uVar20,uVar29 ^ uVar19);
  local_f8._s_0.X = (double)CONCAT44((uint)uVar13 ^ uVar20,uVar28 ^ uVar19);
  local_f8._s_0.Y = (double)CONCAT44((uint)uVar14 ^ uVar20,uVar27 ^ uVar19);
  AddHalfCircle(this,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_190._s_0,
                (TVector<double> *)&local_f8._s_0,param_5,param_3,0x10,param_6,param_7,param_8,
                param_9);
  AddHalfCircle(this,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_170._s_0,
                (TVector<double> *)&local_f8._s_0,param_5,param_3,0x10,param_6,param_7,param_8,
                param_9);
  pTVar1 = &this->BatchedLines;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar2 = (double)param_3;
  dVar25 = dVar25 * dVar2;
  dVar21 = dVar21 * dVar2;
  dVar22 = dVar22 * dVar2;
  local_148 = dVar3 + dVar25;
  local_158 = dVar6 + dVar21;
  local_150 = dVar9 + dVar22;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar18 * 0x50) = local_158;
  *(double *)(pFVar4 + lVar18 * 0x50 + 8) = local_150;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x10) = local_148;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x18) = dVar8 + dVar21;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x20) = dVar10 + dVar22;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x28) = dVar5 + dVar25;
  uVar11 = *(undefined8 *)&param_5->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  pFVar4[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_7;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x40) = param_8;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30) = uVar11;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30 + 8) = uVar12;
  *(uint *)(pFVar4 + lVar18 * 0x50 + 0x4c) = param_9;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x44) = param_6;
  iVar17 = (this->BatchedLines).ArrayNum;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  dVar16 = local_130;
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar18 * 0x50) = dVar6 - dVar21;
  *(double *)(pFVar4 + lVar18 * 0x50 + 8) = dVar9 - dVar22;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x10) = dVar3 - dVar25;
  dVar7 = dVar2 * local_140;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x18) = dVar8 - dVar21;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x20) = dVar10 - dVar22;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x28) = dVar5 - dVar25;
  uVar11 = *(undefined8 *)&param_5->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  pFVar4[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_7;
  dVar6 = dVar2 * local_190._s_0.Y;
  *(uint *)(pFVar4 + lVar18 * 0x50 + 0x4c) = param_9;
  dVar21 = dVar2 * local_190._s_0.X;
  dVar9 = dVar2 * local_190._s_0.Z;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x40) = param_8;
  dVar23 = dVar6 + local_178;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30) = uVar11;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30 + 8) = uVar12;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x44) = param_6;
  dVar22 = dVar2 * local_138;
  iVar17 = (this->BatchedLines).ArrayNum;
  dVar25 = dVar21 + local_130;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar18 * 0x50) = dVar25;
  *(double *)(pFVar4 + lVar18 * 0x50 + 8) = dVar23;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x10) = dVar9 + dVar3;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x18) = dVar7 + dVar8;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x20) = dVar22 + dVar10;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x28) = dVar2 * dVar24 + dVar5;
  uVar11 = *(undefined8 *)&param_5->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  pFVar4[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_7;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30) = uVar11;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30 + 8) = uVar12;
  *(uint *)(pFVar4 + lVar18 * 0x50 + 0x4c) = param_9;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x40) = param_8;
  dVar25 = local_178 - dVar6;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x44) = param_6;
  iVar17 = (this->BatchedLines).ArrayNum;
  if (iVar17 == (this->BatchedLines).ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar18 = (longlong)iVar17;
  (this->BatchedLines).ArrayNum = iVar17 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar18 * 0x50) = dVar16 - dVar21;
  *(double *)(pFVar4 + lVar18 * 0x50 + 8) = dVar25;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x10) = dVar3 - dVar9;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x18) = dVar8 - dVar21;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x20) = dVar10 - dVar6;
  *(double *)(pFVar4 + lVar18 * 0x50 + 0x28) = dVar5 - dVar9;
  uVar11 = *(undefined8 *)&param_5->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  pFVar4[lVar18 * 0x50 + 0x48] = (FScriptContainerElement)param_7;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x40) = param_8;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30) = uVar11;
  *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x30 + 8) = uVar12;
  *(uint *)(pFVar4 + lVar18 * 0x50 + 0x4c) = param_9;
  *(float *)(pFVar4 + lVar18 * 0x50 + 0x44) = param_6;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawCircle @ 1478c7d40

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
ULineBatchComponent::DrawCircle
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FLinearColor *param_4,float param_5,int param_6,uchar param_7,
          uint param_8)

{
  AddCircle(this,param_1,param_2,param_3,param_4,param_5,param_6,this->DefaultLifeTime,param_7,0.0,
            param_8);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawCone @ 1478c7dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
ULineBatchComponent::DrawCone
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,float param_4,float param_5,int param_6,FLinearColor *param_7,float param_8,uchar param_9
          ,float param_10,uint param_11)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  ULineBatchComponent *this_00;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar28;
  float fVar29;
  undefined1 auStackY_358 [32];
  ForAnyElementType local_328;
  int local_320 [2];
  float local_318;
  float local_314;
  float local_310;
  ULineBatchComponent *local_308;
  TVector<double>_u_0 local_300;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  double local_270;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  if (__real_40490e38 <= param_5) {
    param_5 = __real_40490e38;
  }
  if (param_5 <= __real_38d1b717) {
    param_5 = __real_38d1b717;
  }
  iVar20 = 4;
  if (4 < param_6) {
    iVar20 = param_6;
  }
  local_310 = param_3;
  local_308 = this;
  fVar26 = sinf(param_5 * __real_3f000000);
  if (__real_40490e38 <= param_4) {
    param_4 = __real_40490e38;
  }
  if (param_4 <= __real_38d1b717) {
    param_4 = __real_38d1b717;
  }
  local_318 = fVar26;
  fVar27 = sinf(param_4 * __real_3f000000);
  uVar23 = 0;
  local_328.Data = (FScriptContainerElement *)0x0;
  local_320[0] = 0;
  local_320[1] = 0;
  local_314 = fVar27;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar20,&local_328,local_320,local_320 + 1);
  fVar13 = __real_3f800000;
  if (0 < iVar20) {
    uVar24 = uVar23;
    fVar28 = fVar27;
    fVar29 = fVar26;
    do {
      __libm_sse2_sincosf_();
      FGenericPlatformMath::Atan2(extraout_XMM0_Da * fVar28,extraout_XMM0_Db * fVar29);
      __libm_sse2_sincosf_();
      uVar22 = (uint)uVar23;
      uVar25 = ~uVar22 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar22 < local_320[0]) {
        uVar18 = uVar25;
      }
      fVar28 = (fVar27 * fVar27 * fVar26 * fVar26) /
               (extraout_XMM0_Db_00 * extraout_XMM0_Db_00 * fVar27 * fVar27 +
               extraout_XMM0_Da_00 * extraout_XMM0_Da_00 * fVar26 * fVar26);
      fVar29 = SQRT(fVar13 - fVar28);
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(double *)(local_328.Data + uVar24) = (double)(fVar13 - (fVar28 + fVar28));
      uVar18 = 0;
      if ((int)uVar22 < local_320[0]) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar29 = fVar29 + fVar29;
      *(double *)(local_328.Data + uVar24 + 8) =
           (double)(extraout_XMM0_Db_00 * SQRT(fVar28) * fVar29);
      uVar18 = 0;
      if ((int)uVar22 < local_320[0]) {
        uVar18 = uVar25;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar23 = (ulonglong)(uVar22 + 1);
      *(double *)(local_328.Data + uVar24 + 0x10) =
           (double)(extraout_XMM0_Da_00 * SQRT(fVar28) * fVar29);
      uVar24 = uVar24 + 0x18;
      this = local_308;
      fVar28 = local_314;
      fVar29 = local_318;
      param_3 = local_310;
    } while ((int)(uVar22 + 1) < iVar20);
  }
  dVar12 = __real_3ff0000000000000;
  uVar23 = 0;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
  if (dVar8 == __real_3ff0000000000000) {
    local_300._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_300._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_300._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar8) {
    local_270 = __real_3ff0000000000000 / SQRT(dVar8);
    local_300._s_0.X = local_270 * dVar3;
    local_300._s_0.Y = local_270 * dVar4;
    local_300._s_0.Z = local_270 * dVar5;
  }
  else {
    local_300._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_300._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_300._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  uVar11 = local_300._s_0.Y;
  uVar10 = local_300._s_0.X;
  UE::Math::TVector<double>::FindBestAxisVectors
            ((TVector<double> *)&local_300._s_0,(TVector<double> *)&local_2a0._s_0,
             (TVector<double> *)&local_288._s_0);
  local_1e8.M[2][0] = 0.0;
  local_1e8.M[2][1] = 0.0;
  local_1e8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1e8.M[3][3] = _UNK_15061cbc8;
  local_1e8.M[0][2] = 0.0;
  local_1e8.M[0][3] = 0.0;
  local_268.M[1][0] = local_2a0._s_0.X;
  local_268.M[1][1] = local_2a0._s_0.Y;
  local_1e8.M[1][2] = 0.0;
  local_1e8.M[1][3] = 0.0;
  local_1e8.M[3][0] = 0.0;
  local_1e8.M[3][1] = 0.0;
  local_1e8.M[0][0] = (double)param_3;
  local_268.M[1][2] = local_2a0._s_0.Z;
  local_268.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_268.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_268.M[0][2] = local_300._s_0.Z;
  local_268.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_268.M[2][0] = local_288._s_0.X;
  local_268.M[2][1] = local_288._s_0.Y;
  local_1e8.M[0][1] = 0.0;
  local_1e8.M[1][0] = 0.0;
  local_1e8.M[2][3] = 0.0;
  local_268.M[0][3] = 0.0;
  local_268.M[1][3] = 0.0;
  local_268.M[2][2] = local_288._s_0.Z;
  local_268.M[2][3] = 0.0;
  local_268.M[3][3] = dVar12;
  local_268.M[0][0] = (double)uVar10;
  local_268.M[0][1] = (double)uVar11;
  local_1e8.M[1][1] = local_1e8.M[0][0];
  local_1e8.M[2][2] = local_1e8.M[0][0];
  VectorMatrixMultiply(&local_168,&local_1e8,&local_268);
  if (0 < iVar20) {
    pTVar1 = &this->BatchedLines;
    uVar24 = uVar23;
    do {
      uVar22 = (uint)uVar23;
      uVar18 = 0;
      if ((int)uVar22 < local_320[0]) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar15 = local_168.M[3][2];
      dVar14 = local_168.M[3][1];
      dVar16 = local_168.M[3][0];
      dVar8 = *(double *)(local_328.Data + uVar24);
      dVar9 = *(double *)(local_328.Data + uVar24 + 8);
      dVar3 = *(double *)(local_328.Data + uVar24 + 0x10);
      iVar19 = (this->BatchedLines).ArrayNum;
      dVar4 = local_168.M[1][0] * dVar9 + local_168.M[0][0] * dVar8 + local_168.M[2][0] * dVar3 +
              local_168.M[3][0] * dVar12;
      dVar5 = local_168.M[1][1] * dVar9 + local_168.M[0][1] * dVar8 + local_168.M[2][1] * dVar3 +
              local_168.M[3][1] * dVar12;
      dVar3 = local_168.M[1][2] * dVar9 + local_168.M[0][2] * dVar8 + local_168.M[2][2] * dVar3 +
              local_168.M[3][2] * dVar12;
      local_2d0 = dVar4;
      dStack_2c8 = dVar5;
      local_2c0 = dVar3;
      if (iVar19 == (this->BatchedLines).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
      }
      (this->BatchedLines).ArrayNum = iVar19 + 1;
      lVar21 = (longlong)iVar19;
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar6 + lVar21 * 0x50) = dVar16;
      *(double *)(pFVar6 + lVar21 * 0x50 + 8) = dVar14;
      *(double *)(pFVar6 + lVar21 * 0x50 + 0x10) = dVar15;
      *(double *)(pFVar6 + lVar21 * 0x50 + 0x18) = dVar4;
      *(double *)(pFVar6 + lVar21 * 0x50 + 0x20) = dVar5;
      *(double *)(pFVar6 + lVar21 * 0x50 + 0x28) = dVar3;
      *(float *)(pFVar6 + lVar21 * 0x50 + 0x40) = param_10;
      *(float *)(pFVar6 + lVar21 * 0x50 + 0x44) = param_8;
      *(uint *)(pFVar6 + lVar21 * 0x50 + 0x4c) = param_11;
      uVar10 = *(undefined8 *)&param_7->field0_0x0;
      uVar11 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8);
      pFVar6[lVar21 * 0x50 + 0x48] = (FScriptContainerElement)param_9;
      *(undefined8 *)(pFVar6 + lVar21 * 0x50 + 0x30) = uVar10;
      *(undefined8 *)(pFVar6 + lVar21 * 0x50 + 0x30 + 8) = uVar11;
      dVar8 = dVar4;
      dVar9 = dVar5;
      dVar16 = dVar3;
      if (uVar22 != 0) {
        iVar19 = (this->BatchedLines).ArrayNum;
        if (iVar19 == (this->BatchedLines).ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
        }
        (this->BatchedLines).ArrayNum = iVar19 + 1;
        lVar21 = (longlong)iVar19;
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        *(double *)(pFVar6 + lVar21 * 0x50) = local_2e8;
        *(double *)(pFVar6 + lVar21 * 0x50 + 8) = dStack_2e0;
        *(double *)(pFVar6 + lVar21 * 0x50 + 0x10) = local_2d8;
        *(double *)(pFVar6 + lVar21 * 0x50 + 0x18) = dVar4;
        *(double *)(pFVar6 + lVar21 * 0x50 + 0x20) = dVar5;
        *(double *)(pFVar6 + lVar21 * 0x50 + 0x28) = dVar3;
        uVar10 = *(undefined8 *)&param_7->field0_0x0;
        uVar11 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8);
        pFVar6[lVar21 * 0x50 + 0x48] = (FScriptContainerElement)param_9;
        *(float *)(pFVar6 + lVar21 * 0x50 + 0x40) = param_10;
        *(undefined8 *)(pFVar6 + lVar21 * 0x50 + 0x30) = uVar10;
        *(undefined8 *)(pFVar6 + lVar21 * 0x50 + 0x30 + 8) = uVar11;
        *(uint *)(pFVar6 + lVar21 * 0x50 + 0x4c) = param_11;
        *(float *)(pFVar6 + lVar21 * 0x50 + 0x44) = param_8;
        dVar8 = local_2b8;
        dVar9 = dStack_2b0;
        dVar16 = local_2a8;
      }
      local_2a8 = dVar16;
      dStack_2b0 = dVar9;
      local_2b8 = dVar8;
      uVar23 = (ulonglong)(uVar22 + 1);
      uVar24 = uVar24 + 0x18;
      local_2e8 = dVar4;
      dStack_2e0 = dVar5;
      local_2d8 = dVar3;
    } while ((int)(uVar22 + 1) < iVar20);
  }
  this_00 = local_308;
  iVar20 = (local_308->BatchedLines).ArrayNum;
  piVar2 = &(local_308->BatchedLines).ArrayMax;
  if (iVar20 == *piVar2) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&(local_308->BatchedLines).AllocatorInstance,piVar2);
  }
  lVar21 = (longlong)iVar20;
  (this_00->BatchedLines).ArrayNum = iVar20 + 1;
  pFVar6 = (this_00->BatchedLines).AllocatorInstance.Data;
  *(double *)(pFVar6 + lVar21 * 0x50) = local_2d0;
  *(double *)(pFVar6 + lVar21 * 0x50 + 8) = dStack_2c8;
  *(uint *)(pFVar6 + lVar21 * 0x50 + 0x4c) = param_11;
  *(double *)(pFVar6 + lVar21 * 0x50 + 0x10) = local_2c0;
  *(double *)(pFVar6 + lVar21 * 0x50 + 0x18) = local_2b8;
  *(double *)(pFVar6 + lVar21 * 0x50 + 0x18 + 8) = dStack_2b0;
  uVar10 = *(undefined8 *)&param_7->field0_0x0;
  uVar11 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8);
  pFVar6[lVar21 * 0x50 + 0x48] = (FScriptContainerElement)param_9;
  *(float *)(pFVar6 + lVar21 * 0x50 + 0x40) = param_10;
  *(float *)(pFVar6 + lVar21 * 0x50 + 0x44) = param_8;
  *(double *)(pFVar6 + lVar21 * 0x50 + 0x28) = local_2a8;
  *(undefined8 *)(pFVar6 + lVar21 * 0x50 + 0x30) = uVar10;
  *(undefined8 *)(pFVar6 + lVar21 * 0x50 + 0x30 + 8) = uVar11;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
  if (local_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data);
  }
  return;
}

// DrawCylinder @ 1478c86f0

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
ULineBatchComponent::DrawCylinder
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,int param_4,FLinearColor *param_5,float param_6,uchar param_7,float param_8,uint param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar14;
  int iVar15;
  double dVar16;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  TVector<double>_u_0 local_168;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  TVector<double>_u_0 local_118;
  TVector<double> local_100 [8];
  
  iVar15 = 4;
  if (4 < param_4) {
    iVar15 = param_4;
  }
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  local_168._s_0.Z = (param_2->field0_0x0)._s_0.Z - dVar3;
  dVar19 = (param_2->field0_0x0)._s_0.X;
  local_168._s_0.X = dVar19 - dVar1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  local_168._s_0.Y = dVar4 - dVar2;
  dVar17 = local_168._s_0.Y * local_168._s_0.Y + local_168._s_0.X * local_168._s_0.X +
           local_168._s_0.Z * local_168._s_0.Z;
  if (dVar17 != __real_3ff0000000000000) {
    if (dVar17 < __real_3e45798ee0000000) {
      local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_168._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_168._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    else {
      local_128 = __real_3ff0000000000000 / SQRT(dVar17);
      local_168._s_0.X = local_168._s_0.X * local_128;
      local_168._s_0.Y = local_168._s_0.Y * local_128;
      local_168._s_0.Z = local_128 * local_168._s_0.Z;
    }
  }
  if (((local_168._s_0.X == 0.0) && (local_168._s_0.Y == 0.0)) && (local_168._s_0.Z == 0.0)) {
    local_168._s_0.Z = __real_3ff0000000000000;
    local_168._s_0.X = 0.0;
    local_168._s_0.Y = 0.0;
  }
  uVar10 = local_168._s_0.Z;
  uVar9 = local_168._s_0.Y;
  uVar8 = local_168._s_0.X;
  UE::Math::TVector<double>::FindBestAxisVectors
            ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_118._s_0,local_100);
  pTVar12 = UE::Math::TVector<double>::RotateAngleAxis
                      ((TVector<double> *)&local_118._s_0,local_100,0.0,
                       (TVector<double> *)&local_168._s_0);
  local_120 = (double)param_3;
  dVar16 = local_120 * (pTVar12->field0_0x0)._s_0.X;
  dVar17 = local_120 * (pTVar12->field0_0x0)._s_0.Y;
  dVar18 = local_120 * (pTVar12->field0_0x0)._s_0.Z;
  local_140 = dVar1 + dVar16;
  local_168._s_0.X = dVar19 + dVar16;
  local_138 = dVar2 + dVar17;
  local_168._s_0.Z = (param_2->field0_0x0)._s_0.Z + dVar18;
  local_100[0].field0_0x0._16_8_ = dVar3 + dVar18;
  local_168._s_0.Y = dVar4 + dVar17;
  if (iVar15 != 0) {
    pTVar14 = &this->BatchedLines;
    uVar20 = SUB84(local_118._s_0.Z,0);
    uVar21 = (undefined4)((ulonglong)local_118._16_8_ >> 0x20);
    uVar22 = SUB84(local_118._s_0.Y,0);
    uVar23 = (undefined4)((ulonglong)local_118._8_8_ >> 0x20);
    local_148 = local_118._s_0.X;
    local_130 = local_118._s_0.Z;
    local_150 = local_118._s_0.Y;
    do {
      iVar15 = iVar15 + -1;
      __libm_sse2_sincos_();
      dVar1 = __real_3ff0000000000000 - extraout_XMM0_Qb;
      dVar2 = (double)uVar10 * (double)uVar9 * dVar1;
      dVar17 = (double)uVar10 * (double)uVar8 * dVar1;
      dVar19 = (double)uVar9 * (double)uVar8 * dVar1;
      dVar3 = (((double)uVar8 * (double)uVar8 * dVar1 + extraout_XMM0_Qb) * local_148 +
               (dVar19 - (double)uVar10 * extraout_XMM0_Qa) * (double)CONCAT44(uVar23,uVar22) +
              (dVar17 + (double)uVar9 * extraout_XMM0_Qa) * (double)CONCAT44(uVar21,uVar20)) *
              local_120;
      dVar4 = dVar3 + (param_1->field0_0x0)._s_0.X;
      dVar3 = dVar3 + (param_2->field0_0x0)._s_0.X;
      dVar19 = (((double)uVar9 * (double)uVar9 * dVar1 + extraout_XMM0_Qb) * local_150 +
                (dVar19 + (double)uVar10 * extraout_XMM0_Qa) * local_148 +
               (dVar2 - (double)uVar8 * extraout_XMM0_Qa) * local_130) * local_120;
      local_128 = dVar19 + (param_1->field0_0x0)._s_0.Y;
      dVar19 = dVar19 + (param_2->field0_0x0)._s_0.Y;
      dVar2 = ((dVar2 + (double)uVar8 * extraout_XMM0_Qa) * local_150 +
               (dVar17 - (double)uVar9 * extraout_XMM0_Qa) * local_148 +
              ((double)uVar10 * (double)uVar10 * dVar1 + extraout_XMM0_Qb) * local_130) * local_120;
      dVar1 = dVar2 + (param_1->field0_0x0)._s_0.Z;
      iVar11 = (this->BatchedLines).ArrayNum;
      dVar2 = dVar2 + (param_2->field0_0x0)._s_0.Z;
      if (iVar11 == (this->BatchedLines).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar14->AllocatorInstance,&(this->BatchedLines).ArrayMax);
      }
      dVar17 = local_128;
      (this->BatchedLines).ArrayNum = iVar11 + 1;
      lVar13 = (longlong)iVar11;
      pFVar5 = (pTVar14->AllocatorInstance).Data;
      *(double *)(pFVar5 + lVar13 * 0x50) = dVar4;
      *(double *)(pFVar5 + lVar13 * 0x50 + 8) = local_128;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x10) = dVar1;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x18) = dVar3;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x20) = dVar19;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x28) = dVar2;
      uVar6 = *(undefined8 *)&param_5->field0_0x0;
      uVar7 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
      pFVar5[lVar13 * 0x50 + 0x48] = (FScriptContainerElement)param_7;
      *(float *)(pFVar5 + lVar13 * 0x50 + 0x40) = param_8;
      *(undefined8 *)(pFVar5 + lVar13 * 0x50 + 0x30) = uVar6;
      *(undefined8 *)(pFVar5 + lVar13 * 0x50 + 0x30 + 8) = uVar7;
      *(uint *)(pFVar5 + lVar13 * 0x50 + 0x4c) = param_9;
      *(float *)(pFVar5 + lVar13 * 0x50 + 0x44) = param_6;
      iVar11 = (this->BatchedLines).ArrayNum;
      if (iVar11 == (this->BatchedLines).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar14->AllocatorInstance,&(this->BatchedLines).ArrayMax);
      }
      (this->BatchedLines).ArrayNum = iVar11 + 1;
      lVar13 = (longlong)iVar11;
      pFVar5 = (pTVar14->AllocatorInstance).Data;
      *(double *)(pFVar5 + lVar13 * 0x50) = local_140;
      *(double *)(pFVar5 + lVar13 * 0x50 + 8) = local_138;
      *(undefined8 *)(pFVar5 + lVar13 * 0x50 + 0x10) = local_100[0].field0_0x0._s_0.Z;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x18) = dVar4;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x20) = dVar17;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x28) = dVar1;
      uVar6 = *(undefined8 *)&param_5->field0_0x0;
      uVar7 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
      pFVar5[lVar13 * 0x50 + 0x48] = (FScriptContainerElement)param_7;
      *(float *)(pFVar5 + lVar13 * 0x50 + 0x40) = param_8;
      *(undefined8 *)(pFVar5 + lVar13 * 0x50 + 0x30) = uVar6;
      *(undefined8 *)(pFVar5 + lVar13 * 0x50 + 0x30 + 8) = uVar7;
      *(uint *)(pFVar5 + lVar13 * 0x50 + 0x4c) = param_9;
      *(float *)(pFVar5 + lVar13 * 0x50 + 0x44) = param_6;
      iVar11 = (this->BatchedLines).ArrayNum;
      if (iVar11 == (this->BatchedLines).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar14->AllocatorInstance,&(this->BatchedLines).ArrayMax);
      }
      lVar13 = (longlong)iVar11;
      (this->BatchedLines).ArrayNum = iVar11 + 1;
      pFVar5 = (pTVar14->AllocatorInstance).Data;
      *(double *)(pFVar5 + lVar13 * 0x50) = local_168._s_0.X;
      *(double *)(pFVar5 + lVar13 * 0x50 + 8) = local_168._s_0.Y;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x10) = local_168._s_0.Z;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x18) = dVar3;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x20) = dVar19;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x28) = dVar2;
      uVar22 = SUB84(local_150,0);
      uVar23 = (undefined4)((ulonglong)local_150 >> 0x20);
      uVar20 = SUB84(local_130,0);
      uVar21 = (undefined4)((ulonglong)local_130 >> 0x20);
      *(float *)(pFVar5 + lVar13 * 0x50 + 0x40) = param_8;
      local_138 = dVar17;
      pFVar5[lVar13 * 0x50 + 0x48] = (FScriptContainerElement)param_7;
      *(uint *)(pFVar5 + lVar13 * 0x50 + 0x4c) = param_9;
      uVar6 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
      *(undefined8 *)(pFVar5 + lVar13 * 0x50 + 0x30) = *(undefined8 *)&param_5->field0_0x0;
      *(undefined8 *)(pFVar5 + lVar13 * 0x50 + 0x30 + 8) = uVar6;
      *(float *)(pFVar5 + lVar13 * 0x50 + 0x44) = param_6;
      local_168._s_0.X = dVar3;
      local_168._s_0.Y = dVar19;
      local_168._s_0.Z = dVar2;
      local_140 = dVar4;
      local_100[0].field0_0x0._16_8_ = dVar1;
    } while (iVar15 != 0);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawDirectionalArrow @ 1478c9030

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
ULineBatchComponent::DrawDirectionalArrow
          (ULineBatchComponent *this,TMatrix<double> *param_1,FLinearColor *param_2,float param_3,
          float param_4,uchar param_5,uint param_6)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
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
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  
  pTVar1 = &this->BatchedLines;
  dVar13 = param_1->M[1][0];
  dVar14 = param_1->M[1][1];
  dVar24 = param_1->M[2][0];
  dVar25 = param_1->M[2][1];
  dVar5 = (double)param_3;
  dVar6 = param_1->M[3][0];
  dVar7 = param_1->M[3][1];
  dVar15 = param_1->M[0][0];
  dVar16 = param_1->M[0][1];
  dVar17 = param_1->M[0][2];
  dVar18 = param_1->M[1][2];
  dVar26 = param_1->M[2][2];
  dVar27 = param_1->M[3][2];
  dVar10 = dVar13 * 0.0 + dVar5 * dVar15 + ___xmm_3ff00000000000000000000000000000 * dVar24 +
           _UNK_15061cbc8 * dVar6;
  dVar11 = dVar14 * 0.0 + dVar5 * dVar16 + ___xmm_3ff00000000000000000000000000000 * dVar25 +
           _UNK_15061cbc8 * dVar7;
  dVar12 = dVar18 * 0.0 + dVar5 * dVar17 + ___xmm_3ff00000000000000000000000000000 * dVar26 +
           _UNK_15061cbc8 * dVar27;
  dVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  dVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  dVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar24;
  dVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar25;
  dVar6 = __real_3ff0000000000000 * dVar6;
  dVar7 = __real_3ff0000000000000 * dVar7;
  iVar22 = (this->BatchedLines).ArrayNum;
  dVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar26;
  dVar27 = __real_3ff0000000000000 * dVar27;
  if (iVar22 == (this->BatchedLines).ArrayMax) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar22 + 1;
  fVar2 = this->DefaultLifeTime;
  lVar23 = (longlong)iVar22;
  dVar9 = (double)param_4;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar23 * 0x50) = dVar10;
  *(double *)(pFVar3 + lVar23 * 0x50 + 8) = dVar11;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x10) = dVar12;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x18) = dVar8 * dVar13 + dVar5 * dVar15 + dVar24 + dVar6;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x20) = dVar8 * dVar14 + dVar5 * dVar16 + dVar25 + dVar7;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x28) = dVar8 * dVar18 + dVar5 * dVar17 + dVar26 + dVar27;
  uVar20 = *(undefined8 *)&param_2->field0_0x0;
  uVar21 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined4 *)(pFVar3 + lVar23 * 0x50 + 0x40) = 0;
  dVar27 = __real_3ff0000000000000;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30) = uVar20;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30 + 8) = uVar21;
  pFVar3[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar3 + lVar23 * 0x50 + 0x44) = fVar2;
  *(uint *)(pFVar3 + lVar23 * 0x50 + 0x4c) = param_6;
  dVar8 = param_1->M[0][0];
  dVar6 = param_1->M[0][1];
  iVar22 = (this->BatchedLines).ArrayNum;
  dVar7 = param_1->M[2][0];
  dVar13 = param_1->M[2][1];
  dVar14 = param_1->M[1][2];
  dVar5 = (double)(param_3 - param_4);
  dVar24 = param_1->M[1][0];
  dVar25 = param_1->M[1][1];
  dVar15 = param_1->M[3][0];
  dVar16 = param_1->M[3][1];
  dVar17 = param_1->M[2][2];
  dVar18 = param_1->M[0][2];
  dVar26 = param_1->M[3][2];
  if (iVar22 == (this->BatchedLines).ArrayMax) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar22 + 1;
  fVar2 = this->DefaultLifeTime;
  lVar23 = (longlong)iVar22;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar23 * 0x50) = dVar10;
  *(double *)(pFVar3 + lVar23 * 0x50 + 8) = dVar11;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x10) = dVar12;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x18) =
       dVar8 * dVar5 + dVar24 * dVar9 + dVar7 * dVar9 + dVar15 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x20) =
       dVar6 * dVar5 + dVar25 * dVar9 + dVar13 * dVar9 + dVar16 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x28) =
       dVar14 * dVar9 + dVar18 * dVar5 + dVar17 * dVar9 + dVar26 * dVar27;
  uVar20 = *(undefined8 *)&param_2->field0_0x0;
  uVar21 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined4 *)(pFVar3 + lVar23 * 0x50 + 0x40) = 0;
  fVar28 = (float)((uint)param_4 ^ __xmm_80000000800000008000000080000000);
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30) = uVar20;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30 + 8) = uVar21;
  pFVar3[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(float *)(pFVar3 + lVar23 * 0x50 + 0x44) = fVar2;
  *(uint *)(pFVar3 + lVar23 * 0x50 + 0x4c) = param_6;
  dVar6 = param_1->M[1][0];
  dVar7 = param_1->M[1][1];
  iVar22 = (this->BatchedLines).ArrayNum;
  dVar13 = param_1->M[0][0];
  dVar14 = param_1->M[0][1];
  dVar24 = param_1->M[2][0];
  dVar25 = param_1->M[2][1];
  dVar15 = param_1->M[1][2];
  dVar16 = param_1->M[3][0];
  dVar17 = param_1->M[3][1];
  dVar8 = (double)fVar28;
  dVar18 = param_1->M[2][2];
  dVar26 = param_1->M[0][2];
  dVar19 = param_1->M[3][2];
  if (iVar22 == (this->BatchedLines).ArrayMax) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar22 + 1;
  fVar2 = this->DefaultLifeTime;
  lVar23 = (longlong)iVar22;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar23 * 0x50) = dVar10;
  *(double *)(pFVar3 + lVar23 * 0x50 + 8) = dVar11;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x10) = dVar12;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x18) =
       dVar6 * dVar9 + dVar13 * dVar5 + dVar24 * dVar8 + dVar16 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x20) =
       dVar7 * dVar9 + dVar14 * dVar5 + dVar25 * dVar8 + dVar17 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x28) =
       dVar15 * dVar9 + dVar26 * dVar5 + dVar18 * dVar8 + dVar19 * dVar27;
  uVar20 = *(undefined8 *)&param_2->field0_0x0;
  uVar21 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined4 *)(pFVar3 + lVar23 * 0x50 + 0x40) = 0;
  *(float *)(pFVar3 + lVar23 * 0x50 + 0x44) = fVar2;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30) = uVar20;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30 + 8) = uVar21;
  pFVar3[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(uint *)(pFVar3 + lVar23 * 0x50 + 0x4c) = param_6;
  dVar6 = param_1->M[1][0];
  dVar7 = param_1->M[1][1];
  iVar22 = (this->BatchedLines).ArrayNum;
  dVar13 = param_1->M[0][0];
  dVar14 = param_1->M[0][1];
  dVar24 = param_1->M[2][0];
  dVar25 = param_1->M[2][1];
  dVar15 = param_1->M[1][2];
  dVar16 = param_1->M[3][0];
  dVar17 = param_1->M[3][1];
  dVar18 = param_1->M[2][2];
  dVar26 = param_1->M[0][2];
  dVar19 = param_1->M[3][2];
  if (iVar22 == (this->BatchedLines).ArrayMax) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar22 + 1;
  fVar2 = this->DefaultLifeTime;
  lVar23 = (longlong)iVar22;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar23 * 0x50) = dVar10;
  *(double *)(pFVar3 + lVar23 * 0x50 + 8) = dVar11;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x10) = dVar12;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x18) =
       dVar6 * dVar8 + dVar13 * dVar5 + dVar24 * dVar9 + dVar16 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x20) =
       dVar7 * dVar8 + dVar14 * dVar5 + dVar25 * dVar9 + dVar17 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x28) =
       dVar15 * dVar8 + dVar26 * dVar5 + dVar18 * dVar9 + dVar19 * dVar27;
  uVar20 = *(undefined8 *)&param_2->field0_0x0;
  uVar21 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined4 *)(pFVar3 + lVar23 * 0x50 + 0x40) = 0;
  *(float *)(pFVar3 + lVar23 * 0x50 + 0x44) = fVar2;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30) = uVar20;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30 + 8) = uVar21;
  pFVar3[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(uint *)(pFVar3 + lVar23 * 0x50 + 0x4c) = param_6;
  dVar6 = param_1->M[1][0];
  dVar7 = param_1->M[1][1];
  iVar22 = (this->BatchedLines).ArrayNum;
  dVar13 = param_1->M[0][0];
  dVar14 = param_1->M[0][1];
  dVar24 = param_1->M[2][0];
  dVar25 = param_1->M[2][1];
  dVar15 = param_1->M[1][2];
  dVar16 = param_1->M[3][0];
  dVar17 = param_1->M[3][1];
  dVar18 = param_1->M[2][2];
  dVar26 = param_1->M[0][2];
  dVar9 = param_1->M[3][2];
  if (iVar22 == (this->BatchedLines).ArrayMax) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  (this->BatchedLines).ArrayNum = iVar22 + 1;
  fVar2 = this->DefaultLifeTime;
  lVar23 = (longlong)iVar22;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  auVar4._8_4_ = SUB84(dVar11,0);
  auVar4._0_8_ = dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(pFVar3 + lVar23 * 0x50) = auVar4;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x10) = dVar12;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x18) =
       dVar6 * dVar8 + dVar13 * dVar5 + dVar24 * dVar8 + dVar16 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x20) =
       dVar7 * dVar8 + dVar14 * dVar5 + dVar25 * dVar8 + dVar17 * dVar27;
  *(double *)(pFVar3 + lVar23 * 0x50 + 0x28) =
       dVar15 * dVar8 + dVar26 * dVar5 + dVar18 * dVar8 + dVar9 * dVar27;
  uVar20 = *(undefined8 *)&param_2->field0_0x0;
  uVar21 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined4 *)(pFVar3 + lVar23 * 0x50 + 0x40) = 0;
  *(float *)(pFVar3 + lVar23 * 0x50 + 0x44) = fVar2;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30) = uVar20;
  *(undefined8 *)(pFVar3 + lVar23 * 0x50 + 0x30 + 8) = uVar21;
  pFVar3[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)param_5;
  *(uint *)(pFVar3 + lVar23 * 0x50 + 0x4c) = param_6;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawDirectionalArrow @ 1478c9730

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
ULineBatchComponent::DrawDirectionalArrow
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,FLinearColor *param_4,float param_5,uchar param_6,float param_7,uint param_8)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  int iVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  double local_188;
  TVector<double>_u_0 local_180;
  double local_168;
  TVector<double>_u_0 local_160;
  double local_138;
  double dStack_130;
  double local_118;
  double dStack_110;
  double local_f8;
  double dStack_f0;
  double local_d8;
  double dStack_d0;
  
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar7 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dStack_1a0 = dVar5;
  local_1a8 = dVar7;
  dVar25 = dVar5 * dVar5 + dVar7 * dVar7 + dVar8 * dVar8;
  if (__real_3e45798ee0000000 < dVar25) {
    local_188 = __real_3ff0000000000000 / SQRT(dVar25);
    dVar7 = dVar7 * local_188;
    dVar5 = dVar5 * local_188;
    dVar8 = dVar8 * local_188;
    dStack_1a0 = dVar5;
    local_1a8 = dVar7;
  }
  local_160._s_0.Z = __real_3ff0000000000000;
  local_180._8_4_ = SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000;
  local_180._12_4_ = (uint)((ulonglong)dVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_
  ;
  local_160._s_0.X = 0.0;
  local_160._s_0.Y = 0.0;
  local_180._s_0.Z = 0.0;
  dVar25 = __real_3ff0000000000000 -
           ((double)CONCAT44(local_180._12_4_,local_180._8_4_) *
            (double)CONCAT44(local_180._12_4_,local_180._8_4_) + dVar5 * dVar5);
  local_198 = dVar8;
  local_180._s_0.X = dVar5;
  if (__real_3f847ae140000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    UE::Math::TVector<double>::FindBestAxisVectors
              ((TVector<double> *)&local_1a8,(TVector<double> *)&local_160._s_0,
               (TVector<double> *)&local_180._s_0);
  }
  uVar21 = local_160._s_0.Y;
  uVar19 = local_180._12_4_;
  uVar18 = local_180._8_4_;
  uVar17 = local_180._s_0.X;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pTVar1 = &this->BatchedLines;
  iVar23 = (this->BatchedLines).ArrayNum;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_138 = dVar8;
  local_118 = local_180._s_0.Z;
  local_f8 = local_160._s_0.Z;
  if (iVar23 == (this->BatchedLines).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  dVar22 = local_f8;
  dVar6 = local_118;
  dVar11 = local_138;
  uVar20 = local_160._s_0.X;
  dVar10 = _UNK_15061cbc8;
  dVar9 = ___xmm_3ff00000000000000000000000000000;
  (this->BatchedLines).ArrayNum = iVar23 + 1;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  lVar24 = (longlong)iVar23;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar2 + lVar24 * 0x50) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar24 * 0x50 + 8) = dVar8;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x18 + 8) = dVar8;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  uVar12 = *(undefined8 *)&param_4->field0_0x0;
  uVar13 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar2[lVar24 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x28) = dVar8;
  *(undefined8 *)(pFVar2 + lVar24 * 0x50 + 0x30) = uVar12;
  *(undefined8 *)(pFVar2 + lVar24 * 0x50 + 0x30 + 8) = uVar13;
  *(uint *)(pFVar2 + lVar24 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar2 + lVar24 * 0x50 + 0x40) = param_7;
  local_188 = (double)(float)((uint)SQRT(param_3) ^ __xmm_80000000800000008000000080000000);
  dVar25 = (double)SQRT(param_3);
  dVar4 = dVar5 * local_188;
  *(float *)(pFVar2 + lVar24 * 0x50 + 0x44) = param_5;
  auVar3._8_4_ = SUB84(dStack_110 * dVar25,0);
  auVar3._0_8_ = local_118 * dVar25;
  auVar3._12_4_ = (int)((ulonglong)(dStack_110 * dVar25) >> 0x20);
  dStack_1a0 = auVar3._8_8_;
  dVar27 = dStack_1a0 + dStack_130 * local_188 + dStack_f0 * dVar9 + dStack_d0 * dVar10;
  local_168 = (double)uVar17 * dVar25 + dVar7 * local_188 + local_160._s_0.X * dVar9 +
              (double)uVar15 * dVar10 + (param_2->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  unique0x10000479 = SUB84(dVar27,0);
  local_1a8 = local_118 * dVar25 + local_138 * local_188 + local_f8 * dVar9 + local_d8 * dVar10 +
              (param_2->field0_0x0)._s_0.Z;
  unique0x1000047d = (int)((ulonglong)dVar27 >> 0x20);
  iVar23 = (this->BatchedLines).ArrayNum;
  dVar27 = dVar9;
  dVar28 = dVar10;
  if (iVar23 == (this->BatchedLines).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
    dVar27 = ___xmm_3ff00000000000000000000000000000;
    dVar28 = _UNK_15061cbc8;
  }
  lVar24 = (longlong)iVar23;
  (this->BatchedLines).ArrayNum = iVar23 + 1;
  dVar26 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar2 + lVar24 * 0x50) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar24 * 0x50 + 8) = dVar26;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x18) = local_168;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x20) =
       (double)CONCAT44(uVar19,uVar18) * dVar25 + dVar4 + (double)uVar21 * dVar9 +
       (double)uVar16 * dVar10 + dVar8;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x28) = local_1a8;
  uVar12 = *(undefined8 *)&param_4->field0_0x0;
  uVar13 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar2[lVar24 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar2 + lVar24 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar2 + lVar24 * 0x50 + 0x30) = uVar12;
  *(undefined8 *)(pFVar2 + lVar24 * 0x50 + 0x30 + 8) = uVar13;
  *(uint *)(pFVar2 + lVar24 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar2 + lVar24 * 0x50 + 0x44) = param_5;
  iVar23 = (this->BatchedLines).ArrayNum;
  dVar7 = dVar7 * local_188;
  dVar5 = dVar5 * local_188;
  dVar9 = (double)uVar17 * local_188;
  dVar10 = (double)CONCAT44(uVar19,uVar18) * local_188;
  dVar6 = dVar6 * local_188;
  dVar11 = dVar11 * local_188;
  dVar26 = local_d8 * dVar28;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  dVar25 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  if (iVar23 == (this->BatchedLines).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
  }
  lVar24 = (longlong)iVar23;
  (this->BatchedLines).ArrayNum = iVar23 + 1;
  dVar14 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar2 + lVar24 * 0x50) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar24 * 0x50 + 8) = dVar14;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x18) =
       dVar9 + dVar7 + (double)uVar20 * dVar27 + (double)uVar15 * dVar28 + dVar25;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x20) =
       dVar10 + dVar5 + (double)uVar21 * dVar27 + (double)uVar16 * dVar28 + dVar8;
  *(double *)(pFVar2 + lVar24 * 0x50 + 0x28) = dVar6 + dVar11 + dVar22 * dVar27 + dVar26 + dVar4;
  uVar15 = *(undefined8 *)&param_4->field0_0x0;
  uVar16 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar2[lVar24 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
  *(float *)(pFVar2 + lVar24 * 0x50 + 0x40) = param_7;
  *(undefined8 *)(pFVar2 + lVar24 * 0x50 + 0x30) = uVar15;
  *(undefined8 *)(pFVar2 + lVar24 * 0x50 + 0x30 + 8) = uVar16;
  *(uint *)(pFVar2 + lVar24 * 0x50 + 0x4c) = param_8;
  *(float *)(pFVar2 + lVar24 * 0x50 + 0x44) = param_5;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawLine @ 1478c9c90

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
ULineBatchComponent::DrawLine
          (ULineBatchComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,uchar param_4,float param_5,float param_6,uint param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = (this->BatchedLines).ArrayNum;
  piVar1 = &(this->BatchedLines).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&(this->BatchedLines).AllocatorInstance,piVar1);
  }
  lVar7 = (longlong)iVar6;
  (this->BatchedLines).ArrayNum = iVar6 + 1;
  pFVar2 = (this->BatchedLines).AllocatorInstance.Data;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  *(double *)(pFVar2 + lVar7 * 0x50) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar7 * 0x50 + 8) = dVar3;
  *(double *)(pFVar2 + lVar7 * 0x50 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(pFVar2 + lVar7 * 0x50 + 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar7 * 0x50 + 0x18 + 8) = dVar3;
  *(double *)(pFVar2 + lVar7 * 0x50 + 0x28) = (param_2->field0_0x0)._s_0.Z;
  uVar4 = *(undefined8 *)&param_3->field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar2[lVar7 * 0x50 + 0x48] = (FScriptContainerElement)param_4;
  *(undefined8 *)(pFVar2 + lVar7 * 0x50 + 0x30) = uVar4;
  *(undefined8 *)(pFVar2 + lVar7 * 0x50 + 0x30 + 8) = uVar5;
  *(uint *)(pFVar2 + lVar7 * 0x50 + 0x4c) = param_7;
  *(float *)(pFVar2 + lVar7 * 0x50 + 0x44) = param_6;
  *(float *)(pFVar2 + lVar7 * 0x50 + 0x40) = param_5;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawLines @ 1478c9d80

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
ULineBatchComponent::DrawLines(ULineBatchComponent *this,TArrayView<FBatchedLine,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) goto LAB_1478c9e23;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,iVar1,&(this->BatchedLines).AllocatorInstance,
                     &(this->BatchedLines).ArrayNum,&(this->BatchedLines).ArrayMax);
  memcpy((this->BatchedLines).AllocatorInstance.Data + (longlong)iVar4 * 0x50,param_1->DataPtr,
         (longlong)iVar1 * 0x50);
LAB_1478c9e23:
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawMesh @ 1478c9e50

/* WARNING: Removing unreachable block (ram,0x0001478c9fb8) */
/* WARNING: Removing unreachable block (ram,0x0001478c9fc6) */
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
ULineBatchComponent::DrawMesh
          (ULineBatchComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FColor *param_3,uchar param_4,
          float param_5,uint param_6)

{
  int *piVar1;
  TArray<FBatchedMesh,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  FScriptContainerElement local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined4 local_2c;
  
  pTVar2 = &this->BatchedMeshes;
  uStack_3c = 0;
  uStack_38 = 0;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_2f = 0;
  local_2d = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_34 = 0;
  local_30 = (FScriptContainerElement)0x0;
  local_2c = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar4 + (longlong)(this->BatchedMeshes).ArrayMax * 0x30)) &&
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
  uVar7 = (this->BatchedMeshes).ArrayNum;
  piVar1 = &(this->BatchedMeshes).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  (this->BatchedMeshes).ArrayNum = uVar7 + 1;
  lVar10 = (longlong)(int)uVar7 * 0x30;
  *(undefined8 *)(pFVar4 + lVar10) = 0;
  *(undefined8 *)(pFVar4 + lVar10) = local_58;
  *(undefined4 *)(pFVar4 + lVar10 + 8) = (undefined4)local_50;
  *(undefined4 *)(pFVar4 + lVar10 + 0xc) = local_50._4_4_;
  *(undefined8 *)(pFVar4 + lVar10 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + lVar10 + 0x10) = local_48;
  *(undefined4 *)(pFVar4 + lVar10 + 0x18) = local_40;
  *(undefined4 *)(pFVar4 + lVar10 + 0x1c) = uStack_3c;
  *(undefined4 *)(pFVar4 + lVar10 + 0x20) = uStack_38;
  *(undefined4 *)(pFVar4 + lVar10 + 0x24) = local_34;
  pFVar4[lVar10 + 0x28] = local_30;
  *(undefined4 *)(pFVar4 + lVar10 + 0x2c) = local_2c;
  uStack_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  uVar8 = 0;
  if ((int)uVar7 < (this->BatchedMeshes).ArrayNum) {
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
  pTVar9 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           ((pTVar2->AllocatorInstance).Data + lVar10);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar9 + 1),param_2);
  if (pTVar9 != param_1) {
    iVar3 = param_1->ArrayNum;
    piVar1 = &pTVar9->ArrayMax;
    pFVar4 = (param_1->AllocatorInstance).Data;
    pTVar9->ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar1,(ForAnyElementType *)pTVar9,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x18);
      }
    }
  }
  ((FColor_u_0 *)(pTVar9 + 2))->_s_0 = (FColor_u_0_s_0)param_3->field0_0x0;
  *(uchar *)&pTVar9[2].ArrayNum = param_4;
  pTVar9[2].ArrayMax = param_6;
  *(float *)((longlong)&pTVar9[2].AllocatorInstance.Data + 4) = param_5;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawPoint @ 1478ca0d0

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
ULineBatchComponent::DrawPoint
          (ULineBatchComponent *this,TVector<double> *param_1,FLinearColor *param_2,float param_3,
          uchar param_4,float param_5,uint param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = (this->BatchedPoints).ArrayNum;
  piVar1 = &(this->BatchedPoints).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->BatchedPoints).AllocatorInstance,piVar1);
  }
  (this->BatchedPoints).ArrayNum = iVar6 + 1;
  pFVar2 = (this->BatchedPoints).AllocatorInstance.Data;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  lVar7 = (longlong)iVar6 * 0x38;
  *(double *)(pFVar2 + lVar7) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar7 + 8) = dVar3;
  *(double *)(pFVar2 + lVar7 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  uVar4 = *(undefined8 *)&param_2->field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  pFVar2[lVar7 + 0x30] = (FScriptContainerElement)param_4;
  *(undefined8 *)(pFVar2 + lVar7 + 0x18) = uVar4;
  *(undefined8 *)(pFVar2 + lVar7 + 0x18 + 8) = uVar5;
  *(uint *)(pFVar2 + lVar7 + 0x34) = param_6;
  *(float *)(pFVar2 + lVar7 + 0x28) = param_3;
  *(float *)(pFVar2 + lVar7 + 0x2c) = param_5;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// DrawSolidBox @ 1478ca1a0

/* WARNING: Removing unreachable block (ram,0x0001478ca33a) */
/* WARNING: Removing unreachable block (ram,0x0001478ca349) */
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
ULineBatchComponent::DrawSolidBox
          (ULineBatchComponent *this,TBox<double> *param_1,TTransform<double> *param_2,
          FColor *param_3,uchar param_4,float param_5,uint param_6)

{
  int *piVar1;
  TArray<FBatchedMesh,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined4 uVar81;
  undefined4 uVar82;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  FScriptContainerElement local_2c0;
  undefined2 local_2bf;
  undefined1 local_2bd;
  undefined4 local_2bc;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  undefined1 local_268 [16];
  double local_248;
  double dStack_240;
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined1 local_1d0 [16];
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined1 local_1a0 [16];
  double local_190;
  undefined1 local_188 [16];
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  TVector<double> local_c8;
  TVector<double> local_b0;
  TVector<double> local_98 [4];
  
  uVar22 = 0;
  pTVar2 = &this->BatchedMeshes;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  local_2bf = 0;
  local_2bd = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c4 = 0;
  local_2c0 = (FScriptContainerElement)0x0;
  local_2bc = 0;
  if (((pFVar3 <= (FScriptContainerElement *)&local_2e8) &&
      ((FScriptContainerElement *)&local_2e8 <
       pFVar3 + (longlong)(this->BatchedMeshes).ArrayMax * 0x30)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = (this->BatchedMeshes).ArrayNum;
  piVar1 = &(this->BatchedMeshes).ArrayMax;
  if (uVar19 == *piVar1) {
    uVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->BatchedMeshes).ArrayNum = uVar19 + 1;
  lVar23 = (longlong)(int)uVar19 * 0x30;
  *(undefined8 *)(pFVar3 + lVar23) = 0;
  *(undefined8 *)(pFVar3 + lVar23) = local_2e8;
  *(undefined4 *)(pFVar3 + lVar23 + 8) = (undefined4)local_2e0;
  *(undefined4 *)(pFVar3 + lVar23 + 0xc) = local_2e0._4_4_;
  *(undefined8 *)(pFVar3 + lVar23 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar23 + 0x10) = local_2d8;
  *(undefined4 *)(pFVar3 + lVar23 + 0x18) = local_2d0;
  *(undefined4 *)(pFVar3 + lVar23 + 0x1c) = uStack_2cc;
  *(undefined4 *)(pFVar3 + lVar23 + 0x20) = uStack_2c8;
  *(undefined4 *)(pFVar3 + lVar23 + 0x24) = local_2c4;
  pFVar3[lVar23 + 0x28] = local_2c0;
  *(undefined4 *)(pFVar3 + lVar23 + 0x2c) = local_2bc;
  uStack_2cc = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  uVar21 = 0;
  if ((int)uVar19 < (this->BatchedMeshes).ArrayNum) {
    uVar21 = ~uVar19 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar24 = (pTVar2->AllocatorInstance).Data + lVar23;
  pFVar3 = pFVar24 + 8;
  ((FColor_u_0 *)(pFVar24 + 0x20))->_s_0 = (FColor_u_0_s_0)param_3->field0_0x0;
  pFVar24[0x28] = (FScriptContainerElement)param_4;
  *(uint *)(pFVar24 + 0x2c) = param_6;
  *(float *)(pFVar24 + 0x24) = param_5;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,8,(ForAnyElementType *)pFVar24,(int *)pFVar3,(int *)(pFVar24 + 0xc));
  auVar54 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar40 = auVar54._0_8_;
  local_248 = (param_1->Min).field0_0x0._s_0.X;
  dStack_240 = (param_1->Min).field0_0x0._s_0.Y;
  local_238 = (param_1->Max).field0_0x0._s_0.Z;
  dVar17 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar10 = local_238 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar64 = (param_2->Scale3D).XY.m128d_f64[0] * local_248;
  dVar63 = (param_2->Scale3D).XY.m128d_f64[1] * dStack_240;
  uVar81 = (undefined4)((ulonglong)dVar63 >> 0x20);
  local_268 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar65._8_4_ = SUB84(dVar63,0);
  auVar65._0_8_ = dVar64;
  auVar65._12_4_ = uVar81;
  auVar41 = blendpd(local_268,auVar54,2);
  auVar66._0_8_ = auVar65._8_8_ * local_268._0_8_ - local_268._8_8_ * dVar64;
  auVar66._8_8_ = dVar10 * local_268._8_8_ - dVar40 * dVar63;
  auVar67._8_4_ = SUB84(dVar63,0);
  auVar67._0_8_ = dVar64;
  auVar67._12_4_ = uVar81;
  auVar26._8_4_ = SUB84(dVar11,0);
  auVar26._0_8_ = dVar10;
  auVar26._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar26 = blendpd(auVar67,auVar26,2);
  auVar27._0_8_ = auVar26._0_8_ * dVar40 - auVar41._0_8_ * dVar10;
  auVar27._8_8_ = auVar26._8_8_ * auVar54._8_8_ - auVar41._8_8_ * dVar11;
  auVar26 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar67 = blendpd(auVar66,auVar27,2);
  dVar11 = auVar66._8_8_ + auVar66._8_8_;
  dVar16 = auVar27._0_8_ + auVar27._0_8_;
  uVar81 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar68._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar68._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar52._8_4_ = SUB84(dVar16,0);
  auVar52._0_8_ = dVar11;
  auVar52._12_4_ = uVar81;
  auVar42._8_4_ = SUB84(dVar16,0);
  auVar42._0_8_ = dVar11;
  auVar42._12_4_ = uVar81;
  auVar67 = blendpd(auVar42,auVar68,2);
  auVar53._0_8_ = auVar52._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar11;
  auVar53._8_8_ = auVar68._0_8_ * auVar26._8_8_ - dVar40 * dVar16;
  auVar41._8_4_ = SUB84(auVar53._8_8_,0);
  auVar41._0_8_ = auVar53._0_8_;
  auVar41._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
  auVar26 = blendpd(auVar26,auVar54,2);
  auVar43._0_8_ = auVar67._0_8_ * dVar40 - auVar26._0_8_ * auVar68._0_8_;
  auVar43._8_8_ = auVar67._8_8_ * auVar54._8_8_ - auVar26._8_8_ * auVar68._8_8_;
  auVar54 = blendpd(auVar53,auVar43,2);
  dVar64 = dVar11 * dVar17 + dVar64 + auVar41._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar63 = dVar16 * dVar17 + dVar63 + auVar43._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  uVar81 = SUB84(dVar63,0);
  uVar82 = (undefined4)((ulonglong)dVar63 >> 0x20);
  dVar63 = auVar68._0_8_ * dVar17 + dVar10 + auVar54._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_230._8_4_ = uVar81;
  local_230._0_8_ = dVar64;
  local_230._12_4_ = uVar82;
  local_220 = dVar63;
  if ((*(int *)pFVar3 < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pauVar4 = *(undefined1 (**) [16])pFVar24;
  auVar54._8_4_ = uVar81;
  auVar54._0_8_ = dVar64;
  auVar54._12_4_ = uVar82;
  *pauVar4 = auVar54;
  *(double *)pauVar4[1] = dVar63;
  local_208 = (param_1->Max).field0_0x0._s_0.Z;
  dStack_210 = (param_1->Min).field0_0x0._s_0.Y;
  dVar10 = local_208 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_218 = (param_1->Max).field0_0x0._s_0.X;
  dVar17 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar54 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar40 = auVar54._0_8_;
  dVar64 = (param_2->Scale3D).XY.m128d_f64[0] * local_218;
  dVar63 = (param_2->Scale3D).XY.m128d_f64[1] * dStack_210;
  uVar81 = (undefined4)((ulonglong)dVar63 >> 0x20);
  local_268 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar69._8_4_ = SUB84(dVar63,0);
  auVar69._0_8_ = dVar64;
  auVar69._12_4_ = uVar81;
  auVar67 = blendpd(local_268,auVar54,2);
  auVar70._0_8_ = auVar69._8_8_ * local_268._0_8_ - local_268._8_8_ * dVar64;
  auVar70._8_8_ = dVar10 * local_268._8_8_ - dVar40 * dVar63;
  auVar28._8_4_ = SUB84(dVar63,0);
  auVar28._0_8_ = dVar64;
  auVar28._12_4_ = uVar81;
  auVar6._8_4_ = SUB84(dVar11,0);
  auVar6._0_8_ = dVar10;
  auVar6._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar26 = blendpd(auVar28,auVar6,2);
  auVar29._0_8_ = auVar26._0_8_ * dVar40 - auVar67._0_8_ * dVar10;
  auVar29._8_8_ = auVar26._8_8_ * auVar54._8_8_ - auVar67._8_8_ * dVar11;
  auVar26 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar67 = blendpd(auVar70,auVar29,2);
  dVar11 = auVar70._8_8_ + auVar70._8_8_;
  dVar16 = auVar29._0_8_ + auVar29._0_8_;
  uVar81 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar71._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar71._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar55._8_4_ = SUB84(dVar16,0);
  auVar55._0_8_ = dVar11;
  auVar55._12_4_ = uVar81;
  auVar44._8_4_ = SUB84(dVar16,0);
  auVar44._0_8_ = dVar11;
  auVar44._12_4_ = uVar81;
  auVar67 = blendpd(auVar44,auVar71,2);
  auVar56._0_8_ = auVar55._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar11;
  auVar56._8_8_ = auVar71._0_8_ * auVar26._8_8_ - dVar40 * dVar16;
  auVar30._8_4_ = SUB84(auVar56._8_8_,0);
  auVar30._0_8_ = auVar56._0_8_;
  auVar30._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
  auVar26 = blendpd(auVar26,auVar54,2);
  auVar45._0_8_ = auVar67._0_8_ * dVar40 - auVar26._0_8_ * auVar71._0_8_;
  auVar45._8_8_ = auVar67._8_8_ * auVar54._8_8_ - auVar26._8_8_ * auVar71._8_8_;
  auVar54 = blendpd(auVar56,auVar45,2);
  dVar64 = dVar11 * dVar17 + dVar64 + auVar30._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar63 = dVar16 * dVar17 + dVar63 + auVar45._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  uVar81 = SUB84(dVar63,0);
  uVar82 = (undefined4)((ulonglong)dVar63 >> 0x20);
  dVar63 = auVar71._0_8_ * dVar17 + dVar10 + auVar54._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_200._8_4_ = uVar81;
  local_200._0_8_ = dVar64;
  local_200._12_4_ = uVar82;
  local_1f0 = dVar63;
  if ((*(int *)pFVar3 < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = *(longlong *)pFVar24;
  auVar12._8_4_ = uVar81;
  auVar12._0_8_ = dVar64;
  auVar12._12_4_ = uVar82;
  *(undefined1 (*) [16])(lVar23 + 0x18) = auVar12;
  *(double *)(lVar23 + 0x28) = dVar63;
  auVar54 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar40 = auVar54._0_8_;
  local_1e8 = (param_1->Min).field0_0x0._s_0.X;
  dStack_1e0 = (param_1->Min).field0_0x0._s_0.Y;
  local_1d8 = (param_1->Min).field0_0x0._s_0.Z;
  dVar17 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar10 = local_1d8 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar64 = (param_2->Scale3D).XY.m128d_f64[0] * local_1e8;
  dVar63 = (param_2->Scale3D).XY.m128d_f64[1] * dStack_1e0;
  uVar81 = (undefined4)((ulonglong)dVar63 >> 0x20);
  local_268 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar72._8_4_ = SUB84(dVar63,0);
  auVar72._0_8_ = dVar64;
  auVar72._12_4_ = uVar81;
  auVar67 = blendpd(local_268,auVar54,2);
  auVar73._0_8_ = auVar72._8_8_ * local_268._0_8_ - local_268._8_8_ * dVar64;
  auVar73._8_8_ = dVar10 * local_268._8_8_ - dVar40 * dVar63;
  auVar31._8_4_ = SUB84(dVar63,0);
  auVar31._0_8_ = dVar64;
  auVar31._12_4_ = uVar81;
  auVar7._8_4_ = SUB84(dVar11,0);
  auVar7._0_8_ = dVar10;
  auVar7._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar26 = blendpd(auVar31,auVar7,2);
  auVar32._0_8_ = auVar26._0_8_ * dVar40 - auVar67._0_8_ * dVar10;
  auVar32._8_8_ = auVar26._8_8_ * auVar54._8_8_ - auVar67._8_8_ * dVar11;
  auVar26 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar67 = blendpd(auVar73,auVar32,2);
  dVar11 = auVar73._8_8_ + auVar73._8_8_;
  dVar16 = auVar32._0_8_ + auVar32._0_8_;
  uVar81 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar74._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar74._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar57._8_4_ = SUB84(dVar16,0);
  auVar57._0_8_ = dVar11;
  auVar57._12_4_ = uVar81;
  auVar46._8_4_ = SUB84(dVar16,0);
  auVar46._0_8_ = dVar11;
  auVar46._12_4_ = uVar81;
  auVar67 = blendpd(auVar46,auVar74,2);
  auVar58._0_8_ = auVar57._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar11;
  auVar58._8_8_ = auVar74._0_8_ * auVar26._8_8_ - dVar40 * dVar16;
  auVar33._8_4_ = SUB84(auVar58._8_8_,0);
  auVar33._0_8_ = auVar58._0_8_;
  auVar33._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
  auVar26 = blendpd(auVar26,auVar54,2);
  auVar47._0_8_ = auVar67._0_8_ * dVar40 - auVar26._0_8_ * auVar74._0_8_;
  auVar47._8_8_ = auVar67._8_8_ * auVar54._8_8_ - auVar26._8_8_ * auVar74._8_8_;
  auVar54 = blendpd(auVar58,auVar47,2);
  dVar64 = dVar11 * dVar17 + dVar64 + auVar33._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar63 = dVar16 * dVar17 + dVar63 + auVar47._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  uVar81 = SUB84(dVar63,0);
  uVar82 = (undefined4)((ulonglong)dVar63 >> 0x20);
  dVar63 = auVar74._0_8_ * dVar17 + dVar10 + auVar54._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_1d0._8_4_ = uVar81;
  local_1d0._0_8_ = dVar64;
  local_1d0._12_4_ = uVar82;
  local_1c0 = dVar63;
  if ((*(int *)pFVar3 < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = *(longlong *)pFVar24;
  auVar13._8_4_ = uVar81;
  auVar13._0_8_ = dVar64;
  auVar13._12_4_ = uVar82;
  *(undefined1 (*) [16])(lVar23 + 0x30) = auVar13;
  *(double *)(lVar23 + 0x40) = dVar63;
  local_1a8 = (param_1->Min).field0_0x0._s_0.Z;
  dVar64 = *(double *)((longlong)&(param_1->Min).field0_0x0 + 8);
  dVar10 = local_1a8 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar63 = (param_1->Max).field0_0x0._s_0.X;
  dVar17 = (param_2->Rotation).ZW.m128d_f64[1];
  local_268 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar54 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar40 = auVar54._0_8_;
  auVar67 = blendpd(local_268,auVar54,2);
  local_1b8._8_4_ = SUB84(dVar64,0);
  local_1b8._0_8_ = dVar63;
  local_1b8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
  dVar63 = dVar63 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar64 = dVar64 * (param_2->Scale3D).XY.m128d_f64[1];
  uVar81 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar75._8_4_ = SUB84(dVar64,0);
  auVar75._0_8_ = dVar63;
  auVar75._12_4_ = uVar81;
  auVar76._0_8_ = auVar75._8_8_ * local_268._0_8_ - local_268._8_8_ * dVar63;
  auVar76._8_8_ = dVar10 * local_268._8_8_ - dVar40 * dVar64;
  auVar34._8_4_ = SUB84(dVar64,0);
  auVar34._0_8_ = dVar63;
  auVar34._12_4_ = uVar81;
  auVar8._8_4_ = SUB84(dVar11,0);
  auVar8._0_8_ = dVar10;
  auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar26 = blendpd(auVar34,auVar8,2);
  auVar35._0_8_ = auVar26._0_8_ * dVar40 - auVar67._0_8_ * dVar10;
  auVar35._8_8_ = auVar26._8_8_ * auVar54._8_8_ - auVar67._8_8_ * dVar11;
  auVar26 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar67 = blendpd(auVar76,auVar35,2);
  dVar11 = auVar76._8_8_ + auVar76._8_8_;
  dVar16 = auVar35._0_8_ + auVar35._0_8_;
  uVar81 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar77._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar77._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar59._8_4_ = SUB84(dVar16,0);
  auVar59._0_8_ = dVar11;
  auVar59._12_4_ = uVar81;
  auVar48._8_4_ = SUB84(dVar16,0);
  auVar48._0_8_ = dVar11;
  auVar48._12_4_ = uVar81;
  auVar67 = blendpd(auVar48,auVar77,2);
  auVar60._0_8_ = auVar59._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar11;
  auVar60._8_8_ = auVar77._0_8_ * auVar26._8_8_ - dVar40 * dVar16;
  auVar36._8_4_ = SUB84(auVar60._8_8_,0);
  auVar36._0_8_ = auVar60._0_8_;
  auVar36._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
  auVar26 = blendpd(auVar26,auVar54,2);
  auVar49._0_8_ = auVar67._0_8_ * dVar40 - auVar26._0_8_ * auVar77._0_8_;
  auVar49._8_8_ = auVar67._8_8_ * auVar54._8_8_ - auVar26._8_8_ * auVar77._8_8_;
  auVar54 = blendpd(auVar60,auVar49,2);
  dVar63 = dVar11 * dVar17 + dVar63 + auVar36._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar64 = dVar16 * dVar17 + dVar64 + auVar49._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  uVar81 = SUB84(dVar64,0);
  uVar82 = (undefined4)((ulonglong)dVar64 >> 0x20);
  dVar64 = auVar77._0_8_ * dVar17 + dVar10 + auVar54._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_1a0._8_4_ = uVar81;
  local_1a0._0_8_ = dVar63;
  local_1a0._12_4_ = uVar82;
  local_190 = dVar64;
  if ((*(int *)pFVar3 < 4) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = *(longlong *)pFVar24;
  auVar14._8_4_ = uVar81;
  auVar14._0_8_ = dVar63;
  auVar14._12_4_ = uVar82;
  *(undefined1 (*) [16])(lVar23 + 0x48) = auVar14;
  *(double *)(lVar23 + 0x58) = dVar64;
  local_178 = (param_1->Max).field0_0x0._s_0.Z;
  dVar64 = *(double *)((longlong)&(param_1->Max).field0_0x0 + 8);
  dVar10 = local_178 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar63 = (param_1->Min).field0_0x0._s_0.X;
  dVar17 = (param_2->Rotation).ZW.m128d_f64[1];
  local_268 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar54 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar40 = auVar54._0_8_;
  auVar67 = blendpd(local_268,auVar54,2);
  local_188._8_4_ = SUB84(dVar64,0);
  local_188._0_8_ = dVar63;
  local_188._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
  dVar63 = dVar63 * (param_2->Scale3D).XY.m128d_f64[0];
  dVar64 = dVar64 * (param_2->Scale3D).XY.m128d_f64[1];
  uVar81 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar78._8_4_ = SUB84(dVar64,0);
  auVar78._0_8_ = dVar63;
  auVar78._12_4_ = uVar81;
  auVar79._0_8_ = auVar78._8_8_ * local_268._0_8_ - local_268._8_8_ * dVar63;
  auVar79._8_8_ = dVar10 * local_268._8_8_ - dVar40 * dVar64;
  auVar37._8_4_ = SUB84(dVar64,0);
  auVar37._0_8_ = dVar63;
  auVar37._12_4_ = uVar81;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar26 = blendpd(auVar37,auVar9,2);
  auVar38._0_8_ = auVar26._0_8_ * dVar40 - auVar67._0_8_ * dVar10;
  auVar38._8_8_ = auVar26._8_8_ * auVar54._8_8_ - auVar67._8_8_ * dVar11;
  auVar26 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar67 = blendpd(auVar79,auVar38,2);
  dVar11 = auVar79._8_8_ + auVar79._8_8_;
  dVar16 = auVar38._0_8_ + auVar38._0_8_;
  uVar81 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar80._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar80._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar61._8_4_ = SUB84(dVar16,0);
  auVar61._0_8_ = dVar11;
  auVar61._12_4_ = uVar81;
  auVar50._8_4_ = SUB84(dVar16,0);
  auVar50._0_8_ = dVar11;
  auVar50._12_4_ = uVar81;
  auVar67 = blendpd(auVar50,auVar80,2);
  auVar62._0_8_ = auVar61._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar11;
  auVar62._8_8_ = auVar80._0_8_ * auVar26._8_8_ - dVar40 * dVar16;
  auVar39._8_4_ = SUB84(auVar62._8_8_,0);
  auVar39._0_8_ = auVar62._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
  auVar26 = blendpd(auVar26,auVar54,2);
  auVar51._0_8_ = auVar67._0_8_ * dVar40 - auVar26._0_8_ * auVar80._0_8_;
  auVar51._8_8_ = auVar67._8_8_ * auVar54._8_8_ - auVar26._8_8_ * auVar80._8_8_;
  auVar54 = blendpd(auVar62,auVar51,2);
  dVar63 = dVar11 * dVar17 + dVar63 + auVar39._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar64 = dVar16 * dVar17 + dVar64 + auVar51._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  uVar81 = SUB84(dVar64,0);
  uVar82 = (undefined4)((ulonglong)dVar64 >> 0x20);
  dVar64 = auVar80._0_8_ * dVar17 + dVar10 + auVar54._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  local_170._8_4_ = uVar81;
  local_170._0_8_ = dVar63;
  local_170._12_4_ = uVar82;
  local_160 = dVar64;
  if ((*(int *)pFVar3 < 5) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = *(longlong *)pFVar24;
  auVar15._8_4_ = uVar81;
  auVar15._0_8_ = dVar63;
  auVar15._12_4_ = uVar82;
  *(undefined1 (*) [16])(lVar23 + 0x60) = auVar15;
  *(double *)(lVar23 + 0x70) = dVar64;
  local_2b8._s_0.X = (param_1->Max).field0_0x0._s_0.X;
  local_2b8._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  local_2b8._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
  pTVar20 = UE::Math::TTransform<double>::TransformPosition
                      (param_2,&local_c8,(TVector<double> *)&local_2b8._s_0);
  dVar63 = (pTVar20->field0_0x0)._s_0.X;
  dVar10 = (pTVar20->field0_0x0)._s_0.Y;
  dVar64 = (pTVar20->field0_0x0)._s_0.Z;
  if ((*(int *)pFVar3 < 6) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = *(longlong *)pFVar24;
  *(double *)(lVar23 + 0x78) = dVar63;
  *(double *)(lVar23 + 0x80) = dVar10;
  *(double *)(lVar23 + 0x88) = dVar64;
  local_2a0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  local_2a0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  local_2a0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  pTVar20 = UE::Math::TTransform<double>::TransformPosition
                      (param_2,&local_b0,(TVector<double> *)&local_2a0._s_0);
  dVar63 = (pTVar20->field0_0x0)._s_0.X;
  dVar10 = (pTVar20->field0_0x0)._s_0.Y;
  dVar64 = (pTVar20->field0_0x0)._s_0.Z;
  if ((*(int *)pFVar3 < 7) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = *(longlong *)pFVar24;
  *(double *)(lVar23 + 0x90) = dVar63;
  *(double *)(lVar23 + 0x98) = dVar10;
  *(double *)(lVar23 + 0xa0) = dVar64;
  local_288._s_0.X = (param_1->Max).field0_0x0._s_0.X;
  local_288._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  local_288._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  pTVar20 = UE::Math::TTransform<double>::TransformPosition
                      (param_2,local_98,(TVector<double> *)&local_288._s_0);
  dVar63 = (pTVar20->field0_0x0)._s_0.X;
  dVar10 = (pTVar20->field0_0x0)._s_0.Y;
  dVar64 = (pTVar20->field0_0x0)._s_0.Z;
  if ((*(int *)pFVar3 < 8) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar23 = *(longlong *)pFVar24;
  *(double *)(lVar23 + 0xa8) = dVar63;
  *(double *)(lVar23 + 0xb0) = dVar10;
  *(double *)(lVar23 + 0xb8) = dVar64;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x24,(ForAnyElementType *)(pFVar24 + 0x10),(int *)(pFVar24 + 0x18),
             (int *)(pFVar24 + 0x1c));
  local_158 = ___xmm_00000003000000000000000200000003;
  uStack_150 = _UNK_1517cfc28;
  local_138 = ___xmm_00000005000000010000000700000001;
  uStack_130 = _UNK_1517cfc58;
  local_148 = ___xmm_00000003000000070000000100000000;
  uStack_140 = _UNK_1517cfc48;
  local_118 = ___xmm_00000006000000020000000400000005;
  uStack_110 = _UNK_1517cfc68;
  local_128 = ___xmm_00000006000000050000000700000006;
  uStack_120 = _UNK_1517cfc78;
  local_f8 = ___xmm_00000001000000040000000000000001;
  uStack_f0 = _UNK_1517cfc18;
  local_108 = ___xmm_00000000000000040000000200000004;
  uStack_100 = _UNK_1517cfc08;
  local_d8 = ___xmm_00000003000000020000000700000002;
  uStack_d0 = _UNK_1517cfc38;
  local_e8 = ___xmm_00000006000000070000000500000004;
  uStack_e0 = _UNK_150ae1808;
  uVar25 = uVar22;
  while( true ) {
    uVar81 = *(undefined4 *)((longlong)&local_158 + uVar25);
    if ((*(int *)(pFVar24 + 0x18) <= (int)uVar22) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) break;
                    /* WARNING: Load size is inaccurate */
    uVar19 = (int)uVar22 + 1;
    uVar22 = (ulonglong)uVar19;
    *(undefined4 *)(pFVar24[0x10] + uVar25) = uVar81;
    uVar25 = uVar25 + 4;
    if (0x23 < (int)uVar19) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// DrawSphere @ 1478cada0

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
ULineBatchComponent::DrawSphere
          (ULineBatchComponent *this,TVector<double> *param_1,float param_2,int param_3,
          FLinearColor *param_4,float param_5,uchar param_6,float param_7,uint param_8)

{
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float local_res20;
  double local_148;
  double dStack_140;
  double local_138;
  double local_e8;
  
  iVar12 = 4;
  if (4 < param_3) {
    iVar12 = param_3;
  }
  local_res20 = 0.0;
  if (iVar12 != 0) {
    pTVar1 = &this->BatchedLines;
    dVar10 = (double)param_2;
    fVar22 = __real_3f800000;
    iVar18 = iVar12;
    do {
      iVar18 = iVar18 + -1;
      __libm_sse2_sincosf_();
      dVar2 = *(double *)((longlong)&param_1->field0_0x0 + 8);
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      iVar19 = iVar12;
      dVar13 = (double)local_res20 * dVar10 + (param_1->field0_0x0)._s_0.X;
      local_148 = (double)extraout_XMM0_Da * dVar10 + (param_1->field0_0x0)._s_0.X;
      dStack_140 = dVar2;
      local_e8 = (double)fVar22 * dVar10 + (param_1->field0_0x0)._s_0.Z;
      do {
        local_138 = (double)extraout_XMM0_Db * dVar10 + dVar3;
        uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
        uVar20 = SUB84(dVar2,0);
        iVar19 = iVar19 + -1;
        __libm_sse2_sincosf_();
        iVar16 = (this->BatchedLines).ArrayNum;
        dVar3 = (param_1->field0_0x0)._s_0.Z;
        dVar2 = (double)(local_res20 * extraout_XMM0_Da_00) * dVar10 + (param_1->field0_0x0)._s_0.Y;
        dVar4 = (param_1->field0_0x0)._s_0.Y;
        dVar11 = (double)fVar22 * dVar10 + (param_1->field0_0x0)._s_0.Z;
        dVar9 = (double)(extraout_XMM0_Db_00 * local_res20) * dVar10 + (param_1->field0_0x0)._s_0.X;
        dVar5 = (param_1->field0_0x0)._s_0.X;
        if (iVar16 == (this->BatchedLines).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
        }
        (this->BatchedLines).ArrayNum = iVar16 + 1;
        lVar17 = (longlong)iVar16;
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        auVar7._8_4_ = uVar20;
        auVar7._0_8_ = dVar13;
        auVar7._12_4_ = uVar21;
        *(undefined1 (*) [16])(pFVar6 + lVar17 * 0x50) = auVar7;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x10) = local_e8;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x18) = dVar9;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x20) = dVar2;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x28) = dVar11;
        uVar14 = *(undefined8 *)&param_4->field0_0x0;
        uVar15 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
        pFVar6[lVar17 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
        *(float *)(pFVar6 + lVar17 * 0x50 + 0x40) = param_7;
        *(undefined8 *)(pFVar6 + lVar17 * 0x50 + 0x30) = uVar14;
        *(undefined8 *)(pFVar6 + lVar17 * 0x50 + 0x30 + 8) = uVar15;
        *(uint *)(pFVar6 + lVar17 * 0x50 + 0x4c) = param_8;
        *(float *)(pFVar6 + lVar17 * 0x50 + 0x44) = param_5;
        iVar16 = (this->BatchedLines).ArrayNum;
        if (iVar16 == (this->BatchedLines).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&pTVar1->AllocatorInstance,&(this->BatchedLines).ArrayMax);
        }
        lVar17 = (longlong)iVar16;
        (this->BatchedLines).ArrayNum = iVar16 + 1;
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        *(float *)(pFVar6 + lVar17 * 0x50 + 0x40) = param_7;
        pFVar6[lVar17 * 0x50 + 0x48] = (FScriptContainerElement)param_6;
        *(uint *)(pFVar6 + lVar17 * 0x50 + 0x4c) = param_8;
        auVar8._8_4_ = uVar20;
        auVar8._0_8_ = dVar13;
        auVar8._12_4_ = uVar21;
        *(undefined1 (*) [16])(pFVar6 + lVar17 * 0x50) = auVar8;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x10) = local_e8;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x18) = local_148;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x18 + 8) = dStack_140;
        *(double *)(pFVar6 + lVar17 * 0x50 + 0x28) = local_138;
        uVar14 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
        *(undefined8 *)(pFVar6 + lVar17 * 0x50 + 0x30) = *(undefined8 *)&param_4->field0_0x0;
        *(undefined8 *)(pFVar6 + lVar17 * 0x50 + 0x30 + 8) = uVar14;
        *(float *)(pFVar6 + lVar17 * 0x50 + 0x44) = param_5;
        dVar13 = dVar9;
        local_148 = (double)(extraout_XMM0_Db_00 * extraout_XMM0_Da) * dVar10 + dVar5;
        dStack_140 = (double)(extraout_XMM0_Da * extraout_XMM0_Da_00) * dVar10 + dVar4;
        local_e8 = dVar11;
      } while (iVar19 != 0);
      fVar22 = extraout_XMM0_Db;
      local_res20 = extraout_XMM0_Da;
    } while (iVar18 != 0);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// Flush @ 1478cdd00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineBatchComponent::Flush(ULineBatchComponent *this)

{
  int *piVar1;
  
  if (((0 < (this->BatchedLines).ArrayNum) || (0 < (this->BatchedPoints).ArrayNum)) ||
     (0 < (this->BatchedMeshes).ArrayNum)) {
    piVar1 = &(this->BatchedLines).ArrayMax;
    (this->BatchedLines).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->BatchedLines).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->BatchedPoints).ArrayMax;
    (this->BatchedPoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->BatchedPoints).AllocatorInstance,0,piVar1);
    }
    DestructItems<FBatchedMesh,int>
              ((FBatchedMesh *)(this->BatchedMeshes).AllocatorInstance.Data,
               (this->BatchedMeshes).ArrayNum);
    piVar1 = &(this->BatchedMeshes).ArrayMax;
    (this->BatchedMeshes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->BatchedMeshes).AllocatorInstance,0,piVar1);
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// GetPrivateStaticClass @ 1478d96b0

UClass * __cdecl ULineBatchComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULineBatchComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LineBatchComponent",
               &Z_Registration_Info_UClass_ULineBatchComponent.InnerSingleton,
               StaticRegisterNativesULineBatchComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULineBatchComponent>,
               InternalVTableHelperCtorCaller<ULineBatchComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULineBatchComponent.InnerSingleton;
}

// StaticRegisterNativesULineBatchComponent @ 1478f8010

void __cdecl ULineBatchComponent::StaticRegisterNativesULineBatchComponent(void)

{
  return;
}

// TickComponent @ 1478fa2b0

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
ULineBatchComponent::TickComponent
          (ULineBatchComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  TArray<FBatchedLine,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FBatchedPoint,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FBatchedMesh,TSizedDefaultAllocator<32>_> *this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  
  bVar8 = false;
  uVar13 = 0;
  bVar9 = false;
  if (0 < (this->BatchedLines).ArrayNum) {
    pTVar2 = &this->BatchedLines;
    lVar15 = 0;
    do {
      uVar16 = ~uVar13 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar13 < (this->BatchedLines).ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8 = bVar9, bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      fVar17 = *(float *)(pFVar5 + lVar15 + 0x44);
      lVar14 = lVar15;
      uVar12 = uVar13;
      if ((0.0 < fVar17) &&
         (fVar17 = fVar17 - param_1, *(float *)(pFVar5 + lVar15 + 0x44) = fVar17, fVar17 <= 0.0)) {
        uVar12 = uVar13 - 1;
        lVar14 = lVar15 + -0x50;
        uVar10 = 0;
        if ((int)uVar13 < (this->BatchedLines).ArrayNum) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar4 = (this->BatchedLines).ArrayNum;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        iVar11 = iVar4 + ~uVar13;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar5 + lVar15,pFVar5 + (longlong)(iVar4 - iVar11) * 0x50,(longlong)iVar11 * 0x50
                 );
        }
        piVar1 = &(this->BatchedLines).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&pTVar2->AllocatorInstance,(this->BatchedLines).ArrayNum,
                   &(this->BatchedLines).ArrayMax);
        bVar8 = true;
        bVar9 = true;
      }
      uVar13 = uVar12 + 1;
      lVar15 = lVar14 + 0x50;
    } while ((int)uVar13 < (this->BatchedLines).ArrayNum);
  }
  uVar13 = 0;
  if (0 < (this->BatchedPoints).ArrayNum) {
    pTVar3 = &this->BatchedPoints;
    lVar15 = 0;
    do {
      uVar16 = ~uVar13 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar13 < (this->BatchedPoints).ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      fVar17 = *(float *)(pFVar5 + lVar15 + 0x2c);
      if ((0.0 < fVar17) &&
         (fVar17 = fVar17 - param_1, *(float *)(pFVar5 + lVar15 + 0x2c) = fVar17, fVar17 <= 0.0)) {
        uVar12 = 0;
        if ((int)uVar13 < (this->BatchedPoints).ArrayNum) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar4 = (this->BatchedPoints).ArrayNum;
        pFVar5 = (pTVar3->AllocatorInstance).Data;
        iVar11 = ~uVar13 + iVar4;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar5 + lVar15,pFVar5 + (longlong)(iVar4 - iVar11) * 0x38,(longlong)iVar11 * 0x38
                 );
        }
        piVar1 = &(this->BatchedPoints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&pTVar3->AllocatorInstance,(this->BatchedPoints).ArrayNum,
                   &(this->BatchedPoints).ArrayMax);
        bVar9 = true;
        lVar15 = lVar15 + -0x38;
        uVar13 = uVar13 - 1;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x38;
      bVar8 = bVar9;
    } while ((int)uVar13 < (this->BatchedPoints).ArrayNum);
  }
  uVar13 = 0;
  if (0 < (this->BatchedMeshes).ArrayNum) {
    this_00 = &this->BatchedMeshes;
    lVar15 = 0;
    bVar8 = bVar9;
    do {
      uVar12 = 0;
      if ((int)uVar13 < (this->BatchedMeshes).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      fVar17 = *(float *)(pFVar5 + lVar15 + 0x24);
      if ((0.0 < fVar17) &&
         (fVar17 = fVar17 - param_1, *(float *)(pFVar5 + lVar15 + 0x24) = fVar17, fVar17 <= 0.0)) {
        lVar15 = lVar15 + -0x30;
        uVar12 = 0;
        if ((int)uVar13 < (this->BatchedMeshes).ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<FBatchedMesh,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar13);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this_00->AllocatorInstance,(this->BatchedMeshes).ArrayNum,
                   &(this->BatchedMeshes).ArrayMax);
        bVar8 = true;
        uVar13 = uVar13 - 1;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x30;
    } while ((int)uVar13 < (this->BatchedMeshes).ArrayNum);
  }
  if (!bVar8) {
    return;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

