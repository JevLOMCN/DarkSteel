// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 14773a820

UClass * __cdecl UBoxComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoxComponent",
               &Z_Registration_Info_UClass_UBoxComponent.InnerSingleton,
               StaticRegisterNativesUBoxComponent,0x580,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoxComponent>,
               InternalVTableHelperCtorCaller<UBoxComponent>,local_res8,UShapeComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoxComponent.InnerSingleton;
}

// UBoxComponent @ 1477ef8b0

UBoxComponent * __thiscall UBoxComponent::UBoxComponent(UBoxComponent *this,FVTableHelper *param_1)

{
  UShapeComponent::UShapeComponent((UShapeComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  return this;
}

// UBoxComponent @ 1477ef920

UBoxComponent * __thiscall
UBoxComponent::UBoxComponent(UBoxComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UShapeComponent::UShapeComponent((UShapeComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->BoxExtent).field0_0x0._s_0.X = 32.0;
  (this->BoxExtent).field0_0x0._s_0.Y = 32.0;
  (this->BoxExtent).field0_0x0._s_0.Z = 32.0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x10;
  return this;
}

// ~UBoxComponent @ 1477f4530

void __thiscall UBoxComponent::~UBoxComponent(UBoxComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UShapeComponent::~UShapeComponent((UShapeComponent *)this);
  return;
}

// CalcBounds @ 14780e2e0

TBoxSphereBounds<double,double> * __thiscall
UBoxComponent::CalcBounds
          (UBoxComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  TMatrix<double> local_c8;
  
  uVar1 = *(undefined8 *)&(this->BoxExtent).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(this->BoxExtent).field0_0x0 + 8);
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar6 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar9,(uint)uVar1 ^ uVar8);
  dVar7 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar9,(uint)uVar2 ^ uVar8);
  uVar1 = *(undefined8 *)((longlong)&(this->BoxExtent).field0_0x0 + 0x10);
  uVar8 = (uint)uVar1 ^ uVar8;
  uVar9 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar9;
  dVar4 = (this->BoxExtent).field0_0x0._s_0.Z - (double)CONCAT44(uVar9,uVar8);
  dVar5 = (this->BoxExtent).field0_0x0._s_0.Y - dVar7;
  dVar3 = (this->BoxExtent).field0_0x0._s_0.X - dVar6;
  local_e0 = dVar4 * __real_3fe0000000000000;
  local_e8 = dVar5 * __real_3fe0000000000000;
  local_f0 = dVar3 * __real_3fe0000000000000;
  local_108._s_0.X = local_f0 + dVar6;
  local_108._s_0.Y = local_e8 + dVar7;
  local_108._s_0.Z = local_e0 + (double)CONCAT44(uVar9,uVar8);
  local_d8 = SQRT((dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4) * __real_3fd0000000000000);
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_c8);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            ((TBoxSphereBounds<double,double> *)&local_108._s_0,__return_storage_ptr__,&local_c8);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14781ac40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UBoxComponent::CreateSceneProxy(UBoxComponent *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x2b0);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    uVar1 = (uint)this_00[1]._padding_;
    this_00->_padding_ =
         (longlong)&`UBoxComponent::CreateSceneProxy'::`2'::FBoxSceneProxy::_vftable_;
    *(uint *)&this_00[1]._padding_ = (*(byte *)((longlong)&this->_padding_ + 4) ^ uVar1) & 1 ^ uVar1
    ;
    pFVar2 = (FScriptContainerElement *)(this->BoxExtent).field0_0x0._s_0.Y;
    this_00[1]._padding_ = (longlong)(this->BoxExtent).field0_0x0._s_0.X;
    this_00[1].DebugMassData.AllocatorInstance.Data = pFVar2;
    *(double *)&this_00[1].DebugMassData.ArrayNum = (this->BoxExtent).field0_0x0._s_0.Z;
    *(int *)&this_00[1].SimpleStreamableAssetManagerIndex.Object = (int)this->_padding_;
    lVar3 = this->_padding_;
    this_00->bWillEverBeLit = '\0';
    *(int *)((longlong)&this_00[1].SimpleStreamableAssetManagerIndex.Object + 4) = (int)lVar3;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetCollisionShape @ 147835290

FCollisionShape * __thiscall
UBoxComponent::GetCollisionShape
          (UBoxComponent *this,FCollisionShape *__return_storage_ptr__,float param_1)

{
  FCollisionShape local_38 [3];
  
  local_38[0].ShapeType = Box;
  local_38[0].field1_0x4._0_4_ =
       (undefined4)((double)this->_padding_ * (this->BoxExtent).field0_0x0._s_0.X);
  local_38[0].field1_0x4._4_4_ =
       (undefined4)((double)this->_padding_ * (this->BoxExtent).field0_0x0._s_0.Y);
  local_38[0].field1_0x4._8_4_ =
       (undefined4)((double)this->_padding_ * (this->BoxExtent).field0_0x0._s_0.Z);
  FCollisionShape::Inflate(local_38,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14783c260

UClass * __cdecl UBoxComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoxComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoxComponent",
               &Z_Registration_Info_UClass_UBoxComponent.InnerSingleton,
               StaticRegisterNativesUBoxComponent,0x580,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBoxComponent>,
               InternalVTableHelperCtorCaller<UBoxComponent>,local_res8,UShapeComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoxComponent.InnerSingleton;
}

// IsZeroExtent @ 1478411f0

bool __thiscall UBoxComponent::IsZeroExtent(UBoxComponent *this)

{
  if ((((this->BoxExtent).field0_0x0._s_0.X == 0.0) && ((this->BoxExtent).field0_0x0._s_0.Y == 0.0))
     && ((this->BoxExtent).field0_0x0._s_0.Z == 0.0)) {
    return true;
  }
  return false;
}

// SetBoxExtent @ 147869950

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
UBoxComponent::SetBoxExtent(UBoxComponent *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  TVector<double>_u_0 local_28;
  
  uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  lVar2 = this->_padding_;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *(undefined4 *)&(this->BoxExtent).field0_0x0 = *(undefined4 *)&param_1->field0_0x0;
  *(undefined4 *)((longlong)&(this->BoxExtent).field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&(this->BoxExtent).field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&(this->BoxExtent).field0_0x0 + 0xc) = uVar5;
  (this->BoxExtent).field0_0x0._s_0.Z = dVar1;
  (**(code **)(lVar2 + 0x5b0))();
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  (**(code **)(this->_padding_ + 0xa90))(this);
  if ((this->_padding_ & 8) != 0) {
    local_28._s_0.X = (double)this->_padding_;
    local_28._s_0.Y = (double)this->_padding_;
    local_28._s_0.Z = (double)this->_padding_;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)&this->_padding_,(TVector<double> *)&local_28._s_0,true);
    if (param_2) {
      iVar6 = (**(code **)(this->_padding_ + 0x5e0))(this);
      if ((iVar6 != 0) && (this->_padding_ != 0)) {
        USceneComponent::UpdateOverlaps
                  ((USceneComponent *)this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                   (TArrayView<FOverlapInfo_const_,int> *)0x0);
      }
    }
  }
  return;
}

// StaticRegisterNativesUBoxComponent @ 1478759e0

void __cdecl UBoxComponent::StaticRegisterNativesUBoxComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UBoxComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBodySetup @ 14787dae0

void __thiscall UBoxComponent::UpdateBodySetup(UBoxComponent *this)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  FKBoxElem *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  byte bVar13;
  wchar_t *pwVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [16];
  double local_78;
  
  dVar8 = __real_4000000000000000;
  dVar7 = __real_3f1a36e2e0000000;
  dVar6 = __real_3ff0000000000000;
  pwVar14 = L"";
  uVar24 = SUB84(__real_3ff0000000000000,0);
  uVar25 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  bVar15 = false;
  if ((*(byte *)((longlong)&this->_padding_ + 4) >> 4 & 1) == 0) {
LAB_14787dbb1:
    if (!bVar15) goto LAB_14787dcbd;
  }
  else if (this->_padding_ == 0) {
    pUVar9 = UObject::GetArchetype((UObject *)this);
    if (pUVar9 == (UObject *)0x0) {
      pFVar11 = GetTypeName<UBoxComponent>(&local_b8);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar14);
    }
    pUVar10 = StaticClass();
    iVar3 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar10->_padding_)) {
      pFVar11 = GetTypeName<UBoxComponent>(&local_a8);
      pwVar14 = L"";
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<UObject>(&local_98,pUVar9);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar14,pwVar12);
    }
    pUVar9 = (UObject *)(**(code **)(*(longlong *)pUVar9 + 0x800))(pUVar9);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    bVar15 = pUVar9 != (UObject *)0x0;
    this->_padding_ = (longlong)pUVar9;
    goto LAB_14787dbb1;
  }
  auVar2 = *(undefined1 (*) [16])&(this->BoxExtent).field0_0x0;
  local_78 = (this->BoxExtent).field0_0x0._s_0.Z;
  bVar13 = *(byte *)((longlong)&this->_padding_ + 4) >> 4 & 1;
  local_88 = auVar2;
  if (bVar13 == 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(bUseArchetypeBodySetup && UpdateBodySetupAction == EShapeBodySetupHelper::InvalidateSharingIfStale) || (!bUseArchetypeBodySetup && UpdateBodySetupAction == EShapeBodySetupHelper::UpdateBodySetup)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\BoxComponent.cpp"
                        ,0x34,L"");
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)(this->_padding_ + 0x50) != 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("ShapeBodySetup->AggGeom.BoxElems.Num() == 1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\BoxComponent.cpp"
                        ,0x35,L"");
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(this->_padding_ + 0x48);
  uVar18 = auVar2._0_4_;
  uVar20 = auVar2._4_4_;
  if (auVar2._0_8_ < dVar7) {
    uVar18 = uVar24;
    uVar20 = uVar25;
  }
  dVar17 = (double)local_88._8_8_;
  if ((double)local_88._8_8_ < dVar7) {
    dVar17 = dVar6;
  }
  dVar16 = local_78;
  if (local_78 < dVar7) {
    dVar16 = dVar6;
  }
  if ((((float)((double)CONCAT44(uVar20,uVar18) * dVar8) != *(float *)(lVar4 + 0x60)) ||
      ((float)(dVar17 * dVar8) != *(float *)(lVar4 + 100))) ||
     ((float)(dVar16 * dVar8) != *(float *)(lVar4 + 0x68))) {
    this->_padding_ = 0;
    bVar13 = 0;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | bVar13 << 4;
LAB_14787dcbd:
  UShapeComponent::CreateShapeBodySetupIfNeeded<FKBoxElem>((UShapeComponent *)this);
  if ((this->_padding_ & 0x1000000000) == 0) {
    local_78 = *(double *)((longlong)&(this->BoxExtent).field0_0x0 + 0x10);
    auVar2 = *(undefined1 (*) [16])&(this->BoxExtent).field0_0x0;
    local_88 = auVar2;
    if (*(int *)(this->_padding_ + 0x50) != 1) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShapeBodySetup->AggGeom.BoxElems.Num() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\BoxComponent.cpp"
                          ,0x35,L"");
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = *(FKBoxElem **)(this->_padding_ + 0x48);
    uVar18 = auVar2._0_4_;
    uVar20 = auVar2._4_4_;
    if (auVar2._0_8_ < dVar7) {
      uVar18 = uVar24;
      uVar20 = uVar25;
    }
    uVar19 = local_88._8_4_;
    uVar21 = local_88._12_4_;
    if ((double)local_88._8_8_ < dVar7) {
      uVar19 = uVar24;
      uVar21 = uVar25;
    }
    uVar22 = SUB84(local_78,0);
    uVar23 = (int)((ulonglong)local_78 >> 0x20);
    if (local_78 < dVar7) {
      uVar22 = uVar24;
      uVar23 = uVar25;
    }
    FKBoxElem::SetTransform(this_00,&UE::Math::TTransform<double>::Identity);
    this_00->X = (float)((double)CONCAT44(uVar20,uVar18) * dVar8);
    this_00->Y = (float)((double)CONCAT44(uVar21,uVar19) * dVar8);
    this_00->Z = (float)((double)CONCAT44(uVar23,uVar22) * dVar8);
  }
  return;
}

// execGetScaledBoxExtent @ 147882a30

void __cdecl UBoxComponent::execGetScaledBoxExtent(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar3 = *(double *)&param_1[0xe].field_0x8;
  dVar4 = *(double *)&param_1[0xe].field_0x10;
  dVar1 = *(double *)(param_1 + 0x23);
  dVar2 = *(double *)&param_1[0x22].field_0x20;
  *(double *)param_3 = *(double *)(param_1 + 0xe) * *(double *)&param_1[0x22].field_0x18;
  *(double *)((longlong)param_3 + 8) = dVar3 * dVar2;
  *(double *)((longlong)param_3 + 0x10) = dVar4 * dVar1;
  return;
}

// execGetUnscaledBoxExtent @ 147882e70

void __cdecl UBoxComponent::execGetUnscaledBoxExtent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x22].field_0x20;
  uVar1 = *(undefined8 *)(param_1 + 0x23);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x22].field_0x18;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execSetBoxExtent @ 147884d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UBoxComponent::execSetBoxExtent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  TVector<double>_u_0 local_20;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)&param_1[0x22].field_0x18 = local_38;
  *(undefined4 *)&param_1[0x22].field_0x1c = uStack_34;
  *(undefined4 *)&param_1[0x22].field_0x20 = uStack_30;
  *(undefined4 *)&param_1[0x22].field_0x24 = uStack_2c;
  *(undefined8 *)(param_1 + 0x23) = local_28;
  (**(code **)(lVar2 + 0x5b0))(param_1);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  (**(code **)(*(longlong *)param_1 + 0xa90))(param_1);
  if ((param_1[3].field_0x20 & 8) != 0) {
    local_20._s_0.X = (double)*(undefined8 *)(param_1 + 0xe);
    local_20._s_0.Y = (double)*(undefined8 *)&param_1[0xe].field_0x8;
    local_20._s_0.Z = (double)*(undefined8 *)&param_1[0xe].field_0x10;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)&param_1[0x16].field_0x20,(TVector<double> *)&local_20._s_0,true);
    if (bVar4) {
      iVar3 = (**(code **)(*(longlong *)param_1 + 0x5e0))(param_1);
      if ((iVar3 != 0) && (*(longlong *)&param_1[4].field_0x8 != 0)) {
        USceneComponent::UpdateOverlaps
                  ((USceneComponent *)param_1,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                   (TArrayView<FOverlapInfo_const_,int> *)0x0);
      }
    }
  }
  return;
}

