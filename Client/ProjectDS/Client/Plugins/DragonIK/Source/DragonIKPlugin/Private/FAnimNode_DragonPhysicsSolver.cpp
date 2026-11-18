// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 10

// StaticStruct @ 14d29bba0

UScriptStruct * __cdecl FAnimNode_DragonPhysicsSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonPhysicsSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonPhysicsSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonPhysicsSolver,(UObject *)pUVar1,
                         L"AnimNode_DragonPhysicsSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonPhysicsSolver.OuterSingleton;
}

// FAnimNode_DragonPhysicsSolver @ 14d2b76c0

FAnimNode_DragonPhysicsSolver * __thiscall
FAnimNode_DragonPhysicsSolver::FAnimNode_DragonPhysicsSolver(FAnimNode_DragonPhysicsSolver *this)

{
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  this->physanim_tag_index = 1;
  this->_padding_ = (longlong)&___7FAnimNode_DragonPhysicsSolver__6B_;
  (this->character_bone_references).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->character_bone_references).ArrayNum = 0;
  (this->character_bone_references).ArrayMax = 0;
  (this->character_bone_transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->character_bone_transforms).ArrayNum = 0;
  (this->character_bone_transforms).ArrayMax = 0;
  (this->dragon_phys_component).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->dragon_phys_component).ArrayNum = 0;
  (this->dragon_phys_component).ArrayMax = 0;
  return this;
}

// EvaluateComponentSpaceInternal @ 14d2d4d90

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_DragonPhysicsSolver::EvaluateComponentSpaceInternal
          (FAnimNode_DragonPhysicsSolver *this,FComponentSpacePoseContext *param_1)

{
  TArray<UDragonIKPhysicsComponent_*,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  undefined8 *puVar2;
  AActor *this_01;
  FScriptContainerElement *pFVar3;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  bool bVar36;
  FCompactPoseBoneIndex FVar37;
  int iVar38;
  uint uVar39;
  UClass *pUVar40;
  UClass *pUVar41;
  UClass *pUVar42;
  undefined8 uVar43;
  undefined4 extraout_var_00;
  TTransform<double> *pTVar44;
  undefined7 extraout_var;
  uint uVar45;
  int iVar46;
  UClass **ppUVar47;
  longlong *plVar48;
  longlong lVar49;
  uint uVar50;
  code *pcVar51;
  longlong lVar52;
  uint uVar53;
  longlong lVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  int *local_res20;
  ForAnyElementType local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  UClass *local_108;
  UClass *local_100;
  UClass *local_f8;
  UClass *local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  
  if (this->owning_skel == (USkeletalMeshComponent *)0x0) {
    return;
  }
  local_120._0_4_ = 0;
  local_120 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  this_01 = (AActor *)this->owning_skel->_padding_;
  if (this_01 == (AActor *)0x0) goto LAB_14d2d4eec;
  pUVar40 = Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar40);
  }
  if (0x7fffffff < local_120._4_4_) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_128,0,(int *)((longlong)&local_120 + 4));
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar40 != (UClass *)0x0) goto LAB_14d2d4e4d;
LAB_14d2d4e80:
    pUVar41 = (UClass *)0x0;
  }
  else {
    if (pUVar40 == (UClass *)0x0) goto LAB_14d2d4e80;
    UE::GC::MarkAsReachable((UObject *)pUVar40);
LAB_14d2d4e4d:
    pUVar41 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar41 == (UClass *)0x0) goto LAB_14d2d4e80;
    iVar38 = (int)pUVar41->_padding_;
    if (((int)pUVar40->_padding_ < iVar38) ||
       ((longlong *)*(undefined1 **)(pUVar40->_padding_ + (longlong)iVar38 * 8) !=
        &pUVar41->_padding_)) {
      bVar36 = false;
    }
    else {
      bVar36 = true;
    }
    pUVar41 = pUVar40;
    if (!bVar36) goto LAB_14d2d4e80;
  }
  pUVar42 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar41 == pUVar42) {
    local_108 = pUVar40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar40);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
              (this_01,(TSubclassOf<UActorComponent>)&local_108,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_128);
  }
  else {
    local_100 = pUVar40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar40);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
              (this_01,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_128);
  }
LAB_14d2d4eec:
  this_00 = &this->dragon_phys_component;
  iVar38 = (int)local_120;
  if ((this->dragon_phys_component).ArrayNum != (int)local_120) {
    TArray<UDragonIKPhysicsComponent_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,(int)local_120,Default);
    iVar38 = (int)local_120;
  }
  dVar35 = __real_3f1a36e2e0000000;
  uVar34 = _UNK_15061cc8c;
  uVar33 = _UNK_15061cc88;
  uVar32 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar31 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar53 = 0;
  if (0 < iVar38) {
    local_118 = 0;
    local_110 = 0;
    do {
      lVar49 = local_110;
      lVar54 = local_118;
      uVar50 = 0;
      if ((int)uVar53 < iVar38) {
        uVar50 = ~uVar53 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar51 = (code *)swi(3);
        (*pcVar51)();
        return;
      }
      lVar49 = *(longlong *)(local_128.Data + lVar49);
      if (lVar49 == 0) {
LAB_14d2d500b:
        lVar49 = 0;
      }
      else {
        pUVar40 = Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
        iVar38 = (int)pUVar40->_padding_;
        if ((*(int *)(*(longlong *)(lVar49 + 0x10) + 0x38) < iVar38) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar49 + 0x10) + 0x30) + (longlong)iVar38 * 8) !=
            &pUVar40->_padding_)) goto LAB_14d2d500b;
      }
      uVar50 = 0;
      if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
        uVar50 = ~uVar53 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar51 = (code *)swi(3);
        (*pcVar51)();
        return;
      }
      *(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8) = lVar49;
      uVar50 = 0;
      if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
        uVar50 = ~uVar53 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar51 = (code *)swi(3);
        (*pcVar51)();
        return;
      }
      if (*(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8) == 0) {
LAB_14d2d51b7:
        plVar48 = (longlong *)this->owning_skel->_padding_;
        pcVar51 = *(code **)(*plVar48 + 0x738);
        local_f0 = Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_f0);
        }
        ppUVar47 = &local_f0;
LAB_14d2d51f4:
        uVar43 = (*pcVar51)(plVar48,ppUVar47);
        uVar50 = 0;
        if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
          uVar50 = ~uVar53 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar51 = (code *)swi(3);
          (*pcVar51)();
          return;
        }
        *(undefined8 *)((this_00->AllocatorInstance).Data + lVar54 * 8) = uVar43;
      }
      else {
        uVar50 = 0;
        if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
          uVar50 = ~uVar53 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar51 = (code *)swi(3);
          (*pcVar51)();
          return;
        }
        if (*(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8) == 0) goto LAB_14d2d51b7;
        uVar50 = 0;
        if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
          uVar50 = ~uVar53 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar51 = (code *)swi(3);
          (*pcVar51)();
          return;
        }
        if (*(int *)(*(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8) + 200) == 0) {
          plVar48 = (longlong *)this->owning_skel->_padding_;
          pcVar51 = *(code **)(*plVar48 + 0x738);
          local_f8 = Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_f8);
          }
          ppUVar47 = &local_f8;
          goto LAB_14d2d51f4;
        }
      }
      uVar50 = 0;
      if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
        uVar50 = ~uVar53 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar51 = (code *)swi(3);
        (*pcVar51)();
        return;
      }
      if (*(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8) != 0) {
        uVar50 = 0;
        if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
          uVar50 = ~uVar53 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar51 = (code *)swi(3);
          (*pcVar51)();
          return;
        }
        if (((*(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8) != 0) &&
            (piVar1 = &(this->character_bone_references).ArrayNum, 0 < *piVar1)) &&
           (0 < (this->character_bone_transforms).ArrayNum)) {
          uVar50 = 0;
          if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
            uVar50 = ~uVar53 >> 0x1f;
          }
          local_res20 = piVar1;
          if ((uVar50 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar51 = (code *)swi(3);
            (*pcVar51)();
            return;
          }
          if ((*(int *)(*(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8) + 0xe0) ==
               this->physanim_tag_index) && (uVar50 = 0, 0 < *piVar1)) {
            lVar49 = 0;
            lVar52 = 0;
            do {
              uVar39 = 0;
              if ((int)uVar50 < (this->character_bone_references).ArrayNum) {
                uVar39 = ~uVar50 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar51 = (code *)swi(3);
                (*pcVar51)();
                return;
              }
              pFVar3 = (this->character_bone_references).AllocatorInstance.Data;
              if ((-1 < *(int *)(pFVar3 + lVar52 + 8)) && (*(int *)(pFVar3 + lVar52 + 0xc) != -1)) {
                uVar39 = 0;
                if ((int)uVar50 < (this->character_bone_references).ArrayNum) {
                  uVar39 = ~uVar50 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar51 = (code *)swi(3);
                  (*pcVar51)();
                  return;
                }
                FVar37 = FBoneReference::GetCompactPoseIndex
                                   ((FBoneReference *)
                                    ((this->character_bone_references).AllocatorInstance.Data +
                                    (longlong)(int)uVar50 * 0x10),(FBoneContainer *)&stack0x00000018
                                   );
                pTVar44 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                    (&param_1->Pose,
                                     *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar37));
                dVar9 = (pTVar44->Rotation).XY.m128d_f64[0];
                dVar10 = (pTVar44->Rotation).XY.m128d_f64[1];
                dVar55 = (pTVar44->Rotation).ZW.m128d_f64[0];
                dVar56 = (pTVar44->Rotation).ZW.m128d_f64[1];
                dVar14 = (pTVar44->Translation).XY.m128d_f64[0];
                dVar15 = (pTVar44->Translation).XY.m128d_f64[1];
                dVar57 = (pTVar44->Translation).ZW.m128d_f64[0];
                dVar58 = (pTVar44->Translation).ZW.m128d_f64[1];
                dVar16 = (pTVar44->Scale3D).XY.m128d_f64[0];
                dVar17 = (pTVar44->Scale3D).XY.m128d_f64[1];
                dVar18 = (pTVar44->Scale3D).ZW.m128d_f64[0];
                dVar19 = (pTVar44->Scale3D).ZW.m128d_f64[1];
                uVar39 = 0;
                if ((int)uVar50 < (this->character_bone_transforms).ArrayNum) {
                  uVar39 = ~uVar50 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar51 = (code *)swi(3);
                  (*pcVar51)();
                  return;
                }
                pFVar3 = (this->character_bone_transforms).AllocatorInstance.Data;
                uVar45 = ~uVar50 >> 0x1f;
                *(double *)(pFVar3 + lVar49) = dVar9;
                *(double *)(pFVar3 + lVar49 + 8) = dVar10;
                *(double *)(pFVar3 + lVar49 + 0x10) = dVar55;
                *(double *)(pFVar3 + lVar49 + 0x10 + 8) = dVar56;
                *(double *)(pFVar3 + lVar49 + 0x20) = dVar14;
                *(double *)(pFVar3 + lVar49 + 0x20 + 8) = dVar15;
                *(double *)(pFVar3 + lVar49 + 0x30) = dVar57;
                *(double *)(pFVar3 + lVar49 + 0x30 + 8) = dVar58;
                *(double *)(pFVar3 + lVar49 + 0x40) = dVar16;
                *(double *)(pFVar3 + lVar49 + 0x40 + 8) = dVar17;
                *(double *)(pFVar3 + lVar49 + 0x50) = dVar18;
                *(double *)(pFVar3 + lVar49 + 0x50 + 8) = dVar19;
                uVar39 = 0;
                if ((int)uVar50 < (this->character_bone_transforms).ArrayNum) {
                  uVar39 = uVar45;
                }
                if (uVar39 == 0) {
                  uVar45 = 0x506106c8;
                  bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  uVar39 = (uint)CONCAT71(extraout_var,bVar36);
                  if (bVar36) {
                    pcVar51 = (code *)swi(3);
                    (*pcVar51)();
                    return;
                  }
                }
                pFVar3 = (this->character_bone_transforms).AllocatorInstance.Data;
                local_e8 = dVar35;
                dVar55 = *(double *)(pFVar3 + lVar49 + 0x30) -
                         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
                dVar56 = *(double *)(pFVar3 + lVar49 + 0x30 + 8) -
                         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
                dVar9 = *(double *)(pFVar3 + lVar49 + 0x20) -
                        UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
                dVar10 = *(double *)(pFVar3 + lVar49 + 0x20 + 8) -
                         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
                lVar54 = -(ulonglong)
                          (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar34,
                                                     SUB84(dVar56,0) & uVar33));
                auVar11._8_4_ = (int)lVar54;
                auVar11._0_8_ =
                     -(ulonglong)
                      (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) & uVar32,
                                                 SUB84(dVar55,0) & uVar31));
                auVar11._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                uVar45 = movmskpd(uVar45,auVar11);
                lVar54 = -(ulonglong)
                          (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar34,
                                                     SUB84(dVar10,0) & uVar33));
                auVar4._8_4_ = (int)lVar54;
                auVar4._0_8_ = -(ulonglong)
                                (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar32
                                                           ,SUB84(dVar9,0) & uVar31));
                auVar4._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                iVar38 = movmskpd(uVar39,auVar4);
                if ((uVar45 & 0x3fffffff) == 0 && iVar38 == 0) {
                  dVar14 = *(double *)(pFVar3 + lVar49 + 0x10);
                  dVar15 = *(double *)(pFVar3 + lVar49 + 0x10 + 8);
                  dVar55 = *(double *)(pFVar3 + lVar49);
                  dVar56 = *(double *)(pFVar3 + lVar49 + 8);
                  local_e0 = dVar35;
                  dVar57 = dVar14 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
                  dVar58 = dVar15 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
                  dVar14 = dVar14 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
                  dVar15 = dVar15 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
                  dVar9 = dVar55 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
                  dVar10 = dVar56 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
                  dVar55 = dVar55 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
                  dVar56 = dVar56 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
                  lVar54 = -(ulonglong)
                            (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & uVar34,
                                                       SUB84(dVar58,0) & uVar33));
                  auVar5._8_4_ = (int)lVar54;
                  auVar5._0_8_ = -(ulonglong)
                                  (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) &
                                                             uVar32,SUB84(dVar57,0) & uVar31));
                  auVar5._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                  iVar46 = movmskpd(0,auVar5);
                  lVar54 = -(ulonglong)
                            (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar34,
                                                       SUB84(dVar10,0) & uVar33));
                  auVar8._8_4_ = (int)lVar54;
                  auVar8._0_8_ = -(ulonglong)
                                  (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                                             uVar32,SUB84(dVar9,0) & uVar31));
                  auVar8._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                  uVar39 = movmskpd(iVar38,auVar8);
                  uVar45 = iVar46 << 2 | uVar39;
                  if (uVar45 != 0) {
                    lVar54 = -(ulonglong)
                              (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar34,
                                                         SUB84(dVar15,0) & uVar33));
                    auVar13._8_4_ = (int)lVar54;
                    auVar13._0_8_ =
                         -(ulonglong)
                          (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar32,
                                                     SUB84(dVar14,0) & uVar31));
                    auVar13._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                    uVar45 = movmskpd(uVar45,auVar13);
                    lVar54 = -(ulonglong)
                              (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar34,
                                                         SUB84(dVar56,0) & uVar33));
                    auVar6._8_4_ = (int)lVar54;
                    auVar6._0_8_ = -(ulonglong)
                                    (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) &
                                                               uVar32,SUB84(dVar55,0) & uVar31));
                    auVar6._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                    uVar39 = movmskpd(uVar39,auVar6);
                    if ((uVar45 & 0x3fffffff) != 0 || uVar39 != 0) goto LAB_14d2d56b0;
                  }
                  dVar55 = *(double *)(pFVar3 + lVar49 + 0x50) -
                           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
                  dVar56 = *(double *)(pFVar3 + lVar49 + 0x50 + 8) -
                           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
                  dVar9 = *(double *)(pFVar3 + lVar49 + 0x40) -
                          UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
                  dVar10 = *(double *)(pFVar3 + lVar49 + 0x40 + 8) -
                           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
                  local_d8 = dVar35;
                  lVar54 = -(ulonglong)
                            (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar34,
                                                       SUB84(dVar56,0) & uVar33));
                  auVar12._8_4_ = (int)lVar54;
                  auVar12._0_8_ =
                       -(ulonglong)
                        (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) & uVar32,
                                                   SUB84(dVar55,0) & uVar31));
                  auVar12._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                  uVar45 = movmskpd(0,auVar12);
                  lVar54 = -(ulonglong)
                            (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar34,
                                                       SUB84(dVar10,0) & uVar33));
                  auVar7._8_4_ = (int)lVar54;
                  auVar7._0_8_ = -(ulonglong)
                                  (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                                             uVar32,SUB84(dVar9,0) & uVar31));
                  auVar7._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
                  iVar38 = movmskpd(uVar39,auVar7);
                  if ((uVar45 & 0x3fffffff) != 0 || iVar38 != 0) goto LAB_14d2d56b0;
                }
                else {
LAB_14d2d56b0:
                  uVar39 = 0;
                  if ((int)uVar50 < (this->character_bone_references).ArrayNum) {
                    uVar39 = ~uVar50 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar36)) {
                    pcVar51 = (code *)swi(3);
                    (*pcVar51)();
                    return;
                  }
                  FVar37 = *(FCompactPoseBoneIndex *)
                            ((this->character_bone_references).AllocatorInstance.Data + lVar52 + 0xc
                            );
                  uVar39 = 0;
                  if ((int)uVar50 < (this->character_bone_transforms).ArrayNum) {
                    uVar39 = ~uVar50 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar36)) {
                    pcVar51 = (code *)swi(3);
                    (*pcVar51)();
                    return;
                  }
                  FAnimationRuntime::ConvertCSTransformToBoneSpace
                            ((TTransform<double> *)&this->owning_skel->_padding_,&param_1->Pose,
                             (TTransform<double> *)
                             ((this->character_bone_transforms).AllocatorInstance.Data +
                             (longlong)(int)uVar50 * 0x60),FVar37,BCS_WorldSpace);
                }
                uVar39 = 0;
                if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
                  uVar39 = ~uVar53 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar51 = (code *)swi(3);
                  (*pcVar51)();
                  return;
                }
                lVar54 = local_118;
                if ((int)uVar50 <
                    *(int *)(*(longlong *)((this_00->AllocatorInstance).Data + local_118 * 8) + 200)
                   ) {
                  uVar39 = 0;
                  if ((int)uVar50 < (this->character_bone_transforms).ArrayNum) {
                    uVar39 = ~uVar50 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar36)) {
                    pcVar51 = (code *)swi(3);
                    (*pcVar51)();
                    return;
                  }
                  pFVar3 = (this->character_bone_transforms).AllocatorInstance.Data;
                  uVar43 = *(undefined8 *)(pFVar3 + lVar49);
                  uVar20 = *(undefined8 *)(pFVar3 + lVar49 + 8);
                  uVar21 = *(undefined8 *)(pFVar3 + lVar49 + 0x10);
                  uVar22 = *(undefined8 *)(pFVar3 + lVar49 + 0x10 + 8);
                  uVar23 = *(undefined8 *)(pFVar3 + lVar49 + 0x20);
                  uVar24 = *(undefined8 *)(pFVar3 + lVar49 + 0x20 + 8);
                  uVar25 = *(undefined8 *)(pFVar3 + lVar49 + 0x30);
                  uVar26 = *(undefined8 *)(pFVar3 + lVar49 + 0x30 + 8);
                  uVar27 = *(undefined8 *)(pFVar3 + lVar49 + 0x40);
                  uVar28 = *(undefined8 *)(pFVar3 + lVar49 + 0x40 + 8);
                  uVar29 = *(undefined8 *)(pFVar3 + lVar49 + 0x50);
                  uVar30 = *(undefined8 *)(pFVar3 + lVar49 + 0x50 + 8);
                  uVar39 = 0;
                  if ((int)uVar53 < (this->dragon_phys_component).ArrayNum) {
                    uVar39 = ~uVar53 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar36)) {
                    pcVar51 = (code *)swi(3);
                    (*pcVar51)();
                    return;
                  }
                  lVar54 = *(longlong *)((this_00->AllocatorInstance).Data + lVar54 * 8);
                  uVar39 = 0;
                  if ((int)uVar50 < *(int *)(lVar54 + 200)) {
                    uVar39 = ~uVar50 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar36)) {
                    pcVar51 = (code *)swi(3);
                    (*pcVar51)();
                    return;
                  }
                  lVar54 = *(longlong *)(lVar54 + 0xc0);
                  *(undefined8 *)(lVar54 + lVar49) = uVar43;
                  ((undefined8 *)(lVar54 + lVar49))[1] = uVar20;
                  puVar2 = (undefined8 *)(lVar54 + 0x10 + lVar49);
                  *puVar2 = uVar21;
                  puVar2[1] = uVar22;
                  puVar2 = (undefined8 *)(lVar54 + 0x20 + lVar49);
                  *puVar2 = uVar23;
                  puVar2[1] = uVar24;
                  puVar2 = (undefined8 *)(lVar54 + 0x30 + lVar49);
                  *puVar2 = uVar25;
                  puVar2[1] = uVar26;
                  puVar2 = (undefined8 *)(lVar54 + 0x40 + lVar49);
                  *puVar2 = uVar27;
                  puVar2[1] = uVar28;
                  puVar2 = (undefined8 *)(lVar54 + 0x50 + lVar49);
                  *puVar2 = uVar29;
                  puVar2[1] = uVar30;
                }
              }
              uVar50 = uVar50 + 1;
              lVar52 = lVar52 + 0x10;
              lVar49 = lVar49 + 0x60;
              lVar54 = local_118;
            } while ((int)uVar50 < *local_res20);
          }
        }
      }
      local_118 = lVar54 + 1;
      local_110 = local_110 + 8;
      uVar53 = uVar53 + 1;
      iVar38 = (int)local_120;
    } while ((int)uVar53 < (int)local_120);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d2dbf50

void __thiscall
FAnimNode_DragonPhysicsSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonPhysicsSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// Evaluate_AnyThread @ 14d2dd240

void __thiscall
FAnimNode_DragonPhysicsSolver::Evaluate_AnyThread
          (FAnimNode_DragonPhysicsSolver *this,FPoseContext *param_1)

{
  return;
}

// GetLODThreshold @ 14d2f22b0

int __thiscall FAnimNode_DragonPhysicsSolver::GetLODThreshold(FAnimNode_DragonPhysicsSolver *this)

{
  return (int)this->_padding_;
}

// InitializeBoneReferences @ 14d2fb780

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
FAnimNode_DragonPhysicsSolver::InitializeBoneReferences
          (FAnimNode_DragonPhysicsSolver *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  FName *pFVar5;
  AActor *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  UWorld *pUVar11;
  int iVar12;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  uint uStack_30;
  FCompactPoseBoneIndex FStack_2c;
  
  pTVar2 = &this->character_bone_references;
  iVar12 = 0;
  piVar1 = &(this->character_bone_references).ArrayMax;
  (this->character_bone_references).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  this_00 = (AActor *)this->owning_skel->_padding_;
  if (this_00 != (AActor *)0x0) {
    pUVar11 = AActor::GetWorld(this_00);
    if (pUVar11 != (UWorld *)0x0) {
      piVar3 = &(this->character_bone_transforms).ArrayNum;
      piVar4 = &(this->character_bone_transforms).ArrayMax;
      *piVar3 = 0;
      if (*piVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(this->character_bone_transforms).AllocatorInstance,0,piVar4);
      }
      iVar10 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skel);
      if (0 < iVar10) {
        do {
          local_38 = (undefined1  [8])
                     USkinnedMeshComponent::GetBoneName
                               ((USkinnedMeshComponent *)this->owning_skel,(int)local_res8);
          local_38 = *(undefined1 (*) [8])local_38;
          uStack_30 = 0x7fffffff;
          FStack_2c = (FCompactPoseBoneIndex)0xffffffff;
          FBoneReference::Initialize((FBoneReference *)local_38,param_1);
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar6 <= (FScriptContainerElement *)local_38) &&
             ((FScriptContainerElement *)local_38 < pFVar6 + (longlong)*piVar1 * 0x10)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar10 = (this->character_bone_references).ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar2->AllocatorInstance,piVar1);
          }
          FVar8.Number = (uint)FStack_2c;
          FVar8.ComparisonIndex.Value = uStack_30;
          iVar12 = iVar12 + 1;
          (this->character_bone_references).ArrayNum = iVar10 + 1;
          pFVar5 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10);
          pFVar5->ComparisonIndex = (FNameEntryId)local_38._0_4_;
          pFVar5->Number = local_38._4_4_;
          pFVar5[1] = FVar8;
          iVar10 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skel);
        } while (iVar12 < iVar10);
      }
      iVar12 = (this->character_bone_references).ArrayNum;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x60,0x10,iVar12,&(this->character_bone_transforms).AllocatorInstance,
                          piVar3,piVar4);
      DefaultConstructItems<UE::Math::TTransform<double>,int>
                ((this->character_bone_transforms).AllocatorInstance.Data + (longlong)iVar10 * 0x60,
                 iVar12);
    }
  }
  return;
}

// Initialize_AnyThread @ 14d300260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_DragonPhysicsSolver::Initialize_AnyThread
          (FAnimNode_DragonPhysicsSolver *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x158) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2821110184175206020>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                       ,0x17c,"SkeletalMeshComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->owning_skel = *(USkeletalMeshComponent **)(lVar1 + 0x158);
  TArray<UDragonIKPhysicsComponent_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->dragon_phys_component,3,Default);
  return;
}

// IsValidToEvaluate @ 14d300e10

bool __thiscall
FAnimNode_DragonPhysicsSolver::IsValidToEvaluate
          (FAnimNode_DragonPhysicsSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  return true;
}

// UpdateInternal @ 14d320af0

void __thiscall
FAnimNode_DragonPhysicsSolver::UpdateInternal
          (FAnimNode_DragonPhysicsSolver *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  return;
}

