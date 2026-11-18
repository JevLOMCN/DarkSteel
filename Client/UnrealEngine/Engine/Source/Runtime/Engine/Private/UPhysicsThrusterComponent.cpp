// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147320430

UClass * __cdecl UPhysicsThrusterComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsThrusterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsThrusterComponent",
               &Z_Registration_Info_UClass_UPhysicsThrusterComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsThrusterComponent,0x260,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsThrusterComponent>,
               InternalVTableHelperCtorCaller<UPhysicsThrusterComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsThrusterComponent.InnerSingleton;
}

// UPhysicsThrusterComponent @ 1473249c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsThrusterComponent * __thiscall
UPhysicsThrusterComponent::UPhysicsThrusterComponent
          (UPhysicsThrusterComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UPhysicsThrusterComponent @ 1473251d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPhysicsThrusterComponent::~UPhysicsThrusterComponent(UPhysicsThrusterComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147327020

UClass * __cdecl UPhysicsThrusterComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsThrusterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsThrusterComponent",
               &Z_Registration_Info_UClass_UPhysicsThrusterComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsThrusterComponent,0x260,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsThrusterComponent>,
               InternalVTableHelperCtorCaller<UPhysicsThrusterComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsThrusterComponent.InnerSingleton;
}

// StaticRegisterNativesUPhysicsThrusterComponent @ 147328230

void __cdecl UPhysicsThrusterComponent::StaticRegisterNativesUPhysicsThrusterComponent(void)

{
  return;
}

// UPhysicsThrusterComponent @ 1482dc660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsThrusterComponent * __thiscall
UPhysicsThrusterComponent::UPhysicsThrusterComponent
          (UPhysicsThrusterComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->field_0x42 = this->field_0x42 | 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->field_0x40 = 0;
  this->ThrustStrength = 100.0;
  return this;
}

// TickComponent @ 148324a00

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

void __thiscall
UPhysicsThrusterComponent::TickComponent
          (UPhysicsThrusterComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UClass *pUVar9;
  longlong *plVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 local_98 [16];
  double local_88;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (((this->field_0x9a & 0x10) != 0) &&
     (plVar10 = *(longlong **)&this->field_0xd0, plVar10 != (longlong *)0x0)) {
    dVar8 = *(double *)&this->field_0x208;
    auVar16 = *(undefined1 (*) [16])&this->field_0x1f0;
    auVar14 = blendpd(auVar16,*(undefined1 (*) [16])&this->field_0x200,2);
    dVar4 = __xmm_0000000000000000bff0000000000000._8_8_;
    dVar18 = (double)__xmm_0000000000000000bff0000000000000;
    dVar5 = auVar16._8_8_ * 0.0 - *(double *)&this->field_0x200 * dVar4;
    auVar12 = blendpd(___xmm_0000000000000000bff0000000000000,ZEXT816(0),2);
    auVar15._8_4_ = SUB84(dVar5,0);
    auVar15._0_8_ = dVar4 * auVar16._0_8_ - auVar16._8_8_ * dVar18;
    auVar15._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar13._0_8_ = auVar12._0_8_ * *(double *)&this->field_0x200 - auVar14._0_8_ * 0.0;
    auVar13._8_8_ = auVar12._8_8_ * *(double *)&this->field_0x208 - auVar14._8_8_ * 0.0;
    auVar14 = blendpd(*(undefined1 (*) [16])&this->field_0x1f0,
                      *(undefined1 (*) [16])&this->field_0x200,2);
    auVar16 = blendpd(auVar15,auVar13,2);
    dVar5 = dVar5 + dVar5;
    dVar6 = auVar13._0_8_ + auVar13._0_8_;
    auVar17._0_8_ = auVar16._0_8_ + auVar16._0_8_;
    auVar17._8_8_ = auVar16._8_8_ + auVar16._8_8_;
    auVar12._8_4_ = SUB84(dVar6,0);
    auVar12._0_8_ = dVar5;
    auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar16 = blendpd(auVar12,auVar17,2);
    dVar7 = auVar17._0_8_ * *(double *)&this->field_0x1f8 - *(double *)&this->field_0x200 * dVar6;
    dVar2 = *(double *)&this->field_0x200 * auVar16._0_8_ - auVar17._0_8_ * auVar14._0_8_;
    dVar3 = *(double *)&this->field_0x208 * auVar16._8_8_ - auVar17._8_8_ * auVar14._8_8_;
    auVar14._8_4_ = SUB84(dVar7,0);
    auVar14._0_8_ = dVar6 * *(double *)&this->field_0x1f0 - *(double *)&this->field_0x1f8 * dVar5;
    auVar14._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar16._8_4_ = SUB84(dVar3,0);
    auVar16._0_8_ = dVar2;
    auVar16._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar16 = blendpd(auVar14,auVar16,2);
    local_88 = auVar17._0_8_ * dVar8 + auVar16._0_8_;
    dVar11 = (double)this->ThrustStrength;
    dVar3 = local_88 * dVar11;
    dVar2 = (dVar2 + dVar4 + dVar6 * dVar8) * dVar11;
    pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(plVar10[2] + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar10[2] + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      local_a8 = *(undefined8 *)&this->field_0x220;
      local_b8 = *(undefined4 *)&this->field_0x210;
      uStack_b4 = *(undefined4 *)&this->field_0x214;
      uStack_b0 = *(undefined4 *)&this->field_0x218;
      uStack_ac = *(undefined4 *)&this->field_0x21c;
      local_98._8_4_ = SUB84(dVar2,0);
      local_98._0_8_ = (dVar7 + dVar18 + dVar5 * dVar8) * dVar11;
      local_98._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_88 = dVar3;
      (**(code **)(*plVar10 + 0x738))(plVar10,local_98,&local_b8);
    }
  }
  return;
}

