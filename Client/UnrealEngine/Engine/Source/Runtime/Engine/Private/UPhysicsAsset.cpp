// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 47

// StaticClass @ 1482c99c0

UClass * __cdecl UPhysicsAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsAsset",
               &Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton,
               StaticRegisterNativesUPhysicsAsset,0x168,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UPhysicsAsset>,
               InternalVTableHelperCtorCaller<UPhysicsAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton;
}

// UPhysicsAsset @ 1482db720

UPhysicsAsset * __thiscall UPhysicsAsset::UPhysicsAsset(UPhysicsAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->SolverSettings).PositionIterations = 6;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->BoundsBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsBodies).ArrayNum = 0;
  (this->BoundsBodies).ArrayMax = 0;
  (this->SkeletalBodySetups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalBodySetups).ArrayNum = 0;
  (this->SkeletalBodySetups).ArrayMax = 0;
  (this->ConstraintSetup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSetup).ArrayNum = 0;
  (this->ConstraintSetup).ArrayMax = 0;
  (this->SolverSettings).FixedTimeStep = 0.0;
  *(undefined8 *)&this->BodySetupIndexMap = 0;
  *(undefined8 *)&(this->BodySetupIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->BodySetupIndexMap).field_0x20 = 0;
  (this->SolverSettings).VelocityIterations = 1;
  (this->SolverSettings).ProjectionIterations = 1;
  (this->SolverSettings).CullDistance = 3.0;
  (this->SolverSettings).MaxDepenetrationVelocity = 0.0;
  (this->SolverSettings).bUseLinearJointSolver = true;
  (this->SolverSettings).bUseManifolds = true;
  (this->SolverIterations).SolverIterations = 3;
  (this->SolverIterations).JointIterations = 2;
  (this->SolverIterations).CollisionIterations = 2;
  (this->SolverIterations).SolverPushOutIterations = 1;
  (this->SolverIterations).JointPushOutIterations = 1;
  (this->SolverIterations).CollisionPushOutIterations = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BodySetupIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x48 = 0;
  *(undefined8 *)&this->CollisionDisableTable = 0;
  *(undefined8 *)&(this->CollisionDisableTable).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionDisableTable).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x34 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CollisionDisableTable).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x48 = 0;
  (this->ThumbnailInfo).field0_0x0.DebugPtr = (UThumbnailInfo *)0x0;
  (this->BodySetup_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodySetup_DEPRECATED).ArrayNum = 0;
  (this->BodySetup_DEPRECATED).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// UPhysicsAsset @ 1482db880

UPhysicsAsset * __thiscall
UPhysicsAsset::UPhysicsAsset(UPhysicsAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->SolverSettings).PositionIterations = 6;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->BoundsBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsBodies).ArrayNum = 0;
  (this->BoundsBodies).ArrayMax = 0;
  (this->SkeletalBodySetups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalBodySetups).ArrayNum = 0;
  (this->SkeletalBodySetups).ArrayMax = 0;
  (this->ConstraintSetup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSetup).ArrayNum = 0;
  (this->ConstraintSetup).ArrayMax = 0;
  (this->SolverSettings).FixedTimeStep = 0.0;
  *(undefined8 *)&this->BodySetupIndexMap = 0;
  *(undefined8 *)&(this->BodySetupIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->BodySetupIndexMap).field_0x20 = 0;
  (this->SolverSettings).VelocityIterations = 1;
  (this->SolverSettings).ProjectionIterations = 1;
  (this->SolverSettings).CullDistance = 3.0;
  (this->SolverSettings).MaxDepenetrationVelocity = 0.0;
  (this->SolverSettings).bUseLinearJointSolver = true;
  (this->SolverSettings).bUseManifolds = true;
  (this->SolverIterations).SolverIterations = 3;
  (this->SolverIterations).JointIterations = 2;
  (this->SolverIterations).CollisionIterations = 2;
  (this->SolverIterations).SolverPushOutIterations = 1;
  (this->SolverIterations).JointPushOutIterations = 1;
  (this->SolverIterations).CollisionPushOutIterations = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BodySetupIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x48 = 0;
  *(undefined8 *)&this->CollisionDisableTable = 0;
  *(undefined8 *)&(this->CollisionDisableTable).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionDisableTable).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x34 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CollisionDisableTable).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionDisableTable).field_0x48 = 0;
  (this->ThumbnailInfo).field0_0x0.DebugPtr = (UThumbnailInfo *)0x0;
  (this->BodySetup_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodySetup_DEPRECATED).ArrayNum = 0;
  (this->BodySetup_DEPRECATED).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this->SolverType = bUseRBANForDefaultPhysicsAssetSolverType == false;
  return this;
}

// ~UPhysicsAsset @ 1482de020

void __thiscall UPhysicsAsset::~UPhysicsAsset(UPhysicsAsset *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodySetup_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CollisionDisableTable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CollisionDisableTable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionDisableTable);
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BodySetupIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BodySetupIndexMap);
  pFVar1 = (this->ConstraintSetup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletalBodySetups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundsBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 1482e4cd0

void __thiscall UPhysicsAsset::AddAssetUserData(UPhysicsAsset *this,UAssetUserData *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  UObject **ppUVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar3 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar8 = (UObject *)(*pcVar3)(this,local_res18);
    if (pUVar8 != (UObject *)0x0) {
      local_48 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      ppUVar4 = *(UObject ***)&(this->CollisionDisableTable).field_0x38;
      if (((ppUVar4 <= &local_48) &&
          (&local_48 < ppUVar4 + *(int *)&(this->CollisionDisableTable).field_0x44)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)&(this->CollisionDisableTable).field_0x40;
      if (iVar7 != 0) {
        iVar12 = 0;
        plVar5 = *(longlong **)&(this->CollisionDisableTable).field_0x38;
        bVar6 = (UObject *)*plVar5 != local_48;
        lVar9 = 0;
        pUVar8 = local_48;
        iVar10 = 0;
        do {
          iVar11 = iVar10;
          do {
            lVar9 = lVar9 + 1;
            iVar11 = iVar11 + 1;
            if (iVar7 <= lVar9) break;
          } while (bVar6 == ((UObject *)plVar5[lVar9] != pUVar8));
          if (bVar6 != false) {
            if (iVar12 != iVar10) {
              memmove(plVar5 + iVar12,plVar5 + iVar10,(longlong)(iVar11 - iVar10) << 3);
              pUVar8 = local_48;
            }
            iVar12 = iVar12 + (iVar11 - iVar10);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar10 = iVar11;
        } while (lVar9 < iVar7);
        *(int *)&(this->CollisionDisableTable).field_0x40 = iVar12;
      }
    }
    puVar2 = &(this->CollisionDisableTable).field_0x38;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)puVar2 <= &local_40) &&
        (&local_40 < *(UAssetUserData ***)puVar2 + *(int *)&(this->CollisionDisableTable).field_0x44
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)&(this->CollisionDisableTable).field_0x40;
    puVar1 = &(this->CollisionDisableTable).field_0x44;
    if (iVar7 == *(int *)puVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar2,(int *)puVar1);
    }
    *(int *)&(this->CollisionDisableTable).field_0x40 = iVar7 + 1;
    *(UAssetUserData **)(*(longlong *)puVar2 + (longlong)iVar7 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// BodyFindConstraints @ 1482ea500

void __thiscall
UPhysicsAsset::BodyFindConstraints
          (UPhysicsAsset *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint local_18 [4];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar8 = 0;
  if (param_1 < (this->SkeletalBodySetups).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_18[0] = 0;
  lVar2 = *(longlong *)
           (*(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)param_1 * 8)
           + 0x28);
  if (0 < (this->ConstraintSetup).ArrayNum) {
    do {
      uVar8 = local_18[0];
      uVar6 = 0;
      if ((int)local_18[0] < (this->ConstraintSetup).ArrayNum) {
        uVar6 = ~local_18[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)
           (*(longlong *)((this->ConstraintSetup).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
           + 0x90) == lVar2) {
LAB_1482ea67d:
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
      }
      else {
        lVar9 = (longlong)(int)local_18[0];
        uVar8 = 0;
        if ((int)local_18[0] < (this->ConstraintSetup).ArrayNum) {
          uVar8 = ~local_18[0] >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)
             (*(longlong *)((this->ConstraintSetup).AllocatorInstance.Data + lVar9 * 8) + 0x98) ==
            lVar2) goto LAB_1482ea67d;
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->ConstraintSetup).ArrayNum);
  }
  return;
}

// CalcAABB @ 1482eaea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
UPhysicsAsset::CalcAABB
          (UPhysicsAsset *this,TBox<double> *__return_storage_ptr__,USkinnedMeshComponent *param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  TBox<double> *pTVar19;
  USkinnedAsset *pUVar20;
  FString *pFVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint uVar36;
  undefined4 uVar37;
  uint uVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStackY_278 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  USkinnedMeshComponent *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  longlong local_218;
  longlong local_210;
  undefined7 uStack_1d7;
  FString local_1d0;
  FString local_1c0;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  TVector<double>_u_0 local_168;
  double dStack_150;
  undefined1 local_148 [16];
  char local_138;
  undefined7 uStack_137;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar24 = 0;
  local_228 = param_1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
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
  uVar23 = 0;
  if (param_1 == (USkinnedMeshComponent *)0x0) {
    return __return_storage_ptr__;
  }
  local_1b0 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_1a8 = (param_2->Scale3D).XY.m128d_f64[1];
  local_1a0 = (param_2->Scale3D).ZW.m128d_f64[0];
  uVar36 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = SUB84(local_1b0 - dStack_1a8,0) & uVar36;
  uVar38 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar31 = (uint)((ulonglong)(local_1b0 - dStack_1a8) >> 0x20) & uVar38;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar31,uVar28) &&
        (double)CONCAT44(uVar31,uVar28) != __real_3f1a36e2e0000000) ||
      (uVar28 = SUB84(local_1b0 - local_1a0,0) & uVar36,
      uVar31 = (uint)((ulonglong)(local_1b0 - local_1a0) >> 0x20) & uVar38,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar31,uVar28) &&
      (double)CONCAT44(uVar31,uVar28) != __real_3f1a36e2e0000000)) ||
     (uVar36 = SUB84(dStack_1a8 - local_1a0,0) & uVar36,
     uVar38 = (uint)((ulonglong)(dStack_1a8 - local_1a0) >> 0x20) & uVar38,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar38,uVar36) &&
     (double)CONCAT44(uVar38,uVar36) != __real_3f1a36e2e0000000)) {
    if ((byte)LogPhysics._0_1_ < 5) goto LAB_1482eb48d;
    pUVar20 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
    if (pUVar20 != (USkinnedAsset *)0x0) {
      pUVar20 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
      pFVar21 = UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar20,&local_1c0,(UObject *)0x0,None);
      if ((pFVar21->Data).ArrayNum == 0) {
        uVar24 = 1;
      }
      else {
        uVar24 = 1;
      }
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_1d0,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    FVar22.Data = local_1c0.Data.AllocatorInstance.Data;
    if (uVar24 == 0) goto LAB_1482eb48d;
  }
  else {
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    if (param_1->bConsiderAllBodiesForBounds == '\0') {
      pTVar25 = &this->BoundsBodies;
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(this->SkeletalBodySetups).ArrayNum,&local_238.AllocatorInstance,
                 &local_238.ArrayNum,&local_238.ArrayMax);
      uVar26 = uVar24;
      if (0 < (this->SkeletalBodySetups).ArrayNum) {
        do {
          uVar31 = (uint)uVar24;
          uVar28 = uVar23;
          if ((int)uVar31 < local_238.ArrayNum) {
            uVar28 = ~uVar31 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            pTVar19 = (TBox<double> *)(*pcVar8)();
            return pTVar19;
          }
          *(uint *)(local_238.AllocatorInstance.Data + uVar26) = uVar31;
          uVar24 = (ulonglong)(uVar31 + 1);
          uVar26 = uVar26 + 4;
        } while ((int)(uVar31 + 1) < (this->SkeletalBodySetups).ArrayNum);
      }
      pTVar25 = &local_238;
    }
    iVar7 = pTVar25->ArrayNum;
    local_220 = pTVar25;
    FVar22.Data = local_238.AllocatorInstance.Data;
    if (0 < iVar7) {
      local_218 = 0;
      uVar28 = 1;
      do {
        lVar27 = local_218;
        uVar31 = uVar23;
        if ((int)(uVar28 - 1) < pTVar25->ArrayNum) {
          uVar31 = ~(uVar28 - 1) >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar19 = (TBox<double> *)(*pcVar8)();
          return pTVar19;
        }
        uVar31 = *(uint *)((pTVar25->AllocatorInstance).Data + lVar27 * 4);
        uVar36 = uVar23;
        if ((int)uVar31 < (this->SkeletalBodySetups).ArrayNum) {
          uVar36 = ~uVar31 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar19 = (TBox<double> *)(*pcVar8)();
          return pTVar19;
        }
        local_210 = *(longlong *)
                     ((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar31 * 8)
        ;
        if (((*(byte *)(local_210 + 0xd8) & 2) != 0) ||
           (local_228->bConsiderAllBodiesForBounds != '\0')) {
          if ((int)uVar28 < iVar7) {
            uVar36 = 0;
            uVar31 = uVar36;
            if ((int)uVar28 < pTVar25->ArrayNum) {
              uVar31 = ~uVar28 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              pTVar19 = (TBox<double> *)(*pcVar8)();
              return pTVar19;
            }
            uVar31 = *(uint *)((pTVar25->AllocatorInstance).Data + lVar27 * 4 + 4);
            uVar38 = uVar36;
            if ((int)uVar31 < (this->SkeletalBodySetups).ArrayNum) {
              uVar38 = ~uVar31 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              pTVar19 = (TBox<double> *)(*pcVar8)();
              return pTVar19;
            }
            if ((int)uVar31 < (this->SkeletalBodySetups).ArrayNum) {
              uVar36 = ~uVar31 >> 0x1f;
            }
            pTVar25 = local_220;
            lVar27 = local_218;
            if ((uVar36 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pTVar25 = local_220, lVar27 = local_218, bVar17)) {
              pcVar8 = (code *)swi(3);
              pTVar19 = (TBox<double> *)(*pcVar8)();
              return pTVar19;
            }
          }
          lVar14 = local_210;
          iVar18 = USkinnedMeshComponent::GetBoneIndex(local_228,*(FName *)(local_210 + 0x28));
          if (iVar18 != -1) {
            USkinnedMeshComponent::GetBoneTransform(local_228,&local_128,iVar18,param_2);
            FKAggregateGeom::CalcAABB
                      ((FKAggregateGeom *)(lVar14 + 0x38),(TBox<double> *)&local_168._s_0,&local_128
                      );
            uVar16 = local_168._s_0.Z;
            uVar15 = local_168._s_0.Y;
            uVar41 = local_168._s_0.X;
            uVar30 = SUB84(local_168._s_0.X,0);
            uVar33 = (undefined4)((ulonglong)local_168._0_8_ >> 0x20);
            if (dStack_150 < local_168._s_0.X) {
              local_168._s_0.X = dStack_150;
              uVar30 = SUB84(dStack_150,0);
              uVar33 = (undefined4)((ulonglong)dStack_150 >> 0x20);
              dStack_150 = (double)uVar41;
            }
            uVar41 = local_148._0_8_;
            if ((double)local_148._0_8_ < local_168._s_0.Y) {
              local_168._s_0.Y = (double)local_148._0_8_;
              local_148._0_8_ = uVar15;
              uVar41 = uVar15;
            }
            uVar37 = SUB84(local_168._s_0.Z,0);
            uVar29 = (undefined4)((ulonglong)local_168._16_8_ >> 0x20);
            uVar43 = local_148._8_4_;
            uVar44 = local_148._12_4_;
            uVar34 = uVar37;
            uVar35 = uVar29;
            if ((double)local_148._8_8_ < local_168._s_0.Z) {
              local_168._s_0.Z = (double)local_148._8_8_;
              local_148._8_8_ = uVar16;
              uVar34 = uVar43;
              uVar35 = uVar44;
              uVar43 = uVar37;
              uVar44 = uVar29;
            }
            uVar37 = (undefined4)((ulonglong)local_168._8_8_ >> 0x20);
            if (__return_storage_ptr__->IsValid == '\0') {
              if (local_138 != '\0') {
                *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar30;
                *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar33;
                *(int *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) =
                     SUB84(local_168._s_0.Y,0);
                *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar37;
                local_168._4_4_ = uVar33;
                local_168._0_4_ = uVar30;
                *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar34
                ;
                *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar35
                ;
                *(int *)&(__return_storage_ptr__->Max).field0_0x0 = SUB84(dStack_150,0);
                *(int *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) =
                     (int)((ulonglong)dStack_150 >> 0x20);
                auVar9._8_4_ = uVar43;
                auVar9._0_8_ = uVar41;
                auVar9._12_4_ = uVar44;
                *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) =
                     auVar9;
                local_148._8_4_ = uVar43;
                local_148._0_8_ = uVar41;
                local_148._12_4_ = uVar44;
                __return_storage_ptr__->IsValid = local_138;
                __return_storage_ptr__->Pad[0] = (char)uStack_137;
                __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_137 >> 8);
                __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_137 >> 0x10);
                __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_137 >> 0x18);
                __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_137 >> 0x20);
                __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_137 >> 0x28);
                __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_137 >> 0x30);
                local_168._20_4_ = uVar35;
                local_168._16_4_ = uVar34;
              }
            }
            else if (local_138 != '\0') {
              dVar1 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
              dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
              if (dVar2 <= (double)CONCAT44(uVar35,uVar34)) {
                uVar34 = SUB84(dVar2,0);
                uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
              }
              dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
              dVar3 = dStack_150;
              if (dStack_150 <= dVar2) {
                dVar3 = dVar2;
              }
              uVar29 = SUB84(dVar1,0);
              uVar32 = (int)((ulonglong)dVar1 >> 0x20);
              if ((double)CONCAT44(uVar33,uVar30) <= dVar1) {
                uVar29 = uVar30;
                uVar32 = uVar33;
              }
              dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
              uVar30 = SUB84(dVar1,0);
              uVar33 = (int)((ulonglong)dVar1 >> 0x20);
              if (local_168._s_0.Y <= dVar1) {
                uVar30 = SUB84(local_168._s_0.Y,0);
                uVar33 = uVar37;
              }
              (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar35,uVar34);
              *(double *)&(__return_storage_ptr__->Max).field0_0x0 = dVar3;
              (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar32,uVar29);
              dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
              (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar33,uVar30);
              uVar30 = SUB84(dVar1,0);
              uVar33 = (int)((ulonglong)dVar1 >> 0x20);
              if (dVar1 <= (double)uVar41) {
                uVar30 = (int)uVar41;
                uVar33 = (int)((ulonglong)uVar41 >> 0x20);
              }
              dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
              uVar34 = SUB84(dVar1,0);
              uVar35 = (int)((ulonglong)dVar1 >> 0x20);
              if (dVar1 <= (double)CONCAT44(uVar44,uVar43)) {
                uVar34 = uVar43;
                uVar35 = uVar44;
              }
              (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar33,uVar30);
              (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar35,uVar34);
            }
          }
        }
        uVar28 = uVar28 + 1;
        local_218 = lVar27 + 1;
        FVar22.Data = local_238.AllocatorInstance.Data;
      } while (lVar27 + 1 < (longlong)iVar7);
    }
  }
  if (FVar22.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar22.Data);
  }
LAB_1482eb48d:
  if (__return_storage_ptr__->IsValid == '\0') {
    dVar1 = (param_2->Translation).ZW.m128d_f64[0];
    dVar2 = (param_2->Translation).XY.m128d_f64[0];
    dVar3 = (param_2->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
    __return_storage_ptr__->IsValid = 1;
    __return_storage_ptr__->Pad[0] = (char)uStack_1d7;
    __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_1d7 >> 8);
    __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_1d7 >> 0x10);
    __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_1d7 >> 0x18);
    __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_1d7 >> 0x20);
    __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_1d7 >> 0x28);
    __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_1d7 >> 0x30);
  }
  dVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  dVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  dVar4 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
  dVar40 = dVar1 - dVar3;
  dVar5 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  dVar39 = dVar2 - dVar4;
  dVar6 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  dVar42 = dVar5 - dVar6;
  dVar13 = dVar40;
  if (dVar39 <= dVar40) {
    dVar13 = dVar39;
  }
  if (dVar42 <= dVar13) {
    dVar13 = dVar42;
  }
  if (dVar13 < __real_3ff0000000000000) {
    dVar39 = __real_3ff0000000000000 - dVar39;
    dVar40 = __real_3ff0000000000000 - dVar40;
    dVar42 = __real_3ff0000000000000 - dVar42;
    if (dVar39 <= 0.0) {
      dVar39 = 0.0;
    }
    if (dVar40 <= 0.0) {
      dVar40 = 0.0;
    }
    if (dVar42 <= 0.0) {
      dVar42 = 0.0;
    }
    dVar40 = dVar40 * __real_3fe0000000000000;
    dVar42 = dVar42 * __real_3fe0000000000000;
    dVar3 = dVar3 - dVar40;
    dVar2 = dVar2 + dVar39 * __real_3fe0000000000000;
    dVar5 = dVar5 + dVar42;
    auVar10._8_4_ = SUB84(dVar3,0);
    auVar10._0_8_ = dVar4 - dVar39 * __real_3fe0000000000000;
    auVar10._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar10;
    auVar11._8_4_ = SUB84(dVar2,0);
    auVar11._0_8_ = dVar6 - dVar42;
    auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = auVar11;
    auVar12._8_4_ = SUB84(dVar5,0);
    auVar12._0_8_ = dVar1 + dVar40;
    auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar12;
    __return_storage_ptr__->IsValid = 1;
    __return_storage_ptr__->Pad[0] = (char)uStack_1d7;
    __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_1d7 >> 8);
    __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_1d7 >> 0x10);
    __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_1d7 >> 0x18);
    __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_1d7 >> 0x20);
    __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_1d7 >> 0x28);
    __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_1d7 >> 0x30);
  }
  return __return_storage_ptr__;
}

// ClearAllPhysicsMeshes @ 1482ebcf0

void __thiscall UPhysicsAsset::ClearAllPhysicsMeshes(UPhysicsAsset *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->SkeletalBodySetups).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->SkeletalBodySetups).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + lVar5) == 0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_191326623939689902>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                           ,0x252,"SkeletalBodySetups[i]");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        uVar3 = 0;
        if ((int)uVar4 < (this->SkeletalBodySetups).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UBodySetup::ClearPhysicsMeshes
                  (*(UBodySetup **)((this->SkeletalBodySetups).AllocatorInstance.Data + lVar5));
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->SkeletalBodySetups).ArrayNum);
  }
  return;
}

// DisableCollision @ 1482f4940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPhysicsAsset::DisableCollision(UPhysicsAsset *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int *local_30;
  undefined1 *local_28;
  int local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != param_2) {
    iStack_1c = param_2;
    if (param_2 < param_1) {
      iStack_1c = param_1;
    }
    if (param_1 < param_2) {
      param_2 = param_1;
    }
    if (*(int *)&(this->CollisionDisableTable).field_0x8 !=
        *(int *)&(this->CollisionDisableTable).field_0x34) {
      puVar3 = *(undefined1 **)&(this->CollisionDisableTable).field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(this->CollisionDisableTable).field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(this->CollisionDisableTable).field_0x48 - 1U &
                                iStack_1c * 0x17 + param_2) * 4);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)&(this->CollisionDisableTable).field_0x0;
        do {
          lVar1 = lVar2 + (longlong)iVar4 * 0x14;
          if ((*(int *)(lVar2 + (longlong)iVar4 * 0x14) == param_2) &&
             (*(int *)(lVar1 + 4) == iStack_1c)) {
            if (iVar4 != -1) {
              lVar2 = lVar1 + 8;
              if (lVar1 == 0) {
                lVar2 = 0;
              }
              if (lVar2 != 0) {
                return;
              }
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0xc);
        } while (iVar4 != -1);
      }
    }
    local_30 = &local_20;
    local_38[0] = 0;
    local_28 = local_38;
    local_20 = param_2;
    TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigidBodyIndexPair_const_&,bool_&&>_>
              ((TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
                *)&this->CollisionDisableTable,
               (TPairInitializer<FRigidBodyIndexPair_const_&,bool_&&> *)local_34,
               (bool *)(local_34 + 4));
  }
  return;
}

// DrawConstraints @ 1482f69b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPhysicsAsset::DrawConstraints
          (UPhysicsAsset *this,int param_1,FMeshElementCollector *param_2,
          FReferenceSkeleton *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
          TTransform<double> *param_5,float param_6)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  TTransform<double> *pTVar9;
  uint uVar10;
  FConstraintInstance *this_00;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  __m128d _Var28;
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_3e8 [32];
  FPDIOrCollector local_388;
  TTransform<double> local_368;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  fVar5 = __real_3f800000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  uVar10 = 0;
  if (0 < (this->ConstraintSetup).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->ConstraintSetup).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->ConstraintSetup).AllocatorInstance.Data + lVar11);
      uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar31 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar32 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar33 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      this_00 = (FConstraintInstance *)(lVar1 + 0x28);
      uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar39 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar41 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_308.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_308.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_308.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_308.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_308.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_308.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      if (*(FName *)(lVar1 + 0x90) != (FName)0x0) {
        _Var28.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)&param_3->FinalNameToIndexMap,*(FName *)(lVar1 + 0x90));
        if ((piVar8 != (int *)0x0) && (*piVar8 != -1)) {
          GetSkelBoneTransform(&local_1e8,*piVar8,param_4,param_5);
          local_1e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_1e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          dVar22 = local_1e8.Rotation.XY.m128d_f64[0] * local_1e8.Rotation.XY.m128d_f64[0] +
                   local_1e8.Rotation.ZW.m128d_f64[0] * local_1e8.Rotation.ZW.m128d_f64[0];
          dVar27 = local_1e8.Rotation.XY.m128d_f64[1] * local_1e8.Rotation.XY.m128d_f64[1] +
                   local_1e8.Rotation.ZW.m128d_f64[1] * local_1e8.Rotation.ZW.m128d_f64[1];
          auVar29._8_4_ = SUB84(dVar27,0);
          auVar29._0_8_ = dVar22;
          auVar29._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          auVar16._0_8_ = auVar29._8_8_ + dVar22;
          auVar16._8_8_ = dVar22 + dVar27;
          uVar12 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar16._0_8_);
          uVar14 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar16._8_8_);
          auVar29 = sqrtpd((undefined1  [16])_Var28.m128d_f64,auVar16);
          uVar13 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar16._0_8_);
          uVar15 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar16._8_8_);
          auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
          auVar18._0_8_ = (ulonglong)(auVar17._0_8_ * local_1e8.Rotation.XY.m128d_f64[0]) & uVar12;
          uVar4 = uVar14 & (ulonglong)(auVar17._8_8_ * local_1e8.Rotation.XY.m128d_f64[1]);
          auVar18._8_4_ = (undefined4)uVar4;
          auVar18._12_4_ = (undefined4)(uVar4 >> 0x20);
          auVar23._0_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar23._4_4_ =
               ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar23._8_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar23._12_4_ =
               ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          local_1e8.Rotation.XY.m128d_f64 = (double  [2])(auVar18 | auVar23);
          auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
          auVar24._0_8_ = uVar13 & (ulonglong)(auVar17._0_8_ * local_1e8.Rotation.ZW.m128d_f64[0]);
          uVar4 = uVar15 & (ulonglong)(auVar17._8_8_ * local_1e8.Rotation.ZW.m128d_f64[1]);
          auVar24._8_4_ = (undefined4)uVar4;
          auVar24._12_4_ = (undefined4)(uVar4 >> 0x20);
          auVar17._4_4_ =
               ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar17._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar17._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar17._12_4_ =
               ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          local_1e8.Rotation.ZW.m128d_f64 = (double  [2])(auVar24 | auVar17);
          pTVar9 = FConstraintInstance::GetRefFrame(this_00,&local_128,Frame1);
          local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_2a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_2a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_2a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_2a8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_2a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_2a8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_2a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_2a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_2a8,pTVar9,&local_1e8);
          local_308.Rotation.XY.m128d_f64[1] = local_2a8.Rotation.XY.m128d_f64[1];
          local_308.Rotation.XY.m128d_f64[0] = local_2a8.Rotation.XY.m128d_f64[0];
          local_308.Rotation.ZW.m128d_f64[1] = local_2a8.Rotation.ZW.m128d_f64[1];
          local_308.Rotation.ZW.m128d_f64[0] = local_2a8.Rotation.ZW.m128d_f64[0];
          local_308.Translation.XY.m128d_f64[1] = local_2a8.Translation.XY.m128d_f64[1];
          local_308.Translation.XY.m128d_f64[0] = local_2a8.Translation.XY.m128d_f64[0];
          local_308.Translation.ZW.m128d_f64[1] = local_2a8.Translation.ZW.m128d_f64[1];
          local_308.Translation.ZW.m128d_f64[0] = local_2a8.Translation.ZW.m128d_f64[0];
          local_308.Scale3D.XY.m128d_f64[1] = local_2a8.Scale3D.XY.m128d_f64[1];
          local_308.Scale3D.XY.m128d_f64[0] = local_2a8.Scale3D.XY.m128d_f64[0];
          local_308.Scale3D.ZW.m128d_f64[1] = local_2a8.Scale3D.ZW.m128d_f64[1];
          local_308.Scale3D.ZW.m128d_f64[0] = local_2a8.Scale3D.ZW.m128d_f64[0];
        }
        uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar31 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar32 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar33 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar39 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar41 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      local_368.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_368.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_368.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_368.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar31,uVar30);
      local_368.Translation.ZW.m128d_f64[1] = (double)CONCAT44(uVar33,uVar32);
      local_368.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar35,uVar34);
      local_368.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar37,uVar36);
      local_368.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uVar39,uVar38);
      local_368.Scale3D.ZW.m128d_f64[1] = (double)CONCAT44(uVar41,uVar40);
      if (((*(FName *)(lVar1 + 0x98) != (FName)0x0) &&
          (_Var28.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64,
          piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&param_3->FinalNameToIndexMap,*(FName *)(lVar1 + 0x98)),
          piVar8 != (int *)0x0)) && (*piVar8 != -1)) {
        GetSkelBoneTransform(&local_188,*piVar8,param_4,param_5);
        local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        dVar22 = local_188.Rotation.XY.m128d_f64[0] * local_188.Rotation.XY.m128d_f64[0] +
                 local_188.Rotation.ZW.m128d_f64[0] * local_188.Rotation.ZW.m128d_f64[0];
        dVar27 = local_188.Rotation.XY.m128d_f64[1] * local_188.Rotation.XY.m128d_f64[1] +
                 local_188.Rotation.ZW.m128d_f64[1] * local_188.Rotation.ZW.m128d_f64[1];
        auVar19._8_4_ = SUB84(dVar27,0);
        auVar19._0_8_ = dVar22;
        auVar19._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        auVar20._0_8_ = auVar19._8_8_ + dVar22;
        auVar20._8_8_ = dVar22 + dVar27;
        uVar12 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar20._0_8_);
        uVar14 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar20._8_8_);
        auVar29 = sqrtpd((undefined1  [16])_Var28.m128d_f64,auVar20);
        uVar13 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar20._0_8_);
        uVar15 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar20._8_8_);
        auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
        auVar21._0_8_ = (ulonglong)(auVar17._0_8_ * local_188.Rotation.XY.m128d_f64[0]) & uVar12;
        uVar4 = uVar14 & (ulonglong)(auVar17._8_8_ * local_188.Rotation.XY.m128d_f64[1]);
        auVar21._8_4_ = (undefined4)uVar4;
        auVar21._12_4_ = (undefined4)(uVar4 >> 0x20);
        auVar25._0_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar25._4_4_ =
             ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar25._8_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar25._12_4_ =
             ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        local_188.Rotation.XY.m128d_f64 = (double  [2])(auVar21 | auVar25);
        auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
        auVar26._0_8_ = uVar13 & (ulonglong)(auVar17._0_8_ * local_188.Rotation.ZW.m128d_f64[0]);
        uVar4 = uVar15 & (ulonglong)(auVar17._8_8_ * local_188.Rotation.ZW.m128d_f64[1]);
        auVar26._8_4_ = (undefined4)uVar4;
        auVar26._12_4_ = (undefined4)(uVar4 >> 0x20);
        auVar3._4_4_ = ~(uint)(uVar13 >> 0x20) &
                       GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar3._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar3._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar3._12_4_ =
             ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        local_188.Rotation.ZW.m128d_f64 = (double  [2])(auVar26 | auVar3);
        pTVar9 = FConstraintInstance::GetRefFrame(this_00,&local_c8,Frame2);
        local_248.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_248.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_248.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_248.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_248.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_248.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_248.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_248.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_248.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_248.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_248.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_248.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_248,pTVar9,&local_188);
        local_368.Rotation.XY.m128d_f64[1] = local_248.Rotation.XY.m128d_f64[1];
        local_368.Rotation.XY.m128d_f64[0] = local_248.Rotation.XY.m128d_f64[0];
        local_368.Rotation.ZW.m128d_f64[1] = local_248.Rotation.ZW.m128d_f64[1];
        local_368.Rotation.ZW.m128d_f64[0] = local_248.Rotation.ZW.m128d_f64[0];
        local_368.Translation.XY.m128d_f64[1] = local_248.Translation.XY.m128d_f64[1];
        local_368.Translation.XY.m128d_f64[0] = local_248.Translation.XY.m128d_f64[0];
        local_368.Translation.ZW.m128d_f64[0] = local_248.Translation.ZW.m128d_f64[0];
        local_368.Translation.ZW.m128d_f64[1] = local_248.Translation.ZW.m128d_f64[1];
        local_368.Scale3D.XY.m128d_f64[0] = local_248.Scale3D.XY.m128d_f64[0];
        local_368.Scale3D.XY.m128d_f64[1] = local_248.Scale3D.XY.m128d_f64[1];
        local_368.Scale3D.ZW.m128d_f64[0] = local_248.Scale3D.ZW.m128d_f64[0];
        local_368.Scale3D.ZW.m128d_f64[1] = local_248.Scale3D.ZW.m128d_f64[1];
      }
      local_388.PDI = (FPrimitiveDrawInterface *)0x0;
      local_388.Collector = param_2;
      local_388.ViewIndex = param_1;
      FConstraintInstance::DrawConstraintImp
                (this_00,&local_388,param_6,fVar5,true,true,&local_308,&local_368,false,false);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->ConstraintSetup).ArrayNum);
  }
  return;
}

// EnableCollision @ 1483003f0

void __thiscall UPhysicsAsset::EnableCollision(UPhysicsAsset *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  FRigidBodyIndexPair local_18 [2];
  
  if (param_1 != param_2) {
    local_18[0].Indices[1] = param_2;
    if (param_2 < param_1) {
      local_18[0].Indices[1] = param_1;
    }
    if (param_1 < param_2) {
      param_2 = param_1;
    }
    if (*(int *)&(this->CollisionDisableTable).field_0x8 !=
        *(int *)&(this->CollisionDisableTable).field_0x34) {
      puVar3 = *(undefined1 **)&(this->CollisionDisableTable).field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(this->CollisionDisableTable).field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(this->CollisionDisableTable).field_0x48 - 1U &
                                local_18[0].Indices[1] * 0x17 + param_2) * 4);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)&(this->CollisionDisableTable).field_0x0;
        while ((lVar1 = lVar2 + (longlong)iVar4 * 0x14,
               *(int *)(lVar2 + (longlong)iVar4 * 0x14) != param_2 ||
               (*(int *)(lVar1 + 4) != local_18[0].Indices[1]))) {
          iVar4 = *(int *)(lVar1 + 0xc);
          if (iVar4 == -1) {
            return;
          }
        }
        if (iVar4 != -1) {
          lVar2 = lVar1 + 8;
          if (lVar1 == 0) {
            lVar2 = 0;
          }
          if (lVar2 != 0) {
            local_18[0].Indices[0] = param_2;
            TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
            ::RemoveImpl<FRigidBodyIndexPair>
                      ((TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
                        *)&this->CollisionDisableTable,local_18[0].Indices[1] * 0x17 + param_2,
                       local_18);
          }
        }
      }
    }
  }
  return;
}

// FindBodyIndex @ 148303060

int __thiscall UPhysicsAsset::FindBodyIndex(UPhysicsAsset *this,FName param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->BodySetupIndexMap,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return -1;
}

// FindConstraintBoneName @ 148303090

FName __thiscall UPhysicsAsset::FindConstraintBoneName(UPhysicsAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  int in_R8D;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if ((-1 < in_R8D) && (in_R8D < (this->ConstraintSetup).ArrayNum)) {
    if (in_R8D < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    *(undefined8 *)FVar3 =
         *(undefined8 *)
          (*(longlong *)((this->ConstraintSetup).AllocatorInstance.Data + (longlong)in_R8D * 8) +
          0x90);
    return FVar3;
  }
  *(undefined8 *)FVar3 = 0;
  return FVar3;
}

// FindConstraintIndex @ 148303130

int __thiscall UPhysicsAsset::FindConstraintIndex(UPhysicsAsset *this,FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ConstraintSetup).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ConstraintSetup).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)(*(longlong *)((this->ConstraintSetup).AllocatorInstance.Data + lVar6) + 0x90)
          == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->ConstraintSetup).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (*(FName *)(*(longlong *)((this->ConstraintSetup).AllocatorInstance.Data + lVar6) + 0x98)
            == param_2) {
          return uVar5;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ConstraintSetup).ArrayNum);
  }
  return -1;
}

// FindConstraintIndex @ 148303250

int __thiscall UPhysicsAsset::FindConstraintIndex(UPhysicsAsset *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->ConstraintSetup).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->ConstraintSetup).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)(*(longlong *)((this->ConstraintSetup).AllocatorInstance.Data + lVar5) + 0x88)
          == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar6 < (this->ConstraintSetup).ArrayNum);
  }
  return -1;
}

// FindControllingBodyIndex @ 148303300

int __thiscall
UPhysicsAsset::FindControllingBodyIndex(UPhysicsAsset *this,USkeletalMesh *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_2 != -1) {
    do {
      lVar4 = (**(code **)(param_1->_padding_ + 0x318))();
      uVar6 = 0;
      if (param_2 < *(int *)(lVar4 + 0x28)) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&this->BodySetupIndexMap,
                    *(FName *)((longlong)param_2 * 0xc + *(longlong *)(lVar4 + 0x20)));
      if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
        return *piVar5;
      }
      lVar4 = (**(code **)(param_1->_padding_ + 0x318))();
      uVar6 = 0;
      if (param_2 < *(int *)(lVar4 + 0x28)) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar6 = *(uint *)(*(longlong *)(lVar4 + 0x20) + 8 + (longlong)param_2 * 0xc);
    } while ((uVar6 != param_2) && (param_2 = uVar6, uVar6 != 0xffffffff));
  }
  return -1;
}

// FindMirroredBone @ 148303460

int __thiscall
UPhysicsAsset::FindMirroredBone(UPhysicsAsset *this,USkeletalMesh *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  FName local_res10;
  
  if (param_1 == (USkeletalMesh *)0x0) {
    return -1;
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x318))();
  uVar6 = 0;
  if (param_2 < *(int *)(lVar4 + 0x28)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  UMirrorDataTable::GetSettingsMirrorName((FName)&local_res10);
  lVar4 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
  iVar3 = -1;
  if (local_res10 != (FName)0x0) {
    piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)(lVar4 + 0x90),local_res10);
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
    }
  }
  return iVar3;
}

// FindParentBodyIndex @ 148303540

int __thiscall
UPhysicsAsset::FindParentBodyIndex(UPhysicsAsset *this,FReferenceSkeleton *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(uint)param_2;
  while( true ) {
    uVar6 = (uint)uVar7;
    uVar3 = 0;
    if ((int)uVar6 < (param_1->FinalRefBoneInfo).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    uVar3 = *(uint *)((param_1->FinalRefBoneInfo).AllocatorInstance.Data +
                     (longlong)(int)uVar6 * 0xc + 8);
    uVar7 = (ulonglong)(int)uVar3;
    if (uVar3 == 0xffffffff) {
      return -1;
    }
    uVar6 = 0;
    if ((int)uVar3 < (param_1->FinalRefBoneInfo).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&this->BodySetupIndexMap,
                  *(FName *)((param_1->FinalRefBoneInfo).AllocatorInstance.Data + uVar7 * 0xc));
    if (piVar5 == (int *)0x0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *piVar5;
    }
    if (param_2 == uVar3) {
      return -1;
    }
    if (iVar4 != -1) {
      return iVar4;
    }
  }
  pcVar1 = (code *)swi(3);
  iVar4 = (*pcVar1)();
  return iVar4;
}

// FindParentBodyIndex @ 148303660

int __thiscall
UPhysicsAsset::FindParentBodyIndex(UPhysicsAsset *this,USkeletalMesh *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)(uint)param_2;
  if (param_1 == (USkeletalMesh *)0x0) {
    return -1;
  }
  lVar5 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
  while( true ) {
    uVar7 = (uint)uVar8;
    uVar3 = 0;
    if ((int)uVar7 < *(int *)(lVar5 + 0x28)) {
      uVar3 = ~uVar7 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 8 + (longlong)(int)uVar7 * 0xc);
    uVar8 = (ulonglong)(int)uVar3;
    if (uVar3 == 0xffffffff) {
      return -1;
    }
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar5 + 0x28)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&this->BodySetupIndexMap,*(FName *)(*(longlong *)(lVar5 + 0x20) + uVar8 * 0xc))
    ;
    if (piVar6 == (int *)0x0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *piVar6;
    }
    if (param_2 == uVar3) {
      return -1;
    }
    if (iVar4 != -1) {
      return iVar4;
    }
  }
  pcVar1 = (code *)swi(3);
  iVar4 = (*pcVar1)();
  return iVar4;
}

// GetAssetRegistryTags @ 148306660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPhysicsAsset::GetAssetRegistryTags
          (UPhysicsAsset *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UPhysicsAsset *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UPhysicsAsset **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UPhysicsAsset **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UPhysicsAsset **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 148306670

void __thiscall
UPhysicsAsset::GetAssetRegistryTags(UPhysicsAsset *this,FAssetRegistryTagsContext param_1)

{
  FName *pFVar1;
  FAssetRegistryTagsContext FVar2;
  FName local_res8;
  FString local_38;
  FAssetRegistryTag local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,(this->SkeletalBodySetups).ArrayNum);
  pFVar1 = ::FName::FName(&local_res8,"Bodies");
  local_28.Name = *pFVar1;
  local_28.Value.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_28.Value.Data.ArrayNum = local_38.Data.ArrayNum;
  local_28.Value.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Type = TT_Numerical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,(this->ConstraintSetup).ArrayNum);
  pFVar1 = ::FName::FName(&local_res8,"Constraints");
  local_28.Name = *pFVar1;
  local_28.Value.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_28.Value.Data.ArrayNum = local_38.Data.ArrayNum;
  local_28.Value.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Type = TT_Numerical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar2);
  return;
}

// GetAssetUserDataArray @ 1483067a0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UPhysicsAsset::GetAssetUserDataArray(UPhysicsAsset *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)
         &(this->CollisionDisableTable).field_0x38;
}

// GetAssetUserDataOfClass @ 1483067b0

UAssetUserData * __thiscall
UPhysicsAsset::GetAssetUserDataOfClass(UPhysicsAsset *this,TSubclassOf<UAssetUserData> param_1)

{
  undefined8 *puVar1;
  UObject *this_00;
  bool bVar2;
  undefined8 *puVar3;
  UObject *local_res8;
  
  puVar3 = *(undefined8 **)&(this->CollisionDisableTable).field_0x38;
  puVar1 = puVar3 + *(int *)&(this->CollisionDisableTable).field_0x40;
  do {
    if (puVar3 == puVar1) {
      return (UAssetUserData *)0x0;
    }
    this_00 = (UObject *)*puVar3;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UObject *)0x0) goto LAB_148306800;
    }
    else if (this_00 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(this_00);
LAB_148306800:
      local_res8 = *(UObject **)param_1.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      bVar2 = UObjectBaseUtility::IsA<TSubclassOf<UAssetUserData>_>
                        ((UObjectBaseUtility *)this_00,(TSubclassOf<UAssetUserData>)&local_res8);
      if (bVar2) {
        return (UAssetUserData *)*puVar3;
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

// GetBodyIndicesBelow @ 148306d40

void __thiscall
UPhysicsAsset::GetBodyIndicesBelow
          (UPhysicsAsset *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FReferenceSkeleton *param_3,bool param_4)

{
  uint uVar1;
  longlong lVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint local_38 [4];
  
  if ((((param_2 != (FName)0x0) &&
       (puVar10 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)&param_3->FinalNameToIndexMap,param_2), puVar10 != (uint *)0x0))
      && (uVar1 = *puVar10, uVar1 != 0xffffffff)) &&
     (local_38[0] = 0, 0 < (this->SkeletalBodySetups).ArrayNum)) {
    do {
      uVar8 = local_38[0];
      uVar7 = 0;
      if ((int)local_38[0] < (this->SkeletalBodySetups).ArrayNum) {
        uVar7 = ~local_38[0] >> 0x1f;
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
      lVar2 = *(longlong *)
               ((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      if (lVar2 == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_191326623939689963>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                           ,0x215,"BS");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        FVar3 = *(FName *)(lVar2 + 0x28);
        uVar8 = 0xffffffff;
        if ((FVar3 != (FName)0x0) &&
           (puVar10 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                      *)&param_3->FinalNameToIndexMap,FVar3), puVar10 != (uint *)0x0
           )) {
          uVar8 = *puVar10;
        }
        if ((param_4) && (uVar8 == uVar1)) {
LAB_148306f08:
          pFVar4 = (param_1->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)param_1->ArrayMax * 4)) &&
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
          iVar9 = param_1->ArrayNum;
          if (iVar9 == param_1->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar9 + 1;
          *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0];
        }
        else if ((uVar1 != 0xffffffff) && ((int)uVar1 < (int)uVar8)) {
          uVar8 = FReferenceSkeleton::GetParentIndex(param_3,uVar8);
          do {
            if (uVar8 == uVar1) goto LAB_148306f08;
            uVar7 = 0;
            if ((int)uVar8 < (param_3->FinalRefBoneInfo).ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
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
            uVar8 = *(uint *)((param_3->FinalRefBoneInfo).AllocatorInstance.Data +
                             (longlong)(int)uVar8 * 0xc + 8);
          } while (uVar8 != 0xffffffff);
        }
      }
      local_38[0] = local_38[0] + 1;
    } while ((int)local_38[0] < (this->SkeletalBodySetups).ArrayNum);
  }
  return;
}

// GetBodyIndicesBelow @ 148306ff0

void __thiscall
UPhysicsAsset::GetBodyIndicesBelow
          (UPhysicsAsset *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          USkeletalMesh *param_3,bool param_4)

{
  FReferenceSkeleton *pFVar1;
  
  if (param_3 != (USkeletalMesh *)0x0) {
    pFVar1 = (FReferenceSkeleton *)(**(code **)(param_3->_padding_ + 0x318))(param_3);
    GetBodyIndicesBelow(this,param_1,param_2,pFVar1,param_4);
  }
  return;
}

// GetCollisionMesh @ 148307c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UPhysicsAsset::GetCollisionMesh
          (UPhysicsAsset *this,int param_1,FMeshElementCollector *param_2,
          FReferenceSkeleton *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
          TTransform<double> *param_5,TVector<double> *param_6)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStackY_128 [32];
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar7 = 0;
  if (0 < (this->SkeletalBodySetups).ArrayNum) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->SkeletalBodySetups).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = -1;
      FVar1 = *(FName *)(*(longlong *)
                          ((this->SkeletalBodySetups).AllocatorInstance.Data + lVar8 * 8) + 0x28);
      if ((FVar1 != (FName)0x0) &&
         (piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&param_3->FinalNameToIndexMap,FVar1), piVar6 != (int *)0x0)) {
        iVar10 = *piVar6;
      }
      uVar5 = 0;
      if ((int)uVar7 < (this->SkeletalBodySetups).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->SkeletalBodySetups).AllocatorInstance.Data;
      GetSkelBoneTransform(&local_b8,iVar10,param_4,param_5);
      uVar5 = 0;
      if ((int)uVar7 < (this->SkeletalBodySetups).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(byte *)(*(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + lVar8 * 8) +
                    0xd9) & 1) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < (this->SkeletalBodySetups).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FKAggregateGeom::GetAggGeom
                  ((FKAggregateGeom *)
                   (*(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + lVar8 * 8) +
                   0x38),&local_b8,(FColor)((FColor_u_0 *)(pFVar2 + lVar8 * 8))->_s_0,
                   (FMaterialRenderProxy *)0x0,false,false,true,param_1,param_2);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while ((int)uVar7 < (this->SkeletalBodySetups).ArrayNum);
  }
  return;
}

// GetDesc @ 148308cb0

FString * __thiscall UPhysicsAsset::GetDesc(UPhysicsAsset *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d Bodies, %d Constraints");
  return __return_storage_ptr__;
}

// GetNearestBodyIndicesBelow @ 14830ae50

void __thiscall
UPhysicsAsset::GetNearestBodyIndicesBelow
          (UPhysicsAsset *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          USkeletalMesh *param_3)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FReferenceSkeleton *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_78 [2];
  ForAnyElementType local_70;
  int local_68 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  if (param_3 != (USkeletalMesh *)0x0) {
    pFVar8 = (FReferenceSkeleton *)(**(code **)(param_3->_padding_ + 0x318))(param_3);
    GetBodyIndicesBelow(this,&local_60,param_2,pFVar8,false);
  }
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(this->SkeletalBodySetups).ArrayNum,&local_70,local_68,local_68 + 1);
  uVar9 = 0;
  if (0 < local_68[0]) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < local_68[0]) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = uVar9 + 1;
      local_70.Data[lVar11] = (FScriptContainerElement)0x1;
      lVar11 = lVar11 + 1;
    } while ((int)uVar9 < local_68[0]);
  }
  uVar9 = 0;
  if (0 < local_60.ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < local_60.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = *(uint *)(local_60.AllocatorInstance.Data + lVar11);
      uVar5 = 0;
      if ((int)uVar10 < local_68[0]) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_70.Data[(int)uVar10] != (FScriptContainerElement)0x0) {
        uVar5 = 0;
        if ((int)uVar10 < (this->SkeletalBodySetups).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar12 = *(longlong *)
                  ((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
        if (lVar12 == 0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_191326623939689929>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                             ,0x237,"Body");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.ArrayNum = 0;
          local_50.ArrayMax = 0;
          FVar1 = *(FName *)(lVar12 + 0x28);
          iVar7 = 0;
          if (param_3 != (USkeletalMesh *)0x0) {
            pFVar8 = (FReferenceSkeleton *)(**(code **)(param_3->_padding_ + 0x318))(param_3);
            GetBodyIndicesBelow(this,&local_50,FVar1,pFVar8,false);
            iVar7 = local_50.ArrayNum;
          }
          uVar10 = 0;
          if (0 < iVar7) {
            lVar12 = 0;
            do {
              uVar5 = 0;
              if ((int)uVar10 < iVar7) {
                uVar5 = ~uVar10 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar5 = *(uint *)(local_50.AllocatorInstance.Data + lVar12);
              uVar6 = 0;
              if ((int)uVar5 < local_68[0]) {
                uVar6 = ~uVar5 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar10 = uVar10 + 1;
              lVar12 = lVar12 + 4;
              local_70.Data[(int)uVar5] = (FScriptContainerElement)0x0;
              iVar7 = local_50.ArrayNum;
            } while ((int)uVar10 < local_50.ArrayNum);
          }
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar9 < local_60.ArrayNum);
  }
  uVar9 = 0;
  if (0 < local_60.ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < local_60.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78[0] = *(uint *)(local_60.AllocatorInstance.Data + lVar11);
      lVar12 = (longlong)(int)local_78[0];
      uVar10 = 0;
      if ((int)local_78[0] < local_68[0]) {
        uVar10 = ~local_78[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_70.Data[lVar12] != (FScriptContainerElement)0x0) {
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_78[0];
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar9 < local_60.ArrayNum);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return;
}

// GetPreviewMesh @ 14830bb10

USkeletalMesh * __thiscall UPhysicsAsset::GetPreviewMesh(UPhysicsAsset *this)

{
  return (USkeletalMesh *)0x0;
}

// GetPrimitiveCollision @ 14830bb20

Type __thiscall
UPhysicsAsset::GetPrimitiveCollision(UPhysicsAsset *this,int param_1,Type param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  uint uVar5;
  FKShapeElem *pFVar6;
  
  if ((param_1 < 0) || ((this->SkeletalBodySetups).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletalBodySetups.IsValidIndex(BodyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0xf2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->SkeletalBodySetups).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  lVar1 = *(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)param_1 * 8);
  if (*(int *)(lVar1 + 0xc0) + *(int *)(lVar1 + 0xb0) + *(int *)(lVar1 + 0xa0) +
      *(int *)(lVar1 + 0x90) + *(int *)(lVar1 + 0x80) + *(int *)(lVar1 + 0x70) +
      *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x50) + *(int *)(lVar1 + 0x40) <= param_3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_191326623939690252>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0xf4,"PrimitiveIndex < AggGeom->GetElementCount()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  pFVar6 = FKAggregateGeom::GetElement((FKAggregateGeom *)(lVar1 + 0x38),param_2,param_3);
  return (Type)(pFVar6->CollisionEnabled).Value;
}

// GetPrimitiveContributeToMass @ 14830bc50

bool __thiscall
UPhysicsAsset::GetPrimitiveContributeToMass
          (UPhysicsAsset *this,int param_1,Type param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FKShapeElem *pFVar6;
  
  if ((param_1 < 0) || ((this->SkeletalBodySetups).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletalBodySetups.IsValidIndex(BodyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0x102,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->SkeletalBodySetups).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar1 = *(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)param_1 * 8);
  if (*(int *)(lVar1 + 0xc0) + *(int *)(lVar1 + 0xb0) + *(int *)(lVar1 + 0xa0) +
      *(int *)(lVar1 + 0x90) + *(int *)(lVar1 + 0x80) + *(int *)(lVar1 + 0x70) +
      *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x50) + *(int *)(lVar1 + 0x40) <= param_3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_191326623939690236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0x104,"PrimitiveIndex < AggGeom->GetElementCount()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar6 = FKAggregateGeom::GetElement((FKAggregateGeom *)(lVar1 + 0x38),param_2,param_3);
  return pFVar6->bContributeToMass;
}

// GetPrivateStaticClass @ 14830c370

UClass * __cdecl UPhysicsAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsAsset",
               &Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton,
               StaticRegisterNativesUPhysicsAsset,0x168,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UPhysicsAsset>,
               InternalVTableHelperCtorCaller<UPhysicsAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton;
}

// GetResourceSizeEx @ 14830d040

void __thiscall UPhysicsAsset::GetResourceSizeEx(UPhysicsAsset *this,FResourceSizeEx *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  uVar1 = *(uint *)&(this->BodySetupIndexMap).field_0x48;
  lVar2 = 0;
  lVar3 = lVar2;
  if (1 < uVar1) {
    lVar3 = (longlong)(int)uVar1 << 2;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,lVar3 + (ulonglong)
                             ((*(int *)&(this->BodySetupIndexMap).field_0x2c + 0x1fU >> 5) << 2) +
                     (longlong)*(int *)&(this->BodySetupIndexMap).field_0xc * 0x14);
  uVar1 = *(uint *)&(this->CollisionDisableTable).field_0x48;
  if (1 < uVar1) {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,lVar2 + (ulonglong)
                             ((*(int *)&(this->CollisionDisableTable).field_0x2c + 0x1fU >> 5) << 2)
                     + (longlong)*(int *)&(this->CollisionDisableTable).field_0xc * 0x14);
  return;
}

// GetUsedMaterials @ 14830dd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicsAsset::GetUsedMaterials
          (UPhysicsAsset *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_res8 [2];
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_res18;
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_res20;
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_38;
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_30;
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_28 [2];
  
  iVar5 = (this->ConstraintSetup).ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_res8[0] = (GEngine->ConstraintLimitMaterialX).field0_0x0;
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
                (param_1,(UMaterialInterface **)&local_res8[0].DebugPtr);
      local_res18 = (GEngine->ConstraintLimitMaterialXAxis).field0_0x0;
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
                (param_1,(UMaterialInterface **)&local_res18.DebugPtr);
      local_res20 = (GEngine->ConstraintLimitMaterialY).field0_0x0;
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
                (param_1,(UMaterialInterface **)&local_res20.DebugPtr);
      local_38 = (GEngine->ConstraintLimitMaterialYAxis).field0_0x0;
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
                (param_1,(UMaterialInterface **)&local_38.DebugPtr);
      local_30 = (GEngine->ConstraintLimitMaterialZ).field0_0x0;
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
                (param_1,(UMaterialInterface **)&local_30.DebugPtr);
      local_28[0] = (GEngine->ConstraintLimitMaterialZAxis).field0_0x0;
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
                (param_1,(UMaterialInterface **)&local_28[0].DebugPtr);
      iVar5 = (this->ConstraintSetup).ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// IsCollisionEnabled @ 1483109f0

bool __thiscall UPhysicsAsset::IsCollisionEnabled(UPhysicsAsset *this,int param_1,int param_2)

{
  bool *pbVar1;
  FRigidBodyIndexPair local_res20;
  
  if (param_1 != param_2) {
    local_res20.Indices[1] = param_2;
    if (param_2 < param_1) {
      local_res20.Indices[1] = param_1;
    }
    if (param_1 < param_2) {
      param_2 = param_1;
    }
    local_res20.Indices[0] = param_2;
    pbVar1 = TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
             ::Find((TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
                     *)&this->CollisionDisableTable,&local_res20);
    return pbVar1 == (bool *)0x0;
  }
  return false;
}

// PostLoad @ 148318020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPhysicsAsset::PostLoad(UPhysicsAsset *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStackY_278 [32];
  void *local_230;
  undefined8 local_228;
  FArchiveState local_218;
  undefined8 local_188;
  void **local_180;
  undefined8 local_178;
  FGuid local_168;
  FArchiveState local_158;
  undefined8 local_c8;
  void **local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  UObject::PostLoad((UObject *)this);
  local_168 = FFrameworkObjectVersion::GUID;
  iVar5 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_168);
  if (iVar5 < 0xb) {
    piVar1 = &(this->SkeletalBodySetups).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(this->BodySetup_DEPRECATED).ArrayNum,
               &(this->SkeletalBodySetups).AllocatorInstance,piVar1,
               &(this->SkeletalBodySetups).ArrayMax);
    uVar10 = 0;
    uVar12 = uVar10;
    if (0 < (this->BodySetup_DEPRECATED).ArrayNum) {
      do {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = Z_Construct_UClass_USkeletalBodySetup_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar7);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._16_4_ = 0;
        local_b8._20_4_ = 0;
        local_b8._24_4_ = RF_NoFlags;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = this;
        pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar11 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        uVar9 = (uint)uVar10;
        uVar13 = ~uVar9 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar9 < *piVar1) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->SkeletalBodySetups).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        *(UObject **)(pFVar2 + uVar12 * 8) = pUVar8;
        local_230 = (void *)0x0;
        local_228 = 0;
        uVar6 = 0;
        if ((int)uVar9 < (this->BodySetup_DEPRECATED).ArrayNum) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar11 = *(longlong **)((this->BodySetup_DEPRECATED).AllocatorInstance.Data + uVar12 * 8);
        local_218._padding_ = 0;
        local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_218._40_8_ = 0;
        local_218.ArSerializingDefaults = 0;
        local_218.ArPortFlags = 0;
        local_218.ArMaxSerializeSize = 0;
        local_218.ArUEVer.FileVersionUE4 = 0;
        local_218.ArUEVer.FileVersionUE5 = 0;
        local_218.ArLicenseeUEVer = 0;
        local_218.ArEngineVer.Major = 0;
        local_218.ArEngineVer.Minor = 0;
        local_218.ArEngineVer.Patch = 0;
        local_218.ArEngineVer._6_2_ = 0;
        local_218.ArEngineVer.Changelist = 0;
        local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_218.SerializedProperty = (FProperty *)0x0;
        local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_218.bCustomVersionsAreReset = false;
        local_218._129_7_ = 0;
        local_218.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_218);
        local_188 = 0;
        local_218._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_180 = &local_230;
        local_178 = 0;
        FArchiveState::SetIsSaving(&local_218,true);
        (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
        local_218.ArIgnoreClassRef = '\0';
        local_218.ArNoDelta = '\0';
        local_218.ArIgnoreArchetypeRef = '\0';
        local_218._padding_ = (longlong)&___7FObjectWriter__6B_;
        (**(code **)(*plVar11 + 200))(plVar11,&local_218);
        uVar6 = 0;
        if ((int)uVar9 < *piVar1) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar11 = *(longlong **)((this->SkeletalBodySetups).AllocatorInstance.Data + uVar12 * 8);
        local_158._padding_ = 0;
        local_158.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_158.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_158.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_158.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_158._40_8_ = 0;
        local_158.ArSerializingDefaults = 0;
        local_158.ArPortFlags = 0;
        local_158.ArMaxSerializeSize = 0;
        local_158.ArUEVer.FileVersionUE4 = 0;
        local_158.ArUEVer.FileVersionUE5 = 0;
        local_158.ArLicenseeUEVer = 0;
        local_158.ArEngineVer.Major = 0;
        local_158.ArEngineVer.Minor = 0;
        local_158.ArEngineVer.Patch = 0;
        local_158.ArEngineVer._6_2_ = 0;
        local_158.ArEngineVer.Changelist = 0;
        local_158.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_158.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_158.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_158.SerializedProperty = (FProperty *)0x0;
        local_158.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_158.bCustomVersionsAreReset = false;
        local_158._129_7_ = 0;
        local_158.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_158);
        local_c8 = 0;
        local_158._padding_ = (longlong)&___7FObjectReader__6B_;
        local_c0 = &local_230;
        FArchiveState::SetIsLoading(&local_158,true);
        (**(code **)(local_158._padding_ + 0x108))(&local_158,0);
        local_158.ArIgnoreClassRef = '\0';
        local_158.ArIgnoreArchetypeRef = '\0';
        (**(code **)(*plVar11 + 200))(plVar11,&local_158);
        FArchive::~FArchive((FArchive *)&local_158);
        FArchive::~FArchive((FArchive *)&local_218);
        if (local_230 != (void *)0x0) {
          FMemory::Free(local_230);
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar12 = uVar12 + 1;
      } while ((int)(uVar9 + 1) < (this->BodySetup_DEPRECATED).ArrayNum);
    }
    (this->BodySetup_DEPRECATED).ArrayNum = 0;
    if ((this->BodySetup_DEPRECATED).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->BodySetup_DEPRECATED).AllocatorInstance,0,
                 &(this->BodySetup_DEPRECATED).ArrayMax);
    }
  }
  iVar5 = (this->SkeletalBodySetups).ArrayNum;
  bVar4 = false;
  if (iVar5 == 0) {
    UpdateBoundsBodiesArray(this);
    iVar5 = (this->SkeletalBodySetups).ArrayNum;
    bVar4 = iVar5 == 0;
  }
  if ((!bVar4 && -1 < iVar5) &&
     (*(int *)&(this->BodySetupIndexMap).field_0x8 == *(int *)&(this->BodySetupIndexMap).field_0x34)
     ) {
    UpdateBodySetupIndexMap(this);
  }
  return;
}

// RemoveUserDataOfClass @ 14831dc20

void __thiscall
UPhysicsAsset::RemoveUserDataOfClass(UPhysicsAsset *this,TSubclassOf<UAssetUserData> param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].InUserDataClass = (TSubclassOf<UAssetUserData> *)param_1.Class.field0_0x0;
  TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UPhysicsAsset::RemoveUserDataOfClass_::__l2::<lambda_1>_>
            ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)
             &(this->CollisionDisableTable).field_0x38,local_res8);
  return;
}

// Serialize @ 148320350

void __thiscall UPhysicsAsset::Serialize(UPhysicsAsset *this,FArchive *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  TMapPrivateFriend::
  Serialize<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
            (param_1,(TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
                      *)&this->CollisionDisableTable);
  iVar2 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  if (iVar2 < 9) {
    iVar2 = (this->SolverIterations).JointIterations;
    iVar1 = (this->SolverIterations).SolverIterations;
    (this->SolverSettings).VelocityIterations = 1;
    (this->SolverSettings).bUseLinearJointSolver = false;
    (this->SolverSettings).CullDistance = 1.0;
    (this->SolverSettings).PositionIterations = iVar2 * iVar1;
    (this->SolverSettings).ProjectionIterations = (this->SolverIterations).SolverPushOutIterations;
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar2 < 0x8f) {
    (this->SolverSettings).bUseManifolds = false;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x000148320429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  return;
}

// Serialize @ 148320440

void __thiscall UPhysicsAsset::Serialize(UPhysicsAsset *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  int iVar2;
  FArchiveState *this_00;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteSeasonBranchObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  TMapPrivateFriend::
  Serialize<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
            ((FArchive *)this_00,
             (TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
              *)&this->CollisionDisableTable);
  iVar2 = FArchiveState::CustomVer(this_00,&FFortniteSeasonBranchObjectVersion::GUID);
  if (iVar2 < 9) {
    iVar2 = (this->SolverIterations).JointIterations;
    iVar1 = (this->SolverIterations).SolverIterations;
    (this->SolverSettings).VelocityIterations = 1;
    (this->SolverSettings).bUseLinearJointSolver = false;
    (this->SolverSettings).CullDistance = 1.0;
    (this->SolverSettings).PositionIterations = iVar2 * iVar1;
    (this->SolverSettings).ProjectionIterations = (this->SolverIterations).SolverPushOutIterations;
  }
  iVar2 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (iVar2 < 0x8f) {
    (this->SolverSettings).bUseManifolds = false;
  }
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFrameworkObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FReleaseObjectVersion::GUID);
  return;
}

// SetPreviewMesh @ 1483220b0

void __thiscall
UPhysicsAsset::SetPreviewMesh(UPhysicsAsset *this,USkeletalMesh *param_1,bool param_2)

{
  return;
}

// SetPrimitiveCollision @ 1483220c0

void __thiscall
UPhysicsAsset::SetPrimitiveCollision
          (UPhysicsAsset *this,int param_1,Type param_2,int param_3,Type param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FKShapeElem *pFVar5;
  
  if ((param_1 < 0) || ((this->SkeletalBodySetups).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletalBodySetups.IsValidIndex(BodyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0xea,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->SkeletalBodySetups).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)param_1 * 8);
  if (*(int *)(lVar1 + 0xc0) + *(int *)(lVar1 + 0xb0) + *(int *)(lVar1 + 0xa0) +
      *(int *)(lVar1 + 0x90) + *(int *)(lVar1 + 0x80) + *(int *)(lVar1 + 0x70) +
      *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x50) + *(int *)(lVar1 + 0x40) <= param_3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_191326623939690260>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0xec,"PrimitiveIndex < AggGeom->GetElementCount()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = FKAggregateGeom::GetElement((FKAggregateGeom *)(lVar1 + 0x38),param_2,param_3);
  (pFVar5->CollisionEnabled).Value = (undefined1)param_4;
  return;
}

// SetPrimitiveContributeToMass @ 1483221f0

void __thiscall
UPhysicsAsset::SetPrimitiveContributeToMass
          (UPhysicsAsset *this,int param_1,Type param_2,int param_3,bool param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FKShapeElem *pFVar5;
  
  if ((param_1 < 0) || ((this->SkeletalBodySetups).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletalBodySetups.IsValidIndex(BodyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0xfa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->SkeletalBodySetups).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)param_1 * 8);
  if (*(int *)(lVar1 + 0xc0) + *(int *)(lVar1 + 0xb0) + *(int *)(lVar1 + 0xa0) +
      *(int *)(lVar1 + 0x90) + *(int *)(lVar1 + 0x80) + *(int *)(lVar1 + 0x70) +
      *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x50) + *(int *)(lVar1 + 0x40) <= param_3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_191326623939690244>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                       ,0xfc,"PrimitiveIndex < AggGeom->GetElementCount()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = FKAggregateGeom::GetElement((FKAggregateGeom *)(lVar1 + 0x38),param_2,param_3);
  pFVar5->bContributeToMass = '\0';
  pFVar5->field_0x18 = pFVar5->field_0x18 | param_4;
  return;
}

// StaticRegisterNativesUPhysicsAsset @ 148323af0

void __cdecl UPhysicsAsset::StaticRegisterNativesUPhysicsAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBodySetupIndexMap @ 148327300

void __thiscall UPhysicsAsset::UpdateBodySetupIndexMap(UPhysicsAsset *this)

{
  undefined1 *puVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [4];
  longlong local_38;
  uint *local_30;
  
  this_00 = &this->BodySetupIndexMap;
  bVar4 = 1 < *(int *)&(this->BodySetupIndexMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->BodySetupIndexMap).field_0xc;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->BodySetupIndexMap).field_0x2c;
  *(undefined4 *)&(this->BodySetupIndexMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->BodySetupIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BodySetupIndexMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->BodySetupIndexMap).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this_00);
  }
  local_res8[0] = 0;
  if (0 < (this->SkeletalBodySetups).ArrayNum) {
    do {
      uVar6 = local_res8[0];
      uVar5 = 0;
      if ((int)local_res8[0] < (this->SkeletalBodySetups).ArrayNum) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = local_res8[0];
      if (*(longlong *)
           ((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) == 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_191326623939690404>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                           ,0x5c,"SkeletalBodySetups[i]");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        uVar6 = 0;
        if ((int)local_res8[0] < (this->SkeletalBodySetups).ArrayNum) {
          uVar6 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_30 = local_res8;
        local_38 = *(longlong *)
                    ((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
                   0x28;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00,(TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2),
                   (bool *)&local_38);
      }
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (this->SkeletalBodySetups).ArrayNum);
  }
  return;
}

// UpdateBoundsBodiesArray @ 148327500

void __thiscall UPhysicsAsset::UpdateBoundsBodiesArray(UPhysicsAsset *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint local_18 [4];
  
  piVar1 = &(this->BoundsBodies).ArrayMax;
  (this->BoundsBodies).ArrayNum = 0;
  if ((this->BoundsBodies).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BoundsBodies).AllocatorInstance,0,piVar1);
  }
  local_18[0] = 0;
  if (0 < (this->SkeletalBodySetups).ArrayNum) {
    do {
      uVar6 = local_18[0];
      uVar5 = 0;
      if ((int)local_18[0] < (this->SkeletalBodySetups).ArrayNum) {
        uVar5 = ~local_18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)
           ((this->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) == 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_191326623939690418>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsAsset.cpp"
                           ,0x4e,"SkeletalBodySetups[i]");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        lVar8 = (longlong)(int)local_18[0];
        uVar6 = 0;
        if ((int)local_18[0] < (this->SkeletalBodySetups).ArrayNum) {
          uVar6 = ~local_18[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(byte *)(*(longlong *)((this->SkeletalBodySetups).AllocatorInstance.Data + lVar8 * 8)
                      + 0xd8) & 2) != 0) {
          pFVar2 = (this->BoundsBodies).AllocatorInstance.Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (this->BoundsBodies).ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->BoundsBodies).AllocatorInstance,piVar1);
          }
          (this->BoundsBodies).ArrayNum = iVar7 + 1;
          *(uint *)((this->BoundsBodies).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_18[0]
          ;
        }
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->SkeletalBodySetups).ArrayNum);
  }
  return;
}

// _getUObject @ 14832c4c0

UObject * __thiscall UPhysicsAsset::_getUObject(UPhysicsAsset *this)

{
  return (UObject *)&this[-1].ThumbnailInfo;
}

// _getUObject`adjustor{8}' @ 14832c4cc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UPhysicsAsset::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UPhysicsAsset::_getUObject_adjustor_8__(UPhysicsAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPhysicsAsset *)&this[-1].AssetUserData.ArrayNum);
  return (UObject *)pUVar1;
}

