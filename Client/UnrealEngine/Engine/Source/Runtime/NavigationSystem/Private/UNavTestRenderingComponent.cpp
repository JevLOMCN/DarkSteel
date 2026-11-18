// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 9

// StaticClass @ 146dc9440

UClass * __cdecl UNavTestRenderingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavTestRenderingComponent",
               &Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton,
               StaticRegisterNativesUNavTestRenderingComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavTestRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavTestRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton;
}

// UNavTestRenderingComponent @ 146dd8ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavTestRenderingComponent * __thiscall
UNavTestRenderingComponent::UNavTestRenderingComponent
          (UNavTestRenderingComponent *this,FVTableHelper *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FNavTestDebugDrawDelegateHelper::FNavTestDebugDrawDelegateHelper
            (&this->NavTestDebugDrawDelegateHelper);
  return this;
}

// UNavTestRenderingComponent @ 146dd8b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavTestRenderingComponent * __thiscall
UNavTestRenderingComponent::UNavTestRenderingComponent
          (UNavTestRenderingComponent *this,FObjectInitializer *param_1)

{
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FNavTestDebugDrawDelegateHelper::FNavTestDebugDrawDelegateHelper
            (&this->NavTestDebugDrawDelegateHelper);
  return this;
}

// ~UNavTestRenderingComponent @ 146dda260

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
UNavTestRenderingComponent::~UNavTestRenderingComponent(UNavTestRenderingComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  FNavTestDebugDrawDelegateHelper::~FNavTestDebugDrawDelegateHelper
            (&this->NavTestDebugDrawDelegateHelper);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  return;
}

// CalcBounds @ 146de3050

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

TBoxSphereBounds<double,double> * __thiscall
UNavTestRenderingComponent::CalcBounds
          (UNavTestRenderingComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  double *pdVar8;
  TBoxSphereBounds<double,double> *pTVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_f8;
  plVar11 = *(longlong **)&this->field_0xa8;
  local_98 = (double)(ulonglong)local_98._0_1_;
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  local_b8 = 0.0;
  dStack_b0 = 0.0;
  local_a8 = 0.0;
  dStack_a0 = 0.0;
  if (plVar11 != (longlong *)0x0) {
    pUVar7 = ANavigationTestingActor::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(plVar11[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar11[2] + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_146de30c9;
  }
  plVar11 = (longlong *)0x0;
LAB_146de30c9:
  if (plVar11 != (longlong *)0x0) {
    pdVar8 = (double *)(**(code **)(*plVar11 + 0x670))(plVar11,local_78,1,0);
    local_c8 = *pdVar8;
    dStack_c0 = pdVar8[1];
    local_b8 = pdVar8[2];
    dStack_b0 = pdVar8[3];
    local_a8 = pdVar8[4];
    dStack_a0 = pdVar8[5];
    local_98 = pdVar8[6];
    if (plVar11[0x7f] != 0) {
      uVar12 = 0;
      lVar10 = 0;
      while( true ) {
        if ((plVar11[0x7f] == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
          return pTVar9;
        }
        if (*(int *)(plVar11[0x7f] + 0x30) <= (int)uVar12) break;
        if ((plVar11[0x7f] == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
          return pTVar9;
        }
        lVar3 = plVar11[0x7f];
        iVar2 = *(int *)(lVar3 + 0x30);
        uVar6 = 0;
        if ((int)uVar12 < iVar2) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_d8 = (longlong)(int)uVar12;
          local_d0 = (longlong)iVar2;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
            return pTVar9;
          }
        }
        lVar3 = *(longlong *)(lVar3 + 0x28);
        if (local_98._0_1_ == '\0') {
          local_c8 = *(double *)(lVar10 + lVar3);
          dStack_c0 = ((double *)(lVar10 + lVar3))[1];
          uVar12 = uVar12 + 1;
          local_98 = (double)CONCAT71(local_98._1_7_,1);
          local_b8 = *(double *)(lVar10 + 0x10 + lVar3);
          lVar10 = lVar10 + 0x30;
          dStack_b0 = local_c8;
          local_a8 = dStack_c0;
          dStack_a0 = local_b8;
        }
        else {
          dVar21 = *(double *)(lVar10 + lVar3);
          uVar12 = uVar12 + 1;
          dVar22 = *(double *)(lVar10 + 8 + lVar3);
          uVar19 = SUB84(dVar22,0);
          uVar20 = (undefined4)((ulonglong)dVar22 >> 0x20);
          dVar23 = dVar21;
          if (local_c8 <= dVar21) {
            dVar23 = local_c8;
          }
          dVar1 = *(double *)(lVar10 + 0x10 + lVar3);
          uVar17 = SUB84(dVar1,0);
          uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
          uVar15 = uVar19;
          uVar16 = uVar20;
          if (dStack_c0 <= dVar22) {
            uVar15 = SUB84(dStack_c0,0);
            uVar16 = (undefined4)((ulonglong)dStack_c0 >> 0x20);
          }
          if (dVar21 <= dStack_b0) {
            dVar21 = dStack_b0;
          }
          if (dVar22 <= local_a8) {
            uVar19 = SUB84(local_a8,0);
            uVar20 = (undefined4)((ulonglong)local_a8 >> 0x20);
          }
          lVar10 = lVar10 + 0x30;
          dVar22 = dVar1;
          if (local_b8 <= dVar1) {
            dVar22 = local_b8;
          }
          if (dVar1 <= dStack_a0) {
            uVar17 = SUB84(dStack_a0,0);
            uVar18 = (undefined4)((ulonglong)dStack_a0 >> 0x20);
          }
          dStack_c0 = (double)CONCAT44(uVar16,uVar15);
          local_a8 = (double)CONCAT44(uVar20,uVar19);
          dStack_a0 = (double)CONCAT44(uVar18,uVar17);
          local_c8 = dVar23;
          local_b8 = dVar22;
          dStack_b0 = dVar21;
        }
      }
    }
  }
  dVar21 = (dStack_b0 - local_c8) * __real_3fe0000000000000;
  dVar22 = (local_a8 - dStack_c0) * __real_3fe0000000000000;
  dVar23 = (dStack_a0 - local_b8) * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar21 + local_c8;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar22 + dStack_c0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar23 + local_b8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar21;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar22;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar23;
  dVar21 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  dVar22 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  dVar23 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  auVar13._0_8_ = dVar21 * dVar21;
  auVar13._8_8_ = 0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar22 * dVar22 + auVar13._0_8_ + dVar23 * dVar23;
  auVar14 = sqrtpd(auVar13,auVar14);
  __return_storage_ptr__->SphereRadius = auVar14._0_8_;
  return __return_storage_ptr__;
}

// CreateDebugSceneProxy @ 146de6500

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
UNavTestRenderingComponent::CreateDebugSceneProxy(UNavTestRenderingComponent *this)

{
  FNavTestSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x490);
  if (pFVar1 == (FNavTestSceneProxy *)0x0) {
    pFVar1 = (FNavTestSceneProxy *)0x0;
  }
  else {
    pFVar1 = FNavTestSceneProxy::FNavTestSceneProxy(pFVar1,this);
  }
  FNavTestDebugDrawDelegateHelper::SetupFromProxy(&this->NavTestDebugDrawDelegateHelper,pFVar1);
  return (FDebugRenderSceneProxy *)pFVar1;
}

// GetDebugDrawDelegateHelper @ 146e01450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugDrawDelegateHelper * __thiscall
UNavTestRenderingComponent::GetDebugDrawDelegateHelper(UNavTestRenderingComponent *this)

{
  return (FDebugDrawDelegateHelper *)&this->NavTestDebugDrawDelegateHelper;
}

// GetPrivateStaticClass @ 146e0ec00

UClass * __cdecl UNavTestRenderingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavTestRenderingComponent",
               &Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton,
               StaticRegisterNativesUNavTestRenderingComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavTestRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavTestRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavTestRenderingComponent.InnerSingleton;
}

// StaticRegisterNativesUNavTestRenderingComponent @ 146e29e50

void __cdecl UNavTestRenderingComponent::StaticRegisterNativesUNavTestRenderingComponent(void)

{
  return;
}

