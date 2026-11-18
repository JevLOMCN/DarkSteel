// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 1467ce030

UClass * __cdecl UMovieSceneMaterialParameterEvaluationSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterEvaluationSystem",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterEvaluationSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterEvaluationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterEvaluationSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.InnerSingleton;
}

// UMovieSceneMaterialParameterEvaluationSystem @ 146809d60

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneMaterialParameterEvaluationSystem * __thiscall
UMovieSceneMaterialParameterEvaluationSystem::UMovieSceneMaterialParameterEvaluationSystem
          (UMovieSceneMaterialParameterEvaluationSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneMaterialParameterEvaluationSystem__6B_;
  return this;
}

// UMovieSceneMaterialParameterEvaluationSystem @ 146809d90

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneMaterialParameterEvaluationSystem * __thiscall
UMovieSceneMaterialParameterEvaluationSystem::UMovieSceneMaterialParameterEvaluationSystem
          (UMovieSceneMaterialParameterEvaluationSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  uint uVar4;
  TComponentTypeID<double> *pTVar5;
  UObject *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneMaterialParameterEvaluationSystem__6B_;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)&this->field_0x30 = pFVar3->BoundMaterial;
  this->field_0x32 = 8;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = *(ushort *)&pFVar3->BoundMaterial;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    uVar4 = 0;
    pTVar5 = pFVar2->DoubleResult;
    do {
      local_res8 = *(UObject **)&this->field_0x10;
      FVar1.Value = *(ushort *)pTVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      uVar4 = uVar4 + 1;
      pTVar5 = pTVar5 + 1;
    } while (uVar4 < 9);
    local_res8 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneMaterialParameterEvaluationSystem @ 14680f770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterEvaluationSystem::~UMovieSceneMaterialParameterEvaluationSystem
          (UMovieSceneMaterialParameterEvaluationSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneMaterialParameterEvaluationSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836060

UClass * __cdecl UMovieSceneMaterialParameterEvaluationSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialParameterEvaluationSystem",
               &Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneMaterialParameterEvaluationSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMaterialParameterEvaluationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialParameterEvaluationSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialParameterEvaluationSystem.InnerSingleton;
}

// OnRun @ 146845e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialParameterEvaluationSystem::OnRun
          (UMovieSceneMaterialParameterEvaluationSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FComponentTypeID *pFVar1;
  TComponentTypeID<double> *pTVar2;
  int iVar3;
  TComponentTypeID<FMaterialParameterInfo> TVar4;
  TComponentTypeID<FName> TVar5;
  TTypeCompatibleBytes<unsigned_int> TVar6;
  undefined6 uVar7;
  TComponentTypeID<double> *pTVar8;
  TComponentTypeID<double> *pTVar9;
  TComponentTypeID<double> *pTVar10;
  undefined1 auVar11 [8];
  bool bVar12;
  FBuiltInComponentTypes *pFVar13;
  FMovieSceneTracksComponentTypes *pFVar14;
  FComponentMask *pFVar15;
  byte bVar16;
  undefined1 auStack_258 [32];
  FSystemSubsequentTasks *local_238;
  FComponentTypeID local_228;
  FComponentTypeID aFStack_226 [7];
  undefined8 local_218;
  TStatIdData *pTStack_210;
  byte local_208;
  undefined7 uStack_207;
  undefined4 uStack_200;
  uchar auStack_1fc [4];
  undefined1 local_1f8 [8];
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  undefined8 uStack_1e0;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  TComponentTypeID<double> TStack_1ce;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined6 local_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  uchar auStack_1b8 [8];
  uchar local_1b0 [8];
  TStatIdData *pTStack_1a8;
  ulonglong local_1a0;
  uchar auStack_198 [4];
  uchar auStack_194 [4];
  undefined1 local_188 [2];
  undefined1 auStack_186 [14];
  undefined1 local_178 [8];
  TStatIdData *pTStack_170;
  ulonglong local_168;
  undefined1 auStack_160 [8];
  undefined1 local_158 [48];
  TTypeCompatibleBytes<unsigned_int> local_128;
  TTypeCompatibleBytes<unsigned_int> local_124;
  undefined1 local_120 [48];
  TTypeCompatibleBytes<unsigned_int> local_f0;
  TTypeCompatibleBytes<unsigned_int> local_ec;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TTypeCompatibleBytes<unsigned_int> local_d8;
  TTypeCompatibleBytes<unsigned_int> local_d4;
  ForAnyElementType local_d0;
  undefined1 local_c8 [36];
  TTypeCompatibleBytes<unsigned_int> local_a4;
  TTypeCompatibleBytes<unsigned_int> local_90;
  TTypeCompatibleBytes<unsigned_int> local_8c;
  TTypeCompatibleBytes<unsigned_int> local_70;
  TTypeCompatibleBytes<unsigned_int> local_6c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  pFVar13 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_1e8 = (undefined1  [8])pFVar13;
  pFVar14 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  TVar4 = pFVar14->ScalarMaterialParameterInfo;
  pFVar15 = UE::MovieScene::FEntityManager::GetAccumulatedMask
                      ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28));
  if (((TVar4 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
      ((pFVar15->Bits).NumBits <= (int)(uint)(ushort)TVar4)) ||
     ((*(uint *)(pFVar15->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
       ((ushort)TVar4 & 0x1f) & 1) == 0)) {
    TVar5 = pFVar14->ScalarParameterName;
    pFVar15 = UE::MovieScene::FEntityManager::GetAccumulatedMask
                        ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28));
    if (((TVar5 == (TComponentTypeID<FName>)0xffff) ||
        ((pFVar15->Bits).NumBits <= (int)(uint)(ushort)TVar5)) ||
       ((*(uint *)(pFVar15->Bits).AllocatorInstance.InlineData[(ushort)TVar5 >> 5].Pad >>
         ((ushort)TVar5 & 0x1f) & 1) == 0)) goto LAB_1468460f2;
  }
  pTStack_210 = &TStatId::TStatId_NAME_None;
  local_1d8 = pFVar14->BoundMaterial;
  local_1f8._2_2_ = 0x7fff;
  local_1f8._0_2_ = pFVar14->ScalarMaterialParameterInfo;
  uStack_1d6._4_2_ = pFVar14->ScalarParameterName;
  uStack_1d6._0_4_ = local_1f8._0_4_;
  local_1f8._6_2_ = 0x7fff;
  local_1f8._0_6_ = uStack_1d6;
  uStack_1d0 = 0x7fff;
  TStack_1ce = pFVar13->DoubleResult[0];
  unique0x1000056c = uStack_1d6;
  local_188 = local_1d8;
  auStack_186._8_2_ = TStack_1ce;
  auStack_186._6_2_ = 0x7fff;
  auStack_186._10_4_ = uStack_1cc;
  local_228.Value = *(ushort *)&pFVar13->BlendChannelInput;
  local_218 = 0;
  uStack_200 = 0x6ff;
  auStack_1fc = (uchar  [4])((uint)auStack_1fc & 0xffffff00);
  local_168 = CONCAT71(uStack_207,local_208) & 0xffffffffffffffe0;
  auStack_160._0_4_ = 0x6ff;
  auStack_160[4] = auStack_1fc[0];
  auStack_160[5] = auStack_1fc[1];
  auStack_160[6] = auStack_1fc[2];
  auStack_160[7] = auStack_1fc[3];
  local_178 = (undefined1  [8])0x0;
  pTStack_170 = &TStatId::TStatId_NAME_None;
  local_128.Pad[0] = '\0';
  local_128.Pad[1] = '\0';
  local_128.Pad[2] = '\0';
  local_128.Pad[3] = '\0';
  local_124.Pad[0] = 0x80;
  local_124.Pad[1] = '\x01';
  local_124.Pad[2] = '\0';
  local_124.Pad[3] = '\0';
  local_f0.Pad[0] = '\0';
  local_f0.Pad[1] = '\0';
  local_f0.Pad[2] = '\0';
  local_f0.Pad[3] = '\0';
  local_ec.Pad[0] = 0x80;
  local_ec.Pad[1] = '\x01';
  local_ec.Pad[2] = '\0';
  local_ec.Pad[3] = '\0';
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  local_c8[0x20] = '\0';
  local_c8[0x21] = '\0';
  local_c8[0x22] = '\0';
  local_c8[0x23] = '\0';
  local_a4.Pad[0] = 0x80;
  local_a4.Pad[1] = '\x01';
  local_a4.Pad[2] = '\0';
  local_a4.Pad[3] = '\0';
  local_70.Pad[0] = '\0';
  local_70.Pad[1] = '\0';
  local_70.Pad[2] = '\0';
  local_70.Pad[3] = '\0';
  local_6c.Pad[0] = 0x80;
  local_6c.Pad[1] = '\x01';
  local_6c.Pad[2] = '\0';
  local_6c.Pad[3] = '\0';
  local_208 = local_208 & 0xe0;
  UE::MovieScene::AddAccessorToFilter
            ((FComponentAccess *)local_188,(FEntityComponentFilter *)local_158);
  UE::MovieScene::AddAccessorToFilter<FMaterialParameterInfo,FName>
            ((TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName> *)(local_188 + 2),
             (FEntityComponentFilter *)local_158);
  UE::MovieScene::AddAccessorToFilter
            ((FComponentAccess *)(auStack_186 + 8),(FEntityComponentFilter *)local_158);
  local_1f8 = (undefined1  [8])&local_228;
  uStack_1f0 = aFStack_226;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)local_120,
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_1f8);
  auStack_160._0_4_ = *(int *)(*(longlong *)&this->field_0x28 + 0x2cc);
  if ((auStack_160._0_4_ == 1) || (auStack_160._0_4_ == 0x101)) {
    bVar16 = 1;
  }
  else {
    bVar16 = 0;
  }
  local_168 = CONCAT71(local_168._1_7_,(byte)local_168 & 0xfe | bVar16);
  local_238 = param_2;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
  ::Dispatch_PerAllocation<UE::MovieScene::FApplyScalarParameters>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName>,UE::MovieScene::TReadAccess<double>_>
              *)local_188,(FEntityManager *)local_1f8,
             (FSystemTaskPrerequisites *)(*(longlong *)&this->field_0x28 + 0x28),
             (FSystemSubsequentTasks *)param_1);
  auVar11 = local_1f8;
  if (local_1f8 != (undefined1  [8])0x0) {
    LOCK();
    pFVar1 = (FComponentTypeID *)((longlong)local_1f8 + 0x30);
    iVar3 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)auVar11)();
    }
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
LAB_1468460f2:
  TVar4 = pFVar14->VectorMaterialParameterInfo;
  pFVar15 = UE::MovieScene::FEntityManager::GetAccumulatedMask
                      ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28));
  if (((TVar4 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
      ((pFVar15->Bits).NumBits <= (int)(uint)(ushort)TVar4)) ||
     ((*(uint *)(pFVar15->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
       ((ushort)TVar4 & 0x1f) & 1) == 0)) {
    TVar4 = pFVar14->ColorMaterialParameterInfo;
    pFVar15 = UE::MovieScene::FEntityManager::GetAccumulatedMask
                        ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28));
    if (((TVar4 == (TComponentTypeID<FMaterialParameterInfo>)0xffff) ||
        ((pFVar15->Bits).NumBits <= (int)(uint)(ushort)TVar4)) ||
       ((*(uint *)(pFVar15->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
         ((ushort)TVar4 & 0x1f) & 1) == 0)) {
      TVar5 = pFVar14->VectorParameterName;
      pFVar15 = UE::MovieScene::FEntityManager::GetAccumulatedMask
                          ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28));
      if ((((TVar5 == (TComponentTypeID<FName>)0xffff) ||
           ((pFVar15->Bits).NumBits <= (int)(uint)(ushort)TVar5)) ||
          ((*(uint *)(pFVar15->Bits).AllocatorInstance.InlineData[(ushort)TVar5 >> 5].Pad >>
            ((ushort)TVar5 & 0x1f) & 1) == 0)) &&
         (bVar12 = UE::MovieScene::FEntityManager::ContainsComponent
                             ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),
                              (FComponentTypeID)*(ushort *)&pFVar14->ColorParameterName), !bVar12))
      {
        return;
      }
    }
  }
  pTStack_210 = &TStatId::TStatId_NAME_None;
  TStack_1ce = *(TComponentTypeID<double> *)&pFVar14->VectorParameterName;
  pTVar2 = (TComponentTypeID<double> *)((longlong)local_1e8 + 0xce);
  pTVar8 = (TComponentTypeID<double> *)((longlong)local_1e8 + 0xce);
  pTVar9 = (TComponentTypeID<double> *)((longlong)local_1e8 + 0xce);
  pTVar10 = (TComponentTypeID<double> *)((longlong)local_1e8 + 0xce);
  local_1d8 = pFVar14->BoundMaterial;
  local_218 = 0;
  auStack_1fc = (uchar  [4])((uint)auStack_1fc & 0xffffff00);
  local_228.Value = *(ushort *)((longlong)local_1e8 + 0x6a);
  local_1f8._2_2_ = 0x7fff;
  local_1f8._0_2_ = pFVar14->VectorMaterialParameterInfo;
  uStack_1d6._4_2_ = pFVar14->ColorMaterialParameterInfo;
  uStack_1d6._0_4_ = local_1f8._0_4_;
  local_1f8._6_2_ = 0x7fff;
  local_1f8._0_6_ = uStack_1d6;
  uStack_1f0._0_4_ = CONCAT22(0x7fff,TStack_1ce);
  uVar7 = CONCAT24(pFVar14->ColorParameterName,(undefined4)uStack_1f0);
  uStack_1f0 = (FComponentTypeID *)CONCAT26(0x7fff,uVar7);
  local_1e8._2_2_ = 0x7fff;
  local_1e8._0_2_ = *pTVar2;
  local_1c6._4_2_ = pTVar8[1];
  local_1c6._0_4_ = local_1e8._0_4_;
  local_1e8._6_2_ = 0x7fff;
  local_1e8._0_6_ = local_1c6;
  uStack_1d0 = 0x7fff;
  uStack_1cc = (undefined4)((uint6)uVar7 >> 0x10);
  uStack_1c8 = 0x7fff;
  uStack_1e0._2_2_ = 0x7fff;
  uStack_1e0._0_2_ = pTVar9[2];
  uStack_1be._4_2_ = pTVar10[3];
  uStack_1be._0_4_ = (undefined4)uStack_1e0;
  uStack_1e0 = (FComponentTypeID *)CONCAT26(0x7fff,uStack_1be);
  local_120[0x10] = '\0';
  local_120[0x11] = '\0';
  local_120[0x12] = '\0';
  local_120[0x13] = '\0';
  local_1b0[0] = '\0';
  local_1b0[1] = '\0';
  local_1b0[2] = '\0';
  local_1b0[3] = '\0';
  local_1b0[4] = '\0';
  local_1b0[5] = '\0';
  local_1b0[6] = '\0';
  local_1b0[7] = '\0';
  pTStack_1a8 = &TStatId::TStatId_NAME_None;
  local_d8.Pad[0] = '\0';
  local_d8.Pad[1] = '\0';
  local_d8.Pad[2] = '\0';
  local_d8.Pad[3] = '\0';
  unique0x10000574 = uStack_1d6;
  local_188 = local_1d8;
  auStack_186._8_2_ = TStack_1ce;
  auStack_186._6_2_ = 0x7fff;
  auStack_186._10_4_ = uStack_1cc;
  uStack_1c0 = 0x7fff;
  auStack_1b8[0] = 0xff;
  auStack_1b8[1] = '\x7f';
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_178._2_6_ = local_1c6;
  local_178._0_2_ = 0x7fff;
  pTStack_170._2_6_ = uStack_1be;
  pTStack_170._0_2_ = 0x7fff;
  local_168._2_1_ = auStack_1b8[2];
  local_168._3_1_ = auStack_1b8[3];
  local_168._4_1_ = auStack_1b8[4];
  local_168._5_1_ = auStack_1b8[5];
  local_168._6_1_ = auStack_1b8[6];
  local_168._7_1_ = auStack_1b8[7];
  local_168._0_2_ = 0x7fff;
  local_c8._0_8_ = 0;
  local_90.Pad[0] = '\0';
  local_90.Pad[1] = '\0';
  local_90.Pad[2] = '\0';
  local_90.Pad[3] = '\0';
  local_58 = 0;
  uStack_200 = 0x6ff;
  local_1a0 = CONCAT71(uStack_207,local_208) & 0xffffffffffffffe0;
  local_158[0x10] = 0xff;
  local_158[0x11] = '\x06';
  local_158[0x12] = '\0';
  local_158[0x13] = '\0';
  local_158[0x14] = auStack_1fc[0];
  local_158[0x15] = auStack_1fc[1];
  local_158[0x16] = auStack_1fc[2];
  local_158[0x17] = auStack_1fc[3];
  auStack_160 = (undefined1  [8])0x0;
  local_120[0x14] = 0x80;
  local_120[0x15] = '\x01';
  local_120[0x16] = '\0';
  local_120[0x17] = '\0';
  local_158._0_8_ = &TStatId::TStatId_NAME_None;
  local_d4.Pad[0] = 0x80;
  local_d4.Pad[1] = '\x01';
  local_d4.Pad[2] = '\0';
  local_d4.Pad[3] = '\0';
  local_8c.Pad[0] = 0x80;
  local_8c.Pad[1] = '\x01';
  local_8c.Pad[2] = '\0';
  local_8c.Pad[3] = '\0';
  local_54 = 0x180;
  local_208 = local_208 & 0xe0;
  local_158._8_8_ = local_1a0;
  auStack_198 = (uchar  [4])local_158._16_4_;
  auStack_194 = (uchar  [4])local_158._20_4_;
  UE::MovieScene::AddAccessorToFilter
            ((FComponentAccess *)local_188,(FEntityComponentFilter *)(local_158 + 0x18));
  UE::MovieScene::AddAccessorToFilter<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
            ((TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName> *)
             (local_188 + 2),(FEntityComponentFilter *)(local_158 + 0x18));
  UE::MovieScene::AddAccessorToFilter<double,double,double,double>
            ((TReadOneOrMoreOfAccessor<double,double,double,double> *)(local_178 + 2),
             (FEntityComponentFilter *)(local_158 + 0x18));
  local_1e8 = (undefined1  [8])&local_228;
  uStack_1e0 = aFStack_226;
  UE::MovieScene::FComponentMask::SetAll
            ((FComponentMask *)(local_120 + 0x18),
             (initializer_list<UE::MovieScene::FComponentTypeID> *)local_1e8);
  TVar6.Pad = *(uchar (*) [4])(*(longlong *)&this->field_0x28 + 0x2cc);
  local_158[0x10] = TVar6.Pad[0];
  local_158[0x11] = TVar6.Pad[1];
  local_158[0x12] = TVar6.Pad[2];
  local_158[0x13] = TVar6.Pad[3];
  if ((TVar6.Pad == (uchar  [4])0x1) || (TVar6.Pad == (uchar  [4])0x101)) {
    bVar16 = 1;
  }
  else {
    bVar16 = 0;
  }
  local_158[8] = local_158[8] & 0xfe | bVar16;
  local_238 = param_2;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
  ::Dispatch_PerAllocation<UE::MovieScene::FApplyVectorParameters>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>,UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>_>
              *)local_188,(FEntityManager *)local_1e8,
             (FSystemTaskPrerequisites *)(*(longlong *)&this->field_0x28 + 0x28),
             (FSystemSubsequentTasks *)param_1);
  auVar11 = local_1e8;
  if (local_1e8 != (undefined1  [8])0x0) {
    LOCK();
    pFVar1 = (FComponentTypeID *)((longlong)local_1e8 + 0x30);
    iVar3 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)auVar11)(auVar11,1);
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneMaterialParameterEvaluationSystem @ 14686cb20

void __cdecl
UMovieSceneMaterialParameterEvaluationSystem::
StaticRegisterNativesUMovieSceneMaterialParameterEvaluationSystem(void)

{
  return;
}

