// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 7

// StaticClass @ 145ecee10

UClass * __cdecl UFoliageInstancedStaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUFoliageInstancedStaticMeshComponent,0xbe0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFoliageInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UFoliageInstancedStaticMeshComponent>,local_res8,
               UHierarchicalInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton;
}

// UFoliageInstancedStaticMeshComponent @ 145ed8920

UFoliageInstancedStaticMeshComponent * __thiscall
UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent
          (UFoliageInstancedStaticMeshComponent *this,FVTableHelper *param_1)

{
  UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UFoliageInstancedStaticMeshComponent__6B_;
  *(undefined8 *)&this->OnInstanceTakePointDamage = 0;
  *(undefined8 *)&(this->OnInstanceTakePointDamage).field_0x8 = 0;
  *(undefined8 *)&(this->OnInstanceTakePointDamage).field_0x10 = 0;
  *(undefined8 *)&this->OnInstanceTakeRadialDamage = 0;
  *(undefined8 *)&(this->OnInstanceTakeRadialDamage).field_0x8 = 0;
  *(undefined8 *)&(this->OnInstanceTakeRadialDamage).field_0x10 = 0;
  (this->GenerationGuid).A = 0;
  (this->GenerationGuid).B = 0;
  (this->GenerationGuid).C = 0;
  (this->GenerationGuid).D = 0;
  return this;
}

// UFoliageInstancedStaticMeshComponent @ 145ed89d0

UFoliageInstancedStaticMeshComponent * __thiscall
UFoliageInstancedStaticMeshComponent::UFoliageInstancedStaticMeshComponent
          (UFoliageInstancedStaticMeshComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UHierarchicalInstancedStaticMeshComponent::UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UFoliageInstancedStaticMeshComponent__6B_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  *(undefined8 *)&this->OnInstanceTakePointDamage = 0;
  *(undefined8 *)&(this->OnInstanceTakePointDamage).field_0x8 = 0;
  *(undefined8 *)&(this->OnInstanceTakePointDamage).field_0x10 = 0;
  *(undefined8 *)&this->OnInstanceTakeRadialDamage = 0;
  *(undefined8 *)&(this->OnInstanceTakeRadialDamage).field_0x8 = 0;
  *(undefined8 *)&(this->OnInstanceTakeRadialDamage).field_0x10 = 0;
  this->bEnableDiscardOnLoad = false;
  (this->GenerationGuid).A = 0;
  (this->GenerationGuid).B = 0;
  (this->GenerationGuid).C = 0;
  (this->GenerationGuid).D = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UFoliageInstancedStaticMeshComponent @ 145eda290

void __thiscall
UFoliageInstancedStaticMeshComponent::~UFoliageInstancedStaticMeshComponent
          (UFoliageInstancedStaticMeshComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UFoliageInstancedStaticMeshComponent__6B_;
  pvVar1 = *(void **)&(this->OnInstanceTakeRadialDamage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstanceTakeRadialDamage);
  pvVar1 = *(void **)&(this->OnInstanceTakePointDamage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstanceTakePointDamage);
  UHierarchicalInstancedStaticMeshComponent::~UHierarchicalInstancedStaticMeshComponent
            ((UHierarchicalInstancedStaticMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 145ee4e50

UClass * __cdecl UFoliageInstancedStaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUFoliageInstancedStaticMeshComponent,0xbe0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UFoliageInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UFoliageInstancedStaticMeshComponent>,local_res8,
               UHierarchicalInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.InnerSingleton;
}

// ReceiveComponentDamage @ 145ee8a90

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
UFoliageInstancedStaticMeshComponent::ReceiveComponentDamage
          (UFoliageInstancedStaticMeshComponent *this,float param_1,FDamageEvent *param_2,
          AController *param_3,AActor *param_4)

{
  TSubclassOf<UDamageType> *pTVar1;
  uint *puVar2;
  float fVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  TObjectPtr<UClass>_u_0 TVar13;
  TObjectPtr<UClass>_u_0 TVar14;
  ForAnyElementType _Src;
  int iVar15;
  uint *_Src_00;
  bool bVar16;
  char cVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  longlong lVar23;
  uint uVar24;
  uint **ppuVar25;
  UClass *this_00;
  uint *puVar26;
  TObjectPtr<UObject>_u_0 TVar27;
  longlong lVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar54;
  undefined1 auVar53 [16];
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined1 local_278 [4];
  float local_274;
  ForAnyElementType local_270;
  int local_268;
  int local_264;
  uint *local_260;
  uint local_258;
  ForAnyElementType local_248;
  int local_23c;
  ForAnyElementType local_238;
  undefined8 local_230;
  AController *local_228;
  TObjectPtr<UClass>_u_0 local_220;
  TObjectPtr<UClass>_u_0 TStack_218;
  TObjectPtr<UClass>_u_0 local_210;
  float local_208;
  TObjectPtr<UObject>_u_0 local_200;
  AActor *local_1f8;
  TObjectPtr<UClass>_u_0 *local_1e8;
  AController *local_1e0;
  AActor *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  TTransform<double> local_1b8;
  int local_158;
  float local_154;
  AController *local_150;
  TObjectPtr<UClass>_u_0 local_148;
  longlong lStack_140;
  TObjectPtr<UClass>_u_0 local_138;
  TObjectPtr<UClass>_u_0 local_130;
  longlong lStack_128;
  TObjectPtr<UClass>_u_0 local_120;
  TObjectPtr<UObject>_u_0 local_118;
  AActor *local_110;
  double local_108;
  longlong lStack_100;
  longlong local_f8;
  
  local_1d8 = param_4;
  local_1e0 = param_3;
  UPrimitiveComponent::ReceiveComponentDamage
            ((UPrimitiveComponent *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 0.0) {
    return;
  }
  pUVar22 = (param_2->DamageTypeClass).Class.field0_0x0.DebugPtr;
  this_00 = (UClass *)0x0;
  if ((pUVar22 != (UClass *)0x0) &&
     (pUVar21 = Z_Construct_UClass_UDamageType_NoRegister(), pUVar21 != (UClass *)0x0)) {
    iVar19 = (int)pUVar21->_padding_;
    if (((int)pUVar22->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar21->_padding_)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((bVar16) &&
       (pUVar22 = (param_2->DamageTypeClass).Class.field0_0x0.DebugPtr, pUVar22 != (UClass *)0x0)) {
      pUVar21 = Z_Construct_UClass_UDamageType_NoRegister();
      if (pUVar21 != (UClass *)0x0) {
        iVar19 = (int)pUVar21->_padding_;
        if (((int)pUVar22->_padding_ < iVar19) ||
           ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar19 * 8) !=
            &pUVar21->_padding_)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if (bVar16) {
          this_00 = (param_2->DamageTypeClass).Class.field0_0x0.DebugPtr;
        }
      }
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      TVar27 = (TObjectPtr<UObject>_u_0)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar22 = Z_Construct_UClass_UDamageType_NoRegister();
      iVar19 = (int)pUVar22->_padding_;
      if (((*(int *)(*(longlong *)&(TVar27.DebugPtr)->field_0x10 + 0x38) < iVar19) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&(TVar27.DebugPtr)->field_0x10 + 0x30) +
            (longlong)iVar19 * 8) != &pUVar22->_padding_)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ret->IsA(T::StaticClass())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x1181,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_145ee8c06;
    }
  }
  pUVar22 = Z_Construct_UClass_UDamageType_NoRegister();
  if ((pUVar22->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar22);
  }
  TVar27 = (pUVar22->ClassDefaultObject).field0_0x0;
LAB_145ee8c06:
  cVar17 = (**(code **)(param_2->_padding_ + 0x10))(param_2,1);
  if (cVar17 == '\0') {
    cVar17 = (**(code **)(param_2->_padding_ + 0x10))(param_2,2);
    if (cVar17 != '\0') {
      pTVar1 = &param_2[2].DamageTypeClass;
      fVar55 = *(float *)((longlong)&param_2[1].DamageTypeClass.Class.field0_0x0 + 4);
      ppuVar25 = &local_260;
      fVar3 = *(float *)&param_2[1].DamageTypeClass.Class.field0_0x0;
      if (fVar55 <= fVar3) {
        fVar55 = fVar3;
      }
      if (fVar55 <= 0.0) {
        fVar55 = 0.0;
      }
      local_1e8 = (TObjectPtr<UClass>_u_0 *)pTVar1;
      uVar18 = (**(code **)(this->_padding_ + 0xc40))(this,ppuVar25,pTVar1);
      if (local_258 != 0) {
        auVar41._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar41._8_4_ = (uint)this->_padding_ & _UNK_15061cc88;
        auVar41._12_4_ = *(uint *)((longlong)&this->_padding_ + 4) & _UNK_15061cc8c;
        lVar28 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                  (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) & _UNK_15061cc8c,
                                   (uint)this->_padding_ & _UNK_15061cc88));
        auVar47._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar41._8_8_);
        auVar47._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar41._0_8_);
        uVar24 = movmskpd((int)ppuVar25,auVar47);
        auVar32._8_4_ = (int)lVar28;
        auVar32._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              );
        auVar32._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        iVar19 = movmskpd(uVar18,auVar32);
        if ((uVar24 & 0x3fffffff) == 0 && iVar19 == 0) {
          uVar18 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar63 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar60 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar61 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar62 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar69 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar70 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar71 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar66 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar67 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar56 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar57 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar58 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_1b8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_1b8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_1b8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_1b8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_1b8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_1b8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast
                    ((TTransform<double> *)&this->_padding_,&local_1b8);
          uVar37 = local_1b8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar38 = local_1b8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar39 = local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar40 = local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar54 = local_1b8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar56 = local_1b8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar57 = local_1b8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar58 = local_1b8.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar59 = local_1b8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar60 = local_1b8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar61 = local_1b8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar62 = local_1b8.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar18 = local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar63 = local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar64 = local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar65 = local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar66 = local_1b8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar67 = local_1b8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar68 = local_1b8.Translation.XY.m128d_f64[0]._0_4_;
          uVar69 = local_1b8.Translation.XY.m128d_f64[0]._4_4_;
          uVar70 = local_1b8.Translation.XY.m128d_f64[1]._0_4_;
          uVar71 = local_1b8.Translation.XY.m128d_f64[1]._4_4_;
        }
        dVar45 = (double)CONCAT44(uVar65,uVar64);
        auVar46._4_4_ = uVar63;
        auVar46._0_4_ = uVar18;
        auVar46._8_4_ = uVar64;
        auVar46._12_4_ = uVar65;
        local_270.Data = (FScriptContainerElement *)0x0;
        auVar42._4_4_ = uVar60;
        auVar42._0_4_ = uVar59;
        auVar42._8_4_ = uVar61;
        auVar42._12_4_ = uVar62;
        local_264 = 0;
        dVar9 = (double)param_2[3].DamageTypeClass.Class.field0_0x0 *
                (double)CONCAT44(uVar38,uVar37);
        dVar10 = (double)CONCAT44(uVar40,uVar39) * 0.0;
        dVar11 = (double)CONCAT44(uVar56,uVar54) * (double)(pTVar1->Class).field0_0x0;
        dVar29 = (double)CONCAT44(uVar58,uVar57) * (double)param_2[3]._padding_;
        uVar54 = (undefined4)((ulonglong)dVar29 >> 0x20);
        auVar30._8_4_ = uVar59;
        auVar30._0_8_ = dVar45;
        auVar30._12_4_ = uVar60;
        auVar48._8_4_ = SUB84(dVar29,0);
        auVar48._0_8_ = dVar11;
        auVar48._12_4_ = uVar54;
        auVar12._4_4_ = uVar60;
        auVar12._0_4_ = uVar59;
        auVar12._8_4_ = uVar61;
        auVar12._12_4_ = uVar62;
        auVar47 = blendpd(auVar46,auVar12,2);
        auVar49._0_8_ = auVar48._8_8_ * (double)CONCAT44(uVar63,uVar18) - dVar45 * dVar11;
        auVar49._8_8_ = dVar9 * (double)CONCAT44(uVar65,uVar64) - auVar30._8_8_ * dVar29;
        auVar31._8_4_ = SUB84(dVar29,0);
        auVar31._0_8_ = dVar11;
        auVar31._12_4_ = uVar54;
        auVar51._8_4_ = SUB84(auVar49._8_8_,0);
        auVar51._0_8_ = auVar49._0_8_;
        auVar51._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = dVar9;
        auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar32 = blendpd(auVar31,auVar8,2);
        auVar33._0_8_ = auVar32._0_8_ * (double)CONCAT44(uVar60,uVar59) - auVar47._0_8_ * dVar9;
        auVar33._8_8_ = auVar32._8_8_ * (double)CONCAT44(uVar62,uVar61) - auVar47._8_8_ * dVar10;
        auVar32 = blendpd(auVar49,auVar33,2);
        auVar52._0_8_ = auVar51._8_8_ + auVar51._8_8_;
        auVar52._8_8_ = auVar33._0_8_ + auVar33._0_8_;
        auVar50._0_8_ = auVar32._0_8_ + auVar32._0_8_;
        auVar50._8_8_ = auVar32._8_8_ + auVar32._8_8_;
        uVar54 = (undefined4)((ulonglong)auVar52._8_8_ >> 0x20);
        auVar34._8_4_ = SUB84(auVar52._8_8_,0);
        auVar34._0_8_ = auVar52._0_8_;
        auVar34._12_4_ = uVar54;
        auVar43._8_4_ = SUB84(auVar52._8_8_,0);
        auVar43._0_8_ = auVar52._0_8_;
        auVar43._12_4_ = uVar54;
        auVar44._0_8_ = auVar43._8_8_ * (double)CONCAT44(uVar63,uVar18) - auVar52._0_8_ * dVar45;
        auVar44._8_8_ =
             auVar50._0_8_ * (double)CONCAT44(uVar65,uVar64) -
             auVar34._8_8_ * (double)CONCAT44(uVar60,uVar59);
        auVar32 = blendpd(auVar52,auVar50,2);
        auVar35._8_4_ = SUB84(auVar44._8_8_,0);
        auVar35._0_8_ = auVar44._0_8_;
        auVar35._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
        dVar10 = (double)this->_padding_;
        lStack_100 = this->_padding_;
        auVar53._0_8_ =
             auVar32._0_8_ * (double)CONCAT44(uVar60,uVar59) - auVar50._0_8_ * auVar47._0_8_;
        auVar53._8_8_ =
             auVar32._8_8_ * (double)CONCAT44(uVar62,uVar61) - auVar50._8_8_ * auVar47._8_8_;
        auVar32 = blendpd(auVar44,auVar53,2);
        local_1d0 = auVar35._8_8_ + auVar52._0_8_ * auVar42._8_8_ + dVar11 +
                    (double)CONCAT44(uVar69,uVar68);
        dStack_1c8 = auVar53._0_8_ + auVar52._8_8_ * (double)CONCAT44(uVar62,uVar61) + dVar29 +
                     (double)CONCAT44(uVar71,uVar70);
        local_1c0 = auVar32._0_8_ + auVar50._0_8_ * auVar42._8_8_ + dVar9 +
                    (double)CONCAT44(uVar67,uVar66);
        local_f8 = this->_padding_;
        local_108 = dVar10;
        if ((int)local_258 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_258);
        }
        local_268 = 0;
        if (local_258 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_258,&local_270,0,&local_264);
        }
        uVar24 = local_258;
        puVar2 = local_260 + (int)local_258;
        puVar26 = local_260;
        while( true ) {
          if (local_258 != uVar24) {
            local_278[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_278);
          }
          _Src_00 = local_260;
          if (puVar26 == puVar2) break;
          uVar5 = *puVar26;
          uVar20 = 0;
          if ((int)uVar5 < (int)this->_padding_) {
            uVar20 = ~uVar5 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar28 = this->_padding_;
          lVar23 = (longlong)(int)uVar5 * 0x80;
          dVar11 = *(double *)(lVar23 + 0x68 + lVar28) - dStack_1c8;
          dVar29 = *(double *)(lVar23 + 0x70 + lVar28) - local_1c0;
          dVar9 = *(double *)(lVar23 + 0x60 + lVar28) - local_1d0;
          auVar36._0_8_ = dVar29 * dVar29;
          auVar36._8_8_ = 0;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = dVar11 * dVar11 + dVar9 * dVar9 + auVar36._0_8_;
          auVar32 = sqrtpd(auVar36,auVar7);
          local_274 = FRadialDamageParams::GetDamageScale
                                ((FRadialDamageParams *)(param_2 + 1),
                                 (float)(auVar32._0_8_ * dVar10));
          if (((local_270.Data <= (FScriptContainerElement *)&local_274) &&
              ((FScriptContainerElement *)&local_274 < local_270.Data + (longlong)local_264 * 4)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_268 == local_264) {
            local_268 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_270,&local_264);
          }
          puVar26 = puVar26 + 1;
          *(float *)(local_270.Data + (longlong)local_268 * 4) = local_274;
          local_268 = local_268 + 1;
        }
        TVar13 = *local_1e8;
        TVar14 = local_1e8[1];
        TVar4 = local_1e8[2];
        local_248.Data = (FScriptContainerElement *)0x0;
        local_23c = 0;
        local_238.Data = (FScriptContainerElement *)0x0;
        local_230 = 0;
        iVar19 = 0;
        if (local_258 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_258,0,&local_248,local_258,&local_23c);
          memcpy(local_248.Data,_Src_00,(longlong)(int)local_258 << 2);
          iVar19 = local_230._4_4_;
        }
        iVar15 = local_268;
        _Src.Data = local_270.Data;
        lVar28 = (longlong)local_268;
        local_230 = CONCAT44(local_230._4_4_,local_268);
        if ((local_268 == 0) && (iVar19 == 0)) {
          local_230 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_268,iVar19,&local_238,local_268,(int *)((longlong)&local_230 + 4));
          if (iVar15 != 0) {
            memcpy(local_238.Data,_Src.Data,lVar28 << 2);
          }
        }
        local_228 = local_1e0;
        local_1f8 = local_1d8;
        local_220 = TVar13;
        TStack_218 = TVar14;
        local_210 = TVar4;
        local_208 = fVar55;
        local_200 = TVar27;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnInstanceTakeRadialDamage,&local_248);
        if (local_238.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data);
        }
        if (local_248.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data);
        }
        if (local_270.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data);
        }
      }
      if (local_260 != (uint *)0x0) {
        FMemory::Free(local_260);
      }
    }
  }
  else {
    local_158 = *(int *)&param_2[0xd].DamageTypeClass.Class.field0_0x0;
    if ((-1 < local_158) && (local_158 < (int)this->_padding_)) {
      local_148 = param_2[5].DamageTypeClass.Class.field0_0x0;
      lStack_140 = param_2[6]._padding_;
      local_138 = param_2[6].DamageTypeClass.Class.field0_0x0;
      local_130 = param_2[1].DamageTypeClass.Class.field0_0x0;
      lStack_128 = param_2[2]._padding_;
      local_120 = param_2[2].DamageTypeClass.Class.field0_0x0;
      local_110 = param_4;
      local_154 = param_1;
      local_150 = param_3;
      local_118 = TVar27;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnInstanceTakePointDamage,&local_158);
    }
  }
  return;
}

// StaticRegisterNativesUFoliageInstancedStaticMeshComponent @ 145eecfe0

void __cdecl
UFoliageInstancedStaticMeshComponent::StaticRegisterNativesUFoliageInstancedStaticMeshComponent
          (void)

{
  return;
}

