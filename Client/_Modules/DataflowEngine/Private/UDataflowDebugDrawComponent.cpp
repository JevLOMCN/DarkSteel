// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 8

// StaticClass @ 1462c0b80

UClass * __cdecl UDataflowDebugDrawComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowDebugDrawComponent",
               &Z_Registration_Info_UClass_UDataflowDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUDataflowDebugDrawComponent,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UDataflowDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowDebugDrawComponent.InnerSingleton;
}

// UDataflowDebugDrawComponent @ 1462cf200

UDataflowDebugDrawComponent * __thiscall
UDataflowDebugDrawComponent::UDataflowDebugDrawComponent
          (UDataflowDebugDrawComponent *this,FVTableHelper *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UDataflowDebugDrawComponent @ 1462cf270

UDataflowDebugDrawComponent * __thiscall
UDataflowDebugDrawComponent::UDataflowDebugDrawComponent
          (UDataflowDebugDrawComponent *this,FObjectInitializer *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UDataflowDebugDrawComponent @ 1462d02c0

void __thiscall
UDataflowDebugDrawComponent::~UDataflowDebugDrawComponent(UDataflowDebugDrawComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  return;
}

// CalcBounds @ 1462d3750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UDataflowDebugDrawComponent::CalcBounds
          (UDataflowDebugDrawComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__
          ,TTransform<double> *param_1)

{
  undefined1 (*pauVar1) [16];
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  bool bVar24;
  char cVar25;
  TBoxSphereBounds<double,double> *pTVar26;
  double *pdVar27;
  undefined8 *puVar28;
  undefined1 (*pauVar29) [16];
  float *pfVar30;
  double *pdVar31;
  undefined1 (*pauVar32) [16];
  longlong lVar33;
  float *pfVar34;
  longlong *plVar35;
  double *pdVar36;
  undefined8 *puVar37;
  longlong lVar38;
  float fVar39;
  undefined4 uVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 in_XMM2 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStackY_8f8 [32];
  undefined1 local_8b8 [16];
  undefined1 local_8a8 [16];
  double local_898;
  double dStack_890;
  double local_888;
  bool local_880;
  undefined1 local_878;
  undefined1 local_877;
  undefined1 local_876;
  undefined1 local_875;
  undefined1 local_874;
  undefined1 local_873;
  undefined1 local_872;
  undefined1 local_871;
  undefined1 local_870;
  undefined1 local_86f;
  undefined1 local_86e;
  undefined1 local_86d;
  undefined1 local_86c;
  undefined1 local_86b;
  undefined1 local_86a [2];
  ForAnyElementType local_868;
  int local_860;
  int local_85c;
  FName local_858;
  undefined1 local_850 [24];
  TVector<double>_u_0 TStack_838;
  double local_820;
  undefined1 local_818 [24];
  double dStack_800;
  double dStack_7f8;
  double dStack_7f0;
  double local_7e8;
  undefined1 local_7e0 [24];
  double dStack_7c8;
  double dStack_7c0;
  double dStack_7b8;
  double local_7b0;
  TVector<double>_u_0 local_7a8;
  double dStack_790;
  double dStack_788;
  double dStack_780;
  double local_778;
  TVector<double>_u_0 local_770;
  double dStack_758;
  double dStack_750;
  double dStack_748;
  double local_740;
  TVector<double>_u_0 local_738;
  double dStack_720;
  double dStack_718;
  double dStack_710;
  double local_708;
  TVector<double>_u_0 local_700;
  double dStack_6e8;
  double dStack_6e0;
  double dStack_6d8;
  double local_6d0;
  TVector<double>_u_0 local_6c8;
  undefined8 uStack_6b0;
  double dStack_6a8;
  undefined8 uStack_6a0;
  double dStack_698;
  TVector<double>_u_0 local_690;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 uStack_668;
  undefined8 local_660;
  TVector<double>_u_0 local_658;
  double local_640;
  double local_638;
  double local_630;
  double local_628;
  TVector<double>_u_0 local_620;
  double local_608;
  double local_600;
  double local_5f8;
  double local_5f0;
  TVector<double>_u_0 local_5e8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  undefined1 local_5b0 [16];
  double local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  TVector<double>_u_0 local_568;
  undefined8 local_550;
  undefined8 uStack_548;
  double local_540;
  undefined8 local_538;
  TVector<double>_u_0 local_530;
  undefined8 local_518;
  undefined8 uStack_510;
  double local_508;
  undefined8 local_500;
  TVector<double>_u_0 local_4f8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  double local_4d0;
  undefined8 local_4c8;
  TVector<double>_u_0 local_4c0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  undefined8 local_490;
  TVector<double>_u_0 local_488;
  undefined8 local_470;
  undefined8 uStack_468;
  double local_460;
  undefined8 local_458;
  double local_450 [7];
  undefined1 local_418 [56];
  TBoxSphereBounds<double,double> local_3e0;
  TBoxSphereBounds<double,double> local_3a8;
  TBoxSphereBounds<double,double> local_370;
  TBoxSphereBounds<double,double> local_338;
  TBoxSphereBounds<double,double> local_300;
  TBoxSphereBounds<double,double> local_2c8;
  TBoxSphereBounds<double,double> local_290;
  TBoxSphereBounds<double,double> local_258;
  TBoxSphereBounds<double,double> local_220;
  TBoxSphereBounds<double,double> local_1e8;
  TBoxSphereBounds<double,double> local_1b0;
  TBoxSphereBounds<double,double> local_178;
  undefined1 local_140 [24];
  TVector<double>_u_0 TStack_128;
  undefined8 local_110;
  undefined1 local_108 [56];
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  local_5a0 = (param_1->Translation).ZW.m128d_f64[0];
  local_5b0 = *(undefined1 (*) [16])(param_1->Translation).XY.m128d_f64;
  local_550 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  uStack_548 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_880 = false;
  local_540 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_538 = 0;
  local_568._0_16_ = local_5b0;
  local_568._s_0.Z = local_5a0;
  UE::Math::TBoxSphereBounds<double,double>::Builder::Append
            ((Builder *)local_8b8,(TBoxSphereBounds<double,double> *)&local_568._s_0);
  if ((*(longlong *)&this->field_0x530 != *(longlong *)&this->field_0x330) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneProxy == SceneData.SceneProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                          ,0x801,L""), bVar24)) {
    pcVar7 = (code *)swi(3);
    pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
    return pTVar26;
  }
  lVar5 = *(longlong *)&this->field_0x330;
  if (lVar5 != 0) {
    pdVar31 = *(double **)(lVar5 + 0x280);
    pdVar27 = pdVar31 + 3;
    iVar4 = *(int *)(lVar5 + 0x288);
    pdVar36 = pdVar31 + (longlong)iVar4 * 7;
    while( true ) {
      if (*(int *)(lVar5 + 0x288) != iVar4) {
        local_878 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FDebugLine,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_878);
      }
      if (pdVar31 == pdVar36) break;
      local_530._s_0.X = *pdVar31;
      local_530._s_0.Y = pdVar31[1];
      local_530._s_0.Z = pdVar31[2];
      local_518 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uStack_510 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_500 = 0;
      local_508 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                ((Builder *)local_8b8,(TBoxSphereBounds<double,double> *)&local_530._s_0);
      local_4f8._s_0.X = *pdVar27;
      local_4f8._s_0.Y = pdVar27[1];
      local_4f8._s_0.Z = pdVar27[2];
      local_4e0 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uStack_4d8 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_4c8 = 0;
      local_4d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                ((Builder *)local_8b8,(TBoxSphereBounds<double,double> *)&local_4f8._s_0);
      pdVar31 = pdVar31 + 7;
      pdVar27 = pdVar27 + 7;
    }
    pdVar31 = *(double **)(lVar5 + 0x290);
    iVar4 = *(int *)(lVar5 + 0x298);
    pdVar27 = pdVar31 + 3;
    pdVar36 = pdVar31 + (longlong)iVar4 * 7;
    while( true ) {
      if (*(int *)(lVar5 + 0x298) != iVar4) {
        local_877 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FDashedLine,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_877);
      }
      if (pdVar31 == pdVar36) break;
      local_4c0._s_0.X = *pdVar31;
      local_4c0._s_0.Y = pdVar31[1];
      local_4c0._s_0.Z = pdVar31[2];
      local_4a8 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uStack_4a0 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_490 = 0;
      local_498 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                ((Builder *)local_8b8,(TBoxSphereBounds<double,double> *)&local_4c0._s_0);
      local_488._s_0.X = *pdVar27;
      local_488._s_0.Y = pdVar27[1];
      local_488._s_0.Z = pdVar27[2];
      local_470 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uStack_468 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_458 = 0;
      local_460 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                ((Builder *)local_8b8,(TBoxSphereBounds<double,double> *)&local_488._s_0);
      pdVar31 = pdVar31 + 7;
      pdVar27 = pdVar27 + 7;
    }
    iVar4 = *(int *)(lVar5 + 0x2a8);
    puVar28 = *(undefined8 **)(lVar5 + 0x2a0);
    puVar37 = puVar28 + (longlong)iVar4 * 7;
    while( true ) {
      if (*(int *)(lVar5 + 0x2a8) != iVar4) {
        local_876 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FArrowLine,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_876);
      }
      if (puVar28 == puVar37) break;
      local_580 = puVar28[3];
      uStack_578 = puVar28[4];
      uVar21 = *puVar28;
      uVar22 = puVar28[1];
      uVar40 = *(undefined4 *)(puVar28 + 2);
      uVar49 = *(undefined4 *)((longlong)puVar28 + 0x14);
      uVar3 = puVar28[5];
      local_868.Data = (FScriptContainerElement *)0x0;
      local_860 = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,2,0,&local_868,2,&local_85c);
      iVar23 = local_860;
      *(undefined8 *)local_868.Data = uVar21;
      *(undefined8 *)(local_868.Data + 8) = uVar22;
      *(undefined4 *)(local_868.Data + 0x10) = uVar40;
      *(undefined4 *)(local_868.Data + 0x14) = uVar49;
      *(undefined4 *)(local_868.Data + 0x18) = (undefined4)local_580;
      *(undefined4 *)(local_868.Data + 0x1c) = local_580._4_4_;
      *(undefined8 *)(local_868.Data + 0x20) = uStack_578;
      *(undefined8 *)(local_868.Data + 0x28) = uVar3;
      local_598 = uVar21;
      uStack_590 = uVar22;
      uStack_588 = uVar40;
      uStack_584 = uVar49;
      uStack_570 = uVar3;
      if ((local_860 < 1) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
        return pTVar26;
      }
      UE::Math::TBox<double>::TBox<double>
                ((TBox<double> *)local_140,(TVector<double> *)local_868.Data,iVar23);
      if (local_868.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_868.Data);
      }
      dVar18 = (double)*(float *)((longlong)puVar28 + 0x34);
      local_418[0x30] = 1;
      dVar41 = (double)local_140._8_8_ - dVar18;
      dVar14 = TStack_128._s_0.X + dVar18;
      in_XMM2._0_8_ = TStack_128._s_0.Z + dVar18;
      in_XMM2._8_8_ = 0;
      local_140._8_4_ = SUB84(dVar41,0);
      local_140._0_8_ = (double)local_140._0_8_ - dVar18;
      local_140._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      local_110._1_1_ = local_418[0x31];
      local_110._2_1_ = local_418[0x32];
      local_110._3_1_ = local_418[0x33];
      local_110._4_1_ = local_418[0x34];
      local_110._5_1_ = local_418[0x35];
      local_110._6_1_ = local_418[0x36];
      local_110._7_1_ = local_418[0x37];
      local_110._0_1_ = '\x01';
      unique0x100011cb = SUB84(dVar14,0);
      local_140._16_8_ = (double)local_140._16_8_ - dVar18;
      unique0x100011cf = (int)((ulonglong)dVar14 >> 0x20);
      TStack_128._16_4_ = SUB84(in_XMM2._0_8_,0);
      TStack_128._s_0.Y = TStack_128._s_0.Y + dVar18;
      TStack_128._20_4_ = (int)((ulonglong)in_XMM2._0_8_ >> 0x20);
      UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
                ((TBoxSphereBounds<double,double> *)local_418,(TBox<double> *)local_140);
      UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                ((Builder *)local_8b8,(TBoxSphereBounds<double,double> *)local_418);
      puVar28 = puVar28 + 7;
    }
    iVar4 = *(int *)(lVar5 + 0x2b8);
    pauVar32 = *(undefined1 (**) [16])(lVar5 + 0x2b0);
    pauVar29 = pauVar32 + (longlong)iVar4 * 4;
    while( true ) {
      if (*(int *)(lVar5 + 0x2b8) != iVar4) {
        local_875 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FCircle,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_875);
      }
      if (pauVar32 == pauVar29) break;
      local_7a8._s_0.Z = (double)*(undefined8 *)pauVar32[1];
      in_XMM2._0_8_ = (double)*(float *)pauVar32[3];
      local_7a8._s_0.X = *(double *)*pauVar32;
      local_7a8._s_0.Y = *(double *)(*pauVar32 + 8);
      in_XMM2._8_8_ = in_XMM2._0_8_;
      local_778 = in_XMM2._0_8_;
      if (local_880 == false) {
        local_8b8 = *pauVar32;
        pauVar32 = pauVar32 + 4;
        local_880 = true;
        uVar40 = (undefined4)((ulonglong)in_XMM2._0_8_ >> 0x20);
        dStack_890 = in_XMM2._0_8_;
        local_898 = in_XMM2._0_8_;
        auVar8._8_4_ = SUB84(in_XMM2._0_8_,0);
        auVar8._0_8_ = local_7a8._s_0.Z;
        auVar8._12_4_ = uVar40;
        dStack_790 = auVar8._8_8_;
        local_8a8._8_4_ = SUB84(in_XMM2._0_8_,0);
        local_8a8._0_8_ = local_7a8._s_0.Z;
        local_8a8._12_4_ = uVar40;
        local_888 = in_XMM2._0_8_;
        dStack_788 = in_XMM2._0_8_;
        dStack_780 = in_XMM2._0_8_;
      }
      else {
        dStack_790 = in_XMM2._0_8_;
        dStack_788 = in_XMM2._0_8_;
        dStack_780 = in_XMM2._0_8_;
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_3a8,
                             (TBoxSphereBounds<double,double> *)&local_7a8._s_0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar14 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        local_8b8 = auVar43;
        pauVar32 = pauVar32 + 4;
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar14;
      }
    }
    iVar4 = *(int *)(lVar5 + 0x2c8);
    pauVar29 = *(undefined1 (**) [16])(lVar5 + 0x2c0);
    pauVar32 = (undefined1 (*) [16])((longlong)pauVar29 + (longlong)iVar4 * 0x48);
    while( true ) {
      if (*(int *)(lVar5 + 0x2c8) != iVar4) {
        local_874 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FWireCylinder,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_874);
      }
      if (pauVar29 == pauVar32) break;
      fVar39 = *(float *)(pauVar29[3] + 4);
      if (*(float *)(pauVar29[3] + 4) <= *(float *)pauVar29[3]) {
        fVar39 = *(float *)pauVar29[3];
      }
      local_770._s_0.Z = (double)*(undefined8 *)pauVar29[1];
      in_XMM2._0_8_ = (double)fVar39;
      in_XMM2._8_8_ = in_XMM2._0_8_;
      local_740 = in_XMM2._0_8_;
      local_770._s_0.X = *(double *)*pauVar29;
      local_770._s_0.Y = *(double *)(*pauVar29 + 8);
      if (local_880 == false) {
        local_8b8 = *pauVar29;
        pauVar29 = (undefined1 (*) [16])(pauVar29[4] + 8);
        local_880 = true;
        uVar40 = (undefined4)((ulonglong)in_XMM2._0_8_ >> 0x20);
        dStack_890 = in_XMM2._0_8_;
        local_898 = in_XMM2._0_8_;
        auVar9._8_4_ = SUB84(in_XMM2._0_8_,0);
        auVar9._0_8_ = local_770._s_0.Z;
        auVar9._12_4_ = uVar40;
        dStack_758 = auVar9._8_8_;
        local_8a8._8_4_ = SUB84(in_XMM2._0_8_,0);
        local_8a8._0_8_ = local_770._s_0.Z;
        local_8a8._12_4_ = uVar40;
        local_888 = in_XMM2._0_8_;
        dStack_750 = in_XMM2._0_8_;
        dStack_748 = in_XMM2._0_8_;
      }
      else {
        dStack_758 = in_XMM2._0_8_;
        dStack_750 = in_XMM2._0_8_;
        dStack_748 = in_XMM2._0_8_;
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_258,
                             (TBoxSphereBounds<double,double> *)&local_770._s_0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar14 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        local_8b8 = auVar43;
        pauVar29 = (undefined1 (*) [16])(pauVar29[4] + 8);
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar14;
      }
    }
    iVar4 = *(int *)(lVar5 + 0x2d8);
    pauVar32 = *(undefined1 (**) [16])(lVar5 + 0x2d0);
    pauVar29 = pauVar32 + (longlong)iVar4 * 2;
    while( true ) {
      if (*(int *)(lVar5 + 0x2d8) != iVar4) {
        local_873 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FWireStar,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_873);
      }
      dVar18 = __real_3fd0000000000000;
      dVar14 = __real_3fe0000000000000;
      if (pauVar32 == pauVar29) break;
      local_738._s_0.Z = (double)*(undefined8 *)pauVar32[1];
      in_XMM2._0_8_ = (double)*(float *)(pauVar32[1] + 0xc);
      local_738._s_0.X = *(double *)*pauVar32;
      local_738._s_0.Y = *(double *)(*pauVar32 + 8);
      in_XMM2._8_8_ = in_XMM2._0_8_;
      local_708 = in_XMM2._0_8_;
      if (local_880 == false) {
        local_8b8 = *pauVar32;
        pauVar32 = pauVar32 + 2;
        local_880 = true;
        uVar40 = (undefined4)((ulonglong)in_XMM2._0_8_ >> 0x20);
        dStack_890 = in_XMM2._0_8_;
        local_898 = in_XMM2._0_8_;
        auVar10._8_4_ = SUB84(in_XMM2._0_8_,0);
        auVar10._0_8_ = local_738._s_0.Z;
        auVar10._12_4_ = uVar40;
        dStack_720 = auVar10._8_8_;
        local_8a8._8_4_ = SUB84(in_XMM2._0_8_,0);
        local_8a8._0_8_ = local_738._s_0.Z;
        local_8a8._12_4_ = uVar40;
        local_888 = in_XMM2._0_8_;
        dStack_718 = in_XMM2._0_8_;
        dStack_710 = in_XMM2._0_8_;
      }
      else {
        dStack_720 = in_XMM2._0_8_;
        dStack_718 = in_XMM2._0_8_;
        dStack_710 = in_XMM2._0_8_;
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_370,
                             (TBoxSphereBounds<double,double> *)&local_738._s_0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar14 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        local_8b8 = auVar43;
        pauVar32 = pauVar32 + 2;
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar14;
      }
    }
    iVar4 = *(int *)(lVar5 + 0x2e8);
    pdVar27 = *(double **)(lVar5 + 0x2e0);
    pdVar31 = pdVar27 + (longlong)iVar4 * 0x16;
    while( true ) {
      if (*(int *)(lVar5 + 0x2e8) != iVar4) {
        local_872 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FDebugBox,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_872);
      }
      if (pdVar27 == pdVar31) break;
      dVar45 = (double)*(float *)((longlong)pdVar27 + 0x3c);
      dVar41 = (dVar45 + pdVar27[4]) - (pdVar27[1] - dVar45);
      local_640 = (dVar45 + pdVar27[3]) - (*pdVar27 - dVar45);
      local_630 = (dVar45 + pdVar27[5]) - (pdVar27[2] - dVar45);
      auVar42._0_8_ = local_640 * local_640;
      auVar42._8_8_ = 0;
      in_XMM2._0_8_ = local_630 * local_630;
      in_XMM2._8_8_ = 0;
      local_640 = local_640 * dVar14;
      local_638 = dVar41 * dVar14;
      local_630 = local_630 * dVar14;
      local_658._s_0.X = (*pdVar27 - dVar45) + local_640;
      local_658._s_0.Y = (pdVar27[1] - dVar45) + local_638;
      local_658._s_0.Z = (pdVar27[2] - dVar45) + local_630;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (dVar41 * dVar41 + auVar42._0_8_ + in_XMM2._0_8_) * dVar18;
      auVar43 = sqrtpd(auVar42,auVar11);
      local_628 = auVar43._0_8_;
      if (local_880 == false) {
        pdVar27 = pdVar27 + 0x16;
        local_8b8._8_8_ = local_658._s_0.Y;
        local_8b8._0_8_ = local_658._s_0.X;
        local_8a8._8_8_ = local_640;
        local_8a8._0_8_ = local_658._s_0.Z;
        dStack_890 = local_630;
        local_898 = local_638;
        local_888 = auVar43._0_8_;
        local_880 = true;
      }
      else {
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_338,
                             (TBoxSphereBounds<double,double> *)&local_658._s_0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        local_8b8 = auVar43;
        pdVar27 = pdVar27 + 0x16;
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar41;
      }
    }
    pfVar30 = *(float **)(lVar5 + 0x2f0);
    iVar4 = *(int *)(lVar5 + 0x2f8);
    pauVar32 = (undefined1 (*) [16])(pfVar30 + 2);
    pfVar34 = pfVar30 + (longlong)iVar4 * 10;
    while( true ) {
      if (*(int *)(lVar5 + 0x2f8) != iVar4) {
        local_871 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FSphere,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_871);
      }
      dVar41 = _UNK_1512468d8;
      uVar3 = ___xmm_40590000000000004059000000000000;
      if (pfVar30 == pfVar34) break;
      local_700._s_0.Z = (double)*(undefined8 *)pauVar32[1];
      in_XMM2._0_8_ = (double)*pfVar30;
      local_700._s_0.X = *(double *)*pauVar32;
      local_700._s_0.Y = *(double *)((longlong)*pauVar32 + 8);
      in_XMM2._8_8_ = in_XMM2._0_8_;
      local_6d0 = in_XMM2._0_8_;
      if (local_880 == false) {
        local_8b8 = *pauVar32;
        pfVar30 = pfVar30 + 10;
        local_880 = true;
        uVar40 = (undefined4)((ulonglong)in_XMM2._0_8_ >> 0x20);
        dStack_890 = in_XMM2._0_8_;
        local_898 = in_XMM2._0_8_;
        pauVar32 = (undefined1 (*) [16])((longlong)pauVar32[2] + 8);
        auVar12._8_4_ = SUB84(in_XMM2._0_8_,0);
        auVar12._0_8_ = local_700._s_0.Z;
        auVar12._12_4_ = uVar40;
        dStack_6e8 = auVar12._8_8_;
        local_8a8._8_4_ = SUB84(in_XMM2._0_8_,0);
        local_8a8._0_8_ = local_700._s_0.Z;
        local_8a8._12_4_ = uVar40;
        local_888 = in_XMM2._0_8_;
        dStack_6e0 = in_XMM2._0_8_;
        dStack_6d8 = in_XMM2._0_8_;
      }
      else {
        dStack_6e8 = in_XMM2._0_8_;
        dStack_6e0 = in_XMM2._0_8_;
        dStack_6d8 = in_XMM2._0_8_;
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_300,
                             (TBoxSphereBounds<double,double> *)&local_700._s_0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        pfVar30 = pfVar30 + 10;
        local_8b8 = auVar43;
        pauVar32 = (undefined1 (*) [16])((longlong)pauVar32[2] + 8);
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar41;
      }
    }
    lVar33 = *(longlong *)(lVar5 + 0x300);
    iVar4 = *(int *)(lVar5 + 0x308);
    pauVar32 = (undefined1 (*) [16])(lVar33 + 0x10);
    lVar38 = (longlong)iVar4 * 0x30 + lVar33;
    while( true ) {
      if (*(int *)(lVar5 + 0x308) != iVar4) {
        local_870 = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FText3d,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_870);
      }
      auVar43 = ___xmm_3ff00000000000000000000000000000;
      if (lVar33 == lVar38) break;
      pauVar29 = pauVar32 + 1;
      local_6c8._0_16_ = *pauVar32;
      local_6c8._s_0.Z = *(double *)*pauVar29;
      uStack_6a0 = uVar3;
      dStack_698 = dVar41;
      uStack_6b0 = uVar3;
      dStack_6a8 = dVar41;
      if (local_880 == false) {
        lVar33 = lVar33 + 0x30;
        local_880 = true;
        local_8b8 = *pauVar32;
        pauVar32 = pauVar32 + 3;
        dStack_890 = (double)uVar3;
        local_898 = dVar41;
        local_8a8._8_8_ = uVar3;
        local_8a8._0_8_ = *(double *)*pauVar29;
        local_888 = dVar41;
      }
      else {
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_2c8,
                             (TBoxSphereBounds<double,double> *)&local_6c8._s_0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar45 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        lVar33 = lVar33 + 0x30;
        local_8b8 = auVar43;
        pauVar32 = pauVar32 + 3;
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar45;
      }
    }
    pdVar31 = *(double **)(lVar5 + 0x310);
    iVar4 = *(int *)(lVar5 + 0x318);
    pdVar27 = pdVar31 + 10;
    pdVar36 = pdVar31 + (longlong)iVar4 * 0x14;
    while( true ) {
      if (*(int *)(lVar5 + 0x318) != iVar4) {
        local_86f = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FCone,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_86f);
      }
      if (pdVar31 == pdVar36) break;
      dVar45 = auVar43._8_8_;
      dVar41 = auVar43._0_8_;
      auVar44._8_4_ = auVar43._0_4_;
      auVar44._0_8_ = dVar41;
      auVar44._12_4_ = auVar43._4_4_;
      dVar19 = *pdVar31 * *pdVar31 + pdVar27[-9] * pdVar27[-9] + pdVar27[-8] * pdVar27[-8];
      local_850._0_8_ =
           pdVar27[-6] * 0.0 + *pdVar31 * 0.0 + dVar41 * pdVar27[-2] + pdVar27[2] * dVar45;
      dVar20 = pdVar27[-5] * 0.0 + pdVar31[1] * 0.0 + auVar44._8_8_ * pdVar27[-1] +
               pdVar27[3] * dVar45;
      uVar40 = (undefined4)((ulonglong)dVar20 >> 0x20);
      local_850._16_8_ =
           pdVar27[-4] * 0.0 + pdVar27[-8] * 0.0 + dVar41 * *pdVar27 + pdVar27[4] * dVar45;
      auVar47._0_8_ = pdVar27[-6] * pdVar27[-6];
      auVar47._8_8_ = 0;
      dVar41 = pdVar27[-5] * pdVar27[-5] + auVar47._0_8_ + pdVar27[-4] * pdVar27[-4];
      dVar45 = pdVar27[-1] * pdVar27[-1] + pdVar27[-2] * pdVar27[-2] + *pdVar27 * *pdVar27;
      local_850._8_8_ = dVar20;
      if (dVar45 <= dVar41) {
        dVar45 = dVar41;
      }
      if (dVar45 <= dVar19) {
        dVar45 = dVar19;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar45;
      auVar48 = sqrtpd(auVar47,auVar17);
      in_XMM2._0_8_ = auVar48._0_8_;
      in_XMM2._8_8_ = in_XMM2._0_8_;
      local_820 = in_XMM2._0_8_;
      if (local_880 == false) {
        local_880 = true;
        pdVar31 = pdVar31 + 0x14;
        local_850._8_4_ = SUB84(dVar20,0);
        local_850._12_4_ = uVar40;
        pdVar27 = pdVar27 + 0x14;
        local_8b8._8_4_ = SUB84(dVar20,0);
        local_8b8._0_8_ = local_850._0_8_;
        local_8b8._12_4_ = uVar40;
        local_8a8._8_8_ = in_XMM2._0_8_;
        local_8a8._0_8_ = local_850._16_8_;
        auVar13._8_4_ = auVar48._0_4_;
        auVar13._0_8_ = in_XMM2._0_8_;
        auVar13._12_4_ = auVar48._4_4_;
        TStack_838._8_8_ = in_XMM2._0_8_;
        TStack_838._s_0.Z = auVar13._8_8_;
        unique0x100008f7 = auVar48._0_4_;
        local_898 = in_XMM2._0_8_;
        unique0x100008fb = auVar48._4_4_;
        local_888 = in_XMM2._0_8_;
        TStack_838._0_8_ = in_XMM2._0_8_;
      }
      else {
        TStack_838._0_8_ = in_XMM2._0_8_;
        TStack_838._8_8_ = in_XMM2._0_8_;
        TStack_838._16_8_ = in_XMM2._0_8_;
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_290,
                             (TBoxSphereBounds<double,double> *)local_850);
        auVar48 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar15 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        pdVar31 = pdVar31 + 0x14;
        local_8b8 = auVar48;
        pdVar27 = pdVar27 + 0x14;
        local_8a8 = auVar16;
        _local_898 = auVar15;
        local_888 = dVar41;
      }
    }
    lVar33 = *(longlong *)(lVar5 + 800);
    iVar4 = *(int *)(lVar5 + 0x328);
    pdVar27 = (double *)(lVar33 + 0x28);
    lVar38 = (longlong)iVar4 * 0x60 + lVar33;
    while( true ) {
      if (*(int *)(lVar5 + 0x328) != iVar4) {
        local_86e = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FMesh,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_86e);
      }
      if (lVar33 == lVar38) break;
      dVar20 = pdVar27[3] - *pdVar27;
      dVar19 = pdVar27[2] - pdVar27[-1];
      dVar45 = pdVar27[4] - pdVar27[1];
      local_608 = dVar19 * dVar14;
      local_600 = dVar20 * dVar14;
      local_5f8 = dVar45 * dVar14;
      pdVar31 = pdVar27 + -1;
      dVar41 = *pdVar27;
      pdVar36 = pdVar27 + 1;
      local_620._s_0.X = local_608 + *pdVar31;
      local_620._s_0.Y = local_600 + dVar41;
      local_620._s_0.Z = local_5f8 + *pdVar36;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (dVar20 * dVar20 + dVar19 * dVar19 + dVar45 * dVar45) * dVar18;
      in_XMM2 = sqrtpd(in_XMM2,auVar15);
      local_5f0 = in_XMM2._0_8_;
      if (local_880 == false) {
        lVar33 = lVar33 + 0x60;
        pdVar27 = pdVar27 + 0xc;
        local_8b8._8_8_ = local_600 + dVar41;
        local_8b8._0_8_ = local_608 + *pdVar31;
        local_8a8._8_8_ = local_608;
        local_8a8._0_8_ = local_5f8 + *pdVar36;
        dStack_890 = local_5f8;
        local_898 = local_600;
        local_888 = in_XMM2._0_8_;
        local_880 = true;
      }
      else {
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_178,
                             (TBoxSphereBounds<double,double> *)&local_620._s_0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        lVar33 = lVar33 + 0x60;
        local_8b8 = auVar43;
        pdVar27 = pdVar27 + 0xc;
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar41;
      }
    }
    pfVar34 = *(float **)(lVar5 + 0x330);
    iVar4 = *(int *)(lVar5 + 0x338);
    pfVar30 = pfVar34 + (longlong)iVar4 * 0x20;
    pauVar32 = (undefined1 (*) [16])(pfVar34 + 2);
    while( true ) {
      if (*(int *)(lVar5 + 0x338) != iVar4) {
        local_86d = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FCapsule,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_86d);
      }
      if (pfVar34 == pfVar30) break;
      fVar39 = *(float *)pauVar32[2];
      if (*(float *)pauVar32[2] <= *pfVar34) {
        fVar39 = *pfVar34;
      }
      local_818._16_8_ = *(undefined8 *)pauVar32[1];
      local_7e8 = (double)fVar39;
      dStack_800 = local_7e8;
      dStack_7f0 = local_7e8;
      dStack_7f8 = local_7e8;
      local_818._0_8_ = *(double *)*pauVar32;
      local_818._8_8_ = *(double *)((longlong)*pauVar32 + 8);
      if (local_880 == false) {
        local_8b8 = *pauVar32;
        pfVar34 = pfVar34 + 0x20;
        local_880 = true;
        uVar40 = (undefined4)((ulonglong)local_7e8 >> 0x20);
        pauVar32 = pauVar32 + 8;
        unique0x10000963 = SUB84(local_7e8,0);
        unique0x10000967 = uVar40;
        local_8a8._8_4_ = SUB84(local_7e8,0);
        local_8a8._0_8_ = local_818._16_8_;
        local_8a8._12_4_ = uVar40;
        local_888 = local_7e8;
        _local_898 = _dStack_7f8;
      }
      else {
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_220,
                             (TBoxSphereBounds<double,double> *)local_818);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        pfVar34 = pfVar34 + 0x20;
        local_8b8 = auVar43;
        pauVar32 = pauVar32 + 8;
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar41;
      }
    }
    iVar4 = *(int *)(lVar5 + 0x348);
    pauVar32 = *(undefined1 (**) [16])(lVar5 + 0x340);
    pauVar29 = pauVar32 + (longlong)iVar4 * 4;
    while( true ) {
      if (*(int *)(lVar5 + 0x348) != iVar4) {
        local_86c = 0;
        `TCheckedPointerIterator<FDebugRenderSceneProxy::FCoordinateSystem,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_86c);
      }
      if (pauVar32 == pauVar29) break;
      local_7e0._16_8_ = *(undefined8 *)pauVar32[1];
      local_7b0 = (double)(*(float *)(pauVar32[3] + 8) + *(float *)pauVar32[3]);
      dStack_7c8 = local_7b0;
      dStack_7b8 = local_7b0;
      dStack_7c0 = local_7b0;
      local_7e0._0_8_ = *(double *)*pauVar32;
      local_7e0._8_8_ = *(double *)(*pauVar32 + 8);
      if (local_880 == false) {
        local_8b8 = *pauVar32;
        pauVar32 = pauVar32 + 4;
        local_880 = true;
        uVar40 = (undefined4)((ulonglong)local_7b0 >> 0x20);
        unique0x100009f3 = SUB84(local_7b0,0);
        unique0x100009f7 = uVar40;
        local_8a8._8_4_ = SUB84(local_7b0,0);
        local_8a8._0_8_ = local_7e0._16_8_;
        local_8a8._12_4_ = uVar40;
        local_888 = local_7b0;
        _local_898 = _dStack_7c0;
      }
      else {
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_1e8,
                             (TBoxSphereBounds<double,double> *)local_7e0);
        auVar43 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar48 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        local_8b8 = auVar43;
        pauVar32 = pauVar32 + 4;
        local_8a8 = auVar48;
        _local_898 = auVar16;
        local_888 = dVar41;
      }
    }
    iVar4 = *(int *)(lVar5 + 0x3a8);
    pauVar32 = *(undefined1 (**) [16])(lVar5 + 0x3a0);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pauVar29 = pauVar32 + (longlong)iVar4 * 3;
    uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    while( true ) {
      if (*(int *)(lVar5 + 0x3a8) != iVar4) {
        local_86b = 0;
        `TCheckedPointerIterator<FDataflowDebugRenderSceneProxy::FDebugPoint,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_86b);
        auVar43._8_8_ = 0;
        auVar43._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      if (pauVar32 == pauVar29) break;
      local_690._0_16_ = *pauVar32;
      pauVar1 = pauVar32 + 1;
      local_660 = 0;
      local_690._s_0.Z = *(double *)*pauVar1;
      uStack_678 = uVar40;
      uStack_674 = uVar49;
      uStack_670 = uVar50;
      uStack_66c = uVar51;
      uStack_668 = auVar43._0_8_;
      if (local_880 == false) {
        local_8a8._12_4_ = uVar49;
        local_8a8._8_4_ = uVar40;
        pauVar32 = pauVar32 + 3;
        local_880 = true;
        local_8b8 = local_690._0_16_;
        local_898._4_4_ = uVar51;
        local_898._0_4_ = uVar50;
        dStack_890 = (double)auVar43._0_8_;
        local_8a8._0_8_ = *(double *)*pauVar1;
        local_888 = 0.0;
      }
      else {
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_1b0,
                             (TBoxSphereBounds<double,double> *)&local_690._s_0);
        auVar48 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar15 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        auVar43._8_8_ = 0;
        auVar43._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pauVar32 = pauVar32 + 3;
        local_8b8 = auVar48;
        local_8a8 = auVar16;
        _local_898 = auVar15;
        local_888 = dVar41;
        uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
    }
    plVar35 = *(longlong **)(lVar5 + 0x3b0);
    iVar4 = *(int *)(lVar5 + 0x3b8);
    plVar2 = plVar35 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x3b8) != iVar4) {
        local_86a[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<IDataflowDebugDrawObject>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_86a);
      }
      if (plVar35 == plVar2) break;
      plVar6 = (longlong *)*plVar35;
      if (plVar6 == (longlong *)0x0) {
LAB_1462d4da9:
        plVar35 = plVar35 + 1;
      }
      else {
        pcVar7 = *(code **)(*plVar6 + 8);
        ::FName::FName(&local_858,"FDataflowDebugDrawBaseObject");
        cVar25 = (*pcVar7)(plVar6,local_858);
        if (cVar25 == '\0') goto LAB_1462d4da9;
        pdVar27 = (double *)
                  (**(code **)(*(longlong *)*plVar35 + 0x20))((longlong *)*plVar35,local_108);
        dVar19 = pdVar27[4] - pdVar27[1];
        dVar45 = pdVar27[3] - *pdVar27;
        dVar41 = pdVar27[5] - pdVar27[2];
        local_5c8 = dVar19 * dVar14;
        local_5d0 = dVar45 * dVar14;
        local_5c0 = dVar41 * dVar14;
        local_5e8._s_0.Y = local_5c8 + pdVar27[1];
        local_5e8._s_0.X = local_5d0 + *pdVar27;
        local_5e8._s_0.Z = local_5c0 + pdVar27[2];
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (dVar19 * dVar19 + dVar45 * dVar45 + dVar41 * dVar41) * dVar18;
        auVar43 = sqrtpd(auVar43,auVar16);
        local_5b8 = auVar43._0_8_;
        if (local_880 == false) {
          local_8b8._8_8_ = local_5c8 + pdVar27[1];
          local_8b8._0_8_ = local_5d0 + *pdVar27;
          local_8a8._8_8_ = local_5d0;
          local_8a8._0_8_ = local_5c0 + pdVar27[2];
          dStack_890 = local_5c0;
          local_898 = local_5c8;
          local_888 = auVar43._0_8_;
          local_880 = true;
          goto LAB_1462d4da9;
        }
        pTVar26 = UE::Math::TBoxSphereBounds<double,double>::operator+
                            ((TBoxSphereBounds<double,double> *)local_8b8,&local_3e0,
                             (TBoxSphereBounds<double,double> *)&local_5e8._s_0);
        auVar48 = *(undefined1 (*) [16])&(pTVar26->Origin).field0_0x0;
        auVar16 = *(undefined1 (*) [16])((longlong)&(pTVar26->Origin).field0_0x0 + 0x10);
        auVar15 = *(undefined1 (*) [16])((longlong)&(pTVar26->BoxExtent).field0_0x0 + 8);
        dVar41 = pTVar26->SphereRadius;
        if ((local_880 == false) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          pTVar26 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
          return pTVar26;
        }
        local_8b8 = auVar48;
        plVar35 = plVar35 + 1;
        local_8a8 = auVar16;
        _local_898 = auVar15;
        local_888 = dVar41;
      }
    }
  }
  local_450[6] = 0.0;
  local_450[2] = 0.0;
  local_450[3] = 0.0;
  pdVar27 = (double *)local_8b8;
  if (local_880 == false) {
    pdVar27 = local_450;
  }
  local_450[0] = 0.0;
  local_450[1] = 0.0;
  local_450[4] = 0.0;
  local_450[5] = 0.0;
  dVar14 = pdVar27[1];
  dVar18 = pdVar27[2];
  dVar41 = pdVar27[3];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *pdVar27;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar14;
  dVar45 = pdVar27[4];
  dVar19 = pdVar27[5];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar18;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar41;
  dVar14 = pdVar27[6];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar45;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar19;
  dVar20 = __real_4014000000000000;
  __return_storage_ptr__->SphereRadius = dVar14;
  dVar14 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  dVar18 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  dVar41 = __return_storage_ptr__->SphereRadius;
  dVar46 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z + dVar20;
  dVar45 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
  dVar19 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar19;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar45;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar18 + dVar20;
  auVar48._8_4_ = SUB84(dVar46,0);
  auVar48._0_8_ = dVar14 + dVar20;
  auVar48._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = auVar48;
  __return_storage_ptr__->SphereRadius = dVar41 + dVar20;
  return __return_storage_ptr__;
}

// CreateDebugSceneProxy @ 1462d6850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
UDataflowDebugDrawComponent::CreateDebugSceneProxy(UDataflowDebugDrawComponent *this)

{
  FDebugRenderSceneProxy *this_00;
  
  this_00 = ::operator_new(0x3c0);
  if (this_00 != (FDebugRenderSceneProxy *)0x0) {
    FDebugRenderSceneProxy::FDebugRenderSceneProxy(this_00,(UPrimitiveComponent *)this);
    this_00->_padding_ = (longlong)&___7FDataflowDebugRenderSceneProxy__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    return this_00;
  }
  return (FDebugRenderSceneProxy *)0x0;
}

// GetPrivateStaticClass @ 1462ddde0

UClass * __cdecl UDataflowDebugDrawComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowDebugDrawComponent",
               &Z_Registration_Info_UClass_UDataflowDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUDataflowDebugDrawComponent,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UDataflowDebugDrawComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowDebugDrawComponent.InnerSingleton;
}

// StaticRegisterNativesUDataflowDebugDrawComponent @ 1462e6260

void __cdecl UDataflowDebugDrawComponent::StaticRegisterNativesUDataflowDebugDrawComponent(void)

{
  return;
}

