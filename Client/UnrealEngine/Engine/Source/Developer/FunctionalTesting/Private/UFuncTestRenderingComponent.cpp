// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 9

// StaticClass @ 148c702f0

UClass * __cdecl UFuncTestRenderingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FuncTestRenderingComponent",
               &Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton,
               StaticRegisterNativesUFuncTestRenderingComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFuncTestRenderingComponent>,
               InternalVTableHelperCtorCaller<UFuncTestRenderingComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton;
}

// UFuncTestRenderingComponent @ 148c80110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFuncTestRenderingComponent * __thiscall
UFuncTestRenderingComponent::UFuncTestRenderingComponent
          (UFuncTestRenderingComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UFuncTestRenderingComponent @ 148c80180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFuncTestRenderingComponent * __thiscall
UFuncTestRenderingComponent::UFuncTestRenderingComponent
          (UFuncTestRenderingComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->field_0x1ab = 1;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FBodyInstance::SetCollisionProfileName
            ((FBodyInstance *)&this->field_0x390,UCollisionProfile::NoCollision_ProfileName);
  this->field_0x9b = this->field_0x9b | 2;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  return this;
}

// ~UFuncTestRenderingComponent @ 148c811f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UFuncTestRenderingComponent::~UFuncTestRenderingComponent(UFuncTestRenderingComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// CalcBounds @ 148c8a1e0

/* WARNING: Removing unreachable block (ram,0x000148c8a3c3) */

TBoxSphereBounds<double,double> * __thiscall
UFuncTestRenderingComponent::CalcBounds
          (UFuncTestRenderingComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__
          ,TTransform<double> *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar10;
  undefined4 uVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 local_108 [8];
  longlong *local_100;
  ulonglong local_f8;
  double local_e0;
  
  plVar5 = *(longlong **)&this->field_0xa8;
  if (plVar5 != (longlong *)0x0) {
    pUVar3 = AFunctionalTest::StaticClass();
    param_1 = (TTransform<double> *)&pUVar3->_padding_;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar5[2] + 0x38)) &&
       ((TTransform<double> *)
        *(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar1 * 8) == param_1))
    goto LAB_148c8a22a;
  }
  plVar5 = (longlong *)0x0;
LAB_148c8a22a:
  if (plVar5 == (longlong *)0x0) {
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->SphereRadius = 0.0;
  }
  else {
    local_100 = (longlong *)0x0;
    local_f8 = 0;
    (**(code **)(*plVar5 + 0x898))(plVar5,&local_100,param_1);
    lVar2 = plVar5[0x37];
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar2 != 0) {
      uVar22 = *(undefined4 *)(lVar2 + 0x210);
      uVar24 = *(undefined4 *)(lVar2 + 0x214);
      uVar19 = *(undefined4 *)(lVar2 + 0x218);
      uVar21 = *(undefined4 *)(lVar2 + 0x21c);
      local_e0 = *(double *)(lVar2 + 0x220);
    }
    iVar1 = (int)local_f8;
    uVar4 = (ulonglong)(int)local_f8;
    plVar5 = local_100 + uVar4;
    uVar7 = SUB84(local_e0,0);
    uVar13 = (undefined4)((ulonglong)local_e0 >> 0x20);
    plVar6 = local_100;
    uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = uVar22;
    uVar14 = uVar24;
    uVar9 = uVar19;
    uVar15 = uVar21;
    uVar28 = uVar7;
    uVar29 = uVar13;
    uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    while( true ) {
      if ((int)uVar4 != iVar1) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
        uVar4 = local_f8 & 0xffffffff;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      if (plVar6 == plVar5) break;
      if (*plVar6 == 0) {
        plVar6 = plVar6 + 1;
      }
      else {
        lVar2 = *(longlong *)(*plVar6 + 0x1b8);
        if (lVar2 == 0) {
          dVar23 = (double)CONCAT44(uVar31,uVar30);
          uVar25 = uVar32;
          uVar26 = uVar33;
          local_e0 = (double)uVar27;
        }
        else {
          auVar12 = *(undefined1 (*) [16])(lVar2 + 0x210);
          dVar23 = auVar12._0_8_;
          uVar25 = auVar12._8_4_;
          uVar26 = auVar12._12_4_;
          local_e0 = *(double *)(lVar2 + 0x220);
        }
        dVar10 = dVar23;
        if ((double)CONCAT44(uVar14,uVar8) <= dVar23) {
          dVar10 = (double)CONCAT44(uVar14,uVar8);
        }
        dVar20 = (double)CONCAT44(uVar26,uVar25);
        dVar16 = local_e0;
        if ((double)CONCAT44(uVar13,uVar7) <= local_e0) {
          dVar16 = (double)CONCAT44(uVar13,uVar7);
        }
        uVar17 = SUB84(local_e0,0);
        uVar18 = (int)((ulonglong)local_e0 >> 0x20);
        if (local_e0 <= (double)CONCAT44(uVar29,uVar28)) {
          uVar17 = uVar28;
          uVar18 = uVar29;
        }
        if (dVar23 <= (double)CONCAT44(uVar24,uVar22)) {
          dVar23 = (double)CONCAT44(uVar24,uVar22);
        }
        plVar6 = plVar6 + 1;
        uVar8 = SUB84(dVar10,0);
        uVar14 = (undefined4)((ulonglong)dVar10 >> 0x20);
        dVar10 = (double)CONCAT44(uVar26,uVar25);
        if ((double)CONCAT44(uVar15,uVar9) <= dVar10) {
          dVar10 = (double)CONCAT44(uVar15,uVar9);
        }
        uVar7 = SUB84(dVar16,0);
        uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
        if (dVar20 <= (double)CONCAT44(uVar21,uVar19)) {
          dVar20 = (double)CONCAT44(uVar21,uVar19);
        }
        uVar22 = SUB84(dVar23,0);
        uVar24 = (undefined4)((ulonglong)dVar23 >> 0x20);
        uVar9 = SUB84(dVar10,0);
        uVar15 = (undefined4)((ulonglong)dVar10 >> 0x20);
        uVar19 = SUB84(dVar20,0);
        uVar21 = (undefined4)((ulonglong)dVar20 >> 0x20);
        uVar28 = uVar17;
        uVar29 = uVar18;
      }
    }
    dVar23 = ((double)CONCAT44(uVar24,uVar22) - (double)CONCAT44(uVar14,uVar8)) *
             __real_3fe0000000000000;
    dVar10 = ((double)CONCAT44(uVar21,uVar19) - (double)CONCAT44(uVar15,uVar9)) *
             __real_3fe0000000000000;
    dVar20 = ((double)CONCAT44(uVar29,uVar28) - (double)CONCAT44(uVar13,uVar7)) *
             __real_3fe0000000000000;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar23 + (double)CONCAT44(uVar14,uVar8);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar10 + (double)CONCAT44(uVar15,uVar9);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar20 + (double)CONCAT44(uVar13,uVar7);
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar23;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar10;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar20;
    dVar23 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
    dVar10 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    dVar20 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
    auVar11._0_8_ = dVar23 * dVar23;
    auVar11._8_8_ = 0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar10 * dVar10 + auVar11._0_8_ + dVar20 * dVar20;
    auVar12 = sqrtpd(auVar11,auVar12);
    __return_storage_ptr__->SphereRadius = auVar12._0_8_;
    if (local_100 != (longlong *)0x0) {
      FMemory::Free(local_100);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 148c8cdb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UFuncTestRenderingComponent::CreateSceneProxy(UFuncTestRenderingComponent *this)

{
  FFTestRenderingSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 != (FFTestRenderingSceneProxy *)0x0) {
    pFVar1 = FFTestRenderingSceneProxy::FFTestRenderingSceneProxy(pFVar1,this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetPrivateStaticClass @ 148c91a20

UClass * __cdecl UFuncTestRenderingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FuncTestRenderingComponent",
               &Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton,
               StaticRegisterNativesUFuncTestRenderingComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFuncTestRenderingComponent>,
               InternalVTableHelperCtorCaller<UFuncTestRenderingComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFuncTestRenderingComponent.InnerSingleton;
}

// ShouldRecreateProxyOnUpdateTransform @ 148c9cc00

bool __thiscall
UFuncTestRenderingComponent::ShouldRecreateProxyOnUpdateTransform(UFuncTestRenderingComponent *this)

{
  return true;
}

// StaticRegisterNativesUFuncTestRenderingComponent @ 148c9d4e0

void __cdecl UFuncTestRenderingComponent::StaticRegisterNativesUFuncTestRenderingComponent(void)

{
  return;
}

