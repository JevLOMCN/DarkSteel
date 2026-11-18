// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 10

// StaticClass @ 146dc9870

UClass * __cdecl UNavLinkRenderingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkRenderingComponent",
               &Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton,
               StaticRegisterNativesUNavLinkRenderingComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavLinkRenderingComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton;
}

// UNavLinkRenderingComponent @ 146dd8690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavLinkRenderingComponent * __thiscall
UNavLinkRenderingComponent::UNavLinkRenderingComponent
          (UNavLinkRenderingComponent *this,FVTableHelper *param_1)

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

// UNavLinkRenderingComponent @ 146dd8700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavLinkRenderingComponent * __thiscall
UNavLinkRenderingComponent::UNavLinkRenderingComponent
          (UNavLinkRenderingComponent *this,FObjectInitializer *param_1)

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

// ~UNavLinkRenderingComponent @ 146dda180

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
UNavLinkRenderingComponent::~UNavLinkRenderingComponent(UNavLinkRenderingComponent *this)

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

// CalcBounds @ 146de24c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UNavLinkRenderingComponent::CalcBounds
          (UNavLinkRenderingComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  longlong *plVar13;
  TBoxSphereBounds<double,double> *pTVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  TTransform<double> *pTVar19;
  undefined4 uVar20;
  uint uVar21;
  UObjectBaseUtility *pUVar22;
  void *pvVar23;
  FScriptContainerElement *pFVar24;
  double *pdVar25;
  FScriptContainerElement *pFVar26;
  double *pdVar27;
  FScriptContainerElement *pFVar28;
  UObjectBaseUtility *this_00;
  uint uVar29;
  longlong lVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  undefined1 local_378 [8];
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  undefined1 local_340;
  undefined4 local_33f;
  undefined2 local_33b;
  undefined1 local_339;
  undefined1 local_338 [8];
  void *local_330;
  undefined8 local_328;
  uint local_320;
  void *local_318;
  ulonglong local_310;
  longlong local_308;
  TBoxSphereBounds<double,double> *local_300;
  UNavLinkRenderingComponent *local_2f8;
  TTransform<double> *local_2f0;
  void *local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  UObjectBaseUtility *local_2d0;
  TVector<double>_u_0 local_2c8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  TMatrix<double> local_288;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  this_00 = *(UObjectBaseUtility **)&this->field_0xa8;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->SphereRadius = 0.0;
  }
  else {
    bVar8 = false;
    local_370 = 0.0;
    dStack_368 = 0.0;
    local_340 = 0;
    local_360 = 0.0;
    dStack_358 = 0.0;
    local_33f = 0;
    local_350 = 0.0;
    dStack_348 = 0.0;
    local_33b = 0;
    local_339 = 0;
    local_300 = __return_storage_ptr__;
    local_2f8 = this;
    local_2f0 = param_1;
    local_2d0 = this_00;
    pUVar12 = Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
    pUVar22 = this_00;
    plVar13 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar12);
    uVar20 = SUB84(pUVar22,0);
    local_2d8 = plVar13;
    if (plVar13 == (longlong *)0x0) {
      uVar36 = SUB84(local_350,0);
      uVar37 = (undefined4)((ulonglong)local_350 >> 0x20);
      uVar32 = SUB84(dStack_358,0);
      uVar33 = (undefined4)((ulonglong)dStack_358 >> 0x20);
      uVar38 = SUB84(dStack_368,0);
      uVar39 = (undefined4)((ulonglong)dStack_368 >> 0x20);
      uVar34 = SUB84(local_370,0);
      uVar35 = (undefined4)((ulonglong)local_370 >> 0x20);
    }
    else {
      pUVar12 = (UClass *)0x0;
      local_330 = (void *)0x0;
      local_328 = 0;
      local_318 = (void *)0x0;
      local_310 = 0;
      local_2e8 = (void *)0x0;
      local_2e0 = 0;
      cVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_330);
      uVar36 = SUB84(local_350,0);
      uVar37 = (undefined4)((ulonglong)local_350 >> 0x20);
      uVar32 = SUB84(dStack_358,0);
      uVar33 = (undefined4)((ulonglong)dStack_358 >> 0x20);
      uVar38 = SUB84(dStack_368,0);
      uVar39 = (undefined4)((ulonglong)dStack_368 >> 0x20);
      uVar34 = SUB84(local_370,0);
      uVar35 = (undefined4)((ulonglong)local_370 >> 0x20);
      if (cVar9 != '\0') {
        if (0 < (int)local_328) {
          local_308 = 0;
          pUVar15 = pUVar12;
          iVar11 = (int)local_328;
          do {
            lVar30 = local_308;
            uVar29 = (uint)pUVar15;
            uVar21 = 0;
            if ((int)uVar29 < iVar11) {
              uVar21 = ~uVar29 >> 0x1f;
            }
            if (uVar21 == 0) {
              local_380 = (longlong)iVar11;
              local_388 = (longlong)(int)uVar29;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
                return pTVar14;
              }
              iVar11 = (int)local_328;
            }
            pvVar23 = local_330;
            lVar3 = *(longlong *)((longlong)local_330 + lVar30);
            if (lVar3 != 0) {
              pUVar15 = Z_Construct_UClass_UNavLinkDefinition_NoRegister();
              if (pUVar15 != (UClass *)0x0) {
                iVar11 = (int)pUVar15->_padding_;
                if ((*(int *)(lVar3 + 0x38) < iVar11) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar11 * 8)
                    != &pUVar15->_padding_)) {
                  bVar10 = false;
                }
                else {
                  bVar10 = true;
                }
                if ((bVar10) && (*(longlong *)((longlong)pvVar23 + lVar30) != 0)) {
                  uVar21 = 0;
                  if ((int)uVar29 < (int)local_328) {
                    uVar21 = ~uVar29 >> 0x1f;
                  }
                  if (uVar21 == 0) {
                    local_388 = (longlong)(int)uVar29;
                    local_380 = (longlong)(int)local_328;
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar10) {
                      pcVar4 = (code *)swi(3);
                      pTVar14 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
                      return pTVar14;
                    }
                  }
                  pvVar23 = local_330;
                  lVar3 = *(longlong *)((longlong)local_330 + lVar30);
                  pUVar15 = pUVar12;
                  if ((lVar3 != 0) &&
                     (pUVar16 = Z_Construct_UClass_UNavLinkDefinition_NoRegister(),
                     pUVar16 != (UClass *)0x0)) {
                    iVar11 = (int)pUVar16->_padding_;
                    if ((*(int *)(lVar3 + 0x38) < iVar11) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar11 * 8) !=
                        &pUVar16->_padding_)) {
                      bVar10 = false;
                    }
                    else {
                      bVar10 = true;
                    }
                    if (bVar10) {
                      pUVar15 = *(UClass **)((longlong)pvVar23 + lVar30);
                    }
                  }
                  pTVar17 = UNavLinkDefinition::GetLinksDefinition(pUVar15);
                  pFVar26 = (pTVar17->AllocatorInstance).Data;
                  local_320 = pTVar17->ArrayNum;
                  uVar18 = (ulonglong)(int)local_320;
                  pFVar24 = pFVar26 + 0x50;
                  pFVar28 = pFVar26 + uVar18 * 0x70;
                  while( true ) {
                    if (pTVar17->ArrayNum != (int)uVar18) {
                      local_378[0] = 0;
                      `TCheckedPointerIterator<FNavigationLink_const_,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_378);
                      uVar18 = (ulonglong)local_320;
                    }
                    lVar30 = local_308;
                    if (pFVar26 == pFVar28) break;
                    if (bVar8) {
                      if (*(double *)pFVar24 <= local_360) {
                        local_360 = *(double *)pFVar24;
                      }
                      if (dStack_348 <= *(double *)pFVar24) {
                        dStack_348 = *(double *)pFVar24;
                      }
                      dVar2 = *(double *)(pFVar24 + -0x10);
                      if (dVar2 <= (double)CONCAT44(uVar35,uVar34)) {
                        uVar34 = SUB84(dVar2,0);
                        uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                      dVar2 = *(double *)(pFVar24 + -8);
                      if (dVar2 <= (double)CONCAT44(uVar39,uVar38)) {
                        uVar38 = SUB84(dVar2,0);
                        uVar39 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                      dVar2 = *(double *)(pFVar24 + -0x10);
                      if ((double)CONCAT44(uVar33,uVar32) <= dVar2) {
                        uVar32 = SUB84(dVar2,0);
                        uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                      dVar2 = *(double *)(pFVar24 + -8);
                      if ((double)CONCAT44(uVar37,uVar36) <= dVar2) {
                        uVar36 = SUB84(dVar2,0);
                        uVar37 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                    }
                    else {
                      uVar32 = *(undefined4 *)(pFVar24 + -0x10);
                      uVar33 = *(undefined4 *)(pFVar24 + -0xc);
                      uVar36 = *(undefined4 *)(pFVar24 + -8);
                      uVar37 = *(undefined4 *)(pFVar24 + -4);
                      bVar8 = true;
                      local_360 = *(double *)pFVar24;
                      local_340 = 1;
                      dStack_348 = local_360;
                      uVar34 = uVar32;
                      uVar35 = uVar33;
                      uVar38 = uVar36;
                      uVar39 = uVar37;
                    }
                    if (bVar8) {
                      dVar2 = *(double *)(pFVar24 + 8);
                      if (dVar2 <= (double)CONCAT44(uVar35,uVar34)) {
                        uVar34 = SUB84(dVar2,0);
                        uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                      dVar2 = *(double *)(pFVar24 + 0x10);
                      if (dVar2 <= (double)CONCAT44(uVar39,uVar38)) {
                        uVar38 = SUB84(dVar2,0);
                        uVar39 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                      if (*(double *)(pFVar24 + 0x18) <= local_360) {
                        local_360 = *(double *)(pFVar24 + 0x18);
                      }
                      dVar2 = *(double *)(pFVar24 + 8);
                      if ((double)CONCAT44(uVar33,uVar32) <= dVar2) {
                        uVar32 = SUB84(dVar2,0);
                        uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                      dVar2 = *(double *)(pFVar24 + 0x10);
                      if ((double)CONCAT44(uVar37,uVar36) <= dVar2) {
                        uVar36 = SUB84(dVar2,0);
                        uVar37 = (undefined4)((ulonglong)dVar2 >> 0x20);
                      }
                      if (dStack_348 <= *(double *)(pFVar24 + 0x18)) {
                        dStack_348 = *(double *)(pFVar24 + 0x18);
                      }
                      pFVar26 = pFVar26 + 0x70;
                      local_370 = (double)CONCAT44(uVar35,uVar34);
                      dStack_368 = (double)CONCAT44(uVar39,uVar38);
                      pFVar24 = pFVar24 + 0x70;
                      dStack_358 = (double)CONCAT44(uVar33,uVar32);
                      local_350 = (double)CONCAT44(uVar37,uVar36);
                    }
                    else {
                      pFVar1 = pFVar24 + 8;
                      uVar32 = *(undefined4 *)pFVar1;
                      uVar33 = *(undefined4 *)(pFVar24 + 0xc);
                      local_370 = *(double *)pFVar1;
                      dStack_358 = *(double *)pFVar1;
                      pFVar1 = pFVar24 + 0x10;
                      uVar36 = *(undefined4 *)pFVar1;
                      uVar37 = *(undefined4 *)(pFVar24 + 0x14);
                      dStack_368 = *(double *)pFVar1;
                      local_350 = *(double *)pFVar1;
                      bVar8 = true;
                      pFVar26 = pFVar26 + 0x70;
                      local_360 = *(double *)(pFVar24 + 0x18);
                      pFVar24 = pFVar24 + 0x70;
                      local_340 = 1;
                      uVar34 = uVar32;
                      uVar35 = uVar33;
                      uVar38 = uVar36;
                      uVar39 = uVar37;
                      dStack_348 = local_360;
                    }
                  }
                }
              }
              iVar11 = (int)local_328;
            }
            local_308 = lVar30 + 8;
            pUVar15 = (UClass *)(ulonglong)(uVar29 + 1);
            plVar13 = local_2d8;
            this_00 = local_2d0;
          } while ((int)(uVar29 + 1) < iVar11);
        }
      }
      cVar9 = (**(code **)(*plVar13 + 0x18))(plVar13,&local_318,&local_2e8);
      if (cVar9 != '\0') {
        iVar11 = (int)local_310;
        uVar18 = (ulonglong)(int)local_310;
        pdVar25 = (double *)((longlong)local_318 + 0x50);
        pdVar27 = (double *)(uVar18 * 0x70 + (longlong)local_318);
        while( true ) {
          if ((int)uVar18 != iVar11) {
            `TCheckedPointerIterator<FNavigationLink,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_338);
            uVar18 = local_310 & 0xffffffff;
          }
          if (pdVar25 + -10 == pdVar27) break;
          if (bVar8) {
            if (*pdVar25 <= local_360) {
              local_360 = *pdVar25;
            }
            if (dStack_348 <= *pdVar25) {
              dStack_348 = *pdVar25;
            }
            dVar2 = pdVar25[-2];
            if (dVar2 <= (double)CONCAT44(uVar35,uVar34)) {
              uVar34 = SUB84(dVar2,0);
              uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = pdVar25[-1];
            if (dVar2 <= (double)CONCAT44(uVar39,uVar38)) {
              uVar38 = SUB84(dVar2,0);
              uVar39 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = pdVar25[-2];
            if ((double)CONCAT44(uVar33,uVar32) <= dVar2) {
              uVar32 = SUB84(dVar2,0);
              uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = pdVar25[-1];
            if ((double)CONCAT44(uVar37,uVar36) <= dVar2) {
              uVar36 = SUB84(dVar2,0);
              uVar37 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
          }
          else {
            uVar32 = *(undefined4 *)(pdVar25 + -2);
            uVar33 = *(undefined4 *)((longlong)pdVar25 + -0xc);
            uVar36 = *(undefined4 *)(pdVar25 + -1);
            uVar37 = *(undefined4 *)((longlong)pdVar25 + -4);
            bVar8 = true;
            local_360 = *pdVar25;
            dStack_348 = local_360;
            uVar34 = uVar32;
            uVar35 = uVar33;
            uVar38 = uVar36;
            uVar39 = uVar37;
          }
          if (bVar8) {
            if (pdVar25[3] <= local_360) {
              local_360 = pdVar25[3];
            }
            if (dStack_348 <= pdVar25[3]) {
              dStack_348 = pdVar25[3];
            }
            dVar2 = pdVar25[1];
            if (dVar2 <= (double)CONCAT44(uVar35,uVar34)) {
              uVar34 = SUB84(dVar2,0);
              uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = pdVar25[2];
            if (dVar2 <= (double)CONCAT44(uVar39,uVar38)) {
              uVar38 = SUB84(dVar2,0);
              uVar39 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = pdVar25[1];
            if ((double)CONCAT44(uVar33,uVar32) <= dVar2) {
              uVar32 = SUB84(dVar2,0);
              uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = pdVar25[2];
            if ((double)CONCAT44(uVar37,uVar36) <= dVar2) {
              uVar36 = SUB84(dVar2,0);
              uVar37 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            pdVar25 = pdVar25 + 0xe;
          }
          else {
            uVar32 = *(undefined4 *)(pdVar25 + 1);
            uVar33 = *(undefined4 *)((longlong)pdVar25 + 0xc);
            uVar36 = *(undefined4 *)(pdVar25 + 2);
            uVar37 = *(undefined4 *)((longlong)pdVar25 + 0x14);
            bVar8 = true;
            local_360 = pdVar25[3];
            pdVar25 = pdVar25 + 0xe;
            uVar34 = uVar32;
            uVar35 = uVar33;
            uVar38 = uVar36;
            uVar39 = uVar37;
            dStack_348 = local_360;
          }
        }
      }
      if (local_2e8 != (void *)0x0) {
        FMemory::Free(local_2e8);
      }
      if (local_318 != (void *)0x0) {
        FMemory::Free(local_318);
      }
      pvVar23 = local_330;
      if (local_330 != (void *)0x0) {
        FMemory::Free(local_330);
      }
      uVar20 = SUB84(pvVar23,0);
      __return_storage_ptr__ = local_300;
      this = local_2f8;
      param_1 = local_2f0;
    }
    if (*(longlong *)(this_00 + 0xb) == 0) {
      pTVar19 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar19 = (TTransform<double> *)(*(longlong *)(this_00 + 0xb) + 0x1f0);
    }
    local_e8.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
    local_e8.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
    local_e8.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
    local_e8.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
    local_e8.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
    local_e8.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
    local_e8.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
    local_e8.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
    local_e8.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
    local_e8.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
    local_e8.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
    local_e8.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
    lVar30 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(*(uint *)&this->field_0x24c & _UNK_15061cc8c,
                               *(uint *)&this->field_0x248 & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar30;
    auVar6._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(*(uint *)&this->field_0x244 &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     *(uint *)&this->field_0x240 &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar6._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    uVar21 = movmskpd(uVar20,auVar6);
    lVar30 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(*(uint *)&this->field_0x23c & _UNK_15061cc8c,
                               *(uint *)&this->field_0x238 & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar30;
    auVar5._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                    (double)CONCAT44(*(uint *)&this->field_0x234 &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     *(uint *)&this->field_0x230 &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar5._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    iVar11 = movmskpd((int)pTVar19,auVar5);
    if ((uVar21 & 0x3fffffff) == 0 && iVar11 == 0) {
      local_208.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_208.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_208.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_208.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_208.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_208.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->field_0x1f0,&local_208)
      ;
    }
    dVar7 = (double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar39,uVar38);
    dVar2 = (double)CONCAT44(uVar33,uVar32) - (double)CONCAT44(uVar35,uVar34);
    dVar31 = dStack_348 - local_360;
    local_2a8 = dVar7 * __real_3fe0000000000000;
    local_2b0 = dVar2 * __real_3fe0000000000000;
    local_2a0 = dVar31 * __real_3fe0000000000000;
    local_2c8._s_0.Y = (double)CONCAT44(uVar39,uVar38) + local_2a8;
    local_2c8._s_0.X = (double)CONCAT44(uVar35,uVar34) + local_2b0;
    local_2c8._s_0.Z = local_360 + local_2a0;
    local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_298 = SQRT((dVar7 * dVar7 + dVar2 * dVar2 + dVar31 * dVar31) * __real_3fd0000000000000);
    local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_1a8,&local_e8,&local_208);
    local_148.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_148.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_148.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_148.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_148,&local_1a8,param_1);
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_148,&local_288);
    UE::Math::TBoxSphereBounds<double,double>::TransformBy
              ((TBoxSphereBounds<double,double> *)&local_2c8._s_0,__return_storage_ptr__,&local_288)
    ;
  }
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 146de65e0

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
UNavLinkRenderingComponent::CreateSceneProxy(UNavLinkRenderingComponent *this)

{
  FNavLinkRenderingProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 != (FNavLinkRenderingProxy *)0x0) {
    pFVar1 = FNavLinkRenderingProxy::FNavLinkRenderingProxy(pFVar1,(UPrimitiveComponent *)this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetIgnoreBoundsForEditorFocus @ 146e05d40

bool __thiscall
UNavLinkRenderingComponent::GetIgnoreBoundsForEditorFocus(UNavLinkRenderingComponent *this)

{
  return true;
}

// GetPrivateStaticClass @ 146e0ea80

UClass * __cdecl UNavLinkRenderingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkRenderingComponent",
               &Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton,
               StaticRegisterNativesUNavLinkRenderingComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavLinkRenderingComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkRenderingComponent.InnerSingleton;
}

// ShouldRecreateProxyOnUpdateTransform @ 146e29b40

bool __thiscall
UNavLinkRenderingComponent::ShouldRecreateProxyOnUpdateTransform(UNavLinkRenderingComponent *this)

{
  return true;
}

// StaticRegisterNativesUNavLinkRenderingComponent @ 146e29e30

void __cdecl UNavLinkRenderingComponent::StaticRegisterNativesUNavLinkRenderingComponent(void)

{
  return;
}

