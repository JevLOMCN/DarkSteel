// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 22

// StaticClass @ 146dca7f0

UClass * __cdecl UNavLinkComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkComponent",
               &Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton,
               StaticRegisterNativesUNavLinkComponent,0x560,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavLinkComponent>,
               InternalVTableHelperCtorCaller<UNavLinkComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton;
}

// UNavLinkComponent @ 146dd8070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavLinkComponent * __thiscall
UNavLinkComponent::UNavLinkComponent(UNavLinkComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UNavLinkComponent__6B_;
  (this->Links).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Links).ArrayNum = 0;
  (this->Links).ArrayMax = 0;
  return this;
}

// UNavLinkComponent @ 146dd8100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavLinkComponent * __thiscall
UNavLinkComponent::UNavLinkComponent(UNavLinkComponent *this,FObjectInitializer *param_1)

{
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UNavLinkComponent *pUVar7;
  FNavigationLinkBase *pFVar8;
  FNavigationLinkBase local_78;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong64 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  pTVar1 = &this->Links;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UNavLinkComponent__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Links).ArrayNum = 0;
  (this->Links).ArrayMax = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  FBodyInstance::SetCollisionProfileName
            ((FBodyInstance *)&this->_padding_,UCollisionProfile::NoCollision_ProfileName);
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar2 = *pbVar2 | 0xc0;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 2;
  FNavigationLinkBase::FNavigationLinkBase(&local_78);
  local_38 = ___xmm_c0490000000000000000000000000000;
  uStack_30 = _UNK_15149cb28;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = ___xmm_00000000000000004049000000000000;
  uStack_10 = _UNK_15149cb08;
  pUVar6 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  FNavigationLinkBase::SetAreaClass(&local_78,pUVar6);
  pFVar8 = (FNavigationLinkBase *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar8 <= &local_78) &&
     (&local_78 <
      (FNavigationLinkBase *)((longlong)pFVar8 + (longlong)(this->Links).ArrayMax * 0x70))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UNavLinkComponent *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (this->Links).ArrayNum;
  if (iVar5 == (this->Links).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&pTVar1->AllocatorInstance,&(this->Links).ArrayMax);
  }
  (this->Links).ArrayNum = iVar5 + 1;
  pFVar8 = (FNavigationLinkBase *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x70);
  FNavigationLinkBase::FNavigationLinkBase(pFVar8,&local_78);
  pFVar8[1].LeftProjectHeight = (float)(undefined4)local_38;
  pFVar8[1].MaxFallDownLength = (float)local_38._4_4_;
  *(undefined8 *)&pFVar8[1].UserId = uStack_30;
  pFVar8[1].NavLinkId.Id = local_28;
  pFVar8[1].SnapRadius = (float)(undefined4)uStack_20;
  pFVar8[1].SnapHeight = (float)uStack_20._4_4_;
  pFVar8[1].SupportedAgents = (FNavAgentSelector)(undefined4)local_18;
  pFVar8[1].field7_0x24 = (FNavigationLinkBase_u_36)local_18._4_4_;
  *(undefined8 *)&pFVar8[1].Direction = uStack_10;
  return this;
}

// ~UNavLinkComponent @ 146dda050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UNavLinkComponent::~UNavLinkComponent(UNavLinkComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UNavLinkComponent__6B_;
  pFVar1 = (this->Links).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INavLinkHostInterface__6B_;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// CalcBounds @ 146de2050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UNavLinkComponent::CalcBounds
          (UNavLinkComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TBoxSphereBounds<double,double> *pTVar11;
  TMatrix<double> *pTVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
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
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  TTransform<double> *local_1c8;
  TVector<double>_u_0 local_1c0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  double dStack_198;
  undefined1 local_190;
  undefined4 local_18f;
  undefined2 local_18b;
  undefined1 local_189;
  TVector<double>_u_0 local_188;
  double local_170;
  double local_168;
  double local_160;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  bVar8 = false;
  local_190 = 0;
  local_18f = 0;
  uVar14 = 0;
  local_18b = 0;
  local_1c0._s_0.X = 0.0;
  local_1c0._s_0.Y = 0.0;
  local_189 = 0;
  local_1c0._s_0.Z = 0.0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  dStack_198 = 0.0;
  local_1c8 = param_1;
  if (0 < (this->Links).ArrayNum) {
    uVar28 = 0;
    uVar29 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar26 = 0;
    uVar27 = 0;
    lVar15 = 0;
    lVar13 = 0;
    uVar34 = 0;
    uVar35 = 0;
    do {
      iVar4 = (this->Links).ArrayNum;
      uVar10 = 0;
      if ((int)uVar14 < iVar4) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_1d8 = (longlong)(int)uVar14;
        local_1d0 = (longlong)iVar4;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
          return pTVar11;
        }
      }
      pFVar5 = (this->Links).AllocatorInstance.Data;
      if (bVar8) {
        dVar2 = *(double *)(pFVar5 + lVar13 + 0x40);
        uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar20 = *(double *)(pFVar5 + lVar13 + 0x48);
        uVar33 = (undefined4)((ulonglong)dVar20 >> 0x20);
        dVar21 = *(double *)(pFVar5 + lVar13 + 0x50);
        uVar18 = SUB84(dVar21,0);
        uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
        uVar30 = SUB84(dVar2,0);
        uVar31 = uVar25;
        if ((double)CONCAT44(uVar27,uVar26) <= dVar2) {
          uVar30 = uVar26;
          uVar31 = uVar27;
        }
        uVar24 = SUB84(dVar2,0);
        if (dVar2 <= (double)CONCAT44(uVar23,uVar22)) {
          uVar24 = uVar22;
          uVar25 = uVar23;
        }
        uVar36 = SUB84(dVar20,0);
        uVar37 = uVar33;
        if ((double)CONCAT44(uVar35,uVar34) <= dVar20) {
          uVar36 = uVar34;
          uVar37 = uVar35;
        }
        uVar3 = dVar21;
        if (local_1c0._s_0.Z <= dVar21) {
          uVar3 = local_1c0._s_0.Z;
        }
        if (dVar21 <= dStack_198) {
          uVar18 = SUB84(dStack_198,0);
          uVar19 = (undefined4)((ulonglong)dStack_198 >> 0x20);
        }
        uVar32 = SUB84(dVar20,0);
        if (dVar20 <= (double)CONCAT44(uVar29,uVar28)) {
          uVar32 = uVar28;
          uVar33 = uVar29;
        }
        local_1c0._s_0.X = (double)CONCAT44(uVar31,uVar30);
        uStack_1a8 = CONCAT44(uVar25,uVar24);
        local_1c0._s_0.Y = (double)CONCAT44(uVar37,uVar36);
        dStack_198 = (double)CONCAT44(uVar19,uVar18);
        local_1a0 = CONCAT44(uVar33,uVar32);
        local_1c0._s_0.Z = (double)uVar3;
      }
      else {
        pFVar1 = pFVar5 + lVar13 + 0x40;
        uVar24 = *(undefined4 *)pFVar1;
        uVar25 = *(undefined4 *)(pFVar1 + 4);
        local_1c0._s_0.X = (double)*(undefined8 *)pFVar1;
        uStack_1a8 = *(undefined8 *)pFVar1;
        pFVar7 = pFVar1 + 8;
        uVar32 = *(undefined4 *)pFVar7;
        uVar33 = *(undefined4 *)(pFVar1 + 0xc);
        local_1c0._s_0.Y = (double)*(undefined8 *)pFVar7;
        local_1a0 = *(undefined8 *)pFVar7;
        bVar8 = true;
        local_1c0._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar13 + 0x50);
        local_190 = 1;
        uVar30 = uVar24;
        uVar31 = uVar25;
        uVar36 = uVar32;
        uVar37 = uVar33;
        dStack_198 = local_1c0._s_0.Z;
      }
      iVar4 = (this->Links).ArrayNum;
      uVar10 = 0;
      if ((int)uVar14 < iVar4) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_1d8 = lVar15, local_1d0 = (longlong)iVar4,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
        return pTVar11;
      }
      pFVar5 = (this->Links).AllocatorInstance.Data;
      if (bVar8) {
        dVar2 = *(double *)(pFVar5 + lVar13 + 0x58);
        uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar20 = *(double *)(pFVar5 + lVar13 + 0x60);
        uVar29 = (undefined4)((ulonglong)dVar20 >> 0x20);
        dVar21 = *(double *)(pFVar5 + lVar13 + 0x68);
        uVar18 = SUB84(dVar21,0);
        uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
        uVar26 = SUB84(dVar2,0);
        uVar27 = uVar23;
        if ((double)CONCAT44(uVar31,uVar30) <= dVar2) {
          uVar26 = uVar30;
          uVar27 = uVar31;
        }
        uVar22 = SUB84(dVar2,0);
        if (dVar2 <= (double)CONCAT44(uVar25,uVar24)) {
          uVar22 = uVar24;
          uVar23 = uVar25;
        }
        uVar34 = SUB84(dVar20,0);
        uVar35 = uVar29;
        if ((double)CONCAT44(uVar37,uVar36) <= dVar20) {
          uVar34 = uVar36;
          uVar35 = uVar37;
        }
        uVar3 = dVar21;
        if (local_1c0._s_0.Z <= dVar21) {
          uVar3 = local_1c0._s_0.Z;
        }
        if (dVar21 <= dStack_198) {
          uVar18 = SUB84(dStack_198,0);
          uVar19 = (undefined4)((ulonglong)dStack_198 >> 0x20);
        }
        uVar28 = SUB84(dVar20,0);
        if (dVar20 <= (double)CONCAT44(uVar33,uVar32)) {
          uVar28 = uVar32;
          uVar29 = uVar33;
        }
        local_1c0._s_0.X = (double)CONCAT44(uVar27,uVar26);
        uStack_1a8 = CONCAT44(uVar23,uVar22);
        local_1c0._s_0.Y = (double)CONCAT44(uVar35,uVar34);
        dStack_198 = (double)CONCAT44(uVar19,uVar18);
        local_1a0 = CONCAT44(uVar29,uVar28);
        local_1c0._s_0.Z = (double)uVar3;
      }
      else {
        pFVar1 = pFVar5 + lVar13 + 0x58;
        uVar22 = *(undefined4 *)pFVar1;
        uVar23 = *(undefined4 *)(pFVar1 + 4);
        local_1c0._s_0.X = (double)*(undefined8 *)pFVar1;
        uStack_1a8 = *(undefined8 *)pFVar1;
        pFVar7 = pFVar1 + 8;
        uVar28 = *(undefined4 *)pFVar7;
        uVar29 = *(undefined4 *)(pFVar1 + 0xc);
        local_1c0._s_0.Y = (double)*(undefined8 *)pFVar7;
        local_1a0 = *(undefined8 *)pFVar7;
        bVar8 = true;
        local_1c0._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar13 + 0x68);
        local_190 = 1;
        uVar26 = uVar22;
        uVar27 = uVar23;
        uVar34 = uVar28;
        uVar35 = uVar29;
        dStack_198 = local_1c0._s_0.Z;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      lVar13 = lVar13 + 0x70;
    } while ((int)uVar14 < (this->Links).ArrayNum);
  }
  pTVar12 = UE::Math::TTransform<double>::ToMatrixWithScale(local_1c8,&local_148);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_1c0._s_0,(TBox<double> *)&local_188._s_0,pTVar12);
  local_160 = local_160 - local_188._s_0.Z;
  local_168 = local_168 - local_188._s_0.Y;
  dVar20 = local_160 * __real_3fe0000000000000;
  dVar2 = (local_170 - local_188._s_0.X) * __real_3fe0000000000000;
  dVar21 = local_168 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar2 + local_188._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar21 + local_188._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar20 + local_188._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar21;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar20;
  dVar2 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar16._0_8_ = dVar2 * dVar2;
  auVar16._8_8_ = 0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ =
       (local_160 * local_160 + local_168 * local_168) * __real_3fd0000000000000 + auVar16._0_8_;
  auVar17 = sqrtpd(auVar16,auVar17);
  __return_storage_ptr__->SphereRadius = auVar17._0_8_;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 146de65a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UNavLinkComponent::CreateSceneProxy(UNavLinkComponent *this)

{
  FNavLinkRenderingProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x2b0);
  if (pFVar1 != (FNavLinkRenderingProxy *)0x0) {
    pFVar1 = FNavLinkRenderingProxy::FNavLinkRenderingProxy(pFVar1,(UPrimitiveComponent *)this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetNavigationData @ 146e09fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
UNavLinkComponent::GetNavigationData(UNavLinkComponent *this,FNavigationRelevantData *param_1)

{
  undefined1 auStack_a8 [32];
  FNavLinkOwnerData local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.LinkToWorld.Rotation.XY.m128d_f64[0] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Rotation.XY.m128d_f64[1] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Rotation.ZW.m128d_f64[0] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Rotation.ZW.m128d_f64[1] = (double)this[-1]._padding_;
  local_88.Actor = (AActor *)this[-1]._padding_;
  local_88.LinkToWorld.Translation.XY.m128d_f64[0] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Translation.XY.m128d_f64[1] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Translation.ZW.m128d_f64[0] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Translation.ZW.m128d_f64[1] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Scale3D.XY.m128d_f64[0] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Scale3D.XY.m128d_f64[1] = (double)this[-1]._padding_;
  local_88.LinkToWorld.Scale3D.ZW.m128d_f64[0] = (double)this[-1].Links.AllocatorInstance.Data;
  local_88.LinkToWorld.Scale3D.ZW.m128d_f64[1] = *(double *)&this[-1].Links.ArrayNum;
  NavigationHelper::ProcessNavLinkAndAppend
            (&param_1->Modifiers,&local_88,
             (TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// GetNavigationLinksArray @ 146e0a5e0

bool __thiscall
UNavLinkComponent::GetNavigationLinksArray
          (UNavLinkComponent *this,TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (param_1 == (TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *)&this->_padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    ConstructItems<FNavigationLink,FNavigationLink,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x70,
               (FNavigationLink *)this->_padding_,iVar1);
  }
  return 0 < param_1->ArrayNum;
}

// GetNavigationLinksClasses @ 146e0a6c0

bool __thiscall
UNavLinkComponent::GetNavigationLinksClasses
          (UNavLinkComponent *this,
          TArray<TSubclassOf<UNavLinkDefinition>,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetPrivateStaticClass @ 146e0e900

UClass * __cdecl UNavLinkComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkComponent",
               &Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton,
               StaticRegisterNativesUNavLinkComponent,0x560,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavLinkComponent>,
               InternalVTableHelperCtorCaller<UNavLinkComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkComponent.InnerSingleton;
}

// InitializeLinksAreaClasses @ 146e150c0

void __thiscall UNavLinkComponent::InitializeLinksAreaClasses(UNavLinkComponent *this)

{
  int iVar1;
  FNavigationLinkBase *this_00;
  FNavigationLinkBase *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Links).ArrayNum;
  this_00 = (FNavigationLinkBase *)(this->Links).AllocatorInstance.Data;
  pFVar2 = (FNavigationLinkBase *)((longlong)this_00 + (longlong)iVar1 * 0x70);
  while( true ) {
    if ((this->Links).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavigationLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FNavigationLinkBase::InitializeAreaClass(this_00,false);
    this_00 = (FNavigationLinkBase *)&this_00[1].AreaClass;
  }
  return;
}

// IsNavigationRelevant @ 146e158a0

bool __thiscall UNavLinkComponent::IsNavigationRelevant(UNavLinkComponent *this)

{
  return 0 < (this->Links).ArrayNum;
}

// IsNavigationRelevant`adjustor{592}' @ 146e158b4

/* [thunk]:public: virtual bool __cdecl UNavLinkComponent::IsNavigationRelevant`adjustor{592}'
   (void)const __ptr64 */

bool __thiscall UNavLinkComponent::IsNavigationRelevant_adjustor_592__(UNavLinkComponent *this)

{
  bool bVar1;
  
  bVar1 = IsNavigationRelevant((UNavLinkComponent *)&this[-1]._padding_);
  return bVar1;
}

// OnRegister @ 146e19a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UNavLinkComponent::OnRegister(UNavLinkComponent *this)

{
  int iVar1;
  FNavigationLinkBase *this_00;
  FNavigationLinkBase *pFVar2;
  undefined1 local_res8 [8];
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  iVar1 = (this->Links).ArrayNum;
  this_00 = (FNavigationLinkBase *)(this->Links).AllocatorInstance.Data;
  pFVar2 = (FNavigationLinkBase *)((longlong)this_00 + (longlong)iVar1 * 0x70);
  while( true ) {
    if ((this->Links).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavigationLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FNavigationLinkBase::InitializeAreaClass(this_00,false);
    this_00 = (FNavigationLinkBase *)&this_00[1].AreaClass;
  }
  return;
}

// ShouldRecreateProxyOnUpdateTransform @ 146e29b30

bool __thiscall UNavLinkComponent::ShouldRecreateProxyOnUpdateTransform(UNavLinkComponent *this)

{
  return true;
}

// StaticRegisterNativesUNavLinkComponent @ 146e29e10

void __cdecl UNavLinkComponent::StaticRegisterNativesUNavLinkComponent(void)

{
  return;
}

// __DefaultConstructor @ 146e2f770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UNavLinkComponent::__DefaultConstructor(FObjectInitializer *param_1)

{
  UPrimitiveComponent *pUVar1;
  UPrimitiveComponent *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FNavigationLinkBase *this_00;
  FNavigationLinkBase local_78;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong64 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &_vftable__for__UObject__;
    pUVar1 = this + 1;
    *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
    *(undefined ***)&this->field_0x548 = &___7UNavLinkComponent__6B_;
    *(FScriptContainerElement **)pUVar1 = (FScriptContainerElement *)0x0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this->field_0x1ab = 1;
    FBodyInstance::SetCollisionProfileName
              (&this->BodyInstance,UCollisionProfile::NoCollision_ProfileName);
    UPrimitiveComponent::SetGenerateOverlapEvents(this,false);
    this->field_0x9a = this->field_0x9a | 0xc0;
    (this->bHasCustomNavigableGeometry).Value = '\x02';
    FNavigationLinkBase::FNavigationLinkBase(&local_78);
    local_38 = ___xmm_c0490000000000000000000000000000;
    uStack_30 = _UNK_15149cb28;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = ___xmm_00000000000000004049000000000000;
    uStack_10 = _UNK_15149cb08;
    pUVar5 = Z_Construct_UClass_UNavArea_Default_NoRegister();
    FNavigationLinkBase::SetAreaClass(&local_78,pUVar5);
    if ((*(FScriptContainerElement **)pUVar1 <= &local_78) &&
       (&local_78 <
        (FNavigationLinkBase *)
        (*(FScriptContainerElement **)pUVar1 + (longlong)*(int *)&this[1].field_0xc * 0x70))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)&this[1].field_0x8;
    if (iVar4 == *(int *)&this[1].field_0xc) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)pUVar1,(int *)&this[1].field_0xc);
    }
    *(int *)&this[1].field_0x8 = iVar4 + 1;
    this_00 = (FNavigationLinkBase *)(*(FScriptContainerElement **)pUVar1 + (longlong)iVar4 * 0x70);
    FNavigationLinkBase::FNavigationLinkBase(this_00,&local_78);
    this_00[1].LeftProjectHeight = (float)(undefined4)local_38;
    this_00[1].MaxFallDownLength = (float)local_38._4_4_;
    *(undefined8 *)&this_00[1].UserId = uStack_30;
    this_00[1].NavLinkId.Id = local_28;
    this_00[1].SnapRadius = (float)(undefined4)uStack_20;
    this_00[1].SnapHeight = (float)uStack_20._4_4_;
    this_00[1].SupportedAgents = (FNavAgentSelector)(undefined4)local_18;
    this_00[1].field7_0x24 = (FNavigationLinkBase_u_36)local_18._4_4_;
    *(undefined8 *)&this_00[1].Direction = uStack_10;
  }
  return;
}

// _getUObject @ 146e2f9d0

UObject * __thiscall UNavLinkComponent::_getUObject(UNavLinkComponent *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{552}' @ 146e2f9dc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavLinkComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UNavLinkComponent::_getUObject_adjustor_552__(UNavLinkComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavLinkComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 146e2f9f0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavLinkComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall UNavLinkComponent::_getUObject_adjustor_560__(UNavLinkComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavLinkComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 146e2fa04

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavLinkComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall UNavLinkComponent::_getUObject_adjustor_568__(UNavLinkComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavLinkComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1312}' @ 146e2fa18

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavLinkComponent::_getUObject`adjustor{1312}' (void)const __ptr64 */

UObject * __thiscall UNavLinkComponent::_getUObject_adjustor_1312__(UNavLinkComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavLinkComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

