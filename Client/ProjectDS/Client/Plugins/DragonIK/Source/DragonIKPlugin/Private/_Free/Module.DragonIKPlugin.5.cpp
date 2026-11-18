// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 20

// `dynamic_initializer_for_'ModuleRegistrantDragonIKPlugin'' @ 1413c9c30

void __cdecl _dynamic_initializer_for__ModuleRegistrantDragonIKPlugin__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DragonIKPlugin";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DragonIKPlugin",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDragonIKPluginModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DragonWarpSolver_Eval'' @ 1413c9c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DragonWarpSolver_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DragonWarpSolver_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_DragonWarpSolver_Eval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DragonWarpSolver_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DragonWarpSolver_Eval,*pFVar1,
               L"DragonWarpSolver Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14d32c1c0

void * __thiscall
FDragonIKPluginModule::_scalar_deleting_destructor_(FDragonIKPluginModule *this,uint param_1)

{
  *this = (FDragonIKPluginModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CastChecked<ADragonIKPhysicsHolder,AActor> @ 14d32c200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADragonIKPhysicsHolder * __cdecl
CastChecked<ADragonIKPhysicsHolder,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ADragonIKPhysicsHolder *)0x0;
    }
    pFVar3 = GetTypeName<ADragonIKPhysicsHolder>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ADragonIKPhysicsHolder_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ADragonIKPhysicsHolder *)param_1;
  }
  pFVar3 = GetTypeName<ADragonIKPhysicsHolder>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FDragonIKTraceParamKeyValuePair,FDragonIKTraceParamKeyValuePair,int> @ 14d32c2e0

void __cdecl
ConstructItems<FDragonIKTraceParamKeyValuePair,FDragonIKTraceParamKeyValuePair,int>
          (void *param_1,FDragonIKTraceParamKeyValuePair *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FName *)(lVar1 + (longlong)param_2) = param_2->Key;
      FDragonIKTraceMParams::FDragonIKTraceMParams
                ((FDragonIKTraceMParams *)(lVar1 + 8 + (longlong)param_2),&param_2->trace_params);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FDragonData_SingleArmElement,int> @ 14d32c340

void __cdecl DefaultConstructItems<FDragonData_SingleArmElement,int>(void *param_1,int param_2)

{
  __m128d _Var1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x68);
    do {
      *(double (*) [2])(puVar2 + -0xd) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(puVar2 + -0xb) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(puVar2 + -9) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(puVar2 + -7) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(puVar2 + -5) = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      *(undefined4 *)(puVar2 + -1) = 0x3f800000;
      *(double (*) [2])(puVar2 + -3) = _Var1.m128d_f64;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x10;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDragonData_WarpLimbStruct,int> @ 14d32c3d0

void __cdecl DefaultConstructItems<FDragonData_WarpLimbStruct,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0x7fffffff;
      puVar1[1] = 0xffffffff;
      *(undefined8 *)(puVar1 + 2) = 0;
      puVar1[4] = 0x7fffffff;
      puVar1[5] = 0xffffffff;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 0x7fffffff;
      puVar1[9] = 0xffffffff;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDragonIKTraceKeyValuePair,int> @ 14d32c430

void __cdecl DefaultConstructItems<FDragonIKTraceKeyValuePair,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc4;
    do {
      FName::FName((FName *)(lVar1 + -0xc4),L"");
      *(undefined8 *)(lVar1 + -0xbc) = 0;
      memset((void *)(lVar1 + -0xb4),0,0x100);
      *(undefined4 *)(lVar1 + -0xb0) = 0x3f800000;
      *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0xffffffff;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x110;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCCDIK_Modified_ChainLink,int> @ 14d32c4f0

void __cdecl
DestructItems<FCCDIK_Modified_ChainLink,int>(FCCDIK_Modified_ChainLink *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ChildZeroLengthTransformIndices;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<ADragonIKPhysicsHolder> @ 14d32c5a0

FString * __cdecl GetTypeName<ADragonIKPhysicsHolder>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ADragonIKPhysicsHolder_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NewObject<UPhysicsConstraintComponent> @ 14d32c5e0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPhysicsConstraintComponent * __cdecl
NewObject<UPhysicsConstraintComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPhysicsConstraintComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPhysicsConstraintComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPhysicsHandleComponent> @ 14d32c6d0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPhysicsHandleComponent * __cdecl
NewObject<UPhysicsHandleComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPhysicsHandleComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPhysicsHandleComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `scalar_deleting_destructor' @ 14d32fa40

void * __thiscall
FAnimNode_DragonTwistArmSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonTwistArmSolver *this,uint param_1)

{
  ~FAnimNode_DragonTwistArmSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d32fa80

void * __thiscall
FAnimNode_DragonWarpSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonWarpSolver *this,uint param_1)

{
  ~FAnimNode_DragonWarpSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d32fac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FAnimNode_DragonWeaponArmSolver::_scalar_deleting_destructor_
          (FAnimNode_DragonWeaponArmSolver *this,uint param_1)

{
  ~FAnimNode_DragonWeaponArmSolver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb70);
  }
  return this;
}

// Solve_Modified_TwoBoneIK @ 14d35ac40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Solve_Modified_TwoBoneIK
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,TVector<double> *param_8,float param_9,float param_10,
          bool param_11,float param_12,float param_13)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  double local_130;
  TVector<double>_u_0 local_118;
  double local_100;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  double local_c8;
  double dStack_c0;
  
  uVar2 = 0.0;
  dVar8 = (param_1->field0_0x0)._s_0.X;
  local_c8 = (param_5->field0_0x0)._s_0.X;
  dStack_c0 = (param_5->field0_0x0)._s_0.Y;
  local_100 = (param_5->field0_0x0)._s_0.Z;
  dVar14 = dStack_c0 - (param_1->field0_0x0)._s_0.Y;
  dVar12 = local_100 - (param_1->field0_0x0)._s_0.Z;
  dVar10 = local_c8 - dVar8;
  dVar7 = dVar14 * dVar14 + dVar10 * dVar10 + dVar12 * dVar12;
  fVar13 = (float)SQRT(dVar7);
  fVar5 = param_9 + param_10;
  if (__real_38d1b717 <= fVar13) {
    uVar11 = dVar10;
    local_118._s_0.Z = dVar12;
    uVar15 = dVar14;
    if ((dVar7 != __real_3ff0000000000000) &&
       (uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       local_118._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3e45798ee0000000 <= dVar7)) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar11 = dVar10 * dVar7;
      local_118._s_0.Z = dVar12 * dVar7;
      uVar15 = dVar14 * dVar7;
    }
    uVar16 = SUB84(local_118._s_0.Z,0);
    uVar17 = (undefined4)((ulonglong)local_118._s_0.Z >> 0x20);
    dVar14 = (double)uVar11;
    local_130 = (double)uVar15;
    local_f8._s_0.Z = local_118._s_0.Z;
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    local_f8._s_0.Z = 0.0;
    local_130 = 0.0;
    fVar13 = __real_38d1b717;
    uVar11 = __real_3ff0000000000000;
    dVar14 = ___xmm_00000000000000003ff0000000000000;
    uVar15 = _UNK_150689518;
  }
  dVar8 = (param_4->field0_0x0)._s_0.X - dVar8;
  dVar7 = (param_4->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_4->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  uVar3 = _UNK_15061cbc8;
  uVar9 = ___xmm_3ff00000000000000000000000000000;
  local_f8._s_0.X = dVar14;
  local_f8._s_0.Y = (double)uVar15;
  local_e0._s_0.Z = local_100;
  if (__real_322bcc76 <= (float)(dVar7 * dVar7 + dVar8 * dVar8 + dVar10 * dVar10)) {
    local_118._s_0.X = dVar10 * local_130 - dVar7 * local_f8._s_0.Z;
    local_118._s_0.Y = dVar8 * local_f8._s_0.Z - (double)uVar11 * dVar10;
    local_118._s_0.Z = dVar7 * (double)uVar11 - local_130 * dVar8;
    if (__real_3e45798ec0000000 <=
        local_118._s_0.Y * local_118._s_0.Y + local_118._s_0.X * local_118._s_0.X +
        local_118._s_0.Z * local_118._s_0.Z) {
      dVar12 = dVar7 * local_130 + dVar8 * (double)uVar11 + dVar10 * local_f8._s_0.Z;
      uVar9 = dVar8 - dVar12 * (double)uVar11;
      uVar3 = dVar7 - dVar12 * local_130;
      uVar2 = dVar10 - dVar12 * local_f8._s_0.Z;
      dVar8 = (double)uVar3 * (double)uVar3 + (double)uVar9 * (double)uVar9 +
              (double)uVar2 * (double)uVar2;
      if (__real_3e45798ee0000000 < dVar8) {
        dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
        uVar9 = dVar8 * (double)uVar9;
        uVar3 = dVar8 * (double)uVar3;
        uVar2 = dVar8 * (double)uVar2;
      }
    }
    else {
      UE::Math::TVector<double>::FindBestAxisVectors
                ((TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_118._s_0,
                 (TVector<double> *)&local_e0._s_0);
      uVar3 = local_e0._s_0.Y;
      uVar2 = local_e0._s_0.Z;
      uVar9 = local_e0._s_0.X;
    }
  }
  fVar4 = __real_3f800000;
  fVar18 = 0.0;
  if (((param_11) && (__real_38d1b717 < param_13 - param_12)) && (__real_38d1b717 < fVar5)) {
    fVar6 = (fVar13 / fVar5 - param_12) / (param_13 - param_12);
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar6 = fVar6 * (param_13 - __real_3f800000);
    if (__real_38d1b717 < fVar6) {
      fVar6 = fVar6 + __real_3f800000;
      param_10 = param_10 * fVar6;
      param_9 = param_9 * fVar6;
      fVar5 = fVar5 * fVar6;
    }
  }
  (param_8->field0_0x0)._s_0.X = local_c8;
  (param_8->field0_0x0)._s_0.Y = dStack_c0;
  (param_8->field0_0x0)._s_0.Z = local_100;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  (param_7->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_7->field0_0x0)._s_0.Y = dVar8;
  (param_7->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if (fVar5 <= fVar13) {
    dVar10 = (double)fVar5;
    dVar8 = (param_1->field0_0x0)._s_0.Y;
    dVar7 = (param_1->field0_0x0)._s_0.Z;
    (param_8->field0_0x0)._s_0.X = dVar14 * dVar10 + (param_1->field0_0x0)._s_0.X;
    (param_8->field0_0x0)._s_0.Y = (double)uVar15 * dVar10 + dVar8;
    dVar8 = (double)param_9;
    (param_8->field0_0x0)._s_0.Z = (double)CONCAT44(uVar17,uVar16) * dVar10 + dVar7;
    dVar7 = (double)CONCAT44(uVar17,uVar16) * dVar8 + (param_1->field0_0x0)._s_0.Z;
    dVar10 = (double)uVar15 * dVar8 + (param_1->field0_0x0)._s_0.Y;
    dVar8 = dVar14 * dVar8 + (param_1->field0_0x0)._s_0.X;
    goto LAB_14d35b33e;
  }
  fVar5 = (param_9 + param_9) * fVar13;
  if (fVar5 == 0.0) {
    fVar5 = 0.0;
    bVar1 = false;
LAB_14d35b2ad:
    fVar13 = fVar5;
    if (fVar4 <= fVar5) {
      fVar13 = fVar4;
    }
  }
  else {
    fVar5 = ((fVar13 * fVar13 + param_9 * param_9) - param_10 * param_10) / fVar5;
    bVar1 = fVar5 < 0.0;
    fVar13 = __real_bf800000;
    if (__real_bf800000 <= fVar5) goto LAB_14d35b2ad;
  }
  fVar13 = acosf(fVar13);
  fVar13 = sinf(fVar13);
  fVar13 = fVar13 * param_9;
  fVar5 = param_9 * param_9 - fVar13 * fVar13;
  if (0.0 < fVar5) {
    fVar18 = SQRT(fVar5);
  }
  if (bVar1) {
    fVar18 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
  }
  dVar8 = (double)fVar18;
  dVar12 = (double)fVar13;
  dVar7 = (double)CONCAT44(uVar17,uVar16) * dVar8 + (param_1->field0_0x0)._s_0.Z +
          (double)uVar2 * dVar12;
  dVar10 = (double)uVar15 * dVar8 + (param_1->field0_0x0)._s_0.Y + (double)uVar3 * dVar12;
  dVar8 = dVar14 * dVar8 + (param_1->field0_0x0)._s_0.X + (double)uVar9 * dVar12;
LAB_14d35b33e:
  (param_7->field0_0x0)._s_0.X = dVar8;
  (param_7->field0_0x0)._s_0.Y = dVar10;
  (param_7->field0_0x0)._s_0.Z = dVar7;
  return;
}

// Solve_Modified_TwoBoneIK_2 @ 14d35b3a0

void __cdecl
Solve_Modified_TwoBoneIK_2
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,TVector<double> *param_8,bool param_9,float param_10,
          float param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.X - dVar9;
  dVar9 = dVar9 - (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Z - dVar8;
  dVar8 = dVar8 - (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Y - dVar1;
  dVar1 = dVar1 - (param_1->field0_0x0)._s_0.Y;
  auVar4._0_8_ = dVar3 * dVar3;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + dVar7 * dVar7 + auVar4._0_8_;
  auVar5 = sqrtpd(auVar4,auVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1 * dVar1 + dVar9 * dVar9 + dVar8 * dVar8;
  auVar6 = sqrtpd(auVar5,auVar6);
  Solve_Modified_TwoBoneIK
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(float)auVar6._0_8_,
             (float)auVar5._0_8_,param_9,param_10,param_11);
  return;
}

// Solve_Modified_TwoBoneIK_3 @ 14d35b4a0

void __cdecl
Solve_Modified_TwoBoneIK_3
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,float param_7,
          float param_8,bool param_9,float param_10,float param_11)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double dStack_120;
  TVector<double>_u_0 local_118;
  double dStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TVector<double> local_d8 [8];
  
  local_158 = (param_2->Translation).ZW.m128d_f64[0];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  dVar23 = (param_1->Translation).XY.m128d_f64[0];
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  auVar2 = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  dVar7 = (param_3->Translation).XY.m128d_f64[0];
  dVar6 = (param_3->Translation).XY.m128d_f64[1];
  local_d8[0].field0_0x0._16_8_ = (param_3->Translation).ZW.m128d_f64[0];
  _local_168 = auVar2;
  local_150._s_0.X = dVar23;
  local_150._s_0.Y = dVar3;
  local_150._s_0.Z = dVar1;
  local_f8 = auVar2;
  Solve_Modified_TwoBoneIK
            ((TVector<double> *)&local_150._s_0,(TVector<double> *)&local_168,local_d8,param_4,
             param_5,param_6,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_118._s_0,
             param_7,param_8,param_9,param_10,param_11);
  uVar19 = local_138._s_0.Z;
  uVar18 = local_138._s_0.Y;
  uVar17 = local_138._s_0.X;
  uVar16 = local_150._s_0.Z;
  uVar15 = local_158;
  (param_1->Translation).XY.m128d_f64[0] = dVar23;
  (param_1->Translation).XY.m128d_f64[1] = dVar3;
  (param_1->Translation).ZW.m128d_f64[0] = dVar1;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  dVar4 = __real_3e45798ee0000000;
  dVar1 = __real_3ff0000000000000;
  local_150._s_0.X = dVar23 - auVar2._0_8_;
  local_e8._8_4_ = auVar2._8_4_;
  local_e8._0_8_ = auVar2._8_8_;
  local_e8._12_4_ = auVar2._12_4_;
  local_150._s_0.Y = dVar3 - auVar2._8_8_;
  local_150._s_0.Z = local_150._s_0.Z - (double)local_158;
  dVar22 = local_150._s_0.Y * local_150._s_0.Y + local_150._s_0.X * local_150._s_0.X +
           local_150._s_0.Z * local_150._s_0.Z;
  if (dVar22 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar22) {
      dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
      local_150._s_0.X = local_150._s_0.X * dVar22;
      local_150._s_0.Y = local_150._s_0.Y * dVar22;
      local_150._s_0.Z = local_150._s_0.Z * dVar22;
    }
    else {
      local_150._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_150._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_150._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_150._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_150._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    }
  }
  local_158 = (double)uVar16 - local_138._s_0.Z;
  local_168 = dVar23 - local_138._s_0.X;
  dStack_160 = dVar3 - local_138._s_0.Y;
  dVar23 = dStack_160 * dStack_160 + local_168 * local_168 + (double)local_158 * (double)local_158;
  if (dVar23 == __real_3ff0000000000000) {
LAB_14d35b72b:
  }
  else {
    if (__real_3e45798ee0000000 <= dVar23) {
      dVar23 = __real_3ff0000000000000 / SQRT(dVar23);
      local_168 = local_168 * dVar23;
      dStack_160 = dStack_160 * dVar23;
      local_158 = (double)local_158 * dVar23;
      goto LAB_14d35b72b;
    }
    local_168._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_168._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    dStack_160._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    dStack_160._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  UE::Math::TQuat<double>::FindBetweenNormals
            ((TQuat<double> *)&local_138._s_0,(TVector<double> *)&local_150._s_0,
             (TVector<double> *)&local_168);
  uVar21 = local_118._s_0.Z;
  uVar20 = local_118._s_0.Y;
  uVar16 = local_118._s_0.X;
  dVar11 = (param_2->Rotation).XY.m128d_f64[0];
  dVar12 = (param_2->Rotation).XY.m128d_f64[1];
  dVar13 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dStack_160 = dVar6 - (double)local_e8._0_8_;
  dVar6 = local_138._s_0.X * dVar11 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar14 * dStack_120 +
          dVar12 * local_138._s_0.Y *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          local_138._s_0.Z * dVar13 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar10 = dVar13 * local_138._s_0.X *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar12 * dStack_120 +
           dVar14 * local_138._s_0.Y *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           local_138._s_0.Z * dVar11 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = dVar14 * local_138._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar11 * dStack_120 +
                 dVar13 * local_138._s_0.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_138._s_0.Z * dVar12 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar8;
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = local_138._s_0.X * dVar12 * dVar23 + dVar13 * dStack_120 +
                 dVar11 * local_138._s_0.Y * dVar22 + local_138._s_0.Z * dVar14 * dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar2;
  (param_2->Translation).XY.m128d_f64[0] = (double)uVar17;
  (param_2->Translation).XY.m128d_f64[1] = (double)uVar18;
  (param_2->Translation).ZW.m128d_f64[0] = (double)uVar19;
  (param_2->Translation).ZW.m128d_f64[1] = 0.0;
  local_168 = dVar7 - (double)local_f8._0_8_;
  local_158 = (double)local_d8[0].field0_0x0._16_8_ - (double)uVar15;
  dVar23 = dStack_160 * dStack_160 + local_168 * local_168 + (double)local_158 * (double)local_158;
  if (dVar23 != dVar1) {
    if (dVar23 < dVar4) {
      dStack_160 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_168 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14d35b8cd;
    }
    dVar23 = dVar1 / SQRT(dVar23);
    local_168 = local_168 * dVar23;
    dStack_160 = dStack_160 * dVar23;
    local_158 = (double)local_158 * dVar23;
  }
LAB_14d35b8cd:
  local_150._s_0.X = local_118._s_0.X - (double)uVar17;
  local_150._s_0.Y = local_118._s_0.Y - (double)uVar18;
  local_150._s_0.Z = local_118._s_0.Z - (double)uVar19;
  dVar23 = local_150._s_0.Y * local_150._s_0.Y + local_150._s_0.X * local_150._s_0.X +
           local_150._s_0.Z * local_150._s_0.Z;
  if (dVar23 != dVar1) {
    if (dVar23 < dVar4) {
      local_150._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_150._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_150._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    }
    else {
      dVar1 = dVar1 / SQRT(dVar23);
      local_150._s_0.X = local_150._s_0.X * dVar1;
      local_150._s_0.Y = local_150._s_0.Y * dVar1;
      local_150._s_0.Z = local_150._s_0.Z * dVar1;
    }
  }
  UE::Math::TQuat<double>::FindBetweenNormals
            ((TQuat<double> *)&local_118._s_0,(TVector<double> *)&local_168,
             (TVector<double> *)&local_150._s_0);
  dVar10 = (param_3->Rotation).XY.m128d_f64[0];
  dVar11 = (param_3->Rotation).XY.m128d_f64[1];
  dVar12 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar13 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar22 = dVar12 * local_118._s_0.X *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar11 * dStack_100 +
           dVar13 * local_118._s_0.Y *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           local_118._s_0.Z * dVar10 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar22,0);
  auVar9._0_8_ = dVar13 * local_118._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar10 * dStack_100 +
                 dVar12 * local_118._s_0.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_118._s_0.Z * dVar11 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar9;
  dVar7 = local_118._s_0.X * dVar10 * dVar7 + dVar13 * dStack_100 +
          dVar11 * local_118._s_0.Y * dVar4 + local_118._s_0.Z * dVar12 * dVar6;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = local_118._s_0.X * dVar11 * dVar1 + dVar12 * dStack_100 +
                 dVar10 * local_118._s_0.Y * dVar3 + local_118._s_0.Z * dVar13 * dVar23;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar5;
  (param_3->Translation).XY.m128d_f64[0] = (double)uVar16;
  (param_3->Translation).XY.m128d_f64[1] = (double)uVar20;
  (param_3->Translation).ZW.m128d_f64[0] = (double)uVar21;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// Solve_Modified_TwoBoneIK_4 @ 14d35baa0

void __cdecl
Solve_Modified_TwoBoneIK_4
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,bool param_7,
          float param_8,float param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (param_2->Translation).ZW.m128d_f64[0];
  dVar1 = (param_3->Translation).ZW.m128d_f64[0] - dVar5;
  dVar4 = (param_3->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 - (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (param_3->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  dVar3 = (param_2->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  Solve_Modified_TwoBoneIK_3
            (param_1,param_2,param_3,param_4,param_5,param_6,
             (float)SQRT(dVar6 * dVar6 + dVar3 * dVar3 + dVar5 * dVar5),
             (float)SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar1 * dVar1),param_7,param_8,param_9);
  return;
}

// IMPLEMENT_MODULE_DragonIKPlugin @ 14d360300

void __cdecl IMPLEMENT_MODULE_DragonIKPlugin(void)

{
  return;
}

